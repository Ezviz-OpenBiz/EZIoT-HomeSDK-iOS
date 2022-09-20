//
//  EZIoTBluetoothGlobalSetting.h
//  EZIoTBluetoothSDK
//
//  Created by yuqian on 2021/8/20.
//

#import <Foundation/Foundation.h>
#import "EZIoTBLEInitConfigParam.h"

NS_ASSUME_NONNULL_BEGIN

@interface EZIoTBluetoothGlobalSetting : NSObject

+ (void) initSDKWithParam:(EZIoTBLEInitConfigParam *)param;
+ (void) initSDKWithParam:(EZIoTBLEInitConfigParam *)param paramChangeBlock:(EZIoTBLEInitConfigParam *(^)(void))paramChangeBlock;
+ (void) updateSDKWithParam:(EZIoTBLEInitConfigParam *)param;

#pragma mark - Util & Debug
+ (NSString *) getVersion;

+ (void)setDebugOn:(BOOL)on;
+ (void)setLogCallBack:(void(^)(NSString *log))callback;

@end

NS_ASSUME_NONNULL_END
