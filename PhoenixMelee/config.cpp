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

	class Machete;
	class RP_KabarPink: Machete
	{
		scope = 2;
		displayName = "Ka-Bar";
		descriptionShort = "Pink KaBar, It is made of 1095 carbon steel with a clip point blade.";
		model = "PhoenixMelee\Models\kabar.p3d";
	};

	//class RP_KabarRed: RP_KabarPink
	//{
	//	scope=2;
	//	displayName="Ka-Bar";
	//	descriptionShort="Red KaBar, It is made of 1095 carbon steel with a clip point blade.";
	//	hiddenSelections[] = {"camo"};
	//	hiddenSelectionsTextures[] = {"PhoenixMelee\Textures\redkabar_co.paa"};
	//};
};