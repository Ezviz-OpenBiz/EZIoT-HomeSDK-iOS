//
//  VideoGoDef.h
//  VideoGo
//
//  Created by Dengsh on 13-1-10.
//
//

#import <Foundation/Foundation.h>

#ifndef VideoGo_VideoGoDef_h
#define VideoGo_VideoGoDef_h

/********* global variable ****************************************************/
extern BOOL g_bIsDEBUG;//此开关用于替换组件内的宏（例如："#ifdef DEBUG"）
extern BOOL g_bIsTEST;
extern BOOL g_bIsRELEASE;
/*******************************************************************************
 * global variable
 *******************************************************************************/
extern float gfScreenWidth;
extern float gfScreenHeight;
extern float gfStatusBarHeight;
extern float gfStatusBarSpace;
extern float gfFrameHeight;
extern float gfMainToolBarHeight;
extern float gfNavigationBarHeight;
extern int   giErrorCode;

/********* global variable ****************************************************/
extern long g_lRealTotalFlux;            // 实时预览页面总预览流量
extern long g_lStreamDataTipRate;        // 流量超额控制
extern BOOL g_bPswInputShow;             // 当前是否有密码输入框显示在
extern BOOL g_bShowListView;             // 是否演示视频
extern long g_lLastSystemError;          // 流媒体取流系统错误号
extern BOOL g_bAudioOpen;                // 音频是否打开  
/********* define *************************************************************/

/* =================== isp key ======================= */
extern NSString * const kAutoIsp;
extern NSString * const kUserSelectedIsp;
/* =================== isp key ======================= */

/********* test variable ******************************************************/
#ifdef DEBUG
// #define TEST_LOG
// #define DEBUG_LOG
// #define DEBUG_CRICLE
// #define TEST_FILE

extern id g_playTypeHandle;
#endif


#define APP_LOCAL

extern FILE * fLog;
extern FILE * fDebug;
extern FILE * fFile;
extern FILE * fFile2;  
extern int  iSuccess;
extern int  iFailed;
extern long lSeq;

#if __has_feature(objc_arc)
#define arcRelease(N)
#define retain(N)
#define deallocSuper
#define autoPool @autoreleasepool
#define autorelease(N) N;
#else
#define arcRelease(N) if(N){[N release];}
#define retain(N) [N retain];
#define autorelease(N) [N autorelease];
#define deallocSuper [super dealloc];
#define autoPool NSAutoreleasePool *pool = [[NSAutoreleasePool alloc] init];
#endif


#define F_THUMBNAIL_WIDTH         474.0f
#define F_THUMBNAIL_HEIGHT        382.0f

#endif

#define DEVICE_SAFEMODE_SERVICE_NAME        @"safemode"

#define CLIENT_TYPE                         @"iPhone"

#define SESSION_PREFIX                       "hik$shipin7#1#USK#"

/********* struct *************************************************************/
//typedef struct
//{
//	int year;
//	int month;
//	int day;
//	int hour;
//	int minute;
//	int second;
//}ABSTIME, *PABSTIME;

// 录像片段信息
//typedef struct RecordSegment
//{
//    ABSTIME  beginTime;         // 开始时间
//    ABSTIME  endTime;           // 结束时间
//    int      recordType;        // 录像类型
//    int      mediaDataLen;      // 媒体数据大小
//    int      metaDataLen;
//    BOOL     isLocked;          // 是否锁定录像
//    __unsafe_unretained NSString *palyUrl;          // 播放地址
//}RecordSegment;

// 录像类型
#define RECORD_TYPE_PLAN        1       // 计划录像
#define RECORD_TYPE_MOVE        2       // 移动录像
#define RECORD_TYPE_ALARM       4       // 报警录像
#define RECORD_TYPE_MANU        16      // 手动录像

/***************************** ENUM ******************************************/
//push type
typedef enum _push_type
{
    PUSH_ERROR = -1,             // 错误的类型
    
    PUSH_ALARM = 0,              // 报警消息
    PUSH_DEVUPDATE,              // 设备升级消息
    PUSH_DEVICE,                 // 设备消息
    PUSH_SYS,                    // 系统消息
    PUSH_VOICE,                  // 留言消息
    
    PUSH_SHARE,                  // 分享消息
    PUSH_SQUARE,                 // 直播消息
    PUSH_IM,                     // IM
    PUSH_GROUP,                  // 群组
    PUSH_YSPAI,                  // 萤石派消息
}PUSH_TYPE;


typedef enum _ThumbnailType {
    ThumbnailRecord   = 0,                                                      // 录像缩略图
    ThumbnailCapture  = 1                                                       // 截图缩略图
}ThumbnailType;

#define FUNC_SUPPORT_VIDEO_SHARE 0//支持视频分享功能

#define nilOrJSONObjectForKey(JSON_, KEY_) [JSON_ objectForKey:KEY_] == [NSNull null] ? nil : [JSON_ valueForKeyPath:KEY_];

#define safeblock(block, ...) if (block) block(__VA_ARGS__) //不兼容 没参数的block


