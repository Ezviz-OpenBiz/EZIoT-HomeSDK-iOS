//
//  EZIoTDoubleAuthMgr.h
//  EZIoTBluetoothSDK
//
//  Created by yuqian on 2021/9/9.
//

#import <Foundation/Foundation.h>
#import "EZIoTBLECommonDefine.h"

NS_ASSUME_NONNULL_BEGIN

@class EZIoTPeripheral, EZIoTExtendAuthInfoParam, CBPeripheral, CBCharacteristic;


@interface EZIoTDoubleAuthMgr : NSObject

#pragma mark - Dev

- (void) startDoubleAuthentication:(EZIoTPeripheral *)p callback:(EZIoTBLEDidRecivedDoubleAuthStatusBlock)callback;

- (void) sendRandomKeyToDevice:(EZIoTPeripheral *)p
                     randomKey:(NSString *)randomKey;

- (void) sendCipherToDevice:(EZIoTPeripheral *)p
                     cipher:(NSString *)cipher
                   deviceId:(NSString *)deviceId;

- (void) sendExtendAuthInfo:(EZIoTPeripheral *)p
                      param:(EZIoTExtendAuthInfoParam *)param;

#pragma mark - Double Auth rsp handle 

- (int) doubleAuthHanler:(EZIoTPeripheral *)p
                 cmdType:(int)cmdType
                   value:(NSData *)value
                callback:(EZIoTBLEDidRecivedDoubleAuthStatusBlock)callback;

#pragma mark - API

+ (void) getRandomKeyWithPid:(NSString *)pid
                     devName:(NSString *)devName
                     success:(void(^)(NSString *_Nullable randomKey))success
                     failure:(void(^)(NSError *error))failure;

+ (void) getServerCipherWithPeripheral:(EZIoTPeripheral *)p
                             devCipher:(NSString *)devCipher
                               success:(void(^)(NSString *cipher, NSString *deviceId, NSString *sessionKey))success
                               failure:(void(^)(NSError *error))failure;

@end

NS_ASSUME_NONNULL_END
