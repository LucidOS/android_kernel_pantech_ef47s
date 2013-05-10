#ifndef __CUST_SKY_DS_H__
#define __CUST_SKY_DS_H__

/*****************************************************
    SKY Android model common.
    Feature Name : T_SKY_MODEL_TARGET_COMMON
******************************************************/
#ifdef T_SKY_MODEL_TARGET_COMMON
#endif /* T_SKY_MODEL_TARGET_COMMON */


/* ######################################################################### */
/*****************************************************
    Feature Name : T_SKY_MODEL_TARGET_WCDMA
    Need to include this file in CUST_SKY.h
******************************************************/
#ifdef T_SKY_MODEL_TARGET_WCDMA
/************************************************************************************************************************
**    1. Related Data-connection
************************************************************************************************************************/

#define FEATURE_SKY_DS_ADD_DATA_AIDL

#define FEATURE_SKY_DS_BUG_FIX_STARTUSINGNETWORKFEATURE

#define FEATURE_SKY_DS_FAST_DORMANCY

#define FEATURE_SKY_DS_IMMEDIATE_SETUP
 
#define FEATURE_SKY_DS_PDP_REJECT_POPUP
 
#define FEATURE_SKY_DS_NO_SERVICE_BUG_FIX
 
#define FEATURE_SKY_DS_DHCP_DISCOVER_TIMER	//20120602
  
#define FEATURE_SKY_DS_CNE_DISABLE
 
#define FEATURE_SKY_DS_BACKGROUND_RESTRICT_BUG_FIX 

#define FEATURE_SKY_DS_IP6TABLE_UID_BUG_FIX

#define FEATURE_SKY_DS_NET_OVERLIMIT_API

// replaced (FEATURE_SKY_DS_ICON_NO_SRV_CR347576)
//#define FEATURE_SKY_DS_AIRPLANEMODE_BUG_FIX   // about to remove after 1046 patch
//temp_block #define FEATURE_SKY_DS_ICON_NO_SRV_CR347576

#define FEATURE_SKY_DS_SKIP_3GPP2_PROFILE_PROCESS	//20120602

#define FEATURE_SKY_DS_FIX_RADIO_TECH_UNKOWN_IN_CS	//20120602

#define FEATURE_SKY_DS_SET_TCPBUF_IN_RAT_CHANGE	//20120602

#define FEATURE_SKY_DS_DEFAULT_CONGESTION_CONTROL	//20120625

//dhcp lease time 24h, tethercontroller.cpp	//20120602

#define FEATURE_SKY_DS_EF44S_1530_PATCH_DATA_DISABLE_BUG_FIX_TEMP

#define FEATURE_SKY_DS_ICS_IPTYPE_QC_ERROR_FIX	//20120622

//LINUX\android\kernel\net\ipv6\route.c
#define FEATURE_SKY_DS_GOOGLE_PATCH_CVE_2012_2811

#define FEATURE_SKY_DS_DATA_REGISTRATION_QUERY_FAIL_RECOVERY

#define FEATURE_SKY_DS_TETHERING_SETDNSFORWARD_BUG_FIX

#define FEATURE_SKY_DS_FOUND_DATA_CALL_AFTER_PHONE_PROCESS_RESTART

#define FEATURE_SKY_DS_CHANGE_MOBILE_IFACE_LIST

#define FEATURE_SKY_DS_RETRY_TIMER_RESET_BUG_FIX //20120806

//NetworkController.java because of ims apn type
#define FEATURE_SKY_DS_HIDE_DATA_ICON_WHEN_WIFI_CONNECTED

#define FEATURE_SKY_DS_BLOCK_JNI_SW_RESET

//ConnectivityService.java for stability test from EF49K
#define FEATURE_SKY_DS_CONCURRENTMODIFICATIONEXCEPTION_BUG

#define FEATURE_SKY_DS_TETHERED_MODE_BUG_FIX

#define FEATURE_SKY_DS_IFC_TIMING_FIX

//#define FEATURE_SKY_DS_LTE_ROAMING_MODE

#define FEATURE_SKY_DS_GOOGLE_PATCH

/************************************************************************************************************************
**    2. Related MENU / UI
************************************************************************************************************************/ 

#define FEATURE_SKY_DS_ADD_APN_SETTING_HIDDEN_CODE	//20120602
 
#define FEATURE_SKY_DS_PREVENT_EDIT_DEFAULT_APN //20120702
 
#define FEATURE_SKY_DS_RESOURCE
 
#define FEATURE_SKY_DS_EASY_SETTING
 
