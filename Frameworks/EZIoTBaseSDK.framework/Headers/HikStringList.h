/**	@file HikStringList.h
 *	@note HangZhou Hikvision System Technology Co., Ltd. All Right Reserved.
 *	@brief 字符串定义文件
 *
 *	@author	 Chen Mengyu
 *	@date	 2012/05/21
 *
 *	@note 历史记录：
 */

#ifndef _HikStringList_h
#define _HikStringList_h

/** 提示字符串
 */

#define STR_DELETE                  NSLocalizedString(@"Delete", nil)
#define STR_CANCEL                  NSLocalizedString(@"Cancel", nil)
#define STR_OK                      NSLocalizedString(@"OK", nil)
#define STR_UPDATA                  NSLocalizedString(@"Update", nil)

/******************************************************************************* 
 *登录界面
 *******************************************************************************/

#define STR_LOGIN_ALT_LOGINING                      NSLocalizedString(@"Logging in... please wait...", nil)

/******************************************************************************* 
 *监控列表界面
 *******************************************************************************/

// 界面字符串
#define STR_MONITORLIST_LABEL_LAST_UPDATE   NSLocalizedString(@"Last Update", nil)

/*******************************************************************************
 *错误相关提示  UI 使用    
 *******************************************************************************/

// 登录
#define ATTENTION_LOGIN_USER_LOKED                             NSLocalizedString(@"The user account is locked. Please enter the verification code.", nil)
// 忘记密码
#define ATTENTION_RESETPWD_PHONE_NOT_MATHC                     NSLocalizedString(@"Mobile phone and user name are not matched.", nil)
// 实时视频 / 历史录像
#define ATTENTION_CAMERA_NOT_EXIST                             NSLocalizedString(@"The camera does not exist.", nil)
#define ATTENTION_CAMERA_IS_HIDE                               NSLocalizedString(@"The privacy protection of the camera has been enabled.", nil)
#define ATTENTION_DEVICE_PWD_ERROR                             NSLocalizedString(@"Device password error", nil)
#define ATTENTION_DEVICE_NOT_ONLINE                            NSLocalizedString(@"Device offline.", nil)
#define ATTENTION_VIDEOQUALITY_SETFAILED                       NSLocalizedString(@"Failed to switch the video quality.", nil)

// 历史录像
#define ATTENTION_PLAYBACK_SEARCH_NO_RECORD                    NSLocalizedString(@"No video.", nil)
// 表单错误
#define ATTENTION_FORM_USERNAME_USED_MORE                      NSLocalizedString(@"The user name has been registered more than one time. ", nil)
#define ATTENTION_FORM_PWD_SPACE                               NSLocalizedString(@"Space is not allowed.", nil)
#define ATTENTION_FORM_HAS_SPECIAL_CHARACTER                   NSLocalizedString(@"Illegal characters, including :\\*?\"<>|'% are not allowed.", nil)
#define ATTENTION_FORM_IMAGE_VCODE_INPUTRIGHT                  NSLocalizedString(@"Please enter the correct verification code.", nil)

#pragma mark -
#pragma mark WEB SERVICE

