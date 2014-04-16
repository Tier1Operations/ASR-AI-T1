/*
 ASR AI3 settings
 this file must be found in <game folder>\userconfig\asr_ai3\
 for most settings, 0 = disabled, 1 = enabled

 All config entries are turned into global variables following a standard naming scheme. For example:
 asr_ai3_sysdanger_radiorange = getNumber (configFile >> "asr_ai3" >> "sysdanger" >> "radiorange")
 Mission makers can control these features by setting these global variables in init.sqf or by setting
 a similar asr_ai3 class in description.ext
*/

class asr_ai3 {

	class sysdanger {
		enabled = 1;                   // All the other settings of this class matter only if we have 1 here
		debug = 0;                     // Log extra debugging info to RPT, create debug markers and hints (1-enabled, 0-disabled)
		civ = 0;                       // Enable features for civilian units
		radionet = 1;                  // AI groups share known enemy locations over radio
		radiorange = 2000;              // Maximum range for AI radios
		seekcover = 1;                 // Set to 1 if AI should move to near cover in combat when they're exposed in the open, 0 to disable.
		throwsmoke = 0.5;              // AI throws smoke when advancing to cover (set 0 to disable or a number up to 1 to enable, higher number means better chance to do it)
		reactions[] = {1,1,1};         // Infantry groups will randomly react with basic, scripted, random actions, to detecting the enemy or being shot at;
		                               // format: {enableAttack,enableDefend,enableSupport}
		gunshothearing = 3.6;          // Gunshot hearing range coefficient (applied to shooter's weapon sound range; 0 will disable the feature)
		joinlastunit = 1;              // Groups left with only one unit merge with nearest group of the same faction (1-enabled, 0-disabled)
		removegimps = 30;             // Units unable to walk for this time will separate from their group to prevent slowing it down (time in seconds, set 0 to disable)
		usebuildings = 0.9;            // Chance the AI group will enter nearby buildings when in combat mode (0 to 1 values, 0 will disable the feature)
	};

	class sysaiskill {
		enabled = 1;                   // Override AI skills based on their unit type (faction, training etc.)
		hitcoef = 0.75;                // Reduce skills when unit is hit; for example if hitcoef = 0.75, each skill value will be reduced to 75%
		                               // With each hit, unit's skills will be reduced until a minimum value of 0.1 is reached; to disable this feature, set hitcoef = 1;
		debug = 0;                     // Log skill assignments to RPT (1-enabled, 0-disabled)
		civ = 1;                       // Enable skill overrides for civilians
		dynsvd = 1;                    // Enable dynamic viewdistance adjustment based on sun elevation and fog thickness on dedicated servers and headless clients

		/*
		Units are classified into skill sets between 1 and 10
		By default, a lower level number means a better skilled unit
		Levels 8-10 are special:
		 - 8-9 are for pilots, very good by default, but some of their skills are now automatically reduced when they leave the aircraft (aimingshake, courage)
		 - 10 is for trained snipers
		*/
		class sets {
			// only classes of arrays under this
			class level_0 { // super-AI (only used for testing)
				aiming[]   = {1.00, 0.00};
				spotting[] = {1.00, 0.00};
				general[]  = {1.00, 0.00};
				units[] = { // add class names to this to override their default (or inherited) skill set
				};
			};
			class level_1 { // sf 1
				aiming[]   = {0.55, 0.20}; // skilltype = {<min value>, <random value added to min>};
				spotting[] = {1.00, 0.00};
				general[]  = {1.00, 0.00};
				units[] = {
				};
			};
			class level_2 { // sf 2
				aiming[]   = {0.45, 0.20};
				spotting[] = {1.00, 0.00};
				general[]  = {1.00, 0.00};
				units[] = {
				};
			};
			class level_3 { // regular 1
				aiming[]   = {0.25, 0.20};
				spotting[] = {1.00, 0.00};
				general[]  = {1.00, 0.00};
				units[] = {
				};
			};
			class level_4 { // regular 2
				aiming[]   = {0.25, 0.20};
				spotting[] = {1.00, 0.00};
				general[]  = {1.00, 0.00};
				units[] = {
				};
			};
			class level_5 { // militia or trained insurgents, former regulars
				aiming[]   = {0.15, 0.20};
				spotting[] = {1.00, 0.00};
				general[]  = {1.00, 0.00};
				units[] = {
				};
			};
			class level_6 { // civilians with some military training
				aiming[]   = {0.15, 0.20};
				spotting[] = {0.90, 0.10};
				general[]  = {0.50, 0.20};
				units[] = {
				};
			};
			class level_7 { // civilians without military training
				aiming[]   = {0.15, 0.20};
				spotting[] = {0.10, 0.20};
				general[]  = {0.40, 0.20};
				units[] = {
				};
			};
			class level_8 { // pilot 1
				aiming[]   = {0.25, 0.20};
				spotting[] = {0.60, 0.20};
				general[]  = {0.60, 0.20};
				units[] = {
				};
			};
			class level_9 { // pilot 2
				aiming[]   = {0.20, 0.20};
				spotting[] = {0.50, 0.20};
				general[]  = {0.50, 0.20};
				units[] = {
				};
			};
			class level_10 { // sniper
				aiming[]   = {0.65, 0.20};
				spotting[] = {0.70, 0.20};
				general[]  = {0.70, 0.20};
				units[] = {
				};
			};
		};//sets
		
		// apply skill coefficient by faction to the skills the units would get based on their skill levels and settings above
		// if a faction is missing the coefficient is assumed to be 1
		class factions {

			class BLU_F { // BLUFOR A3A
				coef = 1.0;
			};
			class OPF_F { // OPFOR A3A
				coef = 1.0;
			};
			class IND_F { // A3 Guerrilla
				coef = 1.0;
			};
			class IND_G_F { // Greek Army
				coef = 1.0;
			};

			class USMC { // US Marine Corps
				coef = 1.0;
			};
			class CDF { // Chernarussian Defence Forces
				coef = 1.0;
			};
			class RU { // Russia
				coef = 1.0;
			};
			class INS { // Chedaki Insurgents
				coef = 1.0;
			};
			class GUE { // NAPA Guerilla
				coef = 1.0;
			};

			class BIS_TK { // Takistani Army
				coef = 1.0;
			};
			class BIS_TK_INS { // Takistani Insurgents
				coef = 1.0;
			};
			class BIS_US { // US Army
				coef = 1.0;
			};
			class BIS_CZ { // Czech
				coef = 1.0;
			};
			class BIS_GER { // Germany
				coef = 1.0;
			};
			class BIS_TK_GUE { // Takistani Guerilla
				coef = 1.0;
			};
			class BIS_UN { // UNO
				coef = 1.0;
			};
			class PMC_BAF { // Private military
				coef = 1.0;
			};
			class BIS_BAF { // UK
				coef = 1.0;
			};

		};//factions

	};//skillsets

	version = 2; // will increment this when structure changes

  /// CHANGES ///

  // v2
  // new class names, removed nightspotting, added hitcoef

};
