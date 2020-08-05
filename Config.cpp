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
class rhs_VG40OP_white;
class rhs_VG40OP_green: rhs_VG40OP_white {
	MAG_DESC_GP25_COLORED(ВГ-400П,зеленый,осветительная граната,запал (3 секунды));
};
class rhs_VG40OP_red: rhs_VG40OP_white {
	MAG_DESC_GP25_COLORED(ВГ-400П,красный,осветительная граната,запал (3 секунды));
};
