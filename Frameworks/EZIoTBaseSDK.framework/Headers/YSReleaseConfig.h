 //
//  YSReleaseConfig.h
//  VideoGo
//
//  Created by wying3344 on 16/5/30.
//  Copyright © 2016年 hikvision. All rights reserved.
//

#ifndef YSReleaseConfig_h
#define YSReleaseConfig_h

/*******************************************************************************
 * config
 *******************************************************************************/
//


#define TEST5 1

#pragma mark - 国内地址
#ifndef EZVIZ


//#define SERVICE_HTTP_HEAD       @"http://api.eziot.com"
//#define SERVICE_HTTPS_HEAD      @"https://api.eziot.com"


#define SERVICE_HTTP_HEAD       @"http://api.eziot.com"
#define SERVICE_HTTPS_HEAD      @"https://api.eziot.com"

//#define SERVICE_HTTP_HEAD       @"http://test14.ys7.com"
//#define SERVICE_HTTPS_HEAD      @"https://test14.ys7.com"

//#define SERVICE_HTTP_HEAD       @"http://test15.ys7.com"
//#define SERVICE_HTTPS_HEAD      @"https://test15.ys7.com"


#pragma mark - 海外地址
#else
//#define SERVICE_HTTP_HEAD        @"http://api.ezvizlife.com"
//#define SERVICE_HTTPS_HEAD       @"https://api.ezvizlife.com"

//#define SERVICE_HTTP_HEAD        @"http://itcn.ezvizlife.com"         
//#define SERVICE_HTTPS_HEAD       @"https://itcn.ezvizlife.com"

//#define SERVICE_HTTP_HEAD        @"http://isgp.ezviz7.com"
//#define SERVICE_HTTPS_HEAD       @"https://isgp.ezviz7.com"

//#define SERVICE_HTTP_HEAD        @"http://itus.ezvizlife.com"
//#define SERVICE_HTTPS_HEAD       @"https://itus.ezvizlife.com"

//#define SERVICE_HTTP_HEAD        @"http://ifuxi.ezvizlife.com"
//#define SERVICE_HTTPS_HEAD       @"https://ifuxi.ezvizlife.com"

//#define SERVICE_HTTP_HEAD        @"http://pbus.ezviz7.com"
//#define SERVICE_HTTPS_HEAD       @"https://pbus.ezviz7.com"

#endif

#endif /* YSReleaseConfig_h */
