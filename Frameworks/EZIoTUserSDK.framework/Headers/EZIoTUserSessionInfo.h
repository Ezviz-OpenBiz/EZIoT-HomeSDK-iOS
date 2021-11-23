//
//  EZIoTUserSessionInfo.h
//  EZIoTUserSDK
//
//  Created by yuqian on 2021/6/2.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface EZIoTUserSessionInfo : NSObject

@property(nonatomic,copy) NSString *sessionId;           //登录成功后返回的session id，32位长的唯一字符
@property(nonatomic,copy) NSString *rfSessionId;         //用于刷新session的凭证
@property(nonatomic,copy) NSString *userId;              //用户id
@property(nonatomic,copy) NSString *userName;            //用户名
@property(nonatomic,copy) NSString *authType;            //授权类型

@end

NS_ASSUME_NONNULL_END
