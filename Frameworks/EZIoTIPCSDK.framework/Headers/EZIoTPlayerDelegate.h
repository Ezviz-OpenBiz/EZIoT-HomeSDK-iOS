//
//  EZIoTVideoPlayerDelegate.h
//  EZIoTHomeSDKDemo
//
//  Created by yuqian on 2021/12/4.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef enum : NSUInteger {
    EZIoTPlayerStatusStop,   // 停止
    EZIoTPlayerStatusLoad,   // 加载中
    EZIoTPlayerStatusDoing,  // 进行中/播放中
    EZIoTPlayerStatusPause,  // 暂停
    EZIoTPlayerStatusDestroy,// 摧毁
} EZIoTPlayerStatus;


@protocol EZIoTPlayerDelegate <NSObject>


- (void) player:(id)player playState:(EZIoTPlayerStatus)playState error:(NSError * _Nullable)error;



@end

NS_ASSUME_NONNULL_END
