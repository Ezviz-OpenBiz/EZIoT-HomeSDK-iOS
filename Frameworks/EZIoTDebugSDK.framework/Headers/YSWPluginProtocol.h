//
//  YSWPluginProtocol.h
//  YKWoodpecker
//
//  Created by Zim on 2019/3/7.


@protocol YSWPluginProtocol <NSObject>

/**
 Run the plugin.

 @param paraDic The plugin's pluginParameters.
 */
- (void)runWithParameters:(NSDictionary *)paraDic;

@end

// Plugin outside communication notifications.
extern NSString *const YKWPluginSendMessageNotification; /**< Plugin sending notification = @"YKWPluginSendMessageNotification" */
extern NSString *const YKWPluginReceiveMessageNotification; /**< Plugin receiving notification = @"YKWPluginReceiveMessageNotification" */
/*
 UI Check plugin - View Picker:
 Sending Format:
    notification.object = @"ProbePluginNotification";
    notification.userInfo[@"view"] = the UIView picked;
 Receiving Format:
    notification.object = @"ProbePluginNotification";
    notification.userInfo[@"msg"] = message to show;
 
 System Info plugin:
 Sending Format:
    notification.object = @"SysInfoPluginNotification";
 Receiving Format:
    notification.object = @"SysInfoPluginNotification";
    notification.userInfo[@"msg"] = message to show;
*/
