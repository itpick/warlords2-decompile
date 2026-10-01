// Warlords II self-contained launcher.
//
// Embeds the entire offline bundle (Mac OS 8.6 + Warlords II + SheepShaver) as a
// zip, serves it locally with the COOP/COEP headers SharedArrayBuffer needs, and
// opens the default browser. One self-contained binary — no Python, no install,
// works offline (and in Safari, since the server is always live inside the app).
//
// Lifecycle: when launched from Finder (double-click), the foreground process is
// just a *launcher* — it spawns the HTTP server as a DETACHED background process,
// opens the browser, and exits immediately. This is essential: a plain Go binary
// that blocks in http.Serve as an LSUIElement .app never answers macOS's launch /
// re-open Apple events, so a second double-click shows "can't open … because it is
// not responding". A fast-exiting launcher avoids that entirely; re-launching just
// re-opens the browser against the already-running server.
package main

import (
	"archive/zip"
	"bytes"
	_ "embed"
	"fmt"
	"io"
	"net"
	"net/http"
	"os"
	"os/exec"
	"path"
	"strings"
	"syscall"
	"time"
)

//go:embed bundle.zip
var bundleZip []byte

const port = "8765"
const redirectURL = "/embed?disk=Warlords%20II&machine=Power%20Macintosh%209500&infinite_hd=false&saved_hd=false"

var contentTypes = map[string]string{
	".html":  "text/html; charset=utf-8",
	".js":    "text/javascript",
	".css":   "text/css",
	".json":  "application/json",
	".wasm":  "application/wasm",
	".png":   "image/png",
	".ico":   "image/x-icon",
	".svg":   "image/svg+xml",
	".rom":   "application/octet-stream",
	".chunk": "application/octet-stream",
}

func openBrowser(url string) { _ = exec.Command("open", url).Start() }

// serverUp reports whether our local server is already listening.
func serverUp() bool {
	c, err := net.DialTimeout("tcp", "127.0.0.1:"+port, 300*time.Millisecond)
	if err != nil {
		return false
	}
	_ = c.Close()
	return true
}

// runServer binds the port and serves the embedded bundle forever. This runs in
// the detached background child (WL_SERVE=1), never in the Finder-launched process.
func runServer() {
	zr, err := zip.NewReader(bytes.NewReader(bundleZip), int64(len(bundleZip)))
	if err != nil {
		panic(err)
	}
	files := make(map[string]*zip.File, len(zr.File))
	for _, f := range zr.File {
		files["/"+f.Name] = f
	}

	handler := func(w http.ResponseWriter, r *http.Request) {
		h := w.Header()
		h.Set("Cross-Origin-Opener-Policy", "same-origin")
		h.Set("Cross-Origin-Embedder-Policy", "require-corp")
		h.Set("Cross-Origin-Resource-Policy", "same-origin")
		h.Set("Service-Worker-Allowed", "/")

		p := r.URL.Path
		if p == "/" {
			http.Redirect(w, r, redirectURL, http.StatusFound)
			return
		}
		f, ok := files[p]
		if !ok && !strings.HasPrefix(p, "/Disk/") && !strings.HasPrefix(p, "/assets/") {
			f, ok = files["/index.html"] // SPA fallback for client routes (/embed, /run)
		}
		if !ok {
			http.NotFound(w, r)
			return
		}
		if ct, found := contentTypes[strings.ToLower(path.Ext(f.Name))]; found {
			h.Set("Content-Type", ct)
		}
		rc, err := f.Open()
		if err != nil {
			http.Error(w, err.Error(), http.StatusInternalServerError)
			return
		}
		defer rc.Close()
		_, _ = io.Copy(w, rc)
	}

	ln, err := net.Listen("tcp", "127.0.0.1:"+port)
	if err != nil {
		return // someone else grabbed it; nothing to do
	}
	fmt.Println("Warlords II -> http://localhost:" + port + "/")
	_ = http.Serve(ln, http.HandlerFunc(handler))
}

func main() {
	// Detached server child.
	if os.Getenv("WL_SERVE") == "1" {
		runServer()
		return
	}

	// Launcher (Finder double-click / `open`). Start the server detached if it
	// isn't already up, wait briefly for it, open the browser, then EXIT fast so
	// macOS sees a clean launch and never marks the app "not responding".
	if !serverUp() {
		exe, err := os.Executable()
		if err != nil {
			exe = os.Args[0]
		}
		cmd := exec.Command(exe)
		cmd.Env = append(os.Environ(), "WL_SERVE=1")
		cmd.SysProcAttr = &syscall.SysProcAttr{Setsid: true} // survive launcher exit
		_ = cmd.Start()
		for i := 0; i < 50 && !serverUp(); i++ {
			time.Sleep(100 * time.Millisecond)
		}
	}
	openBrowser("http://localhost:" + port + "/")
}
