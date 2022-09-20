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

#import "EZIoTFamilyManager.h"
#import "EZIoTFamilySDK.h"
#import "EZIoTRoomManager.h"
#import "EZIoTFamilyDetailInfo.h"
#import "EZIoTFamilyInfo.h"
#import "EZIoTFamilyInfoResp.h"
#import "EZIoTFamilyMemberInfo.h"
#import "EZIoTRoomDeviceInfo.h"
#import "EZIoTRoomInfo.h"

FOUNDATION_EXPORT double EZIoTFamilySDKVersionNumber;
FOUNDATION_EXPORT const unsigned char EZIoTFamilySDKVersionString[];

