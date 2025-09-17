class CfgPatches {
    class UNIF_CUP_MLRS_Fix {
        units[] = {};
        weapons[] = {};
        requiredVersion = 1;
        requiredAddons[] = {"CUP_WheeledVehicles_Hilux"};
        skipWhenMissingDependencies = 1;
    };
};

class CfgAmmo{
    class R_230mm_HE;
    class CUP_R_GRAD_HE : R_230mm_HE {
        submunitionAmmo = "";
        simulation = "shotShell";
        indirectHitRange = 5;
    };
    class CUP_R_Techical_HE : CUP_R_GRAD_HE {
        indirectHitRange = 5;
    };
    class CUP_R_S8_techical_HE : CUP_R_GRAD_HE{
        hit = 150;
        indirectHit = 40;
        indirectHitRange = 12;
        suppressionRadiusHit = 30;

        model = "\CUP\Weapons\CUP_Weapons_Ammunition\Generic_70mm_Rocket\CUP_70mmRocket.p3d";
        proxyShape = "\CUP\Weapons\CUP_Weapons_Ammunition\Generic_70mm_Rocket\CUP_70mmRocket.p3d";
        CraterEffects = "HERocketCrater";
        effectsMissile = "missile1";
        explosioneffects = "HERocketExplosion";
        explosionSoundEffect = "DefaultExplosion";
    };
};

class CfgWeapons {
    class RocketPods;
    class rockets_230mm_GAT : RocketPods {
        class Close;
    };
    class CUP_Vmlauncher_GRAD_veh  : rockets_230mm_GAT{
        class Close;
    };
    class CUP_Vmlauncher_technical: CUP_Vmlauncher_GRAD_veh {
        class Close : Close {
            artilleryDispersion = 8;
        };
    };
    class CUP_Vmlauncher_ub32_technical: CUP_Vmlauncher_GRAD_veh {
        class Close : Close {
            artilleryDispersion = 12;
            aiRateOfFire=0.35;
            aiRateOfFireDistance=1054;
        };
    };
};
