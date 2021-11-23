//
//  YSBundleResource.h
//  YSUtilities
//
//  Created by ChenYim on 2018/6/8.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
@interface YSBundleResource : NSObject


/**
 组件获取xib资源方法

 @param xibFileName 组件中xib文件的名称
 @param resourceBundleName 组件对应的Bundle名称
 @return nib对象
 */
+ (id)loadXibWithFileName:(NSString *)xibFileName resourceBundleName:(NSString *)resourceBundleName;

@end

@interface UIView (YSBundleResource)

+ (id)ys_viewWithXibFileName:(NSString *)xibFileName resourceBundleName:(NSString *)resourceBundleName;

@end

@interface UIImage (YSBundleResource)



/**
 组件获取图片资源方法

 @param imageName 组件中的图片名称
 @param resourceBundleName 组件对应的Bunldle名称
 @return image对象
 */
+ (instancetype)ys_imageNamed:(NSString *)imageName resourceBundleName:(NSString *)resourceBundleName;

@end

