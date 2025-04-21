Pod::Spec.new do |spec|
  
  spec.name             = "BlueStack-SDK"
  spec.version          = "5.1.4"
  spec.static_framework = true
  spec.summary          = "BlueStack by Azerion provides functionalities for monetizing your mobile application"
  spec.description      = <<-DESC
                       BlueStack by Azerion provides functionalities for monetizing your mobile application: from premium sales with reach media, video and innovative formats, it facilitates inserting native mobile ads as well all standard display formats. BlueStack SDK is a library that allow you to handle the following Ads servers with the easy way :
  Smart-Display-SDK
  Google-Mobile-Ads-SDK
  AmazonPublisherServicesSDK
  OguryAds
  AdColony
   DESC
  spec.homepage         = "https://developers.bluestack.app/"
  spec.license          = 'Commercial'
  spec.author           = { 
                            "Azerion" => "https://www.azerion.com/contact/"
                          }

#  spec.source           = { :http => "https://bitbucket.org/mngcorp/mngads-demo-ios/downloads/BlueStack-SDK-v4.1.3.zip" }
spec.source           = { :git => "https://github.com/azerion/BlueStackSDK.git", :tag => "#{spec.version}" }
  

#  spec.xcconfig        =  { 'LIBRARY_SEARCH_PATHS' => '"$(PODS_ROOT)/../../BlueStack-SDK"' , 'FRAMEWORK_SEARCH_PATHS' => '"$(PODS_ROOT)/../../BlueStack-SDK"' }

  spec.platform = :ios
  spec.swift_version = "5"
  spec.ios.deployment_target  = '13.0'
  spec.resources = 'BlueStackSDK.xcframework/ios-arm64/*/*.{bundle}'

  spec.frameworks = 'CoreGraphics', 'QuartzCore', 'SystemConfiguration', 'MediaPlayer', 'CoreMotion', 'EventKitUI', 'EventKit', 'AdSupport', 'StoreKit', 'CoreLocation', 'Accelerate', 'CoreTelephony', 'MessageUI'



 spec.default_subspec = 'Core'

  ###################################
  #######                     #######
  #######       subspecs      #######
  #######                     #######
  ###################################

  spec.subspec 'Core' do |mng|
    mng.vendored_frameworks = 'BlueStackSDK.xcframework'
  end

  spec.subspec 'MAdvertiseLocation' do |mlo|
    mlo.vendored_frameworks = 'BlueStackLocationAdapter.xcframework'
    mlo.dependency 'MAdvertiseLocation', '3.1.7'
    mlo.dependency 'BlueStack-SDK/Core'
  end

  spec.subspec 'AmazonPublisherServicesSDK' do |amazon|
    amazon.vendored_frameworks = 'BluestackAmazonPublisherServicesAdapter.xcframework'
    amazon.dependency               'BlueStack-SDK/Core'
    amazon.dependency               'AmazonPublisherServicesSDK',  '4.5.5'
  end

  spec.subspec 'In-App-Bidding' do |inApp|
    inApp.dependency           'BlueStackEquativAdapter'
    inApp.dependency            'BlueStack-SDK/AmazonPublisherServicesSDK'
    inApp.dependency            'BlueStack-SDK/Core'
  end

  spec.subspec 'Full' do |full|
    full.dependency              'BlueStack-SDK/Core'
    full.dependency              'BlueStackGoogleAdapter'
    full.dependency              'BlueStackEquativAdapter'
    full.dependency              'BlueStack-SDK/In-App-Bidding'
  end

end
