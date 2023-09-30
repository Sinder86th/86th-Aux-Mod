class O_V_Soldier_Viper_F; // A3_Characters_F_Exp

class STB86_BH_CH_Rifleman : O_V_Soldier_Viper_F {
	scope = 2;
	scopeCurator = 2;
	side = 0; 			
	author = AUTHOR;
	dlc = DLC;
	displayName = "Rifleman";
	faction = "STB86_Black_Hand";
	editorSubcategory = "STB86_BH_CH_SubCat";
	uniformClass = "STB86_BH_CH_Battledress";
	identityTypes[] = {"LanguageFRE_F","Head_Tanoan"};

	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"STB86_Factions\Black_hand\The_Chosen\textures\Blackhand_Uniform.paa"};

	weapons[] = {STB86_BH_CH_BR55, STB86_BH_M6G, Throw, Put};
	respawnWeapons[] = {STB86_BH_CH_BR55, STB86_BH_M6G, Throw, Put};

	Items[] = {MAG_3(FirstAidKit)};
	RespawnItems[] = {MAG_3(FirstAidKit)};

	magazines[] = {MAG_10(OPTRE_36Rnd_95x40_Mag), MAG_2(OPTRE_8Rnd_127x40_Mag), MAG_2(OPTRE_M9_Frag), MAG_2(OPTRE_M2_Smoke)};
	respawnMagazines[] = {MAG_10(OPTRE_36Rnd_95x40_Mag), MAG_2(OPTRE_8Rnd_127x40_Mag), MAG_2(OPTRE_M9_Frag), MAG_2(OPTRE_M2_Smoke)};

	linkedItems[] = {STB86_BH_CH_Base_Vest, STB86_BH_CH_Helmet, SC_MDFCape, ItemMap, ItemCompass, ItemWatch, ItemRadio};
	respawnLinkedItems[] = {STB86_BH_CH_Base_Vest, STB86_BH_CH_Helmet, SC_MDFCape, ItemMap, ItemCompass, ItemWatch, ItemRadio};
};
class STB86_BH_CH_SL : STB86_BH_CH_Rifleman {
	displayName = "Squad Lead";
	backpack = "STB86_BH_CH_ANPRC521";
	weapons[] = {STB86_BH_CH_VK78, STB86_BH_CH_M33, Throw, Put};
	respawnWeapons[] = {STB86_BH_CH_VK78, STB86_BH_CH_M33, Throw, Put};

	magazines[] = {MAG_10(Commando_20Rnd_65_Mag), MAG_2(TCF_6Rnd_127x40_Cyl), MAG_2(OPTRE_M9_Frag), MAG_2(OPTRE_M2_Smoke)};
	respawnMagazines[] = {MAG_10(Commando_20Rnd_65_Mag), MAG_2(TCF_6Rnd_127x40_Cyl), MAG_2(OPTRE_M9_Frag), MAG_2(OPTRE_M2_Smoke)};
	linkedItems[] = {STB86_BH_CH_Lead_Vest, STB86_BH_CH_Helmet, ItemMap, ItemCompass, ItemWatch, ItemRadio};
	respawnLinkedItems[] = {STB86_BH_CH_Lead_Vest, STB86_BH_CH_Helmet, ItemMap, ItemCompass, ItemWatch, ItemRadio};
};
class STB86_BH_CH_TL : STB86_BH_CH_SL {
	displayName = "Team Lead";
};
class STB86_BH_CH_Marksman : STB86_BH_CH_Rifleman{
	displayName = "Marksman";
	weapons[] = {STB86_BH_CH_SRS99C_Prefab, STB86_BH_M6G, Throw, Put};
	respawnWeapons[] = {STB86_BH_CH_SRS99C_Prefab, STB86_BH_M6G, Throw, Put};

