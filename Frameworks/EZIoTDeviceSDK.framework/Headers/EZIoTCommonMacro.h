//
//  EZIoTCommonMacro.h
//  EZIoTDeviceSDK
//
//  Created by yuqian on 2021/6/24.
//

#ifndef EZIoTCommonMacro_h
#define EZIoTCommonMacro_h

#import <EZIoTDebugSDK/YSLogDefine.h>

#define YSLOG_DEVICE_ERROR(frmt, ...)   YSLOGDEFINELEVEL(@"DEVICE_SDK", @"Error", frmt, ##__VA_ARGS__)
#define YSLOG_DEVICE_WARNING(frmt, ...) YSLOGDEFINELEVEL(@"DEVICE_SDK", @"Waring", frmt, ##__VA_ARGS__)
#define YSLOG_DEVICE_INFO(frmt, ...)    YSLOGDEFINELEVEL(@"DEVICE_SDK", @"Info", frmt,  ##__VA_ARGS__)



#define kFeatureSeparator @"#"
#define YSFeaturePK1(deviceInfo) YSFeaturePK2(deviceInfo.deviceType, deviceInfo.version)
#define YSFeaturePK2(deviceType, version) [NSString stringWithFormat:@"PV(productId=%@, version=%@)",deviceType, version]

#pragma mark - 能力集定义
#define Device_new_support_allDayRecordSwitch @"all_day_video_switch"//全天录像开关
#define Device_new_support_defenceSetting @"defence_setting"//布撤防开关
#define Device_new_support_remindWay @"remind_way"//提醒方式设置
#define Device_new_support_SDStatus @"sd_status"//查询SD卡存储状态
#define Device_new_support_statusLightSwitch @"status_light_switch"//灯光设置
#define Device_new_support_soundSwitch @"sound_switch"//声音开关设置能力
#define Device_new_support_timezoneSetting @"timezone_setting"//时区配置
#define Device_new_support_privacySwitch @"privacy_switch"//隐私保护
#define Device_new_support_encryptSwitch @"encrypt_switch"//视频图像加密
#define Device_new_support_SDFormat @"sd_format"//SD卡格式化
#define Device_new_support_capture @"support_capture"//封面抓图
#define Device_new_support_PTZCtl @"ptz_ctl"//云台左右
#define Device_new_support_batteryDeviceP2P @"support_battery_device_p2p"//支持P2P
#define Device_new_support_resolution @"support_resolution"//分辨率 16-9 表示 16:9
#define Device_new_support_record @"support_record"//录像
#define Device_new_support_quickplay @"support_quickplay"//是否支持调节回放播放速度功能
#define Device_new_support_videoSearch @"support_video_search"//录像搜索
#define Device_new_support_playback @"support_playback"//录像回放
#define Device_new_support_talk @"support_talk"//对讲
#define Device_new_support_unbind @"support_unbind"//解绑设备
#define Device_new_support_upgrade @"support_upgrade"//设备升级
#define Device_new_support_p2p_mode @"support_p2p_mode"//是否支持p2p
#define Device_new_support_reverse_direct @"support_reverse_direct"//是否支持反向直连
#define Device_new_support_voice_volume @"voice_volume"//音量设置{volume: 10}
#define Device_new_support_encrypt_info @"encrypt_info" //加密状态查询{"kms_version":"101","isEncrypted":0,"encryptPwd":"875191ba0144c42c2bca87a771edf2da"}
#define Device_new_support_video_quality @"video_quality" //码流[{"streamType":1,"videoLevel":3}]
#define Device_new_support_channel_no @"channel_no" //通道数{"range_from": 0, "range_to": 1000, "interval": 1, "multiple": 0, "unit": ""}
#define Device_new_support_net_type @"support_net_type" //配网类型["0","1"]
#define Device_new_support_nat_pass @"support_nat_pass" //设备是否支持NAT组合为3-4的NAT穿透
#define Device_new_support_replay_speed @"support_replay_speed" //支持调节回放播放速度功能
#define Device_new_support_sdk_cap @"support_sdk_cap" //sdk能力 {"sc":"1","V3":"1"}
#define Device_new_support_FaceFrameMark @"alarm_detect_mode"
#define Device_new_support_Cloud @"support_cloud"
#define Device_new_playback_ecdh_crypt @"new_playback_ecdh_crypt" //回放全链路加密
#define Device_new_realback_ecdh_crypt @"new_realback_ecdh_crypt" //预览全链路加密


