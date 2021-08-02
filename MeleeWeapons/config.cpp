class CfgPatches
{
	class PhoenixWarAxe
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Characters",
			"DZ_Characters_headgear"
		};
	};
};
class CfgMods
{
	class PhoenixWarAxe
	{
		dir="PhoenixWarAxe";
		picture="";
		action="";
		hideName=1;
		hidePicture=1;
		name="PhoenixWarAxe";
		credits="RedPhoenix";
		author="RedPhoenix";
		authorID="0";
		version="1.0";
		extra=0;
		type="mod";
		dependencies[]=
		{
			""

		};
	};
};



class cfgVehicles
{
	class WoodAxe;
	class RP_WarAxe: WoodAxe
	{
		scope = 2;
		displayName = "War Axe";
		descriptionShort = "War Axe made from phoenix ashes.";
		model = "PhoenixMelee\Models\waraxe_m.p3d";
	};
};
