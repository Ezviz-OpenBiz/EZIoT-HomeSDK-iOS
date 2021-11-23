//
//  EZIoTFamilyDetailInfo.h
//  EZIoTUserSDK
//
//  Created by yuqian on 2021/6/15.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@class EZIoTFamilyMemberInfo;

/// 家庭详细信息类
@interface EZIoTFamilyDetailInfo : NSObject

/// 家庭名称
@property(nonatomic,copy) NSString *familyName;
/// 家庭Id
@property(nonatomic,copy) NSString *familyId;
///家庭邀请状态，0待加入，1已加入
@property(nonatomic,assign) NSInteger inviteStatus;
/// 是否是创建的家庭
@property(nonatomic,assign) BOOL isOwn;
/// 家庭包含的房间数量
@property(nonatomic,assign) NSInteger roomNum;
/// 家庭成员列表
@property(nonatomic,strong) NSArray <EZIoTFamilyMemberInfo *> *members;

@end

NS_ASSUME_NONNULL_END
