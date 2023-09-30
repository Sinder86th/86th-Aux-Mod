class O_Soldier_A_F;

class STB86_BH_Rifleman : O_Soldier_A_F {
    /* SETUP */
    
    scope = 2;
	scopeCurator = 2;
	side = 0; 			
	author = AUTHOR;
	dlc = DLC;
    faction = "STB86_Black_Hand";
    identityTypes[] = {"LanguageFRE_F","Head_Tanoan"};
    editorSubcategory = "STB86_BH_SubCat";

	model="\A3\Characters_F\BLUFOR\b_soldier_03.p3d";
	uniformClass = "STB86_BH_Battledress";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"STB86_Factions\Black_hand\textures\Blackhand_Uniform.paa"};

    /* Change this shit! */

    displayName = "Rifleman";
	backpack = "";

	weapons[] = {STB86_BH_AK15, STB86_BH_M6G, Throw, Put};
	respawnWeapons[] = {STB86_BH_AK15, STB86_BH_M6G, Throw, Put};

	Items[] = {MAG_3(FirstAidKit)};
	RespawnItems[] = {MAG_3(FirstAidKit)};

	magazines[] = {MAG_10(STB86_762x39_32rnd_Tracer), MAG_2(OPTRE_8Rnd_127x40_Mag), MAG_2(OPTRE_M9_Frag), MAG_2(OPTRE_M2_Smoke)};
	respawnMagazines[] = {MAG_10(STB86_762x39_32rnd_Tracer), MAG_2(OPTRE_8Rnd_127x40_Mag), MAG_2(OPTRE_M9_Frag), MAG_2(OPTRE_M2_Smoke)};

	linkedItems[] = {V_PlateCarrier1_blk, STB86_BH_Helmet, G_Bandanna_blk, ItemMap, ItemCompass, ItemWatch, ItemRadio};
	respawnLinkedItems[] = {V_PlateCarrier1_blk, STB86_BH_Helmet, G_Bandanna_blk, ItemMap, ItemCompass, ItemWatch, ItemRadio};
    
};

class STB86_BH_Squad_Lead : STB86_BH_Rifleman { 
	displayName="Squad Lead";
	backpack="B_RadioBag_01_black_F";

	weapons[] = {STB86_BH_HK416, STB86_BH_M6G, Throw, Put};
	respawnWeapons[] = {STB86_BH_HK416, STB86_BH_M6G, Throw, Put};

	magazines[] = {MAG_10(STB86_556x45_30rnd_Tracer), MAG_2(OPTRE_8Rnd_127x40_Mag), MAG_2(OPTRE_M9_Frag), MAG_2(OPTRE_M2_Smoke)};
	respawnMagazines[] = {MAG_10(STB86_556x45_30rnd_Tracer), MAG_2(OPTRE_8Rnd_127x40_Mag), MAG_2(OPTRE_M9_Frag), MAG_2(OPTRE_M2_Smoke)};
	
	linkedItems[] = {V_PlateCarrier2_blk, STB86_BH_Helmet, G_Bandanna_blk, ItemMap, ItemCompass, ItemWatch, ItemRadio};
	respawnLinkedItems[] = {V_PlateCarrier2_blk, STB86_BH_Helmet, G_Bandanna_blk, ItemMap, ItemCompass, ItemWatch, ItemRadio};
   
};

class STB86_BH_Team_Lead : STB86_BH_Rifleman {
	displayName="Team Lead"; 
	backpack="B_TacticalPack_blk";

	linkedItems[] = {V_PlateCarrier2_blk, STB86_BH_Helmet, G_Bandanna_blk, ItemMap, ItemCompass, ItemWatch, ItemRadio};
	respawnLinkedItems[] = {V_PlateCarrier2_blk, STB86_BH_Helmet, G_Bandanna_blk, ItemMap, ItemCompass, ItemWatch, ItemRadio};

};

class STB86_BH_Marksman : STB86_BH_Rifleman {
	displayName="Marksman";

	weapons[] = {STB86_BH_BR55XHB, STB86_BH_M6G, Throw, Put};
	respawnWeapons[] = {STB86_BH_BR55XHB, STB86_BH_M6G, Throw, Put};
	