	magazines[] = {MAG_10(OPTRE_4Rnd_145x114_APFSDS_Mag), MAG_2(OPTRE_8Rnd_127x40_Mag), MAG_2(OPTRE_M9_Frag), MAG_2(OPTRE_M2_Smoke)};
	respawnMagazines[] = {MAG_10(OPTRE_4Rnd_145x114_APFSDS_Mag), MAG_2(OPTRE_8Rnd_127x40_Mag), MAG_2(OPTRE_M9_Frag), MAG_2(OPTRE_M2_Smoke)};
	linkedItems[] = {STB86_BH_CH_Marksman_Vest, STB86_BH_CH_Helmet, SC_MDFCape, ItemMap, ItemCompass, ItemWatch, ItemRadio};
	respawnLinkedItems[] = {STB86_BH_CH_Marksman_Vest, STB86_BH_CH_Helmet, SC_MDFCape, ItemMap, ItemCompass, ItemWatch, ItemRadio};
};
class STB86_BH_CH_Medic : STB86_BH_CH_Rifleman {
	displayName = "Medic";
	backpack = "STB86_BH_CH_Medic_Rucksack";
	attendant = 1;
	icon = "iconManMedic";
	weapons[] = {STB86_BH_CH_MA37K, STB86_BH_M6G, Throw, Put};
	respawnWeapons[] = {STB86_BH_CH_MA37K, STB86_BH_M6G, Throw, Put};
	Items[] = {MAG_3(FirstAidKit), Medikit, OPTRE_Medkit};
	RespawnItems[] = {MAG_3(FirstAidKit), Medikit, OPTRE_Medkit};
	magazines[] = {MAG_10(OPTRE_32Rnd_762x51_Mag), MAG_2(OPTRE_8Rnd_127x40_Mag), MAG_2(OPTRE_M9_Frag), MAG_2(OPTRE_M2_Smoke)};
	respawnMagazines[] = {MAG_10(OPTRE_32Rnd_762x51_Mag), MAG_2(OPTRE_8Rnd_127x40_Mag), MAG_2(OPTRE_M9_Frag), MAG_2(OPTRE_M2_Smoke)};
	linkedItems[] = {STB86_BH_CH_Medic_Vest, STB86_BH_CH_Helmet, ItemMap, ItemCompass, ItemWatch, ItemRadio};
	respawnLinkedItems[] = {STB86_BH_CH_Medic_Vest, STB86_BH_CH_Helmet, ItemMap, ItemCompass, ItemWatch, ItemRadio};
};
class STB86_BH_CH_SAW_Gunner : STB86_BH_CH_Rifleman {
	displayName = "SAW Gunner";
	backpack = "STB86_BH_CH_Rucksack";
	
	weapons[] = {STB86_BH_CH_M247, STB86_BH_M6G, Throw, Put};
	respawnWeapons[] = {STB86_BH_CH_M247, STB86_BH_M6G, Throw, Put};

	magazines[] = {MAG_6(OPTRE_100Rnd_762x51_Box), MAG_2(OPTRE_8Rnd_127x40_Mag), MAG_2(OPTRE_M9_Frag), MAG_2(OPTRE_M2_Smoke)};
	respawnMagazines[] = {MAG_6(OPTRE_100Rnd_762x51_Box), MAG_2(OPTRE_8Rnd_127x40_Mag), MAG_2(OPTRE_M9_Frag), MAG_2(OPTRE_M2_Smoke)};
	linkedItems[] = {STB86_BH_CH_Autorifleman_Vest, STB86_BH_CH_Helmet, ItemMap, ItemCompass, ItemWatch, ItemRadio};
	respawnLinkedItems[] = {STB86_BH_CH_Autorifleman_Vest, STB86_BH_CH_Helmet, ItemMap, ItemCompass, ItemWatch, ItemRadio};
};
class STB86_BH_CH_AT : STB86_BH_CH_Rifleman {
	displayName = "AT";
	backpack = "STB86_BH_CH_Rucksack_AT";
	
	weapons[] = {STB86_BH_CH_MA5B, STB86_BH_M6G, OPTRE_M41_SSR, Throw, Put};
	respawnWeapons[] = {STB86_BH_CH_MA5B, STB86_BH_M6G, OPTRE_M41_SSR, Throw, Put};

