//**********************************************
//*****        Mod information             *****
//**********************************************

class CfgPatches
{
	class LuciProjects
	{
		//Meta information
		name = "LuciProjects";
		author = "Luci";
		//unkown
		requiredVersion = 0.1;
		//unknown
		units[] = {};
		//unknown
		weapons[] = {};
		//unknown
		requiredAddons[] = {
			"OPTRE_Core",
			"OPTRE_UNSC_Units"
		};
	};
};
class CfgVehicles
{	
	class OPTRE_UNSC_Army_Soldier_DressGray;
	class B_Soldier_base_F;
	
	 class Test_Bot_Uniform : B_Soldier_base_F {
        scope = 2;
        author = "Luci";
		picture = "STB86_Auxiliary\LuciProjects\Icons\Luci_CA.paa";
        model = "STB86_Auxiliary\LuciProjects\TESTING\leg.p3d";
        hiddenSelections[] = {};
        hiddenSelectionsTextures[] = {};
        hiddenSelectionsMaterials[] = {};
	};
   class STB86_Dress_Soldier: OPTRE_UNSC_Army_Soldier_DressGray {	
		dlc = "86th";
		author = "Luci";
		UniformClass = "STB86Dress";
		hiddenSelections[]=
		{ 
			"camo_1", 
			//"insignia", 
			"clan",
			//"ODST"
		};
		hiddenSelectionsTextures[]=
		{ 
			"STB86_Auxiliary\LuciProjects\Textures\86th_dress_uniform_odst_CO.paa",
			"STB86_Auxiliary\LuciProjects\Textures\86th_dress_uniform_odst_CO.paa"
		};
	};
};
class CfgWeapons
{
	class OPTRE_UNSC_Dress_Uniform_gray;
	class H_Beret_02;
	class H_Beret_Colonel;
	class Binocular;
	class ItemInfo;
	class UniformItem;
	class Uniform_Base;
	
	class NVGoggles: Binocular {
		class ItemInfo;
	};
	class STB86_Ears: NVGoggles {
		displayName = "[86th] Ears";
		author = "Luci";
		picture = "STB86_Auxiliary\LuciProjects\Icons\Luci_CA.paa";
		model = "STB86_Auxiliary\LuciProjects\P3Ds\Ears.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"STB86_Auxiliary\LuciProjects\Textures\Ears_co.paa"
		};
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
		thermalMode[]={0};
		modelOptics = "";
		useModelOptics = 0;
		/* Ace Bullshit */
		ACE_nightVision_grain=0; // How Grainy
		ACE_nightVision_blur=0; // How Blurry
		ACE_nightVision_radBlur=0; // How Blurry While Turning
		ACE_nightvision_border=""; // Border PAA
		ACE_nightvision_bluRadius=0; // Might be blur intensity? Something? I don't know
		ACE_nightvision_generation=4; // What gen of night vision is it?
		ACE_nightvision_eyeCups=0; // For like binos and shit
		ACE_nightvision_hideHex = 1; // Penis?

