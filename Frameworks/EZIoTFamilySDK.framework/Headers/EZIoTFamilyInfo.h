//
//  EZIoTFamilyInfo.h
//  EZIoTUserSDK
//
//  Created by yuqian on 2021/6/15.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/// 家庭基础信息描述类
@interface EZIoTFamilyInfo : NSObject

/// 家庭Id
@property(nonatomic,copy) NSString *familyId;
/// 创建者
@property(nonatomic,copy) NSString *creator;
/// 家庭名称
@property(nonatomic,copy) NSString *familyName;
/// 家庭中所包含的设备数量
@property(nonatomic,assign) NSInteger deviceNum;
/// 家庭中所包含的房间数量
@property(nonatomic,assign) NSInteger roomNum;

@end

NS_ASSUME_NONNULL_END
