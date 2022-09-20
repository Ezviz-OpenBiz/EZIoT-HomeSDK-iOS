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

#import "EZIoTIntercomPlayer.h"
#import "EZIoTPlayerDelegate.h"
#import "EZIoTVideoPlayer.h"
#import "EZIoTIPCGlobalSetting.h"
#import "EZIoTCloudRecordManager.h"
#import "EZIoTDeviceRecordManger.h"
#import "EZIoTP2PConfigInfo.h"
#import "EZIoTCloudDayInfo.h"
#import "EZIoTCloudFile.h"
#import "EZIoTLocalFile.h"

FOUNDATION_EXPORT double EZIoTIPCSDKVersionNumber;
FOUNDATION_EXPORT const unsigned char EZIoTIPCSDKVersionString[];

