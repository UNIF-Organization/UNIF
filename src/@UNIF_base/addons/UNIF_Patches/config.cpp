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
		displayName = "[UNIF] Test 1"; //How its named ingame
		texture = "\UNIF_Patches\data\unif_small.paa"; //location of the texture
		author = "UNIF Dev Team"; //I dont think i need to explain this
	};
};