/********************************************************************
	created:	2017/10/12
	created:	12:10:2017   14:25
	filename: 	E:\wnttwsg\WorkstationDefender\Trunk\include\public_def.h
	file path:	E:\wnttwsg\WorkstationDefender\Trunk\include
	file base:	public_def
	file ext:	h
	author:		xwk

	purpose:	存放整个解决方案的公共宏，所有工程都要包含
*********************************************************************/
#pragma once


#pragma warning (disable:4200)
#pragma warning (disable:4996)
#pragma warning (disable:4018)

/********************************************************************
	purpose:	存放整个解决方案的公共宏，所有工程都要包含
*********************************************************************/
#define OS_UESR_MODE              //临时解决非管理员用户能够使用主界面程序 --add by xwk 2017-10-12

//#define DUMP_TEST					//开启表示要测试DUMP

/*
//程序版本号
	1: 版本格式影响到升级，修改时需变更打包程序BOOL CDlgPackage::OnInitDialog()代码
	2: 前15个字符为真正的版本号（即进行版本对比，控制升级等），后面的只起到标识作用（该内容是可选项，即可以存在，也可以不存在）；
	   每次变更一个标识内容，前15位也要变更 
*/
#define WL_VSERSION					_T("V300R001C02B220")

#define WL_IPCLOGEVENT				_T("7655EF3C-2999-9157-D696-B4162DF500B3")
#define WL_IPCLOGEVENT_CLIENT		_T("8ac84702-f697-11e7-8c3f-9a214cf093ae")
#define WL_IPCMSGEVENT_CLIENT		_T("1dac2f62-2739-11e8-b467-0ed5f89f718b")
#define WL_IPCSETTING_CLIIENT		_T("23C79F66-AE1A-4c4f-9E02-8128B6F31CA2")

#define	WL_LICENSE_MUTEX_NAME		_T("ABA00ECF-9F0A-48d4-9867-C03DD5CC9E53") //作为LICENSE更新和读取的线程保护；进程内使用，不做成Global\\的方式   --added by xwk  20191026

/********************************************************************
	purpose:	安全基线相关
*********************************************************************/
#include <string>
#include <list>
#include <vector>
#include <map>
using namespace std;

#define	MAIN_THEAD_MSG_BOX										(4111)
#define MAIN_MSG_BOX_ProcessServerStatusMessage					(4121)
#define	MAIN_MSG_BOX_ProcessChangePwdResultMessage				(4122)
#define MAIN_MSG_BOX_ProcessProcessContrlReustMessage			(4123)
#define MAIN_MSG_BOX_ProcessDeviceControlResultMessage			(4124)
#define MAIN_MSG_BOX_ProcessClientConfigResultMessage			(4125)
#define MAIN_MSG_BOX_ProcessClientupdateLicenseResultMessage	(4126)
#define MAIN_MSG_BOX_ProcessWhtelistMgrSolidifyStatusMessage	(4127)
#define MAIN_MSG_BOX_ProcessClientVerifyPwdResultMessage		(4128)
#define MAIN_MSG_BOX_ProcessClientEnviorenmentMessage			(4129)
#define MAIN_MSG_BOX_ProcessClientLoadSafeUDiskMessage			(4130)
#define MAIN_MSG_BOX_ProcessClientPolicyAndAuditMessage			(4131)
#define MAIN_MSG_BOX_ProcessRealLogMessage						(4141)
#define MAIN_MSG_BOX_ProcessUSBKeyReqResultMessage				(4151)
#define MAIN_MSG_ShowMessage									(4152)
#define MAIN_MSG_BOX_ProcessProcessDataResultMessage			(4153)
#define MAIN_MSG_BOX_SoftwareInstallAndUninstallResultMessage   (4154)
#define MAIN_MSG_BOX_AppStoreResultMessage                      (4155)


enum	MSGBOX_ID
{
	MSG_ID_WhiteList_Exist_Invalid = 10,			//白名单存在 并且白名单不生效，提示用户
	MSG_ID_WhiteList_Destroyed,						//白名单被破坏
	MSG_ID_License_ExpiryDate,						//提示 license 过了截止日期
	MSG_ID_License_CanUseDays,
	MSG_ID_DriverNoRun_Reboot,						//获取系统状态失败，请重启您的计算机。
	MSG_ID_DiskSpaceWarning,
	MSG_ID_AppendFileWhiteList,						//报警日志追加到白名单库。
	MSG_ID_BeepWarning,								// 报警音效 v3.0版本
	MSG_ID_EXPORT_LOG,								//audit 合并到此
	MSG_ID_RESTORE_OK,
	MSG_ID_RESTORE_ERROR,
	MSG_ID_RESTORE_CANCEL
};


