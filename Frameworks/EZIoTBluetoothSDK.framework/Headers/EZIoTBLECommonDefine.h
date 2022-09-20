//
//  EZIoTBLECommonDefine.h
//  EZIoTBluetoothSDK
//
//  Created by yuqian on 2021/9/17.
//
#import <CoreBluetooth/CBManager.h>

#define EZIOT_CID @"2B18"
#define EZIOT_BEACON_CID @"2B19"
#define EZIOT_SERVICE_UUID  [CBUUID UUIDWithString:@"0xFCCC"]
#define EZIOT_READ_CHARACTERISTIC_UUID  [CBUUID UUIDWithString:@"0xFED4"]
#define EZIOT_WRITE_CHARACTERISTIC_UUID  [CBUUID UUIDWithString:@"0xFED5"]
#define EZIOT_INDICATE_CHARACTERISTIC_UUID  [CBUUID UUIDWithString:@"0xFED6"]
#define EZIOT_WRITE_NO_RSP_CHARACTERISTIC_UUID  [CBUUID UUIDWithString:@"0xFED7"]
#define EZIOT_NOTIFY_CHARACTERISTIC_UUID  [CBUUID UUIDWithString:@"0xFED8"]

#define EZIOT_READ_CHARACTERISTIC_UUID_STR               @"FED4"
#define EZIOT_WRITE_CHARACTERISTIC_UUID_STR              @"FED5"
#define EZIOT_INDICATE_CHARACTERISTIC_UUID_STR           @"FED6"
#define EZIOT_WRITE_NO_RSP_CHARACTERISTIC_UUID_STR       @"FED7"
#define EZIOT_NOTIFY_CHARACTERISTIC_UUID_STR             @"FED8"

//CMD Type
#define COMMON_CMDTYPE_RSP                    0x0101

#define BASE_CMDTYPE_PROTOCOL_VERSION         0x0001
#define BASE_CMDTYPE_SET_BIND_STATUS          0x0011
#define BASE_CMDTYPE_CAPABILITY               0x0002
#define BASE_CMDTYPE_DEVINFO                  0x0006
#define BASE_CMDTYPE_TIME_MODIFY              0x0010
#define BASE_CMDTYPE_MCU_DEVINFO              0x0081

#define DAUTH_CMDTYPE_DEVINFO                 0x2001
#define DAUTH_CMDTYPE_FIRSTAUTH               0x2002
#define DAUTH_CMDTYPE_AUTHRESULT              0x2003
#define DAUTH_CMDTYPE_SECOND_AUTH             0x2004
#define DAUTH_CMDTYPE_SECOND_AUTHRESULT       0x2005

#define WIFICONFIG_CMDTYPE_LIST               0x0202
#define WIFICONFIG_CMDTYPE_RESULT             0x0203

#define OTA_CMDTYPE_START                     0x0301
#define OTA_CMDTYPE_SEND                      0x0302
#define OTA_CMDTYPE_EXEC                      0x0303
#define OTA_CMDTYPE_RECOVERY                  0x0304
#define OTA_CMDTYPE_INFO                      0x0305
#define OTA_CMDTYPE_PROGRESS_REPORT           0x0306
#define OTA_CMDTYPE_MCU_START                 0x0381
#define OTA_CMDTYPE_MCU_SEND                  0x0382
#define OTA_CMDTYPE_MCU_EXEC                  0x0383

#define FILE_TRANSFER_CMDTYPE_START           0x0320
#define FILE_TRANSFER_CMDTYPE_SEND            0x0321
#define FILE_TRANSFER_CMDTYPE_END             0x0322

#define DEBUG_CMDTYPE_SWITCH                  0x0401
#define DEBUG_CMDTYPE_LOG_FETCH               0x0402

#define DEV_CONTROL_CMDTYPE_PROP_RESERVED     0x8000
#define DEV_CONTROL_CMDTYPE_PROP_REPORT       0x8001
#define DEV_CONTROL_CMDTYPE_PROP_SET          0x8002
#define DEV_CONTROL_CMDTYPE_PROP_GET          0x8003
#define DEV_CONTROL_CMDTYPE_EVENT_REPORT      0x8004
#define DEV_CONTROL_CMDTYPE_ACTION_SET        0x8005
#define DEV_CONTROL_CMDTYPE_BATCH_EVENT_REPORT 0x8006
#define DEV_CONTROL_CMDTYPE_ALL_PROP_GET      0x8007

