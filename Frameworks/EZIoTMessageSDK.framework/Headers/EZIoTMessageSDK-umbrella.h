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

#import "EZIoTMessageManager.h"
#import "EZIoTMessageSDK.h"
#import "EZIoTMsgAbstractInfo.h"
#import "EZIoTMsgCategoryInfo.h"
#import "EZIoTMsgInfo.h"
#import "EZIoTMsgListResp.h"

FOUNDATION_EXPORT double EZIoTMessageSDKVersionNumber;
FOUNDATION_EXPORT const unsigned char EZIoTMessageSDKVersionString[];

