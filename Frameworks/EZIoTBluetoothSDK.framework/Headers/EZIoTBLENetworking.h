//
//  EZIoTBLENetworking.h
//  EZIoTNetConfigSDK
//
//  Created by yuqian on 2021/5/12.
//

#import <Foundation/Foundation.h>
@class EZIoTBLEInitConfigParam;

NS_ASSUME_NONNULL_BEGIN

@interface EZIoTBLENetworking : NSObject

/// 必填，IoT平台appId
@property (nonatomic, copy) NSString *appId;

/// 必填，IoT平台登录后获取的鉴权sessionId
@property (nonatomic, copy) NSString *sessionId;

/// 必填，IoT平台登录后获取的鉴权userId
@property (nonatomic, copy) NSString *userId;

/// 可选，为空将使用默认地址，用于设置HTTP请求域名（格式：https://xxx.com）
@property (nonatomic, copy) NSString *httpApiDomain;

@property (nonatomic, copy) EZIoTBLEInitConfigParam *(^getConfigParam)(void);

+ (EZIoTBLENetworking *)getInstance;

+ (NSData *)replaceNoUtf8:(NSData *)data;

- (NSURLSessionDataTask *) setupDataTaskWithUrl:(NSURL *)url
                                         method:(NSString *)method
                                         params:(NSDictionary * _Nullable )params
                                         header:(BOOL)header
                              completionHandler:(void(^)(NSDictionary *dataDic, NSError *error))handler;

- (NSURLSessionDataTask *) setupDataTaskWithUrl:(NSURL *)url
                                         method:(NSString *)method
                                         params:(NSDictionary * _Nullable)params
                                         header:(BOOL)header
                                    extraHeader:(NSDictionary *)extraHeader
                              completionHandler:(void(^)(NSDictionary *dataDic, NSError *error))handler;

@end

NS_ASSUME_NONNULL_END
