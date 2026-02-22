import Cocoa
guard let windows = CGWindowListCopyWindowInfo(.optionOnScreenOnly, kCGNullWindowID) as? [[String: Any]] else { exit(1) }
for w in windows {
    let name = w[kCGWindowName as String] as? String ?? ""
    let owner = w[kCGWindowOwnerName as String] as? String ?? ""
    if owner.lowercased().contains("qemu") {
        if let bounds = w[kCGWindowBounds as String] as? [String: Any] {
            print("QEMU: '\(name)' at (\(bounds["X"] ?? "?"),\(bounds["Y"] ?? "?")) \(bounds["Width"] ?? "?")x\(bounds["Height"] ?? "?")")
        }
    }
}