// webService错误提示
#define ATTENTION_CHECKCODE_LIMIT                              NSLocalizedString(@"check code limit", nil)
#define ATTENTION_NET_EXCEPTION                                NSLocalizedString(@"Network exception.", nil)
#define ATTENTION_INPUTPARAM_ERROR                             NSLocalizedString(@"Incorrect Input Parrameters", nil)
#define ATTENTION_SERVERRESPONSE_NULL                          NSLocalizedString(@"Failed to connect to the server.", nil)
#define ATTENTION_CAMERA_ADDED                                 NSLocalizedString(@"Camera is added.", nil)
#define ATTENTION_PARAM_EXCEPTION                              NSLocalizedString(@"Parameter Exceptional", nil)
#define ATTENTION_NOTBIND_PHONE                                NSLocalizedString(@"Account not bind phone", nil)
#define ATTENTION_MAIL_USED                                    NSLocalizedString(@"The Email has already been registered. ", nil)
#define ATTENTION_CHECKCODE_FREEZE                             NSLocalizedString(@"Unable to get the verification code: the mobile phone number bound with the registered user account is locked. ", nil)
#define ATTENTION_CHECKCODE_FAILEDLIMIT                        NSLocalizedString(@"You exceeded the maximum allowed number of verification code entering.", nil)
#define ATTENTION_CAMERA_INEXISTENCE                           NSLocalizedString(@"The camera does not exist.", nil)
#define ATTENTION_DEVICE_EXCEPTION                             NSLocalizedString(@"Device Exception", nil)
#define ATTENTION_DEVICE_OFFLINE                               NSLocalizedString(@"Device offline.", nil)
#define ATTENTION_DEVICE_UNREGEIST                             NSLocalizedString(@"The device is not registered. Please check your device network.", nil)
#define ATTENTION_CAMERANAME_EXCEPTION                         NSLocalizedString(@"Device Name Exception", nil)
#define ATTENTION_SN_ERROR                                     NSLocalizedString(@"The Serial No. is incorrect.", nil)
#define ATTENTION_NETWORK_TIMEOUT                              NSLocalizedString(@"Connection Timeout", nil)
#define ATTENTION_DEVICE_NODISK                                NSLocalizedString(@"No HDD or memory card.", nil)
#define ATTENTION_DISK_FULL                                    NSLocalizedString(@"The hard disk or memory card is full.",nil)
#define ATTENTION_DEVICE_FORMATING                             NSLocalizedString(@"Formating the HDD…", nil)
#define ATTENTION_DEVICE_ADDBYOTHER                            NSLocalizedString(@"The device is added.", nil)
#define ATTENTION_DEVICE_NUMLIMIT                              NSLocalizedString(@"No more devices can be added.", nil)
#define ATTENTION_DEVICE_VERIFYCODEERROR                       NSLocalizedString(@"Incorrect Verification Code", nil)
#define ATTENTION_DEVICE_TIMEOUT                               NSLocalizedString(@"Device or network is abnormal. Connection timeout.", nil)
#define ATTENTION_UUID_EMPTY                                   NSLocalizedString(@"The hardware attribute code is empty. ", nil)
#define ATTENTION_UUID_VERIFYFAILED                            NSLocalizedString(@"The hardware attribute code verification is failed. ", nil)
#define ATTENTION_UUID_VERIFYFAILED_STARTUP                    NSLocalizedString(@"登录失败，你的帐号已开启终端绑定，请重试",nil)

#define ATTENTION_ADIMAGE_UPLOADWRONG                          NSLocalizedString(@"上传图片失败",nil)
#define ATTENTION_ADIMAGE_OUTLIMITNO                           NSLocalizedString(@"无法上传更多广告图片,已达上限",nil)
#define ATTENTION_ADIMAGE_TYPEWRONG                            NSLocalizedString(@"图片类型错误",nil)

#define ATTENTION_UNBIND_DEVICE_OUTTIME                        NSLocalizedString(@"请在2分钟内完成解绑操作",nil)
#define ATTENTION_UNBIND_DEVICE_NORESET                        NSLocalizedString(@"你尚未成功将设备重置",nil)
#define ATTENTION_UNBIND_DEVICE_R2_NORESET                     NSLocalizedString(@"请在设备的显示器界面或电视界面上确认解绑",nil)
#define ATTENTION_UNBIND_DEVICE_NOAUTHORITY                    NSLocalizedString(@"解绑请求被拒绝,请联系设备拥有者",nil)
#define ATTENTION_MODIFY_NICKNAME_REPEAT                       NSLocalizedString(@"这个昵称已经有人用了,换一个吧",nil)
#define ATTENTION_DEVICE_DELETE                                NSLocalizedString(@"设备已被删除",nil)
#define ATTENTION_FRIEND_EXIST                                 NSLocalizedString(@"好友已存在",nil)

