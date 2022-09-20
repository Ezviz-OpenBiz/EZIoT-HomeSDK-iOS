//
//  EZIoTBLECenterMgr.h
//  EZIoTBluetoothSDK
//
//  Created by yuqian on 2021/8/18.
//

#import <Foundation/Foundation.h>
#import "EZIoTBLECommonDefine.h"
#import "EZIoTPeripheral.h"
#import "EZIoTFeatureLiteConfigParam.h"
#import "EZIoTExtendAuthInfoParam.h"

NS_ASSUME_NONNULL_BEGIN

@class EZIoTWiFiConfigParam;


/// 手机蓝牙中心模式管理类
@interface EZIoTBLECenterMgr : NSObject


/// 类初始化方法，该类可通过单例使用。通过单例使用时，可共享扫描到的外设信息。
+ (instancetype) sharedInstance;
+ (instancetype) sharedInstanceWithAlert:(BOOL)showPowerAlert;

/// 成员初始化方法，多场景使用时，建议使用该方法。避免
/// @param showPowerAlert 实例化时如果手机蓝牙功能不可用，是否需要系统弹窗
- (instancetype) initWithAlert:(BOOL)showPowerAlert;

// 可选，OTA 升级自定义参数，设置 OTA 升级包传输分片大小
@property (nonatomic, assign) int pkgFragmentSize;

#pragma mark - Peripheral Scan & Connect

/// 注册监听手机蓝牙状态变化
/// @param handler 手机蓝牙状态回调
- (void)registerCenterStateHandler:(EZIoTBLECenterStateDidChangedBlock)handler;

/// 扫描设备，该方法内部会内存缓存扫描结果
/// @param scanBlock 扫描回调，如扫描到设备scanBlock将会回调，可能会回调多次
- (void)scanPeripherals:(EZIoTBLEScanPeripheralsBlock)scanBlock;

/// 扫描设备，该方法内部会内存缓存扫描结果
/// @param allowDuplicate 扫描时是否对外设进行重复过滤。开启可能对电量和应用性能有影响，默认为NO；
/// @param scanBlock 扫描回调，如扫描到设备scanBlock将会回调，可能会回调多次
- (void)scanPeripherals:(BOOL)allowDuplicate
              scanBlock:(EZIoTBLEScanPeripheralsBlock)scanBlock;

/// 扫描设备，该方法内部会内存缓存扫描结果
/// @param scanAllDevice 扫描时是否运行返回周边所有设备，默认为NO，仅返回采用萤石蓝牙协议设备
/// @param allowDuplicate 扫描时是否对外设进行重复过滤。开启可能对电量和应用性能有影响，默认为NO；
/// @param filterBindDevice 扫描时是否过滤已绑定添加的设备，默认为NO；
/// @param scanBlock 扫描回调，如扫描到设备scanBlock将会回调，可能会回调多次
- (void)scanPeripherals:(BOOL)scanAllDevice
         allowDuplicate:(BOOL)allowDuplicate
       filterBindDevice:(BOOL)filterBindDevice
              scanBlock:(EZIoTBLEScanPeripheralsBlock)scanBlock;

/// 停止扫描，并清除扫描缓存。
/// 不需要扫描时建议关闭，节省手机电量
- (void)stopScan;

/// 注册扫描回调。
/// 该方法可以根据传入bizType，注册多个额外的扫描回调。可用于多个需要扫描结果的业务场景。
/// @param bizType 业务类型
/// @param handler 扫描回调
- (void) registerExtraScanResultBizType:(NSString *)bizType handler:(EZIoTBLEScanPeripheralsBlock)handler;

/// 移除扫描回调
/// @param bizType 业务类型，根据该业务类型移除对应的回调
- (void) removeExtraScanResultHandler:(NSString *)bizType;

/// 连接设备
/// @param p EZIoTPeripheral外设
/// @param success 连接成功回调
/// @param failure 连接失败回调
- (void)connectPeripheral:(EZIoTPeripheral *)p
                  success:(EZIoTBLEDidConnectPeripheralBlock)success
                  failure:(EZIoTBLEDidFailToConnectPeripheralBlock)failure;
