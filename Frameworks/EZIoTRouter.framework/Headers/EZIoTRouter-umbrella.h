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

#import "EZIoTPageResolver.h"
#import "EZIoTRouter.h"
#import "EZIoTFeatureConfigParam.h"
#import "EZIoTBleOtapControlProtocol.h"
#import "EZIoTOtapControlProtocol.h"
#import "EZIoTWiFiOtapControlProtocol.h"
#import "EZIoTRouterProtocol.h"
#import "EZIoTBleUpgradeProtocol.h"
#import "EZIoTDevUpgradeProtocol.h"
#import "EZIoTWiFiUpgradeProtocol.h"

FOUNDATION_EXPORT double EZIoTRouterVersionNumber;
FOUNDATION_EXPORT const unsigned char EZIoTRouterVersionString[];

