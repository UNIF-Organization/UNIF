class CfgPatches 
{ 
    class UNIF_UN_Faction_CUP_Gear
    { 
       units[] =  // UNITTS are added here so they show up on zeus
        {
            
        }; 
        weapons[] = 
        {
        	"UNIF_Headgear_Beret_1",
        	"UNIF_Headgear_Beret_2",
        	"UNIF_Headgear_BoonieHat",
        	"UNIF_Headgear_CVCHelmet",
        	"UNIF_Headgear_PatrolCap",
        	"UNIF_Headgear_SPH4Helmet1",
        	"UNIF_Headgear_SPH4Helmet2",
        	"UNIF_Headgear_SPH4Helmet3",
        	"UNIF_Headgear_SSh68Helmet1",
        	"UNIF_Headgear_SSh68Helmet2",
        	"UNIF_Headgear_SSh68Helmet3",
        	"UNIF_Headgear_M1Helmet",
        	"UNIF_Headgear_PASGT",
        	"UNIF_Headgear_MarshallCap",
        	"UNIF_Headgear_Cap",
        	"UNIF_Headgear_Cap_Back",
        	"UNIF_Headgear_MarshallCap_Back",
        	"UNIF_Headgear_Altyn",
        	"UNIF_Headgear_Altyn_Goggles",
        	"UNIF_Headgear_Altyn_ShieldDown",
        	"UNIF_Headgear_Altyn_ShieldUp",
        	"UNIF_Headgear_6B47_Goggle_Up",
        	"UNIF_Headgear_6B47_Goggle_Down",
        	"UNIF_Headgear_6B47",
        	"UNIF_Headgear_SP_M88Helmet_UN1",
        	"UNIF_Headgear_SP_M88Helmet_UN2",
        	"UNIF_Headgear_SP_M88PSMHelmet_UN1",
        	"UNIF_Headgear_SP_M88PSMHelmet_UN2",
        	"UNIF_Headgear_SP_M96Helmet_UN1",
        	"UNIF_Headgear_SP_M96Helmet_UN2",
        	"UNIF_Headgear_SP_Mk7Helmet_UN1",
        	"UNIF_Headgear_SP_Mk7Helmet_UN2",
        	"UNIF_Vest_RAV_Operator_UN",
        	"UNIF_Vest_RAV_Breacher_UN",
        	"UNIF_Vest_RAV_MG_UN",
        	"UNIF_Vest_RAV_Light_UN",
        	"UNIF_UN_UniformItem_C_Uni_1",
        	"UNIF_UN_UniformItem_C_Uni_2",
        	"UNIF_Headgear_VSM_Mich2000_OGA",
        	"UNIF_Headgear_VSM_Mich2000_2_OGA",
        }; 
        magazines[]=
        {
        };
        requiredVersion = 0.1; 
        requiredAddons[] = {}; 
    }; 
}; 

class CfgVehicles 
{   
    class C_Marshal_F;
    class UNIF_Faction_UN_C_Char_1: C_Marshal_F 
    {
        author = "Sawtes"; 
        _generalMacro = "B_soldier_F"; 
        scope = 1; 
        displayName = ""; 
        modelsides[] = {3,2,1,0};
        uniformClass = "UNIF_UN_UniformItem_C_Uni_1";
        hiddenSelectionsTextures[] = 
        { 
            "\UNIF_UN_Faction_CUP_Gear\textures\Marshall\UN_PoloShirt_khaki.paa"
        };  
    };
    class UNIF_Faction_UN_C_Char_2: UNIF_Faction_UN_C_Char_1
    {
        displayName = "";
        uniformClass = "UNIF_UN_UniformItem_C_Uni_2";
        hiddenSelectionsTextures[] =
        {
            "\UNIF_UN_Faction_CUP_Gear\textures\Marshall\UN_PoloShirt_jeans.paa"
        };
    };

  	 //************************************************************************************************************************************************************************************************
    //*****           Soldier  Units                *********************************************************************************************************************************************************
    //************************************************************************************************************************************************************************************************

