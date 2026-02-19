#!/bin/bash
#
# sheepshaver.sh - Mouse automation and screenshots for SheepShaver (Mac OS 9 emulator)
#
# Usage:
#   ./sheepshaver.sh screenshot              # capture SheepShaver window to /tmp/sheepshaver_TIMESTAMP.png
#   ./sheepshaver.sh click X Y               # click at (X,Y) relative to SheepShaver window content
#   ./sheepshaver.sh doubleclick X Y          # double-click at (X,Y) relative to SheepShaver window content
#   ./sheepshaver.sh key KEYCODE             # send a keystroke to SheepShaver (e.g. return, escape, a, b)
#   ./sheepshaver.sh wait SECONDS            # wait N seconds
#   ./sheepshaver.sh drag X1 Y1 X2 Y2       # drag from (X1,Y1) to (X2,Y2)
#

set -euo pipefail

SHEEPSHAVER_PROCESS="SheepShaver"

# ---------------------------------------------------------------------------
# Helpers
# ---------------------------------------------------------------------------

die() {
    echo "ERROR: $*" >&2
    exit 1
}

# Check that SheepShaver is running
check_running() {
    if ! pgrep -xq "$SHEEPSHAVER_PROCESS"; then
        die "SheepShaver is not running."
    fi
}

# Bring SheepShaver to the front
activate_sheepshaver() {
    osascript -e 'tell application "System Events" to tell process "SheepShaver" to set frontmost to true' 2>/dev/null \
        || die "Could not activate SheepShaver."
    sleep 0.3
}

# Get the CGWindowID for the SheepShaver window (needed by screencapture -l)
get_window_id() {
    local wid
    wid=$(swift -e '
import CoreGraphics
let windows = CGWindowListCopyWindowInfo(.optionOnScreenOnly, kCGNullWindowID) as! [[String: Any]]
for w in windows {
    if let owner = w["kCGWindowOwnerName"] as? String, owner == "SheepShaver",
       let layer = w["kCGWindowLayer"] as? Int, layer == 0 {
        print(w["kCGWindowNumber"] as! Int)
        break
    }
}
' 2>/dev/null)
    if [[ -z "$wid" ]]; then
        die "Could not determine SheepShaver window ID. Is the window visible?"
    fi
    echo "$wid"
}

# Get the SheepShaver window position and size: "X Y WIDTH HEIGHT"
get_window_bounds() {
    swift -e '
import CoreGraphics
let windows = CGWindowListCopyWindowInfo(.optionOnScreenOnly, kCGNullWindowID) as! [[String: Any]]
for w in windows {
    if let owner = w["kCGWindowOwnerName"] as? String, owner == "SheepShaver",
       let layer = w["kCGWindowLayer"] as? Int, layer == 0,
       let bounds = w["kCGWindowBounds"] as? [String: Any] {
        let x = bounds["X"] as! Int
        let y = bounds["Y"] as! Int
        let width = bounds["Width"] as! Int
        let height = bounds["Height"] as! Int
        print("\(x) \(y) \(width) \(height)")
        break
    }
}
' 2>/dev/null
}

# Click at absolute screen coordinates via global HID event tap.
# SheepShaver receives clicks posted to the global tap but ignores postToPid clicks.
do_click() {
    local abs_x="$1"
    local abs_y="$2"
    local click_type="${3:-single}"   # single or double

    swift -e "
import CoreGraphics
import Foundation

let point = CGPoint(x: Double($abs_x), y: Double($abs_y))

// Move mouse to position
if let move = CGEvent(mouseEventSource: nil, mouseType: .mouseMoved, mouseCursorPosition: point, mouseButton: .left) {
    move.post(tap: .cghidEventTap)
}
Thread.sleep(forTimeInterval: 0.1)

if \"$click_type\" == \"double\" {
    if let d1 = CGEvent(mouseEventSource: nil, mouseType: .leftMouseDown, mouseCursorPosition: point, mouseButton: .left) {
        d1.setIntegerValueField(.mouseEventClickState, value: 1)
        d1.post(tap: .cghidEventTap)
    }
    if let u1 = CGEvent(mouseEventSource: nil, mouseType: .leftMouseUp, mouseCursorPosition: point, mouseButton: .left) {
        u1.setIntegerValueField(.mouseEventClickState, value: 1)
        u1.post(tap: .cghidEventTap)
    }
    Thread.sleep(forTimeInterval: 0.05)
    if let d2 = CGEvent(mouseEventSource: nil, mouseType: .leftMouseDown, mouseCursorPosition: point, mouseButton: .left) {
        d2.setIntegerValueField(.mouseEventClickState, value: 2)
        d2.post(tap: .cghidEventTap)
    }
    if let u2 = CGEvent(mouseEventSource: nil, mouseType: .leftMouseUp, mouseCursorPosition: point, mouseButton: .left) {
        u2.setIntegerValueField(.mouseEventClickState, value: 2)
        u2.post(tap: .cghidEventTap)
    }
} else {
    if let down = CGEvent(mouseEventSource: nil, mouseType: .leftMouseDown, mouseCursorPosition: point, mouseButton: .left) {
        down.post(tap: .cghidEventTap)
    }
    if let up = CGEvent(mouseEventSource: nil, mouseType: .leftMouseUp, mouseCursorPosition: point, mouseButton: .left) {
        up.post(tap: .cghidEventTap)
    }
}
" 2>/dev/null || die "Failed to perform click."
}