//temp_block #define FEATURE_SKY_DS_FIX_ROAM_CHECK_UI_BUG

//temp_block #define FEATURE_SKY_DS_SHOW_DATA_ICON_DURING_WIFI_CONNECTED	US3 role

#define FEATURE_SKY_DS_DISABLE_BEARER_IN_APN

#define FEATURE_SKT_DS_TURN_OFF_DATA_RECOVERY //20120703

#define FEATURE_SKY_DS_DIALOG_BUG_FIX

/************************************************************************************************************************
**     3. CTS / PortBridge / DUN / Log /vpn
************************************************************************************************************************/
 
#define FEATURE_SKY_DS_DATAMANAGER //20120620
 
#define FEATURE_SKT_DS_SYNC_MANAGER //20120620
 
#define FEATURE_SKY_DS_ATFWD_PROCESS //20120620
 
#define FEATURE_SKY_DS_CTS_ROOT_PROCESS	//20120602

#define FEATURE_SKY_DS_VPN_FIX	//20120609

#define FEATURE_SKY_DS_BUSYBOX_INSTALL	//20120602

#define FEATURE_SKY_DS_ADD_DATA_LOG	//20120602

#define FEATURE_SKY_DS_REMOVE_DBG_RMNET //20120702

#endif/* T_SKY_MODEL_TARGET_WCDMA */


/* ######################################################################### */


/*****************************************************
    SKT Model common.
    Feature Name : T_SKY_MODEL_TARGET_SKT
******************************************************/
#ifdef T_SKY_MODEL_TARGET_SKT
#ifdef T_SKY_MODEL_TARGET_KT
#error Occured !!  This section is SKT only !!
#endif

/************************************************************************************************************************
**    1. Related Data-connection
************************************************************************************************************************/
 
#define FEATURE_SKT_DS_ADD_DATA_SUSPEND_FUNC
 
#define FEATURE_SKT_DS_ROAMING_APN_CHANGE	//20120523
 
#define FEATURE_SKT_DS_VOICE_CALL_PROTECTION_IN_CS_CALL	//20120602
 
#define FEATURE_SKT_DS_DNSMASQ_DNS_FORWARD	//20120602
 
#define FEATURE_SKT_DS_LTE_TCP_BUFFER_CHANGE	//20120602
 
#define FEATURE_SKT_DS_CSFB_REJECT_IN_VT	//20120602

#define FEATURE_SKT_DS_CHECK_SKT_SIM

#define FEATURE_SKT_DS_COMMON_CM_PH_EVENT

#ifdef FEATURE_SKT_DS_COMMON_CM_PH_EVENT
#define FEATURE_SKT_DS_LTE_MO_DATA_BARRING_NOTIFICATION
#define FEATURE_SKT_DS_ROAMING_STATUS_CHANGED_FIRST_TIME_NOTIFICATION
#endif

/************************************************************************************************************************
**    2. Related MENU / UI
************************************************************************************************************************/
/*====================== (1) Related Data-connection UI ======================*/
 
#define FEATURE_SKT_DS_ADD_ALWAYSON_MENU
    
#define FEATURE_SKT_DS_DATA_CONNECTION_API
  
#define FEATURE_SKT_DS_ADD_3G_DATA_POPUP
 
#define FEATURE_SKT_DS_NO_CONNECTION_POPUP_IN_NOIMEI
 
#define FEATURE_SKT_DS_SW_RESET_RELEASE_MODE_NO_DATA_POPUP
 
#define FEATURE_SKT_DS_MAKE_PDP_CONNETION_TOAST
 
#define FEATURE_SKT_DS_PS_REJECT

#define FEATURE_SKT_DS_SUPPORT_LTE_B2B	//20120523

//temp_block #define FEATURE_SKT_DS_RESUME_DOWNLOAD_FOR_WIFI_TO_DATA_CHANGE

#define FEATURE_SKT_DS_CHANGE_DATA_ONOFF	//20120626

/*====================== (2) Related roaming ======================*/
 
#define FEATURE_SKT_DS_ROAMING	//20120523
 
#define FEATURE_SKT_DS_ALWAYSON_MENU_DISABLED_IN_GPRS

#define FEATURE_SKT_DS_LTE_B3_ROAMING	//20120523

/*====================== (3) Related application ====================== */
 
#define FEATURE_SKT_DS_SKAF_SUPPORT
 
#define FEATURE_SKT_DS_ALLOW_MMS_IN_DATA_DISABLE
 
//#define FEATURE_SKT_DS_CALL_TYPE_FOR_HD_SERVICE


/*====================== (4) etc ======================*/
 
