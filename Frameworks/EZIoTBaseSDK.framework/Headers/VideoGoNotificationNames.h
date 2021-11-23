//
//  VideoGoNotificationNames.h
//  VideoGo
//
//  Created by zhengwen zhu on 9/9/13.
//
//

#ifndef VideoGo_VideoGoNotificationNames_h
#define VideoGo_VideoGoNotificationNames_h

/************** app lifecycle ****************/
//#define NOTIFICATION_APP_ENTER_FOREGROUND                @"10mElapsedBeforeEnterForeground"

/***************登录相关************************/
#define NOTIFICATION_JUMPTO_LOGIN                        @"jumpToLogin"
#define NOTIFICATION_MORE_LOGOUT_ACCOUNT                 @"logoutAcount"                    // 注销 切换用户
#define NOTIFICATION_SESSION_ERROR                       @"HTTP_RESPONSE_SESSION_ERROR"     // SESSION异常
#define NOTIFICATION_AUTO_LOGOUT                         @"AUTO_LOGOUT"                     // 自动退出登录
#define NOTIFICATION_PURE_POP_LOGINVIEW                  @"NOTIFICATION_PURE_POP_LOGINVIEW"     // 就弹登录窗口
#define NOTIFICATION_SHOP_RELOGIN                        @"shopRelogin"                     // 网页重新登录
#define NOTIFICATION_REGIST_SUCCESS                      @"Regist_success"                  // 注册成功返回登录界面
#define NOTIFICATION_WXLOGIN_RESP                        @"wx_login_resp"                   // 微信登录返回
#define NOTIFICATION_DTLOGIN_RESP                        @"dt_login_resp"                   // 钉钉登录返回
#define NOTIFICATION_SYNC_LOGIN_CALLBACK                 @"login_sync_callback"             // 同步登陆回调
#define NOTIFICATION_CONFIGGRAY_SUCCESS             @"configGray" //灰度配置接口完成

#define NOTIFICATION_AVATAR_UPLOADED_CALLBACK            @"uploaded_avatar_callback"        // 头像下载完成回调
#define NOTIFICATION_STARTUP_LOGININ                     @"StartUp_LoginIn" //启动登录,用于返回到登录页面进行登录操作
#define NOTIFICATION_LOGIN_SUCCESS  @"loginSuccess" //登陆成功
/***************云存储服务设置*******************/
#define NOTIFICATION_CS_SET_DEVICE_SERVICE          @"setDeviceService"         // 设置设备云存储服务
#define NOTIFICATION_CS_SET_USER_SERVICE            @"setUserService"           // 设置用户云存储服务
#define NOTIFICATION_CS_GET_USER_SERVICE            @"getUserService"           // 获取用户云存储服务状态
#define NOTIFICATION_CONFIGGRAY_SUCCESS             @"configGray"

/***************分页列表最大数灰度获取*******************/
#define NOTIFICATION_CONFIGGRAY_PAGE_LIMIT          @"grayConfig_pageLimit"         //获取到灰度配置的最大分页列表个数

/***************历史回放************************/
#define NOTIFICATION_PB_RECORD_DOWNLOAD_PROGRESS          @"recordDownloadProgress"
#define NOTIFICATION_PB_RECORD_DOWNLOAD_COUNT_CHANGED     @"recordDownloadCountChanged"
#define NOTIFICATION_PB_RECORD_DOWNLOAD_COMPLETED         @"recordDownloadCompleted"

