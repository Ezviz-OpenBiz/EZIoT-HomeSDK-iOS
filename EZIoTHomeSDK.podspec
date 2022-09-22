Pod::Spec.new do |spec|

  spec.name         = "EZIoTHomeSDK"
  spec.version      = "1.1.2"
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
  spec.frameworks = "OpenAL", "VideoToolbox"
  spec.libraries = "iconv.2.4.0", "c++", "resolv.9"
  spec.requires_arc = true
  spec.resources = 'Frameworks/Resources/com.hri.hpc.mobile.ios.player.metallib'
  spec.pod_target_xcconfig = { 'CLANG_ALLOW_NON_MODULAR_INCLUDES_IN_FRAMEWORK_MODULES' => 'YES', 'ENABLE_BITCODE' => 'NO', 'OTHER_LDFLAGS' => ['-ObjC'], 'VALID_ARCHS[sdk=iphonesimulator*]' => ''}
  spec.user_target_xcconfig = { 'ENABLE_BITCODE' => 'NO' }
  
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
