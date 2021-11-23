//
//  NSData+SHA256Digest.h
//  NSData+SHA256Digest
//
//  Created by Hiroshi Kuwabara on 1/17/14.
//  Copyright (c) 2014 Beenos. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSData (SHA256Digest)

+(NSData *)SHA256Digest:(NSData *)input;
-(NSData *)SHA256Digest;

+(NSString *)SHA256HexDigest:(NSData *)input;
-(NSString *)SHA256HexDigest;

@end
