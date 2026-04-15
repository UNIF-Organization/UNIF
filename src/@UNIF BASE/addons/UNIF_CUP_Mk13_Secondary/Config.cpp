class CfgPatches
{
	class CUP_Weapons_GrenadeLaunchers_Secondary
	{
		units[]={};
		weapons[]=
		{
			"CUP_glaunch_Base_Secondary",
			"CUP_glaunch_Mk13_Secondary"
		};
		requiredVersion=2.1400001;
		requiredAddons[]=
		{
			"CUP_Weapons_WeaponsCore",
			"CUP_Weapons_Ammunition",
			"CUP_Weapons_Sounds"
		};
		version=1.1799999;
		versionStr="1.18.1.0";
		versionAr[]={1,18,1,0};
	};
};

class CfgGesturesMale
{
	class Default;
	class States
	{
		class GestureReloadBase;
		class vs_GestureReloadM320_Pistol_Prone: Default
		{
			mask="handsWeapon_pst";
			looped=0;
			file="\A3\anims_f\Data\Anim\Sdr\gst\GestureReloadKatibaUGL";
			speed=0.30000001;
			leftHandIKCurve[]={0.014,1,0.041999999,0,0.94999999,0,0.98500001,1};
		};
		class vs_GestureReloadM320_Pistol: Default
		{
			looped=0;
			mask="handsWeapon_pst";
			file="\A3\anims_f\Data\Anim\Sdr\gst\GestureReloadKatibaUGL";
			speed=0.30000001;
			leftHandIKCurve[]={0.014,1,0.041999999,0,0.94999999,0,0.98500001,1};
		};
		class vs_GestureReloadM320_Pistol_Context: vs_GestureReloadM320_Pistol
		{
			mask="handsWeapon_pst_context";
		};
	};
};

