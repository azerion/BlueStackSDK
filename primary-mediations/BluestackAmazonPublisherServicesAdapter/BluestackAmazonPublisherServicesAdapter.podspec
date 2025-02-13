Pod::Spec.new do |spec|
  
    spec.name             = "BluestackAmazonPublisherServicesAdapter"
    spec.version          = "4.4.5.1"
    spec.static_framework = true
    spec.summary          = "Amazon In-App Bidding adapter used for mediation with the BlueStack SDK"
    spec.description      = <<-DESC
                         BlueStack by Azerion provides functionalities for monetizing your mobile application: from premium sales with rich media, video and innovative formats, it facilitates inserting native mobile ads as well all standard display formats. BlueStack SDK is a library that allow you to handle the following Ads servers with the easy way :
    Smart-Display-SDK
    Google-Mobile-Ads-SDK
    AmazonPublisherServicesSDK
    OguryAds
    AdColony
     DESC
    spec.homepage         = "https://developers.bluestack.app/ios/mediation/primairy/supported-networks#amazon-in-app-bidding"
    spec.license          = 'Commercial'
    spec.author           = { 
                              "Azerion" => "https://www.azerion.com/contact/"
                            }
  
    # spec.source           = { :git => "https://github.com/azerion/BlueStackSDK.git", :tag => "#BluestackAmazonPublisherServicesAdapter-v{spec.version}" }
    spec.source = { :path => '.' }
    spec.platform = :ios
    spec.swift_version = "5"
    spec.ios.deployment_target  = '12.2'
    spec.vendored_frameworks = 'BluestackAmazonPublisherServicesAdapter.xcframework'
    
    spec.dependency 'BlueStack-SDK/Core', '>= 4.4.5'
    spec.dependency 'AmazonPublisherServicesSDK',  '4.5.5'
    
  
end
  