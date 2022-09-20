//
//  EZIoTDoubleAuthRequest.h
//  EZIoTBluetoothSDK
//
//  Created by yuqian on 2021/9/9.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@class EZIoTPeripheral;

@interface EZIoTDoubleAuthRequest : NSObject

+ (void) getRandomKeyWithPid:(NSString *)pid
                     devName:(NSString *)devName
           completionHandler:(void(^)(NSDictionary *dataDic, NSError *error))handler;

+ (void) getServerCipherWithPeripheral:(EZIoTPeripheral *)p
                             devCipher:(NSString *)devCipher
                     completionHandler:(void(^)(NSDictionary *dataDic, NSError *error))handler;

@end

NS_ASSUME_NONNULL_END
