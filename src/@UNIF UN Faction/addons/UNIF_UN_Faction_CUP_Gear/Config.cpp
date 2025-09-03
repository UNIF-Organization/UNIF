class CfgPatches
{
    class UNIF_UN_Faction_CUP_Gear
    {
        units[] =  // UNITS are added here so they show up on zeus
        {
            "UNIF_Faction_UN_Condor_Backpack_Black",
            "UNIF_Faction_UN_Condor_Backpack_OD",
            "UNIF_Faction_UN_Condor_Backpack_OGA",
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
            "UNIF_Headgear_SSh60Helmet1",
            "UNIF_Headgear_SSh60Helmet2",
            "UNIF_Headgear_SSh60Helmet3",
            "UNIF_Headgear_M1Helmet",
            "UNIF_Headgear_M1Helmet_Cigs",
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
            "UNIF_Headgear_SP_Mk7Helmet_UN1",
            "UNIF_Headgear_SP_Mk7Helmet_UN2",
            "UNIF_UN_UniformItem_C_Uni_1",
            "UNIF_UN_UniformItem_C_Uni_2",
            "UNIF_Headgear_M92_Cover",
            "UNIF_Headgear_M92_Cover_GG",
            "UNIF_Headgear_M92",
            "UNIF_Headgear_M92_GG",
            "UNIF_Headgear_M92_GG_CB",
            "UNIF_Headgear_M92_GG_CF",
            "UNIF_Headgear_M92_Cover_GG_CB",
            "UNIF_Headgear_M92_Cover_GG_CF",
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

    //Backpacks

    class B_Carryall_Base;
    class UNIF_Faction_UN_Condor_Backpack_Black: B_Carryall_Base
    {
        armor = 200;
        mass = 90;
        maximumLoad = 480;
        author = "UNIF Mod Team";
        scope = 2;
        displayName = "Condor Backpack (Black)";
        model = "\A3\Drones_F\Weapons_F_Gamma\Ammoboxes\Bags\UAV_backpack_F.p3d";
        picture = "\A3\Drones_F\Weapons_F_Gamma\Ammoboxes\Bags\Data\UI\icon_B_C_UAV_rgr_ca";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] =
        {
            "\UNIF_UN_Faction_CUP_Gear\textures\Condor\Black_Condor.paa"
        };
    };
    class UNIF_Faction_UN_Condor_Backpack_OD: B_Carryall_Base
    {
        armor = 200;
        mass = 90;
        maximumLoad = 480;
        author = "UNIF Mod Team";
        scope = 2;
        displayName = "Condor Backpack (OD)";
        model = "\A3\Drones_F\Weapons_F_Gamma\Ammoboxes\Bags\UAV_backpack_F.p3d";
        picture = "\A3\Drones_F\Weapons_F_Gamma\Ammoboxes\Bags\Data\UI\icon_B_C_UAV_rgr_ca";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] =
        {
            "\UNIF_UN_Faction_CUP_Gear\textures\Condor\OD_Condor.paa"
        };
    };
    class UNIF_Faction_UN_Condor_Backpack_OGA: B_Carryall_Base
    {
        armor = 200;
        mass = 90;
        maximumLoad = 480;
        author = "UNIF Mod Team";
        scope = 2;
        displayName = "Condor Backpack (OGA)";
        model = "\A3\Drones_F\Weapons_F_Gamma\Ammoboxes\Bags\UAV_backpack_F.p3d";
        picture = "\A3\Drones_F\Weapons_F_Gamma\Ammoboxes\Bags\Data\UI\icon_B_C_UAV_rgr_ca";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] =
        {
            "\UNIF_UN_Faction_CUP_Gear\textures\Condor\OGA_Condor.paa"
        };
    };

    //Uniform Units

    //Objects

    //Vehicles
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

    //Uniforms

    class U_Marshal;
    class UNIF_UN_UniformItem_C_Uni_1: U_Marshal
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[UNIF] Humanitarian Clothes (UN/Khaki)";
        picture = "\UNIF_UN_Faction_CUP_Gear\UI\UN_Item_UI.jpg";
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
        picture = "\UNIF_UN_Faction_CUP_Gear\UI\UN_Item_UI.jpg";
        class ItemInfo : UniformItem {
            uniformModel="-";
            uniformClass = "UNIF_Faction_UN_C_Char_2";
            containerClass = "Supply60";
            mass = 30;
        };
    };

    //Helmets

    class SP_Beret_UN1;
    class SP_Beret_UN2;

    class UNIF_Headgear_Beret_1: SP_Beret_UN1
    {
        displayName = "[UNIF] Beret (UN Patch)";
        picture = "\UNIF_UN_Faction_CUP_Gear\UI\UN_Item_UI.jpg";
    };

    class UNIF_Headgear_Beret_2: SP_Beret_UN2
    {
        displayName = "[UNIF] Beret (UN Logo)";
        picture = "\UNIF_UN_Faction_CUP_Gear\UI\UN_Item_UI.jpg";
    };

    class SP_BoonieHat_UN;

    class UNIF_Headgear_BoonieHat: SP_BoonieHat_UN
    {
        displayName = "[UNIF] Boonie Hat (UN)";
        picture = "\UNIF_UN_Faction_CUP_Gear\UI\UN_Item_UI.jpg";
    };

    class CUP_H_CVCH_des;

    class UNIF_Headgear_CVCHelmet: CUP_H_CVCH_des
    {
        displayName = "[UNIF] CVC Helmet (UN)";
        picture = "\UNIF_UN_Faction_CUP_Gear\UI\UN_Item_UI.jpg";
        hiddenSelectionsTextures[]=
        {
            "\UNIF_UN_Faction_CUP_Gear\Textures\CVC\UN_CVC.paa"
        };
        class ItemInfo: ItemInfo
        {
            hiddenSelectionsTextures[]=
            {
                "\UNIF_UN_Faction_CUP_Gear\Textures\CVC\UN_CVC.paa"
            };
        };
    };

    class SP_PatrolCap_UN;

    class UNIF_Headgear_PatrolCap: SP_PatrolCap_UN
    {
        displayName = "[UNIF] Patrol Cap (UN)";
        picture = "\UNIF_UN_Faction_CUP_Gear\UI\UN_Item_UI.jpg";
    };

    class SP_SPH4Helmet_UN1;
    class SP_SPH4Helmet_UN2;
    class SP_SPH4Helmet_UN3;
    class UNIF_Headgear_SPH4Helmet1: SP_SPH4Helmet_UN1
    {
        displayName = "[UNIF] SPH4 Helmet Blue (UN)";
        picture = "\UNIF_UN_Faction_CUP_Gear\UI\UN_Item_UI.jpg";
        ace_hearing_lowerVolume = 0.6;
        ace_hearing_protection = 0.85;
    };

    class UNIF_Headgear_SPH4Helmet2: SP_SPH4Helmet_UN2
    {
        displayName = "[UNIF] SPH4 Helmet Mix (UN)";
        picture = "\UNIF_UN_Faction_CUP_Gear\UI\UN_Item_UI.jpg";
        ace_hearing_lowerVolume = 0.6;
        ace_hearing_protection = 0.85;
    };

    class UNIF_Headgear_SPH4Helmet3: SP_SPH4Helmet_UN3
    {
        displayName = "[UNIF] SPH4 Helmet White (UN)";
        picture = "\UNIF_UN_Faction_CUP_Gear\UI\UN_Item_UI.jpg";
        ace_hearing_lowerVolume = 0.6;
        ace_hearing_protection = 0.85;
    };

    class CUP_H_SLA_Helmet_BLK;
    class CUP_H_SLA_Helmet_BLK_worn;
    class CUP_H_TK_Helmet;

    class UNIF_Headgear_SSh60Helmet1: CUP_H_SLA_Helmet_BLK
    {
        displayName = "[UNIF] SSh-60 (UN)";
        picture = "\UNIF_UN_Faction_CUP_Gear\UI\UN_Item_UI.jpg";
        hiddenSelectionsTextures[]=
        {
            "\UNIF_UN_Faction_CUP_Gear\textures\SSH60\UN_SSH60.paa"
        };
    };

    class UNIF_Headgear_SSh60Helmet3: CUP_H_SLA_Helmet_BLK_worn
    {
        displayName = "[UNIF] SSh-60 Worn (UN)";
        picture = "\UNIF_UN_Faction_CUP_Gear\UI\UN_Item_UI.jpg";
        hiddenSelectionsTextures[]=
        {
            "\UNIF_UN_Faction_CUP_Gear\textures\SSH60\UN_SSH60_worn.paa"
        };
    };

    class UNIF_Headgear_SSh60Helmet2: CUP_H_TK_Helmet
    {
        displayName = "[UNIF] SSh-60 Net (UN)";
        picture = "\UNIF_UN_Faction_CUP_Gear\UI\UN_Item_UI.jpg";
        hiddenSelectionsTextures[]=
        {
            "\UNIF_UN_Faction_CUP_Gear\textures\SSH60\UN_SSH60_net.paa"
        };
    };

    class CUP_H_USArmy_Helmet_M1_plain_M81;
    class CUP_H_USArmy_Helmet_M1_Olive;

    class UNIF_Headgear_M1Helmet: CUP_H_USArmy_Helmet_M1_plain_M81
    {
        displayName = "[UNIF] M1 Helmet (UN)";
        picture = "\UNIF_UN_Faction_CUP_Gear\UI\UN_Item_UI.jpg";
        hiddenSelectionsTextures[]=
        {
            "\UNIF_UN_Faction_CUP_Gear\textures\M1\UN_M1.paa"
        };
    };

    class UNIF_Headgear_M1Helmet_Cigs: CUP_H_USArmy_Helmet_M1_Olive
    {
        displayName = "[UNIF] M1 Helmet (UN/Cigs)";
        picture = "\UNIF_UN_Faction_CUP_Gear\UI\UN_Item_UI.jpg";
        hiddenSelectionsTextures[]=
        {
            "\UNIF_UN_Faction_CUP_Gear\textures\M1\UN_M1_cigs.paa"
        };
    };

    class H_Cap_marshal;
    class CUP_H_PMC_Cap_Grey;
    class CUP_H_PMC_Cap_Back_EP_Grey;
    class CUP_H_PMC_Cap_Back_Grey;

    class UNIF_Headgear_MarshallCap: H_Cap_marshal
    {
        displayName = "[UNIF] Cap w/DEF (UN)";
        picture = "\UNIF_UN_Faction_CUP_Gear\UI\UN_Item_UI.jpg";
        hiddenSelectionsTextures[] =
        {
            "\UNIF_UN_Faction_CUP_Gear\textures\MarshallCap\UN_MarshallCap.paa"
        };
    };

    class UNIF_Headgear_Cap: CUP_H_PMC_Cap_Grey
    {
        displayName = "[UNIF] Cap (UN)";
        picture = "\UNIF_UN_Faction_CUP_Gear\UI\UN_Item_UI.jpg";
        hiddenSelectionsTextures[] =
        {
            "\UNIF_UN_Faction_CUP_Gear\textures\MarshallCap\UN_MarshallCap.paa"
        };
    };

    class UNIF_Headgear_Cap_Back: CUP_H_PMC_Cap_Back_Grey
    {
        displayName = "[UNIF] Cap Backwards (UN)";
        picture = "\UNIF_UN_Faction_CUP_Gear\UI\UN_Item_UI.jpg";
        hiddenSelectionsTextures[] =
        {
            "\UNIF_UN_Faction_CUP_Gear\textures\MarshallCap\UN_MarshallCap.paa"
        };
    };

    class UNIF_Headgear_MarshallCap_Back: CUP_H_PMC_Cap_Back_EP_Grey
    {
        displayName = "[UNIF] Cap Backwards w/DEF (UN)";
        picture = "\UNIF_UN_Faction_CUP_Gear\UI\UN_Item_UI.jpg";
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
        picture = "\UNIF_UN_Faction_CUP_Gear\UI\UN_Item_UI.jpg";
        hiddenSelectionsTextures[] =
        {
            "\UNIF_UN_Faction_CUP_Gear\textures\Altyn\UN_Altyn.paa",
            "cup\creatures\people\military\cup_creatures_people_military_russia\data\altyn_stripes_co.paa"
        };
    };

    class UNIF_Headgear_Altyn_Goggles: CUP_H_RUS_Altyn_Goggles_black
    {
        displayName = "[UNIF] Altyn Combat Helmet w/Goggles (UN)";
        picture = "\UNIF_UN_Faction_CUP_Gear\UI\UN_Item_UI.jpg";
        hiddenSelectionsTextures[] =
        {
            "\UNIF_UN_Faction_CUP_Gear\textures\Altyn\UN_Altyn.paa",
            "cup\creatures\people\military\cup_creatures_people_military_russia\data\altyn_stripes_co.paa"
        };
    };

    class UNIF_Headgear_Altyn_ShieldDown: CUP_H_RUS_Altyn_Shield_Down_black
    {
        displayName = "[UNIF] Altyn Combat Helmet Shield Down (UN)";
        picture = "\UNIF_UN_Faction_CUP_Gear\UI\UN_Item_UI.jpg";
        hiddenSelectionsTextures[] =
        {
            "\UNIF_UN_Faction_CUP_Gear\textures\Altyn\UN_Altyn.paa",
            "cup\creatures\people\military\cup_creatures_people_military_russia\data\altyn_stripes_co.paa"
        };
    };

    class UNIF_Headgear_Altyn_ShieldUp: CUP_H_RUS_Altyn_Shield_Up_black
    {
        displayName = "[UNIF] Altyn Combat Helmet Shield Up (UN)";
        picture = "\UNIF_UN_Faction_CUP_Gear\UI\UN_Item_UI.jpg";
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
        picture = "\UNIF_UN_Faction_CUP_Gear\UI\UN_Item_UI.jpg";
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
        picture = "\UNIF_UN_Faction_CUP_Gear\UI\UN_Item_UI.jpg";
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
        picture = "\UNIF_UN_Faction_CUP_Gear\UI\UN_Item_UI.jpg";
        hiddenSelectionsTextures[] =
        {
            "\UNIF_UN_Faction_CUP_Gear\textures\6b47\UN_6b47.paa",
            "CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Headgear\Data\GSSH_ESS_s_CO.paa",
        };
    };

    class CUP_H_Ger_M92_Black;
    class CUP_H_Ger_M92_Cover;
    class CUP_H_Ger_M92_Cover_GG;
    class CUP_H_Ger_M92_Black_GG;
    class CUP_H_Ger_M92_Black_GG_CB;
    class CUP_H_Ger_M92_Black_GG_CF;
    class CUP_H_Ger_M92_Cover_GG_CB;
    class CUP_H_Ger_M92_Cover_GG_CF;

    class UNIF_Headgear_M92_Cover: CUP_H_Ger_M92_Cover
    {
        displayName = "[UNIF] M92 Helmet (UN/Covered)";
        picture = "\UNIF_UN_Faction_CUP_Gear\UI\UN_Item_UI.jpg";
        hiddenSelectionsTextures[] =
        {
            "\UNIF_UN_Faction_CUP_Gear\textures\M92\m92_un_colors.paa",
            "\UNIF_UN_Faction_CUP_Gear\textures\M92\m92_helmet_cover_un.paa",
        };
    };

    class UNIF_Headgear_M92_Cover_GG: CUP_H_Ger_M92_Cover_GG
    {
        displayName = "[UNIF] M92 Helmet (UN/Covered/Goggles)";
        picture = "\UNIF_UN_Faction_CUP_Gear\UI\UN_Item_UI.jpg";
        hiddenSelectionsTextures[] =
        {
            "\UNIF_UN_Faction_CUP_Gear\textures\M92\m92_un_colors.paa",
            "\UNIF_UN_Faction_CUP_Gear\textures\M92\m92_helmet_cover_un.paa",
        };
    };

    class UNIF_Headgear_M92: CUP_H_Ger_M92_Black
    {
        displayName = "[UNIF] M92 Helmet (UN)";
        picture = "\UNIF_UN_Faction_CUP_Gear\UI\UN_Item_UI.jpg";
        hiddenSelectionsTextures[] =
        {
            "\UNIF_UN_Faction_CUP_Gear\textures\M92\m92_un_colors.paa",
        };
    };

    class UNIF_Headgear_M92_GG: CUP_H_Ger_M92_Black_GG
    {
        displayName = "[UNIF] M92 Helmet (UN/Goggles)";
        picture = "\UNIF_UN_Faction_CUP_Gear\UI\UN_Item_UI.jpg";
        hiddenSelectionsTextures[] =
        {
            "\UNIF_UN_Faction_CUP_Gear\textures\M92\m92_un_colors.paa",
        };
    };

    class UNIF_Headgear_M92_GG_CB: CUP_H_Ger_M92_Black_GG_CB
    {
        displayName = "[UNIF] M92 Helmet (UN/Goggles/Back Cover)";
        picture = "\UNIF_UN_Faction_CUP_Gear\UI\UN_Item_UI.jpg";
        hiddenSelectionsTextures[] =
        {
            "\UNIF_UN_Faction_CUP_Gear\textures\M92\m92_un_colors.paa",
            "\UNIF_UN_Faction_CUP_Gear\textures\M92\m92_helmet_un_google_covers.paa",
        };
    };

    class UNIF_Headgear_M92_GG_CF: CUP_H_Ger_M92_Black_GG_CF
    {
        displayName = "[UNIF] M92 Helmet (UN/Goggles/Cover)";
        picture = "\UNIF_UN_Faction_CUP_Gear\UI\UN_Item_UI.jpg";
        hiddenSelectionsTextures[] =
        {
            "\UNIF_UN_Faction_CUP_Gear\textures\M92\m92_un_colors.paa",
            "\UNIF_UN_Faction_CUP_Gear\textures\M92\m92_helmet_un_google_covers.paa",
        };
    };

    class UNIF_Headgear_M92_Cover_GG_CB: CUP_H_Ger_M92_Cover_GG_CB
    {
        displayName = "[UNIF] M92 Helmet (UN/Covered/Back Cover/Goggles)";
        picture = "\UNIF_UN_Faction_CUP_Gear\UI\UN_Item_UI.jpg";
        hiddenSelectionsTextures[] =
        {
            "\UNIF_UN_Faction_CUP_Gear\textures\M92\m92_un_colors.paa",
            "\UNIF_UN_Faction_CUP_Gear\textures\M92\m92_helmet_cover_un.paa",
        };
    };

    class UNIF_Headgear_M92_Cover_GG_CF: CUP_H_Ger_M92_Cover_GG_CF
    {
        displayName = "[UNIF] M92 Helmet (UN/Covered/Cover/Goggles)";
        picture = "\UNIF_UN_Faction_CUP_Gear\UI\UN_Item_UI.jpg";
        hiddenSelectionsTextures[] =
        {
            "\UNIF_UN_Faction_CUP_Gear\textures\M92\m92_un_colors.paa",
            "\UNIF_UN_Faction_CUP_Gear\textures\M92\m92_helmet_cover_un.paa",
        };
    };



    class SP_Mk7Helmet_UN1;
    class SP_Mk7Helmet_UN2;

    class UNIF_Headgear_SP_Mk7Helmet_UN1: SP_Mk7Helmet_UN1
    {
        displayName = "[UNIF] Mk7 Helmet Cover (UN)";
        picture = "\UNIF_UN_Faction_CUP_Gear\UI\UN_Item_UI.jpg";
    };

    class UNIF_Headgear_SP_Mk7Helmet_UN2: SP_Mk7Helmet_UN2
    {
        displayName = "[UNIF] Mk7 Helmet Cover w/Goggles (UN)";
        picture = "\UNIF_UN_Faction_CUP_Gear\UI\UN_Item_UI.jpg";
    };
};
