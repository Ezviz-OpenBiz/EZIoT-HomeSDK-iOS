//
//  EZIoTFamilyInfoResp.h
//  EZIoTUserSDK
//
//  Created by yuqian on 2021/6/15.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@class EZIoTFamilyInfo;

/// 家庭列表类
@interface EZIoTFamilyInfoResp : NSObject

/// 被邀请加入的家庭列表
@property(nonatomic,strong) NSArray <EZIoTFamilyInfo *> *joinFamilyInfos;
/// 创建的家庭列表
@property(nonatomic,strong) NSArray <EZIoTFamilyInfo *> *ownFamilyInfos;

@end

NS_ASSUME_NONNULL_END