/// 连接设备
/// @param p 设备Mac地址
/// @param success 连接成功回调
/// @param failure 连接失败回调
- (void)connectPeripheralsWithMac:(NSString *)macAddr
                           success:(EZIoTBLEDidConnectPeripheralBlock)success
                           failure:(EZIoTBLEDidFailToConnectPeripheralBlock)failure;


/// 断开连接指定设备
/// @param p  EZIoTPeripheral外设
/// @param block 成功回调
- (void)stopConnect:(EZIoTPeripheral *)p complement:(EZIoTBLEDidDisconnectPeripheralBlock)block;

/// 断开所有连接的设备
/// @param block 成功回调
- (void)stopAllConnect:(EZIoTBLEDidDisconnectPeripheralBlock)block;

/// 获取当前手机蓝牙状态
- (CBManagerState)getCurrentCentralState;

/// 当前是否处于扫描模式
- (BOOL)isCentralScaning;

/// 获取指定序列号设备
/// @param deviceSerial 设备序列号
- (EZIoTPeripheral *)getPeripheralWithDevSerial:(NSString *)deviceSerial;

/// 获取指定mac地址设备
/// @param mac mac地址
- (EZIoTPeripheral *)getPeripheralWithMac:(NSString *)mac;

/// 获取指定设备的扫描状态
/// @param deviceSerial 设备序列号
- (BOOL)isPeripheralScanned:(NSString *)deviceSerial;

/// 获取指定设备的连接状态
/// @param deviceSerial 设备序列号
- (BOOL)isPeripheralConnected:(NSString *)deviceSerial;

/// 获取指定设备的连接认证状态
/// @param deviceSerial 设备序列号
- (BOOL)isPeripheralConnectedAndAuth:(NSString *)deviceSerial;

/// 获取指定设备是否支持控制
/// @param deviceSerial 设备序列号
- (BOOL)isPeripheralSupportControl:(NSString *)deviceSerial;

#pragma mark - Peripheral Auth & Bind

/// 开始进行双向认证
/// @param identifier peripheral.identifier.UUIDString
/// @param completion 完成回调
- (void)startDoubleAuthentication:(NSString *)identifier
                        completion:(EZIoTBLEDidRecivedDoubleAuthStatusBlock)completion;

/// 连接认证二合一方法
/// @param deviceSerial 设备序列号
/// @param success 成功回调
/// @param failure 失败回调
- (void)connectAuth:(NSString *)deviceSerial
            success:(EZIoTBLEDidConnectPeripheralBlock)success
            failure:(EZIoTBLEDidFailToConnectPeripheralBlock)failure;

- (void)sendExtendAuthInfo:(NSString *)identifier
                      param:(EZIoTExtendAuthInfoParam *)param;

/// 绑定设备
/// @param pid 设备Pid
/// @param devName 设备名称
/// @param deviceId 设备序列号
/// @param random 随机码，双向认证过程中获取，EZIoTPeripheral.randomKey
/// @param groupId 房间Id
/// @param completion 完成回调
- (void)bindDeviceWithPid:(NSString *)pid
                   devName:(NSString *)devName
                  deviceId:(NSString *)deviceId
                    random:(NSString *)random
                   groupId:(NSString *)groupId
                completion:(EZIoTBLEDidBindDeviceBlock)completion;

#pragma mark - Peripheral Base Info

/// 获取设备信息，SDK双向认证前会内部调用一次
/// @param deviceSerial 设备序列号
/// @param completion 完成回调，获取成功后EZIoTPeripheral对象内会填充对应信息
- (void)getDeviceInfo:(NSString *)deviceSerial
            completion:(EZIoTBLEUniversalSetResultBlock)completion;

/// 获取设备MCU信息
/// @param deviceSerial 设备序列号
/// @param completion 完成回调，获取成功后EZIoTPeripheral对象内会填充对应信息
- (void)getDeviceMcuInfo:(NSString *)deviceSerial
              completion:(EZIoTBLEUniversalSetResultBlock)completion;

