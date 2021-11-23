//
//  EZIoTBaseConfigParam.h
//  EZIoTBaseSDK
//
//  Created by yuqian on 2021/6/9.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface EZIoTBaseConfigParam : NSObject

@property (nonatomic, copy) NSString *appId;        //必填，当前APP唯一标识
@property (nonatomic, copy) NSString *packageId;    //可选
@property (nonatomic, copy) NSString *httpsUrl;     //可选，默认采用国内域名(api.eziot.com)，可通过用户模块获取其他区域域名信息
@property (nonatomic, copy) NSString *languageCode; //可选，语言编码，如中国大陆zh_CN、中国台湾zh_TW、美国en_US等，默认采用手机当前语言编码
@property (nonatomic, copy) NSString *areaCode;     //可选，国家(区域)码 如中国大陆CN、中国台湾TW、美国US等，默认采用手机当前国家（区域）编码

@end

NS_ASSUME_NONNULL_END
