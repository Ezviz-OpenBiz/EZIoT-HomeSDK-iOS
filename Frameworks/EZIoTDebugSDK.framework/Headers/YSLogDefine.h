//
//  YSLogDefine.h
//  EZIoTDebugSDK
//
//  Created by stephen on 2021/6/7.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN


static const NSString *YSLogLevelError = @"Error";
static const NSString *YSLogLevelWaring = @"Waring";
static const NSString *YSLogLevelInfo = @"Info";


#define YSLOGDEFINE(path,frmt, ...)  [YSLogDefine log:path debug:YES format:frmt, ##__VA_ARGS__]
#define YSLOGDEFINELEVEL(path,lev,frmt, ...) [YSLogDefine log:path debug:YES  level:lev info:[NSString stringWithFormat:@"方法名:%s 行号:%d",__FUNCTION__,__LINE__] format:frmt, ##__VA_ARGS__]


typedef enum : NSUInteger {
    EZIoTLogModeNone = 0, // 不输出日志
    EZIoTLogModeFileAndLog, // 输出控制台日志和文件日志
    EZIoTLogModeFile, // 输出文件日志
} EZIoTLogMode;

@interface YSLogDefine : NSObject

// logMode
@property (nonatomic, assign, class) EZIoTLogMode logMode;

/// debug  yes 根据 logMode 打印， no 只打印文件
+(void)log:(NSString *)path debug:(BOOL)debugModel format:(NSString *)format,...;

/// debug  yes 根据 logMode 打印， no 只打印文件
+(void)log:(NSString *)path debug:(BOOL)debugModel level:( const NSString *)level info:(NSString *)info format:(NSString *)format,...;

@end

NS_ASSUME_NONNULL_END