enum LOG_STYLE{
	LOGO_ID_WNT				=		0x00000001,				// [威努特]
	LOGO_ID_WNT_UNION,										// [威努特联合]
	LOGO_ID_ZKKJ,											// [中控科技]
	LOGO_ID_EnChuang,										// [恩盛创合]
	// 3.0
	LOGO_ID_JiangSuBoZhi,									// [江苏博智]
	LOGO_ID_YiYang,											// [亿阳]
	LOGO_ID_LanDun,											// [蓝盾]
	LOGO_ID_DingLiXinAn,									// [鼎力信安]·北京鼎力信安技术有限公司
	LOGO_ID_OEM				= 9,							// [OEM]
	LOGO_ID_HuBeiXiQiDongShu,								// [湖北西气东输]
	LOGO_ID_EMSON			= 11,
	LOGO_ID_JDSY            = 12,                           // 交大盛阳
	LOGO_ID_GLH,                                            // 广利核
    LOGO_ID_CGN,                                            // 中广核
	LOGO_ID_NULL											// 无LOGO
};

enum TRAY_MSG_ID
{
	TRAY_MSG_ID_NULL =0,
	TRAY_MSG_ID_WARNING
};

enum PLY_FLUSH_FLAG					// ip策略里面的，区分server还是client的，目前不需要了
{
	PLY_FLUSH_UNKNOW=0,
	PLY_FLUSH_SERVER,
	PLY_FLUSH_CLIENT
};


enum  CONTROL_USB_Status
{
	USB_CanReadCanWrite=0,
	USB_NoReadNoWrite,
	USB_OnlyRead
};

enum ACTIVEMODAL
{
	CURRENT_MODAL_BIND			= 1,	//绑定
	CURRENT_MODAL_BINDDOMAIN	= 2,	//绑定域
	CURRENT_MODAL_UNBIND		= 3,	//解绑
	CURRENT_MODAL_RESETPIN		= 4,	//重置PIN
	CURRENT_MODAL_MODIFYINFO	= 5,	//修改信息

	CURRENT_BTN_MODIFYPIN		= 6		//修改PIN
};

enum ShowType
{
	SHOWTYPE_BIND		  = 0, //绑定本地
	SHOWTYPE_BINDDOMAIN   = 1, //绑定域
	SHOWTYPE_UNBINDDOMAIN = 2  //解绑域账户
};


typedef struct __ROLE_INFO
{
	LONGLONG llRoleID;
	std::wstring wsRoleKey;
	std::wstring wsRoleName;
}ROLE_INFO, *PROLE_INFO;


#define  MEGER_MINUTE			(5)						//报警日志五分钟合并
#define  MAX_LIST_ITEM_COUNTS	(2000)					//报警日志2000条清除

// common.h
#define MAX_EXIT_WAIT_TIME                      1500
#define COUNT_OF_ITEMS(item)                    sizeof (item)/sizeof (item[0])
#define IS_FLAG_ON(flag,value)                  ((flag) == ((flag) & (value)))
#define INIT_THE_VARIABLE(variable2init)        memset (&variable2init,0,sizeof (variable2init));

#define REG_SETTINGS_ROOT                       "\\REGISTRY\\MACHINE\\"
#define REG_SETTINGS                            "SOFTWARE\\ics\\icsscanner\\Settings"
#define REG_SETTINGS_ICSSCANNER                 "SOFTWARE\\ics\\icsscanner"
#define REG_SETTINGS_ICS                        "SOFTWARE\\ics"
#define REG_PASSWORD                            "regStrPassword"
#define REG_WHITELIST_TIME_UPDATEU              "WhiteListTimeUpdateU"
#define REG_WHITELIST_TIME_UPDATEL              "WhiteListTimeUpdateL"
#define REG_WHITELIST_MODE_CHECK                "WhiteListModeCheck"
#define REG_MEMORY_MODE_CHECK                   "MemoryModeCheck"
#define REG_SIGNATURELIST_TIME_UPDATEU          "SignatureListTimeUpdateU"
#define REG_SIGNATURELIST_TIME_UPDATEL          "SignatureListTimeUpdateL"
#define REG_SIGNATURE_MODE_CHECK                "SignatureModeCheck"
#define REG_SCRIPTLIST_TIME_UPDATEU             "ScriptListTimeUpdateU"
#define REG_SCRIPTLIST_TIME_UPDATEL             "ScriptListTimeUpdateL"
#define REG_SCRIPTLIST_MODE_CHECK               "ScriptListModeCheck"
#define REG_LOG_MODE                            "LogMode"

