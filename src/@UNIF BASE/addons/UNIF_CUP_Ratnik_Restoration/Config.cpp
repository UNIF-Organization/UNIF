class CfgPatches
{
	class UNIF_CUP_Ratnik_Restoration
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CUP_Creatures_Military_Russia","CUP_Weapons_Backpacks"};
	};
};

class CfgVehicles
{
	class Bag_Base;

	class CUP_O_RUS_Patrol_bag_Green: Bag_Base
	{
		scope = 2;
		displayName = "Patrol bag (Legacy, Green)";
	};

	class CUP_O_RUS_Patrol_bag_Green_Shovel: Bag_Base
	{
		scope = 2;
		displayName = "Patrol bag (Legacy, Green / Shovel)";
	};

	class CUP_O_RUS_Patrol_bag_Desert: Bag_Base
	{
		scope = 2;
		displayName = "Patrol bag (Legacy, Pink Desert)";
	};

	class CUP_O_RUS_Patrol_bag_Desert_Shovel: Bag_Base
	{
		scope = 2;
		displayName = "Patrol bag (Legacy, Pink Desert / Shovel)";
	};

	class CUP_O_RUS_Patrol_bag_Winter: Bag_Base
	{
		scope = 2;
		displayName = "Patrol bag (Legacy, Winter)";
	};
};

class cfgWeapons
{
	class ItemCore;

	class CUP_U_O_RUS_Ratnik_Pink: ItemCore
	{
		scope = 2;
		displayName = "Masking suit 6Sh122 (Legacy, Pink desert)";
	};

	class CUP_U_O_RUS_Ratnik_Winter: ItemCore
	{
		scope = 2;
		displayName = "Winter masking suit 6Sh119 (Legacy)";
	};
	class CUP_H_RUS_6B47_v2_Summer;

	class CUP_H_RUS_6B47_v2_Desert: CUP_H_RUS_6B47_v2_Summer
	{
		scope = 2;
		displayName = "6B47 (Legacy, Pink desert)";
	};

	class CUP_H_RUS_6B47_v2_GogglesClosed_Desert: CUP_H_RUS_6B47_v2_Summer
	{
		scope = 2;
		displayName = "6B47 (Legacy, Pink desert/Goggles closed)";
	};

	class CUP_H_RUS_6B47_v2_GogglesDown_Desert: CUP_H_RUS_6B47_v2_Summer
	{
		scope = 2;
		displayName = "6B47 (Legacy, Pink desert/Goggles down)";
	};

	class CUP_H_RUS_6B47_v2_GogglesUp_Desert: CUP_H_RUS_6B47_v2_Summer
	{
		scope = 2;
		displayName = "6B47 (Legacy, Pink desert/Goggles up)";
	};

	class CUP_H_RUS_6B47_v2_Winter: CUP_H_RUS_6B47_v2_Summer
	{
		scope = 2;
		displayName = "6B47 (Legacy, Winter)";
	};

	class CUP_H_RUS_6B47_v2_GogglesClosed_Winter: CUP_H_RUS_6B47_v2_Summer
	{
		scope = 2;
		displayName = "6B47 (Legacy, Winter/Goggles closed)";
	};

	class CUP_H_RUS_6B47_v2_GogglesDown_Winter: CUP_H_RUS_6B47_v2_Summer
	{
		scope = 2;
		displayName = "6B47 (Legacy, Winter/Goggles down)";
	};

	class CUP_H_RUS_6B47_v2_GogglesUp_Winter: CUP_H_RUS_6B47_v2_Summer
	{
		scope = 2;
		displayName = "6B47 (Legacy, Winter/Goggles up)";
	};

	class CUP_Vest_RUS_Camo_RatnikV2_Base: ItemCore {};

	class CUP_Vest_RUS_6B45_Sh117_Green: CUP_Vest_RUS_Camo_RatnikV2_Base
	{
		scope = 2;
		displayName = "6B45 (Legacy, Green)";
	};

	class CUP_Vest_RUS_6B45_Sh117_Del_Green: CUP_Vest_RUS_Camo_RatnikV2_Base
	{
		scope = 2;
		displayName = "6B45 (Legacy, Green/Variant 2)";
	};

	class CUP_Vest_RUS_6B45_Sh117_Nut_Green: CUP_Vest_RUS_Camo_RatnikV2_Base
	{
		scope = 2;
		displayName = "6B45 (Legacy, Green/Variant 3)";
	};

	class CUP_Vest_RUS_6B45_Sh117_Del_Nut_Green: CUP_Vest_RUS_Camo_RatnikV2_Base
	{
		scope = 2;
		displayName = "6B45 (Legacy, Green/Variant 4)";
	};

	class CUP_Vest_RUS_6B45_Sh117_Full_Green: CUP_Vest_RUS_Camo_RatnikV2_Base
	{
		scope = 2;
		displayName = "6B45 (Legacy, Green/Variant 5)";
	};

	class CUP_Vest_RUS_6B45_Sh117_PKP_Green: CUP_Vest_RUS_Camo_RatnikV2_Base
	{
		scope = 2;
		displayName = "6B45 (Legacy, Green/PKP)";
	};

	class CUP_Vest_RUS_6B45_Sh117_PKP_Del_Green: CUP_Vest_RUS_Camo_RatnikV2_Base
	{
		scope = 2;
		displayName = "6B45 (Legacy, Green/PKP/Variant 2)";
	};

	class CUP_Vest_RUS_6B45_Sh117_PKP_Nut_Green: CUP_Vest_RUS_Camo_RatnikV2_Base
	{
		scope = 2;
		displayName = "6B45 (Legacy, Green/PKP/Variant 3)";
	};

