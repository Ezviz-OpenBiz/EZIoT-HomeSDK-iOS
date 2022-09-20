//
//  EZIoTBaseInfoMgr.h
//  EZIoTBluetoothSDK
//
//  Created by yuqian on 2022/3/14.
//

#import <Foundation/Foundation.h>
#import "EZIoTBLECommonDefine.h"


NS_ASSUME_NONNULL_BEGIN

@class EZIoTPeripheral;

@interface EZIoTBaseInfoMgr : NSObject

+ (NSData *)getProtocalVerData;

+ (NSData *)getDevInfoData;

+ (NSData *)getMcuDevInfoData;

+ (NSData *)getCapabilityData;

+ (NSData *)modifyDevTime:(NSTimeInterval)timestamp
                 timezone:(NSString *)timezone
       daylightSavingTime:(NSString *)daylightSavingTime;

+ (NSData *)setBindStatusData:(uint8_t)isBinded;

+ (int) baseInfoHanler:(EZIoTPeripheral *)p
               cmdType:(int)cmdType
                 value:(NSData *)value
      protocolVerBlock:(EZIoTBLERecivedProtocolVerBlock)protocolVerBlock
          devInfoBlock:(EZIoTBLERecivedDevInfoBlock)devInfoBlock
       devMcuInfoBlock:(EZIoTBLERecivedDevInfoBlock)devMcuInfoBlock
       capabilityBlock:(EZIoTBLERecivedCapabilityBlock)capabilityBlock
         modifyDevTime:(EZIoTBLEUniversalSetResultBlock)modifyDevTime
         setBindStatus:(EZIoTBLEUniversalSetResultBlock)setBindStatus;

@end

NS_ASSUME_NONNULL_END
