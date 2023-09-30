class VestItem;
class OPTRE_UNSC_M52D_Armor;
class ContainerSupply;
class Supply250 : ContainerSupply		// The class name does not really matter, but for clarity, it should be SupplyXX, where XX is the desired capacity value.
{
	maximumLoad = 250;				// Replace XX with the desired capacity value.
};
/* VEST */
class STB86_BH_CH_Base_Vest : OPTRE_UNSC_M52D_Armor{
		displayName = "Rifleman Vest [CH]";
		dlc = DLC;
		scope = 2;
		scopeArsenal = 2;
		author = AUTHOR;
		hiddenSelectionsTextures[] =
		{
			"", // Vest
			"", // Vest 2
			"STB86_Factions\Black_hand\The_Chosen\textures\Blackhand_Legs.paa", //Legs
			"", //No clue lol
			"STB86_Factions\Black_hand\The_Chosen\textures\Blackhand_Armor.paa" //Armor
		};
		class ItemInfo : VestItem
		{

			vestType = "Rebreather";
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";

			mass = 80;

			modelSides[] = { 6 };

			containerClass = "Supply250";

			
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 65;
					passThrough = 0.1;
				};
				class Legs
				{
					hitpointName = "HitLegs";
					armor = 65;
					passThrough = 0.1;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 65;
					passThrough = 0.1;
				};
				class Hands
				{
					hitpointName = "HitHands";
					armor = 65;
					passThrough = 0.1;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 65;
					passThrough = 0.1;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 65;
					passThrough = 0.1;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 65;
					passThrough = 0.1;
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 65;
					passThrough = 0.1;
				};
			};
			
			hiddenSelections[] = {
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_Base",
			"A_ChestArmor",
			"A_Ghillie",
			//"A_KneesLeft",
			//"A_KneesRight",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_ODST",
			//"A_ShinArmorLeft",
			//"A_ShinArmorRight",
			"A_TacPad",
			//"A_ThighArmorLeft",
			//"A_ThighArmorRight",
			"AS_BaseLeft",
			"AS_BaseRight",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			//"AS_ODSTLeft",
			//"AS_ODSTRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AS_SmallLeft",
			"AS_SmallRight",
			"AP_AR",
			"AP_BR",
			"AP_Canteen",
			"AP_GL",
			"AP_Knife",
			"AP_MGThigh",
			"AP_AR",
			"AP_Pack",
			"AP_Pistol",
			"AP_Rounds",
			"AP_SG",
			"AP_SMG",
			"AP_Sniper",
			"AP_Thigh",
			"AP_Frag",
			"AP_Smoke",
			"APO_AR",
			"APO_BR",
			"APO_Knife",
			"APO_SMG",
			"APO_Sniper",
			"CustomKit_Scorch"
			};
		};
};
class STB86_BH_CH_Heavy_Vest : STB86_BH_CH_Base_Vest {
		displayName = "Heavy Vest [CH]";
		class ItemInfo : VestItem
		{

			vestType = "Rebreather";
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";

			mass = 80;

			modelSides[] = { 6 };

			containerClass = "Supply250";

			
						class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 65;
					passThrough = 0.1;
				};
				class Legs
				{
					hitpointName = "HitLegs";
					armor = 65;
					passThrough = 0.1;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 65;
					passThrough = 0.1;
				};
				class Hands
				{
					hitpointName = "HitHands";
					armor = 65;
					passThrough = 0.1;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 65;
					passThrough = 0.1;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 65;
					passThrough = 0.1;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 65;
					passThrough = 0.1;
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 65;
					passThrough = 0.1;
				};
			};
			
			hiddenSelections[] = {
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_Base",
			"A_ChestArmor",
			"A_Ghillie",
			"A_KneesLeft",
			"A_KneesRight",
			//"A_KneesMarLeft",
			//"A_KneesMarRight",
			"A_ODST",
			//"A_ShinArmorLeft",
			//"A_ShinArmorRight",
			"A_TacPad",
			//"A_ThighArmorLeft",
			//"A_ThighArmorRight",
			"AS_BaseLeft",
			"AS_BaseRight",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			//"AS_ODSTCQBLeft",
			//"AS_ODSTCQBRight",
			"AS_ODSTLeft",
			"AS_ODSTRight",
			//"AS_ODSTSniperLeft",
			//"AS_ODSTSniperRight",
			"AS_SmallLeft",
			"AS_SmallRight",
			"AP_AR",
			"AP_BR",
			"AP_Canteen",
			"AP_GL",
			"AP_Knife",
			"AP_MGThigh",
			"AP_AR",
			"AP_Pack",
			"AP_Pistol",
			"AP_Rounds",
			"AP_SG",
			"AP_SMG",
			"AP_Sniper",
			"AP_Thigh",
			"AP_Frag",
			"AP_Smoke",
			"APO_AR",
			"APO_BR",
			"APO_Knife",
			"APO_SMG",
			"APO_Sniper",
			"CustomKit_Scorch"
			};
		};
};
class STB86_BH_CH_CQB_Vest : STB86_BH_CH_Base_Vest {
		displayName = "CQB Vest [CH]";
		class ItemInfo : VestItem
		{

