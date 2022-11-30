class CfgMods {
	class sGunplay_EDO {
		dir = "simonvic/sGunplay_EDO";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "sGunplay_EDO";
		credits = "simonvic";
		author = "simonvic";
		authorID = "0";
		version = "0.1";
		extra = 0;
		type = "mod";
		dependencies[] = {};
	};
};

class CfgPatches {
	class sGunplay_EDO {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {
			"sGunplay",
			"BO_Bravo4",
			"BO_ACOGOptic",
			"BO_DragonScope",
			"BO_EotechHHS",
			"BO_FedorovOptics",
			"BO_HAMROptic",
			"BO_HMOptic",
			"BO_LeupoldMk4",
			"BO_NFATACR_1_8",
			"BO_Sight_4_6",
			"BO_ShmidtBender25",
			"BO_ShmidtBender20",
			"BO_SpecterDROptic",
			"BO_Spitfire",
			"BO_SVT40Optic",
			"BO_Tango6",
			"BO_VortexRazor",
			"BO_Vudu",
			"BO_AccuPowerOptic"
		};
	};
};

class cfgWeapons {
	class Rifle_Base;
	
};

class cfgVehicles {

	class ItemOptics_Base;
	class HuntingOptic;
	class BO_AccuPowerOptic : ItemOptics_Base {
		s_pipRadius = 0.24;
		s_pipMagnification = 0.314;
		s_pipBlur = 0.01;
		s_pipChromAber = 0.3;
	};
	class BO_ACOGOptic : ItemOptics_Base {
		s_pipRadius = 0.314;
		s_pipMagnification = 0.314;
		s_pipBlur = 0.01;
		s_pipChromAber = 0.3;
	};
	class BO_Bravo4 : ItemOptics_Base {
		s_pipRadius = 0.4;
		s_pipMagnification = 0.314;
		s_pipBlur = 0.01;
		s_pipChromAber = 0.3;
	};
	class BO_DragonScope : ItemOptics_Base {
		s_pipRadius = 0.32;
		s_pipMagnification = 0.314;
		s_pipBlur = 0.01;
		s_pipChromAber = 0.3;
	};
	class BO_EotechHHS : ItemOptics_Base {
		s_pipRadius = 0.34;
		s_pipMagnification = 0.314;
		s_pipBlur = 0.01;
		s_pipChromAber = 0.3;
	};
	class BO_FedorovOptics : ItemOptics_Base {
		s_pipRadius = 0.34;
		s_pipMagnification = 0.314;
		s_pipBlur = 0.01;
		s_pipChromAber = 0.3;
	};
	class BO_HAMROptic : ItemOptics_Base {
		s_pipRadius = 0.24;
		s_pipMagnification = 0.314;
		s_pipBlur = 0.01;
		s_pipChromAber = 0.3;
	};
	class BO_HMOptic_Base : HuntingOptic {
		s_isFullscreen = 1;
		s_showEnterMisalignment = 1;
		s_pipRadius = 1.0;
		s_pipMagnification = 0.314;
		s_pipBlur = 0.01;
		s_pipChromAber = 0.3;
	};
	class BO_LeupoldMk4 : ItemOptics_Base {
		s_isFullscreen = 1;
		s_showEnterMisalignment = 1;
		s_pipRadius = 1.0;
		s_pipMagnification = 0.314;
		s_pipBlur = 0.01;
		s_pipChromAber = 0.3;
	};
	class BO_NFATACR_1_8 : ItemOptics_Base {
		s_pipRadius = 0.17;
		s_pipMagnification = 0.314;
		s_pipBlur = 0.01;
		s_pipChromAber = 0.3;
	};
	class BO_Sight_4_6 : ItemOptics_Base {
		s_pipRadius = 0.23;
		s_pipMagnification = 0.314;
		s_pipBlur = 0.01;
		s_pipChromAber = 0.3;
	};
	class BO_ShmidtBender25 : ItemOptics_Base {
		s_isFullscreen = 1;
		s_showEnterMisalignment = 1;
		s_pipRadius = 1.0;
		s_pipMagnification = 0.314;
		s_pipBlur = 0.01;
		s_pipChromAber = 0.3;
	};
	class BO_ShmidtBender20 : ItemOptics_Base {
		s_isFullscreen = 1;
		s_showEnterMisalignment = 1;
		s_pipRadius = 1.0;
		s_pipMagnification = 0.314;
		s_pipBlur = 0.01;
		s_pipChromAber = 0.3;
	};
	class BO_SpecterDROptic : ItemOptics_Base {
		s_pipRadius = 0.35;
		s_pipMagnification = 0.314;
		s_pipBlur = 0.01;
		s_pipChromAber = 0.3;
	};
	class BO_Spitfire : ItemOptics_Base {
		s_pipRadius = 0.21;
		s_pipMagnification = 0.314;
		s_pipBlur = 0.01;
		s_pipChromAber = 0.3;
	};
	class BO_SVT40Optic : ItemOptics_Base {
		s_isFullscreen = 1;
		s_showEnterMisalignment = 1;
		s_pipRadius = 1.0;
		s_pipMagnification = 0.314;
		s_pipBlur = 0.01;
		s_pipChromAber = 0.3;
	};
	class BO_Tango6_Base : ItemOptics_Base {
		s_pipRadius = 0.22;
		s_pipMagnification = 0.314;
		s_pipBlur = 0.01;
		s_pipChromAber = 0.3;
	};
	class BO_VortexRazor_Base : ItemOptics_Base {
		s_pipRadius = 0.18;
		s_pipMagnification = 0.314;
		s_pipBlur = 0.01;
		s_pipChromAber = 0.3;
	};
	class BO_Vudu_Base : ItemOptics_Base {
		s_pipRadius = 0.23;
		s_pipMagnification = 0.314;
		s_pipBlur = 0.01;
		s_pipChromAber = 0.3;
	};
};
