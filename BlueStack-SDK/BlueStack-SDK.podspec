Pod::Spec.new do |spec|
  
  spec.name             = "BlueStack-SDK"
  spec.version          = "5.1.2"
  spec.static_framework = true
  spec.summary          = "BlueStack by Azerion provides functionalities for monetizing your mobile application"
  spec.description      = <<-DESC
                       BlueStack by Azerion provides functionalities for monetizing your mobile application: from premium sales with rich media, video and innovative formats, it facilitates inserting native mobile ads as well all standard display formats. BlueStack SDK is a library that allow you to handle the following Ads servers with the easy way :
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

  # spec.source           = { :git => "https://github.com/azerion/BlueStackSDK.git", :tag => "#{spec.version}" }
  spec.source = { :path => '.' }

  spec.platform = :ios
  spec.swift_version = "5"
  spec.ios.deployment_target  = '12.2'
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

  spec.subspec 'Google-Mobile-Ads-SDK' do |gma|
    # gma.dependency 'BlueStack-SDK/Core'
    gma.dependency 'BlueStackGMAAdapter', '>= 4.4.9.1', "~> #{spec.version}.0"
  end

  spec.subspec 'Smart-Display-SDK' do |sas|
    sas.dependency 'BlueStackSASAdapter', '>= 4.4.9.1', "~> #{spec.version}.0"
  end

  spec.subspec 'Smart-Display-SDK-Bidding' do |sasb|
    sasb.dependency 'BlueStackSASBiddingAdapter', '>= 4.4.9.1', "~> #{spec.version}.0"
  end
  
  spec.subspec 'MAdvertiseLocation' do |mlo|
    mlo.dependency 'BlueStackLocationAdapter', '>= 4.4.9.1', "~> #{spec.version}.0"
  end

  spec.subspec 'AmazonPublisherServicesSDK' do |amazon|
    amazon.dependency 'BluestackAmazonPublisherServicesAdapter', '>= 4.4.5.1', "~> #{spec.version}.0"
  end

  spec.subspec 'OguryAds' do |og|
    og.dependency 'BlueStackOguryAdapter.xcframework', '>= 4.4.9.1', "~> #{spec.version}.0"
  end

  spec.subspec 'In-App-Bidding' do |inApp|
    inApp.dependency            'BlueStack-SDK/Smart-Display-SDK-Bidding'
    inApp.dependency            'BlueStack-SDK/AmazonPublisherServicesSDK'
    inApp.dependency            'BlueStack-SDK/Core'
  end

  spec.subspec 'Full' do |full|
    full.dependency              'BlueStack-SDK/Core'
    full.dependency              'BlueStack-SDK/Google-Mobile-Ads-SDK'
    full.dependency              'BlueStack-SDK/Smart-Display-SDK'
    full.dependency              'BlueStack-SDK/OguryAds'
    full.dependency              'BlueStack-SDK/In-App-Bidding'
  end

end
