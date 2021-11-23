/**    @file CHikUtility.h
 *    @note HangZhou Hikvision System Technology Co., Ltd. All Right Reserved.
 *    @brief 工具类
 *
 *    @author     Chen Mengyu
 *    @date     2012/05/21
 *
 *    @note 历史记录：
 */

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

#define KEYCHAIN_ACCOUNT        @"com.hikvision.videogo.yskeychain"             //keychain account
#define USERDEFAULT_MACID       @"com.hikvision.videogo.userdefault.macid"      //userDefault macId

static inline void YSBenchmark(void (^_Nullable block)(void), void (^ _Nonnull complete)(double ms)) {
    double begin, end, ms;
    begin = CFAbsoluteTimeGetCurrent();
    block();
    end = CFAbsoluteTimeGetCurrent();
    ms = (end - begin) * 1000.0;
    complete(ms);
}

@interface CHikUtility : NSObject

/**
 获取时间点附近的整点值
 
 @param timeInterval 入参时间缀
 @param early 是否是比入参时间缀早的那个正点，
 @return 整点时间缀
 */
+ (NSTimeInterval)ys_checkHourTimeInterval:(NSTimeInterval)timeInterval early:(BOOL)early;

// 检查URL是否为rtsp://或者ysproto://开始
+ (BOOL)checkUrlIsDemoPlayUrl:(NSString *_Nonnull)url;

// 检查URL是否为rtsp://
+ (BOOL)checkUrlIsRtspDemoPlayUrl:(NSString *)url;

// 创建指定文件夹下路径
+ (BOOL)createFolderAtPath:(NSString *) strFolderPath;

// 获得沙盒中的配置文件路径
+ (NSString *)configFilePath:(NSString *)configName;

// 获得沙盒中的资源文件路径
+ (NSString *)resourcesFilePath:(NSString *)resourcesName;

// 返回当前设备ios版本
+ (float)currenDeviceVersion;

// 返回当前客户端版本
+ (NSString *)currentVersion;

//剩余空间
+ (uint64_t)getFreeDiskspaceInBytes;

// 从字符串转变为时间 date 2012-12-17 08:20:49.0
+ (NSDate *)getDateByString:(NSString *)strTime
             withTimeFormat:(NSString *)strFormat;

+ (NSString *)getDateToString:(NSDate *)dateTime
               withTimeFormat:(NSString *)strFormat;

/**
 *  将秒数时间转换为"yyyy-MM-dd HH:mm:ss"格式字符串, 获得时分秒
 *
 *  @param time 时间
 *
 *  @return 时分秒字符串
 */
+ (NSString *)formatHourStringFromTimeInterval:(NSTimeInterval)time;

/**
 *  将秒数时间转换为"yyyy-MM-dd HH:mm:ss"格式字符串, 获得时分
 *
 *  @param time 时间
 *
 *  @return 时分字符串
 */
+ (NSString *)formatHourStringFromTimeInterval_Min:(NSTimeInterval)time;

/** @fn    getTimeLenString
 *  @brief  获取时间字符串
 *  @return NSString
 */
+ (NSString *)getTimeLenString:(long)lPlaySecondsLen;
+ (NSString *)getTimeLengthStringMMss:(long)lPlaySecondsLen;

// Figaure handle
+ (NSString *)figureLongHandle:(int) iFigure;

// 设置选中颜色
+ (void)customSelectionColor:(UITableViewCell *)cell
     toNumberOfRowsInSection:(NSInteger)numberOfRowsInSection
                       toRow:(NSInteger)row;

// 设置消息cell选中背景颜色
+ (void)messageSelectionColor:(UITableViewCell *)cell
      toNumberOfRowsInSection:(NSInteger)numberOfRowsInSection
                        toRow:(NSInteger)row;
// 获取当前时间
+ (NSString *)getCurrentTime:(NSString *) strFormat;

//根据当前日期生成图片文件夹路径
+ (NSString *)getPathByFileName:(NSString *)strFileName thumbnail:(BOOL)bThumb;

// 获取当前连接的ssid
+ (id)fetchSSIDInfo;

// 处理图片url,长宽缩放缩放
+ (NSString *)scalePicUrl:(NSString *)oriUrl
                  byWidth:(int)width
                andHeight:(int)height;
// 获取文件大小
+ (int)getFileSize:(NSString *)filePath;

