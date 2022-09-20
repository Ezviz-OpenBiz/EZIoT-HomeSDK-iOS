//
//  EZIoTDevReportRequest.h
//  EZIoTBluetoothSDK
//
//  Created by yuqian on 2022/3/23.
//

#import <Foundation/Foundation.h>
#import <EZIoTRouter/EZIoTFeatureConfigParam.h>
#import "EZIoTPeripheral.h"

NS_ASSUME_NONNULL_BEGIN

@interface EZIoTDevReportRequest : NSObject

+ (void) devPropertyReport:(EZIoTPeripheral *)peripheral
              featureInfos:(NSArray<EZIoTFeatureConfigParam *> *)featureInfos
         completionHandler:(void(^)(NSDictionary *dataDic, NSError *error))handler;

+ (void) devEventsReport:(EZIoTPeripheral *)peripheral
            featureInfos:(NSArray<EZIoTFeatureConfigParam *> *)featureInfos
       completionHandler:(void(^)(NSDictionary *dataDic, NSError *error))handler;

+ (void) reportDevInfo:(EZIoTPeripheral *)peripheral
            localIndex:(NSUInteger)localIndex
     completionHandler:(void(^)(NSDictionary *dataDic, NSError *error))handler;

@end

NS_ASSUME_NONNULL_END
