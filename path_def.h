#ifndef __PATH_DEF_H__
#define __PATH_DEF_H__

//insert first change

//insert second change

//branch : first change

//branch : second change

//this is branch master test: 2022-01-15 14:55

#define TERMDB_FOLDER ("WLDIR") 
// -- �����ļ�Ŀ¼ "c:\\windows\\system32\\WLDIR\\"
// -- ���������͹��������������� "c:\\windows\\system32\\WLDIR\\applications.dat"
#define APPLICATION_INTEGRITY_DB ("applications.dat")  

#define DIGEST_CONFIGURE_DB ("DigestConf.dat")
#define	GUARD_FILES_DB ("GuardFiles.dat")

// -- ����ϵͳ������������ "c:\\windows\\system32\\WLDIR\\System.dat"
#define NATIVE_INTEGRITY_DB ("System.dat")

#define WR_TERMDB_FOLDER (L"WLDIR")
//#define WR_APPLICATION_INTEGRITY_DB (L"applications.dat") //��δʹ�ã�ɾ��
#define WR_NATIVE_INTEGRITY_DB (L"System.dat")
#define WR_NATIVE_INTEGRITY_AUX_DB (L"SystemAux.dat")
//#define WR_DIGEST_CONFIGURE_DB (L"DigestConf.dat") //֤�鹦������ļ���ɾ��
#define WR_GUARD_FILES_DB (L"GuardFiles.dat")
#define WR_MAC_OBJECT_DB (L"WLPly_AC_MAC_ObjAndSubConfig.dat")
#define WR_MAC_GROUP_DB (L"WLPly_AC_MAC_GlobalConfig.dat")
#define WR_MAC_EXCEPTION_DB (L"WLPly_AC_MAC_ExceptionConfig.dat")
#define WR_FILEPROTECT_SERVER (L"WLPly_HostReinforcementFileProtect_server.dat")
#define WR_REGPROTECT_SERVER (L"WLPly_HostReinforcementRegProtect_server.dat")
//#define WR_PROCESSAUDIT_SERVER (L"WLPly_HostAuditProcess_server.dat") //��������server��client

#define WR_POLICY_DATA_W_WORK_SHEET	(L"WLWorkSheet.dat")	
//V200R002C02
#define WR_FILEPROTECT_DB (L"WLPly_HostReinforcementFileProtect.dat") //�ļ�����
#define WR_FILEPROTECTEXCEPTION_DB (L"WLPly_HostReinforcementFileProtectException.dat")//�ļ���������
#define WR_REGPROTECT_DB (L"WLPly_HostReinforcementRegProtect.dat") //ע�����
#define WR_REGPROTECTEXECPTION_DB (L"WLPly_HostReinforcementRegProtectException.dat") //ע���������
#define WR_PROCESSAUDIT_CLIENT (L"WLPly_WhiteListAuditProcess.dat") //λ��config\WhiteList ��

//V3R1--->wlmgt
#define WL_SCAN_PE_FILE  (L"WLScanPeFile.txt")
#define WL_CALCULATE_HASH_FILE  (L"WLCalculateHashFile.txt")

#define WR_TRACEINSTALL_APPSTORE_DB (L"App.dat") ////λ��config\WhiteList ��
#define WR_SELFUPDATE_APPSTORE_DB (L"WLSelfUpdate.dat") ////λ��config\WhiteList ��

#define WR_TRACEINSTALL_APPSTORE_TXT (L"AppStore.txt") ////λ��config\WhiteList ��
#endif
