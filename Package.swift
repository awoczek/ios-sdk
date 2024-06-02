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
            url: "https://github.com/awoczek/ios-sdk/releases/download/4.18.0/SyneriseSDK.xcframework.zip",
            checksum: "300a123fa18f40d71c9f9722e5d96e792c70062539c775af0353dbc970d2c9d0"
        )
    ]
)