    //************************************************************************************************************************************************************************************************
    //*****           Uniform  Units                *********************************************************************************************************************************************************
    //************************************************************************************************************************************************************************************************

    //************************************************************************************************************************************************************************************************
    //*****             Objects              *********************************************************************************************************************************************************
    //************************************************************************************************************************************************************************************************
    
	//************************************************************************************************************************************************************************************************
    //*****             Vehicles             *********************************************************************************************************************************************************
    //************************************************************************************************************************************************************************************************
 
};

class cfgWeapons 
{ 
	class ItemCore; 
    class VestItem;
	class Vest_Camo_Base: ItemCore
	{
		class ItemInfo;
	};
    class V_Press_F: Vest_Camo_Base
    {
        class ItemInfo;
    };
    class UniformItem; 
    class Uniform_Base: ItemCore 
    { 
        class ItemInfo; 
    }; 

    //********************************************************************************************************************************************************************************************
    //*****            Uniforms              *****************************************************************************************************************************************************
    //********************************************************************************************************************************************************************************************
    
    class U_Marshal;
    class UNIF_UN_UniformItem_C_Uni_1: U_Marshal
    { 
        scope = 2;
        scopeArsenal = 2; 
        displayName = "[UNIF] Humanitarian Clothes (UN/Khaki)";
        picture = "\UNIF_UN_Faction_CUP_Gear\UI\UN_Item_UI.paa";
        class ItemInfo : UniformItem { 
            uniformModel="-";
            uniformClass = "UNIF_Faction_UN_C_Char_1";
            containerClass = "Supply60"; 
            mass = 30; 
        };
    };
    class UNIF_UN_UniformItem_C_Uni_2: UNIF_UN_UniformItem_C_Uni_1
    { 
        scope = 2;
        scopeArsenal = 2; 
        displayName = "[UNIF] Humanitarian Clothes (UN/Jeans)";
        picture = "\UNIF_UN_Faction_CUP_Gear\UI\UN_Item_UI.paa"; 
        class ItemInfo : UniformItem { 
            uniformModel="-";
            uniformClass = "UNIF_Faction_UN_C_Char_2";
            containerClass = "Supply60"; 
            mass = 30; 
        };
    };


    //************************************************************************************************************************************************************************************************
    //*****             Helmets               *********************************************************************************************************************************************************
    //************************************************************************************************************************************************************************************************
    
    class SP_Beret_UN1;
    class SP_Beret_UN2;

    class UNIF_Headgear_Beret_1: SP_Beret_UN1
    {
        displayName = "[UNIF] Beret (UN Patch)";
        picture = "\UNIF_UN_Faction_CUP_Gear\UI\UN_Item_UI.paa";
    };

    class UNIF_Headgear_Beret_2: SP_Beret_UN2
    {
        displayName = "[UNIF] Beret (UN Logo)";
        picture = "\UNIF_UN_Faction_CUP_Gear\UI\UN_Item_UI.paa";
    };

    class SP_BoonieHat_UN;

    class UNIF_Headgear_BoonieHat: SP_BoonieHat_UN
    {
        displayName = "[UNIF] Boonie Hat (UN)";
        picture = "\UNIF_UN_Faction_CUP_Gear\UI\UN_Item_UI.paa";
    };

    class SP_CVCHelmet_UN;

    class UNIF_Headgear_CVCHelmet: SP_CVCHelmet_UN
    {
        displayName = "[UNIF] CVC Helmet (UN)";
        picture = "\UNIF_UN_Faction_CUP_Gear\UI\UN_Item_UI.paa";
    };

    class SP_PatrolCap_UN;

    class UNIF_Headgear_PatrolCap: SP_PatrolCap_UN
    {
        displayName = "[UNIF] Patrol Cap (UN)";
        picture = "\UNIF_UN_Faction_CUP_Gear\UI\UN_Item_UI.paa";
    };

