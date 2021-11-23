//
//  NSDate+Ex.h
//  iVMS4500
//
//  Created by wuyang on 12-7-8.
//  Copyright (c) 2012年 Hangzhou Hikvision Digital Tech. Co.,Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSDate (Ex)

+ (NSDate *)dateWithYear:(NSInteger)year month:(NSInteger)month day:(NSInteger)day 
                    hour:(NSInteger)hour minute:(NSInteger)minute second:(NSInteger)second;

+ (NSDate *)dateWithCalendar:(NSCalendar *)calendar
                        year:(NSInteger)year month:(NSInteger)month day:(NSInteger)day
                        hour:(NSInteger)hour minute:(NSInteger)minute second:(NSInteger)second;

- (void)getYear:(NSInteger *)year month:(NSInteger *)month day:(NSInteger *)day 
           hour:(NSInteger *)hour minute:(NSInteger *)minute second:(NSInteger *)second;

- (void)getYear:(NSInteger *)year month:(NSInteger *)month day:(NSInteger *)day
           hour:(NSInteger *)hour minute:(NSInteger *)minute second:(NSInteger *)second
   withCalendar:(NSCalendar *)calendar;

// 获取格式化的字符串，如 @"yyyy-MM-dd HH:mm:ss"
- (NSString *)stringWithFormat:(NSString *)format;

- (NSString *)stringSecondTimeInterval;

// 获取@"HH:mm:ss:SSS"格式化的字符串，
- (NSString *)stringWithFormatHHmmssSSS;

+ (NSString *)stringFormatHHmmssSSSTimeIntervalSince1970:(NSTimeInterval)timeInterval;

+ (NSString *)stringHHmmssSSSNowTime;
@end


@interface NSDate (YSDate)

/**
 *  获取直播分享的开始时间格式化字符串
 *
 *  @return 格式化后的字符串
 */
- (NSString *)getDateInfo;

@end