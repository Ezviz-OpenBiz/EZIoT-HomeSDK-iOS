//
//  YSConfigInformation.h
//  VideoGo
//
//  Created by wying3344 on 16/5/27.
//  Copyright © 2016年 hikvision. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef enum : NSUInteger {
    YSWebFileTypePrivacyPolicy = 202,    //隐私协议
    YSWebFileTypeTermsOfService,          //服务条款
    YSWebFileTypeLogoutText = 205         //注销文案
} YSWebFileType;

@interface YSConfigInformation : NSObject

+ (void)loadConfig;

+ (NSString *)getHttpServer;
+ (NSString *)getHttpsServer;
+ (NSString *)getWebHttpsServer; //h5页面

// 重新设置服务器地址
+ (void)setWebHttpsServer:(NSString *)sh;
+ (void)setServerInfo:(NSString *)sh;
/// 获取相关协议url
/// @param fileType  202表示隐私协议；203表示服务条款
+ (NSString *)getPolicyUrlWithFileType:(YSWebFileType)fileType;

// DCLOG地址
+ (NSString *)getDCLogAddress;
+ (void)setDCLogAddress:(NSString *)address;

// 获取bugly appid
+ (NSString *)getBuglyAppId;
//获取flurry appid
+ (NSString *)getFlurryAppId;

+ (NSString *) localLangAndCountryCode;
@end
