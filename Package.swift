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
            url: "https://github.com/Synerise/ios-sdk/releases/download/4.14.10/SyneriseSDK.xcframework.zip",
            checksum: "38e7a070618a0b8b7efcef8b1d9e4379cbca978942bcfc31da543d2cfebdafc8"
        )
    ]
)