    class SP_SPH4Helmet_UN1;
    class SP_SPH4Helmet_UN2;
    class SP_SPH4Helmet_UN3;
    ///H_CrewHelmetHeli_O
    class UNIF_Headgear_SPH4Helmet1: SP_SPH4Helmet_UN1
    {
        displayName = "[UNIF] SPH4 Helmet Blue (UN)";
        picture = "\UNIF_UN_Faction_CUP_Gear\UI\UN_Item_UI.paa";
        ace_hearing_lowerVolume = 0.6;
        ace_hearing_protection = 0.85;
    };

    class UNIF_Headgear_SPH4Helmet2: SP_SPH4Helmet_UN2
    {
        displayName = "[UNIF] SPH4 Helmet Mix (UN)";
        picture = "\UNIF_UN_Faction_CUP_Gear\UI\UN_Item_UI.paa";
        ace_hearing_lowerVolume = 0.6;
        ace_hearing_protection = 0.85;
    };

    class UNIF_Headgear_SPH4Helmet3: SP_SPH4Helmet_UN3
    {
        displayName = "[UNIF] SPH4 Helmet White (UN)";
        picture = "\UNIF_UN_Faction_CUP_Gear\UI\UN_Item_UI.paa";
        ace_hearing_lowerVolume = 0.6;
        ace_hearing_protection = 0.85;
    };

    class SP_SSh68Helmet_UN1;
    class SP_SSh68NetHelmet_UN1;
    class SP_SSh68CoverHelmet_UN1;

    class UNIF_Headgear_SSh68Helmet1: SP_SSh68Helmet_UN1
    {
        displayName = "[UNIF] SSh-60 (UN)";
        picture = "\UNIF_UN_Faction_CUP_Gear\UI\UN_Item_UI.paa";
    };

    class UNIF_Headgear_SSh68Helmet2: SP_SSh68NetHelmet_UN1
    {
        displayName = "[UNIF] SSh-60 Net (UN)";
        picture = "\UNIF_UN_Faction_CUP_Gear\UI\UN_Item_UI.paa";
    };

    class UNIF_Headgear_SSh68Helmet3: SP_SSh68CoverHelmet_UN1
    {
        displayName = "[UNIF] SSh-60 Cover (UN)";
        picture = "\UNIF_UN_Faction_CUP_Gear\UI\UN_Item_UI.paa";
    };

    class SP_M1Helmet_UN;

    class UNIF_Headgear_M1Helmet: SP_M1Helmet_UN
    {
        displayName = "[UNIF] M1 Helmet (UN)";
        picture = "\UNIF_UN_Faction_CUP_Gear\UI\UN_Item_UI.paa";
    };

    class H_Cap_marshal;
    class CUP_H_PMC_Cap_Grey;
    class CUP_H_PMC_Cap_Back_EP_Grey;
    class CUP_H_PMC_Cap_Back_Grey;

    class UNIF_Headgear_MarshallCap: H_Cap_marshal
    {
        displayName = "[UNIF] Cap w/DEF (UN)";
        picture = "\UNIF_UN_Faction_CUP_Gear\UI\UN_Item_UI.paa";
        hiddenSelectionsTextures[] = 
        {
        	"\UNIF_UN_Faction_CUP_Gear\textures\MarshallCap\UN_MarshallCap.paa"
    	};
    };

    class UNIF_Headgear_Cap: CUP_H_PMC_Cap_Grey
    {
        displayName = "[UNIF] Cap (UN)";
        picture = "\UNIF_UN_Faction_CUP_Gear\UI\UN_Item_UI.paa";
        hiddenSelectionsTextures[] = 
        {
        	"\UNIF_UN_Faction_CUP_Gear\textures\MarshallCap\UN_MarshallCap.paa"
    	};
    };

    class UNIF_Headgear_Cap_Back: CUP_H_PMC_Cap_Back_Grey
    {
        displayName = "[UNIF] Cap Backwards (UN)";
        picture = "\UNIF_UN_Faction_CUP_Gear\UI\UN_Item_UI.paa";
        hiddenSelectionsTextures[] = 
        {
        	"\UNIF_UN_Faction_CUP_Gear\textures\MarshallCap\UN_MarshallCap.paa"
    	};
    };