#pragma mark -
#pragma mark - FORM ERROR   
// 表单错误
#define ATTENTION_FORM_EMPTY                                   NSLocalizedString(@"This field is required", nil)
#define ATTENTION_FORM_USERNAME_LESS_4                         NSLocalizedString(@"username less 4", nil)
#define ATTENTION_FORM_USERNAME_MORE_20                        NSLocalizedString(@"username more 20", nil)
#define ATTENTION_FORM_PWD_LESS_6                              NSLocalizedString(@"pwd less 6", nil)
#define ATTENTION_FORM_PWD_MORE_16                             NSLocalizedString(@"pwd more 16", nil)
#define ATTENTION_FORM_CON_LESS_2                              NSLocalizedString(@"con less 2", nil)
#define ATTENTION_FORM_CON_MAORE_50                            NSLocalizedString(@"con more 50", nil)
#define ATTENTION_FORM_CON_MAORE_200                           NSLocalizedString(@"con more 200", nil)
#define ATTENTION_FORM_USERNAME_ALL                            NSLocalizedString(@"You cannot enter underlines only.", nil)
#define ATTENTION_FORM_USERNAME_ILLEGA                         NSLocalizedString(@"Illegal characters should not be included.", nil)
#define ATTENTION_FORM_USERNAME_ALL_NUMBER                     NSLocalizedString(@"You cannot enter numbers only.", nil)
#define ATTENTION_FORM_USERNAME_USED                           NSLocalizedString(@"User name exists.", nil)
#define ATTENTION_FORM_PWD_ALL_NUMBER                          NSLocalizedString(@"You cannot enter numbers only.", nil)
#define ATTENTION_FORM_PWD_ALL_LETTER                          NSLocalizedString(@"You cannot enter English letters only.", nil)
#define ATTENTION_FORM_PWD_ALL_                                NSLocalizedString(@"You cannot enter underlines only.", nil)
#define ATTENTION_FORM_PWD_SAME                                NSLocalizedString(@"The duplicate character is not allowed.", nil)
#define ATTENTION_FORM_PWD_REPEAT_NOT_SAME                     NSLocalizedString(@"The two passwords you entered are not the same.", nil)
#define ATTENTION_FORM_PHONE_NUM_ILLEGA                        NSLocalizedString(@"Please enter a valid mobile phone number.", nil)
#define ATTENTION_FORM_PHONE_NUM_UESED                         NSLocalizedString(@"The mobile phone number has been already used.  Please try another one.", nil)
#define ATTENTION_FORM_VERIFYCODE_SEND_FAILE                   NSLocalizedString(@"Failed to get the verification code.", nil)
#define ATTENTION_FORM_VCODE_ERROR                             NSLocalizedString(@"Verification code error. Please check your verification code.", nil)
#define ATTENTION_FORM_VCODE_EXPIRED                           NSLocalizedString(@"Invalid verification code. Please get a new code.", nil)
#define ATTENTION_FORM_FIX_PHONE_ILLEGA                        NSLocalizedString(@"Please enter the valid landline phone number.", nil)
#define ATTENTION_FORM_MAIL_NOT_AVAIL                          NSLocalizedString(@"Invalid Email address. Please try again.", nil)
#define ATTENTION_FORM_DEVICENAME_NOT_NULL                     NSLocalizedString(@"The name cannot be empty.", nil)
#define ATTENTION_FORM_DEVICENAME_TOO_LONG                     NSLocalizedString(@"The device name is too long.", nil)
#define ATTENTION_FORM_DEVICENAME_PLEASE_INPUT                 NSLocalizedString(@"Please enter the device name.", nil)


#pragma mark
#pragma play
#define ATTENTION_VERSION_NOTSUPPORT                           NSLocalizedString(@"This service is not supported.", nil)
#define ATTENTION_HCNP_INTERCOM_FAILED                         NSLocalizedString(@"Failed to enable the voice talk.", nil)
#define ATTENTION_HCNP_GETTOKEN_FAILED                         NSLocalizedString(@"Failed to get the safety verification, please check the network connection and try again.", nil)
#define ATTENTION_CLOUDINFO_ERROR                              NSLocalizedString(@"Failed to get the server information.", nil)
#define ATTENTION_DECODE_TIMEOUT                               NSLocalizedString(@"Network unstable. Connation timeout. ", nil)
#define ATTENTION_DECODE_FAILED                                NSLocalizedString(@"Playing failed, please try again.", nil)
#define ATTENTION_INITAUDIO_FAILED                             NSLocalizedString(@"Sound card initialization failed. Restart the live view please.", nil)
#define ATTENTION_CHECKPSWVAILD_FAILD                          NSLocalizedString(@"Failed to verify the password.", nil)

#pragma mark -
#pragma mark HCNETSDK
// HCNetSDK
#define ATTENTION_OVER_MAXLINK                                 NSLocalizedString(@"No more connections is allowed.", nil)
#define ATTENTION_SDKVERSION_NOMATCH                           NSLocalizedString(@"Version mismatch, please check if the software or the firmware is updated to the latest.", nil)
#define ATTENTION_CONNECTDEV_FAILED                            NSLocalizedString(@"Device connection failed.", nil)

// tts
#define ATTENTION_TTS_BUSY                                     NSLocalizedString(@"The device is using the voice talk. Please try gain later.", nil)

// CAS
#define ATTENTION_CONNECTCASSERVER_FAILED                      NSLocalizedString(@"Connection failed.", nil)
#define ATTENTION_CASLIB_UNINIT                                NSLocalizedString(@"Initialization failed, reboot the software please.", nil)
#define ATTENTION_CASRECVDATE_FAILED                           NSLocalizedString(@"The device is offline or network is abnormal.", nil)
#define ATTENTION_SERIAL_NOLONGSUPPORT                         NSLocalizedString(@"The device with the current serial No. is not supported.", nil)
#define ATTENTION_OPERATION_ERROR                              NSLocalizedString(@"The device operation ID is not matched. Please refresh the list and try again.", nil)
#define ATTENTION_CONNECTSTREAMSERVER_ERROR                    NSLocalizedString(@"Failed to connect video server.", nil)
#define ATTENTION_SEARCHRECORD_ERROR                           NSLocalizedString(@"Searching failed.", nil)
#define ATTENTION_NORECORD_INTIME                              NSLocalizedString(@"No video file found in this period.", nil)
#define ATTENTION_NOLOCALSTORAGE                               NSLocalizedString(@"No local storage media. ", nil)
#define ATTENTION_FORMATTING                                   NSLocalizedString(@"Formatting…", nil)
#define ATTENTION_STARTFORMAT_FAILED                           NSLocalizedString(@"Initializing the HDD failed.", nil)
#define ATTENTION_NONEED_UPGRADE                               NSLocalizedString(@"No updating is required. ", nil)
#define ATTENTION_UPGRADESERVER_BUSY                           NSLocalizedString(@"Updating server is busy. Please try again.", nil)
#define ATTENTION_DEVICE_UPGRADING                             NSLocalizedString(@"Upgrading the device…", nil)
#define ATTENTION_DEVICE_UPGRADEDFAILED                        NSLocalizedString(@"Failed to upgrade.", nil)

