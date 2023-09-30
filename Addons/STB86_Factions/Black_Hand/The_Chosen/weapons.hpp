//Primary
class OPTRE_Commando;
class OPTRE_SRS99D;
class OPTRE_MA37K;
class OPTRE_M247;
class OPTRE_MA5B;
class OPTRE_M7;
class OPTRE_BR55;
class OPTRE_HMG38;
class srifle_DMR_02_F;
class OPTRE_M247H_Etilka;
class STB86_Flamethrower;
class STB86_Vehicle_Flamethrower : STB86_Flamethrower {
	class FullAuto;
};
class autocannon_35mm;

class STB86_BH_CH_VK78 : OPTRE_Commando{
	author = AUTHOR;
	dlc = DLC;
	displayName = "VK78 [CH]";
	baseWeapon = "STB86_BH_CH_VK78";
	class linkedItems{
		class linkedItemsMuzzle{
			item="optre_ma5suppressor";
			slot="MuzzleSlot";
		};
	};
};
class STB86_BH_CH_SRS99D : OPTRE_SRS99D {
	author = AUTHOR;
	dlc = DLC;
	displayName = "SRS99D [CH]";
	baseWeapon = "STB86_BH_CH_SRS99D";
	class linkedItems{
		class linkedItemsMuzzle{
			item="optre_ma5suppressor";
			slot="MuzzleSlot";
		};
	};
};
class STB86_BH_CH_MA37K : OPTRE_MA37K {
	author = AUTHOR;
	dlc = DLC;
	displayName = "MA37K [CH]";
	baseWeapon = "STB86_BH_CH_MA37K";
	class linkedItems{
		class linkedItemsMuzzle{
			item="optre_ma5suppressor";
			slot="MuzzleSlot";
		};
	};
};
class STB86_BH_CH_M247 : OPTRE_M247 {
	author = AUTHOR;
	dlc = DLC;
	displayName = "M247 [CH]";
	baseWeapon = "STB86_BH_CH_M247";
	hiddenSelectionsTextures[] = {"STB86_Factions\Black_Hand\textures\square.paa","STB86_Factions\Black_Hand\textures\square.paa","\OPTRE_Weapons\MG\data\M247_magazine_CO.paa","\OPTRE_Weapons\MG\data\M247_stock_CO.paa","\OPTRE_Weapons\MG\data\M247_details_CO.paa","\OPTRE_Weapons\MG\data\M247_barrel_sights_CO.paa"};
};
class STB86_BH_CH_MA5B : OPTRE_MA5B {
	author = AUTHOR;
	dlc = DLC;
	displayName = "MA5B [CH]";
	baseWeapon = "STB86_BH_CH_MA5B";
	class linkedItems{
		class linkedItemsMuzzle{
			item="optre_ma5suppressor";
			slot="MuzzleSlot";
		};
	};
};
class STB86_BH_CH_M7 : OPTRE_M7 {
	author = AUTHOR;
	dlc = DLC;
	displayName = "M7 [CH]";
	baseWeapon = "STB86_BH_CH_M7";
	class linkedItems{
		class linkedItemsMuzzle{
			item="optre_m7_silencer";
			slot="MuzzleSlot";
		};
	};
};
class STB86_BH_CH_BR55 : OPTRE_BR55 {
	author = AUTHOR;
	dlc = DLC;
	displayName = "BR55 [CH]";
	baseWeapon = "STB86_BH_CH_BR55";
	class linkedItems{
		class linkedItemsMuzzle{
			item="optre_ma5suppressor";
			slot="MuzzleSlot";
		};
	};
};
class STB86_BH_CH_HMG38 : OPTRE_HMG38 {
	author = AUTHOR;
	dlc = DLC;
	displayName = "HMG38 [CH]";
	baseWeapon = "STB86_BH_CH_HMG38";
	class linkedItems{
		class linkedItemsMuzzle{
			item="optre_ma5suppressor";
			slot="MuzzleSlot";
		};
	};
};
class STB86_BH_CH_M247H : OPTRE_M247H_Etilka{
	author = AUTHOR;
	dlc = DLC;
	displayName = "M247H [CH]";
	baseWeapon = "STB86_BH_CH_M247H";
	hiddenSelectionsTextures[] = {
		"STB86_Factions\Black_Hand\The_Chosen\textures\weapons\M247H.paa",
		"STB86_Factions\Black_Hand\The_Chosen\textures\weapons\M247H_Mag.paa",
		"STB86_Factions\Black_Hand\The_Chosen\textures\weapons\M247H_Cover.paa"
	};
};
class STB86_BH_CH_ARC9 : srifle_DMR_02_F {
		ace_overheating_mrbs = 3000000;
		ace_overheating_slowdownFactor = 0;
		ace_overheating_dispersion = 0;
		ace_overheating_closedBolt = 0;
		scope=2;
		scopeArsenal = 2;
		author = AUTHOR;
		dlc = DLC;
		displayName = "ARC-9 Railgun [CH]";
		baseWeapon = "STB86_BH_CH_ARC_9";
		magazines[] = {"STB86_BH_CH_12rnd_Railgun_Slug"};
		modes[] = {"Single","FullAuto"};
		class Single : Mode_SemiAuto {
			sounds[]=
			{
			"StandardSound",
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="DefaultRifle";
				closure1[]={};
				closure2[]={};
				soundClosure[]=
				{
					"closure1",
					0.5,
					"closure2",
					0.5
				};
			};
			class StandardSound: BaseSoundModeType
			{

