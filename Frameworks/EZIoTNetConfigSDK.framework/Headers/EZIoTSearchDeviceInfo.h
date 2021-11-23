//
//  EZIoTSearchDeviceInfo.h
//  EZIoTNetConfigSDK
//
//  Created by yuqian on 2021/8/4.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface EZIoTSearchDeviceInfo : NSObject
@property(nonatomic,assign) NSInteger   resultCode;
@property(nonatomic,copy)   NSString    *resultDesc;
@property(nonatomic,copy)   NSString    *displayName;
@property(nonatomic,copy)   NSString    *subSerial;
@property(nonatomic,copy)   NSString    *fullSerial;
@property(nonatomic,assign) NSInteger   status;
@property(nonatomic,assign) NSInteger   supportWifi;
@property(nonatomic,copy)   NSString    *releaseVersion;
@property(nonatomic,assign) NSInteger   availableChannelCount;
@property(nonatomic,assign) NSInteger   relatedDeviceCount;
@property(nonatomic,copy)   NSString    *supportExt;

@property(nonatomic,copy)   NSString    *model;
@property(nonatomic,copy)   NSString    *devicePreUrl;
@property(nonatomic,copy)   NSString    *version;//设备当前版本号
@property(nonatomic,copy)   NSString    *deviceCategory;//设备大类
@property(nonatomic,copy)   NSString    *registerUrl;//设备上线域名
@end

NS_ASSUME_NONNULL_END
