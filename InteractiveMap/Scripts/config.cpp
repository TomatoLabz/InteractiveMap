class CfgPatches
{
	class MT_Scripts
	{
		requiredAddons[] = { "DZ_Scripts" };
	};
};

class CfgAddons
{
    class PreloadAddons
    {
        class InteractiveMap
        {
            list[]={};
        };
    };
};

class CfgMods
{
    class InteractiveMap
    {
        name="";
        dir="InteractiveMap";
        picture="";
        action="";
        author="";
        overview = "";
		inputs = "InteractiveMap/Scripts/Inputs.xml";
		type = "mod";
        defines[] = {};
		dependencies[] =
		{
			"Game", "World", "Mission"
		};

        class defs
		{
			class imageSets
			{
				files[]= {};
			};
			class widgetStyles
			{
				files[]= {};
			};

			class engineScriptModule 
			{ 
				files[] = { "InteractiveMap/Scripts/1_Core"};
			};

			class gameScriptModule
			{
				files[] = { "InteractiveMap/Scripts/3_Game" };
			};
			class worldScriptModule
			{
				files[] = { "InteractiveMap/Scripts/4_World" };
			};

			class missionScriptModule 
			{
				files[] = { "InteractiveMap/Scripts/5_Mission" };
			};
		};
    };
};
