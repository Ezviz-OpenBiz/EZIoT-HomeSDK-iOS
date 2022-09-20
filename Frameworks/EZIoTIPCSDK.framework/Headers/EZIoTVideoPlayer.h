//
//  EZIoTVideoPlayer.h
//
//  Created by yuqian on 2021/12/3.
//

#import <UIKit/UIKit.h>
#import "EZIoTPlayerDelegate.h"

NS_ASSUME_NONNULL_BEGIN

@class EZIoTDeviceInfo,EZIoTResourceInfo;

typedef enum : NSUInteger {
    EZIoTPlaybackVideoTypeDevice,
    EZIoTPlaybackVideoTypeCloud
} EZIoTPlaybackVideoType;

typedef NS_ENUM(NSInteger, EZIoTStreamFetchType) {
    EZIoTStreamFetchTypeNone = -1,
    EZIoTStreamFetchTypePrivate = 0,/**< 私有流媒体 */
    EZIoTStreamFetchTypeP2p,
    EZIoTStreamFetchTypeDirectInner,
    EZIoTStreamFetchTypeDirectOuter,
    EZIoTStreamFetchTypeCloudPlayback,/**< 云回放 */
    EZIoTStreamFetchTypeCloudRecord,/**< 云存储留言 */
    EZIoTStreamFetchTypeDirectReverse,
    EZIoTStreamFetchTypeNetSDKLAN, /**< 采用HCNetSDK的方式取流 */
    EZIoTStreamFetchTypeLocalFile = 200, /**< 本地文件 */
    EZIoTStreamFetchTypeProxy ,
};

typedef NS_ENUM(NSInteger, EZIoTStreamType) {
    EZIoTMainStreamType,
    EZIoTSubStreamType,
};

@interface EZIoTVideoPlayer : NSObject

@property (weak, nonatomic) id<EZIoTPlayerDelegate> delegate;

+ (EZIoTVideoPlayer *) realPlayWithDeviceInfo:(EZIoTDeviceInfo *)deviceInfo
                                resourceInfo:(EZIoTResourceInfo *)resourceInfo
                                    playView:(UIView *)playView;

+ (EZIoTVideoPlayer *) playbackWithDeviceInfo:(EZIoTDeviceInfo *)deviceInfo
                                resourceInfo:(EZIoTResourceInfo *)resourceInfo
                                    playView:(UIView *)playView
                                   videoType:(EZIoTPlaybackVideoType)videoType
                                  recordFile:(id)recordFile;

- (instancetype) initRealPlayWithDeviceInfo:(EZIoTDeviceInfo *)deviceInfo
                              resourceInfo:(EZIoTResourceInfo *)resourceInfo
                                  playView:(UIView *)playView;

- (instancetype) initPlaybackWithDeviceInfo:(EZIoTDeviceInfo *)deviceInfo
                              resourceInfo:(EZIoTResourceInfo *)resourceInfo
                                  playView:(UIView *)playView
                                 videoType:(EZIoTPlaybackVideoType)videoType
                                recordFile:(id)recordFile;

- (void) start;
- (void) stop;
- (void) destroy;

- (void) openSound:(BOOL)isOpen;
- (void) hardDecode:(BOOL)isHard;

- (void) capture:(void(^)(UIImage *image))suceess
         failure:(void(^)(NSError *error))failure;

- (void) startRecord:(void(^)(void))suceess
             failure:(void(^)(NSError *error))failure;

- (void) stopRecord:(void(^)(NSString *saveRecordPath))suceess
            failure:(void(^)(NSError *error))failure;

- (BOOL) isHard;
- (EZIoTStreamType) streamType;
- (EZIoTStreamFetchType) streamFetchType;

@end

NS_ASSUME_NONNULL_END
