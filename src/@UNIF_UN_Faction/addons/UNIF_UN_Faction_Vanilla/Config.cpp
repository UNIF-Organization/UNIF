class CfgPatches 
{ 
    class UNIF_UN_Faction_Vanilla
    { 
       units[] =  // UNITTS are added here so they show up on zeus
        {
      	"UNIF_Faction_UN_KA60_Unarmed",
      	"UNIF_Faction_UN_KA60_Armed",

	    	"UNIF_Faction_UN_HEMTT_Empty",
	    	"UNIF_Faction_UN_HEMTT_Ammo",
	    	"UNIF_Faction_UN_HEMTT_Cargo",
	    	"UNIF_Faction_UN_HEMTT_Flatbed",
	    	"UNIF_Faction_UN_HEMTT_Fuel",
	    	"UNIF_Faction_UN_HEMTT_Repair",
	    	"UNIF_Faction_UN_HEMTT_Transport",
	    	"UNIF_Faction_UN_HEMTT_Covered",

	    	"UNIF_Faction_UN_KAMAZ_water",
	    	"UNIF_Faction_UN_KAMAZ_fuel",
	    	"UNIF_Faction_UN_KAMAZ_ammo",
	    	"UNIF_Faction_UN_KAMAZ_repair",
	    	"UNIF_Faction_UN_KAMAZ_transport",
	    	"UNIF_Faction_UN_KAMAZ_transport_covered",
	    	"UNIF_Faction_UN_KAMAZ_empty",

  			"UNIF_Faction_UN_Offroad_Unarmed",
  			"UNIF_Faction_UN_Offroad_AT",
  			"UNIF_Faction_UN_Offroad_M2",
  			"UNIF_Faction_UN_Offroad_Repair",
  			"UNIF_Faction_UN_Offroad_Comms",

        "UNIF_Faction_UN_Quadbike",

        "UNIF_Faction_UN_Jeep_Unarmed",
        "UNIF_Faction_UN_Jeep_LMG",
        "UNIF_Faction_UN_Jeep_AT",
        }; 
        weapons[] = 
        {
        	
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
    class I_C_Offroad_02_unarmed_F;
    class I_C_Offroad_02_LMG_F;
    class I_C_Offroad_02_AT_F;

    class UNIF_Faction_UN_Jeep_Unarmed: I_C_Offroad_02_unarmed_F
    {
      faction="UNIF_Faction_UNIF_UN_BLUFOR";
      editorSubcategory = "EdSubcat_Cars";
      editorPreview  = "\UNIF_UN_Faction_Vanilla\UI\UNIF_Faction_UN_Jeep_Unarmed.jpg";

      side=1;
      hiddenSelectionsTextures[]= 
      {
        "\UNIF_UN_Faction_Vanilla\textures\jeep\jeep_un.paa",
        "\UNIF_UN_Faction_Vanilla\textures\jeep\jeep_un.paa",
        "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_white_co.paa",
        "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_white_co.paa",
      };
      textureList[] = {};
      crew="UNIF_UN_Faction_Soldier_Rifleman";
      typicalCargo[]={"UNIF_UN_Faction_Soldier_Rifleman"};

      animationList[] = {"hideLeftDoor",0,"hideRightDoor",0,"hideRearDoor",0,"hideBullbar",0,"hideFenders",0,"hideHeadSupportFront",0,"hideHeadSupportRear",0,"hideRollcage",0,"hideSpareWheel",0,"hideSeatsRear",0};
    };

    class UNIF_Faction_UN_Jeep_LMG: I_C_Offroad_02_LMG_F
    {
      faction="UNIF_Faction_UNIF_UN_BLUFOR";
      editorSubcategory = "EdSubcat_Cars";
      editorPreview  = "\UNIF_UN_Faction_Vanilla\UI\UNIF_Faction_UN_Jeep_LMG.jpg";

      side=1;
      hiddenSelectionsTextures[]= 
      {
        "\UNIF_UN_Faction_Vanilla\textures\jeep\jeep_un.paa",
        "\UNIF_UN_Faction_Vanilla\textures\jeep\jeep_un.paa",
        "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_white_co.paa",
        "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_white_co.paa",
      };
      textureList[] = {};
      crew="UNIF_UN_Faction_Soldier_Rifleman";
      typicalCargo[]={"UNIF_UN_Faction_Soldier_Rifleman"};

      animationList[] = {"hideLeftDoor",0,"hideRightDoor",0,"hideRearDoor",0,"hideBullbar",0,"hideFenders",0,"hideHeadSupportFront",0,"hideHeadSupportRear",0,"hideRollcage",0,"hideSpareWheel",0,"hideSeatsRear",0};
    };

    class UNIF_Faction_UN_Jeep_AT: I_C_Offroad_02_AT_F
    {
      faction="UNIF_Faction_UNIF_UN_BLUFOR";
      editorSubcategory = "EdSubcat_Cars";
      editorPreview  = "\UNIF_UN_Faction_Vanilla\UI\UNIF_Faction_UN_Jeep_AT.jpg";

      side=1;
      hiddenSelectionsTextures[]= 
      {
        "\UNIF_UN_Faction_Vanilla\textures\jeep\jeep_un.paa",
        "\UNIF_UN_Faction_Vanilla\textures\jeep\jeep_un.paa",
        "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_white_co.paa",
        "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_white_co.paa",
      };
      textureList[] = {};
      crew="UNIF_UN_Faction_Soldier_Rifleman";
      typicalCargo[]={"UNIF_UN_Faction_Soldier_Rifleman"};

      animationList[] = {"hideLeftDoor",0,"hideRightDoor",0,"hideRearDoor",0,"hideBullbar",0,"hideFenders",0,"hideHeadSupportFront",0,"hideHeadSupportRear",0,"hideRollcage",0,"hideSpareWheel",0,"hideSeatsRear",0};
    };

  class C_Quadbike_01_F;

  class UNIF_Faction_UN_Quadbike: C_Quadbike_01_F
    {
      faction="UNIF_Faction_UNIF_UN_BLUFOR";
      editorSubcategory = "EdSubcat_Cars";
      editorPreview  = "\UNIF_UN_Faction_Vanilla\UI\UNIF_Faction_UN_Quadbike.jpg";

      side=1;
      textureList[] = 
      {
        "White",1
      };

      crew="UNIF_UN_Faction_Soldier_Rifleman";
      typicalCargo[]={"UNIF_UN_Faction_Soldier_Rifleman"};
    };

	class O_Heli_Light_02_unarmed_F;
	class O_Heli_Light_02_dynamicLoadout_F;

	class UNIF_Faction_UN_KA60_Armed: O_Heli_Light_02_dynamicLoadout_F
    {
      faction="UNIF_Faction_UNIF_UN_BLUFOR";
      editorSubcategory = "UNIF_Faction_edcat_RUS_Helicopters";
      editorPreview  = "\UNIF_UN_Faction_Vanilla\UI\UNIF_Faction_UN_KA60_Armed.jpg";

      side=1;
      hiddenSelectionsTextures[]= 
      {
        "\UNIF_UN_Faction_Vanilla\textures\ka60\ka60_ext_co_UNIF_White.paa",
      };
      
      class textureSources
      {
          class UNNormal
          {
              displayName="United Nations (White)";
              author="Mod Team";
              textures[]=
              {
                  "\UNIF_UN_Faction_Vanilla\textures\ka60\ka60_ext_co_UNIF_White.paa",
              };
              factions[]={};
          };
          class UNSand
          {
              displayName="United Nations (Sand)";
              author="Mod Team";
              textures[]=
              {
                  "\UNIF_UN_Faction_Vanilla\textures\ka60\ka60_ext_co_UNIF_Sand.paa",
              };
              factions[]={};
          };
          class UNOlive
          {
              displayName="United Nations (Olive)";
              author="Mod Team";
              textures[]=
              {
                  "\UNIF_UN_Faction_Vanilla\textures\ka60\ka60_ext_co_UNIF_Olive.paa",
              };
              factions[]={};
          };
      };
      textureList[] = 
      {
        "UNNormal",1,
      };

      crew="UNIF_UN_Faction_Soldier_Pilot_Helicopter";
      typicalCargo[]={"UNIF_UN_Faction_Soldier_Pilot_Helicopter"};
    };

	class UNIF_Faction_UN_KA60_Unarmed: O_Heli_Light_02_unarmed_F
    {
      faction="UNIF_Faction_UNIF_UN_BLUFOR";
      editorSubcategory = "UNIF_Faction_edcat_RUS_Helicopters";
      editorPreview  = "\UNIF_UN_Faction_Vanilla\UI\UNIF_Faction_UN_KA60_Unarmed.jpg";

      side=1;
      hiddenSelectionsTextures[]= 
      {
        "\UNIF_UN_Faction_Vanilla\textures\ka60\ka60_ext_co_UNIF_White.paa",
      };
      
      class textureSources
      {
          class UNNormal
          {
              displayName="United Nations (White)";
              author="Mod Team";
              textures[]=
              {
                  "\UNIF_UN_Faction_Vanilla\textures\ka60\ka60_ext_co_UNIF_White.paa",
              };
              factions[]={};
          };
          class UNSand
          {
              displayName="United Nations (Sand)";
              author="Mod Team";
              textures[]=
              {
                  "\UNIF_UN_Faction_Vanilla\textures\ka60\ka60_ext_co_UNIF_Sand.paa",
              };
              factions[]={};
          };
          class UNOlive
          {
              displayName="United Nations (Olive)";
              author="Mod Team";
              textures[]=
              {
                  "\UNIF_UN_Faction_Vanilla\textures\ka60\ka60_ext_co_UNIF_Olive.paa",
              };
              factions[]={};
          };
      };
      textureList[] = 
      {
        "UNNormal",1,
      };

      crew="UNIF_UN_Faction_Soldier_Pilot_Helicopter";
      typicalCargo[]={"UNIF_UN_Faction_Soldier_Pilot_Helicopter"};
    };

	class B_Truck_01_mover_F;
	class B_Truck_01_ammo_F;
	class B_Truck_01_cargo_F;
	class B_Truck_01_flatbed_F;
	class B_Truck_01_fuel_F;
	class B_Truck_01_Repair_F;
	class B_Truck_01_transport_F;
	class B_Truck_01_covered_F;

	class UNIF_Faction_UN_HEMTT_Covered: B_Truck_01_covered_F
    {
      faction="UNIF_Faction_UNIF_UN_BLUFOR";
      editorSubcategory = "UNIF_Faction_edcat_NATO_Trucks";
      editorPreview  = "\UNIF_UN_Faction_Vanilla\UI\UNIF_Faction_UN_HEMTT_Covered.jpg";

      side=1;
      hiddenSelectionsTextures[]= 
      {
        "\UNIF_UN_Faction_Vanilla\textures\hemtt\Hemmt_UN_Base_0.paa",
        "\UNIF_UN_Faction_Vanilla\textures\hemtt\Hemmt_UN_Base_1.paa",
        "\UNIF_UN_Faction_Vanilla\textures\hemtt\Hemmt_UN_cargo.paa",
        "\UNIF_UN_Faction_Vanilla\textures\hemtt\Hemmt_UN_cover_white.paa",
      };
      
      class textureSources
      {
          class UNNormal
          {
              displayName="United Nations (White Tarp)";
              author="Mod Team";
              textures[]=
              {
                  "\UNIF_UN_Faction_Vanilla\textures\hemtt\Hemmt_UN_Base_0.paa",
                  "\UNIF_UN_Faction_Vanilla\textures\hemtt\Hemmt_UN_Base_1.paa",
                  "\UNIF_UN_Faction_Vanilla\textures\hemtt\Hemmt_UN_cargo.paa",
                  "\UNIF_UN_Faction_Vanilla\textures\hemtt\Hemmt_UN_cover_white.paa",
              };
              factions[]={};
          };
          class UNBlue
          {
              displayName="United Nations (Blue Tarp)";
              author="Mod Team";
              textures[]=
              {
                  "\UNIF_UN_Faction_Vanilla\textures\hemtt\Hemmt_UN_Base_0.paa",
                  "\UNIF_UN_Faction_Vanilla\textures\hemtt\Hemmt_UN_Base_1.paa",
                  "\UNIF_UN_Faction_Vanilla\textures\hemtt\Hemmt_UN_cargo.paa",
                  "\UNIF_UN_Faction_Vanilla\textures\hemtt\Hemmt_UN_cover_blue.paa",
              };
              factions[]={};
          };
      };
      textureList[] = 
      {
        "UNNormal",1,
        "UNBlue",1
      };

      crew="UNIF_UN_Faction_Soldier_Rifleman";
      typicalCargo[]={"UNIF_UN_Faction_Soldier_Rifleman"};
    };

	class UNIF_Faction_UN_HEMTT_Transport: B_Truck_01_transport_F
    {
      faction="UNIF_Faction_UNIF_UN_BLUFOR";
      editorSubcategory = "UNIF_Faction_edcat_NATO_Trucks";
      editorPreview  = "\UNIF_UN_Faction_Vanilla\UI\UNIF_Faction_UN_HEMTT_Transport.jpg";

      side=1;
      hiddenSelectionsTextures[]= 
      {
        "\UNIF_UN_Faction_Vanilla\textures\hemtt\Hemmt_UN_Base_0.paa",
        "\UNIF_UN_Faction_Vanilla\textures\hemtt\Hemmt_UN_Base_1.paa",
        "\UNIF_UN_Faction_Vanilla\textures\hemtt\Hemmt_UN_cargo.paa",
      };
      textureList[] = {};
      crew="UNIF_UN_Faction_Soldier_Rifleman";
      typicalCargo[]={"UNIF_UN_Faction_Soldier_Rifleman"};
    };

	class UNIF_Faction_UN_HEMTT_Repair: B_Truck_01_Repair_F
    {
      faction="UNIF_Faction_UNIF_UN_BLUFOR";
      editorSubcategory = "UNIF_Faction_edcat_NATO_Trucks";
      editorPreview  = "\UNIF_UN_Faction_Vanilla\UI\UNIF_Faction_UN_HEMTT_Repair.jpg";

      side=1;
      hiddenSelectionsTextures[]= 
      {
        "\UNIF_UN_Faction_Vanilla\textures\hemtt\Hemmt_UN_Base_0.paa",
        "\UNIF_UN_Faction_Vanilla\textures\hemtt\Hemmt_UN_Base_1.paa",
        "\UNIF_UN_Faction_Vanilla\textures\hemtt\Hemmt_UN_ammo_white.paa",
        "\UNIF_UN_Faction_Vanilla\textures\hemtt\Hemmt_UN_container.paa",
      };
      textureList[] = {};
      crew="UNIF_UN_Faction_Soldier_Rifleman";
      typicalCargo[]={"UNIF_UN_Faction_Soldier_Rifleman"};
    };

	class UNIF_Faction_UN_HEMTT_Fuel: B_Truck_01_fuel_F
    {
      faction="UNIF_Faction_UNIF_UN_BLUFOR";
      editorSubcategory = "UNIF_Faction_edcat_NATO_Trucks";
      editorPreview  = "\UNIF_UN_Faction_Vanilla\UI\UNIF_Faction_UN_HEMTT_Fuel.jpg";

      side=1;
      hiddenSelectionsTextures[]= 
      {
        "\UNIF_UN_Faction_Vanilla\textures\hemtt\Hemmt_UN_Base_0.paa",
        "\UNIF_UN_Faction_Vanilla\textures\hemtt\Hemmt_UN_Base_1.paa",
        "\UNIF_UN_Faction_Vanilla\textures\hemtt\Hemmt_UN_fuel_white.paa",
      };
      
      class textureSources
      {
          class UNNormal
          {
              displayName="United Nations (White Tanker)";
              author="Mod Team";
              textures[]=
              {
                  "\UNIF_UN_Faction_Vanilla\textures\hemtt\Hemmt_UN_Base_0.paa",
                  "\UNIF_UN_Faction_Vanilla\textures\hemtt\Hemmt_UN_Base_1.paa",
                  "\UNIF_UN_Faction_Vanilla\textures\hemtt\Hemmt_UN_fuel_white.paa",
              };
              factions[]={};
          };
          class UNRed
          {
              displayName="United Nations (Red Tanker)";
              author="Mod Team";
              textures[]=
              {
                  "\UNIF_UN_Faction_Vanilla\textures\hemtt\Hemmt_UN_Base_0.paa",
                  "\UNIF_UN_Faction_Vanilla\textures\hemtt\Hemmt_UN_Base_1.paa",
                  "\UNIF_UN_Faction_Vanilla\textures\hemtt\Hemmt_UN_fuel_red.paa",
              };
              factions[]={};
          };
      };
      textureList[] = 
      {
        "UNNormal",1,
        "UNRed",1
      };

      crew="UNIF_UN_Faction_Soldier_Rifleman";
      typicalCargo[]={"UNIF_UN_Faction_Soldier_Rifleman"};
    };

	class UNIF_Faction_UN_HEMTT_Flatbed: B_Truck_01_flatbed_F
    {
      faction="UNIF_Faction_UNIF_UN_BLUFOR";
      editorSubcategory = "UNIF_Faction_edcat_NATO_Trucks";
      editorPreview  = "\UNIF_UN_Faction_Vanilla\UI\UNIF_Faction_UN_HEMTT_Flatbed.jpg";

      animationList[] = {"Tyre1_hide",1};

      side=1;
      hiddenSelectionsTextures[]= 
      {
        "\UNIF_UN_Faction_Vanilla\textures\hemtt\Hemmt_UN_Base_0.paa",
        "\UNIF_UN_Faction_Vanilla\textures\hemtt\Hemmt_UN_Base_1.paa",
        "\UNIF_UN_Faction_Vanilla\textures\hemtt\Hemmt_UN_ammo_white.paa",
        "\UNIF_UN_Faction_Vanilla\textures\hemtt\Hemmt_UN_cargo.paa",
      };
      textureList[] = {};
      crew="UNIF_UN_Faction_Soldier_Rifleman";
      typicalCargo[]={"UNIF_UN_Faction_Soldier_Rifleman"};
    };

	class UNIF_Faction_UN_HEMTT_Cargo: B_Truck_01_cargo_F
    {
      faction="UNIF_Faction_UNIF_UN_BLUFOR";
      editorSubcategory = "UNIF_Faction_edcat_NATO_Trucks";
      editorPreview  = "\UNIF_UN_Faction_Vanilla\UI\UNIF_Faction_UN_HEMTT_Cargo.jpg";

      animationList[] = {"Tyre1_hide",1};

      side=1;
      hiddenSelectionsTextures[]= 
      {
        "\UNIF_UN_Faction_Vanilla\textures\hemtt\Hemmt_UN_Base_0.paa",
        "\UNIF_UN_Faction_Vanilla\textures\hemtt\Hemmt_UN_Base_1.paa",
        "\UNIF_UN_Faction_Vanilla\textures\hemtt\Hemmt_UN_ammo_white.paa",
        "\UNIF_UN_Faction_Vanilla\textures\hemtt\Hemmt_UN_cargo.paa",
      };
      textureList[] = {};
      crew="UNIF_UN_Faction_Soldier_Rifleman";
      typicalCargo[]={"UNIF_UN_Faction_Soldier_Rifleman"};
    };

	class UNIF_Faction_UN_HEMTT_Ammo: B_Truck_01_ammo_F
    {
      faction="UNIF_Faction_UNIF_UN_BLUFOR";
      editorSubcategory = "UNIF_Faction_edcat_NATO_Trucks";
      editorPreview  = "\UNIF_UN_Faction_Vanilla\UI\UNIF_Faction_UN_HEMTT_Ammo.jpg";

      side=1;
      hiddenSelectionsTextures[]= 
      {
        "\UNIF_UN_Faction_Vanilla\textures\hemtt\Hemmt_UN_Base_0.paa",
        "\UNIF_UN_Faction_Vanilla\textures\hemtt\Hemmt_UN_Base_1.paa",
        "\UNIF_UN_Faction_Vanilla\textures\hemtt\Hemmt_UN_ammo_white.paa",
      };
      
      class textureSources
      {
          class UNNormal
          {
              displayName="United Nations (White Tarp)";
              author="Mod Team";
              textures[]=
              {
                  "\UNIF_UN_Faction_Vanilla\textures\hemtt\Hemmt_UN_Base_0.paa",
                  "\UNIF_UN_Faction_Vanilla\textures\hemtt\Hemmt_UN_Base_1.paa",
                  "\UNIF_UN_Faction_Vanilla\textures\hemtt\Hemmt_UN_ammo_white.paa",
              };
              factions[]={};
          };
          class UNBlue
          {
              displayName="United Nations (Blue Tarp)";
              author="Mod Team";
              textures[]=
              {
                  "\UNIF_UN_Faction_Vanilla\textures\hemtt\Hemmt_UN_Base_0.paa",
                  "\UNIF_UN_Faction_Vanilla\textures\hemtt\Hemmt_UN_Base_1.paa",
                  "\UNIF_UN_Faction_Vanilla\textures\hemtt\Hemmt_UN_ammo_blue.paa",
              };
              factions[]={};
          };
      };
      textureList[] = 
      {
        "UNNormal",1,
        "UNBlue",1
      };

      crew="UNIF_UN_Faction_Soldier_Rifleman";
      typicalCargo[]={"UNIF_UN_Faction_Soldier_Rifleman"};
    };

	class UNIF_Faction_UN_HEMTT_Empty: B_Truck_01_mover_F
    {
      faction="UNIF_Faction_UNIF_UN_BLUFOR";
      editorSubcategory = "UNIF_Faction_edcat_NATO_Trucks";
      editorPreview  = "\UNIF_UN_Faction_Vanilla\UI\UNIF_Faction_UN_HEMTT_Empty.jpg";

      side=1;
      hiddenSelectionsTextures[]= 
      {
        "\UNIF_UN_Faction_Vanilla\textures\hemtt\Hemmt_UN_Base_0.paa",
        "\UNIF_UN_Faction_Vanilla\textures\hemtt\Hemmt_UN_Base_1.paa",
        "\UNIF_UN_Faction_Vanilla\textures\hemtt\Hemmt_UN_empty.paa",
      };
      textureList[] = {};
      crew="UNIF_UN_Faction_Soldier_Rifleman";
      typicalCargo[]={"UNIF_UN_Faction_Soldier_Rifleman"};
    };

	class C_IDAP_Truck_02_water_F;
	class I_Truck_02_ammo_F;
	class I_Truck_02_fuel_F;
	class I_Truck_02_box_F;
	class I_Truck_02_transport_F;
	class I_Truck_02_covered_F;

	class UNIF_Faction_UN_KAMAZ_water: C_IDAP_Truck_02_water_F
    {
      faction="UNIF_Faction_UNIF_UN_BLUFOR";
      editorSubcategory = "UNIF_Faction_edcat_RUS_Trucks";
      editorPreview  = "\UNIF_UN_Faction_Vanilla\UI\UNIF_Faction_UN_KAMAZ_water.jpg";

      displayName = "Kamaz (Water)";

      side=1;
      hiddenSelectionsTextures[]= 
      {
        "\UNIF_UN_Faction_Vanilla\textures\kamaz\un_kamaz_kab_co.paa",
        "\UNIF_UN_Faction_Vanilla\textures\kamaz\UN_KAMAZ_water.paa",
        "\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa"
      };
      textureList[] = {};
      crew="UNIF_UN_Faction_Soldier_Rifleman";
      typicalCargo[]={"UNIF_UN_Faction_Soldier_Rifleman"};
    };

    class UNIF_Faction_UN_KAMAZ_fuel: I_Truck_02_fuel_F
    {
      faction="UNIF_Faction_UNIF_UN_BLUFOR";
      editorSubcategory = "UNIF_Faction_edcat_RUS_Trucks";
      editorPreview  = "\UNIF_UN_Faction_Vanilla\UI\UNIF_Faction_UN_KAMAZ_fuel.jpg";

      side=1;
      hiddenSelectionsTextures[]= 
      {
        "\UNIF_UN_Faction_Vanilla\textures\kamaz\un_kamaz_kab_co.paa",
        "\UNIF_UN_Faction_Vanilla\textures\kamaz\un_kamaz_fuel_co.paa",
        "\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa"
      };
      textureList[] = {};
      crew="UNIF_UN_Faction_Soldier_Rifleman";
      typicalCargo[]={"UNIF_UN_Faction_Soldier_Rifleman"};
    };

    class UNIF_Faction_UN_KAMAZ_ammo: I_Truck_02_ammo_F
    {
      faction="UNIF_Faction_UNIF_UN_BLUFOR";
      editorSubcategory = "UNIF_Faction_edcat_RUS_Trucks";
      editorPreview  = "\UNIF_UN_Faction_Vanilla\UI\UNIF_Faction_UN_KAMAZ_ammo.jpg";

      side=1;
      hiddenSelectionsTextures[]= 
      {
        "\UNIF_UN_Faction_Vanilla\textures\kamaz\un_kamaz_kab_co.paa",
        "\UNIF_UN_Faction_Vanilla\textures\kamaz\UN_KAMAZ_REPAIR.paa",
        "\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa"
      };
      textureList[] = {};
      crew="UNIF_UN_Faction_Soldier_Rifleman";
      typicalCargo[]={"UNIF_UN_Faction_Soldier_Rifleman"};
    };

    class UNIF_Faction_UN_KAMAZ_repair: I_Truck_02_box_F
    {
      faction="UNIF_Faction_UNIF_UN_BLUFOR";
      editorSubcategory = "UNIF_Faction_edcat_RUS_Trucks";
      editorPreview  = "\UNIF_UN_Faction_Vanilla\UI\UNIF_Faction_UN_KAMAZ_repair.jpg";

      side=1;
      hiddenSelectionsTextures[]= 
      {
        "\UNIF_UN_Faction_Vanilla\textures\kamaz\un_kamaz_kab_co.paa",
        "\UNIF_UN_Faction_Vanilla\textures\kamaz\UN_KAMAZ_REPAIR.paa",
        "\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa"
      };
      textureList[] = {};
      crew="UNIF_UN_Faction_Soldier_Rifleman";
      typicalCargo[]={"UNIF_UN_Faction_Soldier_Rifleman"};
    };

    class UNIF_Faction_UN_KAMAZ_transport: I_Truck_02_transport_F
    {
      faction="UNIF_Faction_UNIF_UN_BLUFOR";
      editorSubcategory = "UNIF_Faction_edcat_RUS_Trucks";
      editorPreview  = "\UNIF_UN_Faction_Vanilla\UI\UNIF_Faction_UN_KAMAZ_transport.jpg";

      side=1;
      hiddenSelectionsTextures[]= 
      {
        "\UNIF_UN_Faction_Vanilla\textures\kamaz\un_kamaz_kab_co.paa",
        "\UNIF_UN_Faction_Vanilla\textures\kamaz\un_kamaz_kuz_co.paa",
        "\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa"
      };
      textureList[] = {};
      crew="UNIF_UN_Faction_Soldier_Rifleman";
      typicalCargo[]={"UNIF_UN_Faction_Soldier_Rifleman"};
    };

    class UNIF_Faction_UN_KAMAZ_transport_covered: I_Truck_02_covered_F
    {
      faction="UNIF_Faction_UNIF_UN_BLUFOR";
      editorSubcategory = "UNIF_Faction_edcat_RUS_Trucks";
      editorPreview  = "\UNIF_UN_Faction_Vanilla\UI\UNIF_Faction_UN_KAMAZ_transport_covered.jpg";

      side=1;
      hiddenSelectionsTextures[]= 
      {
        "\UNIF_UN_Faction_Vanilla\textures\kamaz\un_kamaz_kab_co.paa",
        "\UNIF_UN_Faction_Vanilla\textures\kamaz\un_kamaz_kuz_co.paa",
        "\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa"
      };
      textureList[] = {};
      crew="UNIF_UN_Faction_Soldier_Rifleman";
      typicalCargo[]={"UNIF_UN_Faction_Soldier_Rifleman"};
    };

    class UNIF_Faction_UN_KAMAZ_empty: I_Truck_02_box_F
    {
      faction="UNIF_Faction_UNIF_UN_BLUFOR";
      editorSubcategory = "UNIF_Faction_edcat_RUS_Trucks";
      editorPreview  = "\UNIF_UN_Faction_Vanilla\UI\UNIF_Faction_UN_KAMAZ_empty.jpg";

      displayName = "Kamaz (Empty)";

      model = "\A3\soft_f_gamma\Truck_02\Truck_02_fuel_F";
      transportRepair = 0;

      side=1;
      hiddenSelectionsTextures[]= 
      {
        "\UNIF_UN_Faction_Vanilla\textures\kamaz\un_kamaz_kab_co.paa",
        "",
        "\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa"
      };
      textureList[] = {};
      crew="UNIF_UN_Faction_Soldier_Rifleman";
      typicalCargo[]={"UNIF_UN_Faction_Soldier_Rifleman"};
    };

    class C_Offroad_01_repair_F;
    class B_G_Offroad_01_armed_F;
    class B_G_Offroad_01_AT_F;
    class B_G_Offroad_01_F;
    class B_GEN_Offroad_01_comms_F;

    class UNIF_Faction_UN_Offroad_Unarmed: B_G_Offroad_01_F
    {
      faction="UNIF_Faction_UNIF_UN_BLUFOR";
      editorSubcategory = "EdSubcat_Cars";
      editorPreview  = "\UNIF_UN_Faction_Vanilla\UI\UNIF_Faction_UN_Offroad_Unarmed.jpg";

      side=1;
      hiddenSelectionsTextures[]= 
      {
        "\UNIF_UN_Faction_Vanilla\textures\offroad\un_offroad_co.paa",
        "\UNIF_UN_Faction_Vanilla\textures\offroad\un_offroad_co.paa",
      };
      textureList[] = {};
      crew="UNIF_UN_Faction_Soldier_Rifleman";
      typicalCargo[]={"UNIF_UN_Faction_Soldier_Rifleman"};
      animationList[] = {"HideDoor1",0,"HideDoor2",0,"HideDoor3",0,"HideBackpacks",1,"HideBumper1",1,"HideBumper2",0,"HideConstruction",0,"hidePolice",1,"HideServices",1,"BeaconsStart",0,"BeaconsServicesStart",0};
    };

    class UNIF_Faction_UN_Offroad_AT: B_G_Offroad_01_AT_F
    {
      faction="UNIF_Faction_UNIF_UN_BLUFOR";
      editorSubcategory = "EdSubcat_Cars";
      editorPreview  = "\UNIF_UN_Faction_Vanilla\UI\UNIF_Faction_UN_Offroad_AT.jpg";

      side=1;
      hiddenSelectionsTextures[]= 
      {
        "\UNIF_UN_Faction_Vanilla\textures\offroad\un_offroad_co.paa",
        "\UNIF_UN_Faction_Vanilla\textures\offroad\un_offroad_co.paa",
      };
      textureList[] = {};
      crew="UNIF_UN_Faction_Soldier_Rifleman";
      typicalCargo[]={"UNIF_UN_Faction_Soldier_Rifleman"};
      animationList[] = {"HideDoor1",0,"HideDoor2",0,"HideDoor3",0,"HideBackpacks",1,"HideBumper1",1,"HideBumper2",0,"HideConstruction",0};
    };

    class UNIF_Faction_UN_Offroad_M2: B_G_Offroad_01_armed_F
    {
      faction="UNIF_Faction_UNIF_UN_BLUFOR";
      editorSubcategory = "EdSubcat_Cars";
      editorPreview  = "\UNIF_UN_Faction_Vanilla\UI\UNIF_Faction_UN_Offroad_M2.jpg";

      side=1;
      hiddenSelectionsTextures[]= 
      {
        "\UNIF_UN_Faction_Vanilla\textures\offroad\un_offroad_co.paa",
        "\UNIF_UN_Faction_Vanilla\textures\offroad\un_offroad_co.paa",
      };
      textureList[] = {};
      crew="UNIF_UN_Faction_Soldier_Rifleman";
      typicalCargo[]={"UNIF_UN_Faction_Soldier_Rifleman"};
      animationList[] = {"Hide_Shield",0,"Hide_Rail",0,"HideDoor1",0,"HideDoor2",0,"HideDoor3",0,"HideBackpacks",1,"HideBumper1",1,"HideBumper2",0,"HideConstruction",0};
    };

    class UNIF_Faction_UN_Offroad_Repair: C_Offroad_01_repair_F
    {
      faction="UNIF_Faction_UNIF_UN_BLUFOR";
      editorSubcategory = "EdSubcat_Cars";
      editorPreview  = "\UNIF_UN_Faction_Vanilla\UI\UNIF_Faction_UN_Offroad_Repair.jpg";

      side=1;
      hiddenSelectionsTextures[]= 
      {
        "\UNIF_UN_Faction_Vanilla\textures\offroad\un_offroad_co.paa",
        "\UNIF_UN_Faction_Vanilla\textures\offroad\un_offroad_co.paa",
      };
      textureList[] = {};
      crew="UNIF_UN_Faction_Soldier_Rifleman";
      typicalCargo[]={"UNIF_UN_Faction_Soldier_Rifleman"};
      animationList[] = {"Hide_Shield",0,"Hide_Rail",0,"HideDoor1",0,"HideDoor2",0,"HideDoor3",0,"HideBackpacks",1,"HideBumper1",1,"HideBumper2",0,"HideConstruction",0};
    };

    class UNIF_Faction_UN_Offroad_Comms: B_GEN_Offroad_01_comms_F
    {
      faction="UNIF_Faction_UNIF_UN_BLUFOR";
      editorSubcategory = "EdSubcat_Cars";
      editorPreview  = "\UNIF_UN_Faction_Vanilla\UI\UNIF_Faction_UN_Offroad_Repair.jpg";

      side=1;
      hiddenSelectionsTextures[]= 
      {
        "\UNIF_UN_Faction_Vanilla\textures\offroad\un_offroad_co.paa",
        "\UNIF_UN_Faction_Vanilla\textures\offroad\un_offroad_co.paa",
        "\UNIF_UN_Faction_Vanilla\textures\offroad\un_offroad_cover.paa",
      };
      textureList[] = {};
      crew="UNIF_UN_Faction_Soldier_Rifleman";
      typicalCargo[]={"UNIF_UN_Faction_Soldier_Rifleman"};
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
    class Flag_White_F;
  	class banner_01_f;
	
    class UNIF_UN_Faction_Vanilla_Obj_Flag: Flag_White_F
    {
        author = "Mod team";
        displayName = "Concordia Cartel Flag";
        class EventHandlers
        {
            init = "(_this select 0) setFlagTexture ""\UNIF_UN_Faction_Vanilla\Textures\Cartel_Flag.paa""";
        };
    };
	
	class UNIF_UN_Faction_Vanilla_Obj_Banner: banner_01_f
    {
        author = "Mod team";
        displayName = "Concordia Cartel Banner";
        hiddenSelectionsTextures[]=
		{
			"\UNIF_UN_Faction_Vanilla\Textures\Cartel_Flag.paa"
		};
    };
	//************************************************************************************************************************************************************************************************
    //*****             Vehicles             *********************************************************************************************************************************************************
    //************************************************************************************************************************************************************************************************
 
};

class cfgWeapons 
{ 
    //********************************************************************************************************************************************************************************************
    //*****            Uniforms              *****************************************************************************************************************************************************
    //********************************************************************************************************************************************************************************************
    class ItemCore; 
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
    


    //************************************************************************************************************************************************************************************************
    //*****             Helmets               *********************************************************************************************************************************************************
    //************************************************************************************************************************************************************************************************
    

    //************************************************************************************************************************************************************************************************
    //*****             Vests               *********************************************************************************************************************************************************
    //************************************************************************************************************************************************************************************************
    

    //************************************************************************************************************************************************************************************************
    //*****             guns               *********************************************************************************************************************************************************
    //************************************************************************************************************************************************************************************************
	
};
    

  //************************************************************************************************************************************************************************************************
  //*****             Groups               *********************************************************************************************************************************************************
  //************************************************************************************************************************************************************************************************