	magazines[] = {MAG_10(OPTRE_60Rnd_762x51_Mag), MAG_2(OPTRE_8Rnd_127x40_Mag), MAG_2(OPTRE_M9_Frag), MAG_2(OPTRE_M2_Smoke), OPTRE_M41_Twin_HEAT};
	respawnMagazines[] = {MAG_10(OPTRE_60Rnd_762x51_Mag), MAG_2(OPTRE_8Rnd_127x40_Mag), MAG_2(OPTRE_M9_Frag), MAG_2(OPTRE_M2_Smoke), OPTRE_M41_Twin_HEAT};
	
	linkedItems[] = {STB86_BH_CH_Heavy_Vest, STB86_BH_CH_Helmet, ItemMap, ItemCompass, ItemWatch, ItemRadio};
	respawnLinkedItems[] = {STB86_BH_CH_Heavy_Vest, STB86_BH_CH_Helmet, ItemMap, ItemCompass, ItemWatch, ItemRadio};
};
class STB86_BH_CH_AA : STB86_BH_CH_Rifleman {
	displayName = "AA";
	backpack = "STB86_BH_CH_Rucksack_AA";
	
	weapons[] = {STB86_BH_CH_MA5B, STB86_BH_M6G, OPTRE_M41_SSR, Throw, Put};
	respawnWeapons[] = {STB86_BH_CH_MA5B, STB86_BH_M6G, OPTRE_M41_SSR, Throw, Put};

	magazines[] = {MAG_10(OPTRE_60Rnd_762x51_Mag), MAG_2(OPTRE_8Rnd_127x40_Mag), MAG_2(OPTRE_M9_Frag), MAG_2(OPTRE_M2_Smoke), OPTRE_M41_Twin_HEAT_Thermal};
	respawnMagazines[] = {MAG_10(OPTRE_60Rnd_762x51_Mag), MAG_2(OPTRE_8Rnd_127x40_Mag), MAG_2(OPTRE_M9_Frag), MAG_2(OPTRE_M2_Smoke), OPTRE_M41_Twin_HEAT_Thermal};
	linkedItems[] = {STB86_BH_CH_Heavy_Vest, STB86_BH_CH_Helmet, ItemMap, ItemCompass, ItemWatch, ItemRadio};
	respawnLinkedItems[] = {STB86_BH_CH_Heavy_Vest, STB86_BH_CH_Helmet, ItemMap, ItemCompass, ItemWatch, ItemRadio};
};
class STB86_BH_CH_Engineer : STB86_BH_CH_Rifleman {
	displayName = "Engineer";
	backpack = "STB86_BH_CH_Rucksack";
	icon = "iconManEngineer";	
	engineer = true;
	weapons[] = {STB86_BH_CH_M7, STB86_BH_M6G, Throw, Put};
	respawnWeapons[] = {STB86_BH_CH_M7, STB86_BH_M6G, Throw, Put};
	Items[] = {MAG_3(FirstAidKit), Toolkit};
	RespawnItems[] = {MAG_3(FirstAidKit), Toolkit};
	magazines[] = {MAG_10(OPTRE_60Rnd_5x23mm_Mag), MAG_2(OPTRE_8Rnd_127x40_Mag), MAG_2(OPTRE_M9_Frag), MAG_2(OPTRE_M2_Smoke)};
	respawnMagazines[] = {MAG_10(OPTRE_60Rnd_5x23mm_Mag), MAG_2(OPTRE_8Rnd_127x40_Mag), MAG_2(OPTRE_M9_Frag), MAG_2(OPTRE_M2_Smoke)};
	linkedItems[] = {STB86_BH_CH_CQB_Vest, STB86_BH_CH_Helmet, ItemMap, ItemCompass, ItemWatch, ItemRadio};
	respawnLinkedItems[] = {STB86_BH_CH_CQB_Vest, STB86_BH_CH_Helmet, ItemMap, ItemCompass, ItemWatch, ItemRadio};
};
class STB86_BH_CH_Grenadier : STB86_BH_CH_Rifleman {
	displayName = "Grenadier";
	weapons[] = {STB86_BH_CH_HMG38, STB86_BH_CH_M33, Throw, Put};
	respawnWeapons[] = {STB86_BH_CH_HMG38, STB86_BH_CH_M33, Throw, Put};

