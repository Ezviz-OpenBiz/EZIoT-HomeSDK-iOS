//
//  EZIoTDevControlManager.h
//  EZIoTBluetoothSDK
//
//  Created by yuqian on 2021/12/8.
//

#import <Foundation/Foundation.h>
#import "EZIoTBLECommonDefine.h"
#import "EZIoTFeatureLiteConfigParam.h"

NS_ASSUME_NONNULL_BEGIN

@class EZIoTPeripheral,EZIoTBlePropsFeatureInfo;

@interface EZIoTDevControlManager : NSObject

#pragma mark - OTAP

- (int)setPropFeature:(EZIoTPeripheral *)p
          configParam:(EZIoTFeatureLiteConfigParam *)configParam
           completion:(EZIoTBLEDevControlFeatureSetBlock)completion;

- (NSData *)getPropFeature:(NSArray <EZIoTFeatureLiteConfigParam *> *)configParam;

- (int) setActionFeature:(EZIoTPeripheral *)p
             configParam:(EZIoTFeatureLiteConfigParam *)configParam
              completion:(EZIoTBLEDevControlFeatureSetBlock)completion;

- (NSData *)sendOperationResult:(NSUInteger)seqNum
                        cmdType:(NSUInteger)cmdType
                           code:(NSInteger)code
                            msg:(NSString *)msg;

- (NSData *)getBatchHistoryEventsData;

- (NSData *)getFullDevPropertiesData;

#pragma mark - WiFi Info

- (NSData *)getWiFiConfigData:(NSString *)ssid
                     password:(NSString *)password
                  encryptType:(NSUInteger)encryptType
                  countryCode:(NSString *)countryCode
                          lbs:(NSString *)lbs
                        token:(NSString *)token;

- (NSData *)getWiFiListData;


#pragma mark - Dev Debug & Log

/// 日志设置
/// @param isOn 日志记录开关：0 表示关闭，1 表示打开
/// @param logLevel 日志等级调整：低于且等于设定等级的日志，进行记录
/// 0 ASSERT
/// 1 ERROR
/// 2 WARNNING 3 INFO 4 DEBUG 5 VERBOSE
- (NSData *)setDebugLog:(BOOL)isOn
               logLevel:(uint8_t)logLevel;


/// 日志拉取
/// @param logNums 拉取日志条数。0-所有日志。
- (NSData *)fetchDevLog:(NSUInteger)logNums;

#pragma mark - Handelr

- (void) devControlHanler:(EZIoTPeripheral *)p
                  cmdType:(int)cmdType
                    value:(NSData *)value
             getPropBlock:(EZIoTBLEDevControlFeatureGetBlock)getPropBlock
             setPropBlock:(EZIoTBLEDevControlFeatureSetBlock)setPropBlock
           setActionBlock:(EZIoTBLEDevControlFeatureSetBlock)setActionBlock
              reportBlock:(EZIoTBLEDevControlFeatureReportBlock)reportBlock
          wifiConfigBlock:(EZIoTBLEWiFiConfigResultBlock)wifiConfigBlock
                 wifiList:(EZIoTBLEUniversalArrayResultBlock)wifiListBlock
            setDebugBlock:(EZIoTBLEUniversalSetResultBlock)setDebugBlock
        fetchDebugLogBlock:(EZIoTBLEFetchDevlogBlock)fetchDebugLogBlock;

+ (NSData *)valueEncoder:(EZIoTFeatureLiteConfigParam *)configParam;
+ (id) valueDecoder:(NSData *)value valueType:(int)valueType length:(int)length;

@end

NS_ASSUME_NONNULL_END

