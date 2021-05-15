class CfgPatches
{
	class Expansion_Custom_Loading_Screen
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DayZExpansion_Scripts"
		};
	};
};
class CfgMods
{
	class Expansion_Custom_Loading_Screen
	{
		dir="ExpansionCustomLoadingScreen";
		picture=""; 
		action="";
		hideName=1;
		hidePicture=1;
		name="Custom Loading Screen";
		credits=""; 
		author="";
		authorID="";  
		version="1";
		extra=0;
		type="mod";
		dependencies[]=
		{
			"Game"
		};
		class defs
		{
			class gameScriptModule
			{
				value="";
				files[]=
				{
					"ExpansionCustomLoadingScreen/scripts/3_Game"
				};
			}; 
			
		};
	};
};