/***************设备管理************************/
#define NOTIFICATION_DEVICE_DELETE_OPERATION_FORBIDDEN_RELOAD             @"deleteDeviceAndForbiddenReload"
#define NOTIFICATION_DEVICE_DELETE_OPERATION             @"deleteDevice"
#define NOTIFICATION_CAMERA_DELETE_OPERATION             @"deleteCamera"
#define NOTIFICATION_DEVICE_ERRORCODE_OFFLINE            @"deviceErrorCodeOffline"    // 设备收到下线错误通知
#define NOTIFICATION_DEVICE_LOCATION_DEFENCE             @"locationDefenceNotification"   // 位置更新设置布撤防
#define NOTIFICATION_DEVICE_ADD_CAMERAS                  @"deviceAddCameras"
#define NOTIFICATION_DEVICELIST_REFRESH                  @"deviceListRefresh"           // 设备列表刷新
#define NOTIFICATION_RELOAD_DEVICELIST_BY_GROUP          @"reloadDeviceListByGroup"     // 设备列表刷新
#define NOTIFICATION_DEVICE_INFO_GET                     @"getDeviceIndo"               // 获取单个设备信息
#define NOTIFICATION_DEVICE_EXIT_SHARE                   @"exitShareDevice"             //退出分享设备

#define ADD_DEVICE_REQUEST_DID_FINISHED_NOTIFICATION     @"addDeviceRequestDidFinished"
#define NOTIFICATION_DID_ADD_ONE_DEVICE                  @"deviceDidAdded"

#define NOTIFICATION_FAMILY_REQUEST_FINISHED              @"familysRequestFinished"         // 获取家庭列表信息完成

#define NOTIFICATION_CAMERA_NAME_CHANGE                  @"cameraNameChangeNotification"    // 监控点名称修改通知
#define NOTIFICATION_WIFI_NAME_CHANGE                @"wifiNameDidChangeNotification"//wifi名称修改
#define NOTIFICATION_GROUP_DEVICES_REQUEST_FINISHED       @"groupDevicesRequestFinished"   // 单个分组设备加载完成通知
#define NOTIFICATION_GROUPS_REQUEST_FINISHED              @"groupsRequestFinished"         // 获取分组信息完成
#define NOTIFICATION_EXPERIENCE_DEVICES_SWITCH_CHANGED    @"experienceDevicesSwitchChanged"    // 体验设备是否显示开关值更新通知

#define NOTIFICATION_ALL_DEVICES_REQUEST_FINISHED         @"allDevicesRequestFinished"     // 用户所有设备加载完成通知
#define NOTIFICATION_HUB_CHILD_DEVICES_REQUEST            @"NotificationHubChildDevicesRequest" /// hub 子设备列表请求成功通知

#define NOTIFICATION_CAMERAS_DATA                         @"CamerasData"

#define NOTIFICATION_DEVICE_DEFENCE_STATUS_CHANGED        @"deviceDefenceStatusChanged"
#define NOTIFICATION_DEVICE_LIST_TABBAR_SELECTED          @"deviceListTabBarSelected"

#define NOTIFICATION_DEVICE_PLAYLIMITTIME_CHANGED        @"PlayTimeLimitChanged"  //生成全景图延长预览限时时间
#define NOTIFICATION_CAMERA_CLOUDINFO_CHANGED            @"NOTIFICATION_CAMERA_CLOUDINFO_CHANGED" //设备云存储信息新增或更改
#define NOTIFICATION_DEVICE_SHAREINFO_CHANGED            @"NOTIFICATION_DEVICE_SHAREINFO_CHANGED" //设备分享信息新增或更改
#define NOTIFICATION_DEVICE_FACEINFO_CHANGED            @"NOTIFICATION_DEVICE_FACEINFO_CHANGED" //设备猫眼信息新增或更改
#define NOTIFICATION_DEVICE_DYNAMIC_REFRESH            @"NOTIFICATION_DEVICE_DYNAMIC_REFRESH " //猫眼设备动态列表刷新
#define NOTIFICATION_DEVICE_P2PINFO_CHANGED             @"NOTIFICATION_DEVICE_P2PINFO_CHANGED" //设备P2P信息新增或更改
#define NOTIFICATION_DEVICE_STORY_PLAYSTATUS        @"NOTIFICATION_DEVICE_STORY_PLAYSTATUS"//故事机播放状态修改
#define NOTIFICATION_DEVICE_AIRDETECTOR_STATUS        @"NOTIFICATION_DEVICE_AIRDETECTOR_STATUS"//空气检测仪状态改变
#define NOTIFICATION_SHOW_GROUP_PAGE         @"ys_show_gourp_page_notification" //首页展示分组
#define NOTIFICATION_SHOW_GUIDE_SETADV_ALERT         @"ys_show_guide_AdvSet_Alert_notification" //首页展示广告设置弹框

