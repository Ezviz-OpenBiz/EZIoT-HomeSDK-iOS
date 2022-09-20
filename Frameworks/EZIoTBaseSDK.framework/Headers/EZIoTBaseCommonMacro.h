//
//  EZIoTBaseCommonMacro.h
//  EZIoTBaseSDK
//
//  Created by yuqian on 2021/11/18.
//

#ifndef EZIoTBaseCommonMacro_h
#define EZIoTBaseCommonMacro_h

#import <EZIoTDebugSDK/YSLogDefine.h>

#define YSLOG_API_CONFIG(frmt, ...) YSLOGDEFINE(@"SDK_API", frmt, ##__VA_ARGS__)

#endif /* EZIoTBaseCommonMacro_h */
