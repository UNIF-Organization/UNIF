class CfgPatches
{
    class UNIF_UN_Faction_VSM_Gear
    {
        units[] =  // UNITS are added here so they show up on zeus
        {
        };
        weapons[] =
        {
            "UNIF_Vest_RAV_Operator_UN",
            "UNIF_Vest_RAV_Breacher_UN",
            "UNIF_Vest_RAV_MG_UN",
            "UNIF_Vest_RAV_Light_UN",
            "UNIF_Vest_RAV_Operator_UN_OGA",
            "UNIF_Vest_RAV_Breacher_UN_OGA",
            "UNIF_Vest_RAV_MG_UN_OGA",
            "UNIF_Vest_RAV_Light_UN_OGA",
            "UNIF_Vest_RAV_Operator_UN_OD",
            "UNIF_Vest_RAV_Breacher_UN_OD",
            "UNIF_Vest_RAV_MG_UN_OD",
            "UNIF_Vest_RAV_Light_UN_OD",
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

    class VSM_Mich2000_OGA;
    class VSM_Mich2000_2_OGA;

    class UNIF_Headgear_VSM_Mich2000_OGA: VSM_Mich2000_OGA
    {
        displayName = "[UNIF] MICH 2000 (UN)";
        picture = "\UNIF_UN_Faction_VSM_Gear\UI\UN_Item_UI.jpg";

        hiddenSelectionsTextures[] =
        {
            "\UNIF_UN_Faction_VSM_Gear\textures\MICH\vsm_mich2000_UN.paa",
            "\UNIF_UN_Faction_VSM_Gear\textures\MICH\vsm_ops_UN.paa",
        };
    };

    class UNIF_Headgear_VSM_Mich2000_2_OGA: VSM_Mich2000_2_OGA
    {
        displayName = "[UNIF] MICH 2000 2 (UN)";
        picture = "\UNIF_UN_Faction_VSM_Gear\UI\UN_Item_UI.jpg";

        hiddenSelectionsTextures[] =
        {
            "\UNIF_UN_Faction_VSM_Gear\textures\MICH\vsm_mich2000_UN.paa",
            "\UNIF_UN_Faction_VSM_Gear\textures\MICH\vsm_ops_UN.paa",
        };
    };

    class VSM_RAV_operator_OGA;
    class VSM_RAV_MG_OGA;
    class VSM_RAV_Breacher_OGA;

    class UNIF_Vest_RAV_Operator_UN: VSM_RAV_operator_OGA
    {
        displayName = "[UNIF] VSM Blue Paraclete RAV Operator (UN)";
        picture = "\UNIF_UN_Faction_VSM_Gear\UI\UN_Item_UI.jpg";

        hiddenSelectionsTextures[]=
        {
            "UNIF_UN_Faction_VSM_Gear\Textures\VSM_Vest\VSM_OGA_Chestrig_UN.paa",
            "UNIF_UN_Faction_VSM_Gear\Textures\VSM_Vest\VSM_BattleBelt_un.paa",
            "UNIF_UN_Faction_VSM_Gear\Textures\VSM_Vest\VSM_DropHolster_UN.paa",
            "UNIF_UN_Faction_VSM_Gear\Textures\VSM_Vest\serpa_un.paa",
            "UNIF_UN_Faction_VSM_Gear\Textures\VSM_Vest\VSM_OGA_Gear_un.paa",
            "UNIF_UN_Faction_VSM_Gear\Textures\VSM_Vest\radio_pouch_un.paa",
            "UNIF_UN_Faction_VSM_Gear\Textures\VSM_Vest\VSM_RAV_un.paa",
            "UNIF_UN_Faction_VSM_Gear\Textures\VSM_Vest\VSM_Pouches_un.paa",
        };
    };

    class UNIF_Vest_RAV_MG_UN: VSM_RAV_MG_OGA
    {
        displayName = "[UNIF] VSM Blue Paraclete RAV Gunner (UN)";
        picture = "\UNIF_UN_Faction_VSM_Gear\UI\UN_Item_UI.jpg";

        hiddenSelectionsTextures[]=
        {
            "UNIF_UN_Faction_VSM_Gear\Textures\VSM_Vest\VSM_OGA_Chestrig_UN.paa",
            "UNIF_UN_Faction_VSM_Gear\Textures\VSM_Vest\VSM_BattleBelt_un.paa",
            "UNIF_UN_Faction_VSM_Gear\Textures\VSM_Vest\vsm_boxmag_un.paa",
            "UNIF_UN_Faction_VSM_Gear\Textures\VSM_Vest\VSM_DropHolster_UN.paa",
            "UNIF_UN_Faction_VSM_Gear\Textures\VSM_Vest\serpa_un.paa",
            "UNIF_UN_Faction_VSM_Gear\Textures\VSM_Vest\VSM_OGA_Gear_un.paa",
            "UNIF_UN_Faction_VSM_Gear\Textures\VSM_Vest\radio_pouch_un.paa",
            "UNIF_UN_Faction_VSM_Gear\Textures\VSM_Vest\VSM_RAV_un.paa",
            "UNIF_UN_Faction_VSM_Gear\Textures\VSM_Vest\VSM_Pouches_un.paa",
        };
    };

    class UNIF_Vest_RAV_Breacher_UN: VSM_RAV_Breacher_OGA
    {
        displayName = "[UNIF] VSM Blue Paraclete RAV Breacher (UN)";
        picture = "\UNIF_UN_Faction_VSM_Gear\UI\UN_Item_UI.jpg";

        hiddenSelectionsTextures[]=
        {
            "UNIF_UN_Faction_VSM_Gear\Textures\VSM_Vest\VSM_OGA_Chestrig_UN.paa",
            "UNIF_UN_Faction_VSM_Gear\Textures\VSM_Vest\VSM_BattleBelt_un.paa",
            "UNIF_UN_Faction_VSM_Gear\Textures\VSM_Vest\VSM_DropHolster_UN.paa",
            "UNIF_UN_Faction_VSM_Gear\Textures\VSM_Vest\serpa_un.paa",
            "UNIF_UN_Faction_VSM_Gear\Textures\VSM_Vest\VSM_OGA_Gear_un.paa",
            "UNIF_UN_Faction_VSM_Gear\Textures\VSM_Vest\radio_pouch_un.paa",
            "UNIF_UN_Faction_VSM_Gear\Textures\VSM_Vest\VSM_RAV_un.paa",
            "UNIF_UN_Faction_VSM_Gear\Textures\VSM_Vest\VSM_Pouches_un.paa",
            "UNIF_UN_Faction_VSM_Gear\Textures\VSM_Vest\VSM_ButtPouch_un.paa",
        };
    };

    class UNIF_Vest_RAV_Light_UN: VSM_RAV_MG_OGA
    {
        displayName = "[UNIF] VSM Blue Paraclete RAV Light (UN)";
        picture = "\UNIF_UN_Faction_VSM_Gear\UI\UN_Item_UI.jpg";

        hiddenSelectionsTextures[]=
        {
            "",
            "UNIF_UN_Faction_VSM_Gear\Textures\VSM_Vest\VSM_BattleBelt_un.paa",
            "",
            "UNIF_UN_Faction_VSM_Gear\Textures\VSM_Vest\VSM_DropHolster_UN.paa",
            "UNIF_UN_Faction_VSM_Gear\Textures\VSM_Vest\serpa_un.paa",
            "UNIF_UN_Faction_VSM_Gear\Textures\VSM_Vest\VSM_OGA_Gear_un.paa",
            "UNIF_UN_Faction_VSM_Gear\Textures\VSM_Vest\radio_pouch_un.paa",
            "UNIF_UN_Faction_VSM_Gear\Textures\VSM_Vest\VSM_RAV_un.paa",
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
    ///OGA
    class UNIF_Vest_RAV_Operator_UN_OGA: VSM_RAV_operator_OGA
    {
        displayName = "[UNIF] VSM OGA Paraclete RAV Operator (UN)";
        picture = "\UNIF_UN_Faction_VSM_Gear\UI\UN_Item_UI.jpg";

        hiddenSelectionsTextures[]=
        {
            "VSM_Vests\Spectergear_LBT\data\VSM_OGA_chestrig.paa",
            "UNIF_UN_Faction_VSM_Gear\Textures\VSM_Vest\VSM_BattleBelt_un.paa",
            "VSM_Vests\LBT6094\Textures\VSM_dropholster_OGA.paa",
            "UNIF_UN_Faction_VSM_Gear\Textures\VSM_Vest\serpa_un.paa",
            "VSM_Vests\Spectergear_RAV\data\VSM_OGA_gear_co.paa",
            "VSM_Vests\Spectergear_RAV\data\radio_pouch.paa",
            "UNIF_UN_Faction_VSM_Gear\Textures\VSM_Vest\VSM_RAV_un.paa",
            "VSM_Vests\Spectergear_RAV\data\VSM_pouches_OGA.paa"
        };
    };

    class UNIF_Vest_RAV_MG_UN_OGA: VSM_RAV_MG_OGA
    {
        displayName = "[UNIF] VSM OGA Paraclete RAV Gunner (UN)";
        picture = "\UNIF_UN_Faction_VSM_Gear\UI\UN_Item_UI.jpg";

        hiddenSelectionsTextures[]=
        {
            "VSM_Vests\Spectergear_LBT\data\VSM_OGA_chestrig.paa",
            "UNIF_UN_Faction_VSM_Gear\Textures\VSM_Vest\VSM_BattleBelt_un.paa",
            "VSM_Vests\Spectergear_RAV\data\VSM_boxmag_OGA.paa",
            "VSM_Vests\LBT6094\Textures\VSM_dropholster_OGA.paa",
            "UNIF_UN_Faction_VSM_Gear\Textures\VSM_Vest\serpa_un.paa",
            "VSM_Vests\Spectergear_RAV\data\VSM_OGA_gear_co.paa",
            "VSM_Vests\Spectergear_RAV\data\radio_pouch.paa",
            "UNIF_UN_Faction_VSM_Gear\Textures\VSM_Vest\VSM_RAV_un.paa",
            "VSM_Vests\Spectergear_RAV\data\VSM_pouches_OGA.paa"
        };

    };

    class UNIF_Vest_RAV_Breacher_UN_OGA: VSM_RAV_Breacher_OGA
    {
        displayName = "[UNIF] VSM OGA Paraclete RAV Breacher (UN)";
        picture = "\UNIF_UN_Faction_VSM_Gear\UI\UN_Item_UI.jpg";

        hiddenSelectionsTextures[]=
        {
            "VSM_Vests\Spectergear_LBT\data\VSM_OGA_chestrig.paa",
            "UNIF_UN_Faction_VSM_Gear\Textures\VSM_Vest\VSM_BattleBelt_un.paa",
            "VSM_Vests\LBT6094\Textures\VSM_dropholster_OGA.paa",
            "UNIF_UN_Faction_VSM_Gear\Textures\VSM_Vest\serpa_un.paa",
            "VSM_Vests\Spectergear_RAV\data\VSM_OGA_gear_co.paa",
            "VSM_Vests\Spectergear_RAV\data\radio_pouch.paa",
            "UNIF_UN_Faction_VSM_Gear\Textures\VSM_Vest\VSM_RAV_un.paa",
            "VSM_Vests\Spectergear_RAV\data\VSM_pouches_OGA.paa",
            "VSM_Vests\Spectergear_RAV\data\VSM_buttpouch_OGA.paa"
        };

    };

    class UNIF_Vest_RAV_Light_UN_OGA: VSM_RAV_MG_OGA
    {
        displayName = "[UNIF] VSM OGA Paraclete RAV Light (UN)";
        picture = "\UNIF_UN_Faction_VSM_Gear\UI\UN_Item_UI.jpg"

        hiddenSelectionsTextures[]=
        {
            "",
            "UNIF_UN_Faction_VSM_Gear\Textures\VSM_Vest\VSM_BattleBelt_un.paa",
            "",
            "VSM_Vests\LBT6094\Textures\VSM_dropholster_OGA.paa",
            "UNIF_UN_Faction_VSM_Gear\Textures\VSM_Vest\serpa_un.paa",
            "VSM_Vests\Spectergear_RAV\data\VSM_OGA_gear_co.paa",
            "VSM_Vests\Spectergear_RAV\data\radio_pouch.paa",
            "UNIF_UN_Faction_VSM_Gear\Textures\VSM_Vest\VSM_RAV_un.paa",
            ""
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
    ///OD
    class UNIF_Vest_RAV_Operator_UN_OD: VSM_RAV_operator_OGA
    {
        displayName = "[UNIF] VSM OD Paraclete RAV Operator (UN)";
        picture = "\UNIF_UN_Faction_VSM_Gear\UI\UN_Item_UI.jpg";

        hiddenSelectionsTextures[]=
        {
            "VSM_Vests\Spectergear_LBT\data\VSM_OGA_OD_chestrig.paa",
            "UNIF_UN_Faction_VSM_Gear\Textures\VSM_Vest\VSM_BattleBelt_un.paa",
            "VSM_Vests\LBT6094\Textures\VSM_dropholster.paa",
            "UNIF_UN_Faction_VSM_Gear\Textures\VSM_Vest\serpa_un.paa",
            "VSM_Vests\Spectergear_RAV\data\VSM_OGA_OD_gear_co.paa",
            "VSM_Vests\Spectergear_RAV\data\radio_pouch_green.paa",
            "UNIF_UN_Faction_VSM_Gear\Textures\VSM_Vest\VSM_RAV_un.paa",
            "VSM_Vests\Spectergear_RAV\data\VSM_pouches_OGA_OD.paa"
        };
    };

    class UNIF_Vest_RAV_MG_UN_OD: VSM_RAV_MG_OGA
    {
        displayName = "[UNIF] VSM OD Paraclete RAV Gunner (UN)";
        picture = "\UNIF_UN_Faction_VSM_Gear\UI\UN_Item_UI.jpg";

        hiddenSelectionsTextures[]=
        {
            "VSM_Vests\Spectergear_LBT\data\VSM_OGA_OD_chestrig.paa",
            "UNIF_UN_Faction_VSM_Gear\Textures\VSM_Vest\VSM_BattleBelt_un.paa",
            "VSM_Vests\Spectergear_RAV\data\VSM_boxmag_OGA_OD.paa",
            "VSM_Vests\LBT6094\Textures\VSM_dropholster.paa",
            "UNIF_UN_Faction_VSM_Gear\Textures\VSM_Vest\serpa_un.paa",
            "VSM_Vests\Spectergear_RAV\data\VSM_OGA_OD_gear_co.paa",
            "VSM_Vests\Spectergear_RAV\data\radio_pouch_green.paa",
            "UNIF_UN_Faction_VSM_Gear\Textures\VSM_Vest\VSM_RAV_un.paa",
            "VSM_Vests\Spectergear_RAV\data\VSM_pouches_OGA_OD.paa"
        };

    };

    class UNIF_Vest_RAV_Breacher_UN_OD: VSM_RAV_Breacher_OGA
    {
        displayName = "[UNIF] VSM OD Paraclete RAV Breacher (UN)";
        picture = "\UNIF_UN_Faction_VSM_Gear\UI\UN_Item_UI.jpg";

        hiddenSelectionsTextures[]=
        {
            "VSM_Vests\Spectergear_LBT\data\VSM_OGA_OD_chestrig.paa",
            "UNIF_UN_Faction_VSM_Gear\Textures\VSM_Vest\VSM_BattleBelt_un.paa",
            "VSM_Vests\LBT6094\Textures\VSM_dropholster.paa",
            "UNIF_UN_Faction_VSM_Gear\Textures\VSM_Vest\serpa_un.paa",
            "VSM_Vests\Spectergear_RAV\data\VSM_OGA_OD_gear_co.paa",
            "VSM_Vests\Spectergear_RAV\data\radio_pouch_green.paa",
            "UNIF_UN_Faction_VSM_Gear\Textures\VSM_Vest\VSM_RAV_un.paa",
            "VSM_Vests\Spectergear_RAV\data\VSM_pouches_OGA_OD.paa",
            "VSM_Vests\Spectergear_RAV\data\VSM_buttpouch_OGA_OD.paa"
        };

    };

    class UNIF_Vest_RAV_Light_UN_OD: VSM_RAV_MG_OGA
    {
        displayName = "[UNIF] VSM OD Paraclete RAV Light (UN)";
        picture = "\UNIF_UN_Faction_VSM_Gear\UI\UN_Item_UI.jpg"

        hiddenSelectionsTextures[]=
        {
            "",
            "UNIF_UN_Faction_VSM_Gear\Textures\VSM_Vest\VSM_BattleBelt_un.paa",
            "",
            "VSM_Vests\LBT6094\Textures\VSM_dropholster.paa",
            "UNIF_UN_Faction_VSM_Gear\Textures\VSM_Vest\serpa_un.paa",
            "VSM_Vests\Spectergear_RAV\data\VSM_OGA_OD_gear_co.paa",
            "VSM_Vests\Spectergear_RAV\data\radio_pouch_green.paa",
            "UNIF_UN_Faction_VSM_Gear\Textures\VSM_Vest\VSM_RAV_un.paa",
            ""
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
};
