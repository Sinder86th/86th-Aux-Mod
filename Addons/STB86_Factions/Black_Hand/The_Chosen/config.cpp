#include "\STB86_Factions\defines.hpp"
class CfgPatches
{
	class STB86_CH
	{
		//General mod info
		author = AUTHOR;
		name = "86th Auxiliary Black Hand";
		//unknown
		units[] = {
				// Packs
				"STB86_BH_CH_ANPRC521",
				"STB86_BH_CH_Rucksack",
				"STB86_BH_CH_Medic_Rucksack",
				"STB86_BH_CH_Rucksack_AA",
				"STB86_BH_CH_Rucksack_AT",
				// People
				"STB86_BH_CH_Rifleman",
				"STB86_BH_CH_SL",
				"STB86_BH_CH_TL",
				"STB86_BH_CH_Marksman",
				"STB86_BH_CH_Medic",
				"STB86_BH_CH_SAW_Gunner",
				"STB86_BH_CH_AT",
				"STB86_BH_CH_Engineer",
				"STB86_BH_CH_Grenadier",
				"STB86_BH_CH_Crewmate",
				"STB86_BH_CH_HeliPilot",
				"STB86_BH_CH_Devastator",
				"STB86_BH_CH_Fanatic",
				"STB86_BH_CH_FakeFanatic",
				"STB86_BH_CH_Ghost",
				"STB86_BH_CH_Nightstalker",
				// Vics
				"STB86_BH_CH_MBT",
				"STB86_BH_CH_MBT_02",
				"STB86_BH_CH_MBT_03",
				"STB86_BH_CH_IFV",
				"STB86_BH_CH_IFV_02",
				"STB86_BH_CH_APC",
				// Helis
				"STB86_BH_CH_Heli_Attack",
				"STB86_BH_CH_Heli_Light_O",
				"STB86_BH_CH_Heli_Light_M",
				"STB86_BH_CH_Heli_Light_A",
				"STB86_BH_CH_Heli_Medium_M",
				"STB86_BH_CH_Heli_Medium_A",
				"STB86_BH_CH_Heli_Heavy",
				// Jets
				"STB86_BH_CH_Jet_CAS",
				"STB86_BH_CH_Jet_CAP",
				// UAVs
				"STB86_BH_CH_UAV_01",
				"STB86_BH_CH_UAV_02",
		};
		//unknown
		weapons[] = {
				"STB86_BH_CH_Base_Vest",
				"STB86_BH_CH_Heavy_Vest",
				"STB86_BH_CH_CQB_Vest",
				"STB86_BH_CH_Marksman_Vest",
				"STB86_BH_CH_Lead_Vest",
				"STB86_BH_CH_Medic_Vest",
				"STB86_BH_CH_Autorifleman_Vest",
				"STB86_BH_CH_UpArmor_Vest",
				"STB86_BH_CH_Battledress",
				"STB86_BH_CH_Helmet",
				"STB86_BH_CH_Crew_Helmet",

				"STB86_BH_CH_VK78",
				"STB86_BH_CH_SRS99D",
				"STB86_BH_CH_MA37K",
				"STB86_BH_CH_M247",
				"STB86_BH_CH_MA5B",
				"STB86_BH_CH_M7",
				"STB86_BH_CH_BR55",
				"STB86_BH_CH_HMG38",
				"STB86_BH_CH_M247H",
				"STB86_BH_CH_M6G",
				"STB86_BH_CH_M33",
				"STB86_BH_CH_ARC9",
				"STB86_BH_CH_ARC9T",

				"STB86_BH_CH_MBT_02_LMG",
				"STB86_BH_CH_IFV_02_FLAK",

		};