    class UNIF_Headgear_MarshallCap_Back: CUP_H_PMC_Cap_Back_EP_Grey
    {
        displayName = "[UNIF] Cap Backwards w/DEF (UN)";
        picture = "\UNIF_UN_Faction_CUP_Gear\UI\UN_Item_UI.paa";
        hiddenSelectionsTextures[] = 
        {
        	"\UNIF_UN_Faction_CUP_Gear\textures\MarshallCap\UN_MarshallCap.paa"
    	};
    };

    class CUP_H_RUS_Altyn_black;
    class CUP_H_RUS_Altyn_Shield_Down_black;
    class CUP_H_RUS_Altyn_Shield_Up_black;
    class CUP_H_RUS_Altyn_Goggles_black;

    class UNIF_Headgear_Altyn: CUP_H_RUS_Altyn_black
    {
        displayName = "[UNIF] Altyn Combat Helmet (UN)";
        picture = "\UNIF_UN_Faction_CUP_Gear\UI\UN_Item_UI.paa";
        hiddenSelectionsTextures[] = 
        {
        	"\UNIF_UN_Faction_CUP_Gear\textures\Altyn\UN_Altyn.paa",
        	"cup\creatures\people\military\cup_creatures_people_military_russia\data\altyn_stripes_co.paa"
    	};
    };

    class UNIF_Headgear_Altyn_Goggles: CUP_H_RUS_Altyn_Goggles_black
    {
        displayName = "[UNIF] Altyn Combat Helmet w/Goggles (UN)";
        picture = "\UNIF_UN_Faction_CUP_Gear\UI\UN_Item_UI.paa";
        hiddenSelectionsTextures[] = 
        {
        	"\UNIF_UN_Faction_CUP_Gear\textures\Altyn\UN_Altyn.paa",
        	"cup\creatures\people\military\cup_creatures_people_military_russia\data\altyn_stripes_co.paa"
    	};
    };

    class UNIF_Headgear_Altyn_ShieldDown: CUP_H_RUS_Altyn_Shield_Down_black
    {
        displayName = "[UNIF] Altyn Combat Helmet Shield Down (UN)";
        picture = "\UNIF_UN_Faction_CUP_Gear\UI\UN_Item_UI.paa";
        hiddenSelectionsTextures[] = 
        {
        	"\UNIF_UN_Faction_CUP_Gear\textures\Altyn\UN_Altyn.paa",
        	"cup\creatures\people\military\cup_creatures_people_military_russia\data\altyn_stripes_co.paa"
    	};
    };

    class UNIF_Headgear_Altyn_ShieldUp: CUP_H_RUS_Altyn_Shield_Up_black
    {
        displayName = "[UNIF] Altyn Combat Helmet Shield Up (UN)";
        picture = "\UNIF_UN_Faction_CUP_Gear\UI\UN_Item_UI.paa";
        hiddenSelectionsTextures[] = 
        {
        	"\UNIF_UN_Faction_CUP_Gear\textures\Altyn\UN_Altyn.paa",
        	"cup\creatures\people\military\cup_creatures_people_military_russia\data\altyn_stripes_co.paa"
    	};
    };

    class CUP_H_RUS_6B47_NV_6M21_Winter;
    class CUP_H_RUS_6B47_NV_6M21_6B34D_Winter;
    class CUP_H_RUS_6B47_NV_6M21_6B34U_Winter;

    class UNIF_Headgear_6B47_Goggle_Up: CUP_H_RUS_6B47_NV_6M21_6B34U_Winter
    {
        displayName = "[UNIF] 6B47 Helmet w/Goggles Up (UN)";
        picture = "\UNIF_UN_Faction_CUP_Gear\UI\UN_Item_UI.paa";
        hiddenSelectionsTextures[] = 
        {
        	"\UNIF_UN_Faction_CUP_Gear\textures\6b47\UN_6b47.paa",
        	"CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Headgear\Data\GSSH_ESS_s_CO.paa",
        	"CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Headgear\Data\GSSH_ESS_s_CO.paa"
    	};
    };