			vestType = "Rebreather";
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";

			mass = 80;

			modelSides[] = { 6 };

			containerClass = "Supply250";

			
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 65;
					passThrough = 0.1;
				};
				class Legs
				{
					hitpointName = "HitLegs";
					armor = 65;
					passThrough = 0.1;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 65;
					passThrough = 0.1;
				};
				class Hands
				{
					hitpointName = "HitHands";
					armor = 65;
					passThrough = 0.1;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 65;
					passThrough = 0.1;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 65;
					passThrough = 0.1;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 65;
					passThrough = 0.1;
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 65;
					passThrough = 0.1;
				};
			};
			
			hiddenSelections[] = {
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_Base",
			"A_ChestArmor",
			"A_Ghillie",
			//"A_KneesLeft",
			//"A_KneesRight",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_ODST",
			//"A_ShinArmorLeft",
			//"A_ShinArmorRight",
			"A_TacPad",
			//"A_ThighArmorLeft",
			//"A_ThighArmorRight",
			"AS_BaseLeft",
			"AS_BaseRight",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			//"AS_ODSTCQBLeft",
			//"AS_ODSTCQBRight",
			"AS_ODSTLeft",
			"AS_ODSTRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AS_SmallLeft",
			"AS_SmallRight",
			"AP_AR",
			"AP_BR",
			"AP_Canteen",
			"AP_GL",
			"AP_Knife",
			"AP_MGThigh",
			"AP_AR",
			"AP_Pack",
			"AP_Pistol",
			"AP_Rounds",
			"AP_SG",
			"AP_SMG",
			"AP_Sniper",
			"AP_Thigh",
			"AP_Frag",
			"AP_Smoke",
			"APO_AR",
			"APO_BR",
			"APO_Knife",
			"APO_SMG",
			"APO_Sniper",
			"CustomKit_Scorch"
			};
		};
};
class STB86_BH_CH_Marksman_Vest : STB86_BH_CH_Base_Vest {
		displayName = "Marksman Vest [CH]";
		class ItemInfo : VestItem
		{

			vestType = "Rebreather";
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";

			mass = 80;

			modelSides[] = { 6 };

			containerClass = "Supply250";

			
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 65;
					passThrough = 0.1;
				};
				class Legs
				{
					hitpointName = "HitLegs";
					armor = 65;
					passThrough = 0.1;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 65;
					passThrough = 0.1;
				};
				class Hands
				{
					hitpointName = "HitHands";
					armor = 65;
					passThrough = 0.1;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 65;
					passThrough = 0.1;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 65;
					passThrough = 0.1;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 65;
					passThrough = 0.1;
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 65;
					passThrough = 0.1;
				};
			};
			
			hiddenSelections[] = {
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_Base",
			"A_ChestArmor",
			"A_Ghillie",
			//"A_KneesLeft",
			//"A_KneesRight",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_ODST",
			//"A_ShinArmorLeft",
			//"A_ShinArmorRight",
			"A_TacPad",
			//"A_ThighArmorLeft",
			//"A_ThighArmorRight",
			"AS_BaseLeft",
			"AS_BaseRight",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			"AS_ODSTLeft",
			"AS_ODSTRight",
			//"AS_ODSTSniperLeft",
			//"AS_ODSTSniperRight",
			"AS_SmallLeft",
			"AS_SmallRight",
			"AP_AR",
			"AP_BR",
			"AP_Canteen",
			"AP_GL",
			"AP_Knife",
			"AP_MGThigh",
			"AP_AR",
			"AP_Pack",
			"AP_Pistol",
			"AP_Rounds",
			"AP_SG",
			"AP_SMG",
			"AP_Sniper",
			"AP_Thigh",
			"AP_Frag",
			"AP_Smoke",
			"APO_AR",
			"APO_BR",
			"APO_Knife",
			"APO_SMG",
			"APO_Sniper",
			"CustomKit_Scorch"
			};
		};
};
class STB86_BH_CH_Lead_Vest : STB86_BH_CH_Base_Vest {
		displayName = "Teamleader Vest [CH]";
		class ItemInfo : VestItem
		{

			vestType = "Rebreather";
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";

			mass = 80;

			modelSides[] = { 6 };