	class CUP_Vest_RUS_6B45_Sh117_PKP_Del_Nut_Green: CUP_Vest_RUS_Camo_RatnikV2_Base
	{
		scope = 2;
		displayName = "6B45 (Legacy, Green/PKP/Variant 4)";
	};

	class CUP_Vest_RUS_6B45_Sh117_PKP_Full_Green: CUP_Vest_RUS_Camo_RatnikV2_Base
	{
		scope = 2;
		displayName = "6B45 (Legacy, Green/PKP/Variant 5)";
	};

	class CUP_Vest_RUS_6B45_Sh117_VOG_Green: CUP_Vest_RUS_Camo_RatnikV2_Base
	{
		scope = 2;
		displayName = "6B45 (Legacy, Green/VOG)";
	};

	class CUP_Vest_RUS_6B45_Sh117_VOG_Del_Green: CUP_Vest_RUS_Camo_RatnikV2_Base
	{
		scope = 2;
		displayName = "6B45 (Legacy, Green/VOG/Variant 2)";
	};

	class CUP_Vest_RUS_6B45_Sh117_VOG_Nut_Green: CUP_Vest_RUS_Camo_RatnikV2_Base
	{
		scope = 2;
		displayName = "6B45 (Legacy, Green/VOG/Variant 3)";
	};

	class CUP_Vest_RUS_6B45_Sh117_VOG_Del_Nut_Green: CUP_Vest_RUS_Camo_RatnikV2_Base
	{
		scope = 2;
		displayName = "6B45 (Legacy, Green/VOG/Variant 4)";
	};

	class CUP_Vest_RUS_6B45_Sh117_VOG_Full_Green: CUP_Vest_RUS_Camo_RatnikV2_Base
	{
		scope = 2;
		displayName = "6B45 (Legacy, Green/VOG/Variant 5)";
	};

	class CUP_Vest_RUS_6B45_Sh117_Desert: CUP_Vest_RUS_Camo_RatnikV2_Base
	{
		scope = 2;
		displayName = "6B45 (Legacy, Pink desert)";
	};

	class CUP_Vest_RUS_6B45_Sh117_Del_Desert: CUP_Vest_RUS_Camo_RatnikV2_Base
	{
		scope = 2;
		displayName = "6B45 (Legacy, Pink desert/Variant 2)";
	};

	class CUP_Vest_RUS_6B45_Sh117_Nut_Desert: CUP_Vest_RUS_Camo_RatnikV2_Base
	{
		scope = 2;
		displayName = "6B45 (Legacy, Pink desert/Variant 3)";
	};

	class CUP_Vest_RUS_6B45_Sh117_Del_Nut_Desert: CUP_Vest_RUS_Camo_RatnikV2_Base
	{
		scope = 2;
		displayName = "6B45 (Legacy, Pink desert/Variant 4)";
	};

	class CUP_Vest_RUS_6B45_Sh117_Full_Desert: CUP_Vest_RUS_Camo_RatnikV2_Base
	{
		scope = 2;
		displayName = "6B45 (Legacy, Pink desert/Variant 5)";
	};

	class CUP_Vest_RUS_6B45_Sh117_PKP_Desert: CUP_Vest_RUS_Camo_RatnikV2_Base
	{
		scope = 2;
		displayName = "6B45 (Legacy, Pink desert/PKP)";
	};

	class CUP_Vest_RUS_6B45_Sh117_PKP_Del_Desert: CUP_Vest_RUS_Camo_RatnikV2_Base
	{
		scope = 2;
		displayName = "6B45 (Legacy, Pink desert/PKP/Variant 2)";
	};

	class CUP_Vest_RUS_6B45_Sh117_PKP_Nut_Desert: CUP_Vest_RUS_Camo_RatnikV2_Base
	{
		scope = 2;
		displayName = "6B45 (Legacy, Pink desert/PKP/Variant 3)";
	};

	class CUP_Vest_RUS_6B45_Sh117_PKP_Del_Nut_Desert: CUP_Vest_RUS_Camo_RatnikV2_Base
	{
		scope = 2;
		displayName = "6B45 (Legacy, Pink desert/PKP/Variant 4)";
	};

	class CUP_Vest_RUS_6B45_Sh117_PKP_Full_Desert: CUP_Vest_RUS_Camo_RatnikV2_Base
	{
		scope = 2;
		displayName = "6B45 (Legacy, Pink desert/PKP/Variant 5)";
	};

	class CUP_Vest_RUS_6B45_Sh117_VOG_Desert: CUP_Vest_RUS_Camo_RatnikV2_Base
	{
		scope = 2;
		displayName = "6B45 (Legacy, Pink desert/VOG)";
	};

	class CUP_Vest_RUS_6B45_Sh117_VOG_Del_Desert: CUP_Vest_RUS_Camo_RatnikV2_Base
	{
		scope = 2;
		displayName = "6B45 (Legacy, Pink desert/VOG/Variant 2)";
	};

	class CUP_Vest_RUS_6B45_Sh117_VOG_Nut_Desert: CUP_Vest_RUS_Camo_RatnikV2_Base
	{
		scope = 2;
		displayName = "6B45 (Legacy, Pink desert/VOG/Variant 3)";
	};

	class CUP_Vest_RUS_6B45_Sh117_VOG_Del_Nut_Desert: CUP_Vest_RUS_Camo_RatnikV2_Base
	{
		scope = 2;
		displayName = "6B45 (Legacy, Pink desert/VOG/Variant 4)";
	};

	class CUP_Vest_RUS_6B45_Sh117_VOG_Full_Desert: CUP_Vest_RUS_Camo_RatnikV2_Base
	{
		scope = 2;
		displayName = "6B45 (Legacy, Pink desert/VOG/Variant 5)";
	};
};
