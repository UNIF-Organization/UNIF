class CfgPatches 
{ 
    class UNIF_Join
    { 
       units[] = 
        {
            
        }; 
        weapons[] = 
        {
        
        }; 
        requiredVersion = 0.1; 
        requiredAddons[] = {"A3_Characters_F",}; 
    }; 
}; 

//************************************************************************************************************************************************************************************************
//*****        Server                  *********************************************************************************************************************************************************
//************************************************************************************************************************************************************************************************

class RscStandardDisplay;
class RscDisplayMain: RscStandardDisplay
{
    class Spotlight
    {
        class AwesomeServer
        {
            text = "UNIF SERVER"; // Text displayed on the square button, converted to upper-case
            textIsQuote = 0; // 1 to add quotation marks around the text
            picture = "\UNIF_Join\button.paa"; // Square picture, ideally 512x512
            video = "\UNIF_Join\UNIFJOINVIDEO.ogv"; // Video played on mouse hover
            action = "0 = [_this, '162.222.196.155', '2325', 'UNIF'] execVM '\UNIF_Join\joinServer.sqf';";
            actionText = "Ready for deployment"; // Text displayed in top left corner of on-hover white frame
            condition = "true"; // Condition for showing the spotlight
        };
    };
};