// wait
#define ATTENTION_WAIT_DO_SAVE                                 NSLocalizedString(@"Saving... please wait...", nil)
#define ATTENTION_WAIT_DO_GETINFO                              NSLocalizedString(@"Getting... please wait...", nil)
#define ATTENTION_WAIT_DO_OPEN                                 NSLocalizedString(@"Enabling…please wait…", nil)
#define ATTENTION_WAIT_DO_CLOSE                                NSLocalizedString(@"Closing…please wait…", nil)
#define ATTENTION_WAIT_DO_SETTING                              NSLocalizedString(@"Configuring now, please wait...", nil)
#define ATTENTION_WAIT_DO_DELETE                               NSLocalizedString(@"Deleting…please wait…", nil)
#define ATTENTION_WAIT_DO_VERIFY                               NSLocalizedString(@"Verifying…please wait…", nil)
#define ATTENTION_WAIT_DO_REGISTER                             NSLocalizedString(@"Registering…please wait…", nil)
#define ATTENTION_WAIT_DO_LOGOUT                               NSLocalizedString(@"Logging out…please wait…", nil)
#define ATTENTION_WAIT_DO_CHECK                                NSLocalizedString(@"Detecting…please wait…", nil)
#define ATTENTION_WAIT_DO_CHECKNET                             NSLocalizedString(@"Checking the network connection…please wait…", nil)

#pragma mark -
#pragma mark AUTO_WIFI_SETTING

#define AUTO_WIFI_NET                                          NSLocalizedString(@"auto_wifi_net", nil)
#define AUTO_WIFI_TITILE_ADD_DEVICE                            NSLocalizedString(@"auto_wifi_title_add_device", nil)
#define AUTO_WIFI_DIALOG_CONNECTTING_MSG                       NSLocalizedString(@"auto_wifi_dialog_connecting_msg", nil)
#define AUTO_WIFI_CONNECTTING_MSG_1                            NSLocalizedString(@"auto_wifi_connecting_msg1", nil)
#define AUTO_WIFI_CONNECTTING_MSG_2                            NSLocalizedString(@"auto_wifi_connecting_msg2", nil)
#define AUTO_WIFI_CONNECTTING_MSG_3                            NSLocalizedString(@"auto_wifi_connecting_msg2", nil)
#define AUTO_WIFI_ADD_DEVICE_SUCCESS                           NSLocalizedString(@"auto_wifi_add_device_success", nil)
#define AUTO_WIFI_CONNECTTING_FAILED                           NSLocalizedString(@"auto_wifi_connecting_failed", nil)
#define AUTO_WIFI_REGISTER_FAILED                              NSLocalizedString(@"auto_wifi_register_failed", nil)
#define AUTO_WIFI_ADD_DEVICE_FAILED                            NSLocalizedString(@"auto_wifi_add_device_failed", nil)
#define AUTO_WIFI_DIALOG_TITLE_WIFI_REQIRED                    NSLocalizedString(@"auto_wifi_dialog_title_wifi_required", nil)
#define AUTO_WIFI_DIALOG_WIFI_REQIRED_MSG                      NSLocalizedString(@"auto_wifi_dialog_wifi_required_msg", nil)
#define AUTO_WIFI_STEP_1                                       NSLocalizedString(@"auto_wifi_step1", nil)
#define AUTO_WIFI_LINE_MSG                                     NSLocalizedString(@"auto_wifi_line_msg", nil)
#define AUTO_WIFI_LINE_CONNECTED                               NSLocalizedString(@"auto_wifi_line_connected", nil)
#define AUTO_WIFI_LINE_CONNECT                                 NSLocalizedString(@"auto_wifi_line_connect", nil)
#define AUTO_WIFI_COFIG_TIP                                    NSLocalizedString(@"auto_wifi_config_tip", nil)

#pragma mark - LINK DETECTOR
#define LINK_DETECTOR_TIPS  @"探测器和摄像机相关联后，当探测器检测到告警信息时，摄像机将及时记录告警画面信息。";
#endif
