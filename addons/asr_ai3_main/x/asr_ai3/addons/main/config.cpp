////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.02
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class asr_ai3_main : config.bin{
class CfgPatches
{
	class asr_ai3_main
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.14;
		requiredAddons[] = {"CBA_MAIN"};
		versionDesc = "ASR AI3";
		versionAct = "";
		version = "0.9.2.36";
		versionStr = "0.9.2.36";
		versionAr[] = {0,9,2,36};
	};
};
class Extended_PreInit_EventHandlers
{
	class asr_ai3_main
	{
		init = "call ('\x\asr_ai3\addons\main\XEH_preInit.sqf' call SLX_XEH_COMPILE)";
		clientInit = "call ('\x\asr_ai3\addons\main\XEH_preClientInit.sqf' call SLX_XEH_COMPILE)";
	};
};
//};
