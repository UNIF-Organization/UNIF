class CfgPatches 
{ 
    class UNIF_UN_Faction_Men
    { 
       units[] =  // UNITTS are added here so they show up on zeus
        {
        	"UNIF_UN_Faction_Soldier_Rifleman",
          "UNIF_UN_Faction_Soldier_Rifleman_Light_AT",
          "UNIF_UN_Faction_Soldier_Rifleman_Heavy_AT",
          "UNIF_UN_Faction_Soldier_AT_Specialist_MAAWS",
          "UNIF_UN_Faction_Soldier_AT_Specialist_Javelin",
          "UNIF_UN_Faction_Soldier_AA_Specialist_Stinger",
          "UNIF_UN_Faction_Soldier_AA_Specialist_Titan",
          "UNIF_UN_Faction_Soldier_Grenadier",
          "UNIF_UN_Faction_Soldier_Squad_Leader",
          "UNIF_UN_Faction_Soldier_Machinegunner",
          "UNIF_UN_Faction_Soldier_Ammobearer",
          "UNIF_UN_Faction_Soldier_Combat_Life_Saver",
          "UNIF_UN_Faction_Soldier_Marksman",
          "UNIF_UN_Faction_Soldier_Sniper",
          "UNIF_UN_Faction_Soldier_UAV_Operator_AR2",
          "UNIF_UN_Faction_Soldier_Crewman",
          "UNIF_UN_Faction_Soldier_Officer",
          "UNIF_UN_Faction_Soldier_Officer_Parade",
          "UNIF_UN_Faction_Soldier_Rifleman_Light",
          "UNIF_UN_Faction_Soldier_Pilot_Helicopter",
          "UNIF_UN_Faction_Soldier_Pilot_Jet",
          "UNIF_UN_Faction_Soldier_Engineer",
          "UNIF_UN_Faction_Soldier_Humanitarian_Worker",
          "UNIF_UN_Faction_Soldier_Humanitarian_Engineer",
          "UNIF_UN_Faction_Soldier_Humanitarian_EOD",
          "UNIF_UN_Faction_Soldier_CBRN_Specialist",
          "UNIF_UN_Faction_Soldier_Humanitarian_Medic",
          "UNIF_UN_Faction_Soldier_Humanitarian_Aid_Worker",
          "UNIF_UN_Faction_Soldier_Humanitarian_Paramedic"
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
///UNIF_UN_Faction_Soldier_Rifleman
///UNIF_UN_Faction_Soldier_Crewman
///UNIF_UN_Faction_Soldier_Pilot_Jet
///UNIF_UN_Faction_Soldier_Pilot_Helicopter
class CfgVehicles 
{     
  class B_Survivor_F;
  class VSM_OCP_carryall;
  class VSM_OCP_Backpack_Kitbag;
  class TFAR_rt1523g_rhs;
  class VSM_Multicam_carryall;
  class CUP_C_PHOENIX_FIRSTAID;
  class B_UAV_01_backpack_F;
  class B_Officer_Parade_F;
  class I_E_Uniform_ParadeUniform_01_LDF_F;
  class B_LegStrapBag_coyote_F;
  class B_CivilianBackpack_01_Sport_Blue_F;
  class B_W_Soldier_CBRN_F;
  class B_CombinationUnitRespirator_01_F;

  class UNIF_UN_Faction_Soldier_Rifleman: B_Survivor_F
  {
    faction="UNIF_Faction_UNIF_UN_BLUFOR";
    editorPreview  = "\UNIF_UN_Faction_Men\UI\UNIF_UN_Faction_Soldier_Rifleman.jpg";    
    side=1;
    displayName="Rifleman";
    uniformClass="VSM_Scorpion_Crye_SS_Camo";
    weapons[]={"CUP_arifle_HK416_Black","Binocular","Put","Throw"};
    respawnWeapons[]={"CUP_arifle_HK416_Black","Binocular","Put","Throw"};
    items[]={"ACE_EarPlugs","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_morphine","FirstAidKit","FirstAidKit","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_splint","ACE_splint","ACE_tourniquet","ACE_tourniquet","ACE_NVG_Gen4_Black"};
    respawnItems[]={"ACE_EarPlugs","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_morphine","FirstAidKit","FirstAidKit","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_splint","ACE_splint","ACE_tourniquet","ACE_tourniquet","ACE_NVG_Gen4_Black"};
    magazines[]={"ACE_painkillers","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","SmokeShell","SmokeShell"};
    respawnMagazines[]={"ACE_painkillers","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","SmokeShell","SmokeShell"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","UNIF_Headgear_VSM_Mich2000_OGA","UNIF_Vest_RAV_Light_UN_OD"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","UNIF_Headgear_VSM_Mich2000_OGA","UNIF_Vest_RAV_Light_UN_OD"};
    backpack="";
  };

  class UNIF_UN_Faction_Soldier_Rifleman_Light_AT: B_Survivor_F
  {
    faction="UNIF_Faction_UNIF_UN_BLUFOR";
    editorPreview  = "\UNIF_UN_Faction_Men\UI\UNIF_UN_Faction_Soldier_Rifleman_Light_AT.jpg";
    side=1;
    displayName="Rifleman (Light AT)";
    uniformClass="VSM_Scorpion_Crye_Camo";
    weapons[]={"CUP_arifle_HK416_Black","CUP_launch_M136_Loaded","Put","Throw"};
    respawnWeapons[]={"CUP_arifle_HK416_Black","CUP_launch_M136_Loaded","Put","Throw"};
    items[]={"ACE_EarPlugs","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_morphine","FirstAidKit","FirstAidKit","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_splint","ACE_splint","ACE_tourniquet","ACE_tourniquet","ACE_NVG_Gen4_Black"};
    respawnItems[]={"ACE_EarPlugs","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_morphine","FirstAidKit","FirstAidKit","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_splint","ACE_splint","ACE_tourniquet","ACE_tourniquet","ACE_NVG_Gen4_Black"};
    magazines[]={"ACE_painkillers","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","SmokeShell","SmokeShell"};
    respawnMagazines[]={"ACE_painkillers","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","SmokeShell","SmokeShell"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","UNIF_Headgear_VSM_Mich2000_OGA","UNIF_Vest_RAV_Light_UN_OD"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","UNIF_Headgear_VSM_Mich2000_OGA","UNIF_Vest_RAV_Light_UN_OD"};
    backpack="";
  };

  class UNIF_UN_Faction_Soldier_Rifleman_Heavy_AT: B_Survivor_F
  {
    faction="UNIF_Faction_UNIF_UN_BLUFOR";
    editorPreview  = "\UNIF_UN_Faction_Men\UI\UNIF_UN_Faction_Soldier_Rifleman_Heavy_AT.jpg";
    side=1;
    displayName="Rifleman (Heavy AT)";
    uniformClass="VSM_Scorpion_Crye_SS_Camo";
    weapons[]={"CUP_arifle_HK416_Black","Binocular","CUP_launch_NLAW_Loaded","Put","Throw"};
    respawnWeapons[]={"CUP_arifle_HK416_Black","Binocular","CUP_launch_NLAW_Loaded","Put","Throw"};
    items[]={"ACE_EarPlugs","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_morphine","FirstAidKit","FirstAidKit","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_splint","ACE_splint","ACE_tourniquet","ACE_tourniquet","ACE_NVG_Gen4_Black"};
    respawnItems[]={"ACE_EarPlugs","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_morphine","FirstAidKit","FirstAidKit","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_splint","ACE_splint","ACE_tourniquet","ACE_tourniquet","ACE_NVG_Gen4_Black"};
    magazines[]={"ACE_painkillers","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","SmokeShell","SmokeShell"};
    respawnMagazines[]={"ACE_painkillers","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","SmokeShell","SmokeShell"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","UNIF_Headgear_VSM_Mich2000_OGA","UNIF_Vest_RAV_Light_UN_OD"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","UNIF_Headgear_VSM_Mich2000_OGA","UNIF_Vest_RAV_Light_UN_OD"};
    backpack="";
  };

  class UNIF_UN_Faction_Soldier_AT_Specialist_MAAWS: B_Survivor_F
  {
    faction="UNIF_Faction_UNIF_UN_BLUFOR";
    editorPreview  = "\UNIF_UN_Faction_Men\UI\UNIF_UN_Faction_Soldier_AT_Specialist_MAAWS.jpg";
    side=1;
    displayName="AT Specialist (MAAWS)";
    uniformClass="VSM_Scorpion_Crye_Camo";
    weapons[]={"CUP_arifle_HK416_Black","CUP_launch_MAAWS","Binocular","Put","Throw"};
    respawnWeapons[]={"CUP_arifle_HK416_Black","CUP_launch_MAAWS","Binocular","Put","Throw"};
    items[]={"ACE_EarPlugs","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_morphine","FirstAidKit","FirstAidKit","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_splint","ACE_splint","ACE_tourniquet","ACE_tourniquet","ACE_NVG_Gen4_Black"};
    respawnItems[]={"ACE_EarPlugs","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_morphine","FirstAidKit","FirstAidKit","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_splint","ACE_splint","ACE_tourniquet","ACE_tourniquet","ACE_NVG_Gen4_Black"};
    magazines[]={"ACE_painkillers","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","SmokeShell","SmokeShell","MRAWS_HE_F","MRAWS_HEAT55_F","MRAWS_HEAT_F"};
    respawnMagazines[]={"ACE_painkillers","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","SmokeShell","SmokeShell","MRAWS_HE_F","MRAWS_HEAT55_F","MRAWS_HEAT_F"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","UNIF_Headgear_VSM_Mich2000_OGA","UNIF_Vest_RAV_Light_UN_OD"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","UNIF_Headgear_VSM_Mich2000_OGA","UNIF_Vest_RAV_Light_UN_OD"};
    backpack="UNIF_AT_Specialist_MAAWS_pack";
  };

  class UNIF_UN_Faction_Soldier_AT_Specialist_Javelin: B_Survivor_F
  {
    faction="UNIF_Faction_UNIF_UN_BLUFOR";
    editorPreview  = "\UNIF_UN_Faction_Men\UI\UNIF_UN_Faction_Soldier_AT_Specialist_Javelin.jpg";
    side=1;
    displayName="AT Specialist (Javelin)";
    uniformClass="VSM_Scorpion_Crye_SS_Camo";
    weapons[]={"CUP_arifle_HK416_Black","CUP_launch_Javelin","Binocular","Put","Throw"};
    respawnWeapons[]={"CUP_arifle_HK416_Black","CUP_launch_Javelin","Binocular","Put","Throw"};
    items[]={"ACE_EarPlugs","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_morphine","FirstAidKit","FirstAidKit","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_splint","ACE_splint","ACE_tourniquet","ACE_tourniquet","ACE_NVG_Gen4_Black"};
    respawnItems[]={"ACE_EarPlugs","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_morphine","FirstAidKit","FirstAidKit","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_splint","ACE_splint","ACE_tourniquet","ACE_tourniquet","ACE_NVG_Gen4_Black"};
    magazines[]={"ACE_painkillers","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","SmokeShell","SmokeShell","CUP_Javelin_M"};
    respawnMagazines[]={"ACE_painkillers","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","SmokeShell","SmokeShell","CUP_Javelin_M"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","UNIF_Headgear_VSM_Mich2000_OGA","UNIF_Vest_RAV_Light_UN_OD"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","UNIF_Headgear_VSM_Mich2000_OGA","UNIF_Vest_RAV_Light_UN_OD"};
    backpack="UNIF_AT_Specialist_Javelin_pack";
  };

  class UNIF_UN_Faction_Soldier_AA_Specialist_Stinger: B_Survivor_F
  {
    faction="UNIF_Faction_UNIF_UN_BLUFOR";
    editorPreview  = "\UNIF_UN_Faction_Men\UI\UNIF_UN_Faction_Soldier_AA_Specialist_Stinger.jpg";
    side=1;
    displayName="AA Specialist (Stinger)";
    uniformClass="VSM_Scorpion_Crye_Camo";
    weapons[]={"CUP_arifle_HK416_Black","Binocular","CUP_launch_FIM92Stinger_Loaded","Put","Throw"};
    respawnWeapons[]={"CUP_arifle_HK416_Black","Binocular","CUP_launch_FIM92Stinger_Loaded","Put","Throw"};
    items[]={"ACE_EarPlugs","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_morphine","FirstAidKit","FirstAidKit","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_splint","ACE_splint","ACE_tourniquet","ACE_tourniquet","ACE_NVG_Gen4_Black"};
    respawnItems[]={"ACE_EarPlugs","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_morphine","FirstAidKit","FirstAidKit","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_splint","ACE_splint","ACE_tourniquet","ACE_tourniquet","ACE_NVG_Gen4_Black"};
    magazines[]={"ACE_painkillers","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","SmokeShell","SmokeShell"};
    respawnMagazines[]={"ACE_painkillers","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","SmokeShell","SmokeShell"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","UNIF_Headgear_VSM_Mich2000_OGA","UNIF_Vest_RAV_Light_UN_OD"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","UNIF_Headgear_VSM_Mich2000_OGA","UNIF_Vest_RAV_Light_UN_OD"};
    backpack="";
  };

  class UNIF_UN_Faction_Soldier_AA_Specialist_Titan: B_Survivor_F
  {
    faction="UNIF_Faction_UNIF_UN_BLUFOR";
    editorPreview  = "\UNIF_UN_Faction_Men\UI\UNIF_UN_Faction_Soldier_AA_Specialist_Titan.jpg";
    side=1;
    displayName="AA Specialist (Titan)";
    uniformClass="VSM_Scorpion_Crye_SS_Camo";
    weapons[]={"CUP_arifle_HK416_Black","launch_B_Titan_olive_F","Binocular","Put","Throw"};
    respawnWeapons[]={"CUP_arifle_HK416_Black","launch_B_Titan_olive_F","Binocular","Put","Throw"};
    items[]={"ACE_EarPlugs","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_morphine","FirstAidKit","FirstAidKit","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_splint","ACE_splint","ACE_tourniquet","ACE_tourniquet","ACE_NVG_Gen4_Black"};
    respawnItems[]={"ACE_EarPlugs","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_morphine","FirstAidKit","FirstAidKit","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_splint","ACE_splint","ACE_tourniquet","ACE_tourniquet","ACE_NVG_Gen4_Black"};
    magazines[]={"ACE_painkillers","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","SmokeShell","SmokeShell","Titan_AA","Titan_AA"};
    respawnMagazines[]={"ACE_painkillers","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","SmokeShell","SmokeShell","Titan_AA","Titan_AA"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","UNIF_Headgear_VSM_Mich2000_OGA","UNIF_Vest_RAV_Light_UN_OD"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","UNIF_Headgear_VSM_Mich2000_OGA","UNIF_Vest_RAV_Light_UN_OD"};
    backpack="UNIF_AA_Specialist_Titan_pack";
  };

  class UNIF_UN_Faction_Soldier_Grenadier: B_Survivor_F
  {
    faction="UNIF_Faction_UNIF_UN_BLUFOR";
    editorPreview  = "\UNIF_UN_Faction_Men\UI\UNIF_UN_Faction_Soldier_Grenadier.jpg";
    side=1;
    displayName="Grenadier";
    uniformClass="VSM_Scorpion_Crye_Camo";
    weapons[]={"CUP_arifle_HK416_M203_Black","Binocular","Put","Throw"};
    respawnWeapons[]={"CUP_arifle_HK416_M203_Black","Binocular","Put","Throw"};
    items[]={"ACE_EarPlugs","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_morphine","FirstAidKit","FirstAidKit","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_splint","ACE_splint","ACE_tourniquet","ACE_tourniquet","ACE_NVG_Gen4_Black"};
    respawnItems[]={"ACE_EarPlugs","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_morphine","FirstAidKit","FirstAidKit","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_splint","ACE_splint","ACE_tourniquet","ACE_tourniquet","ACE_NVG_Gen4_Black"};
    magazines[]={"ACE_painkillers","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","SmokeShell","SmokeShell","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_1Rnd_HEDP_M203","CUP_1Rnd_HEDP_M203","CUP_1Rnd_HEDP_M203","CUP_1Rnd_HEDP_M203","CUP_1Rnd_HEDP_M203","CUP_1Rnd_Smoke_M203","CUP_1Rnd_Smoke_M203","CUP_1Rnd_Smoke_M203","CUP_1Rnd_Smoke_M203","CUP_1Rnd_Smoke_M203","CUP_1Rnd_SmokeRed_M203","CUP_1Rnd_SmokeRed_M203","CUP_1Rnd_SmokeRed_M203","CUP_1Rnd_SmokeRed_M203","CUP_1Rnd_SmokeRed_M203"};
    respawnMagazines[]={"ACE_painkillers","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","SmokeShell","SmokeShell","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_1Rnd_HEDP_M203","CUP_1Rnd_HEDP_M203","CUP_1Rnd_HEDP_M203","CUP_1Rnd_HEDP_M203","CUP_1Rnd_HEDP_M203","CUP_1Rnd_Smoke_M203","CUP_1Rnd_Smoke_M203","CUP_1Rnd_Smoke_M203","CUP_1Rnd_Smoke_M203","CUP_1Rnd_Smoke_M203","CUP_1Rnd_SmokeRed_M203","CUP_1Rnd_SmokeRed_M203","CUP_1Rnd_SmokeRed_M203","CUP_1Rnd_SmokeRed_M203","CUP_1Rnd_SmokeRed_M203"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","UNIF_Headgear_VSM_Mich2000_OGA","UNIF_Vest_RAV_Light_UN_OD"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","UNIF_Headgear_VSM_Mich2000_OGA","UNIF_Vest_RAV_Light_UN_OD"};
    backpack="";
  };

  class UNIF_UN_Faction_Soldier_Squad_Leader: B_Survivor_F
  {
    faction="UNIF_Faction_UNIF_UN_BLUFOR";
    editorPreview  = "\UNIF_UN_Faction_Men\UI\UNIF_UN_Faction_Soldier_Squad_Leader.jpg";
    side=1;
    displayName="Squad Leader";
    uniformClass="VSM_Scorpion_Crye_SS_Camo";
    weapons[]={"CUP_arifle_HK416_M203_Black","Binocular","Put","Throw"};
    respawnWeapons[]={"CUP_arifle_HK416_M203_Black","Binocular","Put","Throw"};
    items[]={"ACE_EarPlugs","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_morphine","FirstAidKit","FirstAidKit","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_splint","ACE_splint","ACE_tourniquet","ACE_tourniquet","ACE_NVG_Gen4_Black"};
    respawnItems[]={"ACE_EarPlugs","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_morphine","FirstAidKit","FirstAidKit","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_splint","ACE_splint","ACE_tourniquet","ACE_tourniquet","ACE_NVG_Gen4_Black"};
    magazines[]={"ACE_painkillers","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","SmokeShell","SmokeShell","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_1Rnd_HEDP_M203","CUP_1Rnd_HEDP_M203","CUP_1Rnd_HEDP_M203","CUP_1Rnd_HEDP_M203","CUP_1Rnd_HEDP_M203","CUP_1Rnd_Smoke_M203","CUP_1Rnd_Smoke_M203","CUP_1Rnd_Smoke_M203","CUP_1Rnd_Smoke_M203","CUP_1Rnd_Smoke_M203","CUP_1Rnd_SmokeRed_M203","CUP_1Rnd_SmokeRed_M203","CUP_1Rnd_SmokeRed_M203","CUP_1Rnd_SmokeRed_M203","CUP_1Rnd_SmokeRed_M203"};
    respawnMagazines[]={"ACE_painkillers","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","SmokeShell","SmokeShell","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_1Rnd_HEDP_M203","CUP_1Rnd_HEDP_M203","CUP_1Rnd_HEDP_M203","CUP_1Rnd_HEDP_M203","CUP_1Rnd_HEDP_M203","CUP_1Rnd_Smoke_M203","CUP_1Rnd_Smoke_M203","CUP_1Rnd_Smoke_M203","CUP_1Rnd_Smoke_M203","CUP_1Rnd_Smoke_M203","CUP_1Rnd_SmokeRed_M203","CUP_1Rnd_SmokeRed_M203","CUP_1Rnd_SmokeRed_M203","CUP_1Rnd_SmokeRed_M203","CUP_1Rnd_SmokeRed_M203"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","UNIF_Headgear_VSM_Mich2000_OGA","UNIF_Vest_RAV_Light_UN_OD"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","UNIF_Headgear_VSM_Mich2000_OGA","UNIF_Vest_RAV_Light_UN_OD"};
    backpack="UNIF_Squad_Leader_pack";
  };

  class UNIF_UN_Faction_Soldier_Machinegunner: B_Survivor_F
  {
    faction="UNIF_Faction_UNIF_UN_BLUFOR";
    editorPreview  = "\UNIF_UN_Faction_Men\UI\UNIF_UN_Faction_Soldier_Machinegunner.jpg";
    side=1;
    displayName="Machine Gunner";
    uniformClass="VSM_Scorpion_Crye_Camo";
    weapons[]={"CUP_lmg_m249_pip4","Binocular","Put","Throw"};
    respawnWeapons[]={"CUP_lmg_m249_pip4","Binocular","Put","Throw"};
    items[]={"ACE_EarPlugs","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_morphine","FirstAidKit","FirstAidKit","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_splint","ACE_splint","ACE_tourniquet","ACE_tourniquet","ACE_NVG_Gen4_Black"};
    respawnItems[]={"ACE_EarPlugs","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_morphine","FirstAidKit","FirstAidKit","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_splint","ACE_splint","ACE_tourniquet","ACE_tourniquet","ACE_NVG_Gen4_Black"};
    magazines[]={"ACE_painkillers","SmokeShell","SmokeShell","CUP_200Rnd_TE4_Red_Tracer_556x45_M249","CUP_200Rnd_TE4_Red_Tracer_556x45_M249"};
    respawnMagazines[]={"ACE_painkillers","SmokeShell","SmokeShell","CUP_200Rnd_TE4_Red_Tracer_556x45_M249","CUP_200Rnd_TE4_Red_Tracer_556x45_M249"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","UNIF_Headgear_VSM_Mich2000_OGA","UNIF_Vest_RAV_Light_UN_OD"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","UNIF_Headgear_VSM_Mich2000_OGA","UNIF_Vest_RAV_Light_UN_OD"};
    backpack="";
  };

  class UNIF_UN_Faction_Soldier_Ammobearer: B_Survivor_F
  {
    faction="UNIF_Faction_UNIF_UN_BLUFOR";
    editorPreview  = "\UNIF_UN_Faction_Men\UI\UNIF_UN_Faction_Soldier_Ammobearer.jpg";
    side=1;
    displayName="Ammo Bearer";
    uniformClass="VSM_Scorpion_Crye_SS_Camo";
    weapons[]={"CUP_arifle_HK416_Black","Binocular","Put","Throw"};
    respawnWeapons[]={"CUP_arifle_HK416_Black","Binocular","Put","Throw"};
    items[]={"ACE_EarPlugs","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_morphine","FirstAidKit","FirstAidKit","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_splint","ACE_splint","ACE_tourniquet","ACE_tourniquet","ACE_NVG_Gen4_Black"};
    respawnItems[]={"ACE_EarPlugs","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_morphine","FirstAidKit","FirstAidKit","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_splint","ACE_splint","ACE_tourniquet","ACE_tourniquet","ACE_NVG_Gen4_Black"};
    magazines[]={"ACE_painkillers","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","SmokeShell","SmokeShell","CUP_200Rnd_TE4_Red_Tracer_556x45_M249","CUP_200Rnd_TE4_Red_Tracer_556x45_M249","CUP_200Rnd_TE4_Red_Tracer_556x45_M249","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_20Rnd_762x51_HK417","CUP_20Rnd_762x51_HK417","CUP_20Rnd_762x51_HK417","CUP_20Rnd_762x51_HK417","CUP_20Rnd_762x51_HK417","CUP_20Rnd_762x51_HK417"};
    respawnMagazines[]={"ACE_painkillers","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","SmokeShell","SmokeShell","CUP_200Rnd_TE4_Red_Tracer_556x45_M249","CUP_200Rnd_TE4_Red_Tracer_556x45_M249","CUP_200Rnd_TE4_Red_Tracer_556x45_M249","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_20Rnd_762x51_HK417","CUP_20Rnd_762x51_HK417","CUP_20Rnd_762x51_HK417","CUP_20Rnd_762x51_HK417","CUP_20Rnd_762x51_HK417","CUP_20Rnd_762x51_HK417"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","UNIF_Headgear_VSM_Mich2000_OGA","UNIF_Vest_RAV_Light_UN_OD"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","UNIF_Headgear_VSM_Mich2000_OGA","UNIF_Vest_RAV_Light_UN_OD"};
    backpack="UNIF_Ammobearer_pack";
  };

  class UNIF_UN_Faction_Soldier_Combat_Life_Saver: B_Survivor_F
  {
    faction="UNIF_Faction_UNIF_UN_BLUFOR";
    editorPreview  = "\UNIF_UN_Faction_Men\UI\UNIF_UN_Faction_Soldier_Combat_Life_Saver.jpg";
    side=1;
    displayName="Combat Life Saver";
    uniformClass="VSM_Scorpion_Crye_Tee_Camo";
    weapons[]={"CUP_arifle_HK416_Black","Binocular","Put","Throw"};
    respawnWeapons[]={"CUP_arifle_HK416_Black","Binocular","Put","Throw"};
    items[]={"ACE_EarPlugs","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_morphine","FirstAidKit","FirstAidKit","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_splint","ACE_splint","ACE_tourniquet","ACE_tourniquet","ACE_NVG_Gen4_Black","ACE_surgicalKit","ACE_bloodIV","ACE_bloodIV","ACE_bloodIV","ACE_bloodIV","ACE_bloodIV_250","ACE_bloodIV_250","ACE_bloodIV_250","ACE_bloodIV_250","ACE_bloodIV_250","ACE_bloodIV_500","ACE_bloodIV_500","ACE_bloodIV_500","ACE_bloodIV_500","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_splint","FirstAidKit","FirstAidKit","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet"};
    respawnItems[]={"ACE_EarPlugs","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_morphine","FirstAidKit","FirstAidKit","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_splint","ACE_splint","ACE_tourniquet","ACE_tourniquet","ACE_NVG_Gen4_Black","ACE_surgicalKit","ACE_bloodIV","ACE_bloodIV","ACE_bloodIV","ACE_bloodIV","ACE_bloodIV_250","ACE_bloodIV_250","ACE_bloodIV_250","ACE_bloodIV_250","ACE_bloodIV_250","ACE_bloodIV_500","ACE_bloodIV_500","ACE_bloodIV_500","ACE_bloodIV_500","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_splint","FirstAidKit","FirstAidKit","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet"};
    magazines[]={"ACE_painkillers","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","SmokeShell","SmokeShell","ACE_painkillers","ACE_painkillers","ACE_painkillers","ACE_painkillers","ACE_painkillers"};
    respawnMagazines[]={"ACE_painkillers","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","SmokeShell","SmokeShell","ACE_painkillers","ACE_painkillers","ACE_painkillers","ACE_painkillers","ACE_painkillers"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","UNIF_Headgear_VSM_Mich2000_OGA","UNIF_Vest_RAV_Light_UN_OD"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","UNIF_Headgear_VSM_Mich2000_OGA","UNIF_Vest_RAV_Light_UN_OD"};
    backpack="UNIF_Combat_Life_Saver_pack";
  };

  class UNIF_UN_Faction_Soldier_Marksman: B_Survivor_F
  {
    faction="UNIF_Faction_UNIF_UN_BLUFOR";
    editorPreview  = "\UNIF_UN_Faction_Men\UI\UNIF_UN_Faction_Soldier_Marksman.jpg";
    side=1;
    displayName="Marksman";
    uniformClass="VSM_Scorpion_Crye_Camo";
    weapons[]={"CUP_arifle_HK417_20_Scope","Binocular","Put","Throw"};
    respawnWeapons[]={"CUP_arifle_HK417_20_Scope","Binocular","Put","Throw"};
    items[]={"ACE_EarPlugs","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_morphine","FirstAidKit","FirstAidKit","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_splint","ACE_splint","ACE_tourniquet","ACE_tourniquet","ACE_NVG_Gen4_Black"};
    respawnItems[]={"ACE_EarPlugs","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_morphine","FirstAidKit","FirstAidKit","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_splint","ACE_splint","ACE_tourniquet","ACE_tourniquet","ACE_NVG_Gen4_Black"};
    magazines[]={"ACE_painkillers","SmokeShell","SmokeShell","CUP_20Rnd_762x51_HK417","CUP_20Rnd_762x51_HK417","CUP_20Rnd_762x51_HK417","CUP_20Rnd_762x51_HK417","CUP_20Rnd_762x51_HK417","CUP_20Rnd_762x51_HK417","CUP_20Rnd_762x51_HK417","CUP_20Rnd_762x51_HK417"};
    respawnMagazines[]={"ACE_painkillers","SmokeShell","SmokeShell","CUP_20Rnd_762x51_HK417","CUP_20Rnd_762x51_HK417","CUP_20Rnd_762x51_HK417","CUP_20Rnd_762x51_HK417","CUP_20Rnd_762x51_HK417","CUP_20Rnd_762x51_HK417","CUP_20Rnd_762x51_HK417","CUP_20Rnd_762x51_HK417"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","UNIF_Headgear_VSM_Mich2000_OGA","UNIF_Vest_RAV_Light_UN_OD"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","UNIF_Headgear_VSM_Mich2000_OGA","UNIF_Vest_RAV_Light_UN_OD"};
    backpack="";
  };

  class UNIF_UN_Faction_Soldier_Sniper: B_Survivor_F
  {
    faction="UNIF_Faction_UNIF_UN_BLUFOR";
    editorPreview  = "\UNIF_UN_Faction_Men\UI\UNIF_UN_Faction_Soldier_Sniper.jpg";
    side=1;
    displayName="Sniper";
    uniformClass="VSM_Scorpion_Crye_Tee_Camo";
    weapons[]={"CUP_srifle_AWM_wdl_SBPMII","Binocular","Put","Throw"};
    respawnWeapons[]={"CUP_srifle_AWM_wdl_SBPMII","Binocular","Put","Throw"};
    items[]={"ACE_EarPlugs","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_morphine","FirstAidKit","FirstAidKit","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_splint","ACE_splint","ACE_tourniquet","ACE_tourniquet","ACE_NVG_Gen4_Black"};
    respawnItems[]={"ACE_EarPlugs","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_morphine","FirstAidKit","FirstAidKit","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_splint","ACE_splint","ACE_tourniquet","ACE_tourniquet","ACE_NVG_Gen4_Black"};
    magazines[]={"ACE_painkillers","SmokeShell","SmokeShell","CUP_5Rnd_762x67_G22","CUP_5Rnd_762x67_G22","CUP_5Rnd_762x67_G22","CUP_5Rnd_762x67_G22","CUP_5Rnd_762x67_G22","CUP_5Rnd_762x67_G22","CUP_5Rnd_762x67_G22","CUP_5Rnd_762x67_G22","CUP_5Rnd_762x67_G22","CUP_5Rnd_762x67_G22"};
    respawnMagazines[]={"ACE_painkillers","SmokeShell","SmokeShell","CUP_5Rnd_762x67_G22","CUP_5Rnd_762x67_G22","CUP_5Rnd_762x67_G22","CUP_5Rnd_762x67_G22","CUP_5Rnd_762x67_G22","CUP_5Rnd_762x67_G22","CUP_5Rnd_762x67_G22","CUP_5Rnd_762x67_G22","CUP_5Rnd_762x67_G22","CUP_5Rnd_762x67_G22"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","UNIF_Headgear_BoonieHat","UNIF_Vest_RAV_Light_UN_OD"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","UNIF_Headgear_BoonieHat","UNIF_Vest_RAV_Light_UN_OD"};
    backpack="";
  };

  class UNIF_UN_Faction_Soldier_UAV_Operator_AR2: B_Survivor_F
  {
    faction="UNIF_Faction_UNIF_UN_BLUFOR";
    editorPreview  = "\UNIF_UN_Faction_Men\UI\UNIF_UN_Faction_Soldier_UAV_Operator_AR2.jpg";
    side=1;
    displayName="UAV Operator (AR2)";
    uniformClass="VSM_Scorpion_Crye_Camo";
    weapons[]={"CUP_arifle_HK416_Black","Binocular","Put","Throw"};
    respawnWeapons[]={"CUP_arifle_HK416_Black","Binocular","Put","Throw"};
    items[]={"ACE_EarPlugs","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_morphine","FirstAidKit","FirstAidKit","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_splint","ACE_splint","ACE_tourniquet","ACE_tourniquet","ACE_NVG_Gen4_Black"};
    respawnItems[]={"ACE_EarPlugs","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_morphine","FirstAidKit","FirstAidKit","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_splint","ACE_splint","ACE_tourniquet","ACE_tourniquet","ACE_NVG_Gen4_Black"};
    magazines[]={"ACE_painkillers","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","SmokeShell","SmokeShell"};
    respawnMagazines[]={"ACE_painkillers","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","SmokeShell","SmokeShell"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","B_UavTerminal","Binocular","UNIF_Headgear_VSM_Mich2000_OGA","UNIF_Vest_RAV_Light_UN_OD"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","B_UavTerminal","Binocular","UNIF_Headgear_VSM_Mich2000_OGA","UNIF_Vest_RAV_Light_UN_OD"};
    backpack="UNIF_UAV_Operator_AR2_pack";
  };

  class UNIF_UN_Faction_Soldier_Crewman: B_Survivor_F
  {
    faction="UNIF_Faction_UNIF_UN_BLUFOR";
    editorPreview  = "\UNIF_UN_Faction_Men\UI\UNIF_UN_Faction_Soldier_Crewman.jpg";
    side=1;
    displayName="Crewman";
    uniformClass="VSM_Scorpion_Crye_Tee_Camo";
    weapons[]={"CUP_smg_MP5A5","Binocular","Put","Throw"};
    respawnWeapons[]={"CUP_smg_MP5A5","Binocular","Put","Throw"};
    items[]={"ACE_EarPlugs","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_morphine","FirstAidKit","FirstAidKit","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_splint","ACE_splint","ACE_tourniquet","ACE_tourniquet","ACE_NVG_Gen4_Black","ToolKit"};
    respawnItems[]={"ACE_EarPlugs","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_morphine","FirstAidKit","FirstAidKit","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_splint","ACE_splint","ACE_tourniquet","ACE_tourniquet","ACE_NVG_Gen4_Black","ToolKit"};
    magazines[]={"ACE_painkillers","SmokeShell","SmokeShell","CUP_30Rnd_9x19_MP5","CUP_30Rnd_9x19_MP5","CUP_30Rnd_9x19_MP5","CUP_30Rnd_9x19_MP5","CUP_30Rnd_9x19_MP5","CUP_30Rnd_9x19_MP5","CUP_30Rnd_9x19_MP5"};
    respawnMagazines[]={"ACE_painkillers","SmokeShell","SmokeShell","CUP_30Rnd_9x19_MP5","CUP_30Rnd_9x19_MP5","CUP_30Rnd_9x19_MP5","CUP_30Rnd_9x19_MP5","CUP_30Rnd_9x19_MP5","CUP_30Rnd_9x19_MP5","CUP_30Rnd_9x19_MP5"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","UNIF_Headgear_CVCHelmet","UNIF_Vest_RAV_Light_UN_OD"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","UNIF_Headgear_CVCHelmet","UNIF_Vest_RAV_Light_UN_OD"};
    backpack="UNIF_Crewman_pack";
  };

  class UNIF_UN_Faction_Soldier_Officer: B_Survivor_F
  {
    faction="UNIF_Faction_UNIF_UN_BLUFOR";
    editorPreview  = "\UNIF_UN_Faction_Men\UI\UNIF_UN_Faction_Soldier_Officer.jpg";
    side=1;
    displayName="Officer";
    uniformClass="VSM_Scorpion_Crye_Camo";
    weapons[]={"CUP_arifle_HK416_Black","Binocular","Put","Throw"};
    respawnWeapons[]={"CUP_arifle_HK416_Black","Binocular","Put","Throw"};
    items[]={"ACE_EarPlugs","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_morphine","FirstAidKit","FirstAidKit","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_splint","ACE_splint","ACE_tourniquet","ACE_tourniquet","ACE_NVG_Gen4_Black"};
    respawnItems[]={"ACE_EarPlugs","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_morphine","FirstAidKit","FirstAidKit","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_splint","ACE_splint","ACE_tourniquet","ACE_tourniquet","ACE_NVG_Gen4_Black"};
    magazines[]={"ACE_painkillers","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","SmokeShell","SmokeShell"};
    respawnMagazines[]={"ACE_painkillers","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","SmokeShell","SmokeShell"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","UNIF_Headgear_Beret_1","UNIF_Vest_RAV_Light_UN_OD"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","UNIF_Headgear_Beret_1","UNIF_Vest_RAV_Light_UN_OD"};
    backpack="UNIF_Officer_pack";
  };

  class UNIF_UN_Faction_Soldier_Officer_Parade: I_E_Uniform_ParadeUniform_01_LDF_F
  {
    faction="UNIF_Faction_UNIF_UN_BLUFOR";
    editorPreview  = "\UNIF_UN_Faction_Men\UI\UNIF_UN_Faction_Soldier_Officer_Parade.jpg";
    side=1;
    scope = 2;
    scopeCurator = 2;
    displayName="Officer (Parade)";
    uniformClass = "U_I_E_ParadeUniform_01_LDF_F";
    weapons[]={"Put","Throw"};
    respawnWeapons[]={"Put","Throw"};
    items[]={"ACE_EarPlugs","ACE_packingBandage","ACE_packingBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_tourniquet","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet"};
    respawnItems[]={"ACE_EarPlugs","ACE_packingBandage","ACE_packingBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_tourniquet","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet"};
    magazines[]={};
    respawnMagazines[]={};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","UNIF_Headgear_Beret_1"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","UNIF_Headgear_Beret_1"};
    backpack="";
    editorSubcategory = "EdSubcat_Personnel_Story";
  };

  class UNIF_UN_Faction_Soldier_Rifleman_Light: B_Survivor_F
  {
    faction="UNIF_Faction_UNIF_UN_BLUFOR";
    editorPreview  = "\UNIF_UN_Faction_Men\UI\UNIF_UN_Faction_Soldier_Rifleman_Light.jpg";
    side=1;
    displayName="Rifleman (Light)";
    uniformClass="VSM_Scorpion_Crye_Tee_Camo";
    weapons[]={"CUP_arifle_HK416_Black","Binocular","Put","Throw"};
    respawnWeapons[]={"CUP_arifle_HK416_Black","Binocular","Put","Throw"};
    items[]={"ACE_EarPlugs","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_morphine","FirstAidKit","FirstAidKit","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_splint","ACE_splint","ACE_tourniquet","ACE_tourniquet","ACE_NVG_Gen4_Black"};
    respawnItems[]={"ACE_EarPlugs","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_morphine","FirstAidKit","FirstAidKit","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_splint","ACE_splint","ACE_tourniquet","ACE_tourniquet","ACE_NVG_Gen4_Black"};
    magazines[]={"ACE_painkillers","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","SmokeShell","SmokeShell"};
    respawnMagazines[]={"ACE_painkillers","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","SmokeShell","SmokeShell"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","UNIF_Headgear_BoonieHat","UNIF_Vest_RAV_Light_UN_OD"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","UNIF_Headgear_BoonieHat","UNIF_Vest_RAV_Light_UN_OD"};
    backpack="";
  };

  class UNIF_UN_Faction_Soldier_Pilot_Helicopter: B_Survivor_F
  {
    faction="UNIF_Faction_UNIF_UN_BLUFOR";
    editorPreview  = "\UNIF_UN_Faction_Men\UI\UNIF_UN_Faction_Soldier_Pilot_Helicopter.jpg";
    side=1;
    displayName="Pilot (Helicopter)";
    uniformClass="VSM_Scorpion_Crye_SS_Camo";
    weapons[]={"CUP_smg_MP5A5","Binocular","Put","Throw"};
    respawnWeapons[]={"CUP_smg_MP5A5","Binocular","Put","Throw"};
    items[]={"ACE_EarPlugs","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_morphine","FirstAidKit","FirstAidKit","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_splint","ACE_splint","ACE_tourniquet","ACE_tourniquet","ACE_NVG_Gen4_Black","ToolKit"};
    respawnItems[]={"ACE_EarPlugs","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_morphine","FirstAidKit","FirstAidKit","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_splint","ACE_splint","ACE_tourniquet","ACE_tourniquet","ACE_NVG_Gen4_Black","ToolKit"};
    magazines[]={"ACE_painkillers","SmokeShell","SmokeShell","CUP_30Rnd_9x19_MP5","CUP_30Rnd_9x19_MP5","CUP_30Rnd_9x19_MP5","CUP_30Rnd_9x19_MP5","CUP_30Rnd_9x19_MP5","CUP_30Rnd_9x19_MP5","CUP_30Rnd_9x19_MP5"};
    respawnMagazines[]={"ACE_painkillers","SmokeShell","SmokeShell","CUP_30Rnd_9x19_MP5","CUP_30Rnd_9x19_MP5","CUP_30Rnd_9x19_MP5","CUP_30Rnd_9x19_MP5","CUP_30Rnd_9x19_MP5","CUP_30Rnd_9x19_MP5","CUP_30Rnd_9x19_MP5"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","UNIF_Headgear_SPH4Helmet2","UNIF_Vest_RAV_Light_UN_OD"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","UNIF_Headgear_SPH4Helmet2","UNIF_Vest_RAV_Light_UN_OD"};
    backpack="UNIF_Pilot_Helicopter_pack";
  };

  class UNIF_UN_Faction_Soldier_Pilot_Jet: B_Survivor_F
  {
    faction="UNIF_Faction_UNIF_UN_BLUFOR";
    editorPreview  = "\UNIF_UN_Faction_Men\UI\UNIF_UN_Faction_Soldier_Pilot_Jet.jpg";
    side=1;
    displayName="Pilot (Jet)";
    uniformClass="U_B_HeliPilotCoveralls";
    weapons[]={"CUP_smg_MP5A5","Binocular","Put","Throw"};
    respawnWeapons[]={"CUP_smg_MP5A5","Binocular","Put","Throw"};
    items[]={"ACE_EarPlugs","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_morphine","FirstAidKit","FirstAidKit","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_splint","ACE_splint","ACE_tourniquet","ACE_tourniquet","ToolKit"};
    respawnItems[]={"ACE_EarPlugs","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_morphine","FirstAidKit","FirstAidKit","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_splint","ACE_splint","ACE_tourniquet","ACE_tourniquet","ToolKit"};
    magazines[]={"ACE_painkillers","SmokeShell","SmokeShell","CUP_30Rnd_9x19_MP5","CUP_30Rnd_9x19_MP5","CUP_30Rnd_9x19_MP5","CUP_30Rnd_9x19_MP5","CUP_30Rnd_9x19_MP5","CUP_30Rnd_9x19_MP5","CUP_30Rnd_9x19_MP5"};
    respawnMagazines[]={"ACE_painkillers","SmokeShell","SmokeShell","CUP_30Rnd_9x19_MP5","CUP_30Rnd_9x19_MP5","CUP_30Rnd_9x19_MP5","CUP_30Rnd_9x19_MP5","CUP_30Rnd_9x19_MP5","CUP_30Rnd_9x19_MP5","CUP_30Rnd_9x19_MP5"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","H_PilotHelmetFighter_B","UNIF_Vest_RAV_Light_UN_OD"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","H_PilotHelmetFighter_B","UNIF_Vest_RAV_Light_UN_OD"};
    backpack="UNIF_Pilot_Jet_pack";
  };

  class UNIF_UN_Faction_Soldier_Engineer: B_Survivor_F
  {
    faction="UNIF_Faction_UNIF_UN_BLUFOR";
    editorPreview  = "\UNIF_UN_Faction_Men\UI\UNIF_UN_Faction_Soldier_Engineer.jpg";
    side=1;
    displayName="Engineer";
    uniformClass="VSM_Scorpion_Crye_Camo";
    weapons[]={"CUP_arifle_HK416_Black","Binocular","Put","Throw"};
    respawnWeapons[]={"CUP_arifle_HK416_Black","Binocular","Put","Throw"};
    items[]={"ACE_EarPlugs","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_morphine","FirstAidKit","FirstAidKit","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_splint","ACE_splint","ACE_tourniquet","ACE_tourniquet","ACE_NVG_Gen4_Black","ACE_EntrenchingTool","ACE_DefusalKit","ACE_M26_Clacker","MineDetector","ToolKit","ACE_wirecutter","ace_marker_flags_red","ace_marker_flags_red","ace_marker_flags_red","ace_marker_flags_red","ace_marker_flags_red","ace_marker_flags_red","ace_marker_flags_red","ace_marker_flags_red","ace_marker_flags_red","ace_marker_flags_red","ace_marker_flags_red","ace_marker_flags_red","ace_marker_flags_red","ace_marker_flags_red","ace_marker_flags_red"};
    respawnItems[]={"ACE_EarPlugs","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_morphine","FirstAidKit","FirstAidKit","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_splint","ACE_splint","ACE_tourniquet","ACE_tourniquet","ACE_NVG_Gen4_Black","ACE_EntrenchingTool","ACE_DefusalKit","ACE_M26_Clacker","MineDetector","ToolKit","ACE_wirecutter","ace_marker_flags_red","ace_marker_flags_red","ace_marker_flags_red","ace_marker_flags_red","ace_marker_flags_red","ace_marker_flags_red","ace_marker_flags_red","ace_marker_flags_red","ace_marker_flags_red","ace_marker_flags_red","ace_marker_flags_red","ace_marker_flags_red","ace_marker_flags_red","ace_marker_flags_red","ace_marker_flags_red"};
    magazines[]={"ACE_painkillers","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","SmokeShell","SmokeShell","DemoCharge_Remote_Mag","DemoCharge_Remote_Mag","SatchelCharge_Remote_Mag"};
    respawnMagazines[]={"ACE_painkillers","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag","SmokeShell","SmokeShell","DemoCharge_Remote_Mag","DemoCharge_Remote_Mag","SatchelCharge_Remote_Mag"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","UNIF_Headgear_VSM_Mich2000_OGA","UNIF_Vest_RAV_Light_UN_OD"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","UNIF_Headgear_VSM_Mich2000_OGA","UNIF_Vest_RAV_Light_UN_OD"};
    backpack="UNIF_Engineer_pack";
  };

  class UNIF_UN_Faction_Soldier_Humanitarian_Worker: B_Officer_Parade_F
  {
    faction="UNIF_Faction_UNIF_UN_BLUFOR";
    editorPreview  = "\UNIF_UN_Faction_Men\UI\UNIF_UN_Faction_Soldier_Humanitarian_Worker.jpg";
    side=1;
    displayName="Humanitarian (Worker)";
    uniformClass="UNIF_UN_UniformItem_C_Uni_1";
    weapons[]={"Put","Throw"};
    respawnWeapons[]={"Put","Throw"};
    items[]={"ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","FirstAidKit","ACE_tourniquet","ACE_tourniquet","ACE_MapTools","ACE_EntrenchingTool","ToolKit"};
    respawnItems[]={"ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","FirstAidKit","ACE_tourniquet","ACE_tourniquet","ACE_MapTools","ACE_EntrenchingTool","ToolKit"};
    magazines[]={};
    respawnMagazines[]={};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","UNIF_Headgear_MarshallCap"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","UNIF_Headgear_MarshallCap"};
    backpack="UNIF_Humanitarian_Worker_pack";
    editorSubcategory = "EdSubcat_Personnel_Story";
  };

  class UNIF_UN_Faction_Soldier_Humanitarian_Engineer: B_Officer_Parade_F
  {
    faction="UNIF_Faction_UNIF_UN_BLUFOR";
    editorPreview  = "\UNIF_UN_Faction_Men\UI\UNIF_UN_Faction_Soldier_Humanitarian_Engineer.jpg";
    side=1;
    displayName="Humanitarian (Engineer)";
    uniformClass="UNIF_UN_UniformItem_C_Uni_2";
    weapons[]={"Put","Throw"};
    respawnWeapons[]={"Put","Throw"};
    items[]={"ToolKit","ACE_DefusalKit","ACE_wirecutter","MineDetector"};
    respawnItems[]={"ToolKit","ACE_DefusalKit","ACE_wirecutter","MineDetector"};
    magazines[]={"acex_intelitems_notepad"};
    respawnMagazines[]={"acex_intelitems_notepad"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","H_Construction_headset_white_F","V_Safety_yellow_F"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","H_Construction_headset_white_F","V_Safety_yellow_F"};
    backpack="UNIF_Humanitarian_Engineer_pack";
    editorSubcategory = "EdSubcat_Personnel_Story";
  };

  class UNIF_UN_Faction_Soldier_Humanitarian_EOD: B_Officer_Parade_F
  {
    faction="UNIF_Faction_UNIF_UN_BLUFOR";
    editorPreview  = "\UNIF_UN_Faction_Men\UI\UNIF_UN_Faction_Soldier_Humanitarian_EOD.jpg";
    side=1;
    displayName="Humanitarian (EOD)";
    uniformClass="UNIF_UN_UniformItem_C_Uni_1";
    weapons[]={"Put","Throw"};
    respawnWeapons[]={"Put","Throw"};
    items[]={"ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","FirstAidKit","ACE_tourniquet","ACE_tourniquet","ACE_MapTools","ACE_EntrenchingTool","ToolKit","ACE_wirecutter","ACE_EntrenchingTool","ACE_DefusalKit","ACE_M26_Clacker","ACE_MapTools"};
    respawnItems[]={"ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","FirstAidKit","ACE_tourniquet","ACE_tourniquet","ACE_MapTools","ACE_EntrenchingTool","ToolKit","ACE_wirecutter","ACE_EntrenchingTool","ACE_DefusalKit","ACE_M26_Clacker","ACE_MapTools"};
    magazines[]={"acex_intelitems_notepad"};
    respawnMagazines[]={"acex_intelitems_notepad"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","UNIF_Headgear_Altyn_ShieldDown","V_EOD_blue_F"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","UNIF_Headgear_Altyn_ShieldDown","V_EOD_blue_F"};
    backpack="UNIF_Humanitarian_EOD_pack";
    editorSubcategory = "EdSubcat_Personnel_Story";
  };

  class UNIF_UN_Faction_Soldier_CBRN_Specialist: B_W_Soldier_CBRN_F
  {
    faction="UNIF_Faction_UNIF_UN_BLUFOR";
    editorPreview  = "\UNIF_UN_Faction_Men\UI\UNIF_UN_Faction_Soldier_CBRN_Specialist.jpg";
    side=1;
    displayName="CBRN Specialist";
    uniformClass="U_C_CBRN_Suit_01_Blue_F";
    weapons[]={"Binocular","Put","Throw"};
    respawnWeapons[]={"Binocular","Put","Throw"};
    items[]={"FirstAidKit"};
    respawnItems[]={"FirstAidKit"};
    magazines[]={"SmokeShell","SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","SmokeShellGreen","SmokeShellGreen","Chemlight_green","Chemlight_green","Chemlight_green"};
    respawnMagazines[]={"SmokeShell","SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","SmokeShellGreen","SmokeShellGreen","Chemlight_green","Chemlight_green","Chemlight_green"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","UNIF_Vest_RAV_Light_UN_OD","G_AirPurifyingRespirator_01_nofilter_F"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","UNIF_Vest_RAV_Light_UN_OD","G_AirPurifyingRespirator_01_nofilter_F"};
    backpack="UNIF_CBRN_Specialist_pack";
    editorSubcategory = "EdSubcat_Personnel_Story";
  };

  class UNIF_UN_Faction_Soldier_Humanitarian_Medic: B_Officer_Parade_F
  {
    faction="UNIF_Faction_UNIF_UN_BLUFOR";
    editorPreview  = "\UNIF_UN_Faction_Men\UI\UNIF_UN_Faction_Soldier_Humanitarian_Medic.jpg";
    side=1;
    displayName="Humanitarian (Medic)";
    uniformClass="UNIF_UN_UniformItem_C_Uni_1";
    weapons[]={"Put","Throw"};
    respawnWeapons[]={"Put","Throw"};
    items[]={"ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","FirstAidKit","ACE_tourniquet","ACE_tourniquet","ACE_MapTools","ACE_EntrenchingTool","ACE_surgicalKit","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_bloodIV","ACE_bloodIV","ACE_bloodIV","ACE_bloodIV","ACE_bloodIV_250","ACE_bloodIV_250","ACE_bloodIV_250","ACE_bloodIV_250","ACE_bloodIV_500","ACE_bloodIV_500","ACE_bloodIV_500","ACE_bloodIV_500","ACE_bloodIV_500","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_bodyBag_blue","ACE_bodyBag_blue","ACE_bodyBag_blue","ACE_bodyBag_blue","ACE_bodyBag_blue","ACE_bodyBag_blue","ACE_bodyBag_blue","ACE_bodyBag_blue","ACE_bodyBag_blue","ACE_bodyBag_blue"};
    respawnItems[]={"ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","FirstAidKit","ACE_tourniquet","ACE_tourniquet","ACE_MapTools","ACE_EntrenchingTool","ACE_surgicalKit","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_bloodIV","ACE_bloodIV","ACE_bloodIV","ACE_bloodIV","ACE_bloodIV_250","ACE_bloodIV_250","ACE_bloodIV_250","ACE_bloodIV_250","ACE_bloodIV_500","ACE_bloodIV_500","ACE_bloodIV_500","ACE_bloodIV_500","ACE_bloodIV_500","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_bodyBag_blue","ACE_bodyBag_blue","ACE_bodyBag_blue","ACE_bodyBag_blue","ACE_bodyBag_blue","ACE_bodyBag_blue","ACE_bodyBag_blue","ACE_bodyBag_blue","ACE_bodyBag_blue","ACE_bodyBag_blue"};
    magazines[]={"ACE_painkillers","ACE_painkillers","ACE_painkillers","ACE_painkillers","ACE_painkillers"};
    respawnMagazines[]={"ACE_painkillers","ACE_painkillers","ACE_painkillers","ACE_painkillers","ACE_painkillers"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","UNIF_Headgear_Cap","V_Plain_crystal_F"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","UNIF_Headgear_Cap","V_Plain_crystal_F"};
    backpack="UNIF_Humanitarian_Medic_pack";
    editorSubcategory = "EdSubcat_Personnel_Story";
  };

  class UNIF_UN_Faction_Soldier_Humanitarian_Aid_Worker: B_Officer_Parade_F
  {
    faction="UNIF_Faction_UNIF_UN_BLUFOR";
    editorPreview  = "\UNIF_UN_Faction_Men\UI\UNIF_UN_Faction_Soldier_Humanitarian_Aid_Worker.jpg";
    side=1;
    displayName="Humanitarian (Aid Worker)";
    uniformClass="UNIF_UN_UniformItem_C_Uni_1";
    weapons[]={"Put","Throw"};
    respawnWeapons[]={"Put","Throw"};
    items[]={"ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","FirstAidKit","ACE_tourniquet","ACE_tourniquet","ACE_MapTools","ACE_EntrenchingTool","ToolKit"};
    respawnItems[]={"ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","FirstAidKit","ACE_tourniquet","ACE_tourniquet","ACE_MapTools","ACE_EntrenchingTool","ToolKit"};
    magazines[]={};
    respawnMagazines[]={};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","UNIF_Headgear_MarshallCap","V_Plain_crystal_F"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","UNIF_Headgear_MarshallCap","V_Plain_crystal_F"};
    backpack="UNIF_Humanitarian_Aid_Worker_pack";
    editorSubcategory = "EdSubcat_Personnel_Story";
  };

  class UNIF_UN_Faction_Soldier_Humanitarian_Paramedic: B_Officer_Parade_F
  {
    faction="UNIF_Faction_UNIF_UN_BLUFOR";
    editorPreview  = "\UNIF_UN_Faction_Men\UI\UNIF_UN_Faction_Soldier_Humanitarian_Paramedic.jpg";
    side=1;
    displayName="Humanitarian (Paramedic)";
    uniformClass="U_C_Paramedic_01_F";
    weapons[]={"Put","Throw"};
    respawnWeapons[]={"Put","Throw"};
    items[]={"ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","FirstAidKit","ACE_tourniquet","ACE_tourniquet","ACE_MapTools","ACE_EntrenchingTool","ACE_surgicalKit","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_bloodIV","ACE_bloodIV","ACE_bloodIV","ACE_bloodIV","ACE_bloodIV_250","ACE_bloodIV_250","ACE_bloodIV_250","ACE_bloodIV_250","ACE_bloodIV_500","ACE_bloodIV_500","ACE_bloodIV_500","ACE_bloodIV_500","ACE_bloodIV_500","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_bodyBag_blue","ACE_bodyBag_blue","ACE_bodyBag_blue","ACE_bodyBag_blue","ACE_bodyBag_blue","ACE_bodyBag_blue","ACE_bodyBag_blue","ACE_bodyBag_blue","ACE_bodyBag_blue","ACE_bodyBag_blue"};
    respawnItems[]={"ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","FirstAidKit","ACE_tourniquet","ACE_tourniquet","ACE_MapTools","ACE_EntrenchingTool","ACE_surgicalKit","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_bloodIV","ACE_bloodIV","ACE_bloodIV","ACE_bloodIV","ACE_bloodIV_250","ACE_bloodIV_250","ACE_bloodIV_250","ACE_bloodIV_250","ACE_bloodIV_500","ACE_bloodIV_500","ACE_bloodIV_500","ACE_bloodIV_500","ACE_bloodIV_500","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_bodyBag_blue","ACE_bodyBag_blue","ACE_bodyBag_blue","ACE_bodyBag_blue","ACE_bodyBag_blue","ACE_bodyBag_blue","ACE_bodyBag_blue","ACE_bodyBag_blue","ACE_bodyBag_blue","ACE_bodyBag_blue"};
    magazines[]={"ACE_painkillers","ACE_painkillers","ACE_painkillers","ACE_painkillers","ACE_painkillers"};
    respawnMagazines[]={"ACE_painkillers","ACE_painkillers","ACE_painkillers","ACE_painkillers","ACE_painkillers"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","UNIF_Headgear_Cap","V_Plain_crystal_F"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","UNIF_Headgear_Cap","V_Plain_crystal_F"};
    backpack="UNIF_Humanitarian_Paramedic_pack";
    editorSubcategory = "EdSubcat_Personnel_Story";
  };


  class UNIF_AT_Specialist_MAAWS_pack: VSM_OCP_carryall
  {
    scope=1;
    class TransportMagazines
    {
     class _xx_MRAWS_HE_F {count=1;magazine="MRAWS_HE_F";};
     class _xx_MRAWS_HEAT55_F {count=1;magazine="MRAWS_HEAT55_F";};
     class _xx_MRAWS_HEAT_F {count=1;magazine="MRAWS_HEAT_F";};
    };
    class TransportItems{};
    class TransportWeapons{};
  };


  class UNIF_AT_Specialist_Javelin_pack: VSM_OCP_carryall
  {
    scope=1;
    class TransportMagazines
    {
     class _xx_CUP_Javelin_M {count=1;magazine="CUP_Javelin_M";};
    };
    class TransportItems{};
    class TransportWeapons{};
  };


  class UNIF_AA_Specialist_Titan_pack: VSM_OCP_Backpack_Kitbag
  {
    scope=1;
    class TransportMagazines
    {
     class _xx_Titan_AA {count=2;magazine="Titan_AA";};
    };
    class TransportItems{};
    class TransportWeapons{};
  };


  class UNIF_Squad_Leader_pack: TFAR_rt1523g_rhs
  {
    scope=1;
    class TransportMagazines{};
    class TransportItems{};
    class TransportWeapons{};
  };


  class UNIF_Ammobearer_pack: VSM_Multicam_carryall
  {
    scope=1;
    class TransportMagazines
    {
     class _xx_CUP_200Rnd_TE4_Red_Tracer_556x45_M249 {count=3;magazine="CUP_200Rnd_TE4_Red_Tracer_556x45_M249";};
     class _xx_CUP_30Rnd_556x45_Emag {count=15;magazine="CUP_30Rnd_556x45_Emag";};
     class _xx_CUP_20Rnd_762x51_HK417 {count=6;magazine="CUP_20Rnd_762x51_HK417";};
    };
    class TransportItems{};
    class TransportWeapons{};
  };


  class UNIF_Combat_Life_Saver_pack: CUP_C_PHOENIX_FIRSTAID
  {
    scope=1;
    class TransportMagazines
    {
     class _xx_ACE_painkillers {count=5;magazine="ACE_painkillers";};
    };
    class TransportItems
    {
     class _xx_ACE_surgicalKit {count=1;name="ACE_surgicalKit";};
     class _xx_ACE_bloodIV {count=4;name="ACE_bloodIV";};
     class _xx_ACE_bloodIV_250 {count=5;name="ACE_bloodIV_250";};
     class _xx_ACE_bloodIV_500 {count=4;name="ACE_bloodIV_500";};
     class _xx_ACE_elasticBandage {count=30;name="ACE_elasticBandage";};
     class _xx_ACE_packingBandage {count=30;name="ACE_packingBandage";};
     class _xx_ACE_quikclot {count=30;name="ACE_quikclot";};
     class _xx_ACE_epinephrine {count=10;name="ACE_epinephrine";};
     class _xx_ACE_morphine {count=10;name="ACE_morphine";};
     class _xx_ACE_splint {count=10;name="ACE_splint";};
     class _xx_FirstAidKit {count=2;name="FirstAidKit";};
     class _xx_ACE_tourniquet {count=5;name="ACE_tourniquet";};
    };
    class TransportWeapons{};
  };


  class UNIF_UAV_Operator_AR2_pack: B_UAV_01_backpack_F
  {
    scope=1;
    class TransportMagazines{};
    class TransportItems{};
    class TransportWeapons{};
  };


  class UNIF_Crewman_pack: TFAR_rt1523g_rhs
  {
    scope=1;
    class TransportMagazines{};
    class TransportItems{};
    class TransportWeapons{};
  };


  class UNIF_Officer_pack: TFAR_rt1523g_rhs
  {
    scope=1;
    class TransportMagazines{};
    class TransportItems{};
    class TransportWeapons{};
  };


  class UNIF_Pilot_Helicopter_pack: TFAR_rt1523g_rhs
  {
    scope=1;
    class TransportMagazines{};
    class TransportItems{};
    class TransportWeapons{};
  };


  class UNIF_Pilot_Jet_pack: TFAR_rt1523g_rhs
  {
    scope=1;
    class TransportMagazines{};
    class TransportItems{};
    class TransportWeapons{};
  };


  class UNIF_Engineer_pack: VSM_OCP_Backpack_Kitbag
  {
    scope=1;
    class TransportMagazines
    {
     class _xx_DemoCharge_Remote_Mag {count=2;magazine="DemoCharge_Remote_Mag";};
     class _xx_SatchelCharge_Remote_Mag {count=1;magazine="SatchelCharge_Remote_Mag";};
    };
    class TransportItems
    {
     class _xx_ACE_EntrenchingTool {count=1;name="ACE_EntrenchingTool";};
     class _xx_ACE_DefusalKit {count=1;name="ACE_DefusalKit";};
     class _xx_ACE_M26_Clacker {count=1;name="ACE_M26_Clacker";};
     class _xx_MineDetector {count=1;name="MineDetector";};
     class _xx_ToolKit {count=1;name="ToolKit";};
     class _xx_ACE_wirecutter {count=1;name="ACE_wirecutter";};
     class _xx_ace_marker_flags_red {count=15;name="ace_marker_flags_red";};
    };
    class TransportWeapons{};
  };


  class UNIF_Humanitarian_Worker_pack: B_LegStrapBag_coyote_F
  {
    scope=1;
    class TransportMagazines{};
    class TransportItems
    {
     class _xx_ToolKit {count=1;name="ToolKit";};
    };
    class TransportWeapons{};
  };


  class UNIF_Humanitarian_Engineer_pack: B_CivilianBackpack_01_Sport_Blue_F
  {
    scope=1;
    class TransportMagazines
    {
     class _xx_acex_intelitems_notepad {count=1;magazine="acex_intelitems_notepad";};
    };
    class TransportItems
    {
     class _xx_ToolKit {count=1;name="ToolKit";};
     class _xx_ACE_DefusalKit {count=1;name="ACE_DefusalKit";};
     class _xx_ACE_wirecutter {count=1;name="ACE_wirecutter";};
     class _xx_MineDetector {count=1;name="MineDetector";};
    };
    class TransportWeapons{};
  };


  class UNIF_Humanitarian_EOD_pack: B_CivilianBackpack_01_Sport_Blue_F
  {
    scope=1;
    class TransportMagazines
    {
     class _xx_acex_intelitems_notepad {count=1;magazine="acex_intelitems_notepad";};
    };
    class TransportItems
    {
     class _xx_ToolKit {count=1;name="ToolKit";};
     class _xx_ACE_wirecutter {count=1;name="ACE_wirecutter";};
     class _xx_ACE_EntrenchingTool {count=1;name="ACE_EntrenchingTool";};
     class _xx_ACE_DefusalKit {count=1;name="ACE_DefusalKit";};
     class _xx_ACE_M26_Clacker {count=1;name="ACE_M26_Clacker";};
     class _xx_ACE_MapTools {count=1;name="ACE_MapTools";};
    };
    class TransportWeapons{};
  };


  class UNIF_CBRN_Specialist_pack: B_CombinationUnitRespirator_01_F
  {
    scope=1;
    class TransportMagazines{};
    class TransportItems{};
    class TransportWeapons{};
  };


  class UNIF_Humanitarian_Medic_pack: CUP_C_PHOENIX_FIRSTAID
  {
    scope=1;
    class TransportMagazines
    {
     class _xx_ACE_painkillers {count=5;magazine="ACE_painkillers";};
    };
    class TransportItems
    {
     class _xx_ACE_surgicalKit {count=1;name="ACE_surgicalKit";};
     class _xx_ACE_tourniquet {count=10;name="ACE_tourniquet";};
     class _xx_ACE_bloodIV {count=4;name="ACE_bloodIV";};
     class _xx_ACE_bloodIV_250 {count=4;name="ACE_bloodIV_250";};
     class _xx_ACE_bloodIV_500 {count=5;name="ACE_bloodIV_500";};
     class _xx_ACE_elasticBandage {count=30;name="ACE_elasticBandage";};
     class _xx_ACE_packingBandage {count=30;name="ACE_packingBandage";};
     class _xx_ACE_quikclot {count=30;name="ACE_quikclot";};
     class _xx_ACE_morphine {count=10;name="ACE_morphine";};
     class _xx_ACE_epinephrine {count=10;name="ACE_epinephrine";};
     class _xx_ACE_splint {count=10;name="ACE_splint";};
     class _xx_ACE_bodyBag_blue {count=10;name="ACE_bodyBag_blue";};
    };
    class TransportWeapons{};
  };


  class UNIF_Humanitarian_Aid_Worker_pack: B_LegStrapBag_coyote_F
  {
    scope=1;
    class TransportMagazines{};
    class TransportItems
    {
     class _xx_ToolKit {count=1;name="ToolKit";};
    };
    class TransportWeapons{};
  };


  class UNIF_Humanitarian_Paramedic_pack: CUP_C_PHOENIX_FIRSTAID
  {
    scope=1;
    class TransportMagazines
    {
     class _xx_ACE_painkillers {count=5;magazine="ACE_painkillers";};
    };
    class TransportItems
    {
     class _xx_ACE_surgicalKit {count=1;name="ACE_surgicalKit";};
     class _xx_ACE_tourniquet {count=10;name="ACE_tourniquet";};
     class _xx_ACE_bloodIV {count=4;name="ACE_bloodIV";};
     class _xx_ACE_bloodIV_250 {count=4;name="ACE_bloodIV_250";};
     class _xx_ACE_bloodIV_500 {count=5;name="ACE_bloodIV_500";};
     class _xx_ACE_elasticBandage {count=30;name="ACE_elasticBandage";};
     class _xx_ACE_packingBandage {count=30;name="ACE_packingBandage";};
     class _xx_ACE_quikclot {count=30;name="ACE_quikclot";};
     class _xx_ACE_morphine {count=10;name="ACE_morphine";};
     class _xx_ACE_epinephrine {count=10;name="ACE_epinephrine";};
     class _xx_ACE_splint {count=10;name="ACE_splint";};
     class _xx_ACE_bodyBag_blue {count=10;name="ACE_bodyBag_blue";};
    };
    class TransportWeapons{};
  };
};
    

  //************************************************************************************************************************************************************************************************
  //*****             Groups               *********************************************************************************************************************************************************
  //************************************************************************************************************************************************************************************************

