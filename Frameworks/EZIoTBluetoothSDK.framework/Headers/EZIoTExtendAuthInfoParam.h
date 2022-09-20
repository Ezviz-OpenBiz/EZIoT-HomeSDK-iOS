//
//  EZIoTExtendAuthInfoParam.h
//  EZIoTBluetoothSDK
//
//  Created by yuqian on 2021/12/29.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface EZIoTExtendAuthInfoParam : NSObject

@property (nonatomic, copy) NSString *groupId;
@property (nonatomic, copy) NSString *groupAddress;
@property (nonatomic, copy) NSString *authKey;
@property (nonatomic, copy) NSString *gatewayMac;

@end

NS_ASSUME_NONNULL_END
