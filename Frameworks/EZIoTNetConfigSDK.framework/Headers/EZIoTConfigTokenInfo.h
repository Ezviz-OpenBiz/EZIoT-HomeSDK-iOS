//
//  EZIoTConfigTokenInfo.h
//
//  Created by yuqian on 2021/4/30.
//  Copyright © 2021 com.ezviz. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface EZIoTConfigTokenInfo : NSObject

@property (nonatomic, copy) NSString *userId;
@property (nonatomic, copy) NSString *token;
@property (nonatomic, copy) NSString *lbsDomain;

@end

NS_ASSUME_NONNULL_END
