//
//  EZIoTOTAUpgadeMgr.h
//  EZIoTBluetoothSDK
//
//  Created by yuqian on 2021/9/9.
//

#import <Foundation/Foundation.h>
#import "EZIoTBLECommonDefine.h"

NS_ASSUME_NONNULL_BEGIN

@class EZIoTPeripheral;

@interface EZIoTOTAUpgadeMgr : NSObject

// 1. 下载升级包
+ (void) downloadOTAPackage:(NSString *)pkgPath
                        pid:(NSString *)pid
                    version:(NSString *)version
                   progress:(EZIoTBleDidRecivedProgressBlock)progress
                 completion:(EZIoTBleDidFinishedDownloadBlock)completion;

// 2. 发送升级固件版本及大小，设备响应最大分包长度
- (void) sendOTAPackageInfo:(EZIoTPeripheral *)p
                        md5:(NSString *)md5
                       size:(NSUInteger)size
                 upgradeMcu:(BOOL)upgradeMcu
                   progress:(EZIoTBleDidRecivedProgressBlock)progress
                 completion:(EZIoTBLEDidFinishedOTAUpdateBlock)completion;

// 3. 分包发送固件包
- (void) sendOTAPackage:(EZIoTPeripheral *)p
             upgradeMcu:(BOOL)upgradeMcu
               progress:(EZIoTBleDidRecivedProgressBlock)progress;

// 4. 固件下发完毕，通知设备开始升级
- (void) sendUpgradeNotificationCmd:(EZIoTPeripheral *)p upgradeMcu:(BOOL)upgradeMcu;

- (void) stopUgrade;

// rsp handle
- (int) otaUgradeRspHanler:(EZIoTPeripheral *)p
                   cmdType:(int)cmdType
                     value:(NSData *)value
                  progress:(EZIoTBleDidRecivedProgressBlock)progress
                completion:(EZIoTBLEDidFinishedOTAUpdateBlock)completion;

@end

NS_ASSUME_NONNULL_END
