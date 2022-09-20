//
//  EZIoTFeatureConfigParam.h
//  EZIoTRouter
//
//  Created by yuqian on 2022/3/17.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface EZIoTFeatureConfigParam : NSObject

@property(nonatomic,copy) NSString *resourceCategory;
@property(nonatomic,copy) NSString *resourceIdentifier;
@property(nonatomic,copy) NSString *domainIdentifier;
@property(nonatomic,copy) NSString *localIndex;
@property(nonatomic,copy) NSString *identifier;
@property(nonatomic,copy) NSString *deviceSerial;
@property(assign, nonatomic) NSTimeInterval timestamp;
@property(nonatomic,strong) id value;
@property(nonatomic,assign) NSUInteger version;
@property(nonatomic,assign) NSUInteger featureType; //0：Property，1：Event，2：Action

@end

NS_ASSUME_NONNULL_END
