class CfgPatches
{
	class UNIF_Patria_Fix
	{
		requiredVersion=1;
		author="Phantom hawk";
		authorUrl="";
		version=1;
		units[]=
		{
			"Patria_WD",
			"Patria_unarmed_WD",
			"Patria_medical_WD",
			"Patria_D",
			"Patria_unarmed_D",
			"Patria_medical_D"
		};
		requiredAddons[]=
		{
			"A3_Data_F",
			"A3_Air_F",
			"A3_Armor_F",
			"A3_Soft_F"
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
		};
	};
	class Wheeled_APC_F: Car_F
	{
		class ViewOptics;
		class ViewCargo;
		class EventHandlers;
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
				class Turrets
				{
					class CommanderOptics;
				};
			};
		};
		class AnimationSources;
	};
	class B_APC_Wheeled_01_cannon_F;
	class Patria_cannon_F: B_APC_Wheeled_01_cannon_F
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
			class Blu_Woodland
			{
				displayName="Woodland";
				author="Phantom hawk";
				textures[]=
				{
					"\UNIF_Patria_Fix\data\Patria_01_ext_wd.paa",
					"\UNIF_Patria_Fix\data\Patria_02_ext_wd.paa",
					"\UNIF_Patria_Fix\data\Patria_Turret_wd.paa",
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
					"\UNIF_Patria_Fix\data\Patria_01_ext_wd.paa",
					"\UNIF_Patria_Fix\data\Patria_02_ext_wd.paa",
					"\UNIF_Patria_Fix\data\Patria_Turret_wd.paa",
					"\UNIF_Patria_Fix\data\camonet_desert_CO.paa",
					"\UNIF_Patria_Fix\data\cage_desert_CO.paa"
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
			class muzzle_rot
			{
				source="ammorandom";
				weapon="autocannon_40mm_CTWS";
			};
			class muzzle_hide
			{
				source="reload";
				weapon="autocannon_40mm_CTWS";
			};
			class revolving_cannon
			{
				source="revolving";
				weapon="autocannon_40mm_CTWS";
			};
			class HideTurret
			{
				source="user";
				initPhase=0;
				animPeriod=0.001;
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
			class HitSLAT_top_back_src
			{
				source="Hit";
				hitpoint="HitSLAT_top_back";
				raw=1;
			};
			class HitSLAT_top_right_src
			{
				source="Hit";
				hitpoint="HitSLAT_top_right";
				raw=1;
			};
			class HitSLAT_top_left_src
			{
				source="Hit";
				hitpoint="HitSLAT_top_left";
				raw=1;
			};
			class showBags
			{
				displayName="$STR_A3_animationsources_showbagsturret0";
				author="$STR_A3_Bohemia_Interactive";
				source="user";
				animPeriod=0.001;
				initPhase=0;
				mass=-50;
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
			class showCamonetCannon
			{
				source="user";
				animPeriod=0.001;
				initPhase=0;
			};
			class showCamonetTurret
			{
				displayName="$STR_A3_animationsources_showcamonetturret0";
				author="$STR_A3_Bohemia_Interactive";
				source="user";
				animPeriod=0.001;
				initPhase=0;
				forceAnimatePhase=1;
				forceAnimate[]=
				{
					"showCamonetCannon",
					1
				};
				forceAnimate2[]=
				{
					"showCamonetCannon",
					0
				};
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
			class showSLATTurret
			{
				displayName="$STR_A3_animationsources_showslatturret0";
				author="$STR_A3_Bohemia_Interactive";
				source="user";
				animPeriod=0.001;
				initPhase=0;
				mass=-50;
			};
		};
		animationList[]=
		{
			"showBags",
			0,
			"showCamonetHull",
			0,
			"showCamonetCannon",
			0,
			"showCamonetTurret",
			0,
			"showSLATHull",
			0,
			"showSLATTurret",
			0
		};
	};
	class Patria_base_unarmed_F: Patria_cannon_F
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
			class Blu_Woodland_Med
			{
				displayName="Woodland";
				author="Phantom hawk";
				textures[]=
				{
					"\UNIF_Patria_Fix\data\Patria_01_ext_wd.paa",
					"\UNIF_Patria_Fix\data\Patria_02_ext_wd.paa",
					"\UNIF_Patria_Fix\data\Patria_Turret_wd.paa",
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
				displayName="Desert";
				author="Phantom hawk";
				textures[]=
				{
					"\UNIF_Patria_Fix\data\Patria_01_ext_wd.paa",
					"\UNIF_Patria_Fix\data\Patria_02_ext_wd.paa",
					"\UNIF_Patria_Fix\data\Patria_Turret_wd.paa",
					"\UNIF_Patria_Fix\data\camonet_desert_CO.paa",
					"\UNIF_Patria_Fix\data\cage_desert_CO.paa"
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
			class muzzle_rot
			{
				source="ammorandom";
				weapon="autocannon_40mm_CTWS";
			};
			class muzzle_hide
			{
				source="reload";
				weapon="autocannon_40mm_CTWS";
			};
			class revolving_cannon
			{
				source="revolving";
				weapon="autocannon_40mm_CTWS";
			};
			class HideTurret
			{
				source="user";
				initPhase=1;
				animPeriod=0.001;
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
			class HitSLAT_top_back_src
			{
				source="Hit";
				hitpoint="HitSLAT_top_back";
				raw=1;
			};
			class HitSLAT_top_right_src
			{
				source="Hit";
				hitpoint="HitSLAT_top_right";
				raw=1;
			};
			class HitSLAT_top_left_src
			{
				source="Hit";
				hitpoint="HitSLAT_top_left";
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
			"showSLATHull",
			0
		};
		driverCanSee="4+8+2+32+16";
		gunnerCanSee="4+2+8+32+16";
		weapons[]=
		{
			"TruckHorn"
		};
		magazines[]={};
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
	class Patria_base_Medical_F: Patria_cannon_F
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
			class Blu_Woodland
			{
				displayName="Woodland Medical";
				author="Phantom hawk";
				textures[]=
				{
					"\UNIF_Patria_Fix\data\Patria_01_med_ext_wd.paa",
					"\UNIF_Patria_Fix\data\Patria_02_ext_wd.paa",
					"\UNIF_Patria_Fix\data\Patria_Turret_wd.paa",
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
				displayName="Desert Medical";
				author="Phantom hawk";
				textures[]=
				{
					"\UNIF_Patria_Fix\data\Patria_01_med_ext_d.paa",
					"\UNIF_Patria_Fix\data\Patria_02_ext_d.paa",
					"\UNIF_Patria_Fix\data\Patria_Turret_d.paa",
					"\UNIF_Patria_Fix\data\camonet_desert_CO.paa",
					"\UNIF_Patria_Fix\data\cage_desert_CO.paa"
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
			class muzzle_rot
			{
				source="ammorandom";
				weapon="autocannon_40mm_CTWS";
			};
			class muzzle_hide
			{
				source="reload";
				weapon="autocannon_40mm_CTWS";
			};
			class revolving_cannon
			{
				source="revolving";
				weapon="autocannon_40mm_CTWS";
			};
			class HideTurret
			{
				source="user";
				initPhase=1;
				animPeriod=0.001;
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
			class HitSLAT_top_back_src
			{
				source="Hit";
				hitpoint="HitSLAT_top_back";
				raw=1;
			};
			class HitSLAT_top_right_src
			{
				source="Hit";
				hitpoint="HitSLAT_top_right";
				raw=1;
			};
			class HitSLAT_top_left_src
			{
				source="Hit";
				hitpoint="HitSLAT_top_left";
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
			"showSLATHull",
			0
		};
		driverCanSee="4+8+2+32+16";
		gunnerCanSee="4+2+8+32+16";
		weapons[]=
		{
			"TruckHorn"
		};
		magazines[]={};
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
	class Patria_WD: Patria_cannon_F
	{
		author="Phantom hawk";
		scope=2;
		ScopeCurator=2;
		displayName="Patria AMV";
		picture="\A3\armor_f_beta\APC_Wheeled_01\Data\UI\APC_Wheeled_01_ACRV_ca.paa";
		Icon="\A3\armor_f_beta\APC_Wheeled_01\Data\UI\map_amw_CA.paa";
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
			"CamoNet",
			"CamoSlat"
		};
		hiddenSelectionsTextures[]=
		{
			"\UNIF_Patria_Fix\data\Patria_01_ext_wd.paa",
			"\UNIF_Patria_Fix\data\Patria_02_ext_wd.paa",
			"\UNIF_Patria_Fix\data\Patria_Turret_wd.paa",
			"a3\Armor_F\Data\camonet_green_CO.paa",
			"A3\armor_f\data\cage_G1_co.paa"
		};
	};
	class Patria_D: Patria_cannon_F
	{
		author="Phantom hawk";
		scope=2;
		scopeCurator=2;
		displayName="Patria AMV";
		picture="\A3\armor_f_beta\APC_Wheeled_01\Data\UI\APC_Wheeled_01_ACRV_ca.paa";
		Icon="\A3\armor_f_beta\APC_Wheeled_01\Data\UI\map_amw_CA.paa";
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
			"CamoNet",
			"CamoSlat"
		};
		hiddenSelectionsTextures[]=
		{
			"\UNIF_Patria_Fix\data\Patria_01_ext_d.paa",
			"\UNIF_Patria_Fix\data\Patria_02_ext_d.paa",
			"\UNIF_Patria_Fix\data\Patria_Turret_d.paa",
			"\UNIF_Patria_Fix\data\camonet_desert_CO.paa",
			"\UNIF_Patria_Fix\data\cage_desert_CO.paa"
		};
	};
	class Patria_unarmed_WD: Patria_base_unarmed_F
	{
		crew="B_crew_F";
		typicalCargo[]=
		{
			"B_soldier_F"
		};
		scope=2;
		scopeCurator=2;
		displayName="Patria AMV Transport";
		picture="\UNIF_Patria_Fix\data\APC_Wheeled_01_base_ca.paa";
		Icon="\A3\armor_f_beta\APC_Wheeled_01\Data\UI\map_amw_medevac_CA.paa";
		class EventHandlers
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
			"CamoNet",
			"CamoSlat"
		};
		hiddenSelectionsTextures[]=
		{
			"\UNIF_Patria_Fix\data\Patria_01_ext_wd.paa",
			"\UNIF_Patria_Fix\data\Patria_02_ext_wd.paa",
			"\UNIF_Patria_Fix\data\Patria_Turret_wd.paa",
			"a3\Armor_F\Data\camonet_green_CO.paa",
			"A3\armor_f\data\cage_G1_co.paa"
		};
	};
	class Patria_unarmed_D: Patria_base_unarmed_F
	{
		crew="B_crew_F";
		typicalCargo[]=
		{
			"B_soldier_F"
		};
		scope=2;
		scopeCurator=2;
		displayName="Patria AMV Transport";
		picture="\UNIF_Patria_Fix\data\APC_Wheeled_01_base_ca.paa";
		Icon="\A3\armor_f_beta\APC_Wheeled_01\Data\UI\map_amw_medevac_CA.paa";
		class EventHandlers
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
			"CamoNet",
			"CamoSlat"
		};
		hiddenSelectionsTextures[]=
		{
			"\UNIF_Patria_Fix\data\Patria_01_ext_d.paa",
			"\UNIF_Patria_Fix\data\Patria_02_ext_d.paa",
			"\UNIF_Patria_Fix\data\Patria_Turret_d.paa",
			"\UNIF_Patria_Fix\data\camonet_desert_CO.paa",
			"\UNIF_Patria_Fix\data\cage_desert_CO.paa"
		};
	};
	class Patria_medical_WD: Patria_base_Medical_F
	{
		crew="B_crew_F";
		typicalCargo[]=
		{
			"B_soldier_F"
		};
		scope=2;
		scopeCurator=2;
		displayName="Patria AMV Medical";
		picture="\UNIF_Patria_Fix\data\APC_Wheeled_01_base_ca.paa";
		Icon="\A3\armor_f_beta\APC_Wheeled_01\Data\UI\map_amw_medevac_CA.paa";
		vehicleClass="Support";
		supplyRadius=10;
		attendant=1;
		class EventHandlers
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
			"CamoNet",
			"CamoSlat"
		};
		hiddenSelectionsTextures[]=
		{
			"\UNIF_Patria_Fix\data\Patria_01_med_ext_wd.paa",
			"\UNIF_Patria_Fix\data\Patria_02_ext_wd.paa",
			"\UNIF_Patria_Fix\data\Patria_Turret_wd.paa",
			"a3\Armor_F\Data\camonet_green_CO.paa",
			"A3\armor_f\data\cage_G1_co.paa"
		};
	};
	class Patria_medical_D: Patria_base_Medical_F
	{
		crew="B_crew_F";
		typicalCargo[]=
		{
			"B_soldier_F"
		};
		scope=2;
		scopeCurator=2;
		displayName="Patria AMV Medical";
		picture="\UNIF_Patria_Fix\data\APC_Wheeled_01_base_ca.paa";
		Icon="\A3\armor_f_beta\APC_Wheeled_01\Data\UI\map_amw_medevac_CA.paa";
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
			"CamoNet",
			"CamoSlat"
		};
		hiddenSelectionsTextures[]=
		{
			"\UNIF_Patria_Fix\data\Patria_01_med_ext_d.paa",
			"\UNIF_Patria_Fix\data\Patria_02_ext_d.paa",
			"\UNIF_Patria_Fix\data\Patria_Turret_d.paa",
			"\UNIF_Patria_Fix\data\camonet_desert_CO.paa",
			"\UNIF_Patria_Fix\data\cage_desert_CO.paa"
		};
	};
};