	magazines[] = {MAG_10(OPTRE_36Rnd_95x40_Mag), MAG_2(OPTRE_8Rnd_127x40_Mag), MAG_2(OPTRE_M9_Frag), MAG_2(OPTRE_M2_Smoke)};
	respawnMagazines[] = {MAGMAG_10_4(OPTRE_36Rnd_95x40_Mag), MAG_2(OPTRE_8Rnd_127x40_Mag), MAG_2(OPTRE_M9_Frag), MAG_2(OPTRE_M2_Smoke)};
	
	linkedItems[] = {V_TacVestIR_blk, STB86_BH_Helmet, G_Bandanna_blk, ItemMap, ItemCompass, ItemWatch, ItemRadio};
	respawnLinkedItems[] = {V_TacVestIR_blk, STB86_BH_Helmet, G_Bandanna_blk, ItemMap, ItemCompass, ItemWatch, ItemRadio};
   
};

class STB86_BH_Medic : STB86_BH_Rifleman {
	displayName="Medic";
	attendant = 1;
	icon = "iconManMedic";
	backpack="STB86_BH_TacticalPack_Medic";


	weapons[] = {STB86_BH_MA5K, STB86_BH_M6G, Throw, Put};
	respawnWeapons[] = {STB86_BH_MA5K, STB86_BH_M6G, Throw, Put};

	magazines[] = {MAG_6(OPTRE_32Rnd_762x51_Mag), MAG_2(OPTRE_8Rnd_127x40_Mag), MAG_2(OPTRE_M9_Frag), MAG_2(OPTRE_M2_Smoke)};
	respawnMagazines[] = {MAG_6(OPTRE_32Rnd_762x51_Mag), MAG_2(OPTRE_8Rnd_127x40_Mag), MAG_2(OPTRE_M9_Frag), MAG_2(OPTRE_M2_Smoke)};
	
	linkedItems[] = {STB86_BH_Medic_Vest, STB86_BH_Helmet, G_Bandanna_blk, ItemMap, ItemCompass, ItemWatch, ItemRadio};
	respawnLinkedItems[] = {STB86_BH_Medic_Vest, STB86_BH_Helmet, G_Bandanna_blk, ItemMap, ItemCompass, ItemWatch, ItemRadio};
};
class STB86_BH_SAW : STB86_BH_Rifleman {   
	displayName="SAW Gunner";
	backpack="B_FieldPack_blk";

	weapons[] = {STB86_BH_RPK, STB86_BH_M6G, Throw, Put};
	respawnWeapons[] = {STB86_BH_RPK, STB86_BH_M6G, Throw, Put};

	magazines[] = {MAG_6(75rnd_762x39_AK12_Mag_F), MAG_2(OPTRE_8Rnd_127x40_Mag), MAG_2(OPTRE_M9_Frag), MAG_2(OPTRE_M2_Smoke)};
	respawnMagazines[] = {MAG_6(75rnd_762x39_AK12_Mag_F), MAG_2(OPTRE_8Rnd_127x40_Mag), MAG_2(OPTRE_M9_Frag), MAG_2(OPTRE_M2_Smoke)};

};
class STB86_BH_AT : STB86_BH_Rifleman { 
	displayName="AT Rifleman";
	backpack="STB86_BH_FieldPack_AT";

	weapons[] = {STB86_BH_AK15, STB86_BH_M6G, OPTRE_M41_SSR, Throw, Put};
	respawnWeapons[] = {STB86_BH_AK15, STB86_BH_M6G, OPTRE_M41_SSR, Throw, Put};

	magazines[] = {MAG_4(STB86_762x39_32rnd_Tracer), MAG_2(OPTRE_8Rnd_127x40_Mag), MAG_2(OPTRE_M9_Frag), MAG_2(OPTRE_M2_Smoke), OPTRE_M41_Twin_HEAT};
	respawnMagazines[] = {MAG_4(STB86_762x39_32rnd_Tracer), MAG_2(OPTRE_8Rnd_127x40_Mag), MAG_2(OPTRE_M9_Frag), MAG_2(OPTRE_M2_Smoke), OPTRE_M41_Twin_HEAT};


