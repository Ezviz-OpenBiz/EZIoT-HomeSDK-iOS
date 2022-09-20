//
//  NSData+AES128.h
//  VideoGo
//
//  Created by hongyangwei on 13-7-5.
//
//

#import <Foundation/Foundation.h>
#include <CommonCrypto/CommonCryptor.h>

@interface NSData (AES)

- (NSData *)AES128Operation:(CCOperation)operation hexKey:(NSString *)key iv:(NSString *)iv;

- (NSData *)AES128Operation:(CCOperation)operation key:(NSString *)key iv:(NSString *)iv;

- (NSData *)AES128EncryptWithKey:(NSString *)key iv:(NSString *)iv;
- (NSData *)AES128DecryptWithKey:(NSString *)key iv:(NSString *)iv;

- (NSData *)AES128EncryptWithHexKey:(NSString *)key iv:(NSString *)iv;
- (NSData *)AES128DecryptWithHexKey:(NSString *)key iv:(NSString *)iv;

- (NSData *)AES256EncryptedDataWithHexKey:(NSString*)hexKey hexIV:(NSString *)hexIV;
- (NSData *)AES256DecryptedDataWithHexKey:(NSString*)hexKey hexIV:(NSString *)hexIV;

@end
