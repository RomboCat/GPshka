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
class CfgMagazines
{
class 1Rnd_HE_Grenade_shell;
class rhs_VOG25: 1Rnd_HE_Grenade_shell;
class rhs_VG40OP_white: rhs_VOG25;
class rhs_VG40OP_green: rhs_VG40OP_white {
	displayName	= "ВГ-400П";
	displayNameShort = "Зеленый";
	descriptionShort = Тип: Осветительная граната<br/>Взрыватель: Запал<br/>Используется: ГП-25
};
class rhs_VG40OP_red: rhs_VG40OP_white {
	displayName	= "ВГ-400П";
	displayNameShort = "Красный";
	descriptionShort = Тип: Осветительная граната<br/>Взрыватель: Запал<br/>Используется: ГП-25
};
};
