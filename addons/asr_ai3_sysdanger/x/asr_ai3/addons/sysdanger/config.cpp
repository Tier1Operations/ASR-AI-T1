////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.02
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class asr_ai3_sysdanger : config.bin{
class CfgPatches
{
	class asr_ai3_sysdanger
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.14;
		requiredAddons[] = {"asr_ai3_main","asr_ai3_settings","A3_Characters_F"};
		version = "0.9.2.36";
		author[] = {"Robalo"};
	};
};
class Extended_PreInit_EventHandlers
{
	class asr_ai3_sysdanger
	{
		init = "call ('\x\asr_ai3\addons\sysdanger\XEH_preInit.sqf' call SLX_XEH_COMPILE)";
	};
};
class Extended_PostInit_EventHandlers
{
	class asr_ai3_sysdanger
	{
		serverInit = "call ('\x\asr_ai3\addons\sysdanger\XEH_postServerInit.sqf' call SLX_XEH_COMPILE)";
	};
};
class Extended_FiredBIS_EventHandlers
{
	class AllVehicles
	{
		class asr_ai3_sysdanger
		{
			serverFiredBIS = "if (asr_ai3_sysdanger_enabled== 1) then {_this call asr_ai3_sysdanger_fnc_firedEH}";
		};
	};
};
class Extended_Hit_EventHandlers
{
	class CAManBase
	{
		class asr_ai3_sysdanger
		{
			serverHit = "if (asr_ai3_sysdanger_enabled== 1) then {if(_this call asr_ai3_sysdanger_fnc_isValidUnit) then {_this call asr_ai3_sysdanger_fnc_handleHit}}";
		};
	};
};
class Extended_Killed_EventHandlers
{
	class CAManBase
	{
		class asr_ai3_sysdanger
		{
			serverKilled = "if (asr_ai3_sysdanger_enabled== 1) then {_this spawn asr_ai3_sysdanger_fnc_killedEH}";
		};
	};
};
class CfgVehicles
{
	class Man;
	class CAManBase: Man
	{
		fsmDanger = "x\asr_ai3\addons\sysdanger\danger.fsm";
	};
};
//};
