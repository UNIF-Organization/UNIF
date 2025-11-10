class CfgPatches
{
	class UNIF_Patches
	{
		author = "UNIF Mod Team";
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.0;
		requiredAddons[] = {"A3_Weapons_F"};
	};
};

class CfgUnitInsignia
{
	class UNIF_Patch_1 //Classname (cannot be 2 with the same name)
	{
		displayName = "[UNIF] RAT"; //How its named ingame
		texture = "\UNIF_Patches\data\UNIF_base.paa"; //location of the texture
		author = "UNIF Dev Team";
	};
	class UNIF_Patch_2
	{
		displayName = "[UNIF] RAT (Pride)";
		texture = "\UNIF_Patches\data\UNIF_Pride.paa";
		author = "UNIF Dev Team";
	};
	class UNIF_Patch_3
	{
		displayName = "[UNIF] UNIF (at Home)";
		texture = "\UNIF_Patches\data\PatchFridge.paa";
		author = "UNIF Dev Team";
	};
	class UNIF_Patch_4
	{
		displayName = "[UNIF] UNIF";
		texture = "\UNIF_Patches\data\UNIF_Intervention.paa";
		author = "UNIF Dev Team";
	};
	class UNIF_Patch_5
	{
		displayName = "[UNIF] DOG";
		texture = "\UNIF_Patches\data\UNIF_Dog.paa";
		author = "UNIF Dev Team";
	}
};
