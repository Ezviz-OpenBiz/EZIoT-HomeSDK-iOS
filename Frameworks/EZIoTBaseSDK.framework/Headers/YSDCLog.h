//
//  YSDCLogManager.h
//  ___Test
//
//  Created by qiandong on 16/02/2017.
//  Copyright © 2017 hikvision. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NSString * (^YSStringBlock)(void);
static YSStringBlock _logServerBlock = nil;

typedef void(^YSOneArgBlock)(NSString *arg);

@interface YSDCLog : NSObject

//延时上报 - param须带systemName，uid已经底层添加，上层无需添加
+ (void)logDelay:(NSDictionary *)param;

//即时上报 - param须带systemName，uid已经底层添加，上层无需添加
+ (void)logInstant:(NSDictionary *)param;
+ (void)logInstant:(NSDictionary *)param completion:(YSOneArgBlock)completion;

//批量延时上报，这批数据会在同一个http请求中上报。（会存为一条记录，在上报时再分解为多条） - param须带systemName
+ (void)logDelayMultiGrouped:(NSArray<NSDictionary *> *)params;

//批量延时上报 - param须带systemName
+ (void)logDelayMulti:(NSArray<NSDictionary *> *)params;

//设置总开关 - 基于手机终端特征（登录前）
+ (void)setEnableBeforeLogin:(BOOL)phoneEnable;

//设置总开关 - 基于用户帐号特征（登录后），可覆盖手机终端特征的开关。
+ (void)setEnableAfterLogin:(BOOL)userEnable;

//设置粒度开关 - 基于systemName
+ (void)setFilterDict:(NSDictionary *)dict;

//崩溃事件参数
+ (NSMutableDictionary *)appCrashEventParmas;
//卡顿事件参数
+ (NSMutableDictionary *)appStuckEventParmas;
//系统事件参数
+ (NSMutableDictionary *)appSystemEventParmas;

//外置lid，用于某特定systemName，串联其他上报途径
+ (NSString *)lifeIdWithSystemName:(NSString *)systemName;

///* 最终未实现，因为appDidFinishLaunch事件无法获得userId（最早也只能在appDidFinishLaunch方法里设置userId)，userId是缓存磁盘的。
//外置dclog参数sessionId、userId的方法
+(void)setUserSessionBlock:(NSString *(^)(void))sessionBlock
               userIdBlock:(NSString *(^)(void))userIdBlock
            logServerBlock:(NSString *(^)(void))logServerBlock
     systemNamePrefixBlock:(NSString *(^)(void))systemNamePrefixBlock
                appIdBlock:(NSString *(^)(void))appIdBlock;

+ (void)observeAppLife;

@end




