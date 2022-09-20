//
//  YKWoodpeckerUtils.h
//  YKWoodpecker
//
//  Created by Zim on 2019/3/26.


#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

#define YKWLocalizedString(key) \
[YSWoodpeckerUtils localizedStringForKey:(key)]

@interface YSWoodpeckerUtils : NSObject

/**
 Convenient UIActivityViewController

 @param items The items to share.
 */
+ (void)showShareActivityWithItems:(NSArray *)items;

+ (void)presentViewControllerOnMainWindow:(UIViewController *)controller;

+ (BOOL)isCnLocaleLanguage;

+ (NSString *)localizedStringForKey:(NSString *)key;

@end
