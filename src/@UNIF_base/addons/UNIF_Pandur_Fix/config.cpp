class CfgPatches
{
	class UNIF_Pandur_Fix
	{
		requiredVersion=1;
		author="Phantom hawk";
		authorUrl="";
		version=1;
		units[]=
		{
			"Pandur2_WD",
			"Pandur2_AA_WD",
			"Pandur2_unarmed_WD",
			"Pandur2_medical_WD",
			"Pandur2_D",
			"Pandur2_AA_D",
			"Pandur2_unarmed_D",
			"Pandur2_medical_D",
			"Pandur2_E",
			"Pandur2_AA_E",
			"Pandur2_unarmed_E",
			"Pandur2_medical_E"
		};
		requiredAddons[]=
		{
			"A3_Data_F",
			"A3_Air_F",
			"A3_Armor_F",
			"A3_Soft_F",
			"A3_Armor_F_APC_Wheeled_03"
		};
	};
};
class CfgFactionClasses
{
	class BLU_F_WD
	{
		displayName="NATO (Woodland)";
		side=1;
		flag="\a3\Data_f\Flags\flag_nato_co.paa";
		icon="\a3\Data_f\cfgFactionClasses_BLU_ca.paa";
		priority=0;
	};
	class BLU_F_D
	{
		displayName="NATO (Desert)";
		side=1;
		flag="\a3\Data_f\Flags\flag_nato_co.paa";
		icon="\a3\Data_f\cfgFactionClasses_BLU_ca.paa";
		priority=0;
	};
	class BLU_F_A
	{
		displayName="NATO (Arid)";
		side=1;
		flag="\a3\Data_f\Flags\flag_nato_co.paa";
		icon="\a3\Data_f\cfgFactionClasses_BLU_ca.paa";
		priority=0;
	};
};
class DefaultEventHandlers;
class WeaponFireGun;
class WeaponCloudsGun;
class WeaponFireMGun;
class WeaponCloudsMGun;
class RCWSOptics;
class Optics_Armored;
class Optics_Commander_02: Optics_Armored
{
	class Wide;
	class Medium;
	class Narrow;
};
class Optics_Gunner_APC_03: Optics_Armored
{
	class Wide;
	class Medium;
	class Narrow;
};
class CfgVehicles
{
	class Car;
	class Car_F: Car
	{
		class NewTurret;
		class Sounds;
		class HitPoints
		{
			class HitBody;
			class HitEngine;
			class HitFuel;
			class HitHull;
			class HitLFWheel;
			class HitLBWheel;
			class HitLMWheel;
			class HitLF2Wheel;
			class HitRFWheel;
			class HitRBWheel;
			class HitRMWheel;
			class HitRF2Wheel;
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
			class HitGlass5;
			class HitGlass6;
		};
	};
	class Wheeled_APC_F: Car_F
	{
		class ViewOptics;
		class ViewCargo;
		class Sounds: Sounds
		{
			class Engine;
			class Movement;
		};
		class NewTurret;
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class ViewOptics;
			};
		};
		class AnimationSources;
		class EventHandlers;
		class CommanderOptics;
	};
	class I_APC_Wheeled_03_cannon_F;
	class Pandur2_cannon_F: I_APC_Wheeled_03_cannon_F
	{
		scope=1;
		scopeCurator=1;
		class EventHandlers;
		textureList[]=
		{
			"Blu",
			1
		};
		class TextureSources
		{
			class Blu_Arid
			{
				displayName="Arid";
				author="Phantom hawk";
				textures[]=
				{
					"A3\armor_f_gamma\APC_Wheeled_03\data\apc_wheeled_03_ext_co.paa",
					"A3\armor_f_gamma\APC_Wheeled_03\data\apc_wheeled_03_ext2_co.paa",
					"A3\armor_f_gamma\APC_Wheeled_03\data\rcws30_co.paa",
					"A3\armor_f_gamma\APC_Wheeled_03\data\apc_wheeled_03_ext_alpha_co.paa",
					"a3\Armor_F\Data\camonet_NATO_Desert_CO.paa",
					"a3\Armor_F\Data\cage_sand_CO.paa"
				};
				factions[]=
				{
					"BLU_F_A",
					"BLU_F_WD",
					"BLU_F_D"
				};
			};
			class Blu_Woodland
			{
				displayName="Woodland";
				author="Phantom hawk";
				textures[]=
				{
					"\UNIF_Pandur_Fix\data\pandur_01_ext_wd.paa",
					"\UNIF_Pandur_Fix\data\pandur_02_ext_wd.paa",
					"\UNIF_Pandur_Fix\data\pandur_Turret_wd.paa",
					"\UNIF_Pandur_Fix\data\pandur_03_ext_wd.paa",
					"a3\Armor_F\Data\camonet_green_CO.paa",
					"A3\armor_f\data\cage_G1_co.paa"
				};
				factions[]=
				{
					"BLU_F_A",
					"BLU_F_WD",
					"BLU_F_D"
				};
			};
			class Blu_Desert
			{
				displayName="Desert";
				author="Phantom hawk";
				textures[]=
				{
					"\UNIF_Pandur_Fix\data\pandur_01_ext_d.paa",
					"\UNIF_Pandur_Fix\data\pandur_02_ext_d.paa",
					"\UNIF_Pandur_Fix\data\pandur_Turret_d.paa",
					"\UNIF_Pandur_Fix\data\pandur_03_ext_d.paa",
					"\UNIF_Pandur_Fix\data\camonet_desert_CO.paa",
					"\UNIF_Pandur_Fix\data\cage_desert_CO.paa"
				};
				factions[]=
				{
					"BLU_F_A",
					"BLU_F_WD",
					"BLU_F_D"
				};
			};
		};
		class AnimationSources
		{
			class BreakWater
			{
				source="user";
				initPhase=0;
				animPeriod=2;
			};
			class Missiles_revolving
			{
				source="revolving";
				weapon="missiles_titan";
			};
			class Missiles_reloadMagazine: Missiles_revolving
			{
				source="reloadMagazine";
			};
			class muzzle_rot
			{
				source="ammorandom";
				weapon="autocannon_30mm_CTWS";
			};
			class muzzle_hide
			{
				source="reload";
				weapon="autocannon_30mm_CTWS";
			};
			class HitEngine_src
			{
				source="Hit";
				hitpoint="HitEngine";
				raw=1;
			};
			class HitFuel_src
			{
				source="Hit";
				hitpoint="HitFuel";
				raw=1;
			};
			class HitHull_src
			{
				source="Hit";
				hitpoint="HitHull";
				raw=1;
			};
			class HitMainGun_src
			{
				source="Hit";
				hitpoint="HitGun";
				raw=1;
			};
			class HitTurret_src
			{
				source="Hit";
				hitpoint="HitTurret";
				raw=1;
			};
			class HitComTurret_src
			{
				source="Hit";
				hitpoint="HitComTurret";
				raw=1;
			};
			class HitSLAT_Left_1_src
			{
				source="Hit";
				hitpoint="HitSLAT_Left_1";
				raw=1;
			};
			class HitSLAT_Left_2_src
			{
				source="Hit";
				hitpoint="HitSLAT_Left_2";
				raw=1;
			};
			class HitSLAT_Left_3_src
			{
				source="Hit";
				hitpoint="HitSLAT_Left_3";
				raw=1;
			};
			class HitSLAT_Right_1_src
			{
				source="Hit";
				hitpoint="HitSLAT_Right_1";
				raw=1;
			};
			class HitSLAT_Right_2_src
			{
				source="Hit";
				hitpoint="HitSLAT_Right_2";
				raw=1;
			};
			class HitSLAT_Right_3_src
			{
				source="Hit";
				hitpoint="HitSLAT_Right_3";
				raw=1;
			};
			class HitSLAT_back_src
			{
				source="Hit";
				hitpoint="HitSLAT_back";
				raw=1;
			};
			class HitSLAT_front_src
			{
				source="Hit";
				hitpoint="HitSLAT_front";
				raw=1;
			};
			class showCamonetHull
			{
				displayName="$STR_A3_animationsources_showcamonethull0";
				author="$STR_A3_Bohemia_Interactive";
				source="user";
				animPeriod=0.001;
				initPhase=0;
				mass=-50;
			};
			class showBags
			{
				displayName="$STR_A3_animationsources_showbagshull0";
				author="$STR_A3_Bohemia_Interactive";
				source="user";
				animPeriod=0.001;
				initPhase=0;
				mass=-50;
			};
			class showBags2
			{
				displayName="$STR_A3_animationsources_showbagsturret0";
				author="$STR_A3_Bohemia_Interactive";
				source="user";
				animPeriod=0.001;
				initPhase=1;
				mass=-50;
			};
			class showTools
			{
				displayName="$STR_A3_animationsources_showtoolshull0";
				author="$STR_A3_Bohemia_Interactive";
				source="user";
				animPeriod=0.001;
				initPhase=1;
				mass=-50;
			};
			class showSLATHull
			{
				displayName="$STR_A3_animationsources_showslathull0";
				author="$STR_A3_Bohemia_Interactive";
				source="user";
				animPeriod=0.001;
				initPhase=0;
				mass=-50;
			};
		};
		animationList[]=
		{
			"showCamonetHull",
			0,
			"showBags",
			0,
			"showBags2",
			1,
			"showTools",
			1,
			"showSLATHull",
			0
		};
	};
	class Pandur2_AA_F: I_APC_Wheeled_03_cannon_F
	{
		scope=1;
		scopeCurator=1;
		editorSubcategory="EdSubcat_AAs";
		class EventHandlers;
		textureList[]=
		{
			"Blu",
			1
		};
		class TextureSources
		{
			class Blu_Arid
			{
				displayName="Arid";
				author="Phantom hawk";
				textures[]=
				{
					"A3\armor_f_gamma\APC_Wheeled_03\data\apc_wheeled_03_ext_co.paa",
					"A3\armor_f_gamma\APC_Wheeled_03\data\apc_wheeled_03_ext2_co.paa",
					"A3\armor_f_gamma\APC_Wheeled_03\data\rcws30_co.paa",
					"A3\armor_f_gamma\APC_Wheeled_03\data\apc_wheeled_03_ext_alpha_co.paa",
					"a3\Armor_F\Data\camonet_NATO_Desert_CO.paa",
					"a3\Armor_F\Data\cage_sand_CO.paa"
				};
				factions[]=
				{
					"BLU_F_A",
					"BLU_F_WD",
					"BLU_F_D"
				};
			};
			class Blu_Woodland
			{
				displayName="Woodland";
				author="Phantom hawk";
				textures[]=
				{
					"\UNIF_Pandur_Fix\data\pandur_01_ext_wd.paa",
					"\UNIF_Pandur_Fix\data\pandur_02_ext_wd.paa",
					"\UNIF_Pandur_Fix\data\pandur_Turret_wd.paa",
					"\UNIF_Pandur_Fix\data\pandur_03_ext_wd.paa",
					"a3\Armor_F\Data\camonet_green_CO.paa",
					"A3\armor_f\data\cage_G1_co.paa"
				};
				factions[]=
				{
					"BLU_F_A",
					"BLU_F_WD",
					"BLU_F_D"
				};
			};
			class Blu_Desert
			{
				displayName="Desert";
				author="Phantom hawk";
				textures[]=
				{
					"\UNIF_Pandur_Fix\data\pandur_01_ext_d.paa",
					"\UNIF_Pandur_Fix\data\pandur_02_ext_d.paa",
					"\UNIF_Pandur_Fix\data\pandur_Turret_d.paa",
					"\UNIF_Pandur_Fix\data\pandur_03_ext_d.paa",
					"\UNIF_Pandur_Fix\data\camonet_desert_CO.paa",
					"\UNIF_Pandur_Fix\data\cage_desert_CO.paa"
				};
				factions[]=
				{
					"BLU_F_A",
					"BLU_F_WD",
					"BLU_F_D"
				};
			};
		};
		class AnimationSources
		{
			class BreakWater
			{
				source="user";
				initPhase=0;
				animPeriod=2;
			};
			class Missiles_revolving
			{
				source="revolving";
				weapon="missiles_titan_aa_2Rnd_Pan";
			};
			class Missiles_reloadMagazine: Missiles_revolving
			{
				source="reloadMagazine";
			};
			class muzzle_rot
			{
				source="ammorandom";
				weapon="autocannon_30mm_CTWS";
			};
			class muzzle_hide
			{
				source="reload";
				weapon="autocannon_30mm_CTWS";
			};
			class HitEngine_src
			{
				source="Hit";
				hitpoint="HitEngine";
				raw=1;
			};
			class HitFuel_src
			{
				source="Hit";
				hitpoint="HitFuel";
				raw=1;
			};
			class HitHull_src
			{
				source="Hit";
				hitpoint="HitHull";
				raw=1;
			};
			class HitMainGun_src
			{
				source="Hit";
				hitpoint="HitGun";
				raw=1;
			};
			class HitTurret_src
			{
				source="Hit";
				hitpoint="HitTurret";
				raw=1;
			};
			class HitComTurret_src
			{
				source="Hit";
				hitpoint="HitComTurret";
				raw=1;
			};
			class HitSLAT_Left_1_src
			{
				source="Hit";
				hitpoint="HitSLAT_Left_1";
				raw=1;
			};
			class HitSLAT_Left_2_src
			{
				source="Hit";
				hitpoint="HitSLAT_Left_2";
				raw=1;
			};
			class HitSLAT_Left_3_src
			{
				source="Hit";
				hitpoint="HitSLAT_Left_3";
				raw=1;
			};
			class HitSLAT_Right_1_src
			{
				source="Hit";
				hitpoint="HitSLAT_Right_1";
				raw=1;
			};
			class HitSLAT_Right_2_src
			{
				source="Hit";
				hitpoint="HitSLAT_Right_2";
				raw=1;
			};
			class HitSLAT_Right_3_src
			{
				source="Hit";
				hitpoint="HitSLAT_Right_3";
				raw=1;
			};
			class HitSLAT_back_src
			{
				source="Hit";
				hitpoint="HitSLAT_back";
				raw=1;
			};
			class HitSLAT_front_src
			{
				source="Hit";
				hitpoint="HitSLAT_front";
				raw=1;
			};
			class showCamonetHull
			{
				displayName="$STR_A3_animationsources_showcamonethull0";
				author="$STR_A3_Bohemia_Interactive";
				source="user";
				animPeriod=0.001;
				initPhase=0;
				mass=-50;
			};
			class showBags
			{
				displayName="$STR_A3_animationsources_showbagshull0";
				author="$STR_A3_Bohemia_Interactive";
				source="user";
				animPeriod=0.001;
				initPhase=0;
				mass=-50;
			};
			class showBags2
			{
				displayName="$STR_A3_animationsources_showbagsturret0";
				author="$STR_A3_Bohemia_Interactive";
				source="user";
				animPeriod=0.001;
				initPhase=1;
				mass=-50;
			};
			class showTools
			{
				displayName="$STR_A3_animationsources_showtoolshull0";
				author="$STR_A3_Bohemia_Interactive";
				source="user";
				animPeriod=0.001;
				initPhase=1;
				mass=-50;
			};
			class showSLATHull
			{
				displayName="$STR_A3_animationsources_showslathull0";
				author="$STR_A3_Bohemia_Interactive";
				source="user";
				animPeriod=0.001;
				initPhase=0;
				mass=-50;
			};
		};
		animationList[]=
		{
			"showCamonetHull",
			0,
			"showBags",
			0,
			"showBags2",
			1,
			"showTools",
			1,
			"showSLATHull",
			0
		};
	};
	class Pandur2_Unarmed_F: Pandur2_cannon_F
	{
		textureList[]=
		{
			"Blu",
			1
		};
		class TextureSources
		{
			class Blu_Arid
			{
				displayName="Arid";
				author="Phantom hawk";
				textures[]=
				{
					"A3\armor_f_gamma\APC_Wheeled_03\data\apc_wheeled_03_ext_co.paa",
					"A3\armor_f_gamma\APC_Wheeled_03\data\apc_wheeled_03_ext2_co.paa",
					"A3\armor_f_gamma\APC_Wheeled_03\data\rcws30_co.paa",
					"A3\armor_f_gamma\APC_Wheeled_03\data\apc_wheeled_03_ext_alpha_co.paa",
					"a3\Armor_F\Data\camonet_NATO_Desert_CO.paa",
					"a3\Armor_F\Data\cage_sand_CO.paa"
				};
				factions[]=
				{
					"BLU_F_A",
					"BLU_F_WD",
					"BLU_F_D"
				};
			};
			class Blu_Woodland
			{
				displayName="Woodland";
				author="Phantom hawk";
				textures[]=
				{
					"\UNIF_Pandur_Fix\data\pandur_01_ext_wd.paa",
					"\UNIF_Pandur_Fix\data\pandur_02_ext_wd.paa",
					"\UNIF_Pandur_Fix\data\pandur_Turret_wd.paa",
					"\UNIF_Pandur_Fix\data\pandur_03_ext_wd.paa",
					"a3\Armor_F\Data\camonet_green_CO.paa",
					"A3\armor_f\data\cage_G1_co.paa"
				};
				factions[]=
				{
					"BLU_F_A",
					"BLU_F_WD",
					"BLU_F_D"
				};
			};
			class Blu_Desert
			{
				displayName="Desert";
				author="Phantom hawk";
				textures[]=
				{
					"\UNIF_Pandur_Fix\data\pandur_01_ext_d.paa",
					"\UNIF_Pandur_Fix\data\pandur_02_ext_d.paa",
					"\UNIF_Pandur_Fix\data\pandur_Turret_d.paa",
					"\UNIF_Pandur_Fix\data\pandur_03_ext_d.paa",
					"\UNIF_Pandur_Fix\data\camonet_desert_CO.paa",
					"\UNIF_Pandur_Fix\data\cage_desert_CO.paa"
				};
				factions[]=
				{
					"BLU_F_A",
					"BLU_F_WD",
					"BLU_F_D"
				};
			};
		};
		driverCanSee="4+8+2+32+16";
		gunnerCanSee="4+2+8+32+16";
		weapons[]=
		{
			"TruckHorn",
			"SmokeLauncher"
		};
		magazines[]=
		{
			"SmokeLauncherMag"
		};
		class Turrets
		{
		};
		threat[]={0,0,0};
		forceInGarage=1;
		class TransportBackpack
		{
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=10;
			};
			class _xx_Medikit
			{
				name="Medikit";
				count=1;
			};
		};
	};
	class Pandur2_Medical_F: Pandur2_cannon_F
	{
		textureList[]=
		{
			"Blu",
			1
		};
		class TextureSources
		{
			class Blu_Arid_Med
			{
				displayName="Arid Medical";
				author="Phantom hawk";
				textures[]=
				{
					"\UNIF_Pandur_Fix\data\pandur_01_med_ext_e.paa",
					"\UNIF_Pandur_Fix\data\pandur_02_med_ext_e.paa",
					"A3\armor_f_gamma\APC_Wheeled_03\data\rcws30_co.paa",
					"A3\armor_f_gamma\APC_Wheeled_03\data\apc_wheeled_03_ext_alpha_co.paa",
					"a3\Armor_F\Data\camonet_NATO_Desert_CO.paa",
					"a3\Armor_F\Data\cage_sand_CO.paa"
				};
				factions[]=
				{
					"BLU_F_A",
					"BLU_F_WD",
					"BLU_F_D"
				};
			};
			class Blu_Woodland_Med
			{
				displayName="Woodland Medical";
				author="Phantom hawk";
				textures[]=
				{
					"\UNIF_Pandur_Fix\data\pandur_01_med_ext_wd.paa",
					"\UNIF_Pandur_Fix\data\pandur_02_med_ext_wd.paa",
					"\UNIF_Pandur_Fix\data\pandur_Turret_wd.paa",
					"\UNIF_Pandur_Fix\data\pandur_03_ext_wd.paa",
					"a3\Armor_F\Data\camonet_green_CO.paa",
					"A3\armor_f\data\cage_G1_co.paa"
				};
				factions[]=
				{
					"BLU_F_A",
					"BLU_F_WD",
					"BLU_F_D"
				};
			};
			class Blu_Desert_Med
			{
				displayName="Desert Medical";
				author="Phantom hawk";
				textures[]=
				{
					"\UNIF_Pandur_Fix\data\pandur_01_med_ext_d.paa",
					"\UNIF_Pandur_Fix\data\pandur_02_med_ext_d.paa",
					"\UNIF_Pandur_Fix\data\pandur_Turret_d.paa",
					"\UNIF_Pandur_Fix\data\pandur_03_ext_d.paa",
					"\UNIF_Pandur_Fix\data\camonet_desert_CO.paa",
					"\UNIF_Pandur_Fix\data\cage_desert_CO.paa"
				};
				factions[]=
				{
					"BLU_F_A",
					"BLU_F_WD",
					"BLU_F_D"
				};
			};
		};
		driverCanSee="4+8+2+32+16";
		gunnerCanSee="4+2+8+32+16";
		weapons[]=
		{
			"TruckHorn",
			"SmokeLauncher"
		};
		magazines[]=
		{
			"SmokeLauncherMag"
		};
		class Turrets
		{
		};
		threat[]={0,0,0};
		forceInGarage=1;
		class TransportBackpack
		{
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=10;
			};
			class _xx_Medikit
			{
				name="Medikit";
				count=1;
			};
		};
	};
	class Pandur2_WD: Pandur2_cannon_F
	{
		author="Phantom hawk";
		scope=2;
		scopeCurator=2;
		displayName="Pandur II";
		picture="\A3\armor_f_gamma\APC_Wheeled_03\Data\UI\APC_Wheeled_03_CA.paa";
		faction="BLU_F_WD";
		forceInGarage=1;
		crew="B_crew_F";
		typicalCargo[]=
		{
			"B_soldier_F"
		};
		side=1;
		vehicleClass="APCs""";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4",
			"CamoNet",
			"CamoSlat"
		};
		hiddenSelectionsTextures[]=
		{
			"\UNIF_Pandur_Fix\data\pandur_01_ext_wd.paa",
			"\UNIF_Pandur_Fix\data\pandur_02_ext_wd.paa",
			"\UNIF_Pandur_Fix\data\pandur_Turret_wd.paa",
			"\UNIF_Pandur_Fix\data\pandur_03_ext_wd.paa",
			"a3\Armor_F\Data\camonet_green_CO.paa",
			"A3\armor_f\data\cage_G1_co.paa"
		};
		class TransportMagazines
		{
			class _xx_30Rnd_65x39_caseless_mag
			{
				magazine="30Rnd_65x39_caseless_mag";
				count=12;
			};
			class _xx_100Rnd_65x39_caseless_mag
			{
				magazine="100Rnd_65x39_caseless_mag";
				count=6;
			};
			class _xx_HandGrenade
			{
				magazine="HandGrenade";
				count=6;
			};
			class _xx_MiniGrenade
			{
				magazine="MiniGrenade";
				count=6;
			};
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine="1Rnd_HE_Grenade_shell";
				count=6;
			};
			class _xx_1Rnd_Smoke_Grenade_shell
			{
				magazine="1Rnd_Smoke_Grenade_shell";
				count=3;
			};
			class _xx_1Rnd_SmokeGreen_Grenade_shell
			{
				magazine="1Rnd_SmokeGreen_Grenade_shell";
				count=3;
			};
			class _xx_1Rnd_SmokeOrange_Grenade_shell
			{
				magazine="1Rnd_SmokeOrange_Grenade_shell";
				count=3;
			};
			class _xx_1Rnd_SmokeBlue_Grenade_shell
			{
				magazine="1Rnd_SmokeBlue_Grenade_shell";
				count=3;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=8;
			};
			class _xx_SmokeShellGreen
			{
				magazine="SmokeShellGreen";
				count=8;
			};
			class _xx_SmokeShellOrange
			{
				magazine="SmokeShellOrange";
				count=8;
			};
			class _xx_SmokeShellBlue
			{
				magazine="SmokeShellBlue";
				count=8;
			};
			class _xx_NLAW_F
			{
				magazine="NLAW_F";
				count=5;
			};
			class _xx_Titan_AT
			{
				magazine="Titan_AT";
				count=2;
			};
			class _xx_Titan_AP
			{
				magazine="Titan_AP";
				count=2;
			};
			class _xx_Titan_AA
			{
				magazine="Titan_AA";
				count=2;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=10;
			};
		};
		class TransportWeapons
		{
			class _xx_arifle_MX_F
			{
				weapon="arifle_MX_F";
				count=2;
			};
		};
		class EventHandlers: EventHandlers
		{
			init="(_this select 0) execVM ""UNIF_Pandur_Fix\scripts\red_tracers.sqf""";
		};
	};
	class Pandur2_D: Pandur2_cannon_F
	{
		author="Phantom hawk";
		scope=2;
		scopeCurator=2;
		displayName="Pandur II";
		picture="\A3\armor_f_gamma\APC_Wheeled_03\Data\UI\APC_Wheeled_03_CA.paa";
		faction="BLU_F_D";
		forceInGarage=1;
		crew="B_crew_F";
		typicalCargo[]=
		{
			"B_soldier_F"
		};
		side=1;
		vehicleClass="APCs""";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4",
			"CamoNet",
			"CamoSlat"
		};
		hiddenSelectionsTextures[]=
		{
			"\UNIF_Pandur_Fix\data\pandur_01_ext_d.paa",
			"\UNIF_Pandur_Fix\data\pandur_02_ext_d.paa",
			"\UNIF_Pandur_Fix\data\pandur_Turret_d.paa",
			"\UNIF_Pandur_Fix\data\pandur_03_ext_d.paa",
			"\UNIF_Pandur_Fix\data\camonet_desert_CO.paa",
			"\UNIF_Pandur_Fix\data\cage_desert_CO.paa"
		};
		class TransportMagazines
		{
			class _xx_30Rnd_65x39_caseless_mag
			{
				magazine="30Rnd_65x39_caseless_mag";
				count=12;
			};
			class _xx_100Rnd_65x39_caseless_mag
			{
				magazine="100Rnd_65x39_caseless_mag";
				count=6;
			};
			class _xx_HandGrenade
			{
				magazine="HandGrenade";
				count=6;
			};
			class _xx_MiniGrenade
			{
				magazine="MiniGrenade";
				count=6;
			};
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine="1Rnd_HE_Grenade_shell";
				count=6;
			};
			class _xx_1Rnd_Smoke_Grenade_shell
			{
				magazine="1Rnd_Smoke_Grenade_shell";
				count=3;
			};
			class _xx_1Rnd_SmokeGreen_Grenade_shell
			{
				magazine="1Rnd_SmokeGreen_Grenade_shell";
				count=3;
			};
			class _xx_1Rnd_SmokeOrange_Grenade_shell
			{
				magazine="1Rnd_SmokeOrange_Grenade_shell";
				count=3;
			};
			class _xx_1Rnd_SmokeBlue_Grenade_shell
			{
				magazine="1Rnd_SmokeBlue_Grenade_shell";
				count=3;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=8;
			};
			class _xx_SmokeShellGreen
			{
				magazine="SmokeShellGreen";
				count=8;
			};
			class _xx_SmokeShellOrange
			{
				magazine="SmokeShellOrange";
				count=8;
			};
			class _xx_SmokeShellBlue
			{
				magazine="SmokeShellBlue";
				count=8;
			};
			class _xx_NLAW_F
			{
				magazine="NLAW_F";
				count=5;
			};
			class _xx_Titan_AT
			{
				magazine="Titan_AT";
				count=2;
			};
			class _xx_Titan_AP
			{
				magazine="Titan_AP";
				count=2;
			};
			class _xx_Titan_AA
			{
				magazine="Titan_AA";
				count=2;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=10;
			};
		};
		class TransportWeapons
		{
			class _xx_arifle_MX_F
			{
				weapon="arifle_MX_F";
				count=2;
			};
		};
		class EventHandlers: EventHandlers
		{
			init="(_this select 0) execVM ""UNIF_Pandur_Fix\scripts\red_tracers.sqf""";
		};
	};
	class Pandur2_E: Pandur2_cannon_F
	{
		author="Phantom hawk";
		scope=2;
		scopeCurator=2;
		displayName="Pandur II";
		picture="\A3\armor_f_gamma\APC_Wheeled_03\Data\UI\APC_Wheeled_03_CA.paa";
		faction="BLU_F_A";
		forceInGarage=1;
		crew="B_crew_F";
		typicalCargo[]=
		{
			"B_soldier_F"
		};
		side=1;
		vehicleClass="APCs""";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4",
			"CamoNet",
			"CamoSlat"
		};
		hiddenSelectionsTextures[]=
		{
			"A3\armor_f_gamma\APC_Wheeled_03\data\apc_wheeled_03_ext_co.paa",
			"A3\armor_f_gamma\APC_Wheeled_03\data\apc_wheeled_03_ext2_co.paa",
			"A3\armor_f_gamma\APC_Wheeled_03\data\rcws30_co.paa",
			"A3\armor_f_gamma\APC_Wheeled_03\data\apc_wheeled_03_ext_alpha_co.paa",
			"a3\Armor_F\Data\camonet_NATO_Desert_CO.paa",
			"a3\Armor_F\Data\cage_sand_CO.paa"
		};
		class TransportMagazines
		{
			class _xx_30Rnd_65x39_caseless_mag
			{
				magazine="30Rnd_65x39_caseless_mag";
				count=12;
			};
			class _xx_100Rnd_65x39_caseless_mag
			{
				magazine="100Rnd_65x39_caseless_mag";
				count=6;
			};
			class _xx_HandGrenade
			{
				magazine="HandGrenade";
				count=6;
			};
			class _xx_MiniGrenade
			{
				magazine="MiniGrenade";
				count=6;
			};
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine="1Rnd_HE_Grenade_shell";
				count=6;
			};
			class _xx_1Rnd_Smoke_Grenade_shell
			{
				magazine="1Rnd_Smoke_Grenade_shell";
				count=3;
			};
			class _xx_1Rnd_SmokeGreen_Grenade_shell
			{
				magazine="1Rnd_SmokeGreen_Grenade_shell";
				count=3;
			};
			class _xx_1Rnd_SmokeOrange_Grenade_shell
			{
				magazine="1Rnd_SmokeOrange_Grenade_shell";
				count=3;
			};
			class _xx_1Rnd_SmokeBlue_Grenade_shell
			{
				magazine="1Rnd_SmokeBlue_Grenade_shell";
				count=3;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=8;
			};
			class _xx_SmokeShellGreen
			{
				magazine="SmokeShellGreen";
				count=8;
			};
			class _xx_SmokeShellOrange
			{
				magazine="SmokeShellOrange";
				count=8;
			};
			class _xx_SmokeShellBlue
			{
				magazine="SmokeShellBlue";
				count=8;
			};
			class _xx_NLAW_F
			{
				magazine="NLAW_F";
				count=5;
			};
			class _xx_Titan_AT
			{
				magazine="Titan_AT";
				count=2;
			};
			class _xx_Titan_AP
			{
				magazine="Titan_AP";
				count=2;
			};
			class _xx_Titan_AA
			{
				magazine="Titan_AA";
				count=2;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=10;
			};
		};
		class TransportWeapons
		{
			class _xx_arifle_MX_F
			{
				weapon="arifle_MX_F";
				count=2;
			};
		};
		class EventHandlers: EventHandlers
		{
			init="(_this select 0) execVM ""UNIF_Pandur_Fix\scripts\red_tracers.sqf""";
		};
	};
	class Pandur2_AA_WD: Pandur2_AA_F
	{
		author="Phantom hawk";
		scope=2;
		scopeCurator=2;
		displayName="Pandur II (AA)";
		picture="\A3\armor_f_gamma\APC_Wheeled_03\Data\UI\APC_Wheeled_03_CA.paa";
		faction="BLU_F_WD";
		forceInGarage=1;
		crew="B_crew_F";
		typicalCargo[]=
		{
			"B_soldier_F"
		};
		side=1;
		editorSubcategory="EdSubcat_AAs";
		class EventHandlers: EventHandlers
		{
			init="(_this select 0) execVM ""UNIF_Pandur_Fix\scripts\AA.sqf""";
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4",
			"CamoNet",
			"CamoSlat"
		};
		hiddenSelectionsTextures[]=
		{
			"\UNIF_Pandur_Fix\data\pandur_01_ext_wd.paa",
			"\UNIF_Pandur_Fix\data\pandur_02_ext_wd.paa",
			"\UNIF_Pandur_Fix\data\pandur_Turret_wd.paa",
			"\UNIF_Pandur_Fix\data\pandur_03_ext_wd.paa",
			"a3\Armor_F\Data\camonet_green_CO.paa",
			"A3\armor_f\data\cage_G1_co.paa"
		};
		class TransportMagazines
		{
			class _xx_30Rnd_65x39_caseless_mag
			{
				magazine="30Rnd_65x39_caseless_mag";
				count=12;
			};
			class _xx_100Rnd_65x39_caseless_mag
			{
				magazine="100Rnd_65x39_caseless_mag";
				count=6;
			};
			class _xx_HandGrenade
			{
				magazine="HandGrenade";
				count=6;
			};
			class _xx_MiniGrenade
			{
				magazine="MiniGrenade";
				count=6;
			};
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine="1Rnd_HE_Grenade_shell";
				count=6;
			};
			class _xx_1Rnd_Smoke_Grenade_shell
			{
				magazine="1Rnd_Smoke_Grenade_shell";
				count=3;
			};
			class _xx_1Rnd_SmokeGreen_Grenade_shell
			{
				magazine="1Rnd_SmokeGreen_Grenade_shell";
				count=3;
			};
			class _xx_1Rnd_SmokeOrange_Grenade_shell
			{
				magazine="1Rnd_SmokeOrange_Grenade_shell";
				count=3;
			};
			class _xx_1Rnd_SmokeBlue_Grenade_shell
			{
				magazine="1Rnd_SmokeBlue_Grenade_shell";
				count=3;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=8;
			};
			class _xx_SmokeShellGreen
			{
				magazine="SmokeShellGreen";
				count=8;
			};
			class _xx_SmokeShellOrange
			{
				magazine="SmokeShellOrange";
				count=8;
			};
			class _xx_SmokeShellBlue
			{
				magazine="SmokeShellBlue";
				count=8;
			};
			class _xx_NLAW_F
			{
				magazine="NLAW_F";
				count=5;
			};
			class _xx_Titan_AT
			{
				magazine="Titan_AT";
				count=2;
			};
			class _xx_Titan_AP
			{
				magazine="Titan_AP";
				count=2;
			};
			class _xx_Titan_AA
			{
				magazine="Titan_AA";
				count=2;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=10;
			};
		};
		class TransportWeapons
		{
			class _xx_arifle_MX_F
			{
				weapon="arifle_MX_F";
				count=2;
			};
		};
	};
	class Pandur2_AA_D: Pandur2_AA_F
	{
		author="Phantom hawk";
		scope=2;
		scopeCurator=2;
		displayName="Pandur II (AA)";
		picture="\A3\armor_f_gamma\APC_Wheeled_03\Data\UI\APC_Wheeled_03_CA.paa";
		faction="BLU_F_D";
		forceInGarage=1;
		crew="B_crew_F";
		typicalCargo[]=
		{
			"B_soldier_F"
		};
		side=1;
		editorSubcategory="EdSubcat_AAs";
		class EventHandlers: EventHandlers
		{
			init="(_this select 0) execVM ""UNIF_Pandur_Fix\scripts\AA.sqf""";
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4",
			"CamoNet",
			"CamoSlat"
		};
		hiddenSelectionsTextures[]=
		{
			"\UNIF_Pandur_Fix\data\pandur_01_ext_d.paa",
			"\UNIF_Pandur_Fix\data\pandur_02_ext_d.paa",
			"\UNIF_Pandur_Fix\data\pandur_Turret_d.paa",
			"\UNIF_Pandur_Fix\data\pandur_03_ext_d.paa",
			"\UNIF_Pandur_Fix\data\camonet_desert_CO.paa",
			"\UNIF_Pandur_Fix\data\cage_desert_CO.paa"
		};
		class TransportMagazines
		{
			class _xx_30Rnd_65x39_caseless_mag
			{
				magazine="30Rnd_65x39_caseless_mag";
				count=12;
			};
			class _xx_100Rnd_65x39_caseless_mag
			{
				magazine="100Rnd_65x39_caseless_mag";
				count=6;
			};
			class _xx_HandGrenade
			{
				magazine="HandGrenade";
				count=6;
			};
			class _xx_MiniGrenade
			{
				magazine="MiniGrenade";
				count=6;
			};
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine="1Rnd_HE_Grenade_shell";
				count=6;
			};
			class _xx_1Rnd_Smoke_Grenade_shell
			{
				magazine="1Rnd_Smoke_Grenade_shell";
				count=3;
			};
			class _xx_1Rnd_SmokeGreen_Grenade_shell
			{
				magazine="1Rnd_SmokeGreen_Grenade_shell";
				count=3;
			};
			class _xx_1Rnd_SmokeOrange_Grenade_shell
			{
				magazine="1Rnd_SmokeOrange_Grenade_shell";
				count=3;
			};
			class _xx_1Rnd_SmokeBlue_Grenade_shell
			{
				magazine="1Rnd_SmokeBlue_Grenade_shell";
				count=3;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=8;
			};
			class _xx_SmokeShellGreen
			{
				magazine="SmokeShellGreen";
				count=8;
			};
			class _xx_SmokeShellOrange
			{
				magazine="SmokeShellOrange";
				count=8;
			};
			class _xx_SmokeShellBlue
			{
				magazine="SmokeShellBlue";
				count=8;
			};
			class _xx_NLAW_F
			{
				magazine="NLAW_F";
				count=5;
			};
			class _xx_Titan_AT
			{
				magazine="Titan_AT";
				count=2;
			};
			class _xx_Titan_AP
			{
				magazine="Titan_AP";
				count=2;
			};
			class _xx_Titan_AA
			{
				magazine="Titan_AA";
				count=2;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=10;
			};
		};
		class TransportWeapons
		{
			class _xx_arifle_MX_F
			{
				weapon="arifle_MX_F";
				count=2;
			};
		};
	};
	class Pandur2_AA_E: Pandur2_AA_F
	{
		author="Phantom hawk";
		scope=2;
		scopeCurator=2;
		displayName="Pandur II (AA)";
		picture="\A3\armor_f_gamma\APC_Wheeled_03\Data\UI\APC_Wheeled_03_CA.paa";
		faction="BLU_F_A";
		forceInGarage=1;
		crew="B_crew_F";
		typicalCargo[]=
		{
			"B_soldier_F"
		};
		side=1;
		editorSubcategory="EdSubcat_AAs";
		class EventHandlers: EventHandlers
		{
			init="(_this select 0) execVM ""UNIF_Pandur_Fix\scripts\AA.sqf""";
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4",
			"CamoNet",
			"CamoSlat"
		};
		hiddenSelectionsTextures[]=
		{
			"A3\armor_f_gamma\APC_Wheeled_03\data\apc_wheeled_03_ext_co.paa",
			"A3\armor_f_gamma\APC_Wheeled_03\data\apc_wheeled_03_ext2_co.paa",
			"A3\armor_f_gamma\APC_Wheeled_03\data\rcws30_co.paa",
			"A3\armor_f_gamma\APC_Wheeled_03\data\apc_wheeled_03_ext_alpha_co.paa",
			"a3\Armor_F\Data\camonet_NATO_Desert_CO.paa",
			"a3\Armor_F\Data\cage_sand_CO.paa"
		};
		class TransportMagazines
		{
			class _xx_30Rnd_65x39_caseless_mag
			{
				magazine="30Rnd_65x39_caseless_mag";
				count=12;
			};
			class _xx_100Rnd_65x39_caseless_mag
			{
				magazine="100Rnd_65x39_caseless_mag";
				count=6;
			};
			class _xx_HandGrenade
			{
				magazine="HandGrenade";
				count=6;
			};
			class _xx_MiniGrenade
			{
				magazine="MiniGrenade";
				count=6;
			};
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine="1Rnd_HE_Grenade_shell";
				count=6;
			};
			class _xx_1Rnd_Smoke_Grenade_shell
			{
				magazine="1Rnd_Smoke_Grenade_shell";
				count=3;
			};
			class _xx_1Rnd_SmokeGreen_Grenade_shell
			{
				magazine="1Rnd_SmokeGreen_Grenade_shell";
				count=3;
			};
			class _xx_1Rnd_SmokeOrange_Grenade_shell
			{
				magazine="1Rnd_SmokeOrange_Grenade_shell";
				count=3;
			};
			class _xx_1Rnd_SmokeBlue_Grenade_shell
			{
				magazine="1Rnd_SmokeBlue_Grenade_shell";
				count=3;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=8;
			};
			class _xx_SmokeShellGreen
			{
				magazine="SmokeShellGreen";
				count=8;
			};
			class _xx_SmokeShellOrange
			{
				magazine="SmokeShellOrange";
				count=8;
			};
			class _xx_SmokeShellBlue
			{
				magazine="SmokeShellBlue";
				count=8;
			};
			class _xx_NLAW_F
			{
				magazine="NLAW_F";
				count=5;
			};
			class _xx_Titan_AT
			{
				magazine="Titan_AT";
				count=2;
			};
			class _xx_Titan_AP
			{
				magazine="Titan_AP";
				count=2;
			};
			class _xx_Titan_AA
			{
				magazine="Titan_AA";
				count=2;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=10;
			};
		};
		class TransportWeapons
		{
			class _xx_arifle_MX_F
			{
				weapon="arifle_MX_F";
				count=2;
			};
		};
	};
	class Pandur2_unarmed_WD: Pandur2_Unarmed_F
	{
		crew="B_crew_F";
		typicalCargo[]=
		{
			"B_soldier_F"
		};
		scope=2;
		scopeCurator=2;
		displayName="Pandur II Transport";
		picture="\UNIF_Pandur_Fix\data\APC_Wheeled_03_Base_CA";
		icon="\UNIF_Pandur_Fix\data\map_APC_Wheeled_03_Base_CA.paa";
		class EventHandlers: EventHandlers
		{
			init="if (local (_this select 0)) then {{(_this select 0) animate [_x, 1]} forEach ['HideHull','HideTurret']}";
		};
		faction="BLU_F_WD";
		forceInGarage=1;
		side=1;
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4",
			"CamoNet",
			"CamoSlat"
		};
		hiddenSelectionsTextures[]=
		{
			"\UNIF_Pandur_Fix\data\pandur_01_ext_wd.paa",
			"\UNIF_Pandur_Fix\data\pandur_02_ext_wd.paa",
			"\UNIF_Pandur_Fix\data\pandur_Turret_wd.paa",
			"\UNIF_Pandur_Fix\data\pandur_03_ext_wd.paa",
			"a3\Armor_F\Data\camonet_green_CO.paa",
			"A3\armor_f\data\cage_G1_co.paa"
		};
		class TransportMagazines
		{
			class _xx_30Rnd_65x39_caseless_mag
			{
				magazine="30Rnd_65x39_caseless_mag";
				count=12;
			};
			class _xx_100Rnd_65x39_caseless_mag
			{
				magazine="100Rnd_65x39_caseless_mag";
				count=6;
			};
			class _xx_HandGrenade
			{
				magazine="HandGrenade";
				count=6;
			};
			class _xx_MiniGrenade
			{
				magazine="MiniGrenade";
				count=6;
			};
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine="1Rnd_HE_Grenade_shell";
				count=6;
			};
			class _xx_1Rnd_Smoke_Grenade_shell
			{
				magazine="1Rnd_Smoke_Grenade_shell";
				count=3;
			};
			class _xx_1Rnd_SmokeGreen_Grenade_shell
			{
				magazine="1Rnd_SmokeGreen_Grenade_shell";
				count=3;
			};
			class _xx_1Rnd_SmokeOrange_Grenade_shell
			{
				magazine="1Rnd_SmokeOrange_Grenade_shell";
				count=3;
			};
			class _xx_1Rnd_SmokeBlue_Grenade_shell
			{
				magazine="1Rnd_SmokeBlue_Grenade_shell";
				count=3;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=8;
			};
			class _xx_SmokeShellGreen
			{
				magazine="SmokeShellGreen";
				count=8;
			};
			class _xx_SmokeShellOrange
			{
				magazine="SmokeShellOrange";
				count=8;
			};
			class _xx_SmokeShellBlue
			{
				magazine="SmokeShellBlue";
				count=8;
			};
			class _xx_NLAW_F
			{
				magazine="NLAW_F";
				count=5;
			};
			class _xx_Titan_AT
			{
				magazine="Titan_AT";
				count=2;
			};
			class _xx_Titan_AP
			{
				magazine="Titan_AP";
				count=2;
			};
			class _xx_Titan_AA
			{
				magazine="Titan_AA";
				count=2;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=10;
			};
		};
		class TransportWeapons
		{
			class _xx_arifle_MX_F
			{
				weapon="arifle_MX_F";
				count=2;
			};
		};
	};
	class Pandur2_unarmed_D: Pandur2_Unarmed_F
	{
		crew="B_crew_F";
		typicalCargo[]=
		{
			"B_soldier_F"
		};
		scope=2;
		scopeCurator=2;
		displayName="Pandur II Transport";
		picture="\UNIF_Pandur_Fix\data\APC_Wheeled_03_Base_CA";
		icon="\UNIF_Pandur_Fix\data\map_APC_Wheeled_03_Base_CA.paa";
		class EventHandlers: EventHandlers
		{
			init="if (local (_this select 0)) then {{(_this select 0) animate [_x, 1]} forEach ['HideHull','HideTurret']}";
		};
		faction="BLU_F_D";
		forceInGarage=1;
		side=1;
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4",
			"CamoNet",
			"CamoSlat"
		};
		hiddenSelectionsTextures[]=
		{
			"\UNIF_Pandur_Fix\data\pandur_01_ext_d.paa",
			"\UNIF_Pandur_Fix\data\pandur_02_ext_d.paa",
			"\UNIF_Pandur_Fix\data\pandur_Turret_d.paa",
			"\UNIF_Pandur_Fix\data\pandur_03_ext_d.paa",
			"\UNIF_Pandur_Fix\data\camonet_desert_CO.paa",
			"\UNIF_Pandur_Fix\data\cage_desert_CO.paa"
		};
		class TransportMagazines
		{
			class _xx_30Rnd_65x39_caseless_mag
			{
				magazine="30Rnd_65x39_caseless_mag";
				count=12;
			};
			class _xx_100Rnd_65x39_caseless_mag
			{
				magazine="100Rnd_65x39_caseless_mag";
				count=6;
			};
			class _xx_HandGrenade
			{
				magazine="HandGrenade";
				count=6;
			};
			class _xx_MiniGrenade
			{
				magazine="MiniGrenade";
				count=6;
			};
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine="1Rnd_HE_Grenade_shell";
				count=6;
			};
			class _xx_1Rnd_Smoke_Grenade_shell
			{
				magazine="1Rnd_Smoke_Grenade_shell";
				count=3;
			};
			class _xx_1Rnd_SmokeGreen_Grenade_shell
			{
				magazine="1Rnd_SmokeGreen_Grenade_shell";
				count=3;
			};
			class _xx_1Rnd_SmokeOrange_Grenade_shell
			{
				magazine="1Rnd_SmokeOrange_Grenade_shell";
				count=3;
			};
			class _xx_1Rnd_SmokeBlue_Grenade_shell
			{
				magazine="1Rnd_SmokeBlue_Grenade_shell";
				count=3;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=8;
			};
			class _xx_SmokeShellGreen
			{
				magazine="SmokeShellGreen";
				count=8;
			};
			class _xx_SmokeShellOrange
			{
				magazine="SmokeShellOrange";
				count=8;
			};
			class _xx_SmokeShellBlue
			{
				magazine="SmokeShellBlue";
				count=8;
			};
			class _xx_NLAW_F
			{
				magazine="NLAW_F";
				count=5;
			};
			class _xx_Titan_AT
			{
				magazine="Titan_AT";
				count=2;
			};
			class _xx_Titan_AP
			{
				magazine="Titan_AP";
				count=2;
			};
			class _xx_Titan_AA
			{
				magazine="Titan_AA";
				count=2;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=10;
			};
		};
		class TransportWeapons
		{
			class _xx_arifle_MX_F
			{
				weapon="arifle_MX_F";
				count=2;
			};
		};
	};
	class Pandur2_unarmed_E: Pandur2_Unarmed_F
	{
		crew="B_crew_F";
		typicalCargo[]=
		{
			"B_soldier_F"
		};
		scope=2;
		scopeCurator=2;
		displayName="Pandur II Transport";
		picture="\UNIF_Pandur_Fix\data\APC_Wheeled_03_Base_CA";
		icon="\UNIF_Pandur_Fix\data\map_APC_Wheeled_03_Base_CA.paa";
		class EventHandlers: EventHandlers
		{
			init="if (local (_this select 0)) then {{(_this select 0) animate [_x, 1]} forEach ['HideHull','HideTurret']}";
		};
		faction="BLU_F_A";
		forceInGarage=1;
		side=1;
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4",
			"CamoNet",
			"CamoSlat"
		};
		hiddenSelectionsTextures[]=
		{
			"A3\armor_f_gamma\APC_Wheeled_03\data\apc_wheeled_03_ext_co.paa",
			"A3\armor_f_gamma\APC_Wheeled_03\data\apc_wheeled_03_ext2_co.paa",
			"A3\armor_f_gamma\APC_Wheeled_03\data\rcws30_co.paa",
			"A3\armor_f_gamma\APC_Wheeled_03\data\apc_wheeled_03_ext_alpha_co.paa",
			"a3\Armor_F\Data\camonet_NATO_Desert_CO.paa",
			"a3\Armor_F\Data\cage_sand_CO.paa"
		};
		class TransportMagazines
		{
			class _xx_30Rnd_65x39_caseless_mag
			{
				magazine="30Rnd_65x39_caseless_mag";
				count=12;
			};
			class _xx_100Rnd_65x39_caseless_mag
			{
				magazine="100Rnd_65x39_caseless_mag";
				count=6;
			};
			class _xx_HandGrenade
			{
				magazine="HandGrenade";
				count=6;
			};
			class _xx_MiniGrenade
			{
				magazine="MiniGrenade";
				count=6;
			};
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine="1Rnd_HE_Grenade_shell";
				count=6;
			};
			class _xx_1Rnd_Smoke_Grenade_shell
			{
				magazine="1Rnd_Smoke_Grenade_shell";
				count=3;
			};
			class _xx_1Rnd_SmokeGreen_Grenade_shell
			{
				magazine="1Rnd_SmokeGreen_Grenade_shell";
				count=3;
			};
			class _xx_1Rnd_SmokeOrange_Grenade_shell
			{
				magazine="1Rnd_SmokeOrange_Grenade_shell";
				count=3;
			};
			class _xx_1Rnd_SmokeBlue_Grenade_shell
			{
				magazine="1Rnd_SmokeBlue_Grenade_shell";
				count=3;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=8;
			};
			class _xx_SmokeShellGreen
			{
				magazine="SmokeShellGreen";
				count=8;
			};
			class _xx_SmokeShellOrange
			{
				magazine="SmokeShellOrange";
				count=8;
			};
			class _xx_SmokeShellBlue
			{
				magazine="SmokeShellBlue";
				count=8;
			};
			class _xx_NLAW_F
			{
				magazine="NLAW_F";
				count=5;
			};
			class _xx_Titan_AT
			{
				magazine="Titan_AT";
				count=2;
			};
			class _xx_Titan_AP
			{
				magazine="Titan_AP";
				count=2;
			};
			class _xx_Titan_AA
			{
				magazine="Titan_AA";
				count=2;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=10;
			};
		};
		class TransportWeapons
		{
			class _xx_arifle_MX_F
			{
				weapon="arifle_MX_F";
				count=2;
			};
		};
	};
	class Pandur2_medical_WD: Pandur2_Medical_F
	{
		crew="B_crew_F";
		typicalCargo[]=
		{
			"B_soldier_F"
		};
		scope=2;
		scopeCurator=2;
		displayName="Pandur II Medical";
		picture="\UNIF_Pandur_Fix\data\APC_Wheeled_03_Base_CA";
		icon="\UNIF_Pandur_Fix\data\map_APC_Wheeled_03_Base_CA.paa";
		vehicleClass="Support";
		supplyRadius=10;
		attendant=1;
		class EventHandlers: EventHandlers
		{
			init="if (local (_this select 0)) then {{(_this select 0) animate [_x, 1]} forEach ['HideHull','HideTurret']}";
		};
		faction="BLU_F_WD";
		forceInGarage=1;
		side=1;
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4",
			"CamoNet",
			"CamoSlat"
		};
		hiddenSelectionsTextures[]=
		{
			"\UNIF_Pandur_Fix\data\pandur_01_med_ext_wd.paa",
			"\UNIF_Pandur_Fix\data\pandur_02_med_ext_wd.paa",
			"\UNIF_Pandur_Fix\data\pandur_Turret_wd.paa",
			"\UNIF_Pandur_Fix\data\pandur_03_ext_wd.paa",
			"a3\Armor_F\Data\camonet_green_CO.paa",
			"A3\armor_f\data\cage_G1_co.paa"
		};
		class TransportMagazines
		{
			class _xx_30Rnd_65x39_caseless_mag
			{
				magazine="30Rnd_65x39_caseless_mag";
				count=12;
			};
			class _xx_100Rnd_65x39_caseless_mag
			{
				magazine="100Rnd_65x39_caseless_mag";
				count=6;
			};
			class _xx_HandGrenade
			{
				magazine="HandGrenade";
				count=6;
			};
			class _xx_MiniGrenade
			{
				magazine="MiniGrenade";
				count=6;
			};
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine="1Rnd_HE_Grenade_shell";
				count=6;
			};
			class _xx_1Rnd_Smoke_Grenade_shell
			{
				magazine="1Rnd_Smoke_Grenade_shell";
				count=3;
			};
			class _xx_1Rnd_SmokeGreen_Grenade_shell
			{
				magazine="1Rnd_SmokeGreen_Grenade_shell";
				count=3;
			};
			class _xx_1Rnd_SmokeOrange_Grenade_shell
			{
				magazine="1Rnd_SmokeOrange_Grenade_shell";
				count=3;
			};
			class _xx_1Rnd_SmokeBlue_Grenade_shell
			{
				magazine="1Rnd_SmokeBlue_Grenade_shell";
				count=3;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=8;
			};
			class _xx_SmokeShellGreen
			{
				magazine="SmokeShellGreen";
				count=8;
			};
			class _xx_SmokeShellOrange
			{
				magazine="SmokeShellOrange";
				count=8;
			};
			class _xx_SmokeShellBlue
			{
				magazine="SmokeShellBlue";
				count=8;
			};
			class _xx_NLAW_F
			{
				magazine="NLAW_F";
				count=5;
			};
			class _xx_Titan_AT
			{
				magazine="Titan_AT";
				count=2;
			};
			class _xx_Titan_AP
			{
				magazine="Titan_AP";
				count=2;
			};
			class _xx_Titan_AA
			{
				magazine="Titan_AA";
				count=2;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=10;
			};
		};
		class TransportWeapons
		{
			class _xx_arifle_MX_F
			{
				weapon="arifle_MX_F";
				count=2;
			};
		};
	};
	class Pandur2_medical_D: Pandur2_Medical_F
	{
		crew="B_crew_F";
		typicalCargo[]=
		{
			"B_soldier_F"
		};
		scope=2;
		scopeCurator=2;
		displayName="Pandur II Medical";
		picture="\UNIF_Pandur_Fix\data\APC_Wheeled_03_Base_CA";
		icon="\UNIF_Pandur_Fix\data\map_APC_Wheeled_03_Base_CA.paa";
		vehicleClass="Support";
		supplyRadius=10;
		attendant=1;
		class EventHandlers: EventHandlers
		{
			init="if (local (_this select 0)) then {{(_this select 0) animate [_x, 1]} forEach ['HideHull','HideTurret']}";
		};
		faction="BLU_F_D";
		forceInGarage=1;
		side=1;
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4",
			"CamoNet",
			"CamoSlat"
		};
		hiddenSelectionsTextures[]=
		{
			"\UNIF_Pandur_Fix\data\pandur_01_med_ext_d.paa",
			"\UNIF_Pandur_Fix\data\pandur_02_med_ext_d.paa",
			"\UNIF_Pandur_Fix\data\pandur_Turret_d.paa",
			"\UNIF_Pandur_Fix\data\pandur_03_ext_d.paa",
			"\UNIF_Pandur_Fix\data\camonet_desert_CO.paa",
			"\UNIF_Pandur_Fix\data\cage_desert_CO.paa"
		};
		class TransportMagazines
		{
			class _xx_30Rnd_65x39_caseless_mag
			{
				magazine="30Rnd_65x39_caseless_mag";
				count=12;
			};
			class _xx_100Rnd_65x39_caseless_mag
			{
				magazine="100Rnd_65x39_caseless_mag";
				count=6;
			};
			class _xx_HandGrenade
			{
				magazine="HandGrenade";
				count=6;
			};
			class _xx_MiniGrenade
			{
				magazine="MiniGrenade";
				count=6;
			};
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine="1Rnd_HE_Grenade_shell";
				count=6;
			};
			class _xx_1Rnd_Smoke_Grenade_shell
			{
				magazine="1Rnd_Smoke_Grenade_shell";
				count=3;
			};
			class _xx_1Rnd_SmokeGreen_Grenade_shell
			{
				magazine="1Rnd_SmokeGreen_Grenade_shell";
				count=3;
			};
			class _xx_1Rnd_SmokeOrange_Grenade_shell
			{
				magazine="1Rnd_SmokeOrange_Grenade_shell";
				count=3;
			};
			class _xx_1Rnd_SmokeBlue_Grenade_shell
			{
				magazine="1Rnd_SmokeBlue_Grenade_shell";
				count=3;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=8;
			};
			class _xx_SmokeShellGreen
			{
				magazine="SmokeShellGreen";
				count=8;
			};
			class _xx_SmokeShellOrange
			{
				magazine="SmokeShellOrange";
				count=8;
			};
			class _xx_SmokeShellBlue
			{
				magazine="SmokeShellBlue";
				count=8;
			};
			class _xx_NLAW_F
			{
				magazine="NLAW_F";
				count=5;
			};
			class _xx_Titan_AT
			{
				magazine="Titan_AT";
				count=2;
			};
			class _xx_Titan_AP
			{
				magazine="Titan_AP";
				count=2;
			};
			class _xx_Titan_AA
			{
				magazine="Titan_AA";
				count=2;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=10;
			};
		};
		class TransportWeapons
		{
			class _xx_arifle_MX_F
			{
				weapon="arifle_MX_F";
				count=2;
			};
		};
	};
	class Pandur2_medical_E: Pandur2_Medical_F
	{
		crew="B_crew_F";
		typicalCargo[]=
		{
			"B_soldier_F"
		};
		scope=2;
		scopeCurator=2;
		displayName="Pandur II Medical";
		picture="\UNIF_Pandur_Fix\data\APC_Wheeled_03_Base_CA";
		icon="\UNIF_Pandur_Fix\data\map_APC_Wheeled_03_Base_CA.paa";
		vehicleClass="Support";
		supplyRadius=10;
		attendant=1;
		class EventHandlers: EventHandlers
		{
			init="if (local (_this select 0)) then {{(_this select 0) animate [_x, 1]} forEach ['HideHull','HideTurret']}";
		};
		faction="BLU_F_A";
		forceInGarage=1;
		side=1;
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4",
			"CamoNet",
			"CamoSlat"
		};
		hiddenSelectionsTextures[]=
		{
			"\UNIF_Pandur_Fix\data\pandur_01_med_ext_e.paa",
			"\UNIF_Pandur_Fix\data\pandur_02_med_ext_e.paa",
			"A3\armor_f_gamma\APC_Wheeled_03\data\rcws30_co.paa",
			"A3\armor_f_gamma\APC_Wheeled_03\data\apc_wheeled_03_ext_alpha_co.paa",
			"a3\Armor_F\Data\camonet_NATO_Desert_CO.paa",
			"a3\Armor_F\Data\cage_sand_CO.paa",
			"A3\armor_f_gamma\APC_Wheeled_03\data\rcws30_co.paa",
			"A3\armor_f_gamma\APC_Wheeled_03\data\apc_wheeled_03_ext_alpha_co.paa"
		};
		class TransportMagazines
		{
			class _xx_30Rnd_65x39_caseless_mag
			{
				magazine="30Rnd_65x39_caseless_mag";
				count=12;
			};
			class _xx_100Rnd_65x39_caseless_mag
			{
				magazine="100Rnd_65x39_caseless_mag";
				count=6;
			};
			class _xx_HandGrenade
			{
				magazine="HandGrenade";
				count=6;
			};
			class _xx_MiniGrenade
			{
				magazine="MiniGrenade";
				count=6;
			};
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine="1Rnd_HE_Grenade_shell";
				count=6;
			};
			class _xx_1Rnd_Smoke_Grenade_shell
			{
				magazine="1Rnd_Smoke_Grenade_shell";
				count=3;
			};
			class _xx_1Rnd_SmokeGreen_Grenade_shell
			{
				magazine="1Rnd_SmokeGreen_Grenade_shell";
				count=3;
			};
			class _xx_1Rnd_SmokeOrange_Grenade_shell
			{
				magazine="1Rnd_SmokeOrange_Grenade_shell";
				count=3;
			};
			class _xx_1Rnd_SmokeBlue_Grenade_shell
			{
				magazine="1Rnd_SmokeBlue_Grenade_shell";
				count=3;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=8;
			};
			class _xx_SmokeShellGreen
			{
				magazine="SmokeShellGreen";
				count=8;
			};
			class _xx_SmokeShellOrange
			{
				magazine="SmokeShellOrange";
				count=8;
			};
			class _xx_SmokeShellBlue
			{
				magazine="SmokeShellBlue";
				count=8;
			};
			class _xx_NLAW_F
			{
				magazine="NLAW_F";
				count=5;
			};
			class _xx_Titan_AT
			{
				magazine="Titan_AT";
				count=2;
			};
			class _xx_Titan_AP
			{
				magazine="Titan_AP";
				count=2;
			};
			class _xx_Titan_AA
			{
				magazine="Titan_AA";
				count=2;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=10;
			};
		};
		class TransportWeapons
		{
			class _xx_arifle_MX_F
			{
				weapon="arifle_MX_F";
				count=2;
			};
		};
	};
};
