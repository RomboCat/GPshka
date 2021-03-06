class CfgPatches {
	class gp_reconfig {
		author = "Cat";
		url = "nety(";
		requiredVersion = 0.1;
		requiredAddons[] = {"rbcmods_reconfig"};
		units[] = {};
		weapons[] = {};
	};
};
class CfgAmmo
{
	class F_40mm_white;
	class rhs_VG40OP_purple: F_40mm_white
	{
		lightColor [] = {1, 0, 1, 0.5};
	};
	class rhs_VG40OP_test: F_40mm_white
	{
		lightColor [] = {0.4, 0.3, 0.1, 0.5};
	};
}
class CfgMagazines
{
class 1Rnd_HE_Grenade_shell;
class rhs_VOG25: 1Rnd_HE_Grenade_shell{};
class rhs_VG40OP_white: rhs_VOG25{};
class rhs_VG40OP_green: rhs_VG40OP_white {
	displayName	= "ВГ-400П (зеленый)";
	displayNameShort = "ВГ-400П";
	descriptionShort = Тип: Осветительная граната<br/>Взрыватель: Запал (3 секунды)<br/>Используется: ГП-25
};
class rhs_VG40OP_red: rhs_VG40OP_white {
	displayName	= "ВГ-400П (красный)";
	displayNameShort = "ВГ-400П";
	descriptionShort = Тип: Осветительная граната<br/>Взрыватель: Запал (3 секунды)<br/>Используется: ГП-25
};
class rhs_VG40OP_purpleCat: rhs_VG40OP_white
{
	ammo = "rhs_VG40OP_purple";
	displayName	= "ВГ-400П (фиолетовый)";
	displayNameShort = "ВГ-400П";
	descriptionShort = "Тип: Осветительная граната<br/>Взрыватель: Запал (3 секунды)<br/>Используется: ГП-25";
};
class rhs_VG40OP_testCat: rhs_VG40OP_white
{
	ammo = "rhs_VG40OP_test";
	displayName	= "ВГ-400П (тест)";
	displayNameShort = "ВГ-400П";
	descriptionShort = "Тип: Осветительная граната<br/>Взрыватель: Запал (3 секунды)<br/>Используется: ГП-25";
};
};
class CfgMagazineWells
{
	class rbcmods_GL_GP25{
	rhs_afrfCat[] = {
	"rhs_VG40OP_purpleCat",
	"rhs_VG40OP_testCat"
	};
};
};
