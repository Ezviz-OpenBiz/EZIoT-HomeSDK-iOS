//
//  EZIoTNetConfigurator.h
//  EZIoTNetConfigSDK
//
//  Created by yuqian on 2021/5/10.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@class EZIoTNetConfigParam,EZIoTWiFiItemInfo,EZIoTAPDevInfo,EZIoTConfigTokenInfo,EZIoTUserDeviceInfo,EZIoTFastAPConfigQueryParam,EZIoTSearchDeviceInfo;

/* Fast AP配网设备状态 */
typedef NS_ENUM(NSInteger, EZIoTFastAPConfigStatus)
{
    EZIoTFastAPConfigStatusParamError,        // 参数错误
    EZIoTFastAPConfigStatusConnectSuccess,    // 下发成功
    EZIoTFastAPConfigStatusUnknow,            // 未知错误
    EZIoTFastAPConfigStatusPasswordError,     // 密码错误
    EZIoTFastAPConfigStatusNoAPFound,         // 未找到wifi热点
};

typedef NS_ENUM(NSInteger, EZIoTAddDeviceType)
{
    EZIoTAddDeviceNormalDev,   //普通设备
    EZIoTAddDeviceNBDev,       //NB 设备
};

@interface EZIoTAddDeviceConigParam : NSObject

@property(nonatomic, assign) EZIoTAddDeviceType addDevType;

// Normal device （required）
@property(nonatomic, copy) NSString *deviceSerial;
@property(nonatomic, copy) NSString *validateCode;
@property(nonatomic, copy) NSString *familyId;
@property(nonatomic, copy) NSString *groupId;

//NB device （required）
@property(nonatomic, copy) NSString *productId;
@property(nonatomic, copy) NSString *imei;

@end


/// 配网工具类，用于设备入网，功能详见各个接口注释。
/// 目前支持的配网类型：Fast AP
@interface EZIoTNetConfigurator : NSObject

#pragma mark - Initialize

/// 单例方法
+ (instancetype) sharedNetConfigurator;

#pragma mark - Fast AP Config

/// 获取FastAP配网token
/// @param familyId 设置设备添加家庭Id
/// @param groupId 设置设备添加分组Id
/// @param success 成功回调
/// @param failure 失败回调
- (void) getConfigTokenWithFamilyId:(NSString *)familyId
                            groupId:(NSString *)groupId
                            success:(void(^)(EZIoTConfigTokenInfo *tokenInfo))success
                            failure:(void(^)(NSError *error))failure;

/// 获取设备信息（需连接设备热点），如设备周边 WiFi 数量较多，可以尝试多次调用刷新
/// @param success 成功回调
/// @param failure 失败回调
- (void) getAccessDeviceInfoWithSuccess:(void(^)(EZIoTAPDevInfo *devInfo))success
                                failure:(void(^)(NSError *error))failure;


/// 获取设备当前周边WiFi列表，上限20个（需连接设备热点）
/// @param success 成功回调
/// @param failure 失败回调
- (void) getAccessDeviceWifiListWithSuccess:(void(^)(NSArray<EZIoTWiFiItemInfo*> *wifiList))success
                                    failure:(void(^)(NSError *error))failure;

/// 开始Fast AP配网（需连接设备热点），设备上线状态需配合 queryPlatformBindStatusWithDeviceSerial 方法使用
/// @param tokenInfo 配网tokenInfo
/// @param wifiSsid WiFi ssid
/// @param wifiPwd WiFi 密码
/// @param additionalParam 动态配置参数，跟根据设备功能参入动态参数   如：支持区分国家区域，需传入{@"areaCode" : @"CN"}
/// @param completion 回调
- (void) startFastApConfigWithTokenInfo:(EZIoTConfigTokenInfo *)tokenInfo
                                   ssid:(NSString *)wifiSsid
                               password:(NSString *)wifiPwd
                        additionalParam:(NSDictionary *)additionalParam
                             completion:(void(^)(EZIoTFastAPConfigStatus status, NSError *error))completion;

/// 开始Fast AP配网（二合一接口，需连接设备热点），配网成功后轮询设备绑定状态
/// @param configQueryParam 查询配置参数
/// @param success 成功回调
/// @param failure 失败回调
- (void) startFastAPConfigAndQueryBindStatusWithParam:(EZIoTFastAPConfigQueryParam *)configQueryParam
                                              success:(void(^)(EZIoTUserDeviceInfo *userDeviceInfo))success
                                              failure:(void(^)(NSError *error))failure;

/// 停止Fast AP配网，与startFastAPConfigAndQueryBindStatusWithTokenInfo接口配合使用
- (void) stopFastAPConfig;


#pragma mark - Common


/// 查询设备绑定状态
/// @param deviceSerial 设备序列号
/// @param familyId 设置设备添加家庭Id
/// @param success 成功回调 返回userDeviceInfo信息
/// @param failure 失败回调  error.code 错误码： 2000 设备不存在    2003 设备不在线   5001 设备已被别人添加
- (void) queryPlatformBindStatusWithDeviceSerial:(NSString *)deviceSerial
                                        familyId:(NSString *)familyId
                                         success:(void(^)(EZIoTUserDeviceInfo *userDeviceInfo))success
                                         failure:(void(^)(NSError *error))failure;

/// 查询设备信息
/// @param deviceSerial 设备序列号
/// @param success 成功回调
/// @param failure 失败回调
- (void) searchDeviceWithDeviceSerial:(NSString *)deviceSerial
                              success:(void(^)(EZIoTSearchDeviceInfo *searchDeviceInfo))success
                              failure:(void(^)(NSError *error))failure;

/// 添加设备
/// @param param 添加设备参数
/// @param success 成功回调
/// @param failure 失败回调
- (void) addDeviceWithParam:(EZIoTAddDeviceConigParam *)param
                    success:(void(^)(void))success
                    failure:(void(^)(NSError *error))failure;

/// 用于手机连接指定WiFi
/// @param wifiSsid wifiSsid
/// @param wifiPwd wifiPwd
/// @param success 成功回调
/// @param failure 失败回调 NEHotspotConfigurationError 
- (void) startConnectWifiWithSsid:(NSString *)wifiSsid
                          wifiPwd:(NSString *)wifiPwd
                          success:(void(^)(void))success
                          failure:(void(^)(NSError *error))failure;


- (NSArray <NSString*> *) getSupportMultiNetMode;

@end

NS_ASSUME_NONNULL_END
