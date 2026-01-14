class CfgPatches
{
	class UNIF_Belt_Fix
	{
		requiredaddons[]=
		{
			"sp_fwa_machinegun_core"
		};
		requiredversion=0.1;
		units[]={};
		weapons[]={};
		magazines[]={};
	};
};
class CfgFunctions
{
	class GRCB
	{
		class Misc
		{
			class machinegunrested
			{
				tag="GRCB";
				description="switches hand animation when weapon is rested";
				file="UNIF_Belt_Fix\fncs\fnc_gpmgweaponrested.sqf";
			};
		};
	};
};
class RscInGameUI
{
	class RscWeaponZeroing;
	class GRCB_machinegun_animation: RscWeaponZeroing
	{
		onLoad="_this call GRCB_fnc_machinegunrested;";
	};
};
class CfgWeapons
{
	class sp_fwa_rifle_762_base;
	class sp_fwa_machinegun_base: sp_fwa_rifle_762_base
	{
		weaponInfoType="GRCB_machinegun_animation";
	};
};