    class UNIF_Headgear_6B47_Goggle_Down: CUP_H_RUS_6B47_NV_6M21_6B34D_Winter
    {
        displayName = "[UNIF] 6B47 Helmet w/Goggles Down (UN)";
        picture = "\UNIF_UN_Faction_CUP_Gear\UI\UN_Item_UI.paa";
        hiddenSelectionsTextures[] = 
        {
        	"\UNIF_UN_Faction_CUP_Gear\textures\6b47\UN_6b47.paa",
        	"CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Headgear\Data\GSSH_ESS_s_CO.paa",
        	"CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Headgear\Data\GSSH_ESS_s_CO.paa"
    	};
    };

    class UNIF_Headgear_6B47: CUP_H_RUS_6B47_NV_6M21_Winter
    {
        displayName = "[UNIF] 6B47 Helmet (UN)";
        picture = "\UNIF_UN_Faction_CUP_Gear\UI\UN_Item_UI.paa";
        hiddenSelectionsTextures[] = 
        {
        	"\UNIF_UN_Faction_CUP_Gear\textures\6b47\UN_6b47.paa",
        	"CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Headgear\Data\GSSH_ESS_s_CO.paa",
    	};
    };

    class SP_M88Helmet_UN1;
    class SP_M88Helmet_UN2;

    class UNIF_Headgear_SP_M88Helmet_UN1: SP_M88Helmet_UN1
    {
        displayName = "[UNIF] M88 Helmet Cover (UN)";
        picture = "\UNIF_UN_Faction_CUP_Gear\UI\UN_Item_UI.paa";
    };

    class UNIF_Headgear_SP_M88Helmet_UN2: SP_M88Helmet_UN2
    {
        displayName = "[UNIF] M88 Helmet Cover w/Goggles (UN)";
        picture = "\UNIF_UN_Faction_CUP_Gear\UI\UN_Item_UI.paa";
    };

    class SP_M88PSMHelmet_UN1;
    class SP_M88PSMHelmet_UN2;

    class UNIF_Headgear_SP_M88PSMHelmet_UN1: SP_M88PSMHelmet_UN1
    {
        displayName = "[UNIF] M88 Helmet (UN)";
        picture = "\UNIF_UN_Faction_CUP_Gear\UI\UN_Item_UI.paa";
    };

    class UNIF_Headgear_SP_M88PSMHelmet_UN2: SP_M88PSMHelmet_UN2
    {
        displayName = "[UNIF] M88 Helmet w/Goggles (UN)";
        picture = "\UNIF_UN_Faction_CUP_Gear\UI\UN_Item_UI.paa";
    };

    class SP_M96Helmet_UN1;
    class SP_M96Helmet_UN2;

    class UNIF_Headgear_SP_M96Helmet_UN1: SP_M96Helmet_UN1
    {
        displayName = "[UNIF] M96 Helmet Cover (UN)";
        picture = "\UNIF_UN_Faction_CUP_Gear\UI\UN_Item_UI.paa";
    };

    class UNIF_Headgear_SP_M96Helmet_UN2: SP_M96Helmet_UN2
    {
        displayName = "[UNIF] M96 Helmet Cover w/Goggles (UN)";
        picture = "\UNIF_UN_Faction_CUP_Gear\UI\UN_Item_UI.paa";
    };

    class SP_Mk7Helmet_UN1;
    class SP_Mk7Helmet_UN2;

    class UNIF_Headgear_SP_Mk7Helmet_UN1: SP_Mk7Helmet_UN1
    {
        displayName = "[UNIF] Mk7 Helmet Cover (UN)";
        picture = "\UNIF_UN_Faction_CUP_Gear\UI\UN_Item_UI.paa";
    };

    class UNIF_Headgear_SP_Mk7Helmet_UN2: SP_Mk7Helmet_UN2
    {
        displayName = "[UNIF] Mk7 Helmet Cover w/Goggles (UN)";
        picture = "\UNIF_UN_Faction_CUP_Gear\UI\UN_Item_UI.paa";
    };

