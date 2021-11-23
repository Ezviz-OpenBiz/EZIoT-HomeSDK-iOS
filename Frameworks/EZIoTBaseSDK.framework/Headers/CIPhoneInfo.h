//
//  CIPhoneInfo.h
//  VideoGo
//
//  Created by wying3344 on 15/3/17.
//  Copyright (c) 2015年 hikvision. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface CIPhoneInfo : NSObject

// 获取iPhone当前运营商信息
+ (NSString *)getDeviceNetType;

// 获取iPhone型号
+ (NSString *)getDeviceModel;

// 获取iPhone当前网络制式
+ (NSString *)getDeviceNetSystem;

@end
