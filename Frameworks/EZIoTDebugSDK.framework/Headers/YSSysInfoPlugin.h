//
//  YKWSysInfoPlugin.h
//  YKWoodpecker
//
//  Created by Zim on 2019/3/12.


#import <Foundation/Foundation.h>
#import "YSWPluginProtocol.h"


@interface YSSysInfoPlugin : NSObject<YSWPluginProtocol>

-(NSString *)otherInfo;

-(NSString *)getAPPInfo:(NSDictionary *)paraDic;

@end