/// 获取设备能力集
/// @param deviceSerial 设备序列号
/// @param completion 完成回调，获取成功后EZIoTPeripheral对象内会填充对应信息
- (void) getCapability:(NSString *)deviceSerial
            completion:(EZIoTBLEUniversalSetResultBlock)completion;

/// 设备校时
/// @param deviceSerial 设备序列号
/// @param timeInterval 时间戳（since 1970）单位s，一般情况可通过getPlatfomUTCTime接口获取服务器当前的UTC时间
/// @param timezone 时区
/// @param daylightSaving 是否夏令时
/// @param completion 完成回调
- (void)setTime:(NSString *)deviceSerial
           time:(NSTimeInterval)timeInterval
       timezone:(NSTimeZone *)timezone
 daylightSaving:(BOOL)daylightSaving
     completion:(EZIoTBLEUniversalSetResultBlock)completion;

/// 设置设备绑定状态
/// @param deviceSerial 设备序列号
/// @param isBinded 是否绑定
/// @param completion 完成回调
- (void)setBindStatus:(NSString *)deviceSerial
             isBinded:(BOOL)isBinded
           completion:(EZIoTBLEUniversalSetResultBlock)completion;

/// 获取指定设备精简物模型信息
/// @param deviceSerial 设备序列号
/// @param completion 完成回调
- (void)getDevLiteProfile:(NSString *)deviceSerial
               completion:(void(^)(NSDictionary *profile, NSError *error))completion;

/// 获取服务器当前UTC时间戳
/// @param completion 完成回调
- (void)getPlatfomUTCTime:(void(^)(NSTimeInterval timestamp, NSError *error))completion;

#pragma mark - Peripheral WiFi Config

/// 设备WiFi配置
/// @param deviceSerial 设备序列号
/// @param param 配置参数
/// @param completion 完成回调
- (void)wifiConfig:(NSString *)deviceSerial
       configParam:(EZIoTWiFiConfigParam *)param
        completion:(EZIoTBLEWiFiConfigResultBlock)completion;

/// 设备 WiFI 列表查询
/// @param deviceSerial 设备序列号
/// @param completion 完成回调
- (void)getWiFiList:(NSString *)deviceSerial
         completion:(EZIoTBLEUniversalArrayResultBlock)completion;

#pragma mark - Dev Debug & Log

/// 日志设置
/// @param deviceSerial 设备序列号
/// @param isOn 日志记录开关：0 表示关闭，1 表示打开
/// @param logLevel 日志等级调整：低于且等于设定等级的日志，进行记录
/// 0 ASSERT
/// 1 ERROR
/// 2 WARNNING 3 INFO 4 DEBUG 5 VERBOSE
- (void)setDebugLog:(NSString *)deviceSerial
               isOn:(BOOL)isOn
           logLevel:(uint8_t)logLevel
         completion:(EZIoTBLEUniversalSetResultBlock)completion;

/// 日志拉取
/// @param deviceSerial 设备序列号
/// @param logNums 拉取日志条数。0-所有日志。
- (void)fetchDevLog:(NSString *)deviceSerial
            logNums:(NSUInteger)logNums
         completion:(EZIoTBLEFetchDevlogBlock)completion;

#pragma mark - Peripheral Dev Control

/// 获取属性功能点
/// @param deviceSerial 设备序列号
/// @param featureParam 物模型参数
/// @param completion 完成回调
- (void)getPropFeature:(NSString *)deviceSerial
          featureParams:(EZIoTFeatureLiteConfigParam *)featureParam
             completion:(EZIoTBLEDevControlFeatureGetBlock)completion;

/// 设置属性功能点
/// @param deviceSerial 设备序列号
/// @param featureParams 物模型参数
/// @param completion 完成回调
- (void)setPropFeature:(NSString *)deviceSerial
            configParam:(EZIoTFeatureLiteConfigParam *)configParam
             completion:(EZIoTBLEDevControlFeatureSetBlock)completion;

/// 设置操作功能点
/// @param deviceSerial 设备序列号
/// @param featureParams 物模型参数
/// @param completion 完成回调
- (void)setActionFeature:(NSString *)deviceSerial
              configParam:(EZIoTFeatureLiteConfigParam *)configParam
               completion:(EZIoTBLEDevControlFeatureSetBlock)completion;

