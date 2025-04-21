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
		author = "UNIF Dev Team"; //I dont think i need to explain this
	};
	class UNIF_Patch_2 //Classname (cannot be 2 with the same name)
	{
		displayName = "[UNIF] RAT (Pride)"; //How its named ingame
		texture = "\UNIF_Patches\data\UNIF_Pride.paa"; //location of the texture
		author = "UNIF Dev Team"; //I dont think i need to explain this
	};
	class UNIF_Patch_3 //Classname (cannot be 2 with the same name)
	{
		displayName = "[UNIF] UNIF (at Home)"; //How its named ingame
		texture = "\UNIF_Patches\data\PatchFridge.paa"; //location of the texture
		author = "UNIF Dev Team"; //I dont think i need to explain this
	};
	class UNIF_Patch_4 //Classname (cannot be 2 with the same name)
	{
		displayName = "[UNIF] UNIF"; //How its named ingame
		texture = "\UNIF_Patches\data\UNIF_Intervention.paa"; //location of the texture
		author = "UNIF Dev Team"; //I dont think i need to explain this
	};
};