# Drag from one point to another
do_drag() {
    local x1="$1" y1="$2" x2="$3" y2="$4"

    swift -e "
import CoreGraphics
import Foundation

let p1 = CGPoint(x: Double($x1), y: Double($y1))
let p2 = CGPoint(x: Double($x2), y: Double($y2))

// Move to start
if let move = CGEvent(mouseEventSource: nil, mouseType: .mouseMoved, mouseCursorPosition: p1, mouseButton: .left) {
    move.post(tap: .cghidEventTap)
}
Thread.sleep(forTimeInterval: 0.05)

// Mouse down at start
if let down = CGEvent(mouseEventSource: nil, mouseType: .leftMouseDown, mouseCursorPosition: p1, mouseButton: .left) {
    down.post(tap: .cghidEventTap)
}
Thread.sleep(forTimeInterval: 0.05)

// Drag to end
if let drag = CGEvent(mouseEventSource: nil, mouseType: .leftMouseDragged, mouseCursorPosition: p2, mouseButton: .left) {
    drag.post(tap: .cghidEventTap)
}
Thread.sleep(forTimeInterval: 0.05)

// Mouse up at end
if let up = CGEvent(mouseEventSource: nil, mouseType: .leftMouseUp, mouseCursorPosition: p2, mouseButton: .left) {
    up.post(tap: .cghidEventTap)
}
" 2>/dev/null || die "Failed to perform drag."
}

# ---------------------------------------------------------------------------
# Commands
# ---------------------------------------------------------------------------

cmd_screenshot() {
    check_running
    activate_sheepshaver

    local bounds
    bounds=$(get_window_bounds)
    if [[ -z "$bounds" ]]; then
        die "Could not get SheepShaver window bounds."
    fi

    local win_x win_y win_w win_h
    read -r win_x win_y win_w win_h <<<"$bounds"

    local timestamp
    timestamp=$(date +%Y%m%d_%H%M%S)
    local outfile="/tmp/sheepshaver_${timestamp}.png"

    screencapture -x -R "${win_x},${win_y},${win_w},${win_h}" "$outfile" 2>/dev/null \
        || die "screencapture failed."

    if [[ ! -f "$outfile" ]]; then
        die "Screenshot file was not created."
    fi

    echo "$outfile"
}

cmd_click() {
    local rel_x="${1:?Usage: $0 click X Y}"
    local rel_y="${2:?Usage: $0 click X Y}"

    check_running
    activate_sheepshaver

    local bounds
    bounds=$(get_window_bounds)
    if [[ -z "$bounds" ]]; then
        die "Could not get SheepShaver window bounds."
    fi

    local win_x win_y win_w win_h
    read -r win_x win_y win_w win_h <<<"$bounds"

    local abs_x=$((win_x + rel_x))
    local abs_y=$((win_y + rel_y))

    if (( rel_x < 0 || rel_y < 0 || rel_x > win_w || rel_y > win_h )); then
        echo "WARNING: coordinates ($rel_x, $rel_y) are outside window bounds (${win_w}x${win_h})" >&2
    fi

    do_click "$abs_x" "$abs_y" "single"
    echo "Clicked at ($rel_x, $rel_y) -> screen ($abs_x, $abs_y)"
}