/***************系统消息************************/
#define NOTIFICATION_REMOTE_PUSH_SYSTEM_MESSAGE          @"systemMessages"       // 系统推送消息
#define NOTIFICATION_MANAGER_GET_CAMERA_INFO             @"getCameraInfo" //未读消息数量改变时通知

#define NOTIFICATION_LATEST_MESSAGE_DID_REQUEST         @"latestMessageDidRequestNotification" // 最近的视频留言、告警消息、设备下线、系统通知、萤石直播、萤石派请求完成
#define NOTIFICATION_MESSAGE_STATUS_CHANGE               @"messageStatusChangedNotification" //未读消息状态改变通知
#define NOTIFICATION_REMOTE_PUSH_VIOCE_MESSAGE           @"newVioceMessageNotification" //未读消息状态改变通知
#define NOTIFICATION_OPEN_OR_CLOSE                       @"notificationOpenORClose" //系统通知是否开启

#define NOTIFICATION_MALL_MESSAGE_COUNT_CHANGE         @"mallMessageCountChangeNotification" // 商城消息数改变
#define NOTIFICATION_REAL_UNREAD_MESSAGE_NO      @"realunreadmessagenoNotification"
#define NOTIFICATION_REAL_HIDE_UNREAD_MESSAGE    @"realhideunreadmessageNotification"
#define NOTIFICATION_LEAVEPLAYER_DELETE_PUSH    @"leavePlayerDeletePushNotification"   //留言视频删除发送通知
#define NOTIFICATION_REAL_ENABLE_ROTATE         @"real_enable_rotate"
/***************实时预览************************/
#define NOTIFICATION_REALPLAY_JOIN_360EDIT               @"realplayJoin360edit"// 实时预览截图 进入360sdk编辑
#define NOTIFICATION_EXPERIENCE_NO_PERMISSION            @"expericenceDeviceNoPermission"//无操作权限
#define NOTIFICATION_REALPLAY_QUIT_SHARE                 @"playerPlayeringQuitShare"//分享的通道被取消
#define NOTIFICATION_NETWORK_CHANGE  @"network_has_changed"

/***************接口调用返回************************/
#define NOTIFICATION_WEBSERVICE_SERVICE_CALLBACK                @"webServiceServiceCallbackNotication"  // 接口请求回调
#define NOTIFICATION_WEBSERVICE_INVITE_INITDATA                 @"webServiceServiceCallbackInviteInitData"  // 获取邀请未处理数据回调
#define NOTIFICATION_APPSERVICE_DISCOVERY_CALLBACK              @"appServiceDiscoveryInfoCallback"          // 发现页面获取最新信息更新回调
#define NOTIFICATION_AD_PRESENT_CHANGED                         @"adPresentChanged"                     // 浮层广告, 常驻广告更新

/***************设备升级开始************************/
#define NOTIFICATION_CHECK_UPGRADE_CONDITIONS_FINISHED            @"checkUpgradeConditionsFinished"
#define NOTIFICATION_DEVICE_UPGRADE_STATUS_CHANGED                @"upgradeDeviceStatusChanged"        // 设备升级
#define NOTIFICATION_CURRENT_DEVICE_UPGRADE_FINISHED              @"currentDeviceUpgradeFinished"
#define NOTIFICATION_DEVICE_UPGRADE_STATUS_WAIT                   @"upgradeDeviceTaskAddQueue"
#define NOTIFICATION_ONE_ACTION_UPGRADE_FINISHED                  @"oneActionUpgradeFinished"

#define NOTIFICATION_CAMERA_COVER_REQUEST_START                   @"coverSettingStart"
#define NOTIFICATION_CAMERA_COVER_REQUEST_FINISHED                @"coverSettingFinished"

