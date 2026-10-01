#!/bin/bash
# Build the self-contained "Warlords II.app" Go wrapper from the offline bundle.
# Run tools/infinitemac/assemble_offline.py first if the disk changed.
set -e
DIR="$(cd "$(dirname "$0")" && pwd)"
BUNDLE="$DIR/../../../warlords-offline"
cd "$DIR"

echo "1) zipping bundle ($BUNDLE)..."
rm -f bundle.zip
(cd "$BUNDLE" && zip -rq -X "$DIR/bundle.zip" . \
    -x "serve.py" -x "Launch Warlords II.command" -x "DEPLOY.md")
echo "   bundle.zip: $(du -h bundle.zip | cut -f1)"

echo "2) go build (stripped)..."
GOOS=darwin GOARCH=arm64 go build -ldflags="-s -w" -trimpath -o warlords-bin .

echo "3) packaging Warlords II.app..."
APP="Warlords II.app"
rm -rf "$APP"
mkdir -p "$APP/Contents/MacOS"
cp warlords-bin "$APP/Contents/MacOS/Warlords II"
chmod +x "$APP/Contents/MacOS/Warlords II"
# Warlords box-art icon
if [ -f icon.icns ]; then
  mkdir -p "$APP/Contents/Resources"
  cp icon.icns "$APP/Contents/Resources/icon.icns"
fi
cat > "$APP/Contents/Info.plist" <<'PLIST'
<?xml version="1.0" encoding="UTF-8"?>
<!DOCTYPE plist PUBLIC "-//Apple//DTD PLIST 1.0//EN" "http://www.apple.com/DTDs/PropertyList-1.0.dtd">
<plist version="1.0">
<dict>
    <key>CFBundleName</key><string>Warlords II</string>
    <key>CFBundleDisplayName</key><string>Warlords II</string>
    <key>CFBundleIdentifier</key><string>haus.pick.warlords2</string>
    <key>CFBundleVersion</key><string>1.0</string>
    <key>CFBundleShortVersionString</key><string>1.0</string>
    <key>CFBundleExecutable</key><string>Warlords II</string>
    <key>CFBundleIconFile</key><string>icon</string>
    <key>CFBundlePackageType</key><string>APPL</string>
    <key>LSMinimumSystemVersion</key><string>11.0</string>
    <key>LSUIElement</key><true/>
</dict>
</plist>
PLIST

echo "4) ad-hoc code-signing (required for arm64 to run on any Apple Silicon Mac)..."
# Adding Resources/Info.plist after `go build` invalidates the linker's ad-hoc
# signature, so re-sign the whole bundle. Ad-hoc (-s -) is enough to *run* on any
# M1+ Mac; it is NOT notarized, so a Mac that downloads/AirDrops it will quarantine
# it — first launch there needs right-click > Open (or: xattr -dr com.apple.quarantine).
codesign --force --deep --sign - "$APP"
codesign --verify --deep --strict "$APP" && echo "   signature OK"
echo "   arch: $(lipo -archs "$APP/Contents/MacOS/Warlords II" 2>/dev/null || file "$APP/Contents/MacOS/Warlords II")"

echo "done -> $DIR/$APP  ($(du -sh "$APP" | cut -f1))"
