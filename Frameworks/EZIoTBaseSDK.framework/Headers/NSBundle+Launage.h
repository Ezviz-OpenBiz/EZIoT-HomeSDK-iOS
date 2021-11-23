//
//  NSBundle+Launage.h
//  C_IOTCommonBusi
//
//  Created by zhilshi on 2020/11/4.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
NS_ASSUME_NONNULL_BEGIN

@interface NSBundle (Launage)
+ (void)setCurrentLaunage:(NSString *)currentLaunage;
+ (void)loadUpLaunages:(NSArray *)supportLaunages;

@end

NS_ASSUME_NONNULL_END
