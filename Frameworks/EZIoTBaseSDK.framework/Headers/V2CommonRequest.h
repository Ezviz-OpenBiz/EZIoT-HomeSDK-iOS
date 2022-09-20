//
//  V2CommonRequest.h
//  YSNetwork
//
//  Created by qiandong on 7/13/16.
//  Copyright © 2016 hikvision. All rights reserved.
//

#import "YSRequest.h"
#import <MJExtension/MJExtension.h>

@interface V2CommonRequest : YSRequest

- (NSMutableDictionary *)failDictionaryWithError:(NSError *)error;

- (NSMutableDictionary *)successDictionaryWithResponse:(id)response;


@end
