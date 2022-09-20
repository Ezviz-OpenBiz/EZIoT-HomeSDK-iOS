//
//  EZIoTCommonRequest.h
//  EZIoTBluetoothSDK
//
//  Created by yuqian on 2021/9/18.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface EZIoTCommonRequest : NSObject

+ (void) bindDeviceWithPid:(NSString *)pid
                   devName:(NSString *)devName
                  deviceId:(NSString *)deviceId
                    random:(NSString *)random
                   groupId:(NSString *)groupId
         completionHandler:(void(^)(NSDictionary *dataDic, NSError *error))handler;

+ (void)getDevLiteProfile:(NSString *)deviceSerial
        completionHandler:(void(^)(NSDictionary *dataDic, NSError *error))handler;

+ (void)getPlatfomUTCTime:(void(^)(NSDictionary *dataDic, NSError *error))handler;

@end

NS_ASSUME_NONNULL_END
