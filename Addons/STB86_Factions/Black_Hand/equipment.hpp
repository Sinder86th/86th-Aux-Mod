class UniformItem;
class U_B_CTRG_3;
class OPTRE_CMA_Helmet;
class V_Press_F;
class V_PlateCarrierSpec_blk;
class OPTRE_CMA_Helmet_chops;
class H_Beret_Colonel;

class STB86_BH_Battledress : U_B_CTRG_3 {
	author = AUTHOR;
	dlc = DLC;
	displayName = "Uniform [BH]";
	hiddenSelectionsTextures[] = {"STB86_Factions\Black_hand\textures\Blackhand_Uniform.paa"};
	class ItemInfo : UniformItem{
		containerClass = "Supply80";
		mass = 40;
		uniformModel = "-";
		uniformClass="STB86_BH_Rifleman";
	};
};

class STB86_BH_Helmet : OPTRE_CMA_Helmet {
	author = AUTHOR;
	dlc = DLC;
	displayName = "Combat Helmet [BH]";
	hiddenSelectionsTextures[] = {"STB86_Factions\Black_hand\textures\Blackhand_Helmet.paa"};
};

class STB86_BH_Medic_Vest : V_Press_F {
	author = AUTHOR;
	dlc = DLC;
	displayName="Medic Vest [BH]";
	hiddenSelectionsTextures[] = {"STB86_Factions\Black_Hand\textures\Square.paa"};
};

class STB86_BH_GL_Vest : V_PlateCarrierSpec_blk {
	author = AUTHOR;
	dlc = DLC;
	displayName="GL Rig [BH]";
	hiddenSelectionsTextures[] = {"STB86_Factions\Black_Hand\textures\Square.paa"};

};

class STB86_BH_Crew_Helmet : OPTRE_CMA_Helmet_chops {
	author = AUTHOR;
	dlc = DLC;
	displayName = "Crew Helmet [BH]";
	hiddenSelectionsTextures[] = {"STB86_Factions\Black_Hand\textures\Square.paa"};

};


class STB86_BH_Beret : H_Beret_Colonel {
	author = "Luci";
	scope = 2;
	scopeArsenal = 2;
	dlc = DLC;
	picture = "\STB86_Auxiliary\LuciProjects\Icons\Luci_CA.paa";
	displayName = "Beret [BH]";
	hiddenSelectionsTextures[] =
	{
		"STB86_Factions\Black_Hand\textures\Blackhand_Beret.paa"
	};
};