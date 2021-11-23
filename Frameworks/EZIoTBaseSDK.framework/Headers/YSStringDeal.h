//
//  YSStringDeal.h
//  VideoGo
//
//  Created by wying3344 on 15/3/25.
//  Copyright (c) 2015年 hikvision. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface YSStringDeal : NSObject

+ (NSString *)URLEncodedString:(NSString *)string;

+ (NSString *)requestEncodedString:(NSString *)string;

@end
