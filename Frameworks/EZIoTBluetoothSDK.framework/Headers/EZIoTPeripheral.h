//
//  EZIoTPeripheral.h
//  EZIoTBluetoothSDK
//
//  Created by yuqian on 2021/8/18.
//

#import <UIKit/UIKit.h>
#import <CoreBluetooth/CoreBluetooth.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSUInteger, EZIoTBleAuthLevel) {
    EZIoTBleAuthLevelHigh = 1,
    EZIoTBleAuthLevelMedium = 2,
    EZIoTBleAuthLevelNone = 3
};


/// 蓝牙设备描述类
@interface EZIoTPeripheral : NSObject<NSCopying, NSMutableCopying>

/// 系统 CBPeripheral 对象
@property (strong, nonatomic) CBPeripheral *peripheral;
/// 设备特征集
@property (strong, nonatomic) NSMutableArray <CBCharacteristic *> * characteristics;

//Base Info
/// 设备名称
@property (copy, nonatomic) NSString *devName;
/// 设备自定义名称
@property (copy, nonatomic) NSString *devCustomName;
/// MCU名称
@property (copy, nonatomic) NSString *mcuDevName;
/// 设备序列号
@property (copy, nonatomic) NSString *devSerial;
/// Company Identifier，萤石设备为0x2B18
@property (copy, nonatomic) NSString *cid;
/// 功能掩码 Bit0-2:协议版本, Bit3-4:BLE版本, Bit5 配网状态(0未配网|1已配网), Bit6-7保留
@property (assign, nonatomic) NSUInteger fmask;
/// 产品ID
@property (copy, nonatomic) NSString *pid;
/// MCU 产品ID
@property (copy, nonatomic) NSString *mcuPid;
/// mac 地址
@property (copy, nonatomic) NSString *macAddr;
/// 设备固件版本
@property (copy, nonatomic) NSString *firmwareVersion;
/// MCU固件版本
@property (copy, nonatomic) NSString *mcuFirmwareVersion;
/// 设备协议版本
@property (copy, nonatomic) NSString *protocalVersion;
/// 设备验证码
@property (copy, nonatomic) NSString *verifyCode;
/// 设备License
@property (copy, nonatomic) NSString *devLicense;
/// 蓝牙信号强度
@property (assign, nonatomic) NSNumber *RSSI;
/// 当前时区 UTC+08:00
@property (copy, nonatomic) NSString *timeZoneStr;
/// 认证等级
@property (assign, nonatomic) EZIoTBleAuthLevel authLevel;

@property (strong, nonatomic) NSData *manufacturerData;

//Capability
/// 设备是否被绑定
@property (assign, nonatomic) BOOL isBinded;
/// 设备是否已经通过双向认证
@property (assign, nonatomic) BOOL isAuth;
/// 设备是否支持双向认证
@property (assign, nonatomic) BOOL isSupportDoubleAuth;
/// 设备是否支持 OTA 升级
@property (assign, nonatomic) BOOL isSupportOTA;
/// 设备是否支持MCU OTA 升级
@property (assign, nonatomic) BOOL isSupportMcuOTA;
/// 设备是否物模型协议控制
@property (assign, nonatomic) BOOL isSupportOTAP;
/// 设备是否支持 WiFi
@property (assign, nonatomic) BOOL isSupportWiFi;
/// 设备是否需要Profile信息
@property (assign, nonatomic) BOOL isNeedProfile;

//Auth Info
@property (copy, nonatomic) NSString *randomKey;
@property (copy, nonatomic) NSString *deviceId;
@property (strong, nonatomic) NSData *sessionKey;

//OTA
@property (strong, nonatomic) NSData *otaData;
@property (assign, nonatomic) NSUInteger otaTrasferVersion;
@property (assign, nonatomic) NSUInteger totalFragmentsNum;
@property (assign, nonatomic) NSUInteger perFragmentSize;
@property (assign, nonatomic) NSUInteger pkgInterval;

//File Transfer
@property (strong, nonatomic) NSData *fileData;
@property (assign, nonatomic) NSUInteger fileTotalFragmentsNum;
@property (assign, nonatomic) NSUInteger filePerFragmentSize;
@property (assign, nonatomic) NSUInteger filePkgInterval;

//Characteristic
- (CBCharacteristic *)getReadCharacteristic;
- (CBCharacteristic *)getWriteCharacteristic;
- (CBCharacteristic *)getWriteNoRespCharacteristic;
- (CBCharacteristic *)getIndicateCharacteristic;
- (CBCharacteristic *)getNotifyCharacteristic;
- (NSUInteger)getNegotiatedMtu;

@end

NS_ASSUME_NONNULL_END
