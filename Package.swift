// swift-tools-version: 5.7
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

let package = Package(
    name: "BlueStackSDK",
    platforms: [.iOS(.v12)],
    products: [
        // Products define the executables and libraries a package produces, and make them visible to other packages.
        .library(
            name: "BlueStackSDK",
            targets: ["BlueStackSDKWrapper"]),
    ],
    dependencies: [
        // Dependencies declare other packages that this package depends on.
        // .package(url: /* package url */, from: "1.0.0"),
    ],
    targets: [
        // Targets are the basic building blocks of a package. A target can define a module or a test suite.
        // Targets can depend on other targets in this package, and on products in packages this package depends on.
        .target(name: "BlueStackSDKWrapper",
                dependencies: [
                    .target(name: "BlueStackSDK", condition: .when(platforms: [.iOS])),
                    .target(name: "OMSDK_Madvertise", condition: .when(platforms: [.iOS])),
                    //smart
                    .target(name: "BlueStackSASAdapter", condition: .when(platforms: [.iOS])),
                    .target(name: "SASDisplayKit", condition: .when(platforms: [.iOS])),
                    .target(name: "SCSCoreKit", condition: .when(platforms: [.iOS])),
                    //fb
                    .target(name: "BlueStackFacebookAdapter",condition: .when(platforms: [.iOS])),
                    //amazon
                    .target(name: "BluestackAmazonPublisherServicesAdapter", condition: .when(platforms: [.iOS])),
                    .target(name: "DTBiOSSDK", condition: .when(platforms: [.iOS])),
                    //adcolony
                    .target(name: "BlueStackAdColonyAdapter", condition: .when(platforms: [.iOS])),
                    //criteo
                    .target(name: "BluestackCriteoAdapter", condition: .when(platforms: [.iOS])),
                    //location
                    .target(name: "BlueStackLocationAdapter", condition: .when(platforms: [.iOS])),
                    .target(name: "MAdvertiseLocation", condition: .when(platforms: [.iOS])),
                    //ImproveDigital
                    .target(name: "BlueStackImproveAdapter", condition: .when(platforms: [.iOS])),
                    .target(name: "ImproveDigital", condition: .when(platforms: [.iOS])),
                    .target(name: "GoogleInteractiveMediaAds",condition: .when(platforms: [.iOS])),
                    //dfp
                        .target(
                            name: "BlueStackDFPAdapterWrapper",
                            condition: .when(platforms: [.iOS])
                        ),
                    //ogury
                    .target(name: "BlueStackOguryAdapter", condition: .when(platforms: [.iOS])),
                    .target(name: "OMSDK_Ogury", condition: .when(platforms: [.iOS])),
                ],
                path: "BlueStackSDKWrapper",
                linkerSettings: [
                    .linkedFramework("AVFoundation"),
                    .linkedFramework("Accelerate"),
                    .linkedFramework("CFNetwork"),
                    .linkedFramework("CoreGraphics"),
                    .linkedFramework("CoreMedia"),
                    .linkedFramework("CoreTelephony"),
                    .linkedFramework("CoreVideo"),
                    .linkedFramework("MediaPlayer"),
                    .linkedFramework("MessageUI"),
                    .linkedFramework("MobileCoreServices"),
                    .linkedFramework("QuartzCore"),
                    .linkedFramework("Security"),
                    .linkedFramework("StoreKit"),
                    .linkedFramework("SystemConfiguration"),
                    .linkedLibrary("ObjC"),
                    .linkedLibrary("c++"),
                    .linkedLibrary("z"),
                    .linkedLibrary("sqlite3")
                ]
               ),
        .target(name: "BlueStackDFPAdapterWrapper",
                dependencies: [
                    .target(name: "FBLPromises", condition: .when(platforms: [.iOS])),
                    .target(name: "GoogleUtilities", condition: .when(platforms: [.iOS])),
                    .target(name: "nanopb", condition: .when(platforms: [.iOS])),
                     .target(name: "BlueStackDFPAdapter", condition: .when(platforms: [.iOS])),
                ],
                path: "BlueStackDFPAdapterWrapper"
               ),
        //core
        .binaryTarget(name: "BlueStackSDK", path: "BlueStackSDK.xcframework"),
        .binaryTarget(name: "OMSDK_Madvertise", path: "OMSDK_Madvertise.xcframework"),
        //smart
        .binaryTarget(name: "BlueStackSASAdapter", path: "BlueStackSASAdapter.xcframework"),
        .binaryTarget(name: "SASDisplayKit", path: "Dependencies/SASDisplayKit.xcframework"),
        .binaryTarget(name: "SCSCoreKit", path: "Dependencies/SCSCoreKit.xcframework"),
        //adcolony
        .binaryTarget(name: "BlueStackAdColonyAdapter", path: "BlueStackAdColonyAdapter.xcframework"),
        .binaryTarget(name: "AdColony", path: "Dependencies/AdColony.xcframework"),
        //criteo
        .binaryTarget(name: "BluestackCriteoAdapter", path: "BluestackCriteoAdapter.xcframework"),
        //dfp
        .binaryTarget(name: "BlueStackDFPAdapter", path: "BlueStackDFPAdapter.xcframework"),
        .binaryTarget(name: "GoogleMobileAds", path: "Dependencies/GoogleMobileAds.xcframework"),
        //for dfp dependencies
        .binaryTarget(name: "FBLPromises", path: "Dependencies/FBLPromises.xcframework"),
        .binaryTarget(name: "GoogleUtilities", path: "Dependencies/GoogleUtilities.xcframework"),
        .binaryTarget(name: "nanopb", path: "Dependencies/nanopb.xcframework"),
        //fb
        .binaryTarget(name: "BlueStackFacebookAdapter", path: "BlueStackFacebookAdapter.xcframework"),
        .binaryTarget(name: "FBAudienceNetwork", path: "Dependencies/FBAudienceNetwork.xcframework"),
        //location
        .binaryTarget(name: "BlueStackLocationAdapter", path: "BlueStackLocationAdapter.xcframework"),
        .binaryTarget(name: "MAdvertiseLocation", path: "Dependencies/MAdvertiseLocation.xcframework"),
        //ogury
        .binaryTarget(name: "BlueStackOguryAdapter", path: "BlueStackOguryAdapter.xcframework"),
        .binaryTarget(name: "OguryAds", path: "Dependencies/OguryAds.xcframework"),
        .binaryTarget(name: "OguryChoiceManager", path: "Dependencies/OguryChoiceManager.xcframework"),
        .binaryTarget(name: "OMSDK_Ogury", path: "Dependencies/OMSDK_Ogury.xcframework"),
        //amazon
        .binaryTarget(name: "BluestackAmazonPublisherServicesAdapter", path: "BluestackAmazonPublisherServicesAdapter.xcframework"),
        .binaryTarget(name: "DTBiOSSDK", path: "Dependencies/DTBiOSSDK.xcframework"),
       //Improve
        .binaryTarget(name: "BlueStackImproveAdapter", path: "BlueStackImproveAdapter.xcframework"),
        .binaryTarget(name: "ImproveDigital", path: "Dependencies/ImproveDigital.xcframework"),
        .binaryTarget(name: "GoogleInteractiveMediaAds", path: "Dependencies/GoogleInteractiveMediaAds.xcframework")
    ]
)
