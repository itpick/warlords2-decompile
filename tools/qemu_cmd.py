#!/usr/bin/env python3
"""Send a command to QEMU monitor and print the response."""
import socket, sys, time, re

def qemu_cmd(cmd, timeout=3):
    s = socket.socket(socket.AF_UNIX, socket.SOCK_STREAM)
    s.connect('/tmp/qemu-monitor')
    s.settimeout(timeout)
    # Read greeting
    try: s.recv(4096)
    except: pass
    # Send command
    s.sendall((cmd + '\n').encode())
    time.sleep(0.5)
    # Read response
    resp = b''
    while True:
        try:
            chunk = s.recv(4096)
            if not chunk: break
            resp += chunk
        except socket.timeout:
            break
    s.close()
    # Clean up ANSI/control sequences from line editing
    text = resp.decode('utf-8', errors='replace')
    # Remove escape sequences
    text = re.sub(r'\x1b\[[^a-zA-Z]*[a-zA-Z]', '', text)
    text = re.sub(r'\[K|\[D', '', text)
    # Find the actual output after the echoed command
    lines = text.split('\n')
    result = []
    found_cmd = False
    for line in lines:
        stripped = line.strip()
        if cmd in stripped:
            found_cmd = True
            continue
        if found_cmd and stripped and stripped != '(qemu)':
            result.append(stripped)
    return '\n'.join(result)

if __name__ == '__main__':
    if len(sys.argv) < 2:
        print("Usage: qemu_cmd.py <command>")
        sys.exit(1)
    cmd = ' '.join(sys.argv[1:])
    print(qemu_cmd(cmd))
