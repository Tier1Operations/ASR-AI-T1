////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.02
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class asr_ai3_cfgweapons : config.bin{
class CfgPatches
{
	class asr_ai3_cfgweapons
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.14;
		requiredAddons[] = {"asr_ai3_main","A3_Weapons_F","A3_Weapons_F_Acc","A3_Weapons_F_Launchers_NLAW","A3_Weapons_F_Launchers_LAW","A3_Weapons_F_EBR","A3_Weapons_F_LongRangeRifles_GM6","A3_Weapons_F_LongRangeRifles_M320","A3_Weapons_F_Machineguns_M200","A3_Weapons_F_Pistols_P07","A3_Weapons_F_Pistols_Rook40","A3_Weapons_F_Rifles_Khaybar","A3_Weapons_F_Rifles_MX","A3_Weapons_F_Rifles_SDAR","A3_Weapons_F_Rifles_TRG20","A3_Weapons_F_Launchers_Titan","A3_Weapons_F_beta","A3_Weapons_F_beta_EBR","A3_Weapons_F_Machineguns_Zafir","A3_Weapons_F_Pistols_ACPC2","A3_Weapons_F_Rifles_Mk20","A3_Weapons_F_Rifles_Vector","a3_weapons_f_rifles_SMG_02","A3_Weapons_F_gamma","A3_Weapons_F_gamma_Acc","A3_Weapons_F_Pistols_PDW2000","A3_Weapons_F_EPA_LongRangeRifles_DMR_01","A3_Weapons_F_EPC"};
		version = "0.9.1.34";
		author[] = {"Robalo"};
	};
};
class CfgAddons
{
	class PreloadAddons
	{
		class asr_ai3_cfgweapons
		{
			list[] = {"asr_ai3_cfgweapons"};
		};
	};
};
class Mode_SemiAuto
{
	aiRateOfFire = 1;
	aiRateOfFireDistance = 200;
	minRange = 0;
	minRangeProbab = 0.9;
	midRange = 150;
	midRangeProbab = 0.5;
	maxRange = 500;
	maxRangeProbab = 0.1;
	aiDispersionCoefX = 20;
	aiDispersionCoefY = 25;
};
class Mode_Burst: Mode_SemiAuto
{
	aiRateOfFire = 1;
	aiRateOfFireDistance = 60;
	minRange = 15;
	minRangeProbab = 0.8;
	midRange = 30;
	midRangeProbab = 0.7;
	maxRange = 70;
	maxRangeProbab = 0.1;
	aiDispersionCoefX = 20;
	aiDispersionCoefY = 25;
};
class Mode_FullAuto: Mode_SemiAuto
{
	aiRateOfFire = 0.2;
	aiRateOfFireDistance = 50;
	minRange = 0;
	minRangeProbab = 0.9;
	midRange = 10;
	midRangeProbab = 0.8;
	maxRange = 15;
	maxRangeProbab = 0.3;
	aiDispersionCoefX = 20;
	aiDispersionCoefY = 25;
};
class CfgWeapons
{
	class Default
	{
		aiRateOfFire = 1;
		aiRateOfFireDistance = 200;
		minRange = 0;
		minRangeProbab = 0.9;
		midRange = 150;
		midRangeProbab = 0.5;
		maxRange = 500;
		maxRangeProbab = 0.1;
		aiDispersionCoefX = 20;
		aiDispersionCoefY = 25;
	};
	class PistolCore: Default
	{
		aiDispersionCoefX = 20;
		aiDispersionCoefY = 25;
	};
	class RifleCore: Default
	{
		aiDispersionCoefX = 20;
		aiDispersionCoefY = 25;
	};
	class MGunCore: Default
	{
		aiDispersionCoefX = 20;
		aiDispersionCoefY = 25;
	};
	class LauncherCore: Default
	{
		aiDispersionCoefX = 20;
		aiDispersionCoefY = 25;
	};
	class GrenadeCore: Default
	{
		aiDispersionCoefX = 20;
		aiDispersionCoefY = 25;
	};
	class CannonCore: Default
	{
		aiDispersionCoefX = 20;
		aiDispersionCoefY = 25;
	};
	class MGun: MGunCore
	{
		aiDispersionCoefX = 20;
		aiDispersionCoefY = 25;
		asr_ai_wtype = 5;
	};
	class Launcher: LauncherCore
	{
		aiDispersionCoefX = 20;
		aiDispersionCoefY = 25;
		asr_ai_wtype = 4;
	};
	class GrenadeLauncher: Default
	{
		aiRateOfFire = 6;
		aiRateOfFireDistance = 50;
		minRange = 60;
		minRangeProbab = 0.6;
		midRange = 120;
		midRangeProbab = 0.7;
		maxRange = 400;
		maxRangeProbab = 0.2;
		aiDispersionCoefX = 20;
		aiDispersionCoefY = 25;
	};
	class Rifle: RifleCore
	{
		aiDispersionCoefX = 20;
		aiDispersionCoefY = 25;
		asr_ai_wtype = 1;
	};
	class HandGunBase: Rifle
	{
		aiRateOfFire = 1;
		aiRateOfFireDistance = 70;
		minRange = 0;
		minRangeProbab = 0.2;
		midRange = 40;
		midRangeProbab = 0.1;
		maxRange = 80;
		maxRangeProbab = 0.05;
		asr_ai_wtype = 2;
	};
	class Pistol: PistolCore
	{
		aiDispersionCoefX = 20;
		aiDispersionCoefY = 25;
		asr_ai_wtype = 2;
	};
	class Pistol_Base_F: Pistol
	{
		aiRateOfFire = 1;
		aiRateOfFireDistance = 70;
		minRange = 0;
		minRangeProbab = 0.2;
		midRange = 40;
		midRangeProbab = 0.1;
		maxRange = 80;
		maxRangeProbab = 0.05;
	};
	class Throw: GrenadeLauncher
	{
		class ThrowMuzzle: GrenadeLauncher
		{
			aiDispersionCoefX = 20;
			aiDispersionCoefY = 25;
		};
	};
	class ItemCore;
	class InventoryMuzzleItem_Base_F;
	class muzzle_snds_H: ItemCore
	{
		class ItemInfo: InventoryMuzzleItem_Base_F
		{
			modes[] = {"Single","FullAuto","ASR_AI_Burst_close","ASR_AI_Burst_close2","ASR_AI_Single_optics1","ASR_AI_Single_optics2"};
			class Single: Mode_SemiAuto
			{
				aiRateOfFire = 1;
				aiRateOfFireDistance = 200;
				minRange = 60;
				minRangeProbab = 0.7;
				midRange = 150;
				midRangeProbab = 0.5;
				maxRange = 500;
				maxRangeProbab = 0.1;
				aiDispersionCoefX = 20;
				aiDispersionCoefY = 25;
			};
			class FullAuto: Mode_FullAuto
			{
				aiRateOfFire = 0.2;
				aiRateOfFireDistance = 50;
				minRange = 0;
				minRangeProbab = 0.9;
				midRange = 10;
				midRangeProbab = 0.8;
				maxRange = 15;
				maxRangeProbab = 0.3;
				aiDispersionCoefX = 20;
				aiDispersionCoefY = 25;
			};
			class ASR_AI_Burst_close: FullAuto
			{
				showToPlayer = 0;
				burst = 5;
				aiRateOfFire = 1;
				aiRateOfFireDistance = 60;
				minRange = 15;
				minRangeProbab = 0.8;
				midRange = 30;
				midRangeProbab = 0.7;
				maxRange = 70;
				maxRangeProbab = 0.1;
			};
			class ASR_AI_Burst_close2: ASR_AI_Burst_close
			{
				burst = 4;
			};
			class ASR_AI_Burst_far: FullAuto
			{
				showToPlayer = 0;
				burst = 5;
				aiRateOfFire = 5;
				aiRateOfFireDistance = 500;
				minRange = 400;
				minRangeProbab = 0.05;
				midRange = 500;
				midRangeProbab = 0.3;
				maxRange = 700;
				maxRangeProbab = 0.1;
			};
			class ASR_AI_Single_optics1: Single
			{
				showToPlayer = 0;
				requiredOpticType = 1;
				aiRateOfFire = 2;
				aiRateOfFireDistance = 400;
				minRange = 60;
				minRangeProbab = 0.8;
				midRange = 300;
				midRangeProbab = 0.6;
				maxRange = 700;
				maxRangeProbab = 0.2;
				aiDispersionCoefX = 15;
				aiDispersionCoefY = 20;
			};
			class ASR_AI_Single_optics2: Single
			{
				showToPlayer = 0;
				requiredOpticType = 2;
				aiRateOfFire = 3;
				aiRateOfFireDistance = 400;
				minRange = 60;
				minRangeProbab = 0.8;
				midRange = 300;
				midRangeProbab = 0.6;
				maxRange = 900;
				maxRangeProbab = 0.2;
				aiDispersionCoefX = 10;
				aiDispersionCoefY = 15;
			};
			class ASR_SemiAuto: Single
			{
				aiRateOfFire = 1;
				aiRateOfFireDistance = 200;
				minRange = 0;
				minRangeProbab = 0.9;
				midRange = 150;
				midRangeProbab = 0.5;
				maxRange = 500;
				maxRangeProbab = 0.1;
			};
			class ASR_Burst3: Single
			{
				aiRateOfFire = 1;
				aiRateOfFireDistance = 60;
				minRange = 15;
				minRangeProbab = 0.8;
				midRange = 30;
				midRangeProbab = 0.7;
				maxRange = 70;
				maxRangeProbab = 0.1;
				aiDispersionCoefX = 20;
				aiDispersionCoefY = 25;
				showToPlayer = 1;
				burst = 3;
				displayName = "$STR_DN_MODE_BURST";
				textureType = "burst";
				soundBurst = 0;
			};
			class ASR_Burst2: ASR_Burst3
			{
				burst = 2;
			};
		};
	};
	class muzzle_snds_M: muzzle_snds_H
	{
		class ItemInfo: ItemInfo
		{
			modes[] = {"Single","FullAuto","ASR_AI_Burst_close","ASR_AI_Burst_close2","ASR_AI_Single_optics1","ASR_AI_Single_optics2"};
			class Single: Mode_SemiAuto
			{
				aiRateOfFire = 1;
				aiRateOfFireDistance = 200;
				minRange = 60;
				minRangeProbab = 0.7;
				midRange = 150;
				midRangeProbab = 0.5;
				maxRange = 500;
				maxRangeProbab = 0.1;
				aiDispersionCoefX = 20;
				aiDispersionCoefY = 25;
			};
			class FullAuto: Mode_FullAuto
			{
				aiRateOfFire = 0.2;
				aiRateOfFireDistance = 50;
				minRange = 0;
				minRangeProbab = 0.9;
				midRange = 10;
				midRangeProbab = 0.8;
				maxRange = 15;
				maxRangeProbab = 0.3;
				aiDispersionCoefX = 20;
				aiDispersionCoefY = 25;
			};
			class ASR_AI_Burst_close: FullAuto
			{
				showToPlayer = 0;
				burst = 5;
				aiRateOfFire = 1;
				aiRateOfFireDistance = 60;
				minRange = 15;
				minRangeProbab = 0.8;
				midRange = 30;
				midRangeProbab = 0.7;
				maxRange = 70;
				maxRangeProbab = 0.1;
			};
			class ASR_AI_Burst_close2: ASR_AI_Burst_close
			{
				burst = 4;
			};
			class ASR_AI_Burst_far: FullAuto
			{
				showToPlayer = 0;
				burst = 5;
				aiRateOfFire = 5;
				aiRateOfFireDistance = 500;
				minRange = 400;
				minRangeProbab = 0.05;
				midRange = 500;
				midRangeProbab = 0.3;
				maxRange = 700;
				maxRangeProbab = 0.1;
			};
			class ASR_AI_Single_optics1: Single
			{
				showToPlayer = 0;
				requiredOpticType = 1;
				aiRateOfFire = 2;
				aiRateOfFireDistance = 400;
				minRange = 60;
				minRangeProbab = 0.8;
				midRange = 300;
				midRangeProbab = 0.6;
				maxRange = 700;
				maxRangeProbab = 0.2;
				aiDispersionCoefX = 15;
				aiDispersionCoefY = 20;
			};
			class ASR_AI_Single_optics2: Single
			{
				showToPlayer = 0;
				requiredOpticType = 2;
				aiRateOfFire = 3;
				aiRateOfFireDistance = 400;
				minRange = 60;
				minRangeProbab = 0.8;
				midRange = 300;
				midRangeProbab = 0.6;
				maxRange = 900;
				maxRangeProbab = 0.2;
				aiDispersionCoefX = 10;
				aiDispersionCoefY = 15;
			};
			class ASR_SemiAuto: Single
			{
				aiRateOfFire = 1;
				aiRateOfFireDistance = 200;
				minRange = 0;
				minRangeProbab = 0.9;
				midRange = 150;
				midRangeProbab = 0.5;
				maxRange = 500;
				maxRangeProbab = 0.1;
			};
			class ASR_Burst3: Single
			{
				aiRateOfFire = 1;
				aiRateOfFireDistance = 60;
				minRange = 15;
				minRangeProbab = 0.8;
				midRange = 30;
				midRangeProbab = 0.7;
				maxRange = 70;
				maxRangeProbab = 0.1;
				aiDispersionCoefX = 20;
				aiDispersionCoefY = 25;
				showToPlayer = 1;
				burst = 3;
				displayName = "$STR_DN_MODE_BURST";
				textureType = "burst";
				soundBurst = 0;
			};
			class ASR_Burst2: ASR_Burst3
			{
				burst = 2;
			};
		};
	};
	class muzzle_snds_B: muzzle_snds_H
	{
		class ItemInfo: ItemInfo
		{
			modes[] = {"Single","FullAuto","ASR_AI_Burst_close","ASR_AI_Single_optics1","ASR_AI_Single_optics2"};
			class Single: Mode_SemiAuto
			{
				aiRateOfFire = 2;
				aiRateOfFireDistance = 300;
				minRange = 20;
				minRangeProbab = 0.8;
				midRange = 150;
				midRangeProbab = 0.5;
				maxRange = 500;
				maxRangeProbab = 0.1;
				aiDispersionCoefX = 20;
				aiDispersionCoefY = 25;
			};
			class FullAuto: Mode_FullAuto
			{
				aiRateOfFire = 0.2;
				aiRateOfFireDistance = 20;
				minRange = 0;
				minRangeProbab = 0.9;
				midRange = 5;
				midRangeProbab = 0.8;
				maxRange = 10;
				maxRangeProbab = 0.1;
				aiDispersionCoefX = 20;
				aiDispersionCoefY = 25;
			};
			class ASR_AI_Burst_close: FullAuto
			{
				showToPlayer = 0;
				burst = 4;
				aiRateOfFire = 1;
				aiRateOfFireDistance = 100;
				minRange = 10;
				minRangeProbab = 0.8;
				midRange = 20;
				midRangeProbab = 0.7;
				maxRange = 30;
				maxRangeProbab = 0.1;
			};
			class ASR_AI_Single_optics1: Single
			{
				showToPlayer = 0;
				requiredOpticType = 1;
				aiRateOfFire = 3;
				aiRateOfFireDistance = 500;
				minRange = 20;
				minRangeProbab = 0.9;
				midRange = 300;
				midRangeProbab = 0.8;
				maxRange = 700;
				maxRangeProbab = 0.2;
				aiDispersionCoefX = 15;
				aiDispersionCoefY = 20;
			};
			class ASR_AI_Single_optics2: Single
			{
				showToPlayer = 0;
				requiredOpticType = 2;
				aiRateOfFire = 8;
				aiRateOfFireDistance = 1000;
				minRange = 20;
				minRangeProbab = 0.7;
				midRange = 500;
				midRangeProbab = 0.8;
				maxRange = 1200;
				maxRangeProbab = 0.1;
				aiDispersionCoefX = 10;
				aiDispersionCoefY = 15;
			};
			class ASR_SemiAuto: Single
			{
				aiRateOfFire = 2;
				aiRateOfFireDistance = 300;
				minRange = 0;
				minRangeProbab = 0.9;
				midRange = 150;
				midRangeProbab = 0.5;
				maxRange = 500;
				maxRangeProbab = 0.1;
			};
		};
	};
	class muzzle_snds_H_MG: muzzle_snds_H
	{
		class ItemInfo: ItemInfo
		{
			modes[] = {"FullAuto","ASR_AI_Burst_close","ASR_AI_Burst_short","ASR_AI_Burst_medium","ASR_AI_Burst_far","ASR_AI_Burst_far_optic1","ASR_AI_Burst_far_optic2"};
			class manual: Mode_FullAuto
			{
				aiRateOfFire = 0.2;
				aiRateOfFireDistance = 20;
				minRange = 0;
				minRangeProbab = 0.9;
				midRange = 20;
				midRangeProbab = 0.7;
				maxRange = 40;
				maxRangeProbab = 0.1;
				aiDispersionCoefX = 20;
				aiDispersionCoefY = 25;
			};
			class ASR_AI_Burst_close: manual
			{
				showToPlayer = 0;
				burst = 5;
				aiRateOfFire = 1;
				aiRateOfFireDistance = 200;
				minRange = 30;
				minRangeProbab = 0.8;
				midRange = 100;
				midRangeProbab = 0.7;
				maxRange = 150;
				maxRangeProbab = 0.1;
			};
			class ASR_AI_Burst_short: ASR_AI_Burst_close
			{
				burst = 7;
				aiRateOfFire = 2;
				aiRateOfFireDistance = 400;
				minRange = 80;
				minRangeProbab = 0.8;
				midRange = 150;
				midRangeProbab = 0.7;
				maxRange = 350;
				maxRangeProbab = 0.1;
			};
			class ASR_AI_Burst_medium: ASR_AI_Burst_close
			{
				burst = 6;
				aiRateOfFire = 2;
				aiRateOfFireDistance = 600;
				minRange = 200;
				minRangeProbab = 0.8;
				midRange = 300;
				midRangeProbab = 0.7;
				maxRange = 600;
				maxRangeProbab = 0.1;
			};
			class ASR_AI_Burst_far: ASR_AI_Burst_close
			{
				burst = 6;
				aiRateOfFire = 4;
				aiRateOfFireDistance = 1000;
				minRange = 400;
				minRangeProbab = 0.7;
				midRange = 500;
				midRangeProbab = 0.2;
				maxRange = 700;
				maxRangeProbab = 0.1;
			};
			class ASR_AI_Burst_far_optic1: ASR_AI_Burst_close
			{
				requiredOpticType = 1;
				burst = 4;
				aiRateOfFire = 3;
				aiRateOfFireDistance = 800;
				minRange = 400;
				minRangeProbab = 0.8;
				midRange = 600;
				midRangeProbab = 0.7;
				maxRange = 1000;
				maxRangeProbab = 0.1;
				aiDispersionCoefX = 15;
				aiDispersionCoefY = 20;
			};
			class ASR_AI_Burst_far_optic2: ASR_AI_Burst_close
			{
				requiredOpticType = 2;
				burst = 4;
				aiRateOfFire = 3;
				aiRateOfFireDistance = 800;
				minRange = 400;
				minRangeProbab = 0.8;
				midRange = 600;
				midRangeProbab = 0.7;
				maxRange = 1000;
				maxRangeProbab = 0.1;
				aiDispersionCoefX = 10;
				aiDispersionCoefY = 15;
			};
			class Single: manual
			{
				aiRateOfFire = 1;
				aiRateOfFireDistance = 300;
				minRange = 200;
				minRangeProbab = 0.2;
				midRange = 300;
				midRangeProbab = 0.3;
				maxRange = 500;
				maxRangeProbab = 0.1;
				aiDispersionCoefX = 20;
				aiDispersionCoefY = 25;
			};
		};
	};
	class muzzle_snds_L: muzzle_snds_H
	{
		class ItemInfo: ItemInfo
		{
			modes[] = {"Single","Burst","FullAuto"};
			class Single: Mode_SemiAuto
			{
				aiRateOfFire = 1;
				aiRateOfFireDistance = 70;
				minRange = 0;
				minRangeProbab = 0.2;
				midRange = 40;
				midRangeProbab = 0.1;
				maxRange = 80;
				maxRangeProbab = 0.05;
			};
			class Burst: Mode_Burst
			{
				aiRateOfFire = 1;
				aiRateOfFireDistance = 30;
				minRange = 30;
				minRangeProbab = 0.8;
				midRange = 40;
				midRangeProbab = 0.5;
				maxRange = 50;
				maxRangeProbab = 0.2;
			};
			class FullAuto: Mode_FullAuto
			{
				aiRateOfFire = 0.2;
				aiRateOfFireDistance = 20;
				minRange = 0;
				minRangeProbab = 0.9;
				midRange = 20;
				midRangeProbab = 0.8;
				maxRange = 30;
				maxRangeProbab = 0.2;
			};
		};
	};
	class muzzle_snds_acp: muzzle_snds_H
	{
		class ItemInfo: ItemInfo
		{
			modes[] = {"Single","Burst","FullAuto"};
			class Single: Mode_SemiAuto
			{
				aiRateOfFire = 1;
				aiRateOfFireDistance = 70;
				minRange = 0;
				minRangeProbab = 0.2;
				midRange = 40;
				midRangeProbab = 0.1;
				maxRange = 80;
				maxRangeProbab = 0.05;
			};
			class Burst: Mode_Burst
			{
				burst = 2;
				aiRateOfFire = 1;
				aiRateOfFireDistance = 30;
				minRange = 30;
				minRangeProbab = 0.8;
				midRange = 40;
				midRangeProbab = 0.5;
				maxRange = 50;
				maxRangeProbab = 0.2;
			};
			class FullAuto: Mode_FullAuto
			{
				aiRateOfFire = 0.2;
				aiRateOfFireDistance = 20;
				minRange = 0;
				minRangeProbab = 0.9;
				midRange = 20;
				midRangeProbab = 0.8;
				maxRange = 30;
				maxRangeProbab = 0.2;
			};
		};
	};
	class Rifle_Base_F: Rifle{};
	class Rifle_Long_Base_F: Rifle_Base_F{};
	class EBR_base_F: Rifle_Long_Base_F
	{
		modes[] = {"Single","FullAuto","ASR_AI_Burst_close","ASR_AI_Single_optics1","ASR_AI_Single_optics2"};
		class Single: Mode_SemiAuto
		{
			aiRateOfFire = 2;
			aiRateOfFireDistance = 300;
			minRange = 20;
			minRangeProbab = 0.8;
			midRange = 150;
			midRangeProbab = 0.5;
			maxRange = 500;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 20;
			aiDispersionCoefY = 25;
		};
		class FullAuto: Mode_FullAuto
		{
			aiRateOfFire = 0.2;
			aiRateOfFireDistance = 20;
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 5;
			midRangeProbab = 0.8;
			maxRange = 10;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 20;
			aiDispersionCoefY = 25;
		};
		class ASR_AI_Burst_close: FullAuto
		{
			showToPlayer = 0;
			burst = 4;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 100;
			minRange = 10;
			minRangeProbab = 0.8;
			midRange = 20;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.1;
		};
		class ASR_AI_Single_optics1: Single
		{
			showToPlayer = 0;
			requiredOpticType = 1;
			aiRateOfFire = 3;
			aiRateOfFireDistance = 500;
			minRange = 20;
			minRangeProbab = 0.9;
			midRange = 300;
			midRangeProbab = 0.8;
			maxRange = 700;
			maxRangeProbab = 0.2;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class ASR_AI_Single_optics2: Single
		{
			showToPlayer = 0;
			requiredOpticType = 2;
			aiRateOfFire = 8;
			aiRateOfFireDistance = 1000;
			minRange = 20;
			minRangeProbab = 0.7;
			midRange = 500;
			midRangeProbab = 0.8;
			maxRange = 1200;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 10;
			aiDispersionCoefY = 15;
		};
		class ASR_SemiAuto: Single
		{
			aiRateOfFire = 2;
			aiRateOfFireDistance = 300;
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 150;
			midRangeProbab = 0.5;
			maxRange = 500;
			maxRangeProbab = 0.1;
		};
		aiDispersionCoefX = 20;
		aiDispersionCoefY = 25;
	};
	class DMR_01_base_F: Rifle_Long_Base_F
	{
		modes[] = {"Single","FullAuto","ASR_AI_Burst_close","ASR_AI_Single_optics1","ASR_AI_Single_optics2"};
		class Single: Mode_SemiAuto
		{
			aiRateOfFire = 2;
			aiRateOfFireDistance = 300;
			minRange = 20;
			minRangeProbab = 0.8;
			midRange = 150;
			midRangeProbab = 0.5;
			maxRange = 500;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 20;
			aiDispersionCoefY = 25;
		};
		class FullAuto: Mode_FullAuto
		{
			aiRateOfFire = 0.2;
			aiRateOfFireDistance = 20;
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 5;
			midRangeProbab = 0.8;
			maxRange = 10;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 20;
			aiDispersionCoefY = 25;
		};
		class ASR_AI_Burst_close: FullAuto
		{
			showToPlayer = 0;
			burst = 4;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 100;
			minRange = 10;
			minRangeProbab = 0.8;
			midRange = 20;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.1;
		};
		class ASR_AI_Single_optics1: Single
		{
			showToPlayer = 0;
			requiredOpticType = 1;
			aiRateOfFire = 3;
			aiRateOfFireDistance = 500;
			minRange = 20;
			minRangeProbab = 0.9;
			midRange = 300;
			midRangeProbab = 0.8;
			maxRange = 700;
			maxRangeProbab = 0.2;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class ASR_AI_Single_optics2: Single
		{
			showToPlayer = 0;
			requiredOpticType = 2;
			aiRateOfFire = 8;
			aiRateOfFireDistance = 1000;
			minRange = 20;
			minRangeProbab = 0.7;
			midRange = 500;
			midRangeProbab = 0.8;
			maxRange = 1200;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 10;
			aiDispersionCoefY = 15;
		};
		class ASR_SemiAuto: Single
		{
			aiRateOfFire = 2;
			aiRateOfFireDistance = 300;
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 150;
			midRangeProbab = 0.5;
			maxRange = 500;
			maxRangeProbab = 0.1;
		};
		aiDispersionCoefX = 20;
		aiDispersionCoefY = 25;
	};
	class LMG_Mk200_F: Rifle_Long_Base_F
	{
		modes[] = {"manual","ASR_AI_Burst_close","ASR_AI_Burst_short","ASR_AI_Burst_medium","ASR_AI_Burst_far","ASR_AI_Burst_far_optic1","ASR_AI_Burst_far_optic2"};
		class manual: Mode_FullAuto
		{
			aiRateOfFire = 0.2;
			aiRateOfFireDistance = 20;
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 20;
			midRangeProbab = 0.7;
			maxRange = 40;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 20;
			aiDispersionCoefY = 25;
		};
		class ASR_AI_Burst_close: manual
		{
			showToPlayer = 0;
			burst = 5;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 200;
			minRange = 30;
			minRangeProbab = 0.8;
			midRange = 100;
			midRangeProbab = 0.7;
			maxRange = 150;
			maxRangeProbab = 0.1;
		};
		class ASR_AI_Burst_short: ASR_AI_Burst_close
		{
			burst = 7;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 400;
			minRange = 80;
			minRangeProbab = 0.8;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 350;
			maxRangeProbab = 0.1;
		};
		class ASR_AI_Burst_medium: ASR_AI_Burst_close
		{
			burst = 6;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 600;
			minRange = 200;
			minRangeProbab = 0.8;
			midRange = 300;
			midRangeProbab = 0.7;
			maxRange = 600;
			maxRangeProbab = 0.1;
		};
		class ASR_AI_Burst_far: ASR_AI_Burst_close
		{
			burst = 6;
			aiRateOfFire = 4;
			aiRateOfFireDistance = 1000;
			minRange = 400;
			minRangeProbab = 0.7;
			midRange = 500;
			midRangeProbab = 0.2;
			maxRange = 700;
			maxRangeProbab = 0.1;
		};
		class ASR_AI_Burst_far_optic1: ASR_AI_Burst_close
		{
			requiredOpticType = 1;
			burst = 4;
			aiRateOfFire = 3;
			aiRateOfFireDistance = 800;
			minRange = 400;
			minRangeProbab = 0.8;
			midRange = 600;
			midRangeProbab = 0.7;
			maxRange = 1000;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class ASR_AI_Burst_far_optic2: ASR_AI_Burst_close
		{
			requiredOpticType = 2;
			burst = 4;
			aiRateOfFire = 3;
			aiRateOfFireDistance = 800;
			minRange = 400;
			minRangeProbab = 0.8;
			midRange = 600;
			midRangeProbab = 0.7;
			maxRange = 1000;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 10;
			aiDispersionCoefY = 15;
		};
		class Single: manual
		{
			aiRateOfFire = 1;
			aiRateOfFireDistance = 300;
			minRange = 200;
			minRangeProbab = 0.2;
			midRange = 300;
			midRangeProbab = 0.3;
			maxRange = 500;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 20;
			aiDispersionCoefY = 25;
		};
		aiDispersionCoefX = 20;
		aiDispersionCoefY = 25;
		asr_ai_wtype = 5;
		asr_ai_hasbipod = 1;
	};
	class arifle_Katiba_Base_F: Rifle_Base_F
	{
		modes[] = {"Single","FullAuto","ASR_AI_Burst_close","ASR_AI_Burst_far","ASR_AI_Single_optics1","ASR_AI_Single_optics2"};
		class Single: Mode_SemiAuto
		{
			aiRateOfFire = 1;
			aiRateOfFireDistance = 200;
			minRange = 60;
			minRangeProbab = 0.7;
			midRange = 150;
			midRangeProbab = 0.5;
			maxRange = 500;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 20;
			aiDispersionCoefY = 25;
		};
		class FullAuto: Mode_FullAuto
		{
			aiRateOfFire = 0.2;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 10;
			midRangeProbab = 0.8;
			maxRange = 15;
			maxRangeProbab = 0.3;
			aiDispersionCoefX = 20;
			aiDispersionCoefY = 25;
		};
		class ASR_AI_Burst_close: FullAuto
		{
			showToPlayer = 0;
			burst = 5;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 60;
			minRange = 15;
			minRangeProbab = 0.8;
			midRange = 30;
			midRangeProbab = 0.7;
			maxRange = 70;
			maxRangeProbab = 0.1;
		};
		class ASR_AI_Burst_close2: ASR_AI_Burst_close
		{
			burst = 4;
		};
		class ASR_AI_Burst_far: FullAuto
		{
			showToPlayer = 0;
			burst = 5;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 500;
			minRange = 400;
			minRangeProbab = 0.05;
			midRange = 500;
			midRangeProbab = 0.3;
			maxRange = 700;
			maxRangeProbab = 0.1;
		};
		class ASR_AI_Single_optics1: Single
		{
			showToPlayer = 0;
			requiredOpticType = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 400;
			minRange = 60;
			minRangeProbab = 0.8;
			midRange = 300;
			midRangeProbab = 0.6;
			maxRange = 700;
			maxRangeProbab = 0.2;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class ASR_AI_Single_optics2: Single
		{
			showToPlayer = 0;
			requiredOpticType = 2;
			aiRateOfFire = 3;
			aiRateOfFireDistance = 400;
			minRange = 60;
			minRangeProbab = 0.8;
			midRange = 300;
			midRangeProbab = 0.6;
			maxRange = 900;
			maxRangeProbab = 0.2;
			aiDispersionCoefX = 10;
			aiDispersionCoefY = 15;
		};
		class ASR_SemiAuto: Single
		{
			aiRateOfFire = 1;
			aiRateOfFireDistance = 200;
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 150;
			midRangeProbab = 0.5;
			maxRange = 500;
			maxRangeProbab = 0.1;
		};
		class ASR_Burst3: Single
		{
			aiRateOfFire = 1;
			aiRateOfFireDistance = 60;
			minRange = 15;
			minRangeProbab = 0.8;
			midRange = 30;
			midRangeProbab = 0.7;
			maxRange = 70;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 20;
			aiDispersionCoefY = 25;
			showToPlayer = 1;
			burst = 3;
			displayName = "$STR_DN_MODE_BURST";
			textureType = "burst";
			soundBurst = 0;
		};
		class ASR_Burst2: ASR_Burst3
		{
			burst = 2;
		};
		aiDispersionCoefX = 20;
		aiDispersionCoefY = 25;
	};
	class arifle_Katiba_C_F: arifle_Katiba_Base_F
	{
		modes[] = {"Single","FullAuto","ASR_AI_Burst_close","ASR_AI_Burst_far","ASR_AI_Single_optics1","ASR_AI_Single_optics2"};
		class Single: Single
		{
			aiRateOfFire = 1;
			aiRateOfFireDistance = 200;
			minRange = 60;
			minRangeProbab = 0.7;
			midRange = 150;
			midRangeProbab = 0.5;
			maxRange = 400;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 20;
			aiDispersionCoefY = 25;
		};
		class FullAuto: FullAuto
		{
			aiRateOfFire = 0.2;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 10;
			midRangeProbab = 0.8;
			maxRange = 15;
			maxRangeProbab = 0.3;
			aiDispersionCoefX = 20;
			aiDispersionCoefY = 25;
		};
		class ASR_AI_Burst_close: FullAuto
		{
			showToPlayer = 0;
			burst = 5;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 60;
			minRange = 15;
			minRangeProbab = 0.8;
			midRange = 30;
			midRangeProbab = 0.7;
			maxRange = 70;
			maxRangeProbab = 0.1;
		};
		class ASR_AI_Burst_close2: ASR_AI_Burst_close
		{
			burst = 4;
		};
		class ASR_AI_Burst_far: FullAuto
		{
			showToPlayer = 0;
			burst = 4;
			aiRateOfFire = 6;
			aiRateOfFireDistance = 500;
			minRange = 300;
			minRangeProbab = 0.05;
			midRange = 400;
			midRangeProbab = 0.3;
			maxRange = 600;
			maxRangeProbab = 0.1;
		};
		class ASR_AI_Single_optics1: Single
		{
			showToPlayer = 0;
			requiredOpticType = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 400;
			minRange = 60;
			minRangeProbab = 0.8;
			midRange = 200;
			midRangeProbab = 0.6;
			maxRange = 500;
			maxRangeProbab = 0.2;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class ASR_AI_Single_optics2: Single
		{
			showToPlayer = 0;
			requiredOpticType = 2;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 400;
			minRange = 60;
			minRangeProbab = 0.8;
			midRange = 200;
			midRangeProbab = 0.6;
			maxRange = 500;
			maxRangeProbab = 0.2;
			aiDispersionCoefX = 10;
			aiDispersionCoefY = 15;
		};
		class ASR_SemiAuto: Single
		{
			aiRateOfFire = 1;
			aiRateOfFireDistance = 200;
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 150;
			midRangeProbab = 0.5;
			maxRange = 400;
			maxRangeProbab = 0.1;
		};
		class ASR_Burst3: Single
		{
			aiRateOfFire = 1;
			aiRateOfFireDistance = 60;
			minRange = 15;
			minRangeProbab = 0.8;
			midRange = 30;
			midRangeProbab = 0.7;
			maxRange = 70;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 20;
			aiDispersionCoefY = 25;
			showToPlayer = 1;
			burst = 3;
			displayName = "$STR_DN_MODE_BURST";
			textureType = "burst";
			soundBurst = 0;
		};
		class ASR_Burst2: ASR_Burst3
		{
			burst = 2;
		};
		aiDispersionCoefX = 20;
		aiDispersionCoefY = 25;
	};
	class arifle_MX_Base_F: Rifle_Base_F
	{
		modes[] = {"Single","FullAuto","ASR_AI_Burst_close","ASR_AI_Burst_close2","ASR_AI_Single_optics1","ASR_AI_Single_optics2"};
		class Single: Mode_SemiAuto
		{
			aiRateOfFire = 1;
			aiRateOfFireDistance = 200;
			minRange = 60;
			minRangeProbab = 0.7;
			midRange = 150;
			midRangeProbab = 0.5;
			maxRange = 500;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 20;
			aiDispersionCoefY = 25;
		};
		class FullAuto: Mode_FullAuto
		{
			aiRateOfFire = 0.2;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 10;
			midRangeProbab = 0.8;
			maxRange = 15;
			maxRangeProbab = 0.3;
			aiDispersionCoefX = 20;
			aiDispersionCoefY = 25;
		};
		class ASR_AI_Burst_close: FullAuto
		{
			showToPlayer = 0;
			burst = 5;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 60;
			minRange = 15;
			minRangeProbab = 0.8;
			midRange = 30;
			midRangeProbab = 0.7;
			maxRange = 70;
			maxRangeProbab = 0.1;
		};
		class ASR_AI_Burst_close2: ASR_AI_Burst_close
		{
			burst = 4;
		};
		class ASR_AI_Burst_far: FullAuto
		{
			showToPlayer = 0;
			burst = 5;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 500;
			minRange = 400;
			minRangeProbab = 0.05;
			midRange = 500;
			midRangeProbab = 0.3;
			maxRange = 700;
			maxRangeProbab = 0.1;
		};
		class ASR_AI_Single_optics1: Single
		{
			showToPlayer = 0;
			requiredOpticType = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 400;
			minRange = 60;
			minRangeProbab = 0.8;
			midRange = 300;
			midRangeProbab = 0.6;
			maxRange = 700;
			maxRangeProbab = 0.2;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class ASR_AI_Single_optics2: Single
		{
			showToPlayer = 0;
			requiredOpticType = 2;
			aiRateOfFire = 3;
			aiRateOfFireDistance = 400;
			minRange = 60;
			minRangeProbab = 0.8;
			midRange = 300;
			midRangeProbab = 0.6;
			maxRange = 900;
			maxRangeProbab = 0.2;
			aiDispersionCoefX = 10;
			aiDispersionCoefY = 15;
		};
		class ASR_SemiAuto: Single
		{
			aiRateOfFire = 1;
			aiRateOfFireDistance = 200;
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 150;
			midRangeProbab = 0.5;
			maxRange = 500;
			maxRangeProbab = 0.1;
		};
		class ASR_Burst3: Single
		{
			aiRateOfFire = 1;
			aiRateOfFireDistance = 60;
			minRange = 15;
			minRangeProbab = 0.8;
			midRange = 30;
			midRangeProbab = 0.7;
			maxRange = 70;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 20;
			aiDispersionCoefY = 25;
			showToPlayer = 1;
			burst = 3;
			displayName = "$STR_DN_MODE_BURST";
			textureType = "burst";
			soundBurst = 0;
		};
		class ASR_Burst2: ASR_Burst3
		{
			burst = 2;
		};
		aiDispersionCoefX = 20;
		aiDispersionCoefY = 25;
	};
	class arifle_MXC_F: arifle_MX_Base_F
	{
		modes[] = {"Single","FullAuto","ASR_AI_Burst_close","ASR_AI_Burst_close2","ASR_AI_Single_optics1","ASR_AI_Single_optics2"};
		class Single: Single
		{
			aiRateOfFire = 1;
			aiRateOfFireDistance = 200;
			minRange = 60;
			minRangeProbab = 0.7;
			midRange = 150;
			midRangeProbab = 0.5;
			maxRange = 400;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 20;
			aiDispersionCoefY = 25;
		};
		class FullAuto: FullAuto
		{
			aiRateOfFire = 0.2;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 10;
			midRangeProbab = 0.8;
			maxRange = 15;
			maxRangeProbab = 0.3;
			aiDispersionCoefX = 20;
			aiDispersionCoefY = 25;
		};
		class ASR_AI_Burst_close: FullAuto
		{
			showToPlayer = 0;
			burst = 5;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 60;
			minRange = 15;
			minRangeProbab = 0.8;
			midRange = 30;
			midRangeProbab = 0.7;
			maxRange = 70;
			maxRangeProbab = 0.1;
		};
		class ASR_AI_Burst_close2: ASR_AI_Burst_close
		{
			burst = 4;
		};
		class ASR_AI_Burst_far: FullAuto
		{
			showToPlayer = 0;
			burst = 4;
			aiRateOfFire = 6;
			aiRateOfFireDistance = 500;
			minRange = 300;
			minRangeProbab = 0.05;
			midRange = 400;
			midRangeProbab = 0.3;
			maxRange = 600;
			maxRangeProbab = 0.1;
		};
		class ASR_AI_Single_optics1: Single
		{
			showToPlayer = 0;
			requiredOpticType = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 400;
			minRange = 60;
			minRangeProbab = 0.8;
			midRange = 200;
			midRangeProbab = 0.6;
			maxRange = 500;
			maxRangeProbab = 0.2;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class ASR_AI_Single_optics2: Single
		{
			showToPlayer = 0;
			requiredOpticType = 2;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 400;
			minRange = 60;
			minRangeProbab = 0.8;
			midRange = 200;
			midRangeProbab = 0.6;
			maxRange = 500;
			maxRangeProbab = 0.2;
			aiDispersionCoefX = 10;
			aiDispersionCoefY = 15;
		};
		class ASR_SemiAuto: Single
		{
			aiRateOfFire = 1;
			aiRateOfFireDistance = 200;
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 150;
			midRangeProbab = 0.5;
			maxRange = 400;
			maxRangeProbab = 0.1;
		};
		class ASR_Burst3: Single
		{
			aiRateOfFire = 1;
			aiRateOfFireDistance = 60;
			minRange = 15;
			minRangeProbab = 0.8;
			midRange = 30;
			midRangeProbab = 0.7;
			maxRange = 70;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 20;
			aiDispersionCoefY = 25;
			showToPlayer = 1;
			burst = 3;
			displayName = "$STR_DN_MODE_BURST";
			textureType = "burst";
			soundBurst = 0;
		};
		class ASR_Burst2: ASR_Burst3
		{
			burst = 2;
		};
		aiDispersionCoefX = 20;
		aiDispersionCoefY = 25;
	};
	class arifle_MX_SW_F: arifle_MX_Base_F
	{
		modes[] = {"Single","manual","ASR_AI_Burst_close","ASR_AI_Burst_short","ASR_AI_Burst_medium","ASR_AI_Burst_far","ASR_AI_Burst_far_optic1","ASR_AI_Burst_far_optic2"};
		class manual: FullAuto
		{
			aiRateOfFire = 0.2;
			aiRateOfFireDistance = 20;
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 20;
			midRangeProbab = 0.7;
			maxRange = 40;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 20;
			aiDispersionCoefY = 25;
		};
		class ASR_AI_Burst_close: manual
		{
			showToPlayer = 0;
			burst = 5;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 200;
			minRange = 30;
			minRangeProbab = 0.8;
			midRange = 100;
			midRangeProbab = 0.7;
			maxRange = 150;
			maxRangeProbab = 0.1;
		};
		class ASR_AI_Burst_short: ASR_AI_Burst_close
		{
			burst = 7;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 400;
			minRange = 80;
			minRangeProbab = 0.8;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 350;
			maxRangeProbab = 0.1;
		};
		class ASR_AI_Burst_medium: ASR_AI_Burst_close
		{
			burst = 6;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 600;
			minRange = 200;
			minRangeProbab = 0.8;
			midRange = 300;
			midRangeProbab = 0.7;
			maxRange = 600;
			maxRangeProbab = 0.1;
		};
		class ASR_AI_Burst_far: ASR_AI_Burst_close
		{
			burst = 6;
			aiRateOfFire = 4;
			aiRateOfFireDistance = 1000;
			minRange = 400;
			minRangeProbab = 0.7;
			midRange = 500;
			midRangeProbab = 0.2;
			maxRange = 700;
			maxRangeProbab = 0.1;
		};
		class ASR_AI_Burst_far_optic1: ASR_AI_Burst_close
		{
			requiredOpticType = 1;
			burst = 4;
			aiRateOfFire = 3;
			aiRateOfFireDistance = 800;
			minRange = 400;
			minRangeProbab = 0.8;
			midRange = 600;
			midRangeProbab = 0.7;
			maxRange = 1000;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class ASR_AI_Burst_far_optic2: ASR_AI_Burst_close
		{
			requiredOpticType = 2;
			burst = 4;
			aiRateOfFire = 3;
			aiRateOfFireDistance = 800;
			minRange = 400;
			minRangeProbab = 0.8;
			midRange = 600;
			midRangeProbab = 0.7;
			maxRange = 1000;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 10;
			aiDispersionCoefY = 15;
		};
		class Single: Mode_SemiAuto
		{
			aiRateOfFire = 1;
			aiRateOfFireDistance = 300;
			minRange = 200;
			minRangeProbab = 0.2;
			midRange = 300;
			midRangeProbab = 0.3;
			maxRange = 500;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 20;
			aiDispersionCoefY = 25;
		};
		aiDispersionCoefX = 20;
		aiDispersionCoefY = 25;
		asr_ai_wtype = 6;
		asr_ai_hasbipod = 1;
	};
	class arifle_MXM_F: arifle_MX_Base_F
	{
		modes[] = {"Single","FullAuto","ASR_AI_Burst_close","ASR_AI_Burst_close2","ASR_AI_Single_optics1","ASR_AI_Single_optics2"};
		class Single: Single
		{
			aiRateOfFire = 1;
			aiRateOfFireDistance = 200;
			minRange = 60;
			minRangeProbab = 0.7;
			midRange = 150;
			midRangeProbab = 0.5;
			maxRange = 500;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 20;
			aiDispersionCoefY = 25;
		};
		class FullAuto: FullAuto
		{
			aiRateOfFire = 0.2;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 10;
			midRangeProbab = 0.8;
			maxRange = 15;
			maxRangeProbab = 0.3;
			aiDispersionCoefX = 20;
			aiDispersionCoefY = 25;
		};
		class ASR_AI_Burst_close: FullAuto
		{
			showToPlayer = 0;
			burst = 5;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 60;
			minRange = 15;
			minRangeProbab = 0.8;
			midRange = 30;
			midRangeProbab = 0.7;
			maxRange = 70;
			maxRangeProbab = 0.1;
		};
		class ASR_AI_Burst_close2: ASR_AI_Burst_close
		{
			burst = 4;
		};
		class ASR_AI_Burst_far: FullAuto
		{
			showToPlayer = 0;
			burst = 5;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 500;
			minRange = 400;
			minRangeProbab = 0.05;
			midRange = 500;
			midRangeProbab = 0.3;
			maxRange = 700;
			maxRangeProbab = 0.1;
		};
		class ASR_AI_Single_optics1: Single
		{
			showToPlayer = 0;
			requiredOpticType = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 400;
			minRange = 60;
			minRangeProbab = 0.8;
			midRange = 300;
			midRangeProbab = 0.6;
			maxRange = 700;
			maxRangeProbab = 0.2;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class ASR_AI_Single_optics2: Single
		{
			showToPlayer = 0;
			requiredOpticType = 2;
			aiRateOfFire = 3;
			aiRateOfFireDistance = 400;
			minRange = 60;
			minRangeProbab = 0.8;
			midRange = 300;
			midRangeProbab = 0.6;
			maxRange = 900;
			maxRangeProbab = 0.2;
			aiDispersionCoefX = 10;
			aiDispersionCoefY = 15;
		};
		class ASR_SemiAuto: Single
		{
			aiRateOfFire = 1;
			aiRateOfFireDistance = 200;
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 150;
			midRangeProbab = 0.5;
			maxRange = 500;
			maxRangeProbab = 0.1;
		};
		class ASR_Burst3: Single
		{
			aiRateOfFire = 1;
			aiRateOfFireDistance = 60;
			minRange = 15;
			minRangeProbab = 0.8;
			midRange = 30;
			midRangeProbab = 0.7;
			maxRange = 70;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 20;
			aiDispersionCoefY = 25;
			showToPlayer = 1;
			burst = 3;
			displayName = "$STR_DN_MODE_BURST";
			textureType = "burst";
			soundBurst = 0;
		};
		class ASR_Burst2: ASR_Burst3
		{
			burst = 2;
		};
	};
	class SDAR_base_F: Rifle_Base_F
	{
		modes[] = {"Single","Burst","FullAuto"};
		class Single: Mode_SemiAuto
		{
			aiRateOfFire = 1;
			aiRateOfFireDistance = 200;
			minRange = 40;
			minRangeProbab = 0.9;
			midRange = 80;
			midRangeProbab = 0.5;
			maxRange = 250;
			maxRangeProbab = 0.1;
		};
		class Burst: Mode_Burst
		{
			aiRateOfFire = 1;
			aiRateOfFireDistance = 30;
			minRange = 30;
			minRangeProbab = 0.8;
			midRange = 40;
			midRangeProbab = 0.5;
			maxRange = 50;
			maxRangeProbab = 0.2;
		};
		class FullAuto: Mode_FullAuto
		{
			aiRateOfFire = 0.2;
			aiRateOfFireDistance = 20;
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 20;
			midRangeProbab = 0.8;
			maxRange = 30;
			maxRangeProbab = 0.2;
		};
		aiDispersionCoefX = 20;
		aiDispersionCoefY = 25;
	};
	class Tavor_base_F: Rifle_Base_F
	{
		modes[] = {"Single","FullAuto","ASR_AI_Burst_close","ASR_AI_Burst_far","ASR_AI_Single_optics1","ASR_AI_Single_optics2"};
		class Single: Mode_SemiAuto
		{
			aiRateOfFire = 1;
			aiRateOfFireDistance = 200;
			minRange = 60;
			minRangeProbab = 0.7;
			midRange = 150;
			midRangeProbab = 0.5;
			maxRange = 400;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 20;
			aiDispersionCoefY = 25;
		};
		class FullAuto: Mode_FullAuto
		{
			aiRateOfFire = 0.2;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 10;
			midRangeProbab = 0.8;
			maxRange = 15;
			maxRangeProbab = 0.3;
			aiDispersionCoefX = 20;
			aiDispersionCoefY = 25;
		};
		class ASR_AI_Burst_close: FullAuto
		{
			showToPlayer = 0;
			burst = 5;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 60;
			minRange = 15;
			minRangeProbab = 0.8;
			midRange = 30;
			midRangeProbab = 0.7;
			maxRange = 70;
			maxRangeProbab = 0.1;
		};
		class ASR_AI_Burst_close2: ASR_AI_Burst_close
		{
			burst = 4;
		};
		class ASR_AI_Burst_far: FullAuto
		{
			showToPlayer = 0;
			burst = 4;
			aiRateOfFire = 6;
			aiRateOfFireDistance = 500;
			minRange = 300;
			minRangeProbab = 0.05;
			midRange = 400;
			midRangeProbab = 0.3;
			maxRange = 600;
			maxRangeProbab = 0.1;
		};
		class ASR_AI_Single_optics1: Single
		{
			showToPlayer = 0;
			requiredOpticType = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 400;
			minRange = 60;
			minRangeProbab = 0.8;
			midRange = 200;
			midRangeProbab = 0.6;
			maxRange = 500;
			maxRangeProbab = 0.2;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class ASR_AI_Single_optics2: Single
		{
			showToPlayer = 0;
			requiredOpticType = 2;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 400;
			minRange = 60;
			minRangeProbab = 0.8;
			midRange = 200;
			midRangeProbab = 0.6;
			maxRange = 500;
			maxRangeProbab = 0.2;
			aiDispersionCoefX = 10;
			aiDispersionCoefY = 15;
		};
		class ASR_SemiAuto: Single
		{
			aiRateOfFire = 1;
			aiRateOfFireDistance = 200;
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 150;
			midRangeProbab = 0.5;
			maxRange = 400;
			maxRangeProbab = 0.1;
		};
		class ASR_Burst3: Single
		{
			aiRateOfFire = 1;
			aiRateOfFireDistance = 60;
			minRange = 15;
			minRangeProbab = 0.8;
			midRange = 30;
			midRangeProbab = 0.7;
			maxRange = 70;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 20;
			aiDispersionCoefY = 25;
			showToPlayer = 1;
			burst = 3;
			displayName = "$STR_DN_MODE_BURST";
			textureType = "burst";
			soundBurst = 0;
		};
		class ASR_Burst2: ASR_Burst3
		{
			burst = 2;
		};
		aiDispersionCoefX = 20;
		aiDispersionCoefY = 25;
	};
	class arifle_TRG21_F: Tavor_base_F
	{
		modes[] = {"Single","FullAuto","ASR_AI_Burst_close","ASR_AI_Burst_far","ASR_AI_Single_optics1","ASR_AI_Single_optics2"};
		class Single: Single
		{
			aiRateOfFire = 1;
			aiRateOfFireDistance = 200;
			minRange = 60;
			minRangeProbab = 0.7;
			midRange = 150;
			midRangeProbab = 0.5;
			maxRange = 500;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 20;
			aiDispersionCoefY = 25;
		};
		class FullAuto: FullAuto
		{
			aiRateOfFire = 0.2;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 10;
			midRangeProbab = 0.8;
			maxRange = 15;
			maxRangeProbab = 0.3;
			aiDispersionCoefX = 20;
			aiDispersionCoefY = 25;
		};
		class ASR_AI_Burst_close: FullAuto
		{
			showToPlayer = 0;
			burst = 5;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 60;
			minRange = 15;
			minRangeProbab = 0.8;
			midRange = 30;
			midRangeProbab = 0.7;
			maxRange = 70;
			maxRangeProbab = 0.1;
		};
		class ASR_AI_Burst_close2: ASR_AI_Burst_close
		{
			burst = 4;
		};
		class ASR_AI_Burst_far: FullAuto
		{
			showToPlayer = 0;
			burst = 5;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 500;
			minRange = 400;
			minRangeProbab = 0.05;
			midRange = 500;
			midRangeProbab = 0.3;
			maxRange = 700;
			maxRangeProbab = 0.1;
		};
		class ASR_AI_Single_optics1: Single
		{
			showToPlayer = 0;
			requiredOpticType = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 400;
			minRange = 60;
			minRangeProbab = 0.8;
			midRange = 300;
			midRangeProbab = 0.6;
			maxRange = 700;
			maxRangeProbab = 0.2;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class ASR_AI_Single_optics2: Single
		{
			showToPlayer = 0;
			requiredOpticType = 2;
			aiRateOfFire = 3;
			aiRateOfFireDistance = 400;
			minRange = 60;
			minRangeProbab = 0.8;
			midRange = 300;
			midRangeProbab = 0.6;
			maxRange = 900;
			maxRangeProbab = 0.2;
			aiDispersionCoefX = 10;
			aiDispersionCoefY = 15;
		};
		class ASR_SemiAuto: Single
		{
			aiRateOfFire = 1;
			aiRateOfFireDistance = 200;
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 150;
			midRangeProbab = 0.5;
			maxRange = 500;
			maxRangeProbab = 0.1;
		};
		class ASR_Burst3: Single
		{
			aiRateOfFire = 1;
			aiRateOfFireDistance = 60;
			minRange = 15;
			minRangeProbab = 0.8;
			midRange = 30;
			midRangeProbab = 0.7;
			maxRange = 70;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 20;
			aiDispersionCoefY = 25;
			showToPlayer = 1;
			burst = 3;
			displayName = "$STR_DN_MODE_BURST";
			textureType = "burst";
			soundBurst = 0;
		};
		class ASR_Burst2: ASR_Burst3
		{
			burst = 2;
		};
	};
	class LMG_Zafir_F: Rifle_Long_Base_F
	{
		modes[] = {"FullAuto","Single","ASR_AI_Burst_close","ASR_AI_Burst_short","ASR_AI_Burst_medium","ASR_AI_Burst_far","ASR_AI_Burst_far_optic1","ASR_AI_Burst_far_optic2"};
		class FullAuto: Mode_FullAuto
		{
			aiRateOfFire = 0.2;
			aiRateOfFireDistance = 20;
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 20;
			midRangeProbab = 0.7;
			maxRange = 40;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 20;
			aiDispersionCoefY = 25;
		};
		class ASR_AI_Burst_close: FullAuto
		{
			showToPlayer = 0;
			burst = 5;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 200;
			minRange = 30;
			minRangeProbab = 0.8;
			midRange = 100;
			midRangeProbab = 0.7;
			maxRange = 150;
			maxRangeProbab = 0.1;
		};
		class ASR_AI_Burst_short: ASR_AI_Burst_close
		{
			burst = 7;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 400;
			minRange = 80;
			minRangeProbab = 0.8;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 350;
			maxRangeProbab = 0.1;
		};
		class ASR_AI_Burst_medium: ASR_AI_Burst_close
		{
			burst = 6;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 600;
			minRange = 200;
			minRangeProbab = 0.8;
			midRange = 300;
			midRangeProbab = 0.7;
			maxRange = 600;
			maxRangeProbab = 0.1;
		};
		class ASR_AI_Burst_far: ASR_AI_Burst_close
		{
			burst = 6;
			aiRateOfFire = 4;
			aiRateOfFireDistance = 1000;
			minRange = 400;
			minRangeProbab = 0.7;
			midRange = 500;
			midRangeProbab = 0.2;
			maxRange = 700;
			maxRangeProbab = 0.1;
		};
		class ASR_AI_Burst_far_optic1: ASR_AI_Burst_close
		{
			requiredOpticType = 1;
			burst = 4;
			aiRateOfFire = 3;
			aiRateOfFireDistance = 800;
			minRange = 400;
			minRangeProbab = 0.8;
			midRange = 600;
			midRangeProbab = 0.7;
			maxRange = 1000;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class ASR_AI_Burst_far_optic2: ASR_AI_Burst_close
		{
			requiredOpticType = 2;
			burst = 4;
			aiRateOfFire = 3;
			aiRateOfFireDistance = 800;
			minRange = 400;
			minRangeProbab = 0.8;
			midRange = 600;
			midRangeProbab = 0.7;
			maxRange = 1000;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 10;
			aiDispersionCoefY = 15;
		};
		class Single: Mode_SemiAuto
		{
			aiRateOfFire = 1;
			aiRateOfFireDistance = 300;
			minRange = 200;
			minRangeProbab = 0.2;
			midRange = 300;
			midRangeProbab = 0.3;
			maxRange = 500;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 20;
			aiDispersionCoefY = 25;
		};
		aiDispersionCoefX = 20;
		aiDispersionCoefY = 25;
		asr_ai_wtype = 5;
		asr_ai_hasbipod = 1;
	};
	class mk20_base_F: Rifle_Base_F
	{
		modes[] = {"Single","FullAuto","ASR_AI_Burst_close","ASR_AI_Burst_far","ASR_AI_Single_optics1","ASR_AI_Single_optics2"};
		class Single: Mode_SemiAuto
		{
			aiRateOfFire = 1;
			aiRateOfFireDistance = 200;
			minRange = 60;
			minRangeProbab = 0.7;
			midRange = 150;
			midRangeProbab = 0.5;
			maxRange = 500;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 20;
			aiDispersionCoefY = 25;
		};
		class FullAuto: Mode_FullAuto
		{
			aiRateOfFire = 0.2;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 10;
			midRangeProbab = 0.8;
			maxRange = 15;
			maxRangeProbab = 0.3;
			aiDispersionCoefX = 20;
			aiDispersionCoefY = 25;
		};
		class ASR_AI_Burst_close: FullAuto
		{
			showToPlayer = 0;
			burst = 5;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 60;
			minRange = 15;
			minRangeProbab = 0.8;
			midRange = 30;
			midRangeProbab = 0.7;
			maxRange = 70;
			maxRangeProbab = 0.1;
		};
		class ASR_AI_Burst_close2: ASR_AI_Burst_close
		{
			burst = 4;
		};
		class ASR_AI_Burst_far: FullAuto
		{
			showToPlayer = 0;
			burst = 5;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 500;
			minRange = 400;
			minRangeProbab = 0.05;
			midRange = 500;
			midRangeProbab = 0.3;
			maxRange = 700;
			maxRangeProbab = 0.1;
		};
		class ASR_AI_Single_optics1: Single
		{
			showToPlayer = 0;
			requiredOpticType = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 400;
			minRange = 60;
			minRangeProbab = 0.8;
			midRange = 300;
			midRangeProbab = 0.6;
			maxRange = 700;
			maxRangeProbab = 0.2;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class ASR_AI_Single_optics2: Single
		{
			showToPlayer = 0;
			requiredOpticType = 2;
			aiRateOfFire = 3;
			aiRateOfFireDistance = 400;
			minRange = 60;
			minRangeProbab = 0.8;
			midRange = 300;
			midRangeProbab = 0.6;
			maxRange = 900;
			maxRangeProbab = 0.2;
			aiDispersionCoefX = 10;
			aiDispersionCoefY = 15;
		};
		class ASR_SemiAuto: Single
		{
			aiRateOfFire = 1;
			aiRateOfFireDistance = 200;
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 150;
			midRangeProbab = 0.5;
			maxRange = 500;
			maxRangeProbab = 0.1;
		};
		class ASR_Burst3: Single
		{
			aiRateOfFire = 1;
			aiRateOfFireDistance = 60;
			minRange = 15;
			minRangeProbab = 0.8;
			midRange = 30;
			midRangeProbab = 0.7;
			maxRange = 70;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 20;
			aiDispersionCoefY = 25;
			showToPlayer = 1;
			burst = 3;
			displayName = "$STR_DN_MODE_BURST";
			textureType = "burst";
			soundBurst = 0;
		};
		class ASR_Burst2: ASR_Burst3
		{
			burst = 2;
		};
		aiDispersionCoefX = 20;
		aiDispersionCoefY = 25;
	};
	class arifle_Mk20C_F: mk20_base_F
	{
		modes[] = {"Single","FullAuto","ASR_AI_Burst_close","ASR_AI_Burst_far","ASR_AI_Single_optics1","ASR_AI_Single_optics2"};
		class Single: Single
		{
			aiRateOfFire = 1;
			aiRateOfFireDistance = 200;
			minRange = 60;
			minRangeProbab = 0.7;
			midRange = 150;
			midRangeProbab = 0.5;
			maxRange = 400;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 20;
			aiDispersionCoefY = 25;
		};
		class FullAuto: FullAuto
		{
			aiRateOfFire = 0.2;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 10;
			midRangeProbab = 0.8;
			maxRange = 15;
			maxRangeProbab = 0.3;
			aiDispersionCoefX = 20;
			aiDispersionCoefY = 25;
		};
		class ASR_AI_Burst_close: FullAuto
		{
			showToPlayer = 0;
			burst = 5;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 60;
			minRange = 15;
			minRangeProbab = 0.8;
			midRange = 30;
			midRangeProbab = 0.7;
			maxRange = 70;
			maxRangeProbab = 0.1;
		};
		class ASR_AI_Burst_close2: ASR_AI_Burst_close
		{
			burst = 4;
		};
		class ASR_AI_Burst_far: FullAuto
		{
			showToPlayer = 0;
			burst = 4;
			aiRateOfFire = 6;
			aiRateOfFireDistance = 500;
			minRange = 300;
			minRangeProbab = 0.05;
			midRange = 400;
			midRangeProbab = 0.3;
			maxRange = 600;
			maxRangeProbab = 0.1;
		};
		class ASR_AI_Single_optics1: Single
		{
			showToPlayer = 0;
			requiredOpticType = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 400;
			minRange = 60;
			minRangeProbab = 0.8;
			midRange = 200;
			midRangeProbab = 0.6;
			maxRange = 500;
			maxRangeProbab = 0.2;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class ASR_AI_Single_optics2: Single
		{
			showToPlayer = 0;
			requiredOpticType = 2;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 400;
			minRange = 60;
			minRangeProbab = 0.8;
			midRange = 200;
			midRangeProbab = 0.6;
			maxRange = 500;
			maxRangeProbab = 0.2;
			aiDispersionCoefX = 10;
			aiDispersionCoefY = 15;
		};
		class ASR_SemiAuto: Single
		{
			aiRateOfFire = 1;
			aiRateOfFireDistance = 200;
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 150;
			midRangeProbab = 0.5;
			maxRange = 400;
			maxRangeProbab = 0.1;
		};
		class ASR_Burst3: Single
		{
			aiRateOfFire = 1;
			aiRateOfFireDistance = 60;
			minRange = 15;
			minRangeProbab = 0.8;
			midRange = 30;
			midRangeProbab = 0.7;
			maxRange = 70;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 20;
			aiDispersionCoefY = 25;
			showToPlayer = 1;
			burst = 3;
			displayName = "$STR_DN_MODE_BURST";
			textureType = "burst";
			soundBurst = 0;
		};
		class ASR_Burst2: ASR_Burst3
		{
			burst = 2;
		};
	};
	class SMG_01_Base: Rifle_Base_F
	{
		modes[] = {"Single","Burst","FullAuto"};
		class Single: Mode_SemiAuto
		{
			aiRateOfFire = 1;
			aiRateOfFireDistance = 200;
			minRange = 40;
			minRangeProbab = 0.9;
			midRange = 80;
			midRangeProbab = 0.5;
			maxRange = 250;
			maxRangeProbab = 0.1;
		};
		class Burst: Mode_Burst
		{
			burst = 2;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 30;
			minRange = 30;
			minRangeProbab = 0.8;
			midRange = 40;
			midRangeProbab = 0.5;
			maxRange = 50;
			maxRangeProbab = 0.2;
		};
		class FullAuto: Mode_FullAuto
		{
			aiRateOfFire = 0.2;
			aiRateOfFireDistance = 20;
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 20;
			midRangeProbab = 0.8;
			maxRange = 30;
			maxRangeProbab = 0.2;
		};
		aiDispersionCoefX = 20;
		aiDispersionCoefY = 25;
	};
	class SMG_02_base_F: Rifle_Base_F
	{
		modes[] = {"Single","Burst","FullAuto"};
		class Single: Mode_SemiAuto
		{
			aiRateOfFire = 1;
			aiRateOfFireDistance = 200;
			minRange = 40;
			minRangeProbab = 0.9;
			midRange = 80;
			midRangeProbab = 0.5;
			maxRange = 250;
			maxRangeProbab = 0.1;
		};
		class Burst: Mode_Burst
		{
			aiRateOfFire = 1;
			aiRateOfFireDistance = 30;
			minRange = 30;
			minRangeProbab = 0.8;
			midRange = 40;
			midRangeProbab = 0.5;
			maxRange = 50;
			maxRangeProbab = 0.2;
		};
		class FullAuto: Mode_FullAuto
		{
			aiRateOfFire = 0.2;
			aiRateOfFireDistance = 20;
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 20;
			midRangeProbab = 0.8;
			maxRange = 30;
			maxRangeProbab = 0.2;
		};
		aiDispersionCoefX = 20;
		aiDispersionCoefY = 25;
	};
	class pdw2000_base_F: Rifle_Base_F
	{
		modes[] = {"Single","Burst","FullAuto"};
		class Single: Mode_SemiAuto
		{
			aiRateOfFire = 1;
			aiRateOfFireDistance = 200;
			minRange = 40;
			minRangeProbab = 0.9;
			midRange = 80;
			midRangeProbab = 0.5;
			maxRange = 250;
			maxRangeProbab = 0.1;
		};
		class Burst: Mode_Burst
		{
			showToPlayer = 0;
			burst = "2 + round random 3";
			aiRateOfFire = 1;
			aiRateOfFireDistance = 30;
			minRange = 30;
			minRangeProbab = 0.8;
			midRange = 40;
			midRangeProbab = 0.5;
			maxRange = 50;
			maxRangeProbab = 0.2;
		};
		class FullAuto: Mode_FullAuto
		{
			aiRateOfFire = 0.2;
			aiRateOfFireDistance = 20;
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 20;
			midRangeProbab = 0.8;
			maxRange = 30;
			maxRangeProbab = 0.2;
		};
		aiDispersionCoefX = 20;
		aiDispersionCoefY = 25;
	};
	class GM6_base_F: Rifle_Long_Base_F
	{
		class Single;
		class far_optic1: Single
		{
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class medium_optic2: Single
		{
			aiDispersionCoefX = 10;
			aiDispersionCoefY = 15;
		};
		class far_optic2: far_optic1
		{
			aiDispersionCoefX = 10;
			aiDispersionCoefY = 15;
		};
		asr_ai_wtype = 3;
		asr_ai_hasbipod = 1;
	};
	class LRR_base_F: Rifle_Long_Base_F
	{
		class Single;
		class far_optic1: Single
		{
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class medium_optic2: Single
		{
			aiDispersionCoefX = 10;
			aiDispersionCoefY = 15;
		};
		class far_optic2: far_optic1
		{
			aiDispersionCoefX = 10;
			aiDispersionCoefY = 15;
		};
		asr_ai_wtype = 3;
		asr_ai_hasbipod = 1;
	};
	class LMG_RCWS: MGun
	{
		aiDispersionCoefX = 10;
		aiDispersionCoefY = 15;
	};
	class M134_minigun: MGunCore
	{
		class LowROF: Mode_FullAuto
		{
			aiDispersionCoefX = 20;
			aiDispersionCoefY = 25;
		};
	};
	class autocannon_Base_F: CannonCore
	{
		class player;
		class close: player
		{
			aiDispersionCoefX = 10;
			aiDispersionCoefY = 15;
		};
	};
	class gatling_30mm: CannonCore
	{
		class LowROF: Mode_FullAuto
		{
			aiDispersionCoefX = 10;
			aiDispersionCoefY = 15;
		};
	};
	class cannon_120mm: CannonCore
	{
		class player;
		class close: player
		{
			aiDispersionCoefX = 10;
			aiDispersionCoefY = 15;
		};
	};
	class Gatling_30mm_Plane_CAS_01_F: CannonCore
	{
		class LowROF: Mode_FullAuto
		{
			aiDispersionCoefX = 10;
			aiDispersionCoefY = 15;
		};
	};
	class Cannon_30mm_Plane_CAS_02_F: CannonCore
	{
		class LowROF: Mode_FullAuto
		{
			aiDispersionCoefX = 10;
			aiDispersionCoefY = 15;
		};
	};
	class cannon_105mm: cannon_120mm
	{
		class player;
		class close: player
		{
			aiDispersionCoefX = 10;
			aiDispersionCoefY = 15;
		};
	};
};
//};
