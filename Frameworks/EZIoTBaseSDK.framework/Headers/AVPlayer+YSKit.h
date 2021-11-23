//
//  AVPlayer+YSKit.h
//  VideoGo
//
//  Created by DeJohn Dong on 2017/10/28.
//  Copyright © 2017年 hikvision. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>

@interface AVPlayer (YSKit)

@property (nonatomic, strong) AVPlayerLayer *ysPlayerLayer; //获取播放层的属性，需要用户手动从superLayer上移除，否则会产生内存泄漏
@property (nonatomic, assign) BOOL isFinished; //是否播放结束
@property (nonatomic, copy) void (^didFinishedBlock)(UIImage *image);

/**
 根据文件名构建AVPlayer播放器

 @param fileName 文件名，包含格式
 @param parentView 父视图
 @return AVPlayer实例对象
 */
+ (instancetype)ys_avPlayerWithFileName:(NSString *)fileName parentView:(UIView *)parentView needNotification:(BOOL)needNotification;

/**
 根据url链接构建播AVPlayer放器
 
 @param url url链接
 @param parentView 父视图
 @return AVPlayer实例对象
 */
+ (instancetype)ys_avPlayerWithURL:(NSURL *)url parentView:(UIView *)parentView needNotification:(BOOL)needNotification;


/**
 AVPlayer销毁方法
 */
- (void)ys_destroyPlayer;

@end