/// 注册设备功能点回调
/// @param callback 完成回调
- (void)registerFeatureListener:(EZIoTBLEDevControlFeatureReportBlock)callback;

/// 上报设备及其MCU版本信息
/// @param deviceSerial 设备序列号
/// @param localIndex localIndex
/// @param devVersion 设备当前版本，EZIoTPeripheral.firmwareVersion
/// @param mcuVersion 设备MCU当前版本，EZIoTPeripheral.mcuFirmwareVersion
/// @param mcuPid 设备MCU Pid，EZIoTPeripheral.mcuPid
/// @param success 成功回调
/// @param failure 失败回调
- (void) reportDevVersion:(NSString *)deviceSerial
               localIndex:(NSUInteger)localIndex
               devVersion:(NSString *)devVersion
               mcuVersion:(NSString *)mcuVersion
                   mcuPid:(NSString *)mcuPid
                  success:(void(^)(void))success
                  failure:(void(^)(NSError *error))failure;


- (void)sendOperationResult:(NSString *)deviceSerial
                     seqNum:(NSUInteger)seqNum
                    cmdType:(NSUInteger)cmdType
                       code:(NSInteger)code
                        msg:(NSString *)msg;

- (void) trashCompensation:(EZIoTPeripheral *)p
                localIndex:(NSString *)localIndex
                completion:(void(^)(BOOL status, NSError *error))completion;

- (void) trashCompensation:(EZIoTPeripheral *)p
                localIndex:(NSString *)localIndex
               devTimezone:(NSString *)devTimezone
                completion:(void(^)(BOOL status, NSError *error))completion;

#pragma mark - Peripheral OTA Upgrade

/// 开始设备OTA升级
/// @param deviceSerial 设备序列号
/// @param pkgPath 升级包下载地址
/// @param upgradeMcu 是否是MCU升级
/// @param downloadProgress 下载进度回调
/// @param upgradeProgress 升级进度回调
/// @param completion 完成回调
- (void) startOTAUpgrade:(NSString *)deviceSerial
                 pkgPath:(NSString *)pkgPath
              upgradeMcu:(BOOL)upgradeMcu
        downloadProgress:(EZIoTBleDidRecivedProgressBlock)downloadProgress
         upgradeProgress:(EZIoTBleDidRecivedProgressBlock)upgradeProgress
              completion:(EZIoTBLEDidFinishedOTAUpdateBlock)completion;

/// 开始设备OTA升级（无需下载）
/// @param macAddr 设备Mac地址
/// @param pid 设备pid
/// @param version 设备版本
/// @param pgkFilePath 升级包本地URL
/// @param upgradeMcu 是否是MCU升级
/// @param progress 升级进度
/// @param completion 完成回调
- (void)startOTAUpgrade:(NSString *)macAddr
                    pid:(NSString *)pid
                version:(NSString *)version
            pgkFilePath:(NSString *)pgkFilePath
             upgradeMcu:(BOOL)upgradeMcu
               progress:(EZIoTBleDidRecivedProgressBlock)progress
             completion:(EZIoTBLEDidFinishedOTAUpdateBlock)completion;

/// 停止升级
- (void)stopOTAUpgrade;

#pragma mark - File Transfer

/// 文件传输
/// @param deviceSerial 设备序列号
/// @param filePath 文件本地URL，可选，如传入fileContent可不传
/// @param fileContent 文件内容，可选，如传入filePath可不传
/// @param fileType 文件类型 1:profile 2|3:保留
/// @param progress 传输进度
/// @param completion 完成进度
- (void) sendFile:(NSString *)deviceSerial
         filePath:(NSString *)filePath
      fileContent:(NSData *)fileContent
         fileType:(NSUInteger)fileType
         progress:(EZIoTBleDidRecivedProgressBlock)progress
       completion:(EZIoTBLEDidFinishedFileTransferBlock)completion;

@end

NS_ASSUME_NONNULL_END
