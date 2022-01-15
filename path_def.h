#ifndef __PATH_DEF_H__
#define __PATH_DEF_H__

//insert first change

//insert second change

//branch : first change

//branch : second change

//this is branch master test: 2022-01-15 14:55

#define TERMDB_FOLDER ("WLDIR") 
// -- 配置文件目录 "c:\\windows\\system32\\WLDIR\\"
// -- 服务器发送过来的完整性数据 "c:\\windows\\system32\\WLDIR\\applications.dat"
#define APPLICATION_INTEGRITY_DB ("applications.dat")  

#define DIGEST_CONFIGURE_DB ("DigestConf.dat")
#define	GUARD_FILES_DB ("GuardFiles.dat")

// -- 本地系统的完整性数据 "c:\\windows\\system32\\WLDIR\\System.dat"
#define NATIVE_INTEGRITY_DB ("System.dat")

#define WR_TERMDB_FOLDER (L"WLDIR")
//#define WR_APPLICATION_INTEGRITY_DB (L"applications.dat") //暂未使用，删除
#define WR_NATIVE_INTEGRITY_DB (L"System.dat")
#define WR_NATIVE_INTEGRITY_AUX_DB (L"SystemAux.dat")
//#define WR_DIGEST_CONFIGURE_DB (L"DigestConf.dat") //证书功能相关文件，删除
#define WR_GUARD_FILES_DB (L"GuardFiles.dat")
#define WR_MAC_OBJECT_DB (L"WLPly_AC_MAC_ObjAndSubConfig.dat")
#define WR_MAC_GROUP_DB (L"WLPly_AC_MAC_GlobalConfig.dat")
#define WR_MAC_EXCEPTION_DB (L"WLPly_AC_MAC_ExceptionConfig.dat")
#define WR_FILEPROTECT_SERVER (L"WLPly_HostReinforcementFileProtect_server.dat")
#define WR_REGPROTECT_SERVER (L"WLPly_HostReinforcementRegProtect_server.dat")
//#define WR_PROCESSAUDIT_SERVER (L"WLPly_HostAuditProcess_server.dat") //不再区分server和client

#define WR_POLICY_DATA_W_WORK_SHEET	(L"WLWorkSheet.dat")	
//V200R002C02
#define WR_FILEPROTECT_DB (L"WLPly_HostReinforcementFileProtect.dat") //文件保护
#define WR_FILEPROTECTEXCEPTION_DB (L"WLPly_HostReinforcementFileProtectException.dat")//文件保护例外
#define WR_REGPROTECT_DB (L"WLPly_HostReinforcementRegProtect.dat") //注册表保护
#define WR_REGPROTECTEXECPTION_DB (L"WLPly_HostReinforcementRegProtectException.dat") //注册表保护例外
#define WR_PROCESSAUDIT_CLIENT (L"WLPly_WhiteListAuditProcess.dat") //位于config\WhiteList 内

//V3R1--->wlmgt
#define WL_SCAN_PE_FILE  (L"WLScanPeFile.txt")
#define WL_CALCULATE_HASH_FILE  (L"WLCalculateHashFile.txt")

#define WR_TRACEINSTALL_APPSTORE_DB (L"App.dat") ////位于config\WhiteList 内
#define WR_SELFUPDATE_APPSTORE_DB (L"WLSelfUpdate.dat") ////位于config\WhiteList 内

#define WR_TRACEINSTALL_APPSTORE_TXT (L"AppStore.txt") ////位于config\WhiteList 内
#endif
