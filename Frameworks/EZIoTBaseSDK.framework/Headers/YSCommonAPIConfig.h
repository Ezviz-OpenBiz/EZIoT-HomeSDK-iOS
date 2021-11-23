//
//  YSCommonAPIConfig.h
//  VideoGo
//
//  Created by qiandong on 04/03/2017.
//  Copyright © 2017 hikvision. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface YSCommonAPIConfig : NSObject

//全量监控的API
+ (NSSet *)monitorApis;

//全量监控的有可变量的url的api，需跟[request patternUrl]匹配
+ (NSSet *)monitorPatternApis;

+ (BOOL)bIfCoreAPIWithRelativePath:(NSString *)relativePath requestPatternUrl:(NSString *)requestPatternUrl;

//是否为消息列表url
+ (BOOL)isMessageListUrlHost:(NSString *)relativePath;
@end
