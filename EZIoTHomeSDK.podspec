Pod::Spec.new do |spec|

  spec.name         = "EZIoTHomeSDK"
  spec.version      = "1.0.0"
  spec.summary      = "Ezviz IoT Home SDK for iOS."
  spec.description  = <<-DESC
                        The HOME SDK is used to quickly integrate the open capabilities of the Ezviz IoT platform for developers.
                      DESC
  spec.homepage     = "https://github.com/Ezviz-OpenBiz/EZIoT-HomeSDK-iOS"
  spec.author             = "yuqian"
  spec.platform     = :ios, "9.0"
  spec.ios.deployment_target = "9.0"
  spec.source       = { :git => "https://github.com/Ezviz-OpenBiz/EZIoT-HomeSDK-iOS.git", :tag => "#{spec.version}" }
  spec.vendored_frameworks = "Frameworks/**.framework"
  spec.library   = "resolv.9"
  spec.requires_arc = true
  spec.pod_target_xcconfig = {'VALID_ARCHS[sdk=iphonesimulator*]' => ''}

  spec.dependency "AFNetworking", "~> 4.0.1"
  spec.dependency "GTMBase64", "~> 1.0.1"
  spec.dependency "MJExtension", "~> 3.3.0"
  spec.dependency "Reachability", "~> 3.2"
  spec.dependency "ReactiveObjC", "~> 3.1.1"
  spec.dependency "SSKeychain", "~> 1.4.1"
  spec.dependency "KVOController", "~> 1.2.0"
  spec.dependency "YYCache", "~> 1.0.4"
  spec.dependency "FMDB", "~> 2.7.5"
  spec.dependency "Realm", "~> 10.19.0"

end