	magazines[] = {MAG_6(OPTRE_40Rnd_30x06_Mag), MAG_2(TCF_6Rnd_127x40_Cyl), MAG_2(OPTRE_M9_Frag), MAG_2(OPTRE_M2_Smoke), MAG_4(3Rnd_HE_Grenade_shell), MAG_4(3Rnd_Smoke_Grenade_shell)};
	respawnMagazines[] = {MAG_6(OPTRE_40Rnd_30x06_Mag), MAG_2(TCF_6Rnd_127x40_Cyl), MAG_2(OPTRE_M9_Frag), MAG_2(OPTRE_M2_Smoke), MAG_4(3Rnd_HE_Grenade_shell), MAG_4(3Rnd_Smoke_Grenade_shell)};
	linkedItems[] = {STB86_BH_CH_CQB_Vest, STB86_BH_CH_Helmet, SC_MDFCape, ItemMap, ItemCompass, ItemWatch, ItemRadio};
	respawnLinkedItems[] = {STB86_BH_CH_CQB_Vest, STB86_BH_CH_Helmet, SC_MDFCape, ItemMap, ItemCompass, ItemWatch, ItemRadio};
};
class STB86_BH_CH_Crewmate : STB86_BH_CH_Engineer {
	displayName = "Crewmate"; // SUSSY BAKA???

	weapons[] = {STB86_BH_CH_M7, STB86_BH_M6G, Throw, Put};
	respawnWeapons[] = {STB86_BH_CH_M7, STB86_BH_M6G, Throw, Put};

	magazines[] = {MAG_4(OPTRE_60Rnd_5x23mm_Mag), MAG_2(OPTRE_8Rnd_127x40_Mag), MAG_2(OPTRE_M9_Frag), MAG_2(OPTRE_M2_Smoke)};
	respawnMagazines[] = {MAG_4(OPTRE_60Rnd_5x23mm_Mag), MAG_2(OPTRE_8Rnd_127x40_Mag), MAG_2(OPTRE_M9_Frag), MAG_2(OPTRE_M2_Smoke)};

	linkedItems[] = {STB86_BH_CH_Heavy_Vest, STB86_BH_Crew_Helmet, G_Bandanna_beast, ItemMap, ItemCompass, ItemWatch, ItemRadio};
	respawnLinkedItems[] = {STB86_BH_CH_Heavy_Vest, STB86_BH_Crew_Helmet, G_Bandanna_beast, ItemMap, ItemCompass, ItemWatch, ItemRadio};
};

class STB86_BH_CH_HeliPilot : STB86_BH_CH_Crewmate {
	displayName = "Helicopter Pilot";
	linkedItems[] = {STB86_BH_CH_Heavy_Vest, STB86_BH_CH_PilotHelmetHeli, G_Bandanna_beast, ItemMap, ItemCompass, ItemWatch, ItemRadio};
	respawnLinkedItems[] = {STB86_BH_CH_Heavy_Vest, STB86_BH_CH_PilotHelmetHeli, G_Bandanna_beast, ItemMap, ItemCompass, ItemWatch, ItemRadio};
};
/*
Special Enemies
*/
class STB86_BH_CH_Devastator : STB86_BH_CH_Rifleman {
	displayName = "Devastator";
	backpack = "STB86_BH_CH_Rucksack_Devastator";
	
	weapons[] = {STB86_BH_CH_M247H, STB86_BH_M6G, Throw, Put};
	respawnWeapons[] = {STB86_BH_CH_M247H, STB86_BH_M6G, Throw, Put};