		class ItemInfo : ItemInfo
		{
			UiPicture = "";
			hiddenSelections[]=
			{
				"camo"
			};
				type = 616;
				hmdType = 0;
				uniformModel = "STB86_Auxiliary\LuciProjects\P3Ds\Ears.p3d";
				modelOff = "STB86_Auxiliary\LuciProjects\P3Ds\Ears.p3d";
				mass = 4;
			};
	};
	class STB86_Senko_Ears: STB86_Ears {
		displayName = "[86th] Senko Ears";
		hiddenSelectionsTextures[]=
		{
			"STB86_Auxiliary\LuciProjects\Textures\AJ_Ears_co.paa"
		};
	};
	class STB86_Holo_Ears: STB86_Ears {
		displayName = "[86th] Kawaii Ears -w-";
		ACE_nightvision_border = "STB86_Auxiliary\LuciProjects\data\Holo.paa";
	};
	class STB86_Beret : H_Beret_02 {
		author = "Luci";
		Scope = 2;
		displayName = "[86th] Beret";

		hiddenSelectionsTextures[] =
		{
			"STB86_Auxiliary\LuciProjects\Textures\86thSTB_beret02_co.paa"
		};
	};
	class BH_Beret : H_Beret_Colonel {
		author = "Luci";
		Scope = 2;
		picture = "STB86_Auxiliary\LuciProjects\Icons\Luci_CA.paa";
		displayName = "BH Beret";

		hiddenSelectionsTextures[] =
		{
			"STB86_Auxiliary\LuciProjects\Textures\BlackHand_beret02_co.paa"
		};
	};
	class STB86_Ghost_Mask: NVGoggles {
		displayName = "[86th] Ghost";
		author = "Luci";
		Scope = 1;
		picture = "STB86_Auxiliary\LuciProjects\Icons\Luci_CA.paa";
		ScopeArsenal = 1;
		model = "STB86_Auxiliary\LuciProjects\P3Ds\ghost.p3d";
		hiddenSelections[]=
		{
		};
		hiddenSelectionsTextures[]=
		{
		};
		class ItemInfo : ItemInfo
		{
			hiddenSelections[]=
		{
			"camo"
		};
			type = 616;
			hmdType = 0;
			uniformModel = "STB86_Auxiliary\LuciProjects\P3Ds\ghost.p3d";
			modelOff = "STB86_Auxiliary\LuciProjects\P3Ds\ghost.p3d";
			mass = 4;
		};
	};
	class Test_Bot_Uniform : Uniform_Base {
        scope = 2;
        author = "Luci";
		dlc="LuciProjects";
        displayName = "Test_Bot";
		picture = "STB86_Auxiliary\LuciProjects\Icons\Luci_CA.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="Test_Bot_Uniform";
			containerClass="Supply40";
			mass=1;
			allowedSlots[]={"701","801","901"};
			armor=0;
			uniformType="Neopren";
		};
    };
};
class CfgGlasses
{
	class None;
	class G_Katana :  None {
		author = "Luci";
		_generalMacro="86th_katana";
		Scope = 2;
		mass = 4;
		ScopeArsenal = 2;
		displayname = "Katana";
		model = "STB86_Auxiliary\LuciProjects\P3Ds\Sword.p3d";
		picture = "STB86_Auxiliary\LuciProjects\Icons\Luci_CA.paa";
		identityTypes[] =
		{
			"NoGlasses",0,"G_NATO_default",0,"G_NATO_casual",0,"G_NATO_pilot",0,"G_NATO_recon",0,"G_NATO_SF",0,"G_NATO_sniper",0,
			"G_NATO_diver",0,"G_IRAN_default",0,"G_IRAN_diver",0,"G_GUERIL_default",00,"G_HAF_default",0,"G_CIVIL_female",0,"G_CIVIL_male",0
		};
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"STB86_Auxiliary\LuciProjects\Textures\Sword_Text.paa"
		};
	};
	class G_cape :  None {
		author = "Luci";
		_generalMacro="86th_cape";
		Scope = 2;
		mass = 4;
		ScopeArsenal = 2;
		displayname = "cape";
		model = "STB86_Auxiliary\LuciProjects\P3Ds\cape.p3d";
		picture = "STB86_Auxiliary\LuciProjects\Icons\Luci_CA.paa";
		identityTypes[] =
		{
			"NoGlasses",0,"G_NATO_default",0,"G_NATO_casual",0,"G_NATO_pilot",0,"G_NATO_recon",0,"G_NATO_SF",0,"G_NATO_sniper",0,
			"G_NATO_diver",0,"G_IRAN_default",0,"G_IRAN_diver",0,"G_GUERIL_default",00,"G_HAF_default",0,"G_CIVIL_female",0,"G_CIVIL_male",0
		};
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"STB86_Auxiliary\LuciProjects\Textures\cape_co.paa"
		};
	};
	class G_cape_v2	:  None
	{
		author = "Luci";
		_generalMacro="86th_cape_v2";
		Scope = 2;
		mass = 4;
		ScopeArsenal = 2;
		displayname = "capev2";
		model = "STB86_Auxiliary\LuciProjects\P3Ds\cape_v2.p3d";
		picture = "STB86_Auxiliary\LuciProjects\Icons\Luci_CA.paa";
		identityTypes[] =
		{
			"NoGlasses",0,"G_NATO_default",0,"G_NATO_casual",0,"G_NATO_pilot",0,"G_NATO_recon",0,"G_NATO_SF",0,"G_NATO_sniper",0,
			"G_NATO_diver",0,"G_IRAN_default",0,"G_IRAN_diver",0,"G_GUERIL_default",00,"G_HAF_default",0,"G_CIVIL_female",0,"G_CIVIL_male",0
		};
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"STB86_Auxiliary\LuciProjects\Textures\cape_v2_co.paa"
		};
	};
	class G_Katana_v2 :  None
	{
		author = "Luci";
		_generalMacro="86th_katana_v2";
		Scope = 2;
		mass = 4;
		ScopeArsenal = 2;
		displayname = "Katana_v2";
		model = "STB86_Auxiliary\LuciProjects\P3Ds\katana.p3d";
		picture = "STB86_Auxiliary\LuciProjects\Icons\Luci_CA.paa";
		identityTypes[] =
		{
			"NoGlasses",0,"G_NATO_default",0,"G_NATO_casual",0,"G_NATO_pilot",0,"G_NATO_recon",0,"G_NATO_SF",0,"G_NATO_sniper",0,
			"G_NATO_diver",0,"G_IRAN_default",0,"G_IRAN_diver",0,"G_GUERIL_default",00,"G_HAF_default",0,"G_CIVIL_female",0,"G_CIVIL_male",0
		};
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"STB86_Auxiliary\LuciProjects\Textures\Katana_co.paa"
		};
	};
	class G_Pauldron : None {
		author = "Luci";
		_generalMacro="86th_cape_v2";
		Scope = 2;
		mass = 4;
		ScopeArsenal = 2;
		displayname = "Vandal SL Pauldron";
		model = "STB86_Auxiliary\LuciProjects\P3Ds\SL_Pauldron.p3d";
		picture = "STB86_Auxiliary\LuciProjects\Icons\Luci_CA.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"STB86_Auxiliary\LuciProjects\Textures\Vandal_SL_Pauldron.paa"
		};
		identityTypes[] = 
		{
			"NoGlasses",0,"G_NATO_default",0,"G_NATO_casual",0,"G_NATO_pilot",0,"G_NATO_recon",0,"G_NATO_SF",0,"G_NATO_sniper",0,
			"G_NATO_diver",0,"G_IRAN_default",0,"G_IRAN_diver",0,"G_GUERIL_default",00,"G_HAF_default",00,"G_CIVIL_female",0,"G_CIVIL_male",0
		};
		class ItemInfo
		{
			hiddenSelections[]=
			{
				"camo"
			};
		};	
	};
	class G_Misfit_Pauldron : G_Pauldron {
		author = "Luci";
		_generalMacro="86th_cape_v2";
		Scope = 2;
		mass = 4;
		ScopeArsenal = 2;
		displayname = "Misfit SL Pauldron";
		model = "STB86_Auxiliary\LuciProjects\P3Ds\SL_Pauldron.p3d";
		picture = "STB86_Auxiliary\LuciProjects\Icons\Luci_CA.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"STB86_Auxiliary\LuciProjects\Textures\Misfit_SL_Pauldron.paa"
		};
	};
};
class CfgFaces
{	
	class Man;
	class Custom;
	class Default;
	
