#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "EZIoTBLECommonDefine.h"
#import "EZIoTBluetoothGlobalSetting.h"
#import "EZIoTBluetoothSDK.h"
#import "EZIoTBaseInfoMgr.h"
#import "EZIoTBLECenterMgr.h"
#import "EZIoTBleFileTransferMgr.h"
#import "EZIoTDevControlManager.h"
#import "EZIoTDoubleAuthMgr.h"
#import "EZIoTFileDownloadMgr.h"
#import "EZIoTOTAUpgadeMgr.h"
#import "EZIoTBLEInitConfigParam.h"
#import "EZIoTExtendAuthInfoParam.h"
#import "EZIoTFeatureLiteConfigParam.h"
#import "EZIoTPeripheral.h"
#import "EZIoTWiFiConfigParam.h"
#import "EZIoTCommonRequest.h"
#import "EZIoTDevReportRequest.h"
#import "EZIoTDoubleAuthRequest.h"
#import "EZIoTBLENetworking.h"

FOUNDATION_EXPORT double EZIoTBluetoothSDKVersionNumber;
FOUNDATION_EXPORT const unsigned char EZIoTBluetoothSDKVersionString[];

