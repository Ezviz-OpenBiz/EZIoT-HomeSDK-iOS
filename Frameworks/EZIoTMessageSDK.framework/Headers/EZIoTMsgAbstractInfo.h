//
//  EZIoTMsgAbstractInfo.h
//  EZIoTMessageSDK
//
//  Created by yuqian on 2021/7/7.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@class EZIoTMsgInfo;

@interface EZIoTMsgAbstractInfo : NSObject
@property (nonatomic, assign) NSInteger noMessageAbility;//是否有此设备
@property (nonatomic, assign) NSInteger timestamp;//时间戳
@property (nonatomic, strong) NSMutableArray *subType;//子类type数组
@property (nonatomic, assign) NSInteger unread;//未读数
@property (nonatomic, strong) EZIoTMsgInfo *topMessage;
@end

NS_ASSUME_NONNULL_END