/***************系统消息************************/
#define NOTIFICATION_REMOVE_SHARE_MESSAGE          @"removeShareMessgaeSuccess"       // 系统推送消息
#define NOTIFICATIOON_BUY_SHARE_SUCCESS            @"buyShareSuccess" // 扩容成功
#define NOTIFICATION_UPDATE_FACE_SERVICE_INFO      @"updateFaceServiceInfo" // H5更新人脸服务信息
#define NOTIFICATION_UPDATE_HUMAN_SERVICE_INFO      @"updateHumanServiceInfo" // H5更新人形服务信息
#define NOTIFICATION_WXPAY_RESPONSE                             @"wxpayResponse"
#define NOTIFICATION_ALIPAY_RESPONSE                            @"alipayResponse"

/***************广场视频距离显示************************/
#define NOTIFICATION_SQUAREVIDEO_STOPBARALPHA_CHANGE @"SquareVideoStopBarAlphaChange" //视频tabbar透明度变化

#define NOTIFICATION_YSDEVICECLOUD_GET_END          @"YSDeviceCloudStatusGetEnd"        // 获取设备云存储状态结束
#define NOTIFICATION_SQUAREVIDEO_REALVIEW_ORIENTATION_CHANGE @"squareRealViewOrientationChange" // 视频广场播放视图方向改变
#define NOTIFICATION_SQUAREHOTADV_NEEDRELFESH @"squareHotAdvNeedReflesh"// 需要刷新直播热门广告
/***************个人管理相关************************/

#define NOTIFICATION_YSSCROLLVIEWDIDSCROLL     @"scrollViewDidScroll" // tableview 滚动
#define NOTIFICATION_YSSCROLLVIEWDIDEENDSDRAGGING     @"scrollViewDidEndDragging"
#define NOTIFICATION_PERSONMANAGER_NEED_REFLESH       @"personmanagerNeedReflesh"
/***************x2设置************************/

#define NOTIFICATION_IMAGEEDITE_DONE    @"imageEditDone"//图片编辑完成
#define NOTIFICATION_IMAGEEDITE_CANCLE  @"imageEditCancle"//图片编辑取消

#define NOTIFICATION_MODIFYWIFIPSW_SUCCESS @"modifyWifiPasswordSuccess"//修改wifi密码成功

#define NOTIFICATION_MODIFY_PRIVATEWIFIINFO_SUCCESS @"modifyPrivateWifiInfoSuccess"//修改私有wifi数据成功
#define NOTIFICATION_MODIFY_PORTALWIFIINFO_SUCCESS @"modifyPortalWifiInfoSuccess"//修改营销wifi信息成功
/***************a1设置************************/

#define NOTIFICATION_MODIFY_DEFENCESWITCH_SUCCESS @"modifyA1DefenceSwitchSuccess"//修改A1防护开关成功

/***************设备解绑***********************/
#define NOTIFICATION_UNBINDDEVICE_SUCCESS @"unbindDeviceSuccess"//解绑设备成功

#define NOTIFICATION_WIFI_CONFIG_SUCCESS @"wifiConfigSuccess"//wifi配置成功

/***************微博分享***********************/
#define NOTIFICATION_WEIBO_SENDMESSAGETOWEIBO @"sendMessageToWeiBo" //微博分享
#define NOTIFICATION_WEIBO_SSOAUTHSUCCESS @"ssoAuthSuccess"

/***************消息***********************/
#define NOTIFICATION_GoFromAlarmComingViewtoViewControllerKey @"goFromAlarmComingViewtoViewControllerKey"

/**************版本检测更新***********************/
#define NOTIFICATION_NEW_APPVERSION  @"newVersionForApp"