cmd_doubleclick() {
    local rel_x="${1:?Usage: $0 doubleclick X Y}"
    local rel_y="${2:?Usage: $0 doubleclick X Y}"

    check_running
    activate_sheepshaver

    local bounds
    bounds=$(get_window_bounds)
    if [[ -z "$bounds" ]]; then
        die "Could not get SheepShaver window bounds."
    fi

    local win_x win_y win_w win_h
    read -r win_x win_y win_w win_h <<<"$bounds"

    local abs_x=$((win_x + rel_x))
    local abs_y=$((win_y + rel_y))

    if (( rel_x < 0 || rel_y < 0 || rel_x > win_w || rel_y > win_h )); then
        echo "WARNING: coordinates ($rel_x, $rel_y) are outside window bounds (${win_w}x${win_h})" >&2
    fi

    do_click "$abs_x" "$abs_y" "double"
    echo "Double-clicked at ($rel_x, $rel_y) -> screen ($abs_x, $abs_y)"
}

cmd_drag() {
    local rel_x1="${1:?Usage: $0 drag X1 Y1 X2 Y2}"
    local rel_y1="${2:?Usage: $0 drag X1 Y1 X2 Y2}"
    local rel_x2="${3:?Usage: $0 drag X1 Y1 X2 Y2}"
    local rel_y2="${4:?Usage: $0 drag X1 Y1 X2 Y2}"

    check_running
    activate_sheepshaver

    local bounds
    bounds=$(get_window_bounds)
    if [[ -z "$bounds" ]]; then
        die "Could not get SheepShaver window bounds."
    fi

    local win_x win_y win_w win_h
    read -r win_x win_y win_w win_h <<<"$bounds"

    local abs_x1=$((win_x + rel_x1))
    local abs_y1=$((win_y + rel_y1))
    local abs_x2=$((win_x + rel_x2))
    local abs_y2=$((win_y + rel_y2))

    do_drag "$abs_x1" "$abs_y1" "$abs_x2" "$abs_y2"
    echo "Dragged ($rel_x1,$rel_y1) -> ($rel_x2,$rel_y2)"
}

cmd_key() {
    local keycode="${1:?Usage: $0 key KEYCODE}"

    check_running
    activate_sheepshaver

    # Map key names to Mac virtual key codes
    local vkc=""
    case "$keycode" in
        return|enter)   vkc=36 ;;
        escape|esc)     vkc=53 ;;
        tab)            vkc=48 ;;
        delete|backspace) vkc=51 ;;
        space)          vkc=49 ;;
        up)             vkc=126 ;;
        down)           vkc=125 ;;
        left)           vkc=123 ;;
        right)          vkc=124 ;;
        f1)  vkc=122 ;; f2)  vkc=120 ;; f3)  vkc=99  ;;
        f4)  vkc=118 ;; f5)  vkc=96  ;; f6)  vkc=97  ;;
        f7)  vkc=98  ;; f8)  vkc=100 ;; f9)  vkc=101 ;;
        f10) vkc=109 ;; f11) vkc=103 ;; f12) vkc=111 ;;
        # Single char: map to virtual key code
        a) vkc=0  ;; b) vkc=11 ;; c) vkc=8  ;; d) vkc=2  ;;
        e) vkc=14 ;; f) vkc=3  ;; g) vkc=5  ;; h) vkc=4  ;;
        i) vkc=34 ;; j) vkc=38 ;; k) vkc=40 ;; l) vkc=37 ;;
        m) vkc=46 ;; n) vkc=45 ;; o) vkc=31 ;; p) vkc=35 ;;
        q) vkc=12 ;; r) vkc=15 ;; s) vkc=1  ;; t) vkc=17 ;;
        u) vkc=32 ;; v) vkc=9  ;; w) vkc=13 ;; x) vkc=7  ;;
        y) vkc=16 ;; z) vkc=6  ;;
        [0-9]|[0-9][0-9]|[0-9][0-9][0-9])
            # Raw numeric key code
            vkc="$keycode" ;;
    esac

    if [[ -n "$vkc" ]]; then
        local pid
        pid=$(pgrep -x "$SHEEPSHAVER_PROCESS")
        if [[ -z "$pid" ]]; then
            die "SheepShaver PID not found."
        fi

        swift -e "