//timeout
#define CONNECT_REQUEST_TIME_OUT  20
#define AUTH_REQUEST_TIME_OUT  20
#define PROFILE_REQUEST_TIME_OUT  85
#define CONTROL_REQUEST_TIME_OUT  15
#define WIFILIST_REQUEST_TIME_OUT  20
#define OTA_PAGK_TRANS_TIME_OUT  15
#define UPGRADE_EXEC_TIME_OUT  31


@class EZIoTPeripheral,EZIoTFeatureLiteConfigParam;

typedef enum : NSUInteger {
    EZIoTFeatureValueTypeBool,
    EZIoTFeatureValueTypeInt,
    EZIoTFeatureValueTypeDouble,
    EZIoTFeatureValueTypeString,
    EZIoTFeatureValueTypeArray,
    EZIoTFeatureValueTypeObject,
} EZIoTFeatureValueType;

typedef void(^EZIoTBLECenterStateDidChangedBlock)(CBManagerState *state);
typedef void(^EZIoTBLEScanTargetPeripheralBlock)(EZIoTPeripheral * _Nullable peripheral);
typedef void(^EZIoTBLEScanPeripheralsBlock)(EZIoTPeripheral * _Nullable peripheral, NSError * _Nullable error);

typedef void(^EZIoTBLEUniversalSetResultBlock)(EZIoTPeripheral * _Nullable peripheral, BOOL status, NSError * _Nullable error);
typedef void(^EZIoTBLEUniversalArrayResultBlock)(EZIoTPeripheral * _Nullable peripheral, NSArray * _Nullable list, NSError * _Nullable error);

typedef void(^EZIoTBLEDidConnectPeripheralBlock)(EZIoTPeripheral * _Nullable peripheral);
typedef void(^EZIoTBLEDidFailToConnectPeripheralBlock)(EZIoTPeripheral *_Nullable peripheral, NSError * _Nullable error);
typedef void(^EZIoTBLEDidDisconnectPeripheralBlock)(EZIoTPeripheral * _Nullable peripheral, NSError *_Nullable error);
typedef void(^EZIoTBLEDidRecivedDoubleAuthStatusBlock)(BOOL status, int failType, NSDictionary *_Nullable statistics, NSError * _Nullable error);

typedef void(^EZIoTBLERecivedDevInfoBlock)(EZIoTPeripheral *_Nullable peripheral, NSError * _Nullable error);
typedef void(^EZIoTBLERecivedProtocolVerBlock)(EZIoTPeripheral *_Nullable peripheral, NSString *_Nullable protocolVersion, NSError * _Nullable error);
typedef void(^EZIoTBLERecivedCapabilityBlock)(EZIoTPeripheral *_Nullable peripheral, NSError * _Nullable error);

typedef void(^EZIoTBleDidRecivedProgressBlock)(double progress);
typedef void(^EZIoTBleDidFinishedDownloadBlock)(NSString *_Nullable filePath, NSError * _Nullable error);
typedef void(^EZIoTBLEDidFinishedOTAUpdateBlock)(BOOL status, NSError * _Nullable error);
typedef void(^EZIoTBLEDidFinishedFileTransferBlock)(BOOL status, NSError * _Nullable error);

typedef void(^EZIoTBLEDidBindDeviceBlock)(NSString *_Nullable resourceId, NSString *_Nullable resourceName, NSError * _Nullable error);

typedef void(^EZIoTBLEWiFiConfigResultBlock)(BOOL result, NSError * _Nullable error);
typedef void(^EZIoTBLEFetchDevlogBlock)(EZIoTPeripheral * _Nullable peripheral, NSString *log, NSError * _Nullable error);

typedef void(^EZIoTBLEDevControlFeatureGetBlock)(EZIoTPeripheral *_Nullable peripheral, NSArray <EZIoTFeatureLiteConfigParam *> *_Nonnull featureInfos, NSError *_Nullable error);
typedef void(^EZIoTBLEDevControlFeatureSetBlock)(EZIoTPeripheral *_Nullable peripheral, EZIoTFeatureLiteConfigParam *_Nullable value, NSError *_Nullable error);
typedef void(^EZIoTBLEDevControlFeatureReportBlock)(EZIoTPeripheral *_Nullable peripheral, NSArray <EZIoTFeatureLiteConfigParam *> *_Nonnull featureInfos, NSUInteger seqNum, NSUInteger cmdType, NSError *_Nullable error);