#define REG_SETTINGS_DRV_ROOT                   "\\REGISTRY\\MACHINE\\SYSTEM\\CurrentControlSet\\Services\\wlSecMod"
#define REG_SETTINGS_DRV_ENUM                   "\\REGISTRY\\MACHINE\\SYSTEM\\CurrentControlSet\\Services\\wlSecMod\\Enum"
#define REG_SETTINGS_DRV_SYSTEM                 "\\REGISTRY\\MACHINE\\SYSTEM\\CurrentControlSet\\Services\\wlSecMod\\System"


typedef enum _tagEnWLClientWhiteListCheckMode
{
	ENWLCLIENTWHITELISTCHECKMODE_INVALID,
	ENWLCLIENTWHITELISTCHECKMODE_OFF = ENWLCLIENTWHITELISTCHECKMODE_INVALID,
	ENWLCLIENTWHITELISTCHECKMODE_ON
}ENWLCLIENTWHITELISTCHECKMODE,*PENWLCLIENTWHITELISTCHECKMODE;
typedef enum _tagEnWLClientMemoryCheckMode
{
	ENWLCLIENTMEMORYCHECKMODE_INVALID,
	ENWLCLIENTMEMORYCHECKMODE_OFF = ENWLCLIENTMEMORYCHECKMODE_INVALID,
	ENWLCLIENTMEMORYCHECKMODE_ON
}ENWLCLIENTMEMORYCHECKMODE,*PENWLCLIENTMEMORYCHECKMODE;
typedef enum _tagEnWLClientSignatureCheckMode
{
	ENWLCLIENTSIGNATURECHECKMODE_INVALID,
	ENWLCLIENTSIGNATURECHECKMODE_OFF = ENWLCLIENTSIGNATURECHECKMODE_INVALID,
	ENWLCLIENTSIGNATURECHECKMODE_ON
}ENWLCLIENTSIGNATURECHECKMODE,*PENWLCLIENTSIGNATURECHECKMODE;
typedef enum _tagEnWLClientScriptCheckMode
{
	ENWLCLIENTSCRIPTCHECKMODE_INVALID,
	ENWLCLIENTSCRIPTCHECKMODE_OFF = ENWLCLIENTSCRIPTCHECKMODE_INVALID,
	ENWLCLIENTSCRIPTCHECKMODE_ON
}ENWLCLIENTSCRIPTCHECKMODE,*PENWLCLIENTSCRIPTCHECKMODE;
typedef enum _tagEnWLClientLogMode
{
	ENWLCLIENTLOGMODE_INVALID,
	ENWLCLIENTLOGMODE_SILENT = ENWLCLIENTLOGMODE_INVALID,
	ENWLCLIENTLOGMODE_PROMPT
}ENWLCLIENTLOGMODE,*PENWLCLIENTLOGMODE;

#define WR_GUARD_SQLITEDB								_T( "WLog.db" )
#define SYSTEMDEFENCE_FRIST_FILE						_T( "BaseLineOri.ini" )






/********************************************************************
	purpose:	无法定位的问题，增加宏来定位
*********************************************************************/
#define DEBUG_16926            //测试许可问题，相同的问题还有17048
#define DEBUG_901_block       //901机器，策略线程卡住，
//#define DEBUG_29594				//打开：暴露错误，开启占用查询  ；关闭：开启多次重试
//#define DEBUG_27117		       //按钮超时未隐藏，

// 打包切换签名服务器 - Jian.Ding - 2021.05.17
#define DIGISIGN
#ifdef DIGISIGN
#define TIMESTAMP_SERVER _T("http://timestamp.digicert.com")
#elif defined(VERISIGN)
#define TIMESTAMP_SERVER _T("http://timestamp.verisign.com/scripts/timstamp.dll")
#endif