import CoreGraphics
import Foundation
let pid = pid_t($pid)
let kc: CGKeyCode = $vkc
if let down = CGEvent(keyboardEventSource: nil, virtualKey: kc, keyDown: true) {
    down.postToPid(pid)
}
Thread.sleep(forTimeInterval: 0.05)
if let up = CGEvent(keyboardEventSource: nil, virtualKey: kc, keyDown: false) {
    up.postToPid(pid)
}
" 2>/dev/null || die "Failed to send key."
    else
        die "Unknown key: $keycode"
    fi

    echo "Sent key: $keycode"
}

cmd_keycombo() {
    local combo="${1:?Usage: $0 keycombo cmd+key or cmd+opt+key}"

    check_running
    activate_sheepshaver

    local pid
    pid=$(pgrep -x "$SHEEPSHAVER_PROCESS")
    if [[ -z "$pid" ]]; then
        die "SheepShaver PID not found."
    fi

    # Parse combo: split on + and determine modifiers and key
    local use_cmd=false use_opt=false use_shift=false use_ctrl=false
    local key_part=""

    IFS='+' read -ra parts <<< "$combo"
    for part in "${parts[@]}"; do
        case "$part" in
            cmd|command) use_cmd=true ;;
            opt|option|alt) use_opt=true ;;
            shift) use_shift=true ;;
            ctrl|control) use_ctrl=true ;;
            *) key_part="$part" ;;
        esac
    done

    if [[ -z "$key_part" ]]; then
        die "No key specified in combo: $combo"
    fi

    # Map key to virtual key code (same mapping as cmd_key)
    local vkc=""
    case "$key_part" in
        return|enter)   vkc=36 ;; escape|esc)     vkc=53 ;;
        tab)            vkc=48 ;; delete|backspace) vkc=51 ;;
        space)          vkc=49 ;;
        up) vkc=126 ;; down) vkc=125 ;; left) vkc=123 ;; right) vkc=124 ;;
        a) vkc=0  ;; b) vkc=11 ;; c) vkc=8  ;; d) vkc=2  ;;
        e) vkc=14 ;; f) vkc=3  ;; g) vkc=5  ;; h) vkc=4  ;;
        i) vkc=34 ;; j) vkc=38 ;; k) vkc=40 ;; l) vkc=37 ;;
        m) vkc=46 ;; n) vkc=45 ;; o) vkc=31 ;; p) vkc=35 ;;
        q) vkc=12 ;; r) vkc=15 ;; s) vkc=1  ;; t) vkc=17 ;;
        u) vkc=32 ;; v) vkc=9  ;; w) vkc=13 ;; x) vkc=7  ;;
        y) vkc=16 ;; z) vkc=6  ;;
        *) die "Unknown key in combo: $key_part" ;;
    esac

    # SheepShaver requires explicit modifier key press/release events
    # (just setting CGEventFlags on the key event doesn't work).
    # Modifier virtual keycodes: Cmd=55, Option=58, Shift=56, Control=59

    # Build modifier lists for press-down and release
    local mod_keys=()
    local flags_expr="CGEventFlags(rawValue: 0)"
    if [[ "$use_cmd" == "true" ]]; then
        mod_keys+=(55)
        flags_expr="$flags_expr.union(.maskCommand)"
    fi
    if [[ "$use_opt" == "true" ]]; then
        mod_keys+=(58)
        flags_expr="$flags_expr.union(.maskAlternate)"
    fi
    if [[ "$use_shift" == "true" ]]; then
        mod_keys+=(56)
        flags_expr="$flags_expr.union(.maskShift)"
    fi
    if [[ "$use_ctrl" == "true" ]]; then
        mod_keys+=(59)
        flags_expr="$flags_expr.union(.maskControl)"
    fi

    # Build Swift array literal for modifier keycodes
    local mod_array="["
    for i in "${!mod_keys[@]}"; do
        if [[ $i -gt 0 ]]; then mod_array+=","; fi
        mod_array+="${mod_keys[$i]}"
    done
    mod_array+="] as [CGKeyCode]"

    swift -e "
