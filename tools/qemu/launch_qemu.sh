#!/bin/bash
# Launch QEMU with Mac OS 9 for testing original Warlords II
# Monitor size matches SheepShaver (1024x768)
#
# Usage: ./tools/qemu/launch_qemu.sh
#
# Prerequisites:
#   brew install qemu
#   Disk images in /Applications/MacOS9.sheepvm/
#
# Monitor socket: /tmp/qemu-monitor
#   python3 tools/qemu_cmd.py "info status"
#   python3 tools/qemu_cmd.py "screendump /tmp/qemu_screenshot.ppm"
#
# GDB: tcp::1234 (for debugging)

SHEEPVM="/Applications/MacOS9.sheepvm"
DISK="$SHEEPVM/macos92-qemu.img"
EXCHANGE="$SHEEPVM/exchange-raw.img"

if [ ! -f "$DISK" ]; then
    echo "Error: Disk image not found: $DISK"
    exit 1
fi

if [ ! -f "$EXCHANGE" ]; then
    echo "Warning: Exchange disk not found: $EXCHANGE"
    echo "Launching without exchange disk..."
    EXCHANGE_ARGS=""
else
    EXCHANGE_ARGS="-drive file=$EXCHANGE,format=raw,media=disk"
fi

# Check if already running
if [ -S /tmp/qemu-monitor ]; then
    echo "QEMU monitor socket exists at /tmp/qemu-monitor"
    echo "QEMU may already be running. Kill existing instance first?"
    echo "  pkill -f qemu-system-ppc"
    echo "  rm -f /tmp/qemu-monitor"
    exit 1
fi

echo "Launching QEMU Mac OS 9 (1024x768, same as SheepShaver)..."

qemu-system-ppc \
    -M mac99,via=pmu \
    -m 512 \
    -boot c \
    -g 1024x768x32 \
    -display cocoa,swap-opt-cmd=on \
    -monitor unix:/tmp/qemu-monitor,server,nowait \
    -gdb tcp::1234 \
    -drive file="$DISK",format=raw,media=disk \
    $EXCHANGE_ARGS \
    -device usb-mouse \
    -device usb-kbd \
    &

echo "QEMU PID: $!"
echo "Monitor: /tmp/qemu-monitor"
echo "GDB: localhost:1234"
