#include "\STB86_Factions\defines.hpp"
class CfgPatches
{
	class STB86_BH
	{
		//General mod info
		author = "86th STB Modding Team";
		name = "86th Auxiliary Black Hand";
		//unknown
		units[] = {
				// Packs
				"STB86_BH_FieldPack_AA",
				"STB86_BH_FieldPack_AT",
				// People
				"STB86_BH_Rifleman",
				"STB86_BH_Squad_Lead",
				"STB86_BH_Team_Lead",
				"STB86_BH_Marksman",
				"STB86_BH_Medic",
				"STB86_BH_SAW",
				"STB86_BH_AT",
				"STB86_BH_AA",
				"STB86_BH_Engineer",
				"STB86_BH_Grenadier",
				"STB86_BH_Sniper",
				"STB86_BH_Officer",
				"STB86_BH_Crewman",
				"STB86_BH_Autorifleman",
				// Vics
				"STB86_BH_Truck",
				"STB86_BH_Truck_Covered",
				"STB86_BH_Truck_Ammo",
				"STB86_BH_Truck_Fuel",
				"STB86_BH_Car_AT",
				"STB86_BH_Car_armed",
				"STB86_BH_Car_unarmed",
				// Armor
				"STB86_BH_APC",
				"STB86_BH_IFV",
				"STB86_BH_MBT",
				// Ground Objects
				"STB86_Flag_BlackHand",
				"STB86_Banner_Blackhand",
		};
		//unknown
		weapons[] = {
				// Equipment
				"STB86_BH_Helmet",
				"STB86_BH_Medic_Vest",
				"STB86_BH_GL_Vest",
				"STB86_BH_Crew_Helmet",
				"STB86_BH_Beret",
				// Weapons
				"STB86_BH_HK416 ",
				"STB86_BH_AK15 ",
				"STB86_BH_AK15GL",
				"STB86_BH_BR55XHB",
				"STB86_BH_SRS99C_Prefab",
				"STB86_BH_MA5K",
				"STB86_BH_RPK",
				"STB86_BH_M7",
				"STB86_BH_M6G",
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
			// Ground vehicles
			"A3_Soft_F_Exp_LSV_02",
			"A3_Soft_F_Exp_Truck_02",
		};
	};
};






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
	class Flag_CSAT_F;
	class Banner_01_F;
	class STB86_Flag_BlackHand : Flag_CSAT_F {
		displayName = "Flag (Blackhand)";
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'STB86_Factions\Black_Hand\textures\icons\flag_blackhand_co.paa'";
		};
	};
	class STB86_Banner_Blackhand : Banner_01_F {
		displayName = "Banner (Blackhand)";
		hiddenSelectionsTextures[] = {"STB86_Factions\Black_Hand\textures\icons\flag_blackhand_co.paa"};
	};

};

/*
Groups
*/
#include "CfgGroups.hpp"



class CfgMagazines {
	class 30Rnd_556x45_Stanag;
	class 30Rnd_762x39_AK12_Mag_F;
	class 75Rnd_762x39_Mag_F;

	class STB86_556x45_30rnd : 30Rnd_556x45_Stanag 	{
		displayname="BH HKammo 9x5";
		ammo="OPTRE_B_95x40_Ball";		
		descriptionshort="30 Round Magazine<br>9.5 ";
		tracersEvery=15;
	};
	class STB86_556x45_30rnd_Tracer :  STB86_556x45_30rnd {	
		displayname="BH HKammo 9x5";
		ammo="OPTRE_B_95x40_Ball";		
		descriptionshort="30 Round Magazine<br>9.5 ";
		tracersEvery=1;
	};
	class STB86_762x39_32rnd : 30Rnd_762x39_AK12_Mag_F {		
		dispayname="BH AK12ammo 762x51";
		ammo="OPTRE_B_762x51_Ball";
		count=32;
		descriptionshort="32 Round Magazine<ma5>7.62 ";
		tracersEvery=15;
	};
	class STB86_762x39_32rnd_Tracer : STB86_762x39_32rnd{		
		dispayname="BH AK12ammo 762x51";
		ammo="OPTRE_B_762x51_Ball";
		descriptionshort="32 Round Magazine<ma5>7.62 ";
		tracersEvery=1;
	};
	class STB86_762x39_60rnd : 75Rnd_762x39_Mag_F{		
		dispayname="BH AK12ammo 762x51";
		ammo="OPTRE_B_762x51_Ball";
		count=60;
		descriptionshort="60 Round Magazine<ma5>7.62 ";
		tracersEvery=1;
	};
};

class CfgMarkers {
	class flag_Altis;
	class STB86_Marker_Blackhand : flag_Altis {
		name = "Blackhand";
		icon = "STB86_Factions\Black_hand\textures\icons\flag_icon_blackhand_co.paa";
		texture = "STB86_Factions\Black_hand\textures\icons\flag_icon_blackhand_co.paa";
	};
};