import CoreGraphics
import Foundation
let pid = pid_t($pid)
let kc: CGKeyCode = $vkc
let flags: CGEventFlags = $flags_expr
let modKeys = $mod_array

// Press modifier keys down
for mk in modKeys {
    if let down = CGEvent(keyboardEventSource: nil, virtualKey: mk, keyDown: true) {
        down.flags = flags
        down.postToPid(pid)
    }
    Thread.sleep(forTimeInterval: 0.03)
}

// Press the actual key
if let down = CGEvent(keyboardEventSource: nil, virtualKey: kc, keyDown: true) {
    down.flags = flags
    down.postToPid(pid)
}
Thread.sleep(forTimeInterval: 0.05)
if let up = CGEvent(keyboardEventSource: nil, virtualKey: kc, keyDown: false) {
    up.flags = flags
    up.postToPid(pid)
}
Thread.sleep(forTimeInterval: 0.03)

// Release modifier keys
for mk in modKeys.reversed() {
    if let up = CGEvent(keyboardEventSource: nil, virtualKey: mk, keyDown: false) {
        up.postToPid(pid)
    }
    Thread.sleep(forTimeInterval: 0.03)
}
" 2>/dev/null || die "Failed to send key combo."

    echo "Sent key combo: $combo"
}

cmd_focus() {
    check_running
    activate_sheepshaver

    local bounds
    bounds=$(get_window_bounds)
    if [[ -z "$bounds" ]]; then
        die "Could not get SheepShaver window bounds."
    fi

    local win_x win_y win_w win_h
    read -r win_x win_y win_w win_h <<<"$bounds"

    # Click center of window 3 times to capture mouse in SheepShaver
    local cx=$((win_x + win_w / 2))
    local cy=$((win_y + win_h / 2))

    for i in 1 2 3; do
        do_click "$cx" "$cy" "single"
        sleep 0.2
    done
    echo "Focused SheepShaver (clicked center 3 times)"
}

cmd_launch() {
    echo "=== Launching Warlords II in SheepShaver ==="

    check_running
    activate_sheepshaver

    local pid
    pid=$(pgrep -x "$SHEEPSHAVER_PROCESS")
    if [[ -z "$pid" ]]; then
        die "SheepShaver PID not found."
    fi

    # Step 1: Focus SheepShaver
    echo "Step 1: Focus SheepShaver..."
    cmd_focus >/dev/null
    sleep 0.3

    # Step 2: Close all Finder windows (Cmd+W x8 via keycombo)
    echo "Step 2: Close Finder windows..."
    for i in 1 2 3 4 5 6 7 8; do
        cmd_keycombo "cmd+w" >/dev/null 2>&1
        sleep 0.2
    done
    sleep 0.5

    # Step 3: Click Unix desktop icon to select it, then Cmd+O to open
    echo "Step 3: Open Unix drive..."
    cmd_click 975 148 >/dev/null
    sleep 0.3
    cmd_keycombo "cmd+o" >/dev/null 2>&1
    sleep 1.5

    # Step 4-7: Keyboard-only sequence in single Swift script for fast typing.
    # Type 'war' to select Warlords II folder → Cmd+O → type 'war' for app → Cmd+O → Return x2
    echo "Step 4: Navigate and launch..."
    swift -e "
import CoreGraphics
import Foundation

let pid = pid_t($pid)

func sendKey(_ kc: CGKeyCode) {
    if let d = CGEvent(keyboardEventSource: nil, virtualKey: kc, keyDown: true) { d.postToPid(pid) }
    Thread.sleep(forTimeInterval: 0.02)
    if let u = CGEvent(keyboardEventSource: nil, virtualKey: kc, keyDown: false) { u.postToPid(pid) }
}

func sendCmdKey(_ kc: CGKeyCode) {
    if let cd = CGEvent(keyboardEventSource: nil, virtualKey: 55, keyDown: true) {
        cd.flags = .maskCommand; cd.postToPid(pid)
    }
    Thread.sleep(forTimeInterval: 0.03)
    if let d = CGEvent(keyboardEventSource: nil, virtualKey: kc, keyDown: true) {
        d.flags = .maskCommand; d.postToPid(pid)
    }
    Thread.sleep(forTimeInterval: 0.05)
    if let u = CGEvent(keyboardEventSource: nil, virtualKey: kc, keyDown: false) {
        u.flags = .maskCommand; u.postToPid(pid)
    }
    Thread.sleep(forTimeInterval: 0.03)
    if let cu = CGEvent(keyboardEventSource: nil, virtualKey: 55, keyDown: false) {
        cu.postToPid(pid)
    }
}

func typeQuick(_ keyCodes: [CGKeyCode]) {
    for kc in keyCodes {
        sendKey(kc)
        Thread.sleep(forTimeInterval: 0.05)
    }
}

// Type 'war' to select Warlords II folder
typeQuick([13, 0, 15])   // w, a, r
Thread.sleep(forTimeInterval: 0.5)
sendCmdKey(31)            // Cmd+O to open folder
Thread.sleep(forTimeInterval: 1.5)

// Type 'war' to select Warlords II app
typeQuick([13, 0, 15])   // w, a, r
Thread.sleep(forTimeInterval: 0.5)
sendCmdKey(31)            // Cmd+O to launch app
Thread.sleep(forTimeInterval: 3.0)

// Dismiss splash screen
sendKey(36)               // Return
Thread.sleep(forTimeInterval: 1.5)

// Dismiss 256-color dialog
sendKey(36)               // Return
" 2>/dev/null

    sleep 1.5

    # Final screenshot
    echo "Step 5: Verify..."
    local final_shot
    final_shot=$(cmd_screenshot)
    echo "  Screenshot: $final_shot"
    echo "=== Launch complete ==="
}