/**************好友***********************/
#define NOTIFICATION_MODIFY_REMARK_SUCCESS @"modifyFriendRemark"
#define NOTIFICATION_ADD_FRIEND_SUCCESS    @"addfriendSuccess"
#define NOTIFICATION_SQUARE_VIDEO_REFRESH @"EzvizAnnounceVideoRefreshNotification"
#define NOTIFICATION_SENTDINVITE_FRIEND_SUCCESS @"sentFriendInvite"
#define NOTIFICATION_DELETE_FRIENDINFO @"deleleFriendInfo"
#define NOTIFICATION_ADD_FRIENDLIST @"addfriends"
#define NOTIFICATION_FETCHFRIENDLIST_SUCCESS @"fetchFriendListSuccess"
#define NOTIFICATION_RELOAD_CAMERASHARELIST_BYFRIEND @"reloadCameraShareListByFriend"
/**************预览***********************/
#define NOTIFICATION_REAL_CLOSE_FLOW_VIEW    @"YSCloseFlowView"

/**************分享***********************/
#define NOTIFICAITON_DIDSELECT_SHARETIMES    @"didSelectShareTimes"
#define NOTIFICAITON_DIDSELECT_PERMISSION    @"didSelectSharePermission"
#define NOTIFICATION_NEEDREFLESH_DYNAMICSHARELIST @"needRefleshDynamicShareList"
#define NOTIFICATION_NEEDREFLESH_DYNAMICSHAREINfO @"needRefleshDynamicShareInfo"
#define NOTIFICATION_LOGINOUT_SHARE @"loginOutShare"
/**************IM***********************/
#define NOTIFICATION_IM_PUSH  @"imessagePush"
#define NOTIFICATION_IM_DID_LOGIN      @"didLoginEaseMobile" // 用户已登录环信服务
#define NOTIFICATION_PAUSE_AUDIO_SESSION        @"pauseAudioSession"
#define NOTIFICATION_RESUME_AUDIO_SESSION        @"resumeAudioSession"
/**************群组***********************/
#define NOTIFICATION_SHAREGROUP_PUSH  @"shareGroupPush"
/**************云空间***********************/
#define NOTIFICATION_CLOUDSPACE_DELETEFILE_SUCCESS @"cloudSpaceDeleteFileSuc"

/***************零售商登录**********************/
#define NOTIFICATION_Retailer_Update @"NOTIFICATION_Retailer_Update"
/***************O店登录**********************/
#define NOTIFICATION_Is_OStoreAccount @"NOTIFICATION_Is_OStoreAccount"

/***************角标**********************/
#define NOTIFICATION_NEED_BRING_BADGEVIEWS_TO_FRONT @"notification_need_bring_badgeViews_to_front"
/***************云录像**********************/
#define NOTIFICATION_YSSCROLLVIEWDIDSCROLL_CLOUD     @"scrollViewDidScroll_cloud" // tableview 滚动
#define NOTIFICATION_YSSCROLLVIEW_HIDE_NAV    @"NOTIFICATION_YSSCROLLVIEW_HIDE_NAV"
#define NOTIFICATION_YSSCROLLVIEW_SHOW_NAV    @"NOTIFICATION_YSSCROLLVIEW_SHOW_NAV"
#define NOTIFICATION_DID_DELETE_RECORDS       @"NOTIFICATION_DID_DELETE_RECORDS"  // 云录像列表删除录像
/***************云状态更新**********************/
#define NOTIFICATION_CLOUD_STATUS_CHANGED @"notificatioon_cloud_status_chagned"
/***************猫眼呼叫**********************/
#define NOTIICATION_HIDE_CAMERA_GROUP_ACTION_VIEW_SET @"hide_camera_group_action_view_set"
#define NOTIFICATION_UPGRADE_MISSING_DOOR_BELLS       @"upgradeMissingDoorBells" // 更新门铃未接呼叫记录
/***************直播分享成功通知***************/
#define YS_LIVE_SHARED_SUCCESS_NOTIFICATION @"ys_live_shared_success_notification"

/***************远程通知***************/
#define YS_FORCE_UPDATE_VIDEOGOMESSAGELIST @"YS_FORCE_UPDATE_VIDEOGOMESSAGELIST"
#define YS_FORCE_UPDATE_NotiMessageCount @"YS_FORCE_UPDATE_NotiMessageCount"  //消息列表头部通知进入子页面之后返回时需要刷新count

