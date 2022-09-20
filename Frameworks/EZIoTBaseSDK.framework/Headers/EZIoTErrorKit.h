//
//  EZIoTErrorKit.h
//  EZIoTBaseSDK
//
//  Created by yuqian on 2022/8/16.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

#define EZIOT_ERROR_DOMAIN_COMMON       @"com.eziot.common"
#define EZIOT_ERROR_DOMAIN_DEVICE       @"com.eziot.device"
#define EZIOT_ERROR_DOMAIN_USER         @"com.eziot.user"
#define EZIOT_ERROR_DOMAIN_FAMILIY      @"com.eziot.family"
#define EZIOT_ERROR_DOMAIN_NETCONFIG    @"com.eziot.netconfig"
#define EZIOT_ERROR_DOMAIN_PUSH         @"com.eziot.push"
#define EZIOT_ERROR_DOMAIN_MESSAGE      @"com.eziot.message"
#define EZIOT_ERROR_DOMAIN_GROUP        @"com.eziot.group"
#define EZIOT_ERROR_DOMAIN_BLE          @"com.eziot.ble"
#define EZIOT_ERROR_DOMAIN_IPC          @"com.eziot.ipc"
#define EZIOT_ERROR_DOMAIN_OTHER        @"com.eziot.other"

/// IoT SDK 错误码定义初始偏移
typedef enum : NSUInteger {
    EZIoTCommonErrBase = 100000,
    EZIoTDeviceErrBase = 110000,
    EZIoTUserErrBase = 120000,
    EZIoTFamilyErrBase = 130000,
    EZIoTNetConfigErrBase = 140000,
    EZIoTPushErrBase = 150000,
    EZIoTMessageErrBase = 160000,
    EZIoTGroupErrBase = 170000,
    EZIoTIpcErrBase = 200000,
    EZIoTBleErrBase = 700000,
    EZIoTOtherErrBase = 900000,
} EZIoTErrorCodeBase;

@interface EZIoTErrorKit : NSObject

+ (NSError *) commonError:(NSInteger)code msg:(NSString *)msg;
+ (NSError *) deviceError:(NSInteger)code msg:(NSString *)msg;
+ (NSError *) userError:(NSInteger)code msg:(NSString *)msg;
+ (NSError *) familyError:(NSInteger)code msg:(NSString *)msg;
+ (NSError *) netConfigError:(NSInteger)code msg:(NSString *)msg;
+ (NSError *) pushError:(NSInteger)code msg:(NSString *)msg;
+ (NSError *) messageError:(NSInteger)code msg:(NSString *)msg;
+ (NSError *) groupError:(NSInteger)code msg:(NSString *)msg;
+ (NSError *) bleError:(NSInteger)code msg:(NSString *)msg;
+ (NSError *) ipcError:(NSInteger)code msg:(NSString *)msg;
+ (NSError *) otherError:(NSInteger)code msg:(NSString *)msg;
+ (NSError *) errorWithDomain:(NSString *)domain code:(NSInteger)code msg:(NSString *)msg;

@end

NS_ASSUME_NONNULL_END