cmd_wait() {
    local seconds="${1:?Usage: $0 wait SECONDS}"
    echo "Waiting ${seconds} seconds..."
    sleep "$seconds"
    echo "Done."
}

# ---------------------------------------------------------------------------
# Main
# ---------------------------------------------------------------------------

usage() {
    cat <<'USAGE'
Usage: sheepshaver.sh <command> [args...]

Commands:
  screenshot              Capture SheepShaver window to /tmp/sheepshaver_TIMESTAMP.png
  click X Y               Click at (X,Y) relative to SheepShaver window
  doubleclick X Y          Double-click at (X,Y) relative to SheepShaver window
  drag X1 Y1 X2 Y2       Drag from (X1,Y1) to (X2,Y2)
  key KEYCODE             Send keystroke (return, escape, tab, space, up, down, left, right, f1-f12, or any character)
  keycombo COMBO          Send key combo (e.g. cmd+w, cmd+opt+w, cmd+shift+n)
  focus                   Click center of SheepShaver 3 times to capture mouse
  launch                  Automatically navigate Finder and open Warlords II from unix drive
  wait SECONDS            Wait N seconds

Examples:
  ./sheepshaver.sh screenshot
  ./sheepshaver.sh click 400 300
  ./sheepshaver.sh doubleclick 400 300
  ./sheepshaver.sh drag 100 100 400 300
  ./sheepshaver.sh key return
  ./sheepshaver.sh key a
  ./sheepshaver.sh keycombo cmd+opt+w
  ./sheepshaver.sh launch
  ./sheepshaver.sh wait 2
USAGE
}

command="${1:-}"
shift || true

case "$command" in
    screenshot)    cmd_screenshot "$@" ;;
    click)         cmd_click "$@" ;;
    doubleclick)   cmd_doubleclick "$@" ;;
    drag)          cmd_drag "$@" ;;
    key)           cmd_key "$@" ;;
    keycombo)      cmd_keycombo "$@" ;;
    focus)         cmd_focus "$@" ;;
    launch)        cmd_launch "$@" ;;
    wait)          cmd_wait "$@" ;;
    -h|--help|help|"")
        usage
        exit 0
        ;;
    *)
        die "Unknown command: $command. Run '$0 --help' for usage."
        ;;
esac