#pragma mark - YS_SERVICE_GET_CLASS(MsgManagerProtocol) 相关 解耦使用
/***************addPushMsg***************/
#define YS_MSGMANAGER_ADDPUSHMSG_NOTIFICATION @"YS_MSGMANAGER_ADDPUSHMSG_NOTIFICATION"

//YSBadgeConfig
#define YS_BADGECONFIG_RELOADREDPOINTVISIBILITY_NOTIFICATION @"YS_BADGECONFIG_RELOADREDPOINTVISIBILITY_NOTIFICATION"

#define screenTouchEventKey @"screenTouchEvent"
#define screenTouchDataKey @"screenTouchData"

#pragma mark - 呼叫
#define NOTIFICATION_CALLCENTER_NOTIFICATION  @"notification_callcenter_notification"

#pragma mark - HAC
#define NOTIFICATION_HAC_LINK_SUCCESS_NOTIFICATION  @"notification_HAC_link_success_notification"

//猫眼动态检测 需要刷新通知
#define NOTIFICATION_SMARTRING_FACELIST_NEEDUPDATE_NOTIFICATION  @"notification_smartring_facelist_needupdate_notification"
#define NOTIFICATION_SHAREPERMISSION_REFLESH @"notification_sharePermission_reflesh"
#define NOTIFICATION_SWITCH @"notificationSwitch"

//智能筛选服务状态更新通知
#define YS_NOTIFICATION_CLOUD_FILTER_UPDATE @"YS_Notification_Cloud_Filter_Update"

/***************5.0首页 ************************/
//首页是否显示天气
#define YS_NOTIFICATION_GRAY_CONFIG_WEATHER @"YS_Notification_Gray_Config_Weather"
//首页云存储状态
#define YS_NOTIFICATION_GRAY_CONFIG_CLOUD_SERVICE @"YS_Notification_Gray_Config_CloudService"

//5.0引导页
#define YS_NOTIFICATION_CLOSE_NOVICE_GUIDE_TYPE @"YS_Notification_Close_Novice_Guide_Type"
//5.0消息
#define TELEPHONE_ALARM_OPEN_OR_CLOSE @"TELEPHONE_ALARM_OPEN_OR_CLOSE"
//消息卡片有数据更新
#define YS_NOTIFICATION_MESSAGE_CARD_RELOAD @"YS_Notification_Message_Card_Reload"
//消息卡片拖拽更新首页展示
#define YS_NOTIFICATION_MESSAGE_CARD_UPDATE @"YS_Notification_Message_Card_Update"
//RN发送筛选消息
#define YS_NOTIFICATION_MESSAGE_SEND_SELECT_EVENT @"YS_Notification_Message_send_select_event"
//发送已读消息
#define YS_NOTIFICATION_MESSAGE_SEND_READ_EVENT @"YS_Notification_Message_send_read_event"
//接收到RN数据更新
#define YS_NOTIFICATION_MESSAGE_GET_MESSAGE_INFO_UPDATE @"YS_Notification_Message_get_message_info_update"
//刷新消息列表
#define YS_NOTIFICATION_MESSAGE_LIST_REFRESH @"YS_Notification_Message_list_refresh"

#define YS_NOTIFICATION_REGISTER_USER_LABEL_CLOSE @"YS_Notification_Register_User_Label_Close"

#define YS_NOTIFICATION_USER_INFO_LABEL_CHANGE @"YS_Notification_Birthday_User_Label_Change"

#define YS_NOTIFICATION_USER_LABEL_REQUEST_SUCCESS @"YS_Notification_User_Label_Request_SUCCESS"

#define YS_NOTIFICATION_PTZ_REQUEST_PRESENT_FINISH @"YS_Notification_PTZ_Request_Present_Finish"

#define YS_NOTIFICATION_DEVICE_CARD_SETTING_CHANGED @"YS_NOTIFICATION_DEVICE_CARD_SETTING_CHANGED"

#endif
