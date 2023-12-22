// swift-tools-version:5.3
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

let package = Package(
    name: "SyneriseSDK",
    platforms: [
        .iOS(.v9)
    ],
    products: [
        .library(name: "SyneriseSDK", targets: ["SyneriseSDK"])
    ],
    targets: [
        .binaryTarget(
            name: "SyneriseSDK",
            url: "https://github.com/awoczek/ios-sdk/releases/download/4.14.10/SyneriseSDK.xcframework.zip",
            checksum: "37774285d2b2b608fddd2ea263c1d50f3409ae9e493254877e28a3cb8fd559c3"
        )
    ]
)
