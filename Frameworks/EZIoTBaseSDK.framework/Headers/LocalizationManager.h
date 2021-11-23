//
//  LocalizationManager.h
//  VideoGo
//
//  Created by zhengwen zhu on 1/20/14.
//
//

#import <Foundation/Foundation.h>

@interface LocalizationManager : NSObject

/**
 *  获取当前系统支持的语言
 *
 *  @return 语言名称集合
 */
+ (NSArray *)appleLanguages;

/**
 *  获取系统当前运行的语言
 *
 *  @return 当前运行的语言名称
 */
+ (NSString *)currentLanguage;

/**
 *  根据系统当前语言， 判断软件是否运行中文版
 *
 *  @return yes：中文版，no：国际版
 */
+ (BOOL)isCurrentlyChinese;

/**
 *  根据系统当前语言，是否是中文语言
 *
 *  @return yes：中文版，no：国际版
 */
+ (BOOL)isLanguageChinese;


@end
