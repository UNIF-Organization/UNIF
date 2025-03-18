class CfgPatches
{
	class AA_weapons
	{
		requiredVersion=1;
		author="Phantom hawk";
		authorUrl="";
		requiredAddons[]=
		{
			"A3_Static_F",
			"A3_Static_F_Gamma",
			"A3_Weapons_F_Exp",
			"A3_Weapons_F_Launchers_Titan"
		};
		units[]={};
		weapons[]=
		{
			"missiles_titan_aa_2Rnd_Pan"
		};
		magazines[]=
		{
			"2Rnd_Titan_long_missiles_Pan"
		};
	};
};
class CfgMagazines
{
	class 4Rnd_Titan_long_missiles;
	class 2Rnd_Titan_long_missiles_Pan: 4Rnd_Titan_long_missiles
	{
		author="$STR_A3_Bohemia_Interactive";
		count=2;
	};
};
class CfgWeapons
{
    class missiles_titan;
    class missiles_titan_aa_2Rnd_Pan: missiles_titan
	{
		magazines[]=
		{
			"2Rnd_Titan_long_missiles_Pan"
		};
	};
};