////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.02
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class asr_ai3_sysaiskill : config.bin{
class CfgPatches
{
	class asr_ai3_sysaiskill
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.14;
		requiredAddons[] = {"asr_ai3_main","asr_ai3_settings","A3_Characters_F","A3_Characters_F_Beta","A3_Characters_F_Gamma","A3_Characters_F_BLUFOR","A3_Characters_F_Civil","A3_Characters_F_OPFOR","A3_Characters_F_INDEP","A3_Characters_F_EPA","A3_Air_F","A3_Air_F_Heli_Light_01","A3_Air_F_Heli_Light_02"};
		version = "0.9.1.34";
		author[] = {"Robalo"};
	};
};
class CfgAddons
{
	class PreloadAddons
	{
		class asr_ai3_sysaiskill
		{
			list[] = {"asr_ai3_sysaiskill"};
		};
	};
};
class CfgAISkill
{
	aimingAccuracy[] = {0,0,0.8,0.7,1,1};
	aimingShake[] = {0,0,0.8,0.7,1,1};
	commanding[] = {0,0,0.8,0.6,1,1};
};
class CfgVehicles
{
	class AllVehicles;
	class Air: AllVehicles
	{
		sensitivity = 6;
	};
	class Helicopter_Base_H;
	class Heli_Light_01_base_F: Helicopter_Base_H
	{
		sensitivity = 6;
	};
	class Heli_Light_02_base_F: Helicopter_Base_H
	{
		sensitivity = 6;
	};
	class Man;
	class CAManBase: Man
	{
		asr_ai_level = 6;
		sensitivityEar = 0.75;
		audible = 0.03;
		crouchProbabilityCombat = 0.5;
		crouchProbabilityEngage = 0.85;
		minFireTime = 7;
	};
	class Civilian: CAManBase
	{
		asr_ai_level = 7;
		cost = 40000;
		sensitivity = 2;
		minFireTime = 10;
	};
	class SoldierWB: CAManBase
	{
		asr_ai_level = 4;
		cost = 80000;
	};
	class SoldierEB: CAManBase
	{
		asr_ai_level = 4;
		cost = 80000;
	};
	class SoldierGB: CAManBase
	{
		asr_ai_level = 4;
		cost = 80000;
	};
	class B_Soldier_base_F: SoldierWB
	{
		cost = 80000;
	};
	class B_Soldier_F: B_Soldier_base_F
	{
		cost = 80000;
	};
	class B_Soldier_02_f: B_Soldier_base_F
	{
		cost = 80000;
	};
	class B_Soldier_03_f: B_Soldier_base_F
	{
		cost = 80000;
	};
	class B_Soldier_lite_F: B_Soldier_base_F
	{
		cost = 80000;
	};
	class B_Soldier_GL_F: B_Soldier_base_F
	{
		cost = 80000;
	};
	class B_soldier_LAT_F: B_Soldier_base_F
	{
		cost = 80000;
		crouchProbabilityCombat = 0.6;
		crouchProbabilityEngage = 0.95;
	};
	class B_medic_F: B_Soldier_base_F
	{
		cost = 80000;
	};
	class B_soldier_repair_F: B_Soldier_base_F
	{
		cost = 80000;
	};
	class B_soldier_exp_F: B_Soldier_base_F
	{
		cost = 80000;
	};
	class B_RangeMaster_F: B_Soldier_base_F
	{
		cost = 80000;
	};
	class B_Competitor_F: B_RangeMaster_F
	{
		cost = 80000;
	};
	class B_Soldier_A_F: B_Soldier_base_F
	{
		cost = 80000;
	};
	class B_soldier_AT_F: B_Soldier_base_F
	{
		cost = 80000;
		crouchProbabilityCombat = 0.6;
		crouchProbabilityEngage = 0.95;
	};
	class B_soldier_AA_F: B_Soldier_base_F
	{
		cost = 80000;
		crouchProbabilityCombat = 0.6;
		crouchProbabilityEngage = 0.95;
	};
	class B_engineer_F: B_Soldier_base_F
	{
		cost = 80000;
	};
	class B_crew_F: B_Soldier_base_F
	{
		cost = 80000;
	};
	class B_Soldier_support_base_F: B_Soldier_base_F
	{
		cost = 80000;
	};
	class B_soldier_AAR_F: B_Soldier_support_base_F
	{
		cost = 80000;
	};
	class B_soldier_AAT_F: B_Soldier_support_base_F
	{
		cost = 80000;
	};
	class B_soldier_AAA_F: B_soldier_AAT_F
	{
		cost = 80000;
	};
	class B_soldier_UAV_F: B_Soldier_base_F
	{
		cost = 80000;
	};
	class B_soldier_PG_F: B_Soldier_base_F
	{
		cost = 80000;
	};
	class B_Story_Protagonist_F: B_Soldier_base_F
	{
		cost = 80000;
	};
	class B_Story_Engineer_F: B_Soldier_base_F
	{
		cost = 80000;
	};
	class B_Story_Tank_Commander_F: B_Soldier_base_F
	{
		cost = 80000;
	};
	class B_support_MG_F: B_Soldier_support_base_F
	{
		cost = 80000;
	};
	class B_support_GMG_F: B_Soldier_support_base_F
	{
		cost = 80000;
	};
	class B_support_Mort_F: B_Soldier_support_base_F
	{
		cost = 80000;
	};
	class B_support_AMG_F: B_Soldier_support_base_F
	{
		cost = 80000;
	};
	class B_support_AMort_F: B_Soldier_support_base_F
	{
		cost = 80000;
	};
	class B_soldier_AR_F: B_Soldier_base_F
	{
		cost = 80000;
		crouchProbabilityCombat = 0.6;
		crouchProbabilityEngage = 0.95;
	};
	class B_Soldier_SL_F: B_Soldier_base_F
	{
		asr_ai_level = 3;
		cost = 80000;
	};
	class B_Soldier_TL_F: B_Soldier_base_F
	{
		asr_ai_level = 3;
		cost = 80000;
	};
	class B_soldier_M_F: B_Soldier_base_F
	{
		asr_ai_level = 3;
		cost = 80000;
	};
	class B_Helipilot_F: B_Soldier_base_F
	{
		asr_ai_level = 8;
		cost = 80000;
	};
	class B_Pilot_F: B_helipilot_F
	{
		cost = 80000;
	};
	class B_helicrew_F: B_helipilot_F
	{
		cost = 80000;
	};
	class B_Story_Pilot_F: B_Soldier_base_F
	{
		asr_ai_level = 8;
		cost = 80000;
	};
	class B_Soldier_diver_base_F: B_Soldier_base_F
	{
		asr_ai_level = 2;
		cost = 80000;
		minFireTime = 5;
	};
	class B_diver_F: B_Soldier_diver_base_F
	{
		cost = 80000;
	};
	class B_diver_TL_F: B_Soldier_diver_base_F
	{
		cost = 80000;
	};
	class B_diver_exp_F: B_Soldier_diver_base_F
	{
		cost = 80000;
	};
	class B_Soldier_sniper_base_F: B_Soldier_base_F
	{
		asr_ai_level = 10;
		cost = 120000;
		crouchProbabilityCombat = 0.6;
		crouchProbabilityEngage = 0.95;
		sensitivity = 4;
		minFireTime = 5;
	};
	class B_spotter_F: B_Soldier_sniper_base_F
	{
		asr_ai_level = 2;
		cost = 120000;
		sensitivity = 4;
	};
	class B_sniper_F: B_Soldier_sniper_base_F
	{
		cost = 120000;
		sensitivity = 4;
	};
	class B_officer_F: B_Soldier_base_F
	{
		cost = 120000;
	};
	class B_Story_Colonel_F: B_Soldier_base_F
	{
		cost = 120000;
	};
	class B_Soldier_recon_base: B_Soldier_base_F
	{
		asr_ai_level = 2;
		cost = 120000;
		minFireTime = 5;
	};
	class B_recon_F: B_Soldier_recon_base
	{
		cost = 120000;
	};
	class B_recon_LAT_F: B_Soldier_recon_base
	{
		cost = 120000;
		crouchProbabilityCombat = 0.6;
		crouchProbabilityEngage = 0.95;
	};
	class B_recon_exp_F: B_Soldier_recon_base
	{
		cost = 120000;
	};
	class B_recon_medic_F: B_Soldier_recon_base
	{
		cost = 120000;
	};
	class B_recon_TL_F: B_Soldier_recon_base
	{
		cost = 120000;
	};
	class B_recon_M_F: B_Soldier_recon_base
	{
		cost = 120000;
	};
	class B_recon_JTAC_F: B_Soldier_recon_base
	{
		cost = 120000;
	};
	class B_Story_SF_Captain_F: B_Soldier_base_F
	{
		asr_ai_level = 1;
		cost = 120000;
		minFireTime = 5;
	};
	class B_CTRG_soldier_GL_LAT_F: B_Soldier_base_F
	{
		asr_ai_level = 2;
		cost = 120000;
		minFireTime = 5;
	};
	class B_CTRG_soldier_engineer_exp_F: B_Soldier_base_F
	{
		asr_ai_level = 2;
		cost = 120000;
		minFireTime = 5;
	};
	class B_CTRG_soldier_M_medic_F: B_Soldier_base_F
	{
		asr_ai_level = 2;
		cost = 120000;
		minFireTime = 5;
	};
	class B_CTRG_soldier_AR_A_F: B_Soldier_base_F
	{
		asr_ai_level = 2;
		cost = 120000;
		minFireTime = 5;
		crouchProbabilityCombat = 0.6;
		crouchProbabilityEngage = 0.95;
	};
	class O_Soldier_base_F: SoldierEB
	{
		cost = 80000;
	};
	class O_Soldier_F: O_Soldier_base_F
	{
		cost = 80000;
	};
	class O_Soldier_lite_F: O_Soldier_base_F
	{
		cost = 80000;
	};
	class O_Soldier_GL_F: O_Soldier_base_F
	{
		cost = 80000;
	};
	class O_Soldier_LAT_F: O_Soldier_base_F
	{
		cost = 80000;
		crouchProbabilityCombat = 0.6;
		crouchProbabilityEngage = 0.95;
	};
	class O_medic_F: O_Soldier_base_F
	{
		cost = 80000;
	};
	class O_soldier_repair_F: O_Soldier_base_F
	{
		cost = 80000;
	};
	class O_soldier_exp_F: O_Soldier_base_F
	{
		cost = 80000;
	};
	class O_Soldier_A_F: O_Soldier_base_F
	{
		cost = 80000;
	};
	class O_Soldier_AT_F: O_Soldier_base_F
	{
		cost = 80000;
		crouchProbabilityCombat = 0.6;
		crouchProbabilityEngage = 0.95;
	};
	class O_Soldier_AA_F: O_Soldier_base_F
	{
		cost = 80000;
		crouchProbabilityCombat = 0.6;
		crouchProbabilityEngage = 0.95;
	};
	class O_engineer_F: O_Soldier_base_F
	{
		cost = 80000;
	};
	class O_crew_F: O_Soldier_base_F
	{
		cost = 80000;
	};
	class O_Soldier_support_base_F: O_Soldier_base_F
	{
		cost = 80000;
	};
	class O_Soldier_AAR_F: O_Soldier_support_base_F
	{
		cost = 80000;
	};
	class O_Soldier_AAT_F: O_Soldier_support_base_F
	{
		cost = 80000;
	};
	class O_Soldier_AAA_F: O_Soldier_AAT_F
	{
		cost = 80000;
	};
	class O_soldier_UAV_F: O_Soldier_base_F
	{
		cost = 80000;
	};
	class O_soldier_PG_F: O_Soldier_base_F
	{
		cost = 80000;
		crouchProbabilityCombat = 0.6;
		crouchProbabilityEngage = 0.95;
	};
	class O_Story_CEO_F: O_Soldier_base_F
	{
		cost = 80000;
	};
	class O_support_AMG_F: O_Soldier_support_base_F
	{
		cost = 80000;
	};
	class O_support_AMort_F: O_Soldier_support_base_F
	{
		cost = 80000;
	};
	class O_support_MG_F: O_Soldier_support_base_F
	{
		cost = 80000;
	};
	class O_support_GMG_F: O_Soldier_support_base_F
	{
		cost = 80000;
	};
	class O_support_Mort_F: O_Soldier_support_base_F
	{
		cost = 80000;
	};
	class O_Soldier_Urban_base: O_Soldier_base_F
	{
		cost = 80000;
	};
	class O_soldierU_F: O_Soldier_Urban_base
	{
		cost = 80000;
	};
	class O_soldierU_AAR_F: O_Soldier_Urban_base
	{
		cost = 80000;
	};
	class O_soldierU_LAT_F: O_Soldier_Urban_base
	{
		cost = 80000;
		crouchProbabilityCombat = 0.6;
		crouchProbabilityEngage = 0.95;
	};
	class O_soldierU_AT_F: O_Soldier_Urban_base
	{
		cost = 80000;
		crouchProbabilityCombat = 0.6;
		crouchProbabilityEngage = 0.95;
	};
	class O_soldierU_AAT_F: O_Soldier_Urban_base
	{
		cost = 80000;
	};
	class O_soldierU_AA_F: O_Soldier_Urban_base
	{
		cost = 80000;
		crouchProbabilityCombat = 0.6;
		crouchProbabilityEngage = 0.95;
	};
	class O_soldierU_AAA_F: O_Soldier_Urban_base
	{
		cost = 80000;
	};
	class O_soldierU_medic_F: O_Soldier_Urban_base
	{
		cost = 80000;
	};
	class O_soldierU_repair_F: O_Soldier_Urban_base
	{
		cost = 80000;
	};
	class O_soldierU_exp_F: O_Soldier_Urban_base
	{
		cost = 80000;
	};
	class O_engineer_U_F: O_Soldier_Urban_base
	{
		cost = 80000;
	};
	class O_soldierU_A_F: O_Soldier_Urban_base
	{
		cost = 80000;
	};
	class O_SoldierU_GL_F: O_Soldier_Urban_base
	{
		cost = 80000;
	};
	class O_Soldier_AR_F: O_Soldier_base_F
	{
		cost = 80000;
		crouchProbabilityCombat = 0.6;
		crouchProbabilityEngage = 0.95;
	};
	class O_soldierU_AR_F: O_Soldier_Urban_base
	{
		cost = 80000;
		crouchProbabilityCombat = 0.6;
		crouchProbabilityEngage = 0.95;
	};
	class O_Soldier_SL_F: O_Soldier_base_F
	{
		asr_ai_level = 3;
		cost = 80000;
	};
	class O_Soldier_TL_F: O_Soldier_base_F
	{
		asr_ai_level = 3;
		cost = 80000;
	};
	class O_soldierU_TL_F: O_Soldier_Urban_base
	{
		asr_ai_level = 3;
		cost = 80000;
	};
	class O_SoldierU_SL_F: O_Soldier_Urban_base
	{
		asr_ai_level = 3;
		cost = 80000;
	};
	class O_soldier_M_F: O_Soldier_base_F
	{
		asr_ai_level = 3;
		cost = 80000;
	};
	class O_soldierU_M_F: O_Soldier_Urban_base
	{
		asr_ai_level = 3;
		cost = 80000;
	};
	class O_helipilot_F: O_Soldier_base_F
	{
		asr_ai_level = 8;
		cost = 80000;
	};
	class O_Pilot_F: O_helipilot_F
	{
		cost = 80000;
	};
	class O_helicrew_F: O_helipilot_F
	{
		cost = 80000;
	};
	class O_Soldier_diver_base_F: O_Soldier_base_F
	{
		asr_ai_level = 2;
		cost = 80000;
		minFireTime = 5;
	};
	class O_diver_F: O_Soldier_diver_base_F
	{
		cost = 80000;
	};
	class O_diver_TL_F: O_Soldier_diver_base_F
	{
		cost = 80000;
	};
	class O_diver_exp_F: O_Soldier_diver_base_F
	{
		cost = 80000;
	};
	class O_Soldier_sniper_base_F: O_Soldier_base_F
	{
		asr_ai_level = 10;
		cost = 120000;
		crouchProbabilityCombat = 0.6;
		crouchProbabilityEngage = 0.95;
		sensitivity = 4;
		minFireTime = 5;
	};
	class O_spotter_F: O_Soldier_sniper_base_F
	{
		asr_ai_level = 2;
		cost = 120000;
		sensitivity = 4;
	};
	class O_sniper_F: O_Soldier_sniper_base_F
	{
		cost = 120000;
		sensitivity = 4;
	};
	class O_officer_F: O_Soldier_base_F
	{
		cost = 120000;
	};
	class O_Story_Colonel_F: O_Soldier_base_F
	{
		cost = 120000;
	};
	class O_Soldier_recon_base: O_Soldier_base_F
	{
		asr_ai_level = 2;
		cost = 120000;
		minFireTime = 5;
	};
	class O_recon_F: O_Soldier_recon_base
	{
		cost = 120000;
	};
	class O_recon_M_F: O_Soldier_recon_base
	{
		cost = 120000;
	};
	class O_recon_LAT_F: O_Soldier_recon_base
	{
		cost = 120000;
		crouchProbabilityCombat = 0.6;
		crouchProbabilityEngage = 0.95;
	};
	class O_recon_medic_F: O_Soldier_recon_base
	{
		cost = 120000;
	};
	class O_recon_exp_F: O_Soldier_recon_base
	{
		cost = 120000;
	};
	class O_recon_JTAC_F: O_Soldier_recon_base
	{
		cost = 120000;
	};
	class O_recon_TL_F: O_Soldier_recon_base
	{
		cost = 120000;
	};
	class I_Soldier_base_F: SoldierGB
	{
		cost = 80000;
		minFireTime = 7;
	};
	class I_Soldier_02_F: I_Soldier_base_F
	{
		cost = 80000;
	};
	class I_soldier_F: I_Soldier_base_F
	{
		cost = 80000;
	};
	class I_Soldier_lite_F: I_Soldier_base_F
	{
		cost = 80000;
	};
	class I_Soldier_A_F: I_Soldier_base_F
	{
		cost = 80000;
	};
	class I_Soldier_GL_F: I_Soldier_base_F
	{
		cost = 80000;
	};
	class I_Soldier_LAT_F: I_Soldier_base_F
	{
		cost = 80000;
		crouchProbabilityCombat = 0.6;
		crouchProbabilityEngage = 0.95;
	};
	class I_Soldier_AT_F: I_Soldier_base_F
	{
		cost = 80000;
		crouchProbabilityCombat = 0.6;
		crouchProbabilityEngage = 0.95;
	};
	class I_Soldier_AA_F: I_Soldier_base_F
	{
		cost = 80000;
		crouchProbabilityCombat = 0.6;
		crouchProbabilityEngage = 0.95;
	};
	class I_medic_F: I_Soldier_base_F
	{
		cost = 80000;
	};
	class I_Soldier_repair_F: I_Soldier_base_F
	{
		cost = 80000;
	};
	class I_Soldier_exp_F: I_Soldier_base_F
	{
		cost = 80000;
	};
	class I_engineer_F: I_Soldier_base_F
	{
		cost = 80000;
	};
	class I_crew_F: I_Soldier_base_F
	{
		cost = 80000;
	};
	class I_Soldier_support_base_F: I_Soldier_base_F
	{
		cost = 80000;
	};
	class I_Soldier_AAR_F: I_Soldier_support_base_F
	{
		cost = 80000;
	};
	class I_Soldier_AAT_F: I_Soldier_support_base_F
	{
		cost = 80000;
	};
	class I_Soldier_AAA_F: I_Soldier_AAT_F
	{
		cost = 80000;
	};
	class I_soldier_UAV_F: I_Soldier_base_F
	{
		cost = 80000;
	};
	class I_support_MG_F: I_Soldier_support_base_F
	{
		cost = 80000;
	};
	class I_support_GMG_F: I_Soldier_support_base_F
	{
		cost = 80000;
	};
	class I_support_Mort_F: I_Soldier_support_base_F
	{
		cost = 80000;
	};
	class I_support_AMG_F: I_Soldier_support_base_F
	{
		cost = 80000;
	};
	class I_support_AMort_F: I_Soldier_support_base_F
	{
		cost = 80000;
	};
	class I_Soldier_AR_F: I_Soldier_base_F
	{
		cost = 80000;
		crouchProbabilityCombat = 0.6;
		crouchProbabilityEngage = 0.95;
	};
	class I_Soldier_SL_F: I_Soldier_base_F
	{
		asr_ai_level = 3;
		cost = 80000;
	};
	class I_Soldier_TL_F: I_Soldier_base_F
	{
		asr_ai_level = 3;
		cost = 80000;
	};
	class I_Soldier_M_F: I_Soldier_base_F
	{
		asr_ai_level = 3;
		cost = 80000;
	};
	class I_helipilot_F: I_Soldier_base_F
	{
		asr_ai_level = 8;
		cost = 80000;
	};
	class I_pilot_F: I_helipilot_F
	{
		asr_ai_level = 8;
		cost = 80000;
	};
	class I_helicrew_F: I_helipilot_F
	{
		cost = 80000;
	};
	class I_officer_F: I_Soldier_base_F
	{
		cost = 120000;
	};
	class I_Story_Colonel_F: I_officer_F
	{
		cost = 120000;
	};
	class I_Soldier_sniper_base_F: I_Soldier_base_F
	{
		asr_ai_level = 10;
		cost = 120000;
		crouchProbabilityCombat = 0.6;
		crouchProbabilityEngage = 0.95;
		sensitivity = 4;
		minFireTime = 5;
	};
	class I_Spotter_F: I_Soldier_sniper_base_F
	{
		cost = 120000;
		sensitivity = 4;
	};
	class I_Sniper_F: I_Soldier_sniper_base_F
	{
		cost = 120000;
		sensitivity = 4;
	};
	class I_Soldier_diver_base_F: I_Soldier_base_F
	{
		asr_ai_level = 2;
		cost = 80000;
		minFireTime = 5;
	};
	class I_diver_F: I_Soldier_diver_base_F
	{
		cost = 80000;
	};
	class I_diver_exp_F: I_Soldier_diver_base_F
	{
		cost = 80000;
	};
	class I_diver_TL_F: I_Soldier_diver_base_F
	{
		cost = 80000;
	};
	class Civilian_F: Civilian{};
	class C_man_1: Civilian_F{};
	class C_man_pilot_F: C_man_1
	{
		asr_ai_level = 9;
	};
	class I_G_Soldier_base_F: SoldierGB
	{
		asr_ai_level = 6;
		cost = 40000;
	};
	class I_G_Soldier_F: I_G_Soldier_base_F
	{
		cost = 40000;
	};
	class I_G_Soldier_lite_F: I_G_Soldier_base_F
	{
		cost = 40000;
	};
	class I_G_medic_F: I_G_Soldier_base_F
	{
		cost = 40000;
	};
	class I_G_engineer_F: I_G_Soldier_base_F
	{
		cost = 40000;
	};
	class I_G_Soldier_exp_F: I_G_Soldier_base_F
	{
		cost = 40000;
	};
	class I_G_Soldier_GL_F: I_G_Soldier_base_F
	{
		cost = 40000;
	};
	class I_G_Soldier_LAT_F: I_G_Soldier_base_F
	{
		cost = 40000;
		crouchProbabilityCombat = 0.6;
		crouchProbabilityEngage = 0.95;
	};
	class I_G_Soldier_A_F: I_G_Soldier_base_F
	{
		cost = 40000;
	};
	class B_G_Soldier_F: I_G_Soldier_F{};
	class I_G_Soldier_SL_F: I_G_Soldier_base_F
	{
		asr_ai_level = 5;
		cost = 40000;
	};
	class I_G_Soldier_TL_F: I_G_Soldier_base_F
	{
		asr_ai_level = 5;
		cost = 40000;
	};
	class I_G_Story_Protagonist_F: B_G_Soldier_F
	{
		asr_ai_level = 5;
		cost = 40000;
	};
	class I_G_Soldier_AR_F: I_G_Soldier_base_F
	{
		cost = 40000;
		crouchProbabilityCombat = 0.6;
		crouchProbabilityEngage = 0.95;
	};
	class I_G_Soldier_M_F: I_G_Soldier_base_F
	{
		asr_ai_level = 5;
		cost = 40000;
	};
	class I_G_officer_F: I_G_Soldier_base_F
	{
		asr_ai_level = 5;
		cost = 120000;
	};
	class I_G_Story_SF_Captain_F: B_G_Soldier_F
	{
		asr_ai_level = 1;
		cost = 120000;
		minFireTime = 5;
	};
};
class Extended_PreInit_EventHandlers
{
	class asr_ai3_sysaiskill
	{
		init = "call ('\x\asr_ai3\addons\sysaiskill\XEH_preInit.sqf' call SLX_XEH_COMPILE)";
	};
};
class Extended_PostInit_EventHandlers
{
	class asr_ai3_sysaiskill
	{
		init = "if (!hasInterface) then {call ('\x\asr_ai3\addons\sysaiskill\XEH_postServerInit.sqf' call SLX_XEH_COMPILE)}";
	};
};
class Extended_InitPost_EventHandlers
{
	class CAManBase
	{
		class asr_ai3_sysaiskill
		{
			serverInit = "if (asr_ai3_sysaiskill_enabled== 1) then {if(_this call asr_ai3_sysaiskill_fnc_isValidUnit) then {_this spawn asr_ai3_sysaiskill_fnc_modUnitSkill}}";
		};
	};
};
class Extended_Hit_EventHandlers
{
	class CAManBase
	{
		class asr_ai3_sysaiskill
		{
			serverHit = "if (asr_ai3_sysaiskill_enabled== 1) then {if(_this call asr_ai3_sysaiskill_fnc_isValidUnit) then {_this spawn asr_ai3_sysaiskill_fnc_modUnitSkill}}";
		};
	};
};
//};
