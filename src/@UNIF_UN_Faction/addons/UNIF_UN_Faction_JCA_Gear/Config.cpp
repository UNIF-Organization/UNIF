class CfgPatches 
{ 
    class UNIF_UN_Faction_JCA_Gear
    { 
       units[] =  // UNITTS are added here so they show up on zeus
        {
        }; 
        weapons[] = 
        {
            "UNIF_UN_Faction_JCA_Gear_Vest_Holster",

            "UNIF_UN_Faction_JCA_Gear_Vest_OD_Combat",
            "UNIF_UN_Faction_JCA_Gear_Vest_OD_Command",
            "UNIF_UN_Faction_JCA_Gear_Vest_OD_Compact",
            "UNIF_UN_Faction_JCA_Gear_Vest_OD_CQB",
            "UNIF_UN_Faction_JCA_Gear_Vest_OD_Crew",
            "UNIF_UN_Faction_JCA_Gear_Vest_OD_Recon",
            "UNIF_UN_Faction_JCA_Gear_Vest_OD_Tactical",

            "UNIF_UN_Faction_JCA_Gear_Vest_OGA_Combat",
            "UNIF_UN_Faction_JCA_Gear_Vest_OGA_Command",
            "UNIF_UN_Faction_JCA_Gear_Vest_OGA_Compact",
            "UNIF_UN_Faction_JCA_Gear_Vest_OGA_CQB",
            "UNIF_UN_Faction_JCA_Gear_Vest_OGA_Crew",
            "UNIF_UN_Faction_JCA_Gear_Vest_OGA_Recon",
            "UNIF_UN_Faction_JCA_Gear_Vest_OGA_Tactical",

            "UNIF_UN_Faction_JCA_Gear_Vest_Blue_Combat",
            "UNIF_UN_Faction_JCA_Gear_Vest_Blue_Command",
            "UNIF_UN_Faction_JCA_Gear_Vest_Blue_Compact",
            "UNIF_UN_Faction_JCA_Gear_Vest_Blue_CQB",
            "UNIF_UN_Faction_JCA_Gear_Vest_Blue_Crew",
            "UNIF_UN_Faction_JCA_Gear_Vest_Blue_Recon",
            "UNIF_UN_Faction_JCA_Gear_Vest_Blue_Tactical",
        }; 
        magazines[]=
        {
        };
        requiredVersion = 0.1; 
        requiredAddons[] = {}; 
    }; 
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

    class JCA_MCRP_V_CarrierRigKBT_01_combat_olive_F;
    class JCA_MCRP_V_CarrierRigKBT_01_command_olive_F;
    class JCA_MCRP_V_CarrierRigKBT_01_compact_olive_F;
    class JCA_MCRP_V_CarrierRigKBT_01_CQB_olive_F;
    class JCA_MCRP_V_CarrierRigKBT_01_crew_olive_F;
    class JCA_MCRP_V_CarrierRigKBT_01_holster_olive_F;
    class JCA_MCRP_V_CarrierRigKBT_01_recon_olive_F;
    class JCA_MCRP_V_CarrierRigKBT_01_tactical_olive_F;

    //// Holster

    class UNIF_UN_Faction_JCA_Gear_Vest_Holster: JCA_MCRP_V_CarrierRigKBT_01_holster_olive_F
    {
        displayName="[UNIF] Modular Carrier Holster";
        picture="\UNIF_UN_Faction_JCA_Gear\UI\UN_Item_UI.paa";
        hiddenSelectionsTextures[]=
        {
            "UNIF_UN_Faction_JCA_Gear\Textures\Vest_Blue.paa",
        };
    };

    //// Blue

    class UNIF_UN_Faction_JCA_Gear_Vest_Blue_Combat: JCA_MCRP_V_CarrierRigKBT_01_combat_olive_F
    {
        scope=2;
        displayName="[UNIF] Modular Carrier Combat Rig (Blue)";
        picture="\UNIF_UN_Faction_JCA_Gear\UI\UN_Item_UI.paa";
        hiddenSelectionsTextures[]=
        {
            "UNIF_UN_Faction_JCA_Gear\Textures\Vest_Blue.paa",
            "",
            "UNIF_UN_Faction_JCA_Gear\Textures\UN_Patch_b.paa"
        };
    };
    class UNIF_UN_Faction_JCA_Gear_Vest_Blue_Command: JCA_MCRP_V_CarrierRigKBT_01_command_olive_F
    {
        scope=2;
        displayName="[UNIF] Modular Carrier Command Rig (Blue)";
        picture="\UNIF_UN_Faction_JCA_Gear\UI\UN_Item_UI.paa";
        hiddenSelectionsTextures[]=
        {
            "UNIF_UN_Faction_JCA_Gear\Textures\Vest_Blue.paa",
            "",
            "UNIF_UN_Faction_JCA_Gear\Textures\UN_Patch_b.paa",
            "UNIF_UN_Faction_JCA_Gear\Textures\UN_Patch_b.paa"
        };
    };
    class UNIF_UN_Faction_JCA_Gear_Vest_Blue_Compact: JCA_MCRP_V_CarrierRigKBT_01_compact_olive_F
    {
        scope=2;
        displayName="[UNIF] Modular Carrier Compact Vest (Blue)";
        picture="\UNIF_UN_Faction_JCA_Gear\UI\UN_Item_UI.paa";
        hiddenSelectionsTextures[]=
        {
            "UNIF_UN_Faction_JCA_Gear\Textures\Vest_Blue.paa",
            "",
            "UNIF_UN_Faction_JCA_Gear\Textures\UN_Patch_b.paa"
        };
    };
    class UNIF_UN_Faction_JCA_Gear_Vest_Blue_CQB: JCA_MCRP_V_CarrierRigKBT_01_CQB_olive_F
    {
        scope=2;
        displayName="[UNIF] Modular Carrier CQB Rig (Blue)";
        picture="\UNIF_UN_Faction_JCA_Gear\UI\UN_Item_UI.paa";
        hiddenSelectionsTextures[]=
        {
            "UNIF_UN_Faction_JCA_Gear\Textures\Vest_Blue.paa",
            "",
            "UNIF_UN_Faction_JCA_Gear\Textures\UN_Patch_b.paa"
        };
    };
    class UNIF_UN_Faction_JCA_Gear_Vest_Blue_Crew: JCA_MCRP_V_CarrierRigKBT_01_crew_olive_F
    {
        scope=2;
        displayName="[UNIF] Modular Carrier Crew Vest (Blue)";
        picture="\UNIF_UN_Faction_JCA_Gear\UI\UN_Item_UI.paa";
        hiddenSelectionsTextures[]=
        {
            "UNIF_UN_Faction_JCA_Gear\Textures\Vest_Blue.paa",
            ""
        };
    };
    
    class UNIF_UN_Faction_JCA_Gear_Vest_Blue_Recon: JCA_MCRP_V_CarrierRigKBT_01_recon_olive_F
    {
        scope=2;
        displayName="[UNIF] Modular Carrier Recon Rig (Blue)";
        picture="\UNIF_UN_Faction_JCA_Gear\UI\UN_Item_UI.paa";
        hiddenSelectionsTextures[]=
        {
            "UNIF_UN_Faction_JCA_Gear\Textures\Vest_Blue.paa",
            "",
            "UNIF_UN_Faction_JCA_Gear\Textures\UN_Patch_b.paa"
        };
    };
    class UNIF_UN_Faction_JCA_Gear_Vest_Blue_Tactical: JCA_MCRP_V_CarrierRigKBT_01_tactical_olive_F
    {
        scope=2;
        displayName="[UNIF] Modular Carrier Tactical Rig (Blue)";
        picture="\UNIF_UN_Faction_JCA_Gear\UI\UN_Item_UI.paa";
        hiddenSelectionsTextures[]=
        {
            "UNIF_UN_Faction_JCA_Gear\Textures\Vest_Blue.paa",
            "",
            "UNIF_UN_Faction_JCA_Gear\Textures\UN_Patch_b.paa",
            "UNIF_UN_Faction_JCA_Gear\Textures\UN_Patch_b.paa",
            "UNIF_UN_Faction_JCA_Gear\Textures\UN_Patch_b.paa"
        };
    };

    //// OD

    class UNIF_UN_Faction_JCA_Gear_Vest_OD_Combat: JCA_MCRP_V_CarrierRigKBT_01_combat_olive_F
    {
        scope=2;
        displayName="[UNIF] Modular Carrier Combat Rig (OD)";
        picture="\UNIF_UN_Faction_JCA_Gear\UI\UN_Item_UI.paa";
        hiddenSelectionsTextures[]=
        {
            "UNIF_UN_Faction_JCA_Gear\Textures\Vest_OD.paa",
            "",
            "UNIF_UN_Faction_JCA_Gear\Textures\UN_Patch_b.paa"
        };
    };
    class UNIF_UN_Faction_JCA_Gear_Vest_OD_Command: JCA_MCRP_V_CarrierRigKBT_01_command_olive_F
    {
        scope=2;
        displayName="[UNIF] Modular Carrier Command Rig (OD)";
        picture="\UNIF_UN_Faction_JCA_Gear\UI\UN_Item_UI.paa";
        hiddenSelectionsTextures[]=
        {
            "UNIF_UN_Faction_JCA_Gear\Textures\Vest_OD.paa",
            "",
            "UNIF_UN_Faction_JCA_Gear\Textures\UN_Patch_b.paa",
            "UNIF_UN_Faction_JCA_Gear\Textures\UN_Patch_b.paa"
        };
    };
    class UNIF_UN_Faction_JCA_Gear_Vest_OD_Compact: JCA_MCRP_V_CarrierRigKBT_01_compact_olive_F
    {
        scope=2;
        displayName="[UNIF] Modular Carrier Compact Vest (OD)";
        picture="\UNIF_UN_Faction_JCA_Gear\UI\UN_Item_UI.paa";
        hiddenSelectionsTextures[]=
        {
            "UNIF_UN_Faction_JCA_Gear\Textures\Vest_OD.paa",
            "",
            "UNIF_UN_Faction_JCA_Gear\Textures\UN_Patch_b.paa"
        };
    };
    class UNIF_UN_Faction_JCA_Gear_Vest_OD_CQB: JCA_MCRP_V_CarrierRigKBT_01_CQB_olive_F
    {
        scope=2;
        displayName="[UNIF] Modular Carrier CQB Rig (OD)";
        picture="\UNIF_UN_Faction_JCA_Gear\UI\UN_Item_UI.paa";
        hiddenSelectionsTextures[]=
        {
            "UNIF_UN_Faction_JCA_Gear\Textures\Vest_OD.paa",
            "",
            "UNIF_UN_Faction_JCA_Gear\Textures\UN_Patch_b.paa"
        };
    };
    class UNIF_UN_Faction_JCA_Gear_Vest_OD_Crew: JCA_MCRP_V_CarrierRigKBT_01_crew_olive_F
    {
        scope=2;
        displayName="[UNIF] Modular Carrier Crew Vest (OD)";
        picture="\UNIF_UN_Faction_JCA_Gear\UI\UN_Item_UI.paa";
        hiddenSelectionsTextures[]=
        {
            "UNIF_UN_Faction_JCA_Gear\Textures\Vest_OD.paa",
            ""
        };
    };
    
    class UNIF_UN_Faction_JCA_Gear_Vest_OD_Recon: JCA_MCRP_V_CarrierRigKBT_01_recon_olive_F
    {
        scope=2;
        displayName="[UNIF] Modular Carrier Recon Rig (OD)";
        picture="\UNIF_UN_Faction_JCA_Gear\UI\UN_Item_UI.paa";
        hiddenSelectionsTextures[]=
        {
            "UNIF_UN_Faction_JCA_Gear\Textures\Vest_OD.paa",
            "",
            "UNIF_UN_Faction_JCA_Gear\Textures\UN_Patch_b.paa"
        };
    };
    class UNIF_UN_Faction_JCA_Gear_Vest_OD_Tactical: JCA_MCRP_V_CarrierRigKBT_01_tactical_olive_F
    {
        scope=2;
        displayName="[UNIF] Modular Carrier Tactical Rig (OD)";
        picture="\UNIF_UN_Faction_JCA_Gear\UI\UN_Item_UI.paa";
        hiddenSelectionsTextures[]=
        {
            "UNIF_UN_Faction_JCA_Gear\Textures\Vest_OD.paa",
            "",
            "UNIF_UN_Faction_JCA_Gear\Textures\UN_Patch_b.paa",
            "UNIF_UN_Faction_JCA_Gear\Textures\UN_Patch_b.paa",
            "UNIF_UN_Faction_JCA_Gear\Textures\UN_Patch_b.paa"
        };
    };

    //// OGA

    class UNIF_UN_Faction_JCA_Gear_Vest_OGA_Combat: JCA_MCRP_V_CarrierRigKBT_01_combat_olive_F
    {
        scope=2;
        displayName="[UNIF] Modular Carrier Combat Rig (OGA)";
        picture="\UNIF_UN_Faction_JCA_Gear\UI\UN_Item_UI.paa";
        hiddenSelectionsTextures[]=
        {
            "UNIF_UN_Faction_JCA_Gear\Textures\Vest_OGA.paa",
            "",
            "UNIF_UN_Faction_JCA_Gear\Textures\UN_Patch_b.paa"
        };
    };
    class UNIF_UN_Faction_JCA_Gear_Vest_OGA_Command: JCA_MCRP_V_CarrierRigKBT_01_command_olive_F
    {
        scope=2;
        displayName="[UNIF] Modular Carrier Command Rig (OGA)";
        picture="\UNIF_UN_Faction_JCA_Gear\UI\UN_Item_UI.paa";
        hiddenSelectionsTextures[]=
        {
            "UNIF_UN_Faction_JCA_Gear\Textures\Vest_OGA.paa",
            "",
            "UNIF_UN_Faction_JCA_Gear\Textures\UN_Patch_b.paa",
            "UNIF_UN_Faction_JCA_Gear\Textures\UN_Patch_b.paa"
        };
    };
    class UNIF_UN_Faction_JCA_Gear_Vest_OGA_Compact: JCA_MCRP_V_CarrierRigKBT_01_compact_olive_F
    {
        scope=2;
        displayName="[UNIF] Modular Carrier Compact Vest (OGA)";
        picture="\UNIF_UN_Faction_JCA_Gear\UI\UN_Item_UI.paa";
        hiddenSelectionsTextures[]=
        {
            "UNIF_UN_Faction_JCA_Gear\Textures\Vest_OGA.paa",
            "",
            "UNIF_UN_Faction_JCA_Gear\Textures\UN_Patch_b.paa"
        };
    };
    class UNIF_UN_Faction_JCA_Gear_Vest_OGA_CQB: JCA_MCRP_V_CarrierRigKBT_01_CQB_olive_F
    {
        scope=2;
        displayName="[UNIF] Modular Carrier CQB Rig (OGA)";
        picture="\UNIF_UN_Faction_JCA_Gear\UI\UN_Item_UI.paa";
        hiddenSelectionsTextures[]=
        {
            "UNIF_UN_Faction_JCA_Gear\Textures\Vest_OGA.paa",
            "",
            "UNIF_UN_Faction_JCA_Gear\Textures\UN_Patch_b.paa"
        };
    };
    class UNIF_UN_Faction_JCA_Gear_Vest_OGA_Crew: JCA_MCRP_V_CarrierRigKBT_01_crew_olive_F
    {
        scope=2;
        displayName="[UNIF] Modular Carrier Crew Vest (OGA)";
        picture="\UNIF_UN_Faction_JCA_Gear\UI\UN_Item_UI.paa";
        hiddenSelectionsTextures[]=
        {
            "UNIF_UN_Faction_JCA_Gear\Textures\Vest_OGA.paa",
            ""
        };
    };
    
    class UNIF_UN_Faction_JCA_Gear_Vest_OGA_Recon: JCA_MCRP_V_CarrierRigKBT_01_recon_olive_F
    {
        scope=2;
        displayName="[UNIF] Modular Carrier Recon Rig (OGA)";
        picture="\UNIF_UN_Faction_JCA_Gear\UI\UN_Item_UI.paa";
        hiddenSelectionsTextures[]=
        {
            "UNIF_UN_Faction_JCA_Gear\Textures\Vest_OGA.paa",
            "",
            "UNIF_UN_Faction_JCA_Gear\Textures\UN_Patch_b.paa"
        };
    };
    class UNIF_UN_Faction_JCA_Gear_Vest_OGA_Tactical: JCA_MCRP_V_CarrierRigKBT_01_tactical_olive_F
    {
        scope=2;
        displayName="[UNIF] Modular Carrier Tactical Rig (OGA)";
        picture="\UNIF_UN_Faction_JCA_Gear\UI\UN_Item_UI.paa";
        hiddenSelectionsTextures[]=
        {
            "UNIF_UN_Faction_JCA_Gear\Textures\Vest_OGA.paa",
            "",
            "UNIF_UN_Faction_JCA_Gear\Textures\UN_Patch_b.paa",
            "UNIF_UN_Faction_JCA_Gear\Textures\UN_Patch_b.paa",
            "UNIF_UN_Faction_JCA_Gear\Textures\UN_Patch_b.paa"
        };
    };



    //************************************************************************************************************************************************************************************************
    //*****             guns               *********************************************************************************************************************************************************
    //************************************************************************************************************************************************************************************************
	
};
    

  //************************************************************************************************************************************************************************************************
  //*****             Groups               *********************************************************************************************************************************************************
  //************************************************************************************************************************************************************************************************