class cfgGroups
{  
  class WEST
  {
    name="BLUFOR";
    class UNIF_UN_Faction_Men_Groups
    {
      name="[UNIF] United Nations Intervention Force";

      class Infantry
      {
        name="Infantry";

        class UNIF_UN_Faction_Men_Groups_B_Sentry
        {
          name="Sentry";
          faction="UNIF_Faction_UNIF_UN_BLUFOR";
          side=1;
          icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
          class Unit0
          {
            side=1;
            vehicle="UNIF_UN_Faction_Soldier_Rifleman";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=1;
            vehicle="UNIF_UN_Faction_Soldier_Rifleman";
            rank="PRIVATE";
            position[]={0,-5,0};
          };
        };
        class UNIF_UN_Faction_Men_Groups_B_Fire_Team
        {
          name="Fire Team";
          faction="UNIF_Faction_UNIF_UN_BLUFOR";
          side=1;
          icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
          class Unit0
          {
            side=1;
            vehicle="UNIF_UN_Faction_Soldier_Squad_Leader";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=1;
            vehicle="UNIF_UN_Faction_Soldier_Rifleman";
            rank="PRIVATE";
            position[]={0,-5,0};
          };
          class Unit2
          {
            side=1;
            vehicle="UNIF_UN_Faction_Soldier_Rifleman_Light_AT";
            rank="PRIVATE";
            position[]={0,-10,0};
          };
          class Unit3
          {
            side=1;
            vehicle="UNIF_UN_Faction_Soldier_Machinegunner";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
        };
        class UNIF_UN_Faction_Men_Groups_B_Rifle_Squad
        {
          name="Rifle Squad";
          faction="UNIF_Faction_UNIF_UN_BLUFOR";
          side=1;
          icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
          class Unit0
          {
            side=1;
            vehicle="UNIF_UN_Faction_Soldier_Squad_Leader";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=1;
            vehicle="UNIF_UN_Faction_Soldier_Rifleman";
            rank="PRIVATE";
            position[]={0,-5,0};
          };
          class Unit2
          {
            side=1;
            vehicle="UNIF_UN_Faction_Soldier_Rifleman_Light_AT";
            rank="PRIVATE";
            position[]={0,-10,0};
          };
          class Unit3
          {
            side=1;
            vehicle="UNIF_UN_Faction_Soldier_Machinegunner";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
          class Unit4
          {
            side=1;
            vehicle="UNIF_UN_Faction_Soldier_Combat_Life_Saver";
            rank="PRIVATE";
            position[]={0,-20,0};
          };
          class Unit5
          {
            side=1;
            vehicle="UNIF_UN_Faction_Soldier_Marksman";
            rank="PRIVATE";
            position[]={0,-25,0};
          };
          class Unit6
          {
            side=1;
            vehicle="UNIF_UN_Faction_Soldier_AT_Specialist_MAAWS";
            rank="PRIVATE";
            position[]={0,-30,0};
          };
          class Unit7
          {
            side=1;
            vehicle="UNIF_UN_Faction_Soldier_Ammobearer";
            rank="PRIVATE";
            position[]={0,-35,0};
          };
        };
        class UNIF_UN_Faction_Men_Groups_B_Weapons_Squad
        {
          name="Weapons Squad";
          faction="UNIF_Faction_UNIF_UN_BLUFOR";
          side=1;
          icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
          class Unit0
          {
            side=1;
            vehicle="UNIF_UN_Faction_Soldier_Squad_Leader";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=1;
            vehicle="UNIF_UN_Faction_Soldier_Marksman";
            rank="PRIVATE";
            position[]={0,-5,0};
          };
          class Unit2
          {
            side=1;
            vehicle="UNIF_UN_Faction_Soldier_Combat_Life_Saver";
            rank="PRIVATE";
            position[]={0,-10,0};
          };
          class Unit3
          {
            side=1;
            vehicle="UNIF_UN_Faction_Soldier_Sniper";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
          class Unit4
          {
            side=1;
            vehicle="UNIF_UN_Faction_Soldier_AA_Specialist_Titan";
            rank="PRIVATE";
            position[]={0,-20,0};
          };
          class Unit5
          {
            side=1;
            vehicle="UNIF_UN_Faction_Soldier_Engineer";
            rank="PRIVATE";
            position[]={0,-25,0};
          };
          class Unit6
          {
            side=1;
            vehicle="UNIF_UN_Faction_Soldier_Ammobearer";
            rank="PRIVATE";
            position[]={0,-30,0};
          };
          class Unit7
          {
            side=1;
            vehicle="UNIF_UN_Faction_Soldier_Rifleman";
            rank="PRIVATE";
            position[]={0,-35,0};
          };
        };
        class UNIF_UN_Faction_Men_Groups_B_Sniper_Team
        {
          name="Sniper Team";
          faction="UNIF_Faction_UNIF_UN_BLUFOR";
          side=1;
          icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
          class Unit0
          {
            side=1;
            vehicle="UNIF_UN_Faction_Soldier_Squad_Leader";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=1;
            vehicle="UNIF_UN_Faction_Soldier_Sniper";
            rank="PRIVATE";
            position[]={0,-5,0};
          };
          class Unit2
          {
            side=1;
            vehicle="UNIF_UN_Faction_Soldier_Rifleman_Light";
            rank="PRIVATE";
            position[]={0,-10,0};
          };
          class Unit3
          {
            side=1;
            vehicle="UNIF_UN_Faction_Soldier_Marksman";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
        };
        class UNIF_UN_Faction_Men_Groups_B_AT_Team
        {
          name="AT Team";
          faction="UNIF_Faction_UNIF_UN_BLUFOR";
          side=1;
          icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
          class Unit0
          {
            side=1;
            vehicle="UNIF_UN_Faction_Soldier_Squad_Leader";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=1;
            vehicle="UNIF_UN_Faction_Soldier_AT_Specialist_Javelin";
            rank="PRIVATE";
            position[]={0,-5,0};
          };
          class Unit2
          {
            side=1;
            vehicle="UNIF_UN_Faction_Soldier_Rifleman_Light_AT";
            rank="PRIVATE";
            position[]={0,-10,0};
          };
          class Unit3
          {
            side=1;
            vehicle="UNIF_UN_Faction_Soldier_Rifleman";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
        };
      };
      class Motorized
      {
        name="Motorized";

      };
      class Mechanized
      {
        name="Mechanized";

      };
      class Armored
      {
        name="Armored";

      };
      class SpecOps
      {
        name="Special Forces";

      };
      class Support
      {
        name="Support Infantry";

      };
      class Airborne
      {
        name="Airborne";

      };
      class Air
      {
        name="Air";

      };
    };
  };
};
