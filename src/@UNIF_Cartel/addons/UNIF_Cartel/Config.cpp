class CfgPatches 
{ 
    class UNIF_Cartel
    { 
       units[] =  // UNITTS are added here so they show up on zeus
        {
        	"UNIF_Cartel_Unit_Datsun_Pickup", 
        	"UNIF_Cartel_Unit_Datsun_Pickup_Covered", 
        	"UNIF_Cartel_Unit_Datsun_Pickup_PK",
        	"UNIF_Cartel_Unit_Golf", 
        	"UNIF_Cartel_Unit_Jeep_Wrangler", 
        	"UNIF_Cartel_Unit_Jeep_Wrangler_LMG", 
        	"UNIF_Cartel_Unit_LR", 
        	"UNIF_Cartel_Unit_LR_HMG", 
        	"UNIF_Cartel_Unit_Offroad", 
        	"UNIF_Cartel_Unit_Offroad_Armed", 
        	"UNIF_Cartel_Unit_Skoda_Octavia", 
        	"UNIF_Cartel_Unit_SUV", 
        	"UNIF_Cartel_Unit_SUV_M134",
        	"UNIF_Cartel_Unit_Van_Cargo", 
        	"UNIF_Cartel_Unit_Van_Transport",
        	"UNIF_Cartel_Unit_Antonov_AN2",

        	"EI_CF_Enforcer_AK", 
        	"EI_CF_Enforcer_AUG", 
        	"EI_CF_Enforcer_G3", 
        	"EI_CF_Enforcer_Galil", 
        	"EI_CF_Enforcer_M16", 
        	"EI_CF_Enforcer_SCAR", 
        	"EI_CF_Heavy_Bren", 
        	"EI_CF_Heavy_MG3", 
        	"EI_CF_Heavy_PK", 
        	"EI_CF_Rocketeer_M72", 
        	"EI_CF_Rocketeer_RPG26", 
        	"EI_CF_Rocketeer_RPG7", 
        	"EI_CF_Sharpeye_Hunting", 
        	"EI_CF_Sharpeye_SVD", 
        	"EI_CF_Sweeper_M4", 
        	"EI_CF_Sweeper_M590", 
        	"EI_CF_Narco_AK", 
        	"EI_CF_Narco_Benelli_M4", 
        	"EI_CF_Narco_FAL", 
        	"EI_CF_Narco_G3", 
        	"EI_CF_Narco_Kozlice", 
        	"EI_CF_Narco_M16", 
        	"EI_CF_Narco_M1911", 
        	"EI_CF_Narco_M3", 
        	"EI_CF_Narco_M9", 
        	"EI_CF_Narco_MP5", 
        	"EI_CF_Narco_PPsh", 
        	"EI_CF_Narco_Revolver", 
        	"EI_CF_Narco_Scorpion", 
        	"EI_CF_Narco_SKS", 
        	"xxxxxx", 
        	"EI_CF_Narco_Sting", 
        	"EI_CF_Narco_UZI"
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

//************************************************************************************************************************************************************************************************
//*****        Factions                  *********************************************************************************************************************************************************
//************************************************************************************************************************************************************************************************
class cfgFactionClasses // Factions are made using this cfg
{ 
    class UNIF_Faction_Cartel //unique name
    { 
        displayName = "Concordia Cartel"; 
        priority = 1; // Position in list. 
        side = 2; // Opfor = 0, Blufor = 1, Indep = 2. 
        icon =  "\UNIF_Cartel\UI\Cartellogo.paa"; //Custom Icon 
    }; 
};


//************************************************************************************************************************************************************************************************
//*****        Editor Category                  *********************************************************************************************************************************************************
//************************************************************************************************************************************************************************************************

 class CfgEditorSubcategories
{
    class UNIF_Cartel_EditorCategory_Tier_1
    {
        displayname="Men (Tier 1)";
    };
    class UNIF_Cartel_EditorCategory_Tier_2
    {
        displayname="Men (Tier 2)";
    };
    class UNIF_Cartel_EditorCategory_Tier_3
    {
        displayname="Men (Tier 3)";
    };
};  

//************************************************************************************************************************************************************************************************
//*****        CFGVEHICLES (units and vehicles go here)                 *********************************************************************************************************************************************************
//************************************************************************************************************************************************************************************************


class CfgVehicles 
{     
  class LandVehicle;
  class Car: LandVehicle
  {
    class NewTurret;
  };
  class Car_F: Car
  {
    class AnimationSources;
    class Eventhandlers;
    class Turrets
    {
      class MainTurret: NewTurret
      {
        class ViewOptics;
      };
    };
    class HitPoints
    {
      class HitLFWheel;
      class HitLF2Wheel;
      class HitRFWheel;
      class HitRF2Wheel;
      class HitGlass1;
      class HitGlass2;
      class HitGlass3;
      class HitGlass4;
      class HitGlass5;
      class HitGlass6;
    };
  };

  class CUP_C_Golf4_random_Civ;
  class I_G_Offroad_01_F;
  class CUP_C_Octavia_CIV;
  class I_G_Offroad_01_armed_F;
  class I_C_Offroad_02_unarmed_F;
  class I_C_Offroad_02_LMG_F;
  class CUP_C_Datsun_4seat;
  class CUP_C_Datsun_Covered;
  class CUP_O_Datsun_PK;
  class UK3CB_C_Lada;
  class CUP_C_SUV_CIV;
  class CUP_I_SUV_Armored_ION;
  class C_Van_02_transport_F;
  class C_Van_02_vehicle_F;
  class C_Plane_Civil_01_F;
  class CUP_C_AN2_AIRTAK_TK_CIV;
  class CUP_C_LR_Transport_CTK;
  class UK3CB_CCM_B_LR_Open;
  class CUP_I_LR_MG_RACS;

  class UNIF_Cartel_Unit_Golf: CUP_C_Golf4_random_Civ
  {
    faction="UNIF_Faction_Cartel";
    side=2;
    displayName="Golf";
    crew="xxxxxx";
	editorSubcategory="EdSubcat_Cars";
    typicalCargo[]={"xxxxxx"};
	class TransportMagazines
	{};
    class TransportItems
    {class _xx_toolkit { name="toolkit"; count=1; }; };
    class TransportWeapons
    {};
    class TransportBackpacks
    {};
  };

  class UNIF_Cartel_Unit_LR: CUP_C_LR_Transport_CTK
  {
    faction="UNIF_Faction_Cartel";
    side=2;
    displayName="Land Rover";
    crew="xxxxxx";
	editorSubcategory="EdSubcat_Cars";
    typicalCargo[]={"xxxxxx"};
	class TransportMagazines
	{};
    class TransportItems
    {class _xx_toolkit { name="toolkit"; count=1; }; };
    class TransportWeapons
    {};
    class TransportBackpacks
    {};
  };

  class UNIF_Cartel_Unit_LR_HMG: CUP_I_LR_MG_RACS
  {
    faction="UNIF_Faction_Cartel";
    side=2;
    displayName="Land Rover (M2)";
    crew="xxxxxx";
	editorSubcategory="EdSubcat_Cars";
    typicalCargo[]={"xxxxxx"};
	class TransportMagazines
	{};
    class TransportItems
    {class _xx_toolkit { name="toolkit"; count=1; }; };
    class TransportWeapons
    {};
    class TransportBackpacks
    {};
  };

  class UNIF_Cartel_Unit_Offroad: I_G_Offroad_01_F
  {
    faction="UNIF_Faction_Cartel";
    side=2;
    displayName="Offroad";
    crew="xxxxxx";
    hiddenSelectionsTextures[] = 
	{
		"\A3\soft_f\Offroad_01\data\Offroad_01_ext_co.paa",
		"\A3\soft_f\Offroad_01\data\Offroad_01_ext_co.paa"
	};
	editorSubcategory="EdSubcat_Cars";
    typicalCargo[]={"xxxxxx"};
    class TransportMagazines
	{};
    class TransportItems
    {class _xx_toolkit { name="toolkit"; count=1; }; };
    class TransportWeapons
    {};
    class TransportBackpacks
    {};
  };

  class UNIF_Cartel_Unit_Offroad_Armed: I_G_Offroad_01_armed_F
  {
    faction="UNIF_Faction_Cartel";
    side=2;
    displayName="Offroad Armed";
    hiddenSelectionsTextures[] = 
	{
		"\A3\soft_f\Offroad_01\data\Offroad_01_ext_co.paa",
		"\A3\soft_f\Offroad_01\data\Offroad_01_ext_co.paa"
	};
    crew="xxxxxx";
	editorSubcategory="EdSubcat_Cars";
    typicalCargo[]={"xxxxxx"};
    class TransportMagazines
	{};
    class TransportItems
    {class _xx_toolkit { name="toolkit"; count=1; }; };
    class TransportWeapons
    {};
    class TransportBackpacks
    {};
  };

  class UNIF_Cartel_Unit_Skoda_Octavia: CUP_C_Octavia_CIV
  {
    faction="UNIF_Faction_Cartel";
    side=2;
    displayName="Skoda Octavia";
    crew="xxxxxx";
	editorSubcategory="EdSubcat_Cars";
    typicalCargo[]={"xxxxxx"};
    class TransportMagazines
	{};
    class TransportItems
    {class _xx_toolkit { name="toolkit"; count=1; }; };
    class TransportWeapons
    {};
    class TransportBackpacks
    {};
  };

  class UNIF_Cartel_Unit_Jeep_Wrangler: I_C_Offroad_02_unarmed_F
  {
    faction="UNIF_Faction_Cartel";
    side=2;
    displayName="Jeep Wrangler";
    hiddenSelectionsTextures[]={"a3\soft_f_exp\offroad_02\data\offroad_02_ext_brown_co.paa","a3\soft_f_exp\offroad_02\data\offroad_02_ext_brown_co.paa","a3\soft_f_exp\offroad_02\data\offroad_02_int_brown_co.paa","a3\soft_f_exp\offroad_02\data\offroad_02_int_brown_co.paa"};
    crew="xxxxxx";
	editorSubcategory="EdSubcat_Cars";
    typicalCargo[]={"xxxxxx"};
    class TransportMagazines
	{};
    class TransportItems
    {class _xx_toolkit { name="toolkit"; count=1; }; };
    class TransportWeapons
    {};
    class TransportBackpacks
    {};
  };

  class UNIF_Cartel_Unit_Jeep_Wrangler_LMG: I_C_Offroad_02_LMG_F
  {
    faction="UNIF_Faction_Cartel";
    side=2;
    displayName="Jeep Wrangler LMG";
    hiddenSelectionsTextures[]={"a3\soft_f_exp\offroad_02\data\offroad_02_ext_brown_co.paa","a3\soft_f_exp\offroad_02\data\offroad_02_ext_brown_co.paa","a3\soft_f_exp\offroad_02\data\offroad_02_int_brown_co.paa","a3\soft_f_exp\offroad_02\data\offroad_02_int_brown_co.paa"};
    crew="xxxxxx";
	editorSubcategory="EdSubcat_Cars";
    typicalCargo[]={"xxxxxx"};
    class TransportMagazines
	{};
    class TransportItems
    {class _xx_toolkit { name="toolkit"; count=1; }; };
    class TransportWeapons
    {};
    class TransportBackpacks
    {};
  };

  class UNIF_Cartel_Unit_Datsun_Pickup: CUP_C_Datsun_4seat
  {
    faction="UNIF_Faction_Cartel";
    side=2;
    displayName="Datsun Pickup";
    crew="xxxxxx";
    hiddenSelectionsTextures[] = {"CUP\WheeledVehicles\CUP_WheeledVehicles_Datsun\Data\datsun_trup1_civ_CO.paa","CUP\WheeledVehicles\CUP_WheeledVehicles_Datsun\Data\datsun_addons4_co.paa"};
	editorSubcategory="EdSubcat_Cars";
    typicalCargo[]={"xxxxxx"};
    class TransportMagazines
	{};
    class TransportItems
    {class _xx_toolkit { name="toolkit"; count=1; }; };
    class TransportWeapons
    {};
    class TransportBackpacks
    {};
  };

  class UNIF_Cartel_Unit_Datsun_Pickup_Covered: CUP_C_Datsun_Covered
  {
    faction="UNIF_Faction_Cartel";
    side=2;
    displayName="Datsun Pickup Covered";
    crew="xxxxxx";
    hiddenSelectionsTextures[] = {"CUP\WheeledVehicles\CUP_WheeledVehicles_Datsun\Data\datsun_trup4_civ_CO.paa","CUP\WheeledVehicles\CUP_WheeledVehicles_Datsun\Data\datsun_addons4_co.paa"};
	editorSubcategory="EdSubcat_Cars";
    typicalCargo[]={"xxxxxx"};
    class TransportMagazines
	{};
    class TransportItems
    {class _xx_toolkit { name="toolkit"; count=1; }; };
    class TransportWeapons
    {};
    class TransportBackpacks
    {};
  };

  class UNIF_Cartel_Unit_Datsun_Pickup_PK: CUP_O_Datsun_PK
  {
    faction="UNIF_Faction_Cartel";
    side=2;
    displayName="Datsun Pickup (PK)";
    crew="xxxxxx";
    hiddenSelectionsTextures[] = {"CUP\WheeledVehicles\CUP_WheeledVehicles_Datsun\Data\datsun_trup4_civ_CO.paa","CUP\WheeledVehicles\CUP_WheeledVehicles_Datsun\Data\datsun_addons4_co.paa"};
	editorSubcategory="EdSubcat_Cars";
    typicalCargo[]={"xxxxxx"};
    class TransportMagazines
	{};
    class TransportItems
    {class _xx_toolkit { name="toolkit"; count=1; }; };
    class TransportWeapons
    {};
    class TransportBackpacks
    {};
  };

  class UNIF_Cartel_Unit_SUV: CUP_C_SUV_CIV
  {
    faction="UNIF_Faction_Cartel";
    side=2;
    displayName="SUV";
    crew="xxxxxx";
	editorSubcategory="EdSubcat_Cars";
    typicalCargo[]={"xxxxxx"};
    class TransportMagazines
	{};
    class TransportItems
    {class _xx_toolkit { name="toolkit"; count=1; }; };
    class TransportWeapons
    {};
    class TransportBackpacks
    {};
  };

  class UNIF_Cartel_Unit_SUV_M134: CUP_I_SUV_Armored_ION
  {
    faction="UNIF_Faction_Cartel";
    side=2;
    displayName="SUV (Minigun)";
    crew="xxxxxx";
	editorSubcategory="EdSubcat_Cars";
    typicalCargo[]={"xxxxxx"};
    class TransportMagazines
	{};
    class TransportItems
    {class _xx_toolkit { name="toolkit"; count=1; }; };
    class TransportWeapons
    {};
    class TransportBackpacks
    {};
  };

  class UNIF_Cartel_Unit_Van_Transport: C_Van_02_transport_F
  {
    faction="UNIF_Faction_Cartel";
    side=2;
    displayName="Van Transport";
    hiddenSelectionsTextures[]={"a3\soft_f_orange\van_02\data\van_body_white_co.paa","a3\soft_f_orange\van_02\data\van_wheel_transport_co.paa","a3\soft_f_orange\van_02\data\van_glass_transport_ca.paa","a3\soft_f_orange\van_02\data\van_body_white_co.paa"};
    crew="xxxxxx";
	editorSubcategory="EdSubcat_Cars";
    typicalCargo[]={"xxxxxx"};
    class TransportMagazines
	{};
    class TransportItems
    {class _xx_toolkit { name="toolkit"; count=1; }; };
    class TransportWeapons
    {};
    class TransportBackpacks
    {};
  };

  class UNIF_Cartel_Unit_Van_Cargo: C_Van_02_vehicle_F
  {
    faction="UNIF_Faction_Cartel";
    side=2;
    displayName="Van Cargo";
    hiddenSelectionsTextures[]={"a3\soft_f_orange\van_02\data\van_body_orange_co.paa","a3\soft_f_orange\van_02\data\van_wheel_co.paa","a3\soft_f_orange\van_02\data\van_glass_utility_ca.paa","a3\soft_f_orange\van_02\data\van_body_orange_co.paa"};
    crew="xxxxxx";
    editorSubcategory="EdSubcat_Cars";
    typicalCargo[]={"xxxxxx"};
    class TransportMagazines
	{};
    class TransportItems
    {class _xx_toolkit { name="toolkit"; count=1; }; };
    class TransportWeapons
    {};
    class TransportBackpacks
    {};
  };

  class UNIF_Cartel_Unit_Cessna_TTx: C_Plane_Civil_01_F
  {
    faction="UNIF_Faction_Cartel";
    side=2;
    displayName="Cessna TTx";
    hiddenSelectionsTextures[]={"a3\air_f_exp\plane_civil_01\data\btt_ext_01_wave_co.paa","a3\air_f_exp\plane_civil_01\data\btt_ext_02_wave_co.paa","a3\air_f_exp\plane_civil_01\data\btt_int_01_co.paa","a3\air_f_exp\plane_civil_01\data\btt_int_02_co.paa"};
    crew="xxxxxx";
    editorSubcategory="EdSubcat_Planes";
    typicalCargo[]={"xxxxxx"};
    class TransportMagazines
	{};
    class TransportItems
    {class _xx_toolkit { name="toolkit"; count=1; }; };
    class TransportWeapons
    {};
    class TransportBackpacks
    {};
  };

  class UNIF_Cartel_Unit_Antonov_AN2: CUP_C_AN2_AIRTAK_TK_CIV
  {
    faction="UNIF_Faction_Cartel";
    side=2;
    displayName="Antonov AN2";
    crew="xxxxxx";
    editorSubcategory="EdSubcat_Planes";
    typicalCargo[]={"xxxxxx"};
    class TransportMagazines
	{};
    class TransportItems
    {class _xx_toolkit { name="toolkit"; count=1; }; };
    class TransportWeapons
    {};
    class TransportBackpacks
    {};
  };


  class C_Truck_02_transport_F;
  class C_Truck_02_covered_F;
  class C_Truck_02_fuel_F;
  class C_Truck_02_box_F;
  
  class EI_CF_Truck_Transport: C_Truck_02_transport_F
  {
    editorPreview  = "\UNIF_Cartel\UI\EI_CF_Truck_Transport.jpg"; 
	faction="UNIF_Faction_Cartel";
    side=2;
    hiddenSelectionsTextures[] = 
    {
      "\UNIF_Cartel\Textures\Cartel_Truck_white.paa",
      "\a3\soft_f_beta\Truck_02\data\truck_02_kuz_co.paa",
      "\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa"
    };
    crew="xxxxxx";
    editorSubcategory = "EdSubcat_Cars";
    class textureSources
    {
        class Blue
        {
            displayName="Blue & Yellow Pattern";
            author="Nav";
            textures[]=
            {
                "\UNIF_Cartel\Textures\Cartel_Truck_blue.paa",
      "\a3\soft_f_beta\Truck_02\data\truck_02_kuz_co.paa",
      "\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa"
            };
            factions[]={};
        };
        class White
        {
            displayName="White Pattern";
            author="Nav";
            textures[]=
            {
                "\UNIF_Cartel\Textures\Cartel_Truck_white.paa",
      "\a3\soft_f_beta\Truck_02\data\truck_02_kuz_co.paa",
      "\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa"
            };
            factions[]={};
        };
        class Red
        {
            displayName="White & Red Pattern";
            author="Nav";
            textures[]=
            {
                "\UNIF_Cartel\Textures\Cartel_Truck_red.paa",
      "\a3\soft_f_beta\Truck_02\data\truck_02_kuz_co.paa",
      "\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa"
            };
            factions[]={};
        };
    };
    class TransportMagazines
	{};
    class TransportItems
    {class _xx_toolkit { name="toolkit"; count=1; }; };
    class TransportWeapons
    {};
    class TransportBackpacks
    {};
  };
  class EI_CF_Truck_Transport_Covered: C_Truck_02_covered_F
  {
    editorPreview  = "\UNIF_Cartel\UI\EI_CF_Truck_Transport_Covered.jpg"; 
	faction="UNIF_Faction_Cartel";
    side=2;
    hiddenSelectionsTextures[] = 
    {
      "\UNIF_Cartel\Textures\Cartel_Truck_red.paa",
      "\a3\soft_f_beta\Truck_02\data\truck_02_kuz_olive_co.paa",
      "\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa"
    };
    class textureSources
    {
        class Blue
        {
            displayName="Blue & Yellow Pattern";
            author="Nav";
            textures[]=
            {
                "\UNIF_Cartel\Textures\Cartel_Truck_blue.paa",
      "\a3\soft_f_beta\Truck_02\data\truck_02_kuz_olive_co.paa",
      "\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa"
            };
            factions[]={};
        };
        class White
        {
            displayName="White Pattern";
            author="Nav";
            textures[]=
            {
                "\UNIF_Cartel\Textures\Cartel_Truck_white.paa",
      "\a3\soft_f_beta\Truck_02\data\truck_02_kuz_olive_co.paa",
      "\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa"
            };
            factions[]={};
        };
        class Red
        {
            displayName="White & Red Pattern";
            author="Nav";
            textures[]=
            {
                "\UNIF_Cartel\Textures\Cartel_Truck_red.paa",
      "\a3\soft_f_beta\Truck_02\data\truck_02_kuz_olive_co.paa",
      "\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa"
            };
            factions[]={};
        };
    };
    class TransportMagazines
	{};
    class TransportItems
    {class _xx_toolkit { name="toolkit"; count=1; }; };
    class TransportWeapons
    {};
    class TransportBackpacks
    {};
    crew="xxxxxx";
    editorSubcategory = "EdSubcat_Cars";
  };
  class EI_CF_Truck_Fuel: C_Truck_02_fuel_F
  {
    editorPreview  = "\UNIF_Cartel\UI\EI_CF_Truck_Fuel.jpg"; 
	faction="UNIF_Faction_Cartel";
    side=2;
    hiddenSelectionsTextures[] = 
    {
      "\UNIF_Cartel\Textures\Cartel_Truck_blue.paa",
      "\a3\soft_f_beta\Truck_02\data\truck_02_fuel_co.paa",
      "\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa"
    };
        class textureSources
    {
        class Blue
        {
            displayName="Blue & Yellow Pattern";
            author="Nav";
            textures[]=
            {
                "\UNIF_Cartel\Textures\Cartel_Truck_blue.paa",
      "\a3\soft_f_beta\Truck_02\data\truck_02_fuel_co.paa",
      "\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa"
            };
            factions[]={};
        };
        class White
        {
            displayName="White Pattern";
            author="Nav";
            textures[]=
            {
                "\UNIF_Cartel\Textures\Cartel_Truck_white.paa",
      "\a3\soft_f_beta\Truck_02\data\truck_02_fuel_co.paa",
      "\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa"
            };
            factions[]={};
        };
        class Red
        {
            displayName="White & Red Pattern";
            author="Nav";
            textures[]=
            {
                "\UNIF_Cartel\Textures\Cartel_Truck_red.paa",
      "\a3\soft_f_beta\Truck_02\data\truck_02_fuel_co.paa",
      "\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa"
            };
            factions[]={};
        };
    };
    class TransportMagazines
	{};
    class TransportItems
    {class _xx_toolkit { name="toolkit"; count=1; }; };
    class TransportWeapons
    {};
    class TransportBackpacks
    {};
    crew="xxxxxx";
    editorSubcategory = "EdSubcat_Cars";
  };
  class EI_CF_Truck_Empty: C_Truck_02_box_F
  {
    editorPreview  = "\UNIF_Cartel\UI\EI_CF_Truck_Empty.jpg"; 
faction="UNIF_Faction_Cartel";
    displayName = "KamAZ Empty";
    side=2;
    model = "\A3\soft_f_gamma\Truck_02\Truck_02_fuel_F";
    ace_repair_canRepair = 0;
    hiddenSelectionsTextures[] = 
    {
      "\UNIF_Cartel\Textures\Cartel_Truck_blue.paa",
      "",
      "\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa"
    };
            class textureSources
    {
        class Blue
        {
            displayName="Blue & Yellow Pattern";
            author="Nav";
            textures[]=
            {
                "\UNIF_Cartel\Textures\Cartel_Truck_blue.paa",
      "",
      "\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa"
            };
            factions[]={};
        };
        class White
        {
            displayName="White Pattern";
            author="Nav";
            textures[]=
            {
                "\UNIF_Cartel\Textures\Cartel_Truck_white.paa",
      "",
      "\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa"
            };
            factions[]={};
        };
        class Red
        {
            displayName="White & Red Pattern";
            author="Nav";
            textures[]=
            {
                "\UNIF_Cartel\Textures\Cartel_Truck_red.paa",
      "",
      "\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa"
            };
            factions[]={};
        };
    };
    class TransportMagazines
	{};
    class TransportItems
    {class _xx_toolkit { name="toolkit"; count=1; }; };
    class TransportWeapons
    {};
    class TransportBackpacks
    {};
    crew="xxxxxx";
    editorSubcategory = "EdSubcat_Cars";
  };
  class EI_CF_Truck_Repair: C_Truck_02_box_F
  {
    editorPreview  = "\UNIF_Cartel\UI\EI_CF_Truck_Repair.jpg"; 
	faction="UNIF_Faction_Cartel";
    side=2;
    hiddenSelectionsTextures[] = 
    {
      "\UNIF_Cartel\Textures\Cartel_Truck_white.paa",
      "\a3\soft_f_beta\Truck_02\data\truck_02_repair_co.paa",
      "\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa"
    };
    class textureSources
    {
        class Blue
        {
            displayName="Blue & Yellow Pattern";
            author="Nav";
            textures[]=
            {
                "\UNIF_Cartel\Textures\Cartel_Truck_blue.paa",
      "\a3\soft_f_beta\Truck_02\data\truck_02_repair_co.paa",
      "\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa"
            };
            factions[]={};
        };
        class White
        {
            displayName="White Pattern";
            author="Nav";
            textures[]=
            {
                "\UNIF_Cartel\Textures\Cartel_Truck_white.paa",
      "\a3\soft_f_beta\Truck_02\data\truck_02_repair_co.paa",
      "\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa"
            };
            factions[]={};
        };
        class Red
        {
            displayName="White & Red Pattern";
            author="Nav";
            textures[]=
            {
                "\UNIF_Cartel\Textures\Cartel_Truck_red.paa",
      "\a3\soft_f_beta\Truck_02\data\truck_02_repair_co.paa",
      "\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa"
            };
            factions[]={};
        };
    };
    class TransportMagazines
	{};
    class TransportItems
    {class _xx_toolkit { name="toolkit"; count=1; }; };
    class TransportWeapons
    {};
    class TransportBackpacks
    {};
    crew="xxxxxx";
    editorSubcategory = "EdSubcat_Cars";
  };
 
    //************************************************************************************************************************************************************************************************
    //*****             Units                *********************************************************************************************************************************************************
    //************************************************************************************************************************************************************************************************
    class C_Marshal_F;
    class UNIF_Faction_Cartel_C_Char_1: C_Marshal_F 
    {
        author = "Sawtes"; 
        _generalMacro = "B_soldier_F"; 
        scope = 1; 
        displayName = ""; 
        modelsides[] = {3,2,1,0};
        uniformClass = "UNIF_Faction_Cartel_C_Uni_1";
        hiddenSelectionsTextures[] = 
        { 
            "\UNIF_Cartel\Textures\Cartel_Red_BlueJeans.paa";
        };  
    };
    class UNIF_Faction_Cartel_C_Char_2: UNIF_Faction_Cartel_C_Char_1
    {
        displayName = "";
        uniformClass = "UNIF_Faction_Cartel_C_Uni_2";
        hiddenSelectionsTextures[] =
        {
            "\UNIF_Cartel\Textures\Cartel_Red_TanJeans.paa";
        };
    };
    class UNIF_Faction_Cartel_C_Char_3: UNIF_Faction_Cartel_C_Char_1
    {
        displayName = "";
        uniformClass = "UNIF_Faction_Cartel_C_Uni_2";
        hiddenSelectionsTextures[] =
        {
            "\UNIF_Cartel\Textures\Cartel_Blue_BlueJeans.paa";
        };
    };
    class UNIF_Faction_Cartel_C_Char_4: UNIF_Faction_Cartel_C_Char_1
    {
        displayName = "";
        uniformClass = "UNIF_Faction_Cartel_C_Uni_2";
        hiddenSelectionsTextures[] =
        {
            "\UNIF_Cartel\Textures\Cartel_Blue_TanJeans.paa";
        };
    };
    class UNIF_Faction_Cartel_C_Char_5: UNIF_Faction_Cartel_C_Char_1
    {
        displayName = "";
        uniformClass = "UNIF_Faction_Cartel_C_Uni_2";
        hiddenSelectionsTextures[] =
        {
            "\UNIF_Cartel\Textures\Cartel_BlackFlower_WhiteJeans.paa";
        };
    };
    class UNIF_Faction_Cartel_C_Char_6: UNIF_Faction_Cartel_C_Char_1
    {
        displayName = "";
        uniformClass = "UNIF_Faction_Cartel_C_Uni_2";
        hiddenSelectionsTextures[] =
        {
            "\UNIF_Cartel\Textures\Cartel_Blackflower_BlackJeans.paa";
        };
    };
    class UNIF_Faction_Cartel_C_Char_7: UNIF_Faction_Cartel_C_Char_1
    {
        displayName = "";
        uniformClass = "UNIF_Faction_Cartel_C_Uni_2";
        hiddenSelectionsTextures[] =
        {
            "\UNIF_Cartel\Textures\Cartel_WhiteFlower_WhiteJeans.paa";
        };
    };
    class UNIF_Faction_Cartel_C_Char_8: UNIF_Faction_Cartel_C_Char_1
    {
        displayName = "";
        uniformClass = "UNIF_Faction_Cartel_C_Uni_2";
        hiddenSelectionsTextures[] =
        {
            "\UNIF_Cartel\Textures\Cartel_WhiteFlower_BlackJeans.paa";
        };
    };
    class UNIF_Faction_Cartel_C_Char_9: UNIF_Faction_Cartel_C_Char_1
    {
        displayName = "";
        uniformClass = "UNIF_Faction_Cartel_C_Uni_9";
        hiddenSelectionsTextures[] =
        {
            "\UNIF_Cartel\Textures\Cartel_YellowFlower_BlueJeans.paa";
        };
    };
    class UNIF_Faction_Cartel_C_Char_10: UNIF_Faction_Cartel_C_Char_1
    {
        displayName = "";
        uniformClass = "UNIF_Faction_Cartel_C_Uni_10";
        hiddenSelectionsTextures[] =
        {
            "\UNIF_Cartel\Textures\Cartel_YellowFlower_TanJeans.paa";
        };
    };
    class UNIF_Faction_Cartel_C_Char_11: UNIF_Faction_Cartel_C_Char_1
    {
        displayName = "";
        uniformClass = "UNIF_Faction_Cartel_C_Uni_11";
        hiddenSelectionsTextures[] =
        {
            "\UNIF_Cartel\Textures\Cartel_BlackRed_BlueJeans.paa";
        };
    };
    class UNIF_Faction_Cartel_C_Char_12: UNIF_Faction_Cartel_C_Char_1
    {
        displayName = "";
        uniformClass = "UNIF_Faction_Cartel_C_Uni_12";
        hiddenSelectionsTextures[] =
        {
            "\UNIF_Cartel\Textures\Cartel_BlackRed_TanJeans.paa";
        };
    };
    class UNIF_Faction_Cartel_C_Char_13: UNIF_Faction_Cartel_C_Char_1
    {
        displayName = "";
        uniformClass = "UNIF_Faction_Cartel_C_Uni_13";
        hiddenSelectionsTextures[] =
        {
            "\UNIF_Cartel\Textures\Cartel_BlueFlower_BlueJeans.paa";
        };
    };
    class UNIF_Faction_Cartel_C_Char_14: UNIF_Faction_Cartel_C_Char_1
    {
        displayName = "";
        uniformClass = "UNIF_Faction_Cartel_C_Uni_14";
        hiddenSelectionsTextures[] =
        {
            "\UNIF_Cartel\Textures\Cartel_BlueFlower_TanJeans.paa";
        };
    };
    class UNIF_Faction_Cartel_C_Char_15: UNIF_Faction_Cartel_C_Char_1
    {
        displayName = "";
        uniformClass = "UNIF_Faction_Cartel_C_Uni_15";
        hiddenSelectionsTextures[] =
        {
            "\UNIF_Cartel\Textures\Cartel_RedPink_BlueJeans.paa";
        };
    };
    class UNIF_Faction_Cartel_C_Char_16: UNIF_Faction_Cartel_C_Char_1
    {
        displayName = "";
        uniformClass = "UNIF_Faction_Cartel_C_Uni_16";
        hiddenSelectionsTextures[] =
        {
            "\UNIF_Cartel\Textures\Cartel_RedPink_TanJeans.paa";
        };
    };
    //************************************************************************************************************************************************************************************************
    //*****             Objects              *********************************************************************************************************************************************************
    //************************************************************************************************************************************************************************************************
    
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
    
    class U_Marshal;
    class UNIF_Faction_Cartel_C_Uni_1: U_Marshal
    { 
        scope = 2;
        scopeArsenal = 2; 
        displayName = "Cartel (Red/Blue Jeans)";
        picture = "\UNIF_Cartel\UI\Cartellogo.paa"; 
        class ItemInfo : UniformItem { 
            uniformModel="-";
            uniformClass = "UNIF_Faction_Cartel_C_Char_1";
            containerClass = "Supply60"; 
            mass = 30; 
        };
    };
    class UNIF_Faction_Cartel_C_Uni_2: UNIF_Faction_Cartel_C_Uni_1
    { 
        scope = 2;
        scopeArsenal = 2; 
        displayName = "Cartel (Red/Khakis)"; 
        class ItemInfo : UniformItem { 
            uniformModel="-";
            uniformClass = "UNIF_Faction_Cartel_C_Char_2";
            containerClass = "Supply60"; 
            mass = 30; 
        };
    };
    class UNIF_Faction_Cartel_C_Uni_3: UNIF_Faction_Cartel_C_Uni_1
    { 
        scope = 2;
        scopeArsenal = 2; 
        displayName = "Cartel (Blue/Blue Jeans)"; 
        class ItemInfo : UniformItem { 
            uniformModel="-";
            uniformClass = "UNIF_Faction_Cartel_C_Char_3";
            containerClass = "Supply60"; 
            mass = 30; 
        };
    };
    class UNIF_Faction_Cartel_C_Uni_4: UNIF_Faction_Cartel_C_Uni_1
    { 
        scope = 2;
        scopeArsenal = 2; 
        displayName = "Cartel (Blue/Khakis)"; 
        class ItemInfo : UniformItem { 
            uniformModel="-";
            uniformClass = "UNIF_Faction_Cartel_C_Char_4";
            containerClass = "Supply60"; 
            mass = 30; 
        };
    };
    class UNIF_Faction_Cartel_C_Uni_5: UNIF_Faction_Cartel_C_Uni_1
    { 
        scope = 2;
        scopeArsenal = 2; 
        displayName = "Cartel (Black Flower/White Jeans)"; 
        class ItemInfo : UniformItem { 
            uniformModel="-";
            uniformClass = "UNIF_Faction_Cartel_C_Char_5";
            containerClass = "Supply60"; 
            mass = 30; 
        };
    };
    class UNIF_Faction_Cartel_C_Uni_6: UNIF_Faction_Cartel_C_Uni_1
    { 
        scope = 2;
        scopeArsenal = 2; 
        displayName = "Cartel (Black Flower/Black Jeans)"; 
        class ItemInfo : UniformItem { 
            uniformModel="-";
            uniformClass = "UNIF_Faction_Cartel_C_Char_6";
            containerClass = "Supply60"; 
            mass = 30; 
        };
    };
    class UNIF_Faction_Cartel_C_Uni_7: UNIF_Faction_Cartel_C_Uni_1
    { 
        scope = 2;
        scopeArsenal = 2; 
        displayName = "Cartel (White Flower/White Jeans)"; 
        class ItemInfo : UniformItem { 
            uniformModel="-";
            uniformClass = "UNIF_Faction_Cartel_C_Char_7";
            containerClass = "Supply60"; 
            mass = 30; 
        };
    };
    class UNIF_Faction_Cartel_C_Uni_8: UNIF_Faction_Cartel_C_Uni_1
    { 
        scope = 2;
        scopeArsenal = 2; 
        displayName = "Cartel (White Flower/Black Jeans)"; 
        class ItemInfo : UniformItem { 
            uniformModel="-";
            uniformClass = "UNIF_Faction_Cartel_C_Char_8";
            containerClass = "Supply60"; 
            mass = 30; 
        };
    };
    class UNIF_Faction_Cartel_C_Uni_9: UNIF_Faction_Cartel_C_Uni_1
    { 
        scope = 2;
        scopeArsenal = 2; 
        displayName = "Cartel (Yellow Flower/Blue Jeans)"; 
        class ItemInfo : UniformItem { 
            uniformModel="-";
            uniformClass = "UNIF_Faction_Cartel_C_Char_9";
            containerClass = "Supply60"; 
            mass = 30; 
        };
    };
    class UNIF_Faction_Cartel_C_Uni_10: UNIF_Faction_Cartel_C_Uni_1
    { 
        scope = 2;
        scopeArsenal = 2; 
        displayName = "Cartel (Yellow Flower/Khakis)"; 
        class ItemInfo : UniformItem { 
            uniformModel="-";
            uniformClass = "UNIF_Faction_Cartel_C_Char_10";
            containerClass = "Supply60"; 
            mass = 30; 
        };
    };
    class UNIF_Faction_Cartel_C_Uni_11: UNIF_Faction_Cartel_C_Uni_1
    { 
        scope = 2;
        scopeArsenal = 2; 
        displayName = "Cartel (Black-Red/Blue Jeans)"; 
        class ItemInfo : UniformItem { 
            uniformModel="-";
            uniformClass = "UNIF_Faction_Cartel_C_Char_11";
            containerClass = "Supply60"; 
            mass = 30; 
        };
    };
    class UNIF_Faction_Cartel_C_Uni_12: UNIF_Faction_Cartel_C_Uni_1
    { 
        scope = 2;
        scopeArsenal = 2; 
        displayName = "Cartel (Black-Red/Khakis)"; 
        class ItemInfo : UniformItem { 
            uniformModel="-";
            uniformClass = "UNIF_Faction_Cartel_C_Char_12";
            containerClass = "Supply60"; 
            mass = 30; 
        };
    };
    class UNIF_Faction_Cartel_C_Uni_13: UNIF_Faction_Cartel_C_Uni_1
    { 
        scope = 2;
        scopeArsenal = 2; 
        displayName = "Cartel (Blue Flower/Blue Jeans)"; 
        class ItemInfo : UniformItem { 
            uniformModel="-";
            uniformClass = "UNIF_Faction_Cartel_C_Char_13";
            containerClass = "Supply60"; 
            mass = 30; 
        };
    };
    class UNIF_Faction_Cartel_C_Uni_14: UNIF_Faction_Cartel_C_Uni_1
    { 
        scope = 2;
        scopeArsenal = 2; 
        displayName = "Cartel (Blue Flower/Khakis)"; 
        class ItemInfo : UniformItem { 
            uniformModel="-";
            uniformClass = "UNIF_Faction_Cartel_C_Char_14";
            containerClass = "Supply60"; 
            mass = 30; 
        };
    };
    class UNIF_Faction_Cartel_C_Uni_15: UNIF_Faction_Cartel_C_Uni_1
    { 
        scope = 2;
        scopeArsenal = 2; 
        displayName = "Cartel (Red-Pink/Blue Jeans)"; 
        class ItemInfo : UniformItem { 
            uniformModel="-";
            uniformClass = "UNIF_Faction_Cartel_C_Char_15";
            containerClass = "Supply60"; 
            mass = 30; 
        };
    };
    class UNIF_Faction_Cartel_C_Uni_16: UNIF_Faction_Cartel_C_Uni_1
    { 
        scope = 2;
        scopeArsenal = 2; 
        displayName = "Cartel (Red-Pink/Khakis)"; 
        class ItemInfo : UniformItem { 
            uniformModel="-";
            uniformClass = "UNIF_Faction_Cartel_C_Char_16";
            containerClass = "Supply60"; 
            mass = 30; 
        };
    };
    //************************************************************************************************************************************************************************************************
    //*****             Helmets               *********************************************************************************************************************************************************
    //************************************************************************************************************************************************************************************************
    

    //************************************************************************************************************************************************************************************************
    //*****             Vests               *********************************************************************************************************************************************************
    //************************************************************************************************************************************************************************************************
    
    class UNIF_Faction_Cartel_V_Jack_1: V_Press_F
    {
        author = "Sawtes";
        scope = 2;
        picture = "\UNIF_Cartel\UI\Cartellogo.paa"; 
        displayName = "Cartel Bulletproof Vest (Black 1)";
        hiddenSelectionsTextures[] = 
        {
            "\UNIF_Cartel\Textures\Cartel_Vest_Jack_Black_1.paa" 
        };
        class ItemInfo: ItemInfo
        {
            uniformModel="\A3\Characters_F_EPC\Civil\equip_press_vest_01.p3d";
            containerClass="Supply100";
            mass=40;
            class HitpointsProtectionInfo
            {
                class Chest
                {
                    hitpointName="HitChest";
                    armor=12;
                    passThrough=0.40000001;
                };
                class Diaphragm
                {
                    hitpointName="HitDiaphragm";
                    armor=12;
                    passThrough=0.40000001;
                };
                class Abdomen
                {
                    hitpointName="HitAbdomen";
                    armor=12;
                    passThrough=0.40000001;
                };
                class Pelvis
                {
                    hitpointName="HitPelvis";
                    armor=12;
                    passThrough=0.40000001;
                };
                class Body
                {
                    hitpointName="HitBody";
                    passThrough=0.40000001;
                };
            };
        }; 
    };
    class UNIF_Faction_Cartel_V_Jack_2: UNIF_Faction_Cartel_V_Jack_1
    {
        displayName = "Cartel Bulletproof Vest (Black 2)";
        hiddenSelectionsTextures[] = 
        {
            "\UNIF_Cartel\Textures\Cartel_Vest_Jack_Black_2.paa" 
        };
    };
    class UNIF_Faction_Cartel_V_Jack_3: UNIF_Faction_Cartel_V_Jack_1
    {
        displayName = "Cartel Bulletproof Vest (Black 3)";
        hiddenSelectionsTextures[] = 
        {
            "\UNIF_Cartel\Textures\Cartel_Vest_Jack_Black_3.paa" 
        };
    };
    class UNIF_Faction_Cartel_V_Jack_4: UNIF_Faction_Cartel_V_Jack_1
    {
        displayName = "Cartel Bulletproof Vest (Black 4)";
        hiddenSelectionsTextures[] = 
        {
            "\UNIF_Cartel\Textures\Cartel_Vest_Jack_Black_4.paa" 
        };
    };
    class UNIF_Faction_Cartel_V_Jack_5: UNIF_Faction_Cartel_V_Jack_1
    {
        displayName = "Cartel Bulletproof Vest (Black 5)";
        hiddenSelectionsTextures[] = 
        {
            "\UNIF_Cartel\Textures\Cartel_Vest_Jack_Black_5.paa" 
        };
    };
    class UNIF_Faction_Cartel_V_Jack_6: UNIF_Faction_Cartel_V_Jack_1
    {
        displayName = "Cartel Bulletproof Vest (OD 1)";
        hiddenSelectionsTextures[] = 
        {
            "\UNIF_Cartel\Textures\Cartel_Vest_Jack_OD_1.paa" 
        };
    };
    class UNIF_Faction_Cartel_V_Jack_7: UNIF_Faction_Cartel_V_Jack_1
    {
        displayName = "Cartel Bulletproof Vest (OD 2)";
        hiddenSelectionsTextures[] = 
        {
            "\UNIF_Cartel\Textures\Cartel_Vest_Jack_OD_2.paa" 
        };
    };
    //************************************************************************************************************************************************************************************************
    //*****             guns               *********************************************************************************************************************************************************
    //************************************************************************************************************************************************************************************************
  
    
};

//************************************************************************************************************************************************************************************************
//*****             Facewear             *********************************************************************************************************************************************************
//************************************************************************************************************************************************************************************************

class CfgGlasses
{
    class G_Balaclava_blk;
    class G_bandanna_sport;
    class CM_G_Empty: G_bandanna_sport
    {
        scope = 1;
        scopeArsenal = 0;
        model="";
        picture="";
        identityTypes[]={"G_EI_Cartel",150};
    };
    class EI_Balac_Sand: G_Balaclava_blk
    {
        author="Sawtes";
        displayName="Balaclava Sand";
        model="\A3\Characters_F_Bootcamp\Guerrilla\g_balaclava_clean.p3d";
        picture="\A3\Characters_F_Bootcamp\Data\UI\icon_G_Balaclava_clean_ca.paa";
        hiddenSelections[]=
        {
            "camo"
        };
        hiddenSelectionsTextures[]=
        {
            "\UNIF_Cartel\Textures\balac_sand.paa"
        };
        identityTypes[]={"G_EI_Cartel",50};
    };
    class EI_Balac_Sand_Rose: G_Balaclava_blk
    {
        author="Sawtes";
        displayName="Balaclava Sand (Skull + Rose)";
        model="\A3\Characters_F_Bootcamp\Guerrilla\g_balaclava_clean.p3d";
        picture="\A3\Characters_F_Bootcamp\Data\UI\icon_G_Balaclava_clean_ca.paa";
        hiddenSelections[]=
        {
            "camo"
        };
        hiddenSelectionsTextures[]=
        {
            "\UNIF_Cartel\Textures\balac_sand_rose.paa"
        };
        identityTypes[]={"G_EI_Cartel",50};
    };
    class EI_Balac_Sand_Mex: G_Balaclava_blk
    {
        author="Sawtes";
        displayName="Balaclava Sand (Mexican)";
        model="\A3\Characters_F_Bootcamp\Guerrilla\g_balaclava_clean.p3d";
        picture="\A3\Characters_F_Bootcamp\Data\UI\icon_G_Balaclava_clean_ca.paa";
        hiddenSelections[]=
        {
            "camo"
        };
        hiddenSelectionsTextures[]=
        {
            "\UNIF_Cartel\Textures\balac_sand_mex.paa"
        };
        identityTypes[]={"G_EI_Cartel",50};
    };
    class EI_Balac_Sand_Color: G_Balaclava_blk
    {
        author="Sawtes";
        displayName="Balaclava Sand (Colorful)";
        model="\A3\Characters_F_Bootcamp\Guerrilla\g_balaclava_clean.p3d";
        picture="\A3\Characters_F_Bootcamp\Data\UI\icon_G_Balaclava_clean_ca.paa";
        hiddenSelections[]=
        {
            "camo"
        };
        hiddenSelectionsTextures[]=
        {
            "\UNIF_Cartel\Textures\balac_sand_color.paa"
        };
        identityTypes[]={"G_EI_Cartel",50};
    };
    class EI_Balac_Red: G_Balaclava_blk
    {
        author="Sawtes";
        displayName="Balaclava Red";
        model="\A3\Characters_F_Bootcamp\Guerrilla\g_balaclava_clean.p3d";
        picture="\A3\Characters_F_Bootcamp\Data\UI\icon_G_Balaclava_clean_ca.paa";
        hiddenSelections[]=
        {
            "camo"
        };
        hiddenSelectionsTextures[]=
        {
            "\UNIF_Cartel\Textures\balac_red.paa"
        };
        identityTypes[]={"G_EI_Cartel",50};
    };
    class EI_Balac_Red_Rose: G_Balaclava_blk
    {
        author="Sawtes";
        displayName="Balaclava Red (Skull + Rose)";
        model="\A3\Characters_F_Bootcamp\Guerrilla\g_balaclava_clean.p3d";
        picture="\A3\Characters_F_Bootcamp\Data\UI\icon_G_Balaclava_clean_ca.paa";
        hiddenSelections[]=
        {
            "camo"
        };
        hiddenSelectionsTextures[]=
        {
            "\UNIF_Cartel\Textures\balac_red_rose.paa"
        };
        identityTypes[]={"G_EI_Cartel",50};
    };
    class EI_Balac_Red_Mex: G_Balaclava_blk
    {
        author="Sawtes";
        displayName="Balaclava Red (Mexican)";
        model="\A3\Characters_F_Bootcamp\Guerrilla\g_balaclava_clean.p3d";
        picture="\A3\Characters_F_Bootcamp\Data\UI\icon_G_Balaclava_clean_ca.paa";
        hiddenSelections[]=
        {
            "camo"
        };
        hiddenSelectionsTextures[]=
        {
            "\UNIF_Cartel\Textures\balac_red_mex.paa"
        };
        identityTypes[]={"G_EI_Cartel",50};
    };
    class EI_Balac_Green_Rose: G_Balaclava_blk
    {
        author="Sawtes";
        displayName="Balaclava Green (Skull + Rose)";
        model="\A3\Characters_F_Bootcamp\Guerrilla\g_balaclava_clean.p3d";
        picture="\A3\Characters_F_Bootcamp\Data\UI\icon_G_Balaclava_clean_ca.paa";
        hiddenSelections[]=
        {
            "camo"
        };
        hiddenSelectionsTextures[]=
        {
            "\UNIF_Cartel\Textures\balac_green_rose.paa"
        };
        identityTypes[]={"G_EI_Cartel",50};
    };
    class EI_Balac_Green_Mex: G_Balaclava_blk
    {
        author="Sawtes";
        displayName="Balaclava Green (Mexican)";
        model="\A3\Characters_F_Bootcamp\Guerrilla\g_balaclava_clean.p3d";
        picture="\A3\Characters_F_Bootcamp\Data\UI\icon_G_Balaclava_clean_ca.paa";
        hiddenSelections[]=
        {
            "camo"
        };
        hiddenSelectionsTextures[]=
        {
            "\UNIF_Cartel\Textures\balac_green_mex.paa"
        };
        identityTypes[]={"G_EI_Cartel",50};
    };
    class EI_Balac_Green_Color: G_Balaclava_blk
    {
        author="Sawtes";
        displayName="Balaclava Green (Colorful)";
        model="\A3\Characters_F_Bootcamp\Guerrilla\g_balaclava_clean.p3d";
        picture="\A3\Characters_F_Bootcamp\Data\UI\icon_G_Balaclava_clean_ca.paa";
        hiddenSelections[]=
        {
            "camo"
        };
        hiddenSelectionsTextures[]=
        {
            "\UNIF_Cartel\Textures\balac_green_color.paa"
        };
        identityTypes[]={"G_EI_Cartel",50};
    };
    class EI_Balac_Black_Rose: G_Balaclava_blk
    {
        author="Sawtes";
        displayName="Balaclava Black (Skull + Rose)";
        model="\A3\Characters_F_Bootcamp\Guerrilla\g_balaclava_clean.p3d";
        picture="\A3\Characters_F_Bootcamp\Data\UI\icon_G_Balaclava_clean_ca.paa";
        hiddenSelections[]=
        {
            "camo"
        };
        hiddenSelectionsTextures[]=
        {
            "\UNIF_Cartel\Textures\balac_black_rose.paa"
        };
        identityTypes[]={"G_EI_Cartel",50};
    };
    class EI_Balac_Black_Mex: G_Balaclava_blk
    {
        author="Sawtes";
        displayName="Balaclava Black (Mexican)";
        model="\A3\Characters_F_Bootcamp\Guerrilla\g_balaclava_clean.p3d";
        picture="\A3\Characters_F_Bootcamp\Data\UI\icon_G_Balaclava_clean_ca.paa";
        hiddenSelections[]=
        {
            "camo"
        };
        hiddenSelectionsTextures[]=
        {
            "\UNIF_Cartel\Textures\balac_black_mex.paa"
        };
        identityTypes[]={"G_EI_Cartel",50};
    };
    class EI_Balac_Black_Color: G_Balaclava_blk
    {
        author="Sawtes";
        displayName="Balaclava Black (Colorful)";
        model="\A3\Characters_F_Bootcamp\Guerrilla\g_balaclava_clean.p3d";
        picture="\A3\Characters_F_Bootcamp\Data\UI\icon_G_Balaclava_clean_ca.paa";
        hiddenSelections[]=
        {
            "camo"
        };
        hiddenSelectionsTextures[]=
        {
            "\UNIF_Cartel\Textures\balac_Black_color.paa"
        };
        identityTypes[]={"G_EI_Cartel",50};
    };
};
  //************************************************************************************************************************************************************************************************
  //*****             Groups               *********************************************************************************************************************************************************
  //************************************************************************************************************************************************************************************************
class cfgGroups
{  
  class INDEP
  {
    name="Independent";
    class UNIF_Faction_Cartel_G
    {
      name="Concordia Cartel";

      class UNIF_Faction_Cartel_Tier_2
      {
        name="Infantry (Enforcers)";

        class EI_CF_G_Enforcer_Patrol_Riflemen
        {
          name="Patrol (Riflemen)";
          faction="UNIF_Faction_Cartel";
          side=2;
          class Unit0
          {
            side=2;
            vehicle="EI_CF_Enforcer_AK";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=2;
            vehicle="EI_CF_Enforcer_AUG";
            rank="PRIVATE";
            position[]={0,-5,0};
          };
        };
        class EI_CF_G_Enforcer_Fireteam_Riflemen
        {
          name="Fireteam (Riflemen)";
          faction="UNIF_Faction_Cartel";
          side=2;
          class Unit0
          {
            side=2;
            vehicle="EI_CF_Enforcer_AK";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=2;
            vehicle="EI_CF_Enforcer_AUG";
            rank="PRIVATE";
            position[]={0,-5,0};
          };
          class Unit2
          {
            side=2;
            vehicle="EI_CF_Enforcer_G3";
            rank="PRIVATE";
            position[]={0,-10,0};
          };
          class Unit3
          {
            side=2;
            vehicle="EI_CF_Enforcer_Galil";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
        };
        class EI_CF_G_Enforcer_Squad_Riflemen
        {
          name="Squad (Riflemen)";
          faction="UNIF_Faction_Cartel";
          side=2;
          class Unit0
          {
            side=2;
            vehicle="EI_CF_Enforcer_AK";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=2;
            vehicle="EI_CF_Enforcer_AUG";
            rank="PRIVATE";
            position[]={0,-5,0};
          };
          class Unit2
          {
            side=2;
            vehicle="EI_CF_Enforcer_G3";
            rank="PRIVATE";
            position[]={0,-10,0};
          };
          class Unit3
          {
            side=2;
            vehicle="EI_CF_Enforcer_Galil";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
          class Unit4
          {
            side=2;
            vehicle="EI_CF_Enforcer_M16";
            rank="PRIVATE";
            position[]={0,-20,0};
          };
          class Unit5
          {
            side=2;
            vehicle="EI_CF_Enforcer_SCAR";
            rank="PRIVATE";
            position[]={0,-25,0};
          };
          class Unit6
          {
            side=2;
            vehicle="EI_CF_Enforcer_AK";
            rank="PRIVATE";
            position[]={0,-30,0};
          };
          class Unit7
          {
            side=2;
            vehicle="EI_CF_Enforcer_AUG";
            rank="PRIVATE";
            position[]={0,-35,0};
          };
        };
        class EI_CF_G_Enforcer_Fireteam_Mixed
        {
          name="Fireteam (Mixed)";
          faction="UNIF_Faction_Cartel";
          side=2;
          class Unit0
          {
            side=2;
            vehicle="EI_CF_Enforcer_AK";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=2;
            vehicle="EI_CF_Heavy_Bren";
            rank="PRIVATE";
            position[]={0,-5,0};
          };
          class Unit2
          {
            side=2;
            vehicle="EI_CF_Enforcer_Galil";
            rank="PRIVATE";
            position[]={0,-10,0};
          };
          class Unit3
          {
            side=2;
            vehicle="EI_CF_Sweeper_M4";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
        };
        class EI_CF_G_Enforcer_Squad_Mixed
        {
          name="Squad (Mixed)";
          faction="UNIF_Faction_Cartel";
          side=2;
          class Unit0
          {
            side=2;
            vehicle="EI_CF_Enforcer_AK";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=2;
            vehicle="EI_CF_Heavy_Bren";
            rank="PRIVATE";
            position[]={0,-5,0};
          };
          class Unit2
          {
            side=2;
            vehicle="EI_CF_Enforcer_Galil";
            rank="PRIVATE";
            position[]={0,-10,0};
          };
          class Unit3
          {
            side=2;
            vehicle="EI_CF_Sweeper_M4";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
          class Unit4
          {
            side=2;
            vehicle="EI_CF_Enforcer_G3";
            rank="PRIVATE";
            position[]={0,-20,0};
          };
          class Unit5
          {
            side=2;
            vehicle="EI_CF_Sharpeye_Hunting";
            rank="PRIVATE";
            position[]={0,-25,0};
          };
          class Unit6
          {
            side=2;
            vehicle="EI_CF_Enforcer_AUG";
            rank="PRIVATE";
            position[]={0,-30,0};
          };
          class Unit7
          {
            side=2;
            vehicle="EI_CF_Heavy_Bren";
            rank="PRIVATE";
            position[]={0,-35,0};
          };
        };
      };

      class UNIF_Faction_Cartel_Tier_1
      {
        name="Infantry (Narcos)";

        class EI_CF_G_Narco_Patrol_Riflemen
        {
          name="Patrol (Riflemen)";
          faction="UNIF_Faction_Cartel";
          side=2;
          class Unit0
          {
            side=2;
            vehicle="EI_CF_Narco_AK";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=2;
            vehicle="EI_CF_Narco_M16";
            rank="PRIVATE";
            position[]={0,-5,0};
          };
        };
        class EI_CF_G_Narco_Patrol_Pistol
        {
          name="Patrol (Pistol)";
          faction="UNIF_Faction_Cartel";
          side=2;
          class Unit0
          {
            side=2;
            vehicle="EI_CF_Narco_M9";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=2;
            vehicle="EI_CF_Narco_Revolver";
            rank="PRIVATE";
            position[]={0,-5,0};
          };
        };
        class EI_CF_G_Narco_Patrol_SMG
        {
          name="Patrol (SMG)";
          faction="UNIF_Faction_Cartel";
          side=2;
          class Unit0
          {
            side=2;
            vehicle="EI_CF_Narco_PPsh";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=2;
            vehicle="xxxxxx";
            rank="PRIVATE";
            position[]={0,-5,0};
          };
        };
        class EI_CF_G_Narco_Fireteam_Riflemen
        {
          name="Fireteam (Riflemen)";
          faction="UNIF_Faction_Cartel";
          side=2;
          class Unit0
          {
            side=2;
            vehicle="EI_CF_Narco_FAL";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=2;
            vehicle="EI_CF_Narco_G3";
            rank="PRIVATE";
            position[]={0,-5,0};
          };
          class Unit2
          {
            side=2;
            vehicle="EI_CF_Narco_SKS";
            rank="PRIVATE";
            position[]={0,-10,0};
          };
          class Unit3
          {
            side=2;
            vehicle="EI_CF_Narco_AK";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
        };
        class EI_CF_G_Narco_Fireteam_Pistol
        {
          name="Fireteam (Pistol)";
          faction="UNIF_Faction_Cartel";
          side=2;
          class Unit0
          {
            side=2;
            vehicle="EI_CF_Narco_M1911";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=2;
            vehicle="EI_CF_Narco_M9";
            rank="PRIVATE";
            position[]={0,-5,0};
          };
          class Unit2
          {
            side=2;
            vehicle="EI_CF_Narco_Revolver";
            rank="PRIVATE";
            position[]={0,-10,0};
          };
          class Unit3
          {
            side=2;
            vehicle="EI_CF_Narco_M9";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
        };
        class EI_CF_G_Narco_Fireteam_SMG
        {
          name="Fireteam (SMG)";
          faction="UNIF_Faction_Cartel";
          side=2;
          class Unit0
          {
            side=2;
            vehicle="EI_CF_Narco_M3";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=2;
            vehicle="EI_CF_Narco_MP5";
            rank="PRIVATE";
            position[]={0,-5,0};
          };
          class Unit2
          {
            side=2;
            vehicle="EI_CF_Narco_PPsh";
            rank="PRIVATE";
            position[]={0,-10,0};
          };
          class Unit3
          {
            side=2;
            vehicle="xxxxxx";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
        };
        class EI_CF_G_Narco_Squad_Riflemen
        {
          name="Squad (Riflemen)";
          faction="UNIF_Faction_Cartel";
          side=2;
          class Unit0
          {
            side=2;
            vehicle="EI_CF_Narco_AK";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=2;
            vehicle="EI_CF_Narco_M16";
            rank="PRIVATE";
            position[]={0,-5,0};
          };
          class Unit2
          {
            side=2;
            vehicle="EI_CF_Narco_FAL";
            rank="PRIVATE";
            position[]={0,-10,0};
          };
          class Unit3
          {
            side=2;
            vehicle="EI_CF_Narco_G3";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
          class Unit4
          {
            side=2;
            vehicle="EI_CF_Narco_M16";
            rank="PRIVATE";
            position[]={0,-20,0};
          };
          class Unit5
          {
            side=2;
            vehicle="EI_CF_Narco_SKS";
            rank="PRIVATE";
            position[]={0,-25,0};
          };
          class Unit6
          {
            side=2;
            vehicle="EI_CF_Narco_AK";
            rank="PRIVATE";
            position[]={0,-30,0};
          };
          class Unit7
          {
            side=2;
            vehicle="EI_CF_Narco_SKS";
            rank="PRIVATE";
            position[]={0,-35,0};
          };
        };
        class EI_CF_G_Narco_Squad_SMG
        {
          name="Squad (SMG)";
          faction="UNIF_Faction_Cartel";
          side=2;
          class Unit0
          {
            side=2;
            vehicle="EI_CF_Narco_M3";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=2;
            vehicle="EI_CF_Narco_MP5";
            rank="PRIVATE";
            position[]={0,-5,0};
          };
          class Unit2
          {
            side=2;
            vehicle="EI_CF_Narco_PPsh";
            rank="PRIVATE";
            position[]={0,-10,0};
          };
          class Unit3
          {
            side=2;
            vehicle="EI_CF_Narco_Scorpion";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
          class Unit4
          {
            side=2;
            vehicle="xxxxxx";
            rank="PRIVATE";
            position[]={0,-20,0};
          };
          class Unit5
          {
            side=2;
            vehicle="EI_CF_Narco_Sting";
            rank="PRIVATE";
            position[]={0,-25,0};
          };
          class Unit6
          {
            side=2;
            vehicle="EI_CF_Narco_UZI";
            rank="PRIVATE";
            position[]={0,-30,0};
          };
          class Unit7
          {
            side=2;
            vehicle="EI_CF_Narco_M3";
            rank="PRIVATE";
            position[]={0,-35,0};
          };
        };
        class EI_CF_G_Narco_Squad_Mixed
        {
          name="Squad (Mixed)";
          faction="UNIF_Faction_Cartel";
          side=2;
          class Unit0
          {
            side=2;
            vehicle="EI_CF_Narco_AK";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=2;
            vehicle="EI_CF_Narco_Benelli_M4";
            rank="PRIVATE";
            position[]={0,-5,0};
          };
          class Unit2
          {
            side=2;
            vehicle="EI_CF_Narco_PPsh";
            rank="PRIVATE";
            position[]={0,-10,0};
          };
          class Unit3
          {
            side=2;
            vehicle="EI_CF_Narco_SKS";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
          class Unit4
          {
            side=2;
            vehicle="EI_CF_Narco_UZI";
            rank="PRIVATE";
            position[]={0,-20,0};
          };
          class Unit5
          {
            side=2;
            vehicle="EI_CF_Narco_Kozlice";
            rank="PRIVATE";
            position[]={0,-25,0};
          };
          class Unit6
          {
            side=2;
            vehicle="EI_CF_Narco_MP5";
            rank="PRIVATE";
            position[]={0,-30,0};
          };
          class Unit7
          {
            side=2;
            vehicle="EI_CF_Narco_FAL";
            rank="PRIVATE";
            position[]={0,-35,0};
          };
        };
        class EI_CF_G_Narco_Fireteam_Mixed
        {
          name="Fireteam (Mixed)";
          faction="UNIF_Faction_Cartel";
          side=2;
          class Unit0
          {
            side=2;
            vehicle="EI_CF_Narco_AK";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=2;
            vehicle="EI_CF_Narco_Benelli_M4";
            rank="PRIVATE";
            position[]={0,-5,0};
          };
          class Unit2
          {
            side=2;
            vehicle="EI_CF_Narco_MP5";
            rank="PRIVATE";
            position[]={0,-10,0};
          };
          class Unit3
          {
            side=2;
            vehicle="EI_CF_Narco_UZI";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
        };
      };
    };
  };
};
