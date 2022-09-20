//
//  EZIoTFeatureLiteConfigParam.h
//  EZIoTBluetoothSDK
//
//  Created by yuqian on 2021/12/22.
//

#import <Foundation/Foundation.h>
#import <EZIoTRouter/EZIoTFeatureConfigParam.h>
#import "EZIoTBLECommonDefine.h"

NS_ASSUME_NONNULL_BEGIN

/// 精简物模型描述类
@interface EZIoTFeatureLiteConfigParam : NSObject

@property(assign, nonatomic) NSUInteger resourceCategory;
@property(assign, nonatomic) NSUInteger localIndex;
@property(assign, nonatomic) NSUInteger domain;
@property(assign, nonatomic) NSUInteger identifier;
@property(assign, nonatomic) NSUInteger version;
@property(copy, nonatomic) NSString *deviceSerial;
@property(assign, nonatomic) EZIoTFeatureValueType valueType;
@property(strong, nonatomic) id value;
@property(assign, nonatomic) NSUInteger index;
@property(assign, nonatomic) NSTimeInterval timestamp;
@property(nonatomic,assign) NSUInteger featureType; //0：Property，1：Event，2：Action

@end

NS_ASSUME_NONNULL_END