    class VSM_Mich2000_OGA;
    class VSM_Mich2000_2_OGA;

    class UNIF_Headgear_VSM_Mich2000_OGA: VSM_Mich2000_OGA
    {
        displayName = "[UNIF] MICH 2000 (UN)";
        picture = "\UNIF_UN_Faction_CUP_Gear\UI\UN_Item_UI.paa";

        hiddenSelectionsTextures[] = 
        {
        	"\UNIF_UN_Faction_CUP_Gear\textures\MICH\vsm_mich2000_UN.paa",
        	"\UNIF_UN_Faction_CUP_Gear\textures\MICH\vsm_ops_UN.paa",
    	};
    };

    class UNIF_Headgear_VSM_Mich2000_2_OGA: VSM_Mich2000_2_OGA
    {
        displayName = "[UNIF] MICH 2000 2 (UN)";
        picture = "\UNIF_UN_Faction_CUP_Gear\UI\UN_Item_UI.paa";

        hiddenSelectionsTextures[] = 
        {
        	"\UNIF_UN_Faction_CUP_Gear\textures\MICH\vsm_mich2000_UN.paa",
        	"\UNIF_UN_Faction_CUP_Gear\textures\MICH\vsm_ops_UN.paa",
    	};
    };



    //************************************************************************************************************************************************************************************************
    //*****             Vests               *********************************************************************************************************************************************************
    //************************************************************************************************************************************************************************************************
    
    class CFP_RAV_operator_OGA;
    class CFP_RAV_MG_OGA;
    class CFP_RAV_Breacher_OGA;

    class UNIF_Vest_RAV_Operator_UN: CFP_RAV_operator_OGA
    {
        displayName = "[UNIF] Paraclete RAV Operator (UN)";
        picture = "\UNIF_UN_Faction_CUP_Gear\UI\UN_Item_UI.paa";

        hiddenSelectionsTextures[]=
		{
			"UNIF_UN_Faction_CUP_Gear\Textures\VSM_Vest\VSM_OGA_Chestrig_UN.paa",
			"UNIF_UN_Faction_CUP_Gear\Textures\VSM_Vest\VSM_BattleBelt_un.paa",
			"UNIF_UN_Faction_CUP_Gear\Textures\VSM_Vest\VSM_DropHolster_UN.paa",
			"UNIF_UN_Faction_CUP_Gear\Textures\VSM_Vest\serpa_un.paa",
			"UNIF_UN_Faction_CUP_Gear\Textures\VSM_Vest\VSM_OGA_Gear_un.paa",
			"UNIF_UN_Faction_CUP_Gear\Textures\VSM_Vest\radio_pouch_un.paa",
			"UNIF_UN_Faction_CUP_Gear\Textures\VSM_Vest\VSM_RAV_un.paa",
			"UNIF_UN_Faction_CUP_Gear\Textures\VSM_Vest\VSM_Pouches_un.paa",
		};
    };

    class UNIF_Vest_RAV_MG_UN: CFP_RAV_MG_OGA
    {
        displayName = "[UNIF] Paraclete RAV Gunner (UN)";
        picture = "\UNIF_UN_Faction_CUP_Gear\UI\UN_Item_UI.paa";

		hiddenSelectionsTextures[]=
		{
			"UNIF_UN_Faction_CUP_Gear\Textures\VSM_Vest\VSM_OGA_Chestrig_UN.paa",
			"UNIF_UN_Faction_CUP_Gear\Textures\VSM_Vest\VSM_BattleBelt_un.paa",
			"UNIF_UN_Faction_CUP_Gear\Textures\VSM_Vest\vsm_boxmag_un.paa",
			"UNIF_UN_Faction_CUP_Gear\Textures\VSM_Vest\VSM_DropHolster_UN.paa",
			"UNIF_UN_Faction_CUP_Gear\Textures\VSM_Vest\serpa_un.paa",
			"UNIF_UN_Faction_CUP_Gear\Textures\VSM_Vest\VSM_OGA_Gear_un.paa",
			"UNIF_UN_Faction_CUP_Gear\Textures\VSM_Vest\radio_pouch_un.paa",
			"UNIF_UN_Faction_CUP_Gear\Textures\VSM_Vest\VSM_RAV_un.paa",
			"UNIF_UN_Faction_CUP_Gear\Textures\VSM_Vest\VSM_Pouches_un.paa",
		};
    };