class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class SlotInfo;
class CowsSlot;
class PointerSlot;
class CUP_DovetailMount;
class CUP_EastMuzzleSlot9mm;
class CUP_PicatinnySideMount;
class CfgWeaponCursors
{
	class gl;
	class cup_gl_rifle: gl
	{
		author="Community Upgrade Project";
	};
};
class CfgWeapons
{
	class Rifle;
	class ItemCore;
	class InventoryOpticsItem_Base_F;
	class InventoryFlashLightItem_Base_F;
	class InventoryMuzzleItem_Base_F;
	class UGL_F;
	class Pistol;
	class Pistol_Base_F: Pistol
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class CUP_glaunch_Base_Secondary: Pistol_Base_F
	{
		author="Community Upgrade Project";
		dlc="CUP_Weapons";
		scope=0;
		weaponInfoType="RscWeaponZeroing";
		UiPicture="\A3\Weapons_F\Data\UI\icon_gl_CA.paa";
		cursor="cup_gl_rifle";
		magazineWell[]=
		{
			"CBA_40mm_M203"
		};
		magazines[]=
		{
			"CUP_1Rnd_HE_M203",
			"CUP_1Rnd_HEDP_M203",
			"1Rnd_HE_Grenade_shell",
			"CUP_1Rnd_StarCluster_White_M203",
			"CUP_1Rnd_StarCluster_Red_M203",
			"CUP_1Rnd_StarCluster_Green_M203",
			"CUP_1Rnd_StarFlare_White_M203",
			"CUP_1Rnd_StarFlare_Red_M203",
			"CUP_1Rnd_StarFlare_Green_M203",
			"CUP_FlareWhite_M203",
			"CUP_FlareGreen_M203",
			"CUP_FlareRed_M203",
			"CUP_FlareYellow_M203",
			"CUP_1Rnd_Smoke_M203",
			"CUP_1Rnd_SmokeRed_M203",
			"CUP_1Rnd_SmokeGreen_M203",
			"CUP_1Rnd_SmokeYellow_M203",
			"UGL_FlareWhite_F",
			"UGL_FlareGreen_F",
			"UGL_FlareRed_F",
			"UGL_FlareYellow_F",
			"UGL_FlareCIR_F",
			"1Rnd_Smoke_Grenade_shell",
			"1Rnd_SmokeRed_Grenade_shell",
			"1Rnd_SmokeGreen_Grenade_shell",
			"1Rnd_SmokeYellow_Grenade_shell",
			"1Rnd_SmokePurple_Grenade_shell",
			"1Rnd_SmokeBlue_Grenade_shell",
			"1Rnd_SmokeOrange_Grenade_shell"
		};
		cameraDir="GL look";
		memoryPointCamera="GL eye";
		changeFiremodeSound[]=
		{
			"A3\sounds_f\weapons\closure\firemode_changer_2.wss",
			0.25118864,
			1,
			10
		};
		modes[]=
		{
			"Single"
		};
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				soundSetShot[]=
				{
					"CUP_GrenadeLaunchers_Shot_SoundSet",
					"UGL_Tail_SoundSet",
					"UGL_InteriorTail_SoundSet"
				};
				weaponSoundEffect="DefaultRifle";
				begin1[]=
				{
					"CUP\Weapons\CUP_Weapons_GrenadeLaunchers\data\sfx\g_launcher.wss",
					1,
					1,
					200
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
				class SoundTails
				{
					class TailInterior
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_interior.wss",
							2.2387211,
							1,
							1800
						};
						frequency=1;
						volume="interior";
					};
					class TailTrees
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_trees.wss",
							1,
							1,
							1800
						};
						frequency=1;
						volume="(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_forest.wss",
							1,
							1,
							1800
						};
						frequency=1;
						volume="(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_meadows.wss",
							1,
							1,
							1800
						};
						frequency=1;
						volume="(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_houses.wss",
							1,
							1,
							1800
						};
						frequency=1;
						volume="(1-interior/1.4)*houses";
					};
				};
			};
		};
		opticsZoomMin=0.25;
		opticsZoomMax=1.25;
		opticsZoomInit=0.75;
		autoReload=0;
		autoAimEnabled=0;
		reloadAction="vs_GestureReloadM320_Pistol";
		reloadMagazineSound[]=
		{
			"A3\sounds_f\Weapons\grenades\ugl_reload2.wss",
			1,
			1,
			10
		};
		drySound[]=
		{
			"A3\sounds_f\Weapons\other\sfx5.wss",
			0.56234133,
			1,
			10
		};
		ffMagnitude=0.1;
		ffFrequency=1;
		ffCount=1;
		dispersion=0.0070000002;
		aiDispersionCoefY=6;
		muzzlePos="usti granatometu";
		muzzleEnd="konec granatometu";
		cartridgePos="";
		cartridgeVel="";
		minRange=30;
		minRangeProbab=0.1;
		midRange=200;
		midRangeProbab=0.69999999;
		maxRange=400;
		maxRangeProbab=0.050000001;
		recoil="recoil_mmg_02";
	};

	class CUP_glaunch_Mk13_Secondary: CUP_glaunch_Base_Secondary
	{
		author="Community Upgrade Project";
		dlc="CUP_Weapons";
		scope=2;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\CUP\Weapons\CUP_Weapons_GrenadeLaunchers\data\anim\Mk13.rtm"
		};
		picture="\CUP\Weapons\CUP_Weapons_GrenadeLaunchers\data\ui\gear_mk13_X_ca.paa";
		model="\CUP\Weapons\CUP_Weapons_GrenadeLaunchers\CUP_Mk13.p3d";
		magazineWell[]=
		{
			"CBA_40mm_M203",
			"CBA_40mm_EGLM"
		};
		displayName="Mk 13";
		type=2;
		class Library
		{
			libTextDesc="The EGLM (Enhanced Grenade Launcher Module) is an 40mm grenade launcher created for both Mk. 16 assault rifle and Mk. 17 battle rifle. &lt;br/&gt;The main advantage of EGLM over M203 are a double action trigger and a swing out chamber.";
		};
		descriptionShort="Grenade launcher";
		cameraDir="OP_look";
		discreteDistance[]={50,75,100,150,200,250,300,350,400};
		discreteDistanceCameraPoint[]=
		{
			"OP_eye_50",
			"OP_eye_75",
			"OP_eye_100",
			"OP_eye_150",
			"OP_eye_200",
			"OP_eye_250",
			"OP_eye_300",
			"OP_eye_350",
			"OP_eye_400"
		};
		discreteDistanceInitIndex=1;
		reloadAction="\A3\anims_f\Data\Anim\Sdr\gst\GestureReloadKatibaUGL";
		editorSubcategory="EdSubcat_Pistols";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=59.200001;
			class MuzzleSlot : SlotInfo
			{
				compatibleItems[] = {};
			};
			class CowsSlot
			{
			};
			class PointerSlot: CUP_PicatinnySideMount
			{
				iconPosition[]={0.19,0.41};
				iconScale=0.2;
				iconPicture="\A3\Weapons_F\Data\UI\attachment_side.paa";
				iconPinPoint="Center";
			};
		};
		aimTransitionSpeed=1.1;
	};
};