			containerClass = "Supply250";

			
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 65;
					passThrough = 0.1;
				};
				class Legs
				{
					hitpointName = "HitLegs";
					armor = 65;
					passThrough = 0.1;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 65;
					passThrough = 0.1;
				};
				class Hands
				{
					hitpointName = "HitHands";
					armor = 65;
					passThrough = 0.1;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 65;
					passThrough = 0.1;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 65;
					passThrough = 0.1;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 65;
					passThrough = 0.1;
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 65;
					passThrough = 0.1;
				};
			};
			
			hiddenSelections[] = {
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_Base",
			"A_ChestArmor",
			"A_Ghillie",
			//"A_KneesLeft",
			//"A_KneesRight",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_ODST",
			//"A_ShinArmorLeft",
			//"A_ShinArmorRight",
			"A_TacPad",
			//"A_ThighArmorLeft",
			//"A_ThighArmorRight",
			"AS_BaseLeft",
			"AS_BaseRight",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			//"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			"AS_ODSTLeft",
			"AS_ODSTRight",
			"AS_ODSTSniperLeft",
			//"AS_ODSTSniperRight",
			"AS_SmallLeft",
			"AS_SmallRight",
			"AP_AR",
			"AP_BR",
			"AP_Canteen",
			"AP_GL",
			"AP_Knife",
			"AP_MGThigh",
			"AP_AR",
			"AP_Pack",
			"AP_Pistol",
			"AP_Rounds",
			"AP_SG",
			"AP_SMG",
			"AP_Sniper",
			"AP_Thigh",
			"AP_Frag",
			"AP_Smoke",
			"APO_AR",
			"APO_BR",
			"APO_Knife",
			"APO_SMG",
			"APO_Sniper",
			"CustomKit_Scorch"
			};
		};
};
class STB86_BH_CH_Medic_Vest : STB86_BH_CH_Base_Vest {
		displayName = "Medic Vest [CH]";
		class ItemInfo : VestItem
		{

			vestType = "Rebreather";
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";

			mass = 80;

			modelSides[] = { 6 };

			containerClass = "Supply250";

			
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 65;
					passThrough = 0.1;
				};
				class Legs
				{
					hitpointName = "HitLegs";
					armor = 65;
					passThrough = 0.1;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 65;
					passThrough = 0.1;
				};
				class Hands
				{
					hitpointName = "HitHands";
					armor = 65;
					passThrough = 0.1;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 65;
					passThrough = 0.1;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 65;
					passThrough = 0.1;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 65;
					passThrough = 0.1;
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 65;
					passThrough = 0.1;
				};
			};
			
			hiddenSelections[] = {
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_Base",
			"A_ChestArmor",
			"A_Ghillie",
			//"A_KneesLeft",
			//"A_KneesRight",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_ODST",
			//"A_ShinArmorLeft",
			//"A_ShinArmorRight",
			"A_TacPad",
			//"A_ThighArmorLeft",
			//"A_ThighArmorRight",
			"AS_BaseLeft",
			"AS_BaseRight",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			//"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			"AS_ODSTLeft",
			//"AS_ODSTRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AS_SmallLeft",
			"AS_SmallRight",
			"AP_AR",
			"AP_BR",
			"AP_Canteen",
			"AP_GL",
			"AP_Knife",
			"AP_MGThigh",
			"AP_AR",
			"AP_Pack",
			"AP_Pistol",
			"AP_Rounds",
			"AP_SG",
			"AP_SMG",
			"AP_Sniper",
			"AP_Thigh",
			"AP_Frag",
			"AP_Smoke",
			"APO_AR",
			"APO_BR",
			"APO_Knife",
			"APO_SMG",
			"APO_Sniper",
			"CustomKit_Scorch"
			};
		};
};
class STB86_BH_CH_Autorifleman_Vest : STB86_BH_CH_Base_Vest {
		displayName = "Autorifleman Vest [CH]";
		class ItemInfo : VestItem
		{

			vestType = "Rebreather";
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";

			mass = 80;

			modelSides[] = { 6 };

