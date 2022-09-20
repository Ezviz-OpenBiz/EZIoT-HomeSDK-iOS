//
//  EZIoTBleFileTransferMgr.h
//  EZIoTBluetoothSDK
//
//  Created by yuqian on 2021/9/9.
//

#import <Foundation/Foundation.h>
#import "EZIoTBLECommonDefine.h"

NS_ASSUME_NONNULL_BEGIN

@class EZIoTPeripheral;

@interface EZIoTBleFileTransferMgr : NSObject

// 1. 通知设备开始文件传输，发送文件类型、大小、md5
- (void) sendFilePackageInfo:(EZIoTPeripheral *)p
                    filePath:(NSString *)filePath
                    fileType:(NSUInteger)fileType
                 fileContent:(NSData *)fileContent
                    progress:(EZIoTBleDidRecivedProgressBlock)progress
                  completion:(EZIoTBLEDidFinishedOTAUpdateBlock)completion;

// 2. 分包发送文件包
- (void) sendFilePackage:(EZIoTPeripheral *)p
               progress:(EZIoTBleDidRecivedProgressBlock)progressBlock;

// 3. 文件下发完毕，通知设备
- (int) sendFileTransferEnd:(EZIoTPeripheral *)p;

+ (void) stopTransfer;

// rsp handle
- (int) fileTransferRspHanler:(EZIoTPeripheral *)p
                      cmdType:(int)cmdType
                        value:(NSData *)value
                     progress:(EZIoTBleDidRecivedProgressBlock)progressBlock
                   completion:(EZIoTBLEDidFinishedFileTransferBlock)completion;

@end

NS_ASSUME_NONNULL_END
