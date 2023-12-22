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
            checksum: "4e29d0bbb00909410bdaa360f501cfe5a4a04e72900bb4e1ac7bf0b70c5e7a46"
        )
    ]
)
