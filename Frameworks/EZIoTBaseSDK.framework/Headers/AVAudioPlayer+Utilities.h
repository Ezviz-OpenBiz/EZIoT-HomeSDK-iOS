//
//  AVAudioPlayer+Utilities.h
//  VideoGo
//
//  Created by Bryant on 15/12/9.
//  Copyright © 2015年 hikvision. All rights reserved.
//

#import <AVFoundation/AVFoundation.h>

@interface AVAudioPlayer (Utilities)

+ (AVAudioPlayer *)newAudioPlayerForFile:(NSString *)fileName
                               extension:(NSString *)extension
                                inBundle:(NSBundle *)bundle;

@end
