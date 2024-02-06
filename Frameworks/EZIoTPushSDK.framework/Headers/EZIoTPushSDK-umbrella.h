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

#import "EZIoTPersistentConnect.h"
#import "EZIoTPersistentConnectProxy.h"
#import "EZIoTPushSDK.h"

FOUNDATION_EXPORT double EZIoTPushSDKVersionNumber;
FOUNDATION_EXPORT const unsigned char EZIoTPushSDKVersionString[];

