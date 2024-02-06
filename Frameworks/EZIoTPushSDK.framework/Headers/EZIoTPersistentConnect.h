//
//  EZIoTPersistentConnect.h
//  C_IOTCommonBusi
//
//  Created by zhilshi on 2020/5/20.
//
#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN
@class EZIoTPersistentConnect;

typedef NS_ENUM(NSInteger, EZIoTConnectStatus) {
    EZIoTConnectStatusDefault = 0,
    EZIoTConnectStatusInitSuccess,
    EZIoTConnectStatusInitFailed,
    EZIoTConnectStatusStartSuccess ,
    EZIoTConnectStatusStartFailed,
    EZIoTConnectStatusStopSuccess,
    EZIoTConnectStatusStopFailed,
    EZIoTConnectStatusFiniSuccess,
    EZIoTConnectStatusFiniFailed
};

//回调协议
@protocol EZIoTPersistentConnectProtocol <NSObject>
//操作回调 - 主线程回调，不准确，可以不使用
- (void)pushSDK:(EZIoTPersistentConnect *)connect didReceivedStatus:(EZIoTConnectStatus)status;
//消息回调 - 主线程回调
- (void)pushSDK:(EZIoTPersistentConnect *)connect didReceivedMessage:(NSString*)message;
//日志回调 - 主线程回调
- (void)pushSDK:(EZIoTPersistentConnect *)connect didReceivedLog:(NSString*)log errorCode:(int)errorCode;
//事件回调 - 主线程回调
- (void)pushSDK:(EZIoTPersistentConnect *)connect didReceivedEvent:(int)eventId;
//report
//事件回调 - 主线程回调
- (void)pushSDK:(EZIoTPersistentConnect *)connect didReportDic:(NSDictionary *)dic;
@end


@interface EZIoTPersistentConnect : NSObject

@property(nonatomic,assign) int  eventId;//回调事件记录
@property(nonatomic,weak,readonly)id<EZIoTPersistentConnectProtocol>delegate;//readonly, 请使用EZIoTPersistentConnectProxy 添加代理


/// 获取单例 初始化
+ (instancetype)shareInstance;


/// 初始化并启动长连接
/// @param host 域名地址，注意不带http://或https://前缀
/// @param path 日志路径，需追加/
/// @param appId 应用ID
/// @param userId 用户ID
/// @param featureCode 终端ID
/// @param session 会话ID
- (void)startSDKWithHost:(NSString *)host
                    port:(NSInteger)port
               filePath:(NSString *)path
                  appId:(NSString *)appId
                 userId:(NSString *)userId
            featureCode:(NSString *)featureCode
                session:(NSString *)session;


/// 停止长连接并销毁
- (void)stopSDK;

- (BOOL)isConnected;


+ (void)setDebugOn:(BOOL)on;
+ (void)setLogCallBack:(void(^)(NSString *log))callback;

@end

NS_ASSUME_NONNULL_END
