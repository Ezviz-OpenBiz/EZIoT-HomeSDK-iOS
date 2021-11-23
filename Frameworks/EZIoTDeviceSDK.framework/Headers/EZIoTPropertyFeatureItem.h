//
//  EZIoTPropertyFeatureItem.h
//  EZIoTDeviceSDK
//
//  Created by yuqian on 2021/6/24.
//

#import "EZIoTFeatureItem.h"

NS_ASSUME_NONNULL_BEGIN

@interface EZIoTPropertyFeatureItem : EZIoTFeatureItem

@property(nonatomic,copy) NSString *timestamp;

@property(nonatomic,copy) NSString *propertyIdentifier;

@end


NS_ASSUME_NONNULL_END
