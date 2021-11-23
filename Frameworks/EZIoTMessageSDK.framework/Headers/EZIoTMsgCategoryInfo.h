//
//  EZIoTMsgCategoryInfo.h
//  EZIoTMessageSDK
//
//  Created by yuqian on 2021/7/7.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface EZIoTMsgSubCategoryInfo : NSObject
@property (nonatomic, assign) NSInteger subType; //子类type
@property (nonatomic, assign) NSInteger showType; //展示type
@property (nonatomic, copy)   NSString *subName; //子类名称
@end

@interface EZIoTMsgCategoryInfo : NSObject
@property (nonatomic, copy) NSString *pic3x;
@property (nonatomic, copy) NSString *pic2x;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, assign) NSInteger type;
@property (nonatomic, strong) NSArray <EZIoTMsgSubCategoryInfo *>*subCategories;//子类数据
@property (nonatomic, copy) NSString *subTypes;//subCategories中subType集合
@end

NS_ASSUME_NONNULL_END
