//
//  EZIoTFeatureItem.h
//  EZIoTDeviceSDK
//
//  Created by yuqian on 2021/10/26.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface EZIoTFeatureItem : NSObject

@property(nonatomic,copy) NSString *name;
@property(nonatomic,copy) NSString *type;
@property(nonatomic,copy) NSString *deviceSerial;
@property(nonatomic,copy) NSString *key;
@property(nonatomic,strong) id value;
@property(nonatomic,copy) NSString *localIndex;
@property(nonatomic,copy) NSString *identifier;
@property(nonatomic,strong) NSDictionary *schema;
@property(nonatomic,copy) NSString *access;

@property(nonatomic,copy) NSString *resourceIdentifier;
@property(nonatomic,copy) NSString *domainIdentifier;


@end

NS_ASSUME_NONNULL_END