typedef enum
{
    IoT_Device_support_defence = 0,                 // 布撤防
    IoT_Device_support_defencePlan,                 // 布防计划
    IoT_Device_support_message,                     // 留言
    IoT_Device_support_alarmVoice,                  // 告警声音配置
    IoT_Device_support_autoOffline,                 // 自动上下线
    IoT_Device_support_cloud,                       // 10 设备云存储
    IoT_Device_support_cloudVersion,                // 云存储版本
    IoT_Device_support_wifi,                        // 是否支持wifi 0-不支持 1-支持 2-支持带userId的新的wifi配置方式 3-支持smartwifi
    IoT_Device_support_modifyPassword,              // 修改密码
    IoT_Device_support_multiScreen,                 // 多画面播放
    IoT_Device_support_uploadCloudFile,             // 云存储上传文件
    IoT_Device_support_addDelDetector,              // 添加或者删除探测器
    IoT_Device_support_ipcLink,                     // 关联摄像头
    IoT_Device_support_modifyDetectorName,          // 修改外设名字
    IoT_Device_support_safeModePlan,                // 21定时改变安全模式
    IoT_Device_support_modifyDetectorGuard,         // 探测器单独布撤防功能 0,0,7,7,7,0
    IoT_Device_support_weixin,                      // 微信互联
    IoT_Device_support_ssl,                         // 声源定位
    IoT_Device_support_relatedDevice,               // 0-无关联设备 1-关联监控点N1 2-关联探测器A1 3-关联监控点和探测是R1 4-关联视频源D1
    IoT_Device_support_relatedStorage,              // 关联存储
    IoT_Device_support_remoteAuthRandcode,          // 远程授权
    IoT_Device_support_sdkTransport,                // 28跨公网远程配置
    IoT_Device_support_ptz_top_bottom,              // 云台上下
    IoT_Device_support_ptz_45,                      // 云台45度
    IoT_Device_support_zoom,                        // 云台Zoom
    IoT_Device_support_ptz_preset,                  // 云台预置点
    IoT_Device_support_ptz_commonCruise,            // 普通巡航
    IoT_Device_support_ptz_figureCruise,            // 35花样巡航
    IoT_Device_support_ptz_centerMirror,            // 中心镜像
    IoT_Device_support_ptz_left_rightMirror,        // 左右镜像
    IoT_Device_support_ptz_top_bottomMirror,        // 上下镜像
    IoT_Device_support_ptz_closeScene,              // 隐私遮蔽（关闭镜头）
    IoT_Device_support_wifi_2p4G,                   // 40是否支持2.4G无线频段：1-支持，0-不支持
    IoT_Device_support_wifi_5G,                     // 是否支持5G无线频段：1-支持，0-不支持
    IoT_Device_support_wifi_portal,                 // 是否支持营销wifi，只有support_wifi_2.4G=1的时候才生效：1-支持，0-不支持
    IoT_Device_support_auto_adjust,                 // 是否支持自适应码流：1-支持，0-不支持
    IoT_Device_support_timezone,                    // 是否支持时区配置：1-支持，0-不支持
    IoT_Device_support_language,                    // 支持的语言类型：ENGLISH,SIMPCN,....
    IoT_Device_support_close_infrared_light,        // 是否支持红外开关：1-支持，0-不支持
    IoT_Device_support_modify_chan_name,            // 支持通道名称配置到设备（IPC/NVR)   0：不支持   1：支持
    IoT_Device_support_ptz_model,                   // 0-支持直连+转发云台控制， 1-支持直连云台控制，2-支持转发云台控制
    IoT_Device_support_mic_up_down = 50,            // 50设备是否支持使用下面mic取声音
    IoT_Device_support_chan_type,                   // 通道类型，1-数字通道，2-模拟通道
    IoT_Device_support_flow_statistics,             // 是否支持客流统计：0-不支持，1-支持
    IoT_Device_support_more,                        // 是否支持更多设置:0-不支持，1-支持
    IoT_Device_support_remote_quiet,                // A1是否支持远程消警（静音）功能：0-不支持 1-支持
    IoT_Device_support_customize_rate,              // 是否支持自定义码率： 0不支持 1支持
    IoT_Device_support_rectify_image,               // 是否支持畸形矫正：0-不支持，1-支持
    IoT_Device_support_bluetooth,                   // 是否支持蓝牙：0-不支持，1-支持
    IoT_Device_support_p2p_mode,                    // 默认0，表示老的p2p协议；配置为1，表示该版本支持新的p2p协议
    IoT_Device_support_microscope,                    // 是否支持显微镜功能：0-不支持，1-支持
    IoT_Device_support_sensibility_adjust,          // 60是否支持移动侦测灵敏度调节：0-不支持，1-7档， 2-三挡
    IoT_Device_support_sleep,                       // 支持睡眠
    IoT_Device_support_protection_mode,             // 防护模式
    IoT_Device_support_high_quality_limit,          // 是否流媒体高清限流
    IoT_Device_support_support_userId,              // 是否支持通过UserID关联设备，0：不支持，1：支持
    IoT_Device_support_support_music,               // 是否支持儿歌播放功能，0-不支持，1-支持
    IoT_Device_support_reverse_direct,              // 设备是否支持反向直连功能， 0-不支持， 1-支持
    IoT_Device_support_channel_offline,             // 设备是否支持通道下线通知，0-不支持， 1-支持，支持后通道下线会触发ideoloss的告警
    IoT_Device_support_fullscreen_ptz,              // 是否支持全景云台功能：0-不支持，1-支持 // C6B等云台摄像机支持
    IoT_Device_support_preset_alarm,                // 是否支持预置点告警联动：0-不支持，1-支持 // C6B等云台摄像机支持
    IoT_Device_support_intelligent_track,           // 是否支持智能跟踪：0-不支持，1-支持 // C6B等云台摄像机支持
    IoT_Device_support_key_focus,                   // 是否支持一键聚焦：0-不支持，1-支持 // F1、F2等变焦摄像机支持
    IoT_Device_support_volumn_set,                  // 是否支持音量调节：0-不支持，1-支持
    IoT_Device_support_temperature_alarm,           // 75是否支持温湿度告警：0-不支持，1-支持 // F2、C1S等带温湿度传感器的摄像机支持，新增空气检测仪
    IoT_Device_support_mcvolumn_set,                //    是否支持麦克风音量调节：0-不支持，1-支持
    IoT_Device_support_unlock,                      //    是否支持开锁：0-不支持，1-支持
    IoT_Device_support_noencript_via_antproxy,      //    是否支持走代理时可以自动加密“没有开启视频加密”的流：0-不支持，1-支持
    IoT_Device_support_device_offline_notify,       //    是否支持设备下线通知：0-不支持，1-支持
    IoT_Device_support_fullscreen_ptz_12,           //    是否支持全景云台功能：0-不支持，1-支持 // C6B等云台摄像机支持（最新能力级，支持12张全景云台图片）
    IoT_Device_support_speech_recognition,          // 是否支持语音识别：0-不支持，1-支持
    IoT_Device_support_message_cover,               // 是否支持留言封面：0-不支持，1-支持
    IoT_Device_support_nat_pass,                    // 设备是否支持NAT组合为3-4的NAT穿透（P2PV2.1）：0-不支持，1-支持
    IoT_Device_support_nvr_whitelist,               // NVR设备是否支持白名单成员管理：0-不支持，1-支持
    IoT_Device_support_voice_alarmclock,            // 85是否支持语音闹钟功能：0-不支持，1-支持 // F2设备支持
    IoT_Device_support_new_talk,                    // 是否支持新对讲服务：0-不支持，1-支持
    IoT_Device_support_query_play_connections,      // 是否支持查询当前预览，回放链接信息:0-不支持，1-支持
    IoT_Device_support_ptz_auto_reset,              // 是否支持云台自动复位：0-不支持，1-支持
    IoT_Device_support_fisheye_mode,                //90 是否支持鱼眼模式：0-不支持，1-支持
    IoT_Device_support_custom_voice,                 // 是否支持自定义语音：0-不支持，1-支持 // 语音闹钟，告警声音使用
    IoT_Device_support_sound_wave,                  //是否支持声波配置：0-不支持，1-支持 // APPv3.7新增需求
    IoT_Device_replay_chan_nums,                     //X3或者N1可以关联的通道数。
    IoT_Device_support_horizontal_panoramic,         //是否支持水平全景：0-不支持，1-支持。---from 葛迪锋
    IoT_Device_support_active_defense,              //95是否支持主动防御功能：0-不支持，1-主动防御按钮，2-主动防御按钮+灯光提醒开关  ---from 葛迪锋
    IoT_Device_support_motion_detect_area,          //是否支持移动侦测区域绘制
    IoT_Device_support_ptz_focus,                   //是否支持焦距模式 0 -不支持，1-支持 ---from HC的3.1版本
    IoT_Device_support_pir_detect,                  //红外检测能力，from 猫眼设备
    IoT_Device_support_doorbell_talk,               //100门铃呼叫能力，from 猫眼设备
    IoT_Device_support_face_detect,                 //人脸检测能力，from 猫眼设备
    IoT_Device_support_restart_time,                //设备重启时间，配置单位为秒数，默认120s， from ezviz 3.4.1
    IoT_Device_support_human_filter,                 //设备是否支持人形过滤能力，0-不支持，1-支持 // C5SI型号，设备通过智能芯片硬件来支持
    IoT_Device_support_human_service,//人形检测能力，设备+平台服务开通，实现智能提醒服务能力 // 设备通过更新软件版本可以支持
    IoT_Device_support_ap_mode,//支持ap模式配置
    IoT_Device_support_continuous_cloud,//0-不支持连续云存 1-支持连续云存储 2-待定（连续云存储的升级服务）备注：与support_cloud完全无关 -- from 徐财富
    IoT_Device_support_doorbell_sound, //  107 是否支持门铃声音：0-不支持，1-支持  --from DLS3门锁
    IoT_Device_support_associate_detector,//是否支持关联探测器：0-不支持，1-支持；–from 新版门锁(暂时客户端不使用,逻辑放在服务端)
    IoT_Device_support_modify_username, //是否支持修改门锁用户备注名称：0-不支持，1-支持
    IoT_Device_support_transfertype,  //预览取流格式传输类型：0-tcp，1-udp，默认0表示tcp
    
    IoT_Device_support_vertical_panoramic, //是否支持垂直全景，0-不支持，1-支持（海外）场景：门铃使用，与support_horizontal_panoramic能力级对应
    IoT_Device_support_alarm_light,        //是否支持安防灯，0-不支持，1-支持 （海外）场景：安防灯设备使用，是否支持安防灯及灯亮度调节
    IoT_Device_support_alarm_area,     //是否支持报警区域设置，0-不支持，1-支持（海外）场景：安防灯、门铃设备使用，是否支持布防区域设置
    IoT_Device_support_chime,          //是否支持门铃chime，0-不支持，1-支持（海外）场景：门铃使用，是否支持扩展铃
    
    IoT_Device_support_relation_camera, //W2D 关联摄像机功能，0-不支持，1-支持场景：APP目前只是用这个能力集来判断设备是否显示这个关联模式按钮（设备进入关联模式后一段时间内（120秒），无线摄像机可以关联上W2D设备）
    IoT_Device_support_pir_setting,    //117   PIR区域设置的能力，0-不支持，1-支持场景：判断设备是否支持红外区域设置功能
    IoT_Device_support_battery_manage, //118   支持电池电量管理，0-不支持，1-支持 场景：App首页根据这个字段显示电池电量剩余信息，设置界面显示电池电量管理界面，目前适用电池门铃和C31设备 1.首页等界面展示电池状态 2.设置界面展示电池管理界面 3.添加前安装说明区分电池设备
    
    IoT_Device_support_hub_auto = 137, // HUB自动化，领域：智能家居，0-不支持，1-支持
    IoT_Device_support_qr_add = 139,//二维码扫描配网，0=不支持、1=有二维码扫描能力， 2=默认二维码扫描
    IoT_Device_support_device_wired,//支持有线
    IoT_Device_support_device_light, //设备拥有指示灯，0=不支持、1=支持
    IoT_Device_support_device_sound, //设备配置了配网提示音
    IoT_Device_support_auto_sleep = 143,
    IoT_Device_support_smart_statistics = 146,//智能客流分析
    IoT_Device_support_frame_quickPlay = 148, //设备录像抽帧快放能力集
    IoT_Device_support_forbid_antarmy = 149,//0：不禁止蚁兵取流；1：禁止蚁兵取流；
    IoT_Device_support_ap_allseries = 151,//设备全系列支持AP模式
    IoT_Device_support_smart_child_dev = 154,                  // 智能子设备，只能通过关联智能 hub 上网
    IoT_Device_support_add_smart_child_dev = 155,          // 支持关联删除智能子设备
    IoT_Device_support_switch_brightness_control = 157,  // 支持按键状态灯亮度控制
    IoT_Device_support_ptz_position_correction = 158,    // ptz 云台位置校准
    
    IoT_Device_support_delete_card = 159,//门锁是否支持删除智能卡 0：不支持  1：支持
    IoT_Device_support_user_expired = 242,//门锁是否支持用户使用有效期设置  0:不支持  1：支持
    IoT_Device_support_ptzcmd_via_p2pv3 = 168,//云台控制信令经P2PV3透传
    IoT_Device_support_switch_talkmode = 169,//是否支持全双工、半双工对讲切换    对讲
    
    IoT_Device_support_defence_show_pir = 173,//检测提醒  显示成 智能人体检测
    
    IoT_Device_support_signal_asyn = 182,//预览信令异步处理
    IoT_Device_support_smart_defence = 183,//智能侦测设置, 0不支持智能侦测， 1 支持智能支持
    
    IoT_Device_support_forbid_format = 193,   //设备禁止格式化功能
    IoT_Device_support_face_frame_mark = 195,//人脸框标记功能
    IoT_Device_support_cruise_tracking = 196 ,//巡航跟踪
    IoT_Device_support_human_tracking = 197, //人形跟踪
    IoT_Device_support_ptz_horizontal_360 = 198, //水平360度旋转
    IoT_Device_support_playback_quality_change = 199, //设备是否支持回放清晰度切换
    
    IoT_Device_support_default_voice = 201,
    IoT_Device_support_change_volume = 202,
    
    IoT_Device_support_talk_prior_to_ptz = 207 ,//支持对讲优先级高于云台
    
    
    IoT_Device_support_private_cloud = 210, // 后端设备是否支持私有云
    
    IoT_Device_support_pir_setting_type = 209,  //区域绘制类型：0门铃 1安防灯
    
    
    IoT_Device_support_stoprecord_video = 218, //SD卡暂不录像功能
    IoT_Device_support_partial_image_optimiza = 220,//局部图像优化
    
    IoT_Device_support_custom_voice_plan = 221, //提醒计划
    
    IoT_Device_support_temperature_pip = 269,//温度分布画中画显示
    IoT_Device_support_high_temperature_alarm = 270,//高温预警提醒
    IoT_Device_support_sound_collection = 271,//声音采集
    
    IoT_Device_support_playback_ecdh_crypt = 283, //设备录像回放传输加密开关
    IoT_Device_support_smart_distribution = 274, //蚁兵-智能分流
    
    IoT_Device_support_smart_body_detect = 243, //DP1C智能人体检测
    
    IoT_Device_support_new_search_records = 255, //设备录像查询新协议
    IoT_Device_support_qos_talk_version   = 286, //设备Qos对讲版本
    IoT_Device_support_light_activity_remind = 300, //灯光开启提醒
    
    IoT_Device_support_fecCeiling_correctType = 311,//顶装矫正模式
    IoT_Device_support_fecWall_correctType    = 312,//壁装矫正模式
    
    IoT_Device_support_body_face_marker  = 318,//人形人脸框标记
    
    IoT_Device_support_supper_eye = 320,//超眼追踪能力集
    
    IoT_Device_support_battery_number = 321, //获取电池能力集(0)不使用电池(1)一块电池(2)两块电池  
    
    IoT_Device_support_hd_priorit   = 322 , //硬解优先级能力集 (0)不支持硬解，默认采用软解(1)264编码（标准H264或smart H264），支持硬解(2)265编码（标准H265编码或ssmart H265），支持硬解 iOS硬解的支持情况：针对264编码：iOS 9以上 ; 针对265编码：iOS 11以上
    IoT_Device_support_upgrade_remind = 328, //支持子设备升级提示
    
    IoT_Device_support_chime_doorbell_autolink = 333,//chime和门铃是否能自动关联
    
    IoT_Device_support_ap_mode_scan_wifi = 334,//新的扫描周边配网方式
    
}IoT_Device_support_type;

#endif /* EZIoTCommonMacro_h */
