class CfgPatches 
{
	class UNIF_UN_Faction_Base 
	{
        author = "UNIF Mod Team";
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.0;
		requiredAddons[] = {};
	};
};


//************************************************************************************************************************************************************************************************
//*****        Factions                  *********************************************************************************************************************************************************
//************************************************************************************************************************************************************************************************
class cfgFactionClasses // Factions are made using this cfg
{ 
    class UNIF_Faction_UNIF_UN_BLUFOR //unique name
    { 
        displayName = "[UNIF] United Nations Intervention Force"; 
        priority = 1; // Position in list. 
        side = 1; // Opfor = 0, Blufor = 1, Indep = 2. 
        icon =  "\UNIF_Patches\data\UNIF_base.paa"; //Custom Icon 
    }; 
};


//************************************************************************************************************************************************************************************************
//*****        Editor Category                  *********************************************************************************************************************************************************
//************************************************************************************************************************************************************************************************

class CfgEditorCategories
{ 
    class UNIF_Faction_edcat_props
    {
        displayname="[UNIF] United Nations Intervention Force";
    };
};

class CfgEditorSubcategories
{
    class UNIF_Faction_edcat_props
    {
        displayname="[UNIF] United Nations Intervention Force";
    };

    class UNIF_Faction_edcat_ammo
    {
        displayname="Ammo";
    };

    class UNIF_Faction_edcat_NATO_Men
    {
        displayname="Men (West)";
    };
    class UNIF_Faction_edcat_RUS_Men
    {
        displayname="Men (East)";
    };
    class UNIF_Faction_edcat_NATO_Cars
    {
        displayname="Cars (West)";
    };
    class UNIF_Faction_edcat_RUS_Cars
    {
        displayname="Cars (East)";
    };
    class UNIF_Faction_edcat_NATO_Helicopters
    {
        displayname="Helicopters (West)";
    };
    class UNIF_Faction_edcat_RUS_Helicopters
    {
        displayname="Helicopters (East)";
    };
    class UNIF_Faction_edcat_NATO_Tanks
    {
        displayname="Tanks (West)";
    };
    class UNIF_Faction_edcat_RUS_Tanks
    {
        displayname="Tanks (East)";
    };
    class UNIF_Faction_edcat_NATO_Jets
    {
        displayname="Planes (West)";
    };
    class UNIF_Faction_edcat_RUS_Jets
    {
        displayname="Planes (East)";
    };
    class UNIF_Faction_edcat_NATO_APCs
    {
        displayname="APCs (West)";
    };
    class UNIF_Faction_edcat_RUS_APCs
    {
        displayname="APCs (East)";
    };
    class UNIF_Faction_edcat_NATO_Anti_Air
    {
        displayname="Anti-Air (West)";
    };
    class UNIF_Faction_edcat_RUS_Anti_Air
    {
        displayname="Anti-Air (East)";
    };
    class UNIF_Faction_edcat_NATO_Turrets
    {
        displayname="Turrets (West)";
    };
    class UNIF_Faction_edcat_RUS_Turrets
    {
        displayname="Turrets (East)";
    };
    class UNIF_Faction_edcat_NATO_Trucks
    {
        displayname="Trucks (West)";
    };
    class UNIF_Faction_edcat_RUS_Trucks
    {
        displayname="Trucks (East)";
    };
    class UNIF_Faction_edcat_NATO_MRAPs
    {
        displayname="MRAPs (West)";
    };
    class UNIF_Faction_edcat_RUS_MRAPs
    {
        displayname="MRAPs (East)";
    };
};  