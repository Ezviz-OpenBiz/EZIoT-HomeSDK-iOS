//
//  CEncryption.h
//  encrypt
//
//  Created by Dengsh on 12-9-26.
//
//

#import <Foundation/Foundation.h>

@interface CEncryption : NSObject

// 文件MD5
+ (NSString *)filemd5Encryption:(NSString *)path;

// MD5加密
+ (NSString *)md5Encryption:(NSString *)orgString;

// DES加密
+ (NSString *)desEncryption:(NSString *)strPlaint
                      toKey:(NSString *)strKey;

// DES解密
+ (NSString *)desDecryption:(NSString *)strPlaint
                      toKey:(NSString *)strKey;
@end
