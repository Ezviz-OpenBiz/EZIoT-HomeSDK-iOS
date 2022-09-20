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

#import "EZIoTCommonMacro.h"
#import "EZIoTDeviceInfo+Extension.h"
#import "EZIoTDeviceManager+Feature.h"
#import "EZIoTDeviceManager.h"
#import "EZIoTDeviceSDK.h"
#import "EZIoTFeatureManager.h"
#import "EZIoTActionFeatureItem.h"
#import "EZIoTDeviceCloudInfo.h"
#import "EZIoTDeviceInfo+AccessDB.h"
#import "EZIoTDeviceInfo+Capability.h"
#import "EZIoTDeviceInfo.h"
#import "EZIoTDeviceInfoResp.h"
#import "EZIoTFeatureItem.h"
#import "EZIoTProductInfo.h"
#import "EZIoTPropertyFeatureItem.h"
#import "EZIoTResourceInfo+AccessDB.h"
#import "EZIoTResourceInfo.h"

FOUNDATION_EXPORT double EZIoTDeviceSDKVersionNumber;
FOUNDATION_EXPORT const unsigned char EZIoTDeviceSDKVersionString[];