				begin1[] = {"\OPTRE_FC_Weapons\Railgun\Data\sounds\Railgun.wss",1,1,2000};
				soundBegin[]=
				{
					"begin1",2
				};
			};

			reloadTime=0.75;
			dispersion=0.0005;
			recoil="recoil_single_mx";
			recoilProne="recoil_single_prone_mx";
			minRange=15;
			minRangeProbab=0.30000001;
			midRange=200;
			midRangeProbab=0.69999999;
			maxRange=300;
			maxRangeProbab=0.050000001;

		};
		class FullAuto : Mode_FullAuto{
			sounds[]=
			{
				"StandardSound",
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="DefaultRifle";
				closure1[]={};
				closure2[]={};
				soundClosure[]=
				{
					"closure1",
					0.5,
					"closure2",
					0.5
				};
			};
			class StandardSound: BaseSoundModeType
			{

				begin1[] = {"\OPTRE_FC_Weapons\Railgun\Data\sounds\Railgun.wss",1,1,2000};
				soundBegin[]=
				{
					"begin1",2
				};
			};

			reloadTime=0.75;
			dispersion=0.0005;
			recoil="recoil_auto_mx";
			recoilProne="recoil_auto_prone_mx";
			minRange=15;
			minRangeProbab=0.30000001;
			midRange=200;
			midRangeProbab=0.69999999;
			maxRange=300;
			maxRangeProbab=0.050000001;
		};
};
class STB86_BH_CH_ARC9T : STB86_BH_CH_ARC9 {
	displayName = "ARC-9T Railgun [CH]";
	class Single : Single {
		reloadTime = 0.25;	
	};
	class FullAuto : FullAuto {
		reloadTime = 0.25;
	};
};
//Secondary
class TCF_M33;

class STB86_BH_CH_M33 : TCF_M33 {
	author = AUTHOR;
	dlc = DLC;
	displayName = "M33 [CH]";
	baseWeapon = "STB86_BH_CH_M33";
};
/*
Weapon Prefabs
*/	
class STB86_BH_CH_SRS99C_Prefab : STB86_BH_CH_SRS99D {
	scope=1;
	scopeArsenal=1;
	scopeCurator=1;
	class linkedItems{
		class linkedItemsOptic{
			item="optre_srs99c_scope";
			slot="CowsSlot";
		};
		class linkedItemsMuzzle{
			item="optre_srs99d_suppressor";
			slot="MuzzleSlot";
		};
	};
};

// Vehicles
class STB86_BH_CH_MBT_02_LMG : STB86_Vehicle_Flamethrower {
	baseWeapon = "STB86_BH_CH_MBT_02_LMG";
	STB86_Flamethrower_Speed = 75;
	class FullAuto : FullAuto {
		minRange=10;
		minRangeProbab=1;
		midRange=35;
		midRangeProbab=0.97;
		maxRange=65;
		maxRangeProbab=0.5;
	};
};
class STB86_BH_CH_IFV_02_Cannon : autocannon_35mm {
	displayName = "20mm AA Cannon";
};