	magazines[] = {OPTRE_200Rnd_127x99_M247H_Etilka_Ball, MAG_2(OPTRE_8Rnd_127x40_Mag), MAG_2(OPTRE_M9_Frag), MAG_2(OPTRE_M2_Smoke)};
	respawnMagazines[] = {OPTRE_200Rnd_127x99_M247H_Etilka_Ball, MAG_2(OPTRE_8Rnd_127x40_Mag), MAG_2(OPTRE_M9_Frag), MAG_2(OPTRE_M2_Smoke)};

	linkedItems[] = {STB86_BH_CH_UpArmor_Vest, STB86_BH_CH_Helmet, SC_MDFRecon, ItemMap, ItemCompass, ItemWatch, ItemRadio};
	respawnLinkedItems[] = {STB86_BH_CH_UpArmor_Vest, STB86_BH_CH_Helmet, SC_MDFRecon, ItemMap, ItemCompass, ItemWatch, ItemRadio};
};
class STB86_BH_CH_Fanatic : STB86_BH_CH_Rifleman {
	displayName = "Fanatic";

	weapons[] = {Throw, Put};
	respawnWeapons[] = {Throw, Put};

	Items[] = {};
	RespawnItems[] = {};

	magazines[] = {};
	respawnMagazines[] = {};

	linkedItems[] = {G_RegulatorMask_F};
	respawnLinkedItems[] = {G_RegulatorMask_F};
	class EventHandlers : EventHandlers {
			postInit = "[(_this select 0)] call STB86_Factions_fnc_fanaticInit";
	};
};
class STB86_BH_CH_FakeFanatic : STB86_BH_CH_Fanatic {
	scope = 1;
	scopeCurator = 1;
	displayName = "Fake Fanatic";
	class EventHandlers : EventHandlers {
		postInit = "[(_this select 0)] call STB86_Factions_fnc_fakeFanaticInit";
	};
};
class STB86_BH_CH_Ghost : STB86_BH_CH_Rifleman {
	displayName = "Ghost";

	weapons[] = {STB86_BH_CH_ARC9T, STB86_BH_M6G, Throw, Put};
	respawnWeapons[] = {STB86_BH_CH_ARC9T, STB86_BH_M6G, Throw, Put};

	magazines[] = {MAG_10(STB86_BH_CH_12rnd_Railgun_Slug), MAG_2(OPTRE_8Rnd_127x40_Mag), MAG_2(OPTRE_M9_Frag), MAG_2(OPTRE_M2_Smoke)};
	respawnMagazines[] = {MAG_10(STB86_BH_CH_12rnd_Railgun_Slug), MAG_2(OPTRE_8Rnd_127x40_Mag), MAG_2(OPTRE_M9_Frag), MAG_2(OPTRE_M2_Smoke)};

	linkedItems[] = {STB86_BH_CH_UpArmor_Vest, STB86_BH_Crew_Helmet, STB86_Ghost_Mask, G_Balaclava_blk, ItemMap, ItemCompass, ItemWatch, ItemRadio};
	respawnLinkedItems[] = {STB86_BH_CH_UpArmor_Vest, STB86_BH_Crew_Helmet, STB86_Ghost_Mask, G_Balaclava_blk, ItemMap, ItemCompass, ItemWatch, ItemRadio};

};
class STB86_BH_CH_Nightstalker : STB86_BH_CH_Ghost {
	displayName = "Nightstalker";

	identityTypes[] = {"Nightstalker"};

	weapons[] = {STB86_BH_CH_ARC9, STB86_BH_M6G, Throw, Put};
	respawnWeapons[] = {STB86_BH_CH_ARC9, STB86_BH_M6G, Throw, Put};

	linkedItems[] = {STB86_BH_CH_UpArmor_Vest, STB86_BH_Beret, ItemMap, ItemCompass, ItemWatch, ItemRadio};
	respawnLinkedItems[] = {STB86_BH_CH_UpArmor_Vest, STB86_BH_Beret, ItemMap, ItemCompass, ItemWatch, ItemRadio};
};