		magazines[]={
			"STB86_BH_CH_12rnd_Railgun_Slug",
			"STB86_BH_CH_IFV_02_FLAK_Mag",
		};
		//unknown
		requiredVersion = 0.1;
		//Dependancies for C++ style inheritence.
		//If building off of a mod piece it needs
		//to be listed here.
		requiredAddons[] = {
			"A3_Characters_F",
			"A3_characters_f_bootcamp",
			"A3_Characters_F",
			"OPTRE_ACE_Compat",
			// Ground vics
			"A3_Armor_F_Gamma_MBT_01",
			"A3_Armor_F_Exp_APC_Tracked_02",
			"A3_Armor_F_Exp_APC_Wheeled_02",
			// Air vics
			"A3_Air_F_Beta_Heli_Attack_02",
			"A3_Air_F_Heli_Heli_Light_01",
			"A3_Air_F_Heli_Heli_Light_03",
			"A3_Air_F_Heli_Heli_Transport_02",
			"A3_Air_F_EPC_Plane_CAS_01",
			"A3_Air_F_Jets_Plane_Fighter_04",
			"A3_Air_F_Jets_UAV_05",
			"A3_Air_F_Exp_UAV_03",
			// Units
			"A3_Characters_F_Exp",
		};
	};
};

class Mode_SemiAuto;
class Mode_FullAuto;
class CfgWeapons{
	/*
	Equipment - Vests, Helmets, Uniform
	*/
	#include "equipment.hpp"
	/*
	Weapons
	*/
	#include "weapons.hpp"
};
#define MAG_XX(a,b) class _xx_##a {magazine = a; count = b;}
#define ITEM_XX(a,b) class _xx_##a {name = a; count = b;}
#define MAG_10(a) a,a,a,a,a,a,a,a,a,a
#define MAG_6(a) a,a,a,a,a,a
#define MAG_4(a) a,a,a,a
#define MAG_3(a) a,a,a
#define MAG_2(a) a,a

class SensorTemplateActiveRadar;
class SensorTemplateIR;
class CfgVehicles{
	class EventHandlers;
	/*
	Backpacks
	*/
	#include "backpacks.hpp"
	/*
	The People
	*/
	#include "units.hpp"
	/*
	The vics
	*/
	#include "vehicles.hpp"
};

class Extended_PreInit_EventHandlers {
    class STB86_BH_CH_Fanatic_Uncon_Kill {
        init = "call compile preprocessFileLineNumbers 'STB86_Factions\Black_Hand\The_Chosen\XEH_preInit.sqf'";
    };
};




class CfgAmmo{
	class B_127x99_Ball_Tracer_Red;
	class STB86_BH_CH_Railgun_Slug : B_127x99_Ball_Tracer_Red{
	class CamShakeFire
	{
		power = 10;
		duration = 0.2;
		frequency = 20;
		distance = 10;
	};
	class CamShakePlayerFire
	{
		power = 0.06;
		duration = 0.1;
		frequency = 20;
	};
	class CamShakeHit
	{
		power = 100;
		duration = 1;
		frequency = 30;
	};
	/* AI Flags */
	aiAmmoUsageFlags = "64 + 128 + 256 + 512";
	audibleFire = 150.0;
	visibleFire = 50;
	
	
	brightness = 3;
	caliber = 50;
	coefGravity = 0.1;
	CraterEffects = "ExploAmmoCrater";
	dangerRadiusBulletClose = 20;
	dangerRadiusHit = 100;
	deflecting = 0;
	explosionEffects = "ExploAmmoExplosion";
	hit = 500;
	indirectHit = 50;
	indirectHitRange = 5;
	maxSpeed = 5000;
	explosive = 0.4;
	simulation = "shotShell";

	};
};

class CfgMagazines{
	class 30Rnd_45ACP_Mag_SMG_01;
	class STB86_BH_CH_12rnd_Railgun_Slug : 30Rnd_45ACP_Mag_SMG_01 {
		scope = 2;
		initSpeed = 5000;
		tracersEvery=1;
		tracerColor[] = {255, 0, 0, .66};
		tracerColorR[] = {255, 0, 0, .66};
		displayName = "14x40mm ARC-9 Slug";
		displayNameShort = "14x40 Slug";
		decriptionshort = "14x40mm Slug for the ARC-9 Railgun";
		ammo = "STB86_BH_CH_Railgun_Slug";
		count = 12;
		class Library
		{
			libTextDesc = "";
		};
	};
};