	linkedItems[] = {STB86_BH_GL_Vest, STB86_BH_Helmet, G_Bandanna_blk, ItemMap, ItemCompass, ItemWatch, ItemRadio};
	respawnLinkedItems[] = {STB86_BH_GL_Vest, STB86_BH_Helmet, G_Bandanna_blk, ItemMap, ItemCompass, ItemWatch, ItemRadio};

};

class STB86_BH_AA : STB86_BH_AT {
	displayName="AA Rifleman";
	backpack="STB86_BH_FieldPack_AA";

	magazines[] = {MAG_4(STB86_762x39_32rnd_Tracer), MAG_2(OPTRE_8Rnd_127x40_Mag), MAG_2(OPTRE_M9_Frag), MAG_2(OPTRE_M2_Smoke), OPTRE_M41_Twin_HEAT_Thermal};
	respawnMagazines[] = {MAG_4(STB86_762x39_32rnd_Tracer), MAG_2(OPTRE_8Rnd_127x40_Mag), MAG_2(OPTRE_M9_Frag), MAG_2(OPTRE_M2_Smoke), OPTRE_M41_Twin_HEAT_Thermal};

};

class STB86_BH_Engineer : STB86_BH_Rifleman { 
	displayName = "Engineer";
	backpack="B_AssaultPack_blk";

	Items[] = {MAG_3(FirstAidKit), Toolkit};
	RespawnItems[] = {MAG_3(FirstAidKit), Toolkit};
	icon = "iconManEngineer";	
	engineer = true;
	
	weapons[] = {arifle_AKS_F, STB86_BH_M6G, Throw, Put};
	respawnWeapons[] = {arifle_AKS_F, STB86_BH_M6G, Throw, Put};

	magazines[] = {MAG_6(30Rnd_545x39_Mag_F), MAG_2(OPTRE_8Rnd_127x40_Mag), MAG_2(OPTRE_M9_Frag), MAG_2(OPTRE_M2_Smoke)};
	respawnMagazines[] = {MAG_6(30Rnd_545x39_Mag_F), MAG_2(OPTRE_8Rnd_127x40_Mag), MAG_2(OPTRE_M9_Frag), MAG_2(OPTRE_M2_Smoke)};


	linkedItems[] = {STB86_BH_GL_Vest, STB86_BH_Crew_Helmet, G_Bandanna_blk, ItemMap, ItemCompass, ItemWatch, ItemRadio};
	respawnLinkedItems[] = {STB86_BH_GL_Vest, STB86_BH_Crew_Helmet, G_Bandanna_blk, ItemMap, ItemCompass, ItemWatch, ItemRadio};

};
class STB86_BH_Grenadier : STB86_BH_Rifleman { 
	displayName = "Grenadier";

	weapons[] = {STB86_BH_AK15GL, STB86_BH_M6G, Throw, Put};
	respawnWeapons[] = {STB86_BH_AK15GL, STB86_BH_M6G, Throw, Put};

	magazines[] = {MAG_10(STB86_762x39_32rnd), MAG_2(OPTRE_8Rnd_127x40_Mag), MAG_2(OPTRE_M9_Frag), MAG_2(OPTRE_M2_Smoke), MAG_3(1Rnd_HE_Grenade_shell), MAG_2(1Rnd_Smoke_Grenade_shell)};
	respawnMagazines[] = {MAG_10(STB86_762x39_32rnd), MAG_2(OPTRE_8Rnd_127x40_Mag), MAG_2(OPTRE_M9_Frag), MAG_2(OPTRE_M2_Smoke), MAG_3(1Rnd_HE_Grenade_shell), MAG_2(1Rnd_Smoke_Grenade_shell)};
};

class STB86_BH_Sniper : STB86_BH_Rifleman {
  	displayName = "Sniper";
	uniformClass = "U_B_FullGhillie_lsh";

	weapons[] = {STB86_BH_SRS99C_Prefab, STB86_BH_M6G, Throw, Put};
	respawnWeapons[] = {STB86_BH_SRS99C_Prefab, STB86_BH_M6G, Throw, Put};

