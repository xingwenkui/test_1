/********************************************************************
	created:	2017/10/12
	created:	12:10:2017   14:25
	filename: 	E:\wnttwsg\WorkstationDefender\Trunk\include\public_def.h
	file path:	E:\wnttwsg\WorkstationDefender\Trunk\include
	file base:	public_def
	file ext:	h
	author:		xwk

	purpose:	���������������Ĺ����꣬���й��̶�Ҫ����
*********************************************************************/
#pragma once


#pragma warning (disable:4200)
#pragma warning (disable:4996)
#pragma warning (disable:4018)

/********************************************************************
	purpose:	���������������Ĺ����꣬���й��̶�Ҫ����
*********************************************************************/
#define OS_UESR_MODE              //��ʱ����ǹ���Ա�û��ܹ�ʹ����������� --add by xwk 2017-10-12

//#define DUMP_TEST					//������ʾҪ����DUMP

/*
//����汾��
	1: �汾��ʽӰ�쵽�������޸�ʱ�����������BOOL CDlgPackage::OnInitDialog()����
	2: ǰ15���ַ�Ϊ�����İ汾�ţ������а汾�Աȣ����������ȣ��������ֻ�𵽱�ʶ���ã��������ǿ�ѡ������Դ��ڣ�Ҳ���Բ����ڣ���
	   ÿ�α��һ����ʶ���ݣ�ǰ15λҲҪ��� 
*/
#define WL_VSERSION					_T("V300R001C02B220")

#define WL_IPCLOGEVENT				_T("7655EF3C-2999-9157-D696-B4162DF500B3")
#define WL_IPCLOGEVENT_CLIENT		_T("8ac84702-f697-11e7-8c3f-9a214cf093ae")
#define WL_IPCMSGEVENT_CLIENT		_T("1dac2f62-2739-11e8-b467-0ed5f89f718b")
#define WL_IPCSETTING_CLIIENT		_T("23C79F66-AE1A-4c4f-9E02-8128B6F31CA2")

#define	WL_LICENSE_MUTEX_NAME		_T("ABA00ECF-9F0A-48d4-9867-C03DD5CC9E53") //��ΪLICENSE���ºͶ�ȡ���̱߳�����������ʹ�ã�������Global\\�ķ�ʽ   --added by xwk  20191026

/********************************************************************
	purpose:	��ȫ�������
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
	MSG_ID_WhiteList_Exist_Invalid = 10,			//���������� ���Ұ���������Ч����ʾ�û�
	MSG_ID_WhiteList_Destroyed,						//���������ƻ�
	MSG_ID_License_ExpiryDate,						//��ʾ license ���˽�ֹ����
	MSG_ID_License_CanUseDays,
	MSG_ID_DriverNoRun_Reboot,						//��ȡϵͳ״̬ʧ�ܣ����������ļ������
	MSG_ID_DiskSpaceWarning,
	MSG_ID_AppendFileWhiteList,						//������־׷�ӵ��������⡣
	MSG_ID_BeepWarning,								// ������Ч v3.0�汾
	MSG_ID_EXPORT_LOG,								//audit �ϲ�����
	MSG_ID_RESTORE_OK,
	MSG_ID_RESTORE_ERROR,
	MSG_ID_RESTORE_CANCEL
};


enum LOG_STYLE{
	LOGO_ID_WNT				=		0x00000001,				// [��Ŭ��]
	LOGO_ID_WNT_UNION,										// [��Ŭ������]
	LOGO_ID_ZKKJ,											// [�пؿƼ�]
	LOGO_ID_EnChuang,										// [��ʢ����]
	// 3.0
	LOGO_ID_JiangSuBoZhi,									// [���ղ���]
	LOGO_ID_YiYang,											// [����]
	LOGO_ID_LanDun,											// [����]
	LOGO_ID_DingLiXinAn,									// [�����Ű�]�����������Ű��������޹�˾
	LOGO_ID_OEM				= 9,							// [OEM]
	LOGO_ID_HuBeiXiQiDongShu,								// [������������]
	LOGO_ID_EMSON			= 11,
	LOGO_ID_JDSY            = 12,                           // ����ʢ��
	LOGO_ID_GLH,                                            // ������
    LOGO_ID_CGN,                                            // �й��
	LOGO_ID_NULL											// ��LOGO
};

enum TRAY_MSG_ID
{
	TRAY_MSG_ID_NULL =0,
	TRAY_MSG_ID_WARNING
};

enum PLY_FLUSH_FLAG					// ip��������ģ�����server����client�ģ�Ŀǰ����Ҫ��
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
	CURRENT_MODAL_BIND			= 1,	//��
	CURRENT_MODAL_BINDDOMAIN	= 2,	//����
	CURRENT_MODAL_UNBIND		= 3,	//���
	CURRENT_MODAL_RESETPIN		= 4,	//����PIN
	CURRENT_MODAL_MODIFYINFO	= 5,	//�޸���Ϣ

	CURRENT_BTN_MODIFYPIN		= 6		//�޸�PIN
};

enum ShowType
{
	SHOWTYPE_BIND		  = 0, //�󶨱���
	SHOWTYPE_BINDDOMAIN   = 1, //����
	SHOWTYPE_UNBINDDOMAIN = 2  //������˻�
};


typedef struct __ROLE_INFO
{
	LONGLONG llRoleID;
	std::wstring wsRoleKey;
	std::wstring wsRoleName;
}ROLE_INFO, *PROLE_INFO;


#define  MEGER_MINUTE			(5)						//������־����Ӻϲ�
#define  MAX_LIST_ITEM_COUNTS	(2000)					//������־2000�����

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
	purpose:	�޷���λ�����⣬���Ӻ�����λ
*********************************************************************/
#define DEBUG_16926            //����������⣬��ͬ�����⻹��17048
#define DEBUG_901_block       //901�����������߳̿�ס��
//#define DEBUG_29594				//�򿪣���¶���󣬿���ռ�ò�ѯ  ���رգ������������
//#define DEBUG_27117		       //��ť��ʱδ���أ�

// ����л�ǩ�������� - Jian.Ding - 2021.05.17
#define DIGISIGN
#ifdef DIGISIGN
#define TIMESTAMP_SERVER _T("http://timestamp.digicert.com")
#elif defined(VERISIGN)
#define TIMESTAMP_SERVER _T("http://timestamp.verisign.com/scripts/timstamp.dll")
#endif