    class UNIF_Vest_RAV_Breacher_UN: CFP_RAV_Breacher_OGA
    {
        displayName = "[UNIF] Paraclete RAV Breacher (UN)";
        picture = "\UNIF_UN_Faction_CUP_Gear\UI\UN_Item_UI.paa";

        hiddenSelectionsTextures[]=
		{
			"UNIF_UN_Faction_CUP_Gear\Textures\VSM_Vest\VSM_OGA_Chestrig_UN.paa",
			"UNIF_UN_Faction_CUP_Gear\Textures\VSM_Vest\VSM_BattleBelt_un.paa",
			"UNIF_UN_Faction_CUP_Gear\Textures\VSM_Vest\VSM_DropHolster_UN.paa",
			"UNIF_UN_Faction_CUP_Gear\Textures\VSM_Vest\serpa_un.paa",
			"UNIF_UN_Faction_CUP_Gear\Textures\VSM_Vest\VSM_OGA_Gear_un.paa",
			"UNIF_UN_Faction_CUP_Gear\Textures\VSM_Vest\radio_pouch_un.paa",
			"UNIF_UN_Faction_CUP_Gear\Textures\VSM_Vest\VSM_RAV_un.paa",
			"UNIF_UN_Faction_CUP_Gear\Textures\VSM_Vest\VSM_Pouches_un.paa",
			"UNIF_UN_Faction_CUP_Gear\Textures\VSM_Vest\VSM_ButtPouch_un.paa",
		};
    };

    class UNIF_Vest_RAV_Light_UN: CFP_RAV_MG_OGA
    {
        displayName = "[UNIF] Paraclete RAV Light (UN)";
        picture = "\UNIF_UN_Faction_CUP_Gear\UI\UN_Item_UI.paa"

        hiddenSelectionsTextures[]=
		{
			"",
			"UNIF_UN_Faction_CUP_Gear\Textures\VSM_Vest\VSM_BattleBelt_un.paa",
			"",
			"UNIF_UN_Faction_CUP_Gear\Textures\VSM_Vest\VSM_DropHolster_UN.paa",
			"UNIF_UN_Faction_CUP_Gear\Textures\VSM_Vest\serpa_un.paa",
			"UNIF_UN_Faction_CUP_Gear\Textures\VSM_Vest\VSM_OGA_Gear_un.paa",
			"UNIF_UN_Faction_CUP_Gear\Textures\VSM_Vest\radio_pouch_un.paa",
			"UNIF_UN_Faction_CUP_Gear\Textures\VSM_Vest\VSM_RAV_un.paa",
			"",
		};

        class ItemInfo: VestItem
		{
			uniformModel="\VSM_Vests\Spectergear_RAV\RAV_MG.p3d";
			containerClass="Supply160";
			mass=50;
			passThrough=1;
			hiddenSelections[]=
			{
				"_1961aPouches",
				"_battleBelt",
				"_boxmag",
				"_DropHolster",
				"_Serpa",
				"_SOTGGear",
				"_SOTGRadio",
				"_vestBase",
				"_VSMPouches"
			};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=25;
					PassThrough=0.30000001;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=25;
					PassThrough=0.30000001;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=25;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.30000001;
				};
			};
		};
    };

    //************************************************************************************************************************************************************************************************
    //*****             guns               *********************************************************************************************************************************************************
    //************************************************************************************************************************************************************************************************
	
};
    

  //************************************************************************************************************************************************************************************************
  //*****             Groups               *********************************************************************************************************************************************************
  //************************************************************************************************************************************************************************************************
