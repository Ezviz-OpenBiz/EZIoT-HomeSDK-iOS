//
//  HIKServiceDataCache.h
//  VideoGo
//
//  Created by wying3344 on 14-2-11.
//
//

#import <Foundation/Foundation.h>
#import "YSConfigInformation.h"

#define HIKREQUEST_SESSIONID     @"sessionId"
#define HIKREQUEST_CLIENTTYPE    @"clientType"
#define HIKREQUEST_OSVERSION     @"osVersion"
#define HIKREQUEST_CLIENTVERSION @"clientVersion"
#define HIKREQUEST_NETTYPE       @"netType"


@interface HIKServiceDataCache : NSObject

//@property (nonatomic, copy) NSString *sessionId;
@property (nonatomic, assign) NSInteger netType;
//@property (nonatomic, copy) NSString *clientVersion;
@property (nonatomic, copy) NSString *httpsServer;
@property (nonatomic, copy) NSString *httpServer;
@property (nonatomic, assign) NSInteger useHttps;
@property (nonatomic, assign) BOOL isChineseServer;
@property (nonatomic, assign) BOOL isChildUser;

@property (nonatomic, copy) NSString *deviceToken;
@property (nonatomic, copy) NSString *voipToken; /**< voip注册用的token */
@property (nonatomic, copy) NSString *httpsPushUrl;
@property (nonatomic, copy) NSString *httpPushUrl;

+ (HIKServiceDataCache *)getInstance;


+ (NSString *)getUserPhoneName;

// 获取当前时间
+ (NSString *)getCurrentTime;

// 获取当前使用的服务器地址 （https、语言）
- (NSString *)getCurrentServer;

// 检查当前服务器是否需要证书验证
- (BOOL)checkCurrentServerVerify;

@end
