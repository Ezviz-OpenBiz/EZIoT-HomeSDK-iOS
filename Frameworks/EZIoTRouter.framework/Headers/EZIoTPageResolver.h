//
//  EZIoTPageResolver.h
//  EZIoTRouter
//
//  Created by yuqian on 2022/3/14.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface EZIoTPageResolver : NSObject

+ (UIViewController *) pageRoute:(NSURL *)url;

@end

NS_ASSUME_NONNULL_END