			containerClass = "Supply250";

			
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 65;
					passThrough = 0.1;
				};
				class Legs
				{
					hitpointName = "HitLegs";
					armor = 65;
					passThrough = 0.1;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 65;
					passThrough = 0.1;
				};
				class Hands
				{
					hitpointName = "HitHands";
					armor = 65;
					passThrough = 0.1;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 65;
					passThrough = 0.1;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 65;
					passThrough = 0.1;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 65;
					passThrough = 0.1;
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 65;
					passThrough = 0.1;
				};
			};
			
			hiddenSelections[] = {
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_Base",
			"A_ChestArmor",
			"A_Ghillie",
			//"A_KneesLeft",
			//"A_KneesRight",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_ODST",
			//"A_ShinArmorLeft",
			//"A_ShinArmorRight",
			"A_TacPad",
			//"A_ThighArmorLeft",
			//"A_ThighArmorRight",
			"AS_BaseLeft",
			"AS_BaseRight",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			//"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			"AS_ODSTLeft",
			//"AS_ODSTRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AS_SmallLeft",
			"AS_SmallRight",
			//"AP_AR",
			"AP_BR",
			"AP_Canteen",
			"AP_GL",
			"AP_Knife",
			"AP_MGThigh",
			"AP_AR",
			"AP_Pack",
			"AP_Pistol",
			"AP_Rounds",
			"AP_SG",
			"AP_SMG",
			"AP_Sniper",
			"AP_Thigh",
			"AP_Frag",
			"AP_Smoke",
			"APO_AR",
			"APO_BR",
			"APO_Knife",
			"APO_SMG",
			"APO_Sniper",
			"CustomKit_Scorch"
			};
		};
};
class STB86_BH_CH_UpArmor_Vest : STB86_BH_CH_Base_Vest {
		displayName = "Up-Armored Vest [CH]";
		hiddenSelectionsTextures[] =
		{
			"STB86_Factions\Black_hand\The_Chosen\textures\Blackhand_Armor.paa", // Vest
			"STB86_Factions\Black_hand\The_Chosen\textures\Blackhand_Armor.paa", // Vest 2
			"STB86_Factions\Black_hand\The_Chosen\textures\Blackhand_Legs.paa", //Legs
			"STB86_Factions\Black_hand\The_Chosen\textures\Blackhand_Armor.paa", //No clue lol
			"STB86_Factions\Black_hand\The_Chosen\textures\Blackhand_Armor.paa" //Armor
		};
		class ItemInfo : VestItem
		{

			vestType = "Rebreather";
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";

			mass = 80;

			modelSides[] = { 6 };

			containerClass = "Supply250";

			
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 65;
					passThrough = 0.1;
				};
				class Legs
				{
					hitpointName = "HitLegs";
					armor = 65;
					passThrough = 0.1;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 65;
					passThrough = 0.1;
				};
				class Hands
				{
					hitpointName = "HitHands";
					armor = 65;
					passThrough = 0.1;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 65;
					passThrough = 0.1;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 65;
					passThrough = 0.1;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 65;
					passThrough = 0.1;
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 65;
					passThrough = 0.1;
				};
			};
			
			hiddenSelections[] = {
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			//"A_Base",
			//"A_ChestArmor",
			"A_Ghillie",
			"A_KneesLeft",
			"A_KneesRight",
			//"A_KneesMarLeft",
			//"A_KneesMarRight",
			//"A_ODST",
			//"A_ShinArmorLeft",
			//"A_ShinArmorRight",
			"A_TacPad",
			//"A_ThighArmorLeft",
			//"A_ThighArmorRight",
			"AS_BaseLeft",
			"AS_BaseRight",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			//"AS_ODSTCQBLeft",
			//"AS_ODSTCQBRight",
			"AS_ODSTLeft",
			"AS_ODSTRight",
			//"AS_ODSTSniperLeft",
			//"AS_ODSTSniperRight",
			"AS_SmallLeft",
			"AS_SmallRight",
			"AP_AR",
			"AP_BR",
			"AP_Canteen",
			"AP_GL",
			"AP_Knife",
			"AP_MGThigh",
			"AP_AR",
			"AP_Pack",
			"AP_Pistol",
			"AP_Rounds",
			"AP_SG",
			"AP_SMG",
			"AP_Sniper",
			"AP_Thigh",
			"AP_Frag",
			"AP_Smoke",
			"APO_AR",
			"APO_BR",
			"APO_Knife",
			"APO_SMG",
			"APO_Sniper",
			"CustomKit_Scorch"
			};
		};
};
/* UNIFORM */
class UniformItem;
class U_O_V_Soldier_Viper_F;
class STB86_BH_CH_Battledress : U_O_V_Soldier_Viper_F {
		author = AUTHOR;
		dlc = DLC;
		displayName = "Combat Uniform [CH]";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"STB86_Factions\Black_hand\The_Chosen\textures\Blackhand_Uniform.paa"};
		class ItemInfo : UniformItem{
			containerClass = "Supply80";
			mass = 40;
			uniformModel = "";
			uniformClass="STB86_BH_CH_Rifleman";
		};
};
/*
Helmet
*/
class H_HelmetO_ViperSP_hex_F;
class STB86_BH_CH_Helmet : H_HelmetO_ViperSP_hex_F {
	scope=2;
	author = AUTHOR;
	dlc = DLC;
	displayName = "Combat Helmet [CH]";
	hiddenSelectionsTextures[] = {
		"STB86_Factions\Black_hand\The_Chosen\textures\Blackhand_Helmet.paa"
	};
};
class H_PilotHelmetHeli_B;
class STB86_BH_CH_PilotHelmetHeli : H_PilotHelmetHeli_B {
	scope=2;
	author = AUTHOR;
	dlc = DLC;
	displayName = "Heli Pilot Helmet [CH]";
};