	class Man_A3: Default
	{
		class Test_Bot: Default
		{
			author="LUCI";
			dlc="LuciProjects";
			name="Test_bot";
			displayname="Test_Bot_face";
			texture="-";
			textureHL="-";
			head="TestBothead";
			identityTypes[]=
			{
				"Test_Bot"
			};
		};
		class Nightstalker : Default
		{
			author="LUCI";
			displayName = "Nightstalker";
			dlc="LuciProjects";
			name="Nightstalker";
			head="Nightstalker";
			texture="STB86_Auxiliary\LuciProjects\Textures\Nightstalker_co.paa"; 
			identityTypes[] = 
			{
				"Nightstalker"
			};
		};
	};
};
class CfgHeads
{
	class Default_A3;
	class TestBothead: Default_A3
	{
		model="STB86_Auxiliary\LuciProjects\TESTING\Face.p3d";
		selectionHeadWound="injury_head";
		selectionPersonality="personality";
	};
	class Nightstalker: Default_A3
	{
		model="STB86_Auxiliary\LuciProjects\P3Ds\Nightstalker.p3d";
		selectionHeadWound="injury_head";
		selectionPersonality="personality";
	};
};
class CfgIdentities
{
	class Test_Bot
	{
		name="TestBot";
		face="Test_Bot";
		speaker="-";
		pitch=1;
		glasses="none";
	};
	class Nightstalker
	{
		name="Nightstalker";
		face="Nightstalker";
		speaker="-";
		pitch=1;
		glasses="none";
	};
};