#define FEATURE_SKT_DS_HSUPA	//20120602

#define FEATURE_SKT_DS_GET_IP_ADDRESS

#define FEATURE_SKY_DS_KERNEL_CRASH_CR01155420_FROM_OSCAR_JB //20130472

/************************************************************************************************************************
**     3. CTS / PortBridge / DUN / Log /vpn
************************************************************************************************************************/


/************************************************************************************************************************
**     4. VT
************************************************************************************************************************/


/************************************************************************************************************************
**     5. VoIP(SKT VoIP/TAPS)
************************************************************************************************************************/
 
//#define FEATURE_SKT_DS_TAPS
 
//#define FEATURE_SKY_DS_SKT_VOIP_BLOCK_WIFI_CUT_DOWN
 
//#define FEATURE_SKY_DS_SKT_VOIP_USER_POWER_OFF_HANDLE
 
//#define FEATURE_SKY_DS_SKT_VOIP_USER_AIRPLANE_MODE_HANDLE
 
//#define FEATURE_SKT_DS_VOIP_DEBUG_SCREEN
 
//#define FEATURE_SKT_DS_VOIP_HIDDEN_MENU
 
//#define FEATURE_SKT_DS_VOIP_MANUAL_CFG
 
//#define FEATURE_SKY_DS_BLOCK_GB_BUILTIN_SIP
 
//#define FEATURE_SKY_DS_APPLY_VOIP_PROVIDER
 
//#define FEATURE_SKY_DS_BLOCK_VOIP

/************************************************************************************************************************
**     6. GingerBread SIP
************************************************************************************************************************/
 
//#define FEATURE_SKT_DS_SIP_PORT_DEL
 
//#define FEATURE_SKT_DS_SIP_REGI_REFRESH

/************************************************************************************************************************
**     7. Deleted Feature
************************************************************************************************************************/

//FC version resolved this feature.
// replaced (FEATRUE_SKY_SET_PREFERAPN_BUG_FIX_ICS_4_4)
//#define FEATRUE_SKY_SET_PREFERAPN_BUG_FIX
//#define FEATRUE_SKY_SET_PREFERAPN_BUG_FIX_ICS_4_4

//FC version resolved this feature.
//#define FEATURE_SKY_DS_SET_TETHERED_DNS

//#define FEATURE_SKT_DS_ADD_ROUTEREMOVE_FUNC

//#define FEATURE_SKT_DS_ALLOW_MMSONLY_APN_IN_DATA_DISABED

//Post FC version resolved this feature
//#define FEATURE_SKY_DS_SBA_1045_CR348377

//MobileNetworkSettings.java(packages\apps\phone\src\com\android\phone) is added in Settings.java(packages\apps\phone\src\com\android\phone) PS5
//#define FEATURE_SKY_DS_DATA_USAGE_MENU_BLOCKING

//ICS 4.0.4 resolved it
//#define FEATURE_SKY_DS_FOR_CTS_TEST

//pre-CS patch resolved it
//Tethering.java
//#define FEATURE_SKY_DS_EXCEPTION_CATCH_BUG_FIX

//Confirm this feature in the CS patch. 20120625
//#define FEATURE_SKY_DS_QOS_DISABLE
//#define FEATURE_SKY_DS_SBA_1045_CR350813

//CS patch resolved it. TelephonyProvider.java
//#define FEATURE_SKY_DS_CHECK_NULL_POINTER_EXCEPTION	//20120602

//CS patch resolved it.
//LINUX\android\bionic\libc\netbsd\resolv\res_init.c
//#define FEATURE_SKY_DS_GOOGLE_PATCH_CVE_2012_2808

//1033 patch resolved it
//#define FEATURE_SKY_DS_SYNC_CS_SERVICE_STATE //20120609

//JB resolved it
//#define FEATURE_SKY_DS_DNS_BUG_FIX // 20121006

// Model dependant. If CONFIG_TUN=y this feature is not needed.
//#define FEATURE_SKY_DS_SUPPOR_TUN //20121006

// This feature is moved into PS1 feature "feature_sky_cp_not_support_menu_removed".
//#define FEATURE_SKY_DS_DATA_USAGE_MENU_BLOCKING

// Do not need this feature on JB // 20121006 
//#define FEATURE_SKY_DS_CTS_SUID_CHECK	//20120602

// Port bridge isn't used anymore.
//#define FEATURE_SKY_DS_CTS_LOCALHOST	//20120625


#endif/* T_SKY_MODEL_TARGET_SKT */

 
#endif /* __CUST_SKY_DS_H__ */
