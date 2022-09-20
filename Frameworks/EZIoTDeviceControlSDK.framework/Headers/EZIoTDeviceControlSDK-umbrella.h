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

#import "EZIoTDevControlMgr.h"
#import "EZIoTDevUpgradeMgr.h"
#import "EZIoTOtapControlMgr.h"

FOUNDATION_EXPORT double EZIoTDeviceControlSDKVersionNumber;
FOUNDATION_EXPORT const unsigned char EZIoTDeviceControlSDKVersionString[];