	magazines[] = {MAG_6(OPTRE_4Rnd_145x114_APFSDS_Mag), MAG_2(OPTRE_8Rnd_127x40_Mag), MAG_2(OPTRE_M9_Frag), MAG_2(OPTRE_M2_Smoke)};
	respawnMagazines[] = {MAG_6(OPTRE_4Rnd_145x114_APFSDS_Mag), MAG_2(OPTRE_8Rnd_127x40_Mag), MAG_2(OPTRE_M9_Frag), MAG_2(OPTRE_M2_Smoke)};

	linkedItems[] = {V_TacVestIR_blk, STB86_BH_Helmet, G_Bandanna_blk, ItemMap, ItemCompass, ItemWatch, ItemRadio};
	respawnLinkedItems[] = {V_TacVestIR_blk, STB86_BH_Helmet, G_Bandanna_blk, ItemMap, ItemCompass, ItemWatch, ItemRadio};
};

class STB86_BH_Officer : STB86_BH_Rifleman {
	displayName = "Officer";

	weapons[] = {arifle_AKS_F, STB86_BH_M6G, Throw, Put};
	respawnWeapons[] = {arifle_AKS_F, STB86_BH_M6G, Throw, Put};

	magazines[] = {MAG_10(30Rnd_545x39_Mag_F), MAG_2(OPTRE_8Rnd_127x40_Mag), MAG_2(OPTRE_M9_Frag), MAG_2(OPTRE_M2_Smoke)};
	respawnMagazines[] = {MAG_10(30Rnd_545x39_Mag_F), MAG_2(OPTRE_8Rnd_127x40_Mag), MAG_2(OPTRE_M9_Frag), MAG_2(OPTRE_M2_Smoke)};

	linkedItems[] = {V_SmershVest_01_radio_F, STB86_BH_Beret, G_Bandanna_blk, ItemMap, ItemCompass, ItemWatch, ItemRadio};
	respawnLinkedItems[] = {V_SmershVest_01_radio_F, STB86_BH_Beret, G_Bandanna_blk, ItemMap, ItemCompass, ItemWatch, ItemRadio};

};
class STB86_BH_Crewman : STB86_BH_Engineer {
	displayName = "Crewmate"; // SUSSY

	weapons[] = {STB86_BH_M7, STB86_BH_M6G, Throw, Put};
	respawnWeapons[] = {STB86_BH_M7, STB86_BH_M6G, Throw, Put};

	magazines[] = {MAG_6(OPTRE_60Rnd_5x23mm_Mag), MAG_2(OPTRE_8Rnd_127x40_Mag), MAG_2(OPTRE_M9_Frag), MAG_2(OPTRE_M2_Smoke)};
	respawnMagazines[] = {MAG_6(OPTRE_60Rnd_5x23mm_Mag), MAG_2(OPTRE_8Rnd_127x40_Mag), MAG_2(OPTRE_M9_Frag), MAG_2(OPTRE_M2_Smoke)};
};
class STB86_BH_Autorifleman : STB86_BH_Rifleman {
    displayName = "Autorifleman";

    backpack = "B_AssaultPack_blk";

	magazines[] = {MAG_6(STB86_762x39_60rnd), MAG_2(OPTRE_8Rnd_127x40_Mag), MAG_2(OPTRE_M9_Frag), MAG_2(OPTRE_M2_Smoke)};
	respawnMagazines[] = {MAG_6(STB86_762x39_60rnd), MAG_2(OPTRE_8Rnd_127x40_Mag), MAG_2(OPTRE_M9_Frag), MAG_2(OPTRE_M2_Smoke)};
};

/*
FUCK YOU
I FUCKING HATE UNIT CONFIG
IT SUCKS DICK
IT'S THE SAME BOILETPLATE BULLSHIT OVER AND OVER AND OVER AGAIN
I FUCKING HATE IT!
IT SUCKS DICK!
I CAN'T MAKE A MACRO, BECAUSE IT'S JUST DIFFERENT ENOUGH THAT IT WOULD BE USELESS.
I CAN REMOVE A LITTLE OF THE COCK SUCKING BULLSHIT THROUGH INHERITANCE
BUT AT THE END OF THE DAY IT STILL SUCKS DICK
FUCK
Douglas is the only thing keeping me sane
*/