// 获取应用程序版本号
+ (NSString *)appVersion;

// 验证邮箱地址是否合法
+ (BOOL)isValidEmail:(NSString *)email;

// 删除指定路径下文件
+ (BOOL)deleteTheItemAtPath:(NSString *)strPath;

// 删除文件夹路径下所有文件夹及内容
+ (BOOL)deleteItemsAndDirsAtPath:(NSString *)folderPath;

// 按需求返回的最小长度 将int十进制数转化成二进制string
+ (NSString *)decimalToBinary:(int)tmp andBackLength:(int)length;

/*
 * 检查磁盘剩余空间
 */
+ (uint64_t)getFreeDiskspace;

/**
 * 强制旋转到竖屏
 */
+ (void)forbitRotatePortraitOrientation;

/**
 * 强制转屏
 */
+ (void)forbitRotatePortraitOrientation:(UIInterfaceOrientation)orientation;

/**
 * 获取运行商类型
 */
+ (int)getIspType:(NSString *)strLocalIp;

/**
 * 获取UUID，设备通用标示符
 */
+ (NSString *)getUUID;
+ (NSString *)getUUIDDecryption;

+ (NSString *)aUUID;

/** @fn    substringFromOristring:rejectSubstring
 *  @brief 截取字符串
 *  @param  oriString -  原始string。
 *  @param  reject -   第一次出现在原始字符串里的字符串。
 *  @return 子字符串
 */
+ (NSString *)substringFromOristring:(NSString *)oriString rejectSubstring:(NSString *)reject;

/** @fn    hashKeyForURL:
 *  @brief 获取去除session的url的hash key
 *  @param  url -  完整的url。
 *  @return hash key
 */
+ (NSString *)hashKeyForURL:(NSURL *)url;

/**
 *  根据常用的越狱软件判断iPhone是否越狱
 *
 *  @return YES iPhone 越狱, 反之没有越狱
 */
+ (BOOL)isJailBreak;

/**
 * 获取utf8字符文本
 **/
+ (NSString *)textFromBase64String:(NSString *)base64;

/**
 函数描述 : base64格式字符串转换为文本数据
 输入参数 : (NSString *)string
 输出参数 : N/A
 返回参数 : (NSData *)
 **/
+ (NSData *)dataWithBase64EncodedString:(NSString *)string;

+ (NSDictionary *)ispCodeNames;

+ (NSString *)stringWithHexBytes:(NSData *)_data;

+ (NSData *)decodeFromHexidecimal:(NSString *)str;

//创建文件夹。 如果已存同名文件，则先删除，再创建；如果已存在同名文件夹，则啥都不做
+ (NSString *)createDirectory:(NSString *)dirName on:(NSSearchPathDirectory) systemDirectory noBackup:(BOOL)noBackup;

//当前可见的TOP VC
+ (UIViewController *)topViewController;

//加密解密
+ (NSString *)encryptTheString:(NSString *)realStr withKey:(NSString *)key iv:(NSString *)iv;
+ (NSString *)decryptTheString:(NSString *)encryptedStr withKey:(NSString *)key iv:(NSString *)iv;

//"#ffffff"和UIColor的互转
+ (NSString *)hexStringFromColor:(UIColor *)color;
+ (UIColor *)colorWithHexString:(NSString *)hexString alpha:(CGFloat)alpha;

//根据颜色生成1个px的图片
+ (UIImage *)imageOnePxWithColor:(UIColor *)color;

// 改变UIColor的Alpha
+ (UIColor *)getNewColorWith:(UIColor *)color newAlpha:(CGFloat)newAlpha;

//获取设备的Mac地址
+ (NSString *)getMacAddress;

+ (NSString*)settingWifiUrlStrBeforeIOS10:(BOOL)is_IPA_REVIEW_ACCOUNT;
+ (NSString*)settingWifiUrlStrAfterIOS10:(BOOL)is_IPA_REVIEW_ACCOUNT;

+ (NSString*)settingBlueUrlStrBeforeIOS10:(BOOL)is_IPA_REVIEW_ACCOUNT;
+ (NSString*)settingBlueUrlStrAfterIOS10:(BOOL)is_IPA_REVIEW_ACCOUNT;
//获得当前的ip地址
+ (nullable NSString*)getCurrentLocalIP;

NS_ASSUME_NONNULL_END

@end
