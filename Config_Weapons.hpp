/*
*    Format:
*        level: ARRAY (This is for limiting items to certain things)
*            0: Variable to read from
*            1: Variable Value Type (SCALAR / BOOL / EQUAL)
*            2: What to compare to (-1 = Check Disabled)
*            3: Custom exit message (Optional)
*
*    items: { Classname, Itemname, BuyPrice, SellPrice }
*
*    Itemname only needs to be filled if you want to rename the original object name.
*
*    Weapon classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Weapons
*    Item classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Items
*
*/
class WeaponShops {
    //Armory Shops
    class gun {
        name = "Ardy Emban Firearms";
        side = "civ";
        license = "gun";
        level[] = { "", "", -1, "" };
        items[] = {
            { "hgun_Rook40_F", "", 25000, -1 },
            { "hgun_ACPC2_F", "", 28000, -1 },
            { "hgun_Pistol_heavy_02_F", "", 30000, -1 },
            { "hgun_Pistol_heavy_01_F", "", 35000, -1 },
            { "hgun_Pistol_Signal_F", "", 10000, -1 }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 25 },
            { "30Rnd_9x21_Mag", "", 50 },
            { "11Rnd_45ACP_Mag", "", 45 },
            { "9Rnd_45ACP_Mag", "", 75 },
            { "6Rnd_45ACP_Cylinder", "", 75 },
            { "6Rnd_RedSignal_F", "", 75 }
        };
    };

    class rebel {
        name = "Blackmarket Weapon Shop";
        side = "civ";
        license = "rebel";
        level[] = { "", "", -1, "" };
        items[] = {
            { "hgun_Rook40_F", "", 25000, -1 },
            { "hgun_ACPC2_F", "", 28000, -1 },
            { "hgun_Pistol_heavy_02_F", "", 30000, -1 },
            { "hgun_Pistol_heavy_01_F", "", 30000, -1 },
            { "hgun_Pistol_Signal_F", "", 10000, -1 },

            { "arifle_SDAR_F", "", 40000, -1 },
            { "arifle_TRG20_F", "", 50000, -1 },
            { "arifle_TRG21_F", "", 60000, -1 },
            { "arifle_Mk20_F", "", 100000, -1 },

            { "arifle_MX_F", "", 150000, -1 },
            { "arifle_MX_Black_F", "", 250000, -1 },
            { "arifle_MXC_F", "", 160000, -1 },
            { "arifle_MXC_Black_F", "", 260000, -1 },
            { "arifle_MX_SW_F", "", 170000, -1 },
            { "arifle_MX_SW_Black_F", "", 270000, -1 },
            { "arifle_MXM_F", "", 210000, -1 },
            { "arifle_MXM_Black_F", "", 310000, -1 },
            { "arifle_Katiba_C_F", "", 130000, -1 },

            { "arifle_Katiba_ARCO_F", "", 137000, -1 },
            { "arifle_TRG21_MRCO_F", "", 70000, -1 },

            { "srifle_DMR_01_F", "", 160000, -1 },
            { "srifle_DMR_06_camo_F", "", 160000, -1 },
            { "srifle_DMR_06_olive_F", "", 160000, -1 },
            { "srifle_DMR_06_camo_khs_F", "", 160000, -1 },
            { "srifle_EBR_F", "", 230000, -1 },
            { "srifle_DMR_03_khaki_F", "", 460000, -1 },
            { "srifle_DMR_03_tan_F", "", 460000, -1 },
            { "srifle_DMR_03_multicam_F", "", 460000, -1 },
            { "srifle_DMR_03_woodland_F", "", 460000, -1 },

            { "arifle_AKS_F", "", 560000, -1 },
            { "arifle_AKM_F", "", 660000, -1 },
            { "arifle_AK12_F", "", 960000, -1 },
            { "SMG_05_F", "", 99000, -1 },

            { "SMG_01_F", "", 80000, -1 },

            { "muzzle_snds_acp", "", 50000, -1 },
            { "muzzle_snds_M", "", 100000, -1 },
            { "muzzle_snds_H", "", 150000, -1 },
            { "muzzle_snds_L", "", 155000, -1 },
            { "muzzle_snds_B", "", 160000, -1 },

            { "bipod_01_F_snd", "", 15000, -1 },
            { "bipod_01_F_mtp", "", 15000, -1 },
            { "bipod_02_F_tan", "", 15000, -1 },
            { "bipod_02_F_hex", "", 15000, -1 },
            { "bipod_03_F_oli", "", 15000, -1 }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 250 },
            { "30Rnd_9x21_Mag", "", 500 },
            { "11Rnd_45ACP_Mag", "", 900 },
            { "9Rnd_45ACP_Mag", "", 700 },
            { "6Rnd_45ACP_Cylinder", "", 500 },
            { "30Rnd_45ACP_Mag_SMG_01", "", 1000 },
            { "30Rnd_556x45_Stanag", "", 1000 },
            { "30Rnd_556x45_Stanag_Tracer_Red", "", 1500 },
            { "30Rnd_556x45_Stanag_Tracer_Green", "", 1500 },
            { "30Rnd_556x45_Stanag_Tracer_Yellow", "", 1500 },
            { "20Rnd_556x45_UW_mag", "", 1500 },
            { "30Rnd_65x39_caseless_mag", "", 1500 },
            { "30Rnd_65x39_caseless_green", "", 1500 },
            { "30Rnd_65x39_caseless_mag_Tracer", "", 1500 },
            { "30Rnd_65x39_caseless_green_mag_Tracer", "", 1500 },

            { "10Rnd_762x54_Mag", "", 2000 },
            { "20Rnd_762x51_Mag", "", 4000 },

            { "6Rnd_RedSignal_F", "", 5000 },

            { "30Rnd_545x39_Mag_F", "", 3000 },
            { "30Rnd_545x39_Mag_Green_F", "", 3000 },
            { "30Rnd_545x39_Mag_Tracer_F", "", 3000 },
            { "30Rnd_545x39_Mag_Tracer_Green_F", "", 3000 },
            { "30Rnd_762x39_Mag_F", "", 4000 },
            { "30Rnd_762x39_Mag_Green_F", "", 4000 },
            { "30Rnd_762x39_Mag_Tracer_F", "", 4000 },
            { "30Rnd_762x39_Mag_Tracer_Green_F", "", 4000 },

            { "30Rnd_9x21_Mag_SMG_02", "", 700 },
            { "30Rnd_9x21_Mag_SMG_02_Tracer_Red", "", 700 },
            { "30Rnd_9x21_Mag_SMG_02_Tracer_Yellow", "", 700 },
            { "30Rnd_9x21_Mag_SMG_02_Tracer_Green", "", 700 },

            { "FirstAidKit", "", 2000 },
            { "NVGoggles", "", 2000 },
            { "NVGoggles_INDEP", "", 3000 },
            { "NVGoggles_OPFOR", "", 4000 },
            { "RangeFinder", "", 6000 },
            { "SmokeShell", "", 500 },
            { "B_IR_Grenade", "", 500 }
        };
    };

    class gang {
        name = "Hideout Arms";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "hgun_Rook40_F", "", 25000, -1 },
            { "hgun_ACPC2_F", "", 28000, -1 },
            { "hgun_Pistol_heavy_02_F", "", 30000, -1 },
            { "hgun_Pistol_heavy_01_F", "", 35000, -1 },
            { "hgun_Pistol_Signal_F", "", 10000, -1 },

            { "arifle_SDAR_F", "", 40000, -1 },
            { "arifle_TRG20_F", "", 50000, -1 },
            { "arifle_TRG21_F", "", 60000, -1 },
            { "arifle_Mk20_F", "", 100000, -1 },

            { "arifle_MX_F", "", 150000, -1 },
            { "arifle_MX_Black_F", "", 250000, -1 },
            { "arifle_MXC_F", "", 160000, -1 },
            { "arifle_MXC_Black_F", "", 260000, -1 },
            { "arifle_MX_SW_F", "", 170000, -1 },
            { "arifle_MX_SW_Black_F", "", 270000, -1 },
            { "arifle_MXM_F", "", 210000, -1 },
            { "arifle_MXM_Black_F", "", 310000, -1 },
            { "LMG_Mk200_F", "", 150000, -1 },
            { "arifle_Katiba_C_F", "", 130000, -1 },

            { "srifle_DMR_01_F", "", 160000, -1 },
            { "LMG_Zafir_F", "", 200000, -1 },
            { "srifle_EBR_F", "", 230000, -1 },

            { "SMG_01_F", "", 80000, -1 },

            { "muzzle_snds_acp", "", 50000, -1 },
            { "muzzle_snds_M", "", 100000, -1 },
            { "muzzle_snds_H", "", 150000, -1 },
            { "muzzle_snds_L", "", 155000, -1 },
            { "muzzle_snds_B", "", 160000, -1 },

            { "optic_Aco", "", 5000, -1 },
            { "optic_ACO_grn", "", 5000, -1 },
            { "optic_Aco_smg", "", 5000, -1 },
            { "optic_ACO_grn_smg", "", 5000, -1 },
            { "optic_Holosight", "", 5000, -1 },
            { "optic_Holosight_smg", "", 5000, -1 },
            { "optic_Hamr", "", 7000, -1 },
            { "optic_Arco", "", 7000, -1 },
            { "optic_MRCO", "", 10000, -1 },
            { "optic_DMS", "", 40000, -1 },
            { "acc_flashlight", "", 2000, -1 },
            { "acc_pointer_IR", "", 5000, -1 }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 250 },
            { "30Rnd_9x21_Mag", "", 500 },
            { "11Rnd_45ACP_Mag", "", 900 },
            { "9Rnd_45ACP_Mag", "", 700 },
            { "6Rnd_45ACP_Cylinder", "", 500 },
            { "30Rnd_45ACP_Mag_SMG_01", "", 1000 },

            { "30Rnd_556x45_Stanag", "", 1000 },
            { "30Rnd_556x45_Stanag_Tracer_Red", "", 1500 },
            { "30Rnd_556x45_Stanag_Tracer_Green", "", 1500 },
            { "30Rnd_556x45_Stanag_Tracer_Yellow", "", 1500 },

            { "20Rnd_556x45_UW_mag", "", 500 },
            { "30Rnd_65x39_caseless_mag", "", 1000 },
            { "30Rnd_65x39_caseless_green", "", 1500 },
            { "30Rnd_65x39_caseless_mag_Tracer", "", 1500 },
            { "30Rnd_65x39_caseless_green_mag_Tracer", "", 1500 },

            { "200Rnd_65x39_cased_Box", "", 2500 },
            { "200Rnd_65x39_cased_Box_Tracer", "", 3500 },
            { "10Rnd_762x54_Mag", "", 2000 },
            { "20Rnd_762x51_Mag", "", 4000 },
            { "150Rnd_762x51_Box", "", 2500 },
            { "6Rnd_RedSignal_F", "", 5000 },
            { "150Rnd_762x51_Box_Tracer", "", 3000 },

            { "FirstAidKit", "", 2000 },
            { "NVGoggles", "", 2000 },
            { "NVGoggles_INDEP", "", 3000 },
            { "NVGoggles_OPFOR", "", 4000 },
            { "RangeFinder", "", 6000 },
            { "SmokeShell", "", 500 },
            { "B_IR_Grenade", "", 500 }
        };
    };

    //Basic Shops
    class genstore {
        name = "Hardware Store";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "Binocular", "", 150, -1 },
            { "ItemGPS", "", 100, 45 },
            { "ItemMap", "", 0, 35 },
            { "ItemCompass", "", 50, 25 },
            { "ItemWatch", "", 10, -1 },
            { "ToolKit", "", 3000, 75 },
            { "FirstAidKit", "", 250, 65 },
            { "NVGoggles", "", 2000, 980 }
        };
        mags[] = {};
    };

    class f_station_store {
        name = "Fuel Station Store";
        side = "";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "ItemGPS", "", 1000, -1 },
            { "ItemMap", "", 50, -1 },
            { "ToolKit", "", 3000, -1 },
            { "FirstAidKit", "", 4000, -1 }
        };
        mags[] = {};
    };

    //Cop Shops
    class cop_default {
        name = "Altis CSO Store";
        side = "cop";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "ToolKit", "", 0, -1 },
            { "Medikit", "", 0, -1 },
            { "FirstAidKit", "", 0, -1 },
            { "Binocular", "", 0, -1 },
            { "ItemGPS", "", 0, -1 },
            { "ItemCompass", "", 0, -1 },
            { "ItemWatch", "", 0, -1 },
            { "ItemMap", "", 0, -1 },
            { "ItemRadio", "", 0, -1 },
            { "NVGoggles_OPFOR", "", 0, -1 }
        };
        mags[] = {
        };
    };

    class cop_psco {
        name = "Altis PCSO Armoury";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 1, "You must be a PSCO Rank!" };
        items[] = {
            { "hgun_P07_snds_F", "Taser Pistol", 0, -1 },
            { "hgun_Rook40_snds_F", "Taser Pistol (Black)", 0, -1 },
            { "16Rnd_9x21_Mag", "16xTaser Rnd", 0, -1 },

            { "arifle_Mk20C_plain_F", "Taser Rifle", 0, -1 },
            { "30Rnd_556x45_Stanag_Tracer_Green", "Rubber Bullets", 0, -1 },
            { "optic_Aco", "Red ACO Scope", 0, -1 },
            { "optic_Aco_grn", "Green ACO Scope", 0, -1 },
            { "optic_Holosight", "Holographic Scope", 0, -1 },

            { "acc_flashlight", "Flashlight", 0, -1 },

            { "hgun_P07_snds_F", "", 0, -1 },
            { "hgun_P07_snds_F", "", 0, -1 },
            { "hgun_P07_snds_F", "", 0, -1 },

            { "ToolKit", "", 0, -1 },
            { "Medikit", "", 0, -1 },
            { "FirstAidKit", "", 0, -1 },
            { "Binocular", "", 0, -1 },
            { "Rangefinder", "Rangefinders", 0, -1 },
            { "ItemGPS", "", 0, -1 },
            { "ItemCompass", "", 0, -1 },
            { "ItemWatch", "", 0, -1 },
            { "ItemMap", "", 0, -1 },
            { "ItemRadio", "", 0, -1 },
            { "NVGoggles_OPFOR", "", 0, -1 }
        };
        mags[] = {
        };
    };

    class cop_pc {
        name = "Altis PC Armoury";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 1, "You must be a PC Rank!" };
        items[] = {
          { "hgun_P07_snds_F", "Taser Pistol", 0, -1 },
          { "hgun_Rook40_snds_F", "Taser Pistol (Black)", 0, -1 },
          { "16Rnd_9x21_Mag", "16xTaser Rnd", 0, -1 },

          { "arifle_Mk20C_plain_F", "Taser Rifle", 0, -1 },
          { "30Rnd_556x45_Stanag", "Lethal Bullets", 0, -1 },
          { "30Rnd_556x45_Stanag_Tracer_Green", "Rubber Bullets", 0, -1 },

          { "arifle_SDAR_F", "", 0, -1 },

          { "optic_Aco", "Red ACO Scope", 0, -1 },
          { "optic_Aco_grn", "Green ACO Scope", 0, -1 },
          { "optic_Holosight", "Holographic Scope", 0, -1 },
          { "optic_Hamr", "RCO Scope", 0, -1 },

          { "acc_flashlight", "Flashlight", 0, -1 },

          { "ToolKit", "", 0, -1 },
          { "Medikit", "", 0, -1 },
          { "FirstAidKit", "", 0, -1 },
          { "Binocular", "", 0, -1 },
          { "Rangefinder", "Rangefinders", 0, -1 },
          { "ItemGPS", "", 0, -1 },
          { "ItemCompass", "", 0, -1 },
          { "ItemWatch", "", 0, -1 },
          { "ItemMap", "", 0, -1 },
          { "ItemRadio", "", 0, -1 },
          { "B_UavTerminal", "", 0, -1 },
          { "NVGoggles_OPFOR", "", 0, -1 }
        };
        mags[] = {
        };
    };

    class cop_spc {
        name = "Altis SPC Armoury";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 1, "You must be a PC Rank!" };
        items[] = {
          { "hgun_P07_snds_F", "Taser Pistol", 0, -1 },
          { "hgun_Rook40_snds_F", "Taser Pistol (Black)", 0, -1 },
          { "16Rnd_9x21_Mag", "16xTaser Rnd", 0, -1 },

          { "arifle_Mk20C_plain_F", "Taser Rifle", 0, -1 },
          { "arifle_Mk20_plain_F", "Taser Rifle LG [SPC]", 0, -1 },
          { "30Rnd_556x45_Stanag", "Lethal Bullets", 0, -1 },
          { "30Rnd_556x45_Stanag_Tracer_Green", "Rubber Bullets", 0, -1 },

          { "SMG_01_F", "Vermin [SPC]", 0, -1 },
          { "SMG_01_Holo_F", "Taser Rifle LG [SPC]", 0, -1 },
          { "SMG_05_F", "Protector [SPC]", 0, -1 },
          { "SMG_02_F", "Sting [SPC]", 0, -1 },
          { "30Rnd_45ACP_Mag_SMG_01", "30xVermin Rnd [SPC]", 0, -1 },
          { "30Rnd_45ACP_Mag_SMG_01_tracer_green", "30x Vermin Tracer [SPC]", 0, -1 },
          { "30Rnd_9x21_Mag_SMG_02", "9MM SMG 30RND Magazine", 0, -1 },
          { "30Rnd_9x21_Mag_SMG_02_Tracer_Yellow", "9MM SMG 30RND Magazine (TRACER)", 0, -1 },

          { "arifle_SDAR_F", "", 0, -1 },
          { "20Rnd_556x45_UW_mag", "SDAR UW 556x45 [MPO]", 0, -1 },

          { "optic_Holosight_smg", "Holographic SMG [SPC]", 0, -1 },
          { "optic_Holosight_smg_blk_F", "Holographic SMG Black [SPC]", 0, -1 },
          { "optic_Aco", "Red ACO Scope", 0, -1 },
          { "optic_Aco_grn", "Green ACO Scope", 0, -1 },
          { "optic_Holosight", "Holographic Scope", 0, -1 },
          { "optic_Hamr", "RCO Scope", 0, -1 },

          { "muzzle_snds_L", "9MM SMG Supressor", 0, -1 },
          { "muzzle_snds_acp", ".45 Vermin Supressor", 0, -1 },
          { "muzzle_snds_M", "5.56 Silencer(MK-20+SPAR16)[SPC]", 0, -1 },
          { "acc_flashlight", "Flashlight", 0, -1 },

          { "ToolKit", "", 0, -1 },
          { "Medikit", "", 0, -1 },
          { "FirstAidKit", "", 0, -1 },
          { "Binocular", "", 0, -1 },
          { "Rangefinder", "Rangefinders", 0, -1 },
          { "ItemGPS", "", 0, -1 },
          { "ItemCompass", "", 0, -1 },
          { "ItemWatch", "", 0, -1 },
          { "ItemMap", "", 0, -1 },
          { "ItemRadio", "", 0, -1 },
          { "B_UavTerminal", "", 0, -1 },
          { "NVGoggles_OPFOR", "", 0, -1 }
        };
        mags[] = {
        };
    };

    class cop_sgt {
        name = "Altis SGT Armoury";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 1, "You must be a SGT Rank!" };
        items[] = {
          { "hgun_P07_snds_F", "Taser Pistol", 0, -1 },
          { "hgun_Rook40_snds_F", "Taser Pistol (Black)", 0, -1 },
          { "16Rnd_9x21_Mag", "16xTaser Rnd", 0, -1 },

          { "arifle_Mk20C_plain_F", "Taser Rifle", 0, -1 },
          { "arifle_Mk20_plain_F", "Taser Rifle LG [SPC]", 0, -1 },
          { "30Rnd_556x45_Stanag", "Lethal Bullets", 0, -1 },
          { "30Rnd_556x45_Stanag_Tracer_Green", "Rubber Bullets", 0, -1 },

          { "SMG_01_F", "Vermin [SPC]", 0, -1 },
          { "SMG_01_Holo_F", "Taser Rifle LG [SPC]", 0, -1 },
          { "SMG_05_F", "Protector [SPC]", 0, -1 },
          { "SMG_02_F", "Sting [SPC]", 0, -1 },
          { "30Rnd_45ACP_Mag_SMG_01", "30xVermin Rnd [SPC]", 0, -1 },
          { "30Rnd_45ACP_Mag_SMG_01_tracer_green", "30x Vermin Tracer [SPC]", 0, -1 },
          { "30Rnd_9x21_Mag_SMG_02", "9MM SMG 30RND Magazine", 0, -1 },
          { "30Rnd_9x21_Mag_SMG_02_Tracer_Yellow", "9MM SMG 30RND Magazine (TRACER)", 0, -1 },

          { "arifle_SDAR_F", "", 0, -1 },
          { "arifle_SPAR_01_blk_F", "SPAR-16 Black [SGT]", 0, -1 },
          { "arifle_MXC_Black_F", "MXC Black [SGT]", 0, -1 },

          { "20Rnd_556x45_UW_mag", "SDAR UW 556x45 [MPO]", 0, -1 },
          { "30Rnd_556x45_Stanag", "5.56MM SPAR-16", 0, -1 },
          { "30Rnd_556x45_Stanag_Tracer_Green", "5.56MM SPAR-16 (Tracer)", 0, -1 },
          { "30Rnd_65x39_caseless_mag", "30x MX Rnd [SGT]", 0, -1 },
          { "30Rnd_65x39_caseless_mag_Tracer", "30x MX Tracer [SGT]", 0, -1 },

          { "optic_Holosight_smg", "Holographic SMG [SPC]", 0, -1 },
          { "optic_Holosight_smg_blk_F", "Holographic SMG Black [SPC]", 0, -1 },
          { "optic_Aco", "Red ACO Scope", 0, -1 },
          { "optic_Aco_grn", "Green ACO Scope", 0, -1 },
          { "optic_Holosight", "Holographic Scope", 0, -1 },
          { "optic_Holosight_blk_F", "Holographic Black", 0, -1 },
          { "optic_Hamr", "RCO Scope", 0, -1 },

          { "muzzle_snds_L", "9MM SMG Supressor", 0, -1 },
          { "muzzle_snds_acp", ".45 Vermin Supressor", 0, -1 },
          { "muzzle_snds_M", "5.56 Silencer(MK-20+SPAR16)[SPC]", 0, -1 },
          { "acc_flashlight", "Flashlight", 0, -1 },

          { "ToolKit", "", 0, -1 },
          { "Medikit", "", 0, -1 },
          { "FirstAidKit", "", 0, -1 },
          { "Binocular", "", 0, -1 },
          { "Rangefinder", "Rangefinders", 0, -1 },
          { "ItemGPS", "", 0, -1 },
          { "ItemCompass", "", 0, -1 },
          { "ItemWatch", "", 0, -1 },
          { "ItemMap", "", 0, -1 },
          { "ItemRadio", "", 0, -1 },
          { "B_UavTerminal", "", 0, -1 },
          { "NVGoggles_OPFOR", "", 0, -1 }
        };
        mags[] = {
        };
    };

    class cop_dsgt {
        name = "Altis DSGT Armoury";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 1, "You must be a DSGT Rank!" };
        items[] = {
          { "hgun_P07_snds_F", "Taser Pistol", 0, -1 },
          { "hgun_Rook40_snds_F", "Taser Pistol (Black)", 0, -1 },
          { "16Rnd_9x21_Mag", "16xTaser Rnd", 0, -1 },

          { "arifle_Mk20C_plain_F", "Taser Rifle", 0, -1 },
          { "arifle_Mk20_plain_F", "Taser Rifle LG [SPC]", 0, -1 },
          { "30Rnd_556x45_Stanag", "Lethal Bullets", 0, -1 },
          { "30Rnd_556x45_Stanag_Tracer_Green", "Rubber Bullets", 0, -1 },

          { "SMG_01_F", "Vermin [SPC]", 0, -1 },
          { "SMG_01_Holo_F", "Taser Rifle LG [SPC]", 0, -1 },
          { "SMG_05_F", "Protector [SPC]", 0, -1 },
          { "SMG_02_F", "Sting [SPC]", 0, -1 },
          { "30Rnd_45ACP_Mag_SMG_01", "30xVermin Rnd [SPC]", 0, -1 },
          { "30Rnd_45ACP_Mag_SMG_01_tracer_green", "30x Vermin Tracer [SPC]", 0, -1 },
          { "30Rnd_9x21_Mag_SMG_02", "9MM SMG 30RND Magazine", 0, -1 },
          { "30Rnd_9x21_Mag_SMG_02_Tracer_Yellow", "9MM SMG 30RND Magazine (TRACER)", 0, -1 },

          { "arifle_SDAR_F", "", 0, -1 },
          { "arifle_SPAR_01_blk_F", "SPAR-16 Black [SGT]", 0, -1 },
          { "arifle_MXC_Black_F", "MXC Black [SGT]", 0, -1 },
          { "arifle_MX_Black_F", "MX Black [DSGT]", 0, -1 },

          { "20Rnd_556x45_UW_mag", "SDAR UW 556x45 [MPO]", 0, -1 },
          { "30Rnd_556x45_Stanag", "5.56MM SPAR-16", 0, -1 },
          { "30Rnd_556x45_Stanag_Tracer_Green", "5.56MM SPAR-16 (Tracer)", 0, -1 },
          { "30Rnd_65x39_caseless_mag", "30x MX Rnd [SGT]", 0, -1 },
          { "30Rnd_65x39_caseless_mag_Tracer", "30x MX Tracer [SGT]", 0, -1 },

          { "optic_Holosight_smg", "Holographic SMG [SPC]", 0, -1 },
          { "optic_Holosight_smg_blk_F", "Holographic SMG Black [SPC]", 0, -1 },
          { "optic_Aco", "Red ACO Scope", 0, -1 },
          { "optic_Aco_grn", "Green ACO Scope", 0, -1 },
          { "optic_Holosight", "Holographic Scope", 0, -1 },
          { "optic_Holosight_blk_F", "Holographic Black", 0, -1 },
          { "optic_Hamr", "RCO Scope", 0, -1 },
          { "optic_MRCO", "MRCO Scope", 0, -1 },
          { "optic_ARCO", "ARCO Scope", 0, -1 },
          { "optic_Hamr", "ARCO Black Scope", 0, -1 },

          { "muzzle_snds_L", "9MM SMG Supressor", 0, -1 },
          { "muzzle_snds_acp", ".45 Vermin Supressor", 0, -1 },
          { "muzzle_snds_M", "5.56 Silencer(MK-20+SPAR16)[SPC]", 0, -1 },
          { "acc_flashlight", "Flashlight", 0, -1 },

          { "ToolKit", "", 0, -1 },
          { "Medikit", "", 0, -1 },
          { "FirstAidKit", "", 0, -1 },
          { "Binocular", "", 0, -1 },
          { "Rangefinder", "Rangefinders", 0, -1 },
          { "ItemGPS", "", 0, -1 },
          { "ItemCompass", "", 0, -1 },
          { "ItemWatch", "", 0, -1 },
          { "ItemMap", "", 0, -1 },
          { "ItemRadio", "", 0, -1 },
          { "B_UavTerminal", "", 0, -1 },
          { "NVGoggles_OPFOR", "", 0, -1 }
        };
        mags[] = {
        };
    };

    class cop_insp {
        name = "Altis Inpector Armoury";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 1, "You must be a INSP Rank!" };
        items[] = {
          { "hgun_P07_snds_F", "Taser Pistol", 0, -1 },
          { "hgun_Rook40_snds_F", "Taser Pistol (Black)", 0, -1 },
          { "16Rnd_9x21_Mag", "16xTaser Rnd", 0, -1 },

          { "arifle_Mk20C_plain_F", "Taser Rifle", 0, -1 },
          { "arifle_Mk20_plain_F", "Taser Rifle LG [SPC]", 0, -1 },
          { "30Rnd_556x45_Stanag", "Lethal Bullets", 0, -1 },
          { "30Rnd_556x45_Stanag_Tracer_Green", "Rubber Bullets", 0, -1 },

          { "hgun_Rook40_F", "Rook", 0, -1 },
          { "16Rnd_9x21_Mag", "16RND Rook ammo", 0, -1 },

          { "SMG_01_F", "Vermin [SPC]", 0, -1 },
          { "SMG_01_Holo_F", "Taser Rifle LG [SPC]", 0, -1 },
          { "SMG_05_F", "Protector [SPC]", 0, -1 },
          { "SMG_02_F", "Sting [SPC]", 0, -1 },
          { "30Rnd_45ACP_Mag_SMG_01", "30xVermin Rnd [SPC]", 0, -1 },
          { "30Rnd_45ACP_Mag_SMG_01_tracer_green", "30x Vermin Tracer [SPC]", 0, -1 },
          { "30Rnd_9x21_Mag_SMG_02", "9MM SMG 30RND Magazine", 0, -1 },
          { "30Rnd_9x21_Mag_SMG_02_Tracer_Yellow", "9MM SMG 30RND Magazine (TRACER)", 0, -1 },

          { "arifle_SDAR_F", "", 0, -1 },
          { "arifle_SPAR_01_blk_F", "SPAR-16 Black [SGT]", 0, -1 },
          { "arifle_MXC_Black_F", "MXC Black [SGT]", 0, -1 },
          { "arifle_MX_Black_F", "MX Black [DSGT]", 0, -1 },

          { "20Rnd_556x45_UW_mag", "SDAR UW 556x45 [MPO]", 0, -1 },
          { "30Rnd_556x45_Stanag", "5.56MM SPAR-16", 0, -1 },
          { "30Rnd_556x45_Stanag_Tracer_Green", "5.56MM SPAR-16 (Tracer)", 0, -1 },
          { "30Rnd_65x39_caseless_mag", "30x MX Rnd [SGT]", 0, -1 },
          { "30Rnd_65x39_caseless_mag_Tracer", "30x MX Tracer [SGT]", 0, -1 },

          { "optic_Holosight_smg", "Holographic SMG [SPC]", 0, -1 },
          { "optic_Holosight_smg_blk_F", "Holographic SMG Black [SPC]", 0, -1 },
          { "optic_Aco", "Red ACO Scope", 0, -1 },
          { "optic_Aco_grn", "Green ACO Scope", 0, -1 },
          { "optic_Holosight", "Holographic Scope", 0, -1 },
          { "optic_Holosight_blk_F", "Holographic Black", 0, -1 },
          { "optic_Hamr", "RCO Scope", 0, -1 },
          { "optic_MRCO", "MRCO Scope", 0, -1 },
          { "optic_ARCO", "ARCO Scope", 0, -1 },
          { "optic_Hamr", "ARCO Black Scope", 0, -1 },
          { "optic_ERCO_blk_F", "ERCO Black Scope", 0, -1 },

          { "muzzle_snds_L", "9MM SMG Supressor", 0, -1 },
          { "muzzle_snds_acp", ".45 Vermin Supressor", 0, -1 },
          { "muzzle_snds_M", "5.56 Silencer(MK-20+SPAR16)[SPC]", 0, -1 },
          { "bipod_01_F_blk", "Bipod", 0, -1 },
          { "acc_flashlight", "Flashlight", 0, -1 },
          { "acc_pointer_IR", "", 0, -1 },

          { "ToolKit", "", 0, -1 },
          { "Medikit", "", 0, -1 },
          { "FirstAidKit", "", 0, -1 },
          { "Binocular", "", 0, -1 },
          { "Rangefinder", "Rangefinders", 0, -1 },
          { "ItemGPS", "", 0, -1 },
          { "ItemCompass", "", 0, -1 },
          { "ItemWatch", "", 0, -1 },
          { "ItemMap", "", 0, -1 },
          { "ItemRadio", "", 0, -1 },
          { "B_UavTerminal", "", 0, -1 },
          { "NVGoggles_OPFOR", "", 0, -1 }
        };
        mags[] = {
        };
    };

    class cop_dinsp {
        name = "Altis DISNP Armoury";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 1, "You must be a DINSP Rank!" };
        items[] = {
          { "hgun_P07_snds_F", "Taser Pistol", 0, -1 },
          { "hgun_Rook40_snds_F", "Taser Pistol (Black)", 0, -1 },
          { "16Rnd_9x21_Mag", "16xTaser Rnd", 0, -1 },

          { "arifle_Mk20C_plain_F", "Taser Rifle", 0, -1 },
          { "arifle_Mk20_plain_F", "Taser Rifle LG [SPC]", 0, -1 },
          { "30Rnd_556x45_Stanag", "Lethal Bullets", 0, -1 },
          { "30Rnd_556x45_Stanag_Tracer_Green", "Rubber Bullets", 0, -1 },

          { "hgun_Rook40_F", "Rook", 0, -1 },
          { "hgun_Pistol_01_F", "PM 9mm [SI]", 0, -1 },
          { "16Rnd_9x21_Mag", "16RND Rook ammo", 0, -1 },
          { "16Rnd_9x21_Mag", "10RND PMM 9mm", 0, -1 },

          { "SMG_01_F", "Vermin [SPC]", 0, -1 },
          { "SMG_01_Holo_F", "Taser Rifle LG [SPC]", 0, -1 },
          { "SMG_05_F", "Protector [SPC]", 0, -1 },
          { "SMG_02_F", "Sting [SPC]", 0, -1 },
          { "30Rnd_45ACP_Mag_SMG_01", "30xVermin Rnd [SPC]", 0, -1 },
          { "30Rnd_45ACP_Mag_SMG_01_tracer_green", "30x Vermin Tracer [SPC]", 0, -1 },
          { "30Rnd_9x21_Mag_SMG_02", "9MM SMG 30RND Magazine", 0, -1 },
          { "30Rnd_9x21_Mag_SMG_02_Tracer_Yellow", "9MM SMG 30RND Magazine (TRACER)", 0, -1 },

          { "arifle_SDAR_F", "", 0, -1 },
          { "arifle_SPAR_01_blk_F", "SPAR-16 Black [SGT]", 0, -1 },
          { "arifle_MXC_Black_F", "MXC Black [SGT]", 0, -1 },
          { "arifle_MX_Black_F", "MX Black [DSGT]", 0, -1 },
          { "arifle_MXM_Black_F", "MXM Black [DI]", 0, -1 },

          { "20Rnd_556x45_UW_mag", "SDAR UW 556x45 [MPO]", 0, -1 },
          { "30Rnd_556x45_Stanag", "5.56MM SPAR-16", 0, -1 },
          { "30Rnd_556x45_Stanag_Tracer_Green", "5.56MM SPAR-16 (Tracer)", 0, -1 },
          { "30Rnd_65x39_caseless_mag", "30x MX Rnd [SGT]", 0, -1 },
          { "30Rnd_65x39_caseless_mag_Tracer", "30x MX Tracer [SGT]", 0, -1 },

          { "optic_Holosight_smg", "Holographic SMG [SPC]", 0, -1 },
          { "optic_Holosight_smg_blk_F", "Holographic SMG Black [SPC]", 0, -1 },
          { "optic_Aco", "Red ACO Scope", 0, -1 },
          { "optic_Aco_grn", "Green ACO Scope", 0, -1 },
          { "optic_Holosight", "Holographic Scope", 0, -1 },
          { "optic_Holosight_blk_F", "Holographic Black", 0, -1 },
          { "optic_Hamr", "RCO Scope", 0, -1 },
          { "optic_MRCO", "MRCO Scope", 0, -1 },
          { "optic_ARCO", "ARCO Scope", 0, -1 },
          { "optic_Hamr", "ARCO Black Scope", 0, -1 },
          { "optic_ERCO_blk_F", "ERCO Black Scope", 0, -1 },
          { "optic_ERCO_blk_F", "DMS Scope", 0, -1 },

          { "muzzle_snds_L", "9MM SMG Supressor", 0, -1 },
          { "muzzle_snds_acp", ".45 Vermin Supressor", 0, -1 },
          { "muzzle_snds_M", "5.56 Silencer(MK-20+SPAR16)[SPC]", 0, -1 },
          { "muzzle_snds_H", "6.5MM Supressor", 0, -1 },
          { "bipod_01_F_blk", "Bipod", 0, -1 },
          { "acc_flashlight", "Flashlight", 0, -1 },
          { "acc_pointer_IR", "", 0, -1 },

          { "ToolKit", "", 0, -1 },
          { "Medikit", "", 0, -1 },
          { "FirstAidKit", "", 0, -1 },
          { "Binocular", "", 0, -1 },
          { "Rangefinder", "Rangefinders", 0, -1 },
          { "ItemGPS", "", 0, -1 },
          { "ItemCompass", "", 0, -1 },
          { "ItemWatch", "", 0, -1 },
          { "ItemMap", "", 0, -1 },
          { "ItemRadio", "", 0, -1 },
          { "B_UavTerminal", "", 0, -1 },
          { "NVGoggles_OPFOR", "", 0, -1 }
        };
        mags[] = {
        };
    };

    class cop_ci {
        name = "Altis CI Armoury";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 1, "You must be a CI Rank!" };
        items[] = {
          { "hgun_P07_snds_F", "Taser Pistol", 0, -1 },
          { "hgun_Rook40_snds_F", "Taser Pistol (Black)", 0, -1 },
          { "16Rnd_9x21_Mag", "16xTaser Rnd", 0, -1 },

          { "arifle_Mk20C_plain_F", "Taser Rifle", 0, -1 },
          { "arifle_Mk20_plain_F", "Taser Rifle LG [SPC]", 0, -1 },
          { "30Rnd_556x45_Stanag", "Lethal Bullets", 0, -1 },
          { "30Rnd_556x45_Stanag_Tracer_Green", "Rubber Bullets", 0, -1 },

          { "hgun_Rook40_F", "Rook", 0, -1 },
          { "hgun_Pistol_01_F", "PM 9mm [SI]", 0, -1 },
          { "16Rnd_9x21_Mag", "16RND Rook ammo", 0, -1 },
          { "16Rnd_9x21_Mag", "10RND PMM 9mm", 0, -1 },

          { "SMG_01_F", "Vermin [SPC]", 0, -1 },
          { "SMG_01_Holo_F", "Taser Rifle LG [SPC]", 0, -1 },
          { "SMG_05_F", "Protector [SPC]", 0, -1 },
          { "SMG_02_F", "Sting [SPC]", 0, -1 },
          { "30Rnd_45ACP_Mag_SMG_01", "30xVermin Rnd [SPC]", 0, -1 },
          { "30Rnd_45ACP_Mag_SMG_01_tracer_green", "30x Vermin Tracer [SPC]", 0, -1 },
          { "30Rnd_9x21_Mag_SMG_02", "9MM SMG 30RND Magazine", 0, -1 },
          { "30Rnd_9x21_Mag_SMG_02_Tracer_Yellow", "9MM SMG 30RND Magazine (TRACER)", 0, -1 },

          { "arifle_SDAR_F", "", 0, -1 },
          { "arifle_SPAR_01_blk_F", "SPAR-16 Black [SGT]", 0, -1 },
          { "arifle_MXC_Black_F", "MXC Black [SGT]", 0, -1 },
          { "arifle_MX_Black_F", "MX Black [DSGT]", 0, -1 },
          { "arifle_MXM_Black_F", "MXM Black [DI]", 0, -1 },

          { "20Rnd_556x45_UW_mag", "SDAR UW 556x45 [MPO]", 0, -1 },
          { "30Rnd_556x45_Stanag", "5.56MM SPAR-16", 0, -1 },
          { "30Rnd_556x45_Stanag_Tracer_Green", "5.56MM SPAR-16 (Tracer)", 0, -1 },
          { "30Rnd_65x39_caseless_mag", "30x MX Rnd [SGT]", 0, -1 },
          { "30Rnd_65x39_caseless_mag_Tracer", "30x MX Tracer [SGT]", 0, -1 },

          { "optic_Holosight_smg", "Holographic SMG [SPC]", 0, -1 },
          { "optic_Holosight_smg_blk_F", "Holographic SMG Black [SPC]", 0, -1 },
          { "optic_Aco", "Red ACO Scope", 0, -1 },
          { "optic_Aco_grn", "Green ACO Scope", 0, -1 },
          { "optic_Holosight", "Holographic Scope", 0, -1 },
          { "optic_Holosight_blk_F", "Holographic Black", 0, -1 },
          { "optic_Hamr", "RCO Scope", 0, -1 },
          { "optic_MRCO", "MRCO Scope", 0, -1 },
          { "optic_ARCO", "ARCO Scope", 0, -1 },
          { "optic_Hamr", "ARCO Black Scope", 0, -1 },
          { "optic_ERCO_blk_F", "ERCO Black Scope", 0, -1 },
          { "optic_ERCO_blk_F", "DMS Scope", 0, -1 },

          { "muzzle_snds_L", "9MM SMG Supressor", 0, -1 },
          { "muzzle_snds_acp", ".45 Vermin Supressor", 0, -1 },
          { "muzzle_snds_M", "5.56 Silencer(MK-20+SPAR16)[SPC]", 0, -1 },
          { "muzzle_snds_H", "6.5MM Supressor", 0, -1 },
          { "bipod_01_F_blk", "Bipod", 0, -1 },
          { "acc_flashlight", "Flashlight", 0, -1 },
          { "acc_pointer_IR", "", 0, -1 },

          { "ToolKit", "", 0, -1 },
          { "Medikit", "", 0, -1 },
          { "FirstAidKit", "", 0, -1 },
          { "Binocular", "", 0, -1 },
          { "Rangefinder", "Rangefinders", 0, -1 },
          { "ItemGPS", "", 0, -1 },
          { "ItemCompass", "", 0, -1 },
          { "ItemWatch", "", 0, -1 },
          { "ItemMap", "", 0, -1 },
          { "ItemRadio", "", 0, -1 },
          { "B_UavTerminal", "", 0, -1 },
          { "NVGoggles_OPFOR", "", 0, -1 }
        };
        mags[] = {
        };
    };

    class cop_si {
        name = "Altis SI Armoury";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 1, "You must be a SI Rank!" };
        items[] = {
          { "hgun_P07_snds_F", "Taser Pistol", 0, -1 },
          { "hgun_Rook40_snds_F", "Taser Pistol (Black)", 0, -1 },
          { "16Rnd_9x21_Mag", "16xTaser Rnd", 0, -1 },

          { "arifle_Mk20C_plain_F", "Taser Rifle", 0, -1 },
          { "arifle_Mk20_plain_F", "Taser Rifle LG [SPC]", 0, -1 },
          { "30Rnd_556x45_Stanag", "Lethal Bullets", 0, -1 },
          { "30Rnd_556x45_Stanag_Tracer_Green", "Rubber Bullets", 0, -1 },

          { "hgun_Rook40_F", "Rook", 0, -1 },
          { "hgun_Pistol_01_F", "PM 9mm [SI]", 0, -1 },
          { "16Rnd_9x21_Mag", "16RND Rook ammo", 0, -1 },
          { "16Rnd_9x21_Mag", "10RND PMM 9mm", 0, -1 },

          { "SMG_01_F", "Vermin [SPC]", 0, -1 },
          { "SMG_01_Holo_F", "Taser Rifle LG [SPC]", 0, -1 },
          { "SMG_05_F", "Protector [SPC]", 0, -1 },
          { "SMG_02_F", "Sting [SPC]", 0, -1 },
          { "30Rnd_45ACP_Mag_SMG_01", "30xVermin Rnd [SPC]", 0, -1 },
          { "30Rnd_45ACP_Mag_SMG_01_tracer_green", "30x Vermin Tracer [SPC]", 0, -1 },
          { "30Rnd_9x21_Mag_SMG_02", "9MM SMG 30RND Magazine", 0, -1 },
          { "30Rnd_9x21_Mag_SMG_02_Tracer_Yellow", "9MM SMG 30RND Magazine (TRACER)", 0, -1 },

          { "arifle_SDAR_F", "", 0, -1 },
          { "arifle_SPAR_01_blk_F", "SPAR-16 Black [SGT]", 0, -1 },
          { "arifle_MXC_Black_F", "MXC Black [SGT]", 0, -1 },
          { "arifle_MX_Black_F", "MX Black [DSGT]", 0, -1 },
          { "arifle_MXM_Black_F", "MXM Black [DI]", 0, -1 },
          { "arifle_MX_GL_Black_F", "MX-3GL [AR/NCA]", 0, -1 },
          { "arifle_MX_SW_Black_F", "MX SW [AR]", 0, -1 },

          { "20Rnd_556x45_UW_mag", "SDAR UW 556x45 [MPO]", 0, -1 },
          { "30Rnd_556x45_Stanag", "5.56MM SPAR-16", 0, -1 },
          { "30Rnd_556x45_Stanag_Tracer_Green", "5.56MM SPAR-16 (Tracer)", 0, -1 },
          { "150Rnd_556x45_Drum_Mag_Tracer_F", "150RND 5.56MM Drum", 0, -1 },
          { "30Rnd_65x39_caseless_mag", "30x MX Rnd [SGT]", 0, -1 },
          { "30Rnd_65x39_caseless_mag_Tracer", "30x MX Tracer [SGT]", 0, -1 },
          { "100Rnd_65x39_caseless_mag", "100x MX SW", 0, -1 },

          { "1Rnd_Smoke_Grenade_shell", "Smokegrenade (Spar-16)", 0, -1 },
          { "3Rnd_Smoke_Grenade_shell", "MX-3GL Smoke Grenade Round", 0, -1 },

          { "srifle_EBR_F", "MK18 [MARKSMEN]", 0, -1 },
          { "srifle_DMR_03_F", "MK-1 [MARKSMEN]", 0, -1 },
          { "arifle_SPAR_03_blk_F", "SPAR 7.62mm DMR [MARKSMEN]", 0, -1 },
          { "20Rnd_762x51_Mag", "20X 7.62MM DMR ROUNDS [MARKSMEN]", 0, -1 },

          { "optic_MRD", "4-Five Scope [CSI]", 0, -1 },
          { "optic_Holosight_smg", "Holographic SMG [SPC]", 0, -1 },
          { "optic_Holosight_smg_blk_F", "Holographic SMG Black [SPC]", 0, -1 },
          { "optic_Aco", "Red ACO Scope", 0, -1 },
          { "optic_Aco_grn", "Green ACO Scope", 0, -1 },
          { "optic_Holosight", "Holographic Scope", 0, -1 },
          { "optic_Holosight_blk_F", "Holographic Black", 0, -1 },
          { "optic_Hamr", "RCO Scope", 0, -1 },
          { "optic_MRCO", "MRCO Scope", 0, -1 },
          { "optic_ARCO", "ARCO Scope", 0, -1 },
          { "optic_Hamr", "ARCO Black Scope", 0, -1 },
          { "optic_ARCO_blk_F", "ARCO Black Scope", 0, -1 },
          { "optic_ERCO_blk_F", "ERCO Black Scope", 0, -1 },
          { "optic_ERCO_blk_F", "DMS Scope", 0, -1 },
          { "optic_SOS", "(S)MOS Scope", 0, -1 },
          { "optic_AMS", "AMS Scope", 0, -1 },
          { "optic_LRPS", "LRPS Scope", 0, -1 },

          { "muzzle_snds_L", "9MM SMG Supressor", 0, -1 },
          { "muzzle_snds_acp", ".45 Vermin Supressor", 0, -1 },
          { "muzzle_snds_M", "5.56 Silencer(MK-20+SPAR16)[SPC]", 0, -1 },
          { "muzzle_snds_H", "6.5MM Supressor", 0, -1 },
          { "muzzle_snds_B", "7.62MM Supressor", 0, -1 },
          { "bipod_01_F_blk", "Bipod", 0, -1 },
          { "acc_flashlight", "Flashlight", 0, -1 },
          { "acc_pointer_IR", "", 0, -1 },
          { "HandGrenade_Stone", "Flashbang", 0, -1 },

          { "ToolKit", "", 0, -1 },
          { "Medikit", "", 0, -1 },
          { "FirstAidKit", "", 0, -1 },
          { "Binocular", "", 0, -1 },
          { "Rangefinder", "Rangefinders", 0, -1 },
          { "ItemGPS", "", 0, -1 },
          { "ItemCompass", "", 0, -1 },
          { "ItemWatch", "", 0, -1 },
          { "ItemMap", "", 0, -1 },
          { "ItemRadio", "", 0, -1 },
          { "B_UavTerminal", "", 0, -1 },
          { "NVGoggles_OPFOR", "", 0, -1 }
        };
        mags[] = {
        };
    };

    class cop_cmd {
        name = "Altis CSI/CMD Armoury";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 1, "You must be a CSI/CMD Rank!" };
        items[] = {
          { "hgun_P07_snds_F", "Taser Pistol", 0, -1 },
          { "hgun_Rook40_snds_F", "Taser Pistol (Black)", 0, -1 },
          { "16Rnd_9x21_Mag", "16xTaser Rnd", 0, -1 },

          { "arifle_Mk20C_plain_F", "Taser Rifle", 0, -1 },
          { "arifle_Mk20_plain_F", "Taser Rifle LG [SPC]", 0, -1 },
          { "30Rnd_556x45_Stanag", "Lethal Bullets", 0, -1 },
          { "30Rnd_556x45_Stanag_Tracer_Green", "Rubber Bullets", 0, -1 },

          { "hgun_Rook40_F", "Rook", 0, -1 },
          { "hgun_Pistol_01_F", "PM 9mm [SI]", 0, -1 },
          { "hgun_Pistol_heavy_02_F", "Zubr [SI]", 0, -1 },
          { "hgun_Pistol_heavy_01_F", "4-Five [CSI]", 0, -1 },
          { "16Rnd_9x21_Mag", "16RND Rook ammo", 0, -1 },
          { "16Rnd_9x21_Mag", "10RND PMM 9mm", 0, -1 },
          { "6Rnd_45ACP_Cylinder", "6RND Zubr .45 ACP [SI]", 0, -1 },
          { "11Rnd_45ACP_Mag", "11RND .45 ACP Magazine [CSI]", 0, -1 },

          { "SMG_01_F", "Vermin [SPC]", 0, -1 },
          { "SMG_01_Holo_F", "Taser Rifle LG [SPC]", 0, -1 },
          { "SMG_05_F", "Protector [SPC]", 0, -1 },
          { "SMG_02_F", "Sting [SPC]", 0, -1 },
          { "30Rnd_45ACP_Mag_SMG_01", "30xVermin Rnd [SPC]", 0, -1 },
          { "30Rnd_45ACP_Mag_SMG_01_tracer_green", "30x Vermin Tracer [SPC]", 0, -1 },
          { "30Rnd_9x21_Mag_SMG_02", "9MM SMG 30RND Magazine", 0, -1 },
          { "30Rnd_9x21_Mag_SMG_02_Tracer_Yellow", "9MM SMG 30RND Magazine (TRACER)", 0, -1 },

          { "arifle_SDAR_F", "", 0, -1 },
          { "arifle_SPAR_01_blk_F", "SPAR-16 Black [SGT]", 0, -1 },
          { "arifle_SPAR_01_GL_blk_F", "SPAR-16 GL Black [AR/NCA]", 0, -1 },
          { "arifle_SPAR_02_blk_F", "SPAR-16S Black [AR]", 0, -1 },
          { "arifle_MXC_Black_F", "MXC Black [SGT]", 0, -1 },
          { "arifle_MX_Black_F", "MX Black [DSGT]", 0, -1 },
          { "arifle_MXM_Black_F", "MXM Black [DI]", 0, -1 },
          { "arifle_MX_GL_Black_F", "MX-3GL [AR/NCA]", 0, -1 },
          { "arifle_MX_SW_Black_F", "MX SW [AR]", 0, -1 },

          { "20Rnd_556x45_UW_mag", "SDAR UW 556x45 [MPO]", 0, -1 },
          { "30Rnd_556x45_Stanag", "5.56MM SPAR-16", 0, -1 },
          { "30Rnd_556x45_Stanag_Tracer_Green", "5.56MM SPAR-16 (Tracer)", 0, -1 },
          { "150Rnd_556x45_Drum_Mag_Tracer_F", "150RND 5.56MM Drum", 0, -1 },
          { "30Rnd_65x39_caseless_mag", "30x MX Rnd [SGT]", 0, -1 },
          { "30Rnd_65x39_caseless_mag_Tracer", "30x MX Tracer [SGT]", 0, -1 },
          { "100Rnd_65x39_caseless_mag", "100x MX SW", 0, -1 },

          { "1Rnd_Smoke_Grenade_shell", "Smokegrenade (Spar-16)", 0, -1 },
          { "3Rnd_Smoke_Grenade_shell", "MX-3GL Smoke Grenade Round", 0, -1 },

          { "srifle_EBR_F", "MK18 [MARKSMEN]", 0, -1 },
          { "srifle_DMR_03_F", "MK-1 [MARKSMEN]", 0, -1 },
          { "arifle_SPAR_03_blk_F", "SPAR 7.62mm DMR [MARKSMEN]", 0, -1 },
          { "20Rnd_762x51_Mag", "20X 7.62MM DMR ROUNDS [MARKSMEN]", 0, -1 },

          { "optic_MRD", "4-Five Scope [CSI]", 0, -1 },
          { "optic_Holosight_smg", "Holographic SMG [SPC]", 0, -1 },
          { "optic_Holosight_smg_blk_F", "Holographic SMG Black [SPC]", 0, -1 },
          { "optic_Aco", "Red ACO Scope", 0, -1 },
          { "optic_Aco_grn", "Green ACO Scope", 0, -1 },
          { "optic_Holosight", "Holographic Scope", 0, -1 },
          { "optic_Holosight_blk_F", "Holographic Black", 0, -1 },
          { "optic_Hamr", "RCO Scope", 0, -1 },
          { "optic_MRCO", "MRCO Scope", 0, -1 },
          { "optic_ARCO", "ARCO Scope", 0, -1 },
          { "optic_Hamr", "ARCO Black Scope", 0, -1 },
          { "optic_ARCO_blk_F", "ARCO Black Scope", 0, -1 },
          { "optic_ERCO_blk_F", "ERCO Black Scope", 0, -1 },
          { "optic_ERCO_blk_F", "DMS Scope", 0, -1 },
          { "optic_SOS", "(S)MOS Scope", 0, -1 },
          { "optic_AMS", "AMS Scope", 0, -1 },
          { "optic_LRPS", "LRPS Scope", 0, -1 },

          { "muzzle_snds_L", "9MM SMG Supressor", 0, -1 },
          { "muzzle_snds_acp", ".45 Vermin Supressor", 0, -1 },
          { "muzzle_snds_M", "5.56 Silencer(MK-20+SPAR16)[SPC]", 0, -1 },
          { "muzzle_snds_H", "6.5MM Supressor", 0, -1 },
          { "muzzle_snds_B", "7.62MM Supressor", 0, -1 },
          { "bipod_01_F_blk", "Bipod", 0, -1 },
          { "acc_flashlight", "Flashlight", 0, -1 },
          { "acc_pointer_IR", "", 0, -1 },
          { "HandGrenade_Stone", "Flashbang", 0, -1 },

          { "ToolKit", "", 0, -1 },
          { "Medikit", "", 0, -1 },
          { "FirstAidKit", "", 0, -1 },
          { "Binocular", "", 0, -1 },
          { "Rangefinder", "Rangefinders", 0, -1 },
          { "ItemGPS", "", 0, -1 },
          { "ItemCompass", "", 0, -1 },
          { "ItemWatch", "", 0, -1 },
          { "ItemMap", "", 0, -1 },
          { "ItemRadio", "", 0, -1 },
          { "B_UavTerminal", "", 0, -1 },
          { "NVGoggles_OPFOR", "", 0, -1 }
        };
        mags[] = {
        };
    };

    class cop_nca {
        name = "Altis NCA Armoury";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 1, "You must be a NCA Rank!" };
        items[] = {
          { "hgun_P07_snds_F", "Taser Pistol", 0, -1 },
          { "hgun_Rook40_snds_F", "Taser Pistol (Black)", 0, -1 },
          { "16Rnd_9x21_Mag", "16xTaser Rnd", 0, -1 },

          { "arifle_Mk20C_plain_F", "Taser Rifle", 0, -1 },
          { "arifle_Mk20_plain_F", "Taser Rifle LG [SPC]", 0, -1 },
          { "30Rnd_556x45_Stanag", "Lethal Bullets", 0, -1 },
          { "30Rnd_556x45_Stanag_Tracer_Green", "Rubber Bullets", 0, -1 },

          { "hgun_Rook40_F", "Rook", 0, -1 },
          { "hgun_Pistol_01_F", "PM 9mm [SI]", 0, -1 },
          { "16Rnd_9x21_Mag", "16RND Rook ammo", 0, -1 },
          { "16Rnd_9x21_Mag", "10RND PMM 9mm", 0, -1 },

          { "SMG_01_F", "Vermin [SPC]", 0, -1 },
          { "SMG_01_Holo_F", "Taser Rifle LG [SPC]", 0, -1 },
          { "SMG_05_F", "Protector [SPC]", 0, -1 },
          { "SMG_02_F", "Sting [SPC]", 0, -1 },
          { "30Rnd_45ACP_Mag_SMG_01", "30xVermin Rnd [SPC]", 0, -1 },
          { "30Rnd_45ACP_Mag_SMG_01_tracer_green", "30x Vermin Tracer [SPC]", 0, -1 },
          { "30Rnd_9x21_Mag_SMG_02", "9MM SMG 30RND Magazine", 0, -1 },
          { "30Rnd_9x21_Mag_SMG_02_Tracer_Yellow", "9MM SMG 30RND Magazine (TRACER)", 0, -1 },

          { "arifle_SDAR_F", "", 0, -1 },
          { "arifle_SPAR_01_blk_F", "SPAR-16 Black [SGT]", 0, -1 },
          { "arifle_SPAR_01_GL_blk_F", "SPAR-16 GL Black [AR/NCA]", 0, -1 },
          { "arifle_MXC_Black_F", "MXC Black [SGT]", 0, -1 },
          { "arifle_MX_Black_F", "MX Black [DSGT]", 0, -1 },
          { "arifle_MXM_Black_F", "MXM Black [DI]", 0, -1 },
          { "arifle_MX_GL_Black_F", "MX-3GL [AR/NCA]", 0, -1 },

          { "20Rnd_556x45_UW_mag", "SDAR UW 556x45 [MPO]", 0, -1 },
          { "30Rnd_556x45_Stanag", "5.56MM SPAR-16", 0, -1 },
          { "30Rnd_556x45_Stanag_Tracer_Green", "5.56MM SPAR-16 (Tracer)", 0, -1 },
          { "30Rnd_65x39_caseless_mag", "30x MX Rnd [SGT]", 0, -1 },
          { "30Rnd_65x39_caseless_mag_Tracer", "30x MX Tracer [SGT]", 0, -1 },

          { "1Rnd_Smoke_Grenade_shell", "Smokegrenade (Spar-16)", 0, -1 },
          { "3Rnd_Smoke_Grenade_shell", "MX-3GL Smoke Grenade Round", 0, -1 },

          { "optic_Holosight_smg", "Holographic SMG [SPC]", 0, -1 },
          { "optic_Holosight_smg_blk_F", "Holographic SMG Black [SPC]", 0, -1 },
          { "optic_Aco", "Red ACO Scope", 0, -1 },
          { "optic_Aco_grn", "Green ACO Scope", 0, -1 },
          { "optic_Holosight", "Holographic Scope", 0, -1 },
          { "optic_Holosight_blk_F", "Holographic Black", 0, -1 },
          { "optic_Hamr", "RCO Scope", 0, -1 },
          { "optic_MRCO", "MRCO Scope", 0, -1 },
          { "optic_ARCO", "ARCO Scope", 0, -1 },
          { "optic_ARCO_blk_F", "ARCO Black Scope", 0, -1 },
          { "optic_ERCO_blk_F", "ERCO Black Scope", 0, -1 },
          { "optic_ERCO_blk_F", "DMS Scope", 0, -1 },

          { "muzzle_snds_L", "9MM SMG Supressor", 0, -1 },
          { "muzzle_snds_acp", ".45 Vermin Supressor", 0, -1 },
          { "muzzle_snds_M", "5.56 Silencer(MK-20+SPAR16)[SPC]", 0, -1 },
          { "muzzle_snds_H", "6.5MM Supressor", 0, -1 },
          { "bipod_01_F_blk", "Bipod", 0, -1 },
          { "acc_flashlight", "Flashlight", 0, -1 },
          { "acc_pointer_IR", "", 0, -1 },
          { "SmokeShell", "Smoke Grenade", 0, -1 },

          { "ToolKit", "", 0, -1 },
          { "Medikit", "", 0, -1 },
          { "FirstAidKit", "", 0, -1 },
          { "Binocular", "", 0, -1 },
          { "Rangefinder", "Rangefinders", 0, -1 },
          { "ItemGPS", "", 0, -1 },
          { "ItemCompass", "", 0, -1 },
          { "ItemWatch", "", 0, -1 },
          { "ItemMap", "", 0, -1 },
          { "ItemRadio", "", 0, -1 },
          { "B_UavTerminal", "", 0, -1 },
          { "NVGoggles_OPFOR", "", 0, -1 }
        };
        mags[] = {
        };
    };

    class cop_arv {
        name = "Altis ARV Armoury";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 1, "You must be a ARV Rank!" };
        items[] = {
          { "hgun_P07_snds_F", "Taser Pistol", 0, -1 },
          { "hgun_Rook40_snds_F", "Taser Pistol (Black)", 0, -1 },
          { "16Rnd_9x21_Mag", "16xTaser Rnd", 0, -1 },

          { "arifle_Mk20C_plain_F", "Taser Rifle", 0, -1 },
          { "arifle_Mk20_plain_F", "Taser Rifle LG [SPC]", 0, -1 },
          { "30Rnd_556x45_Stanag", "Lethal Bullets", 0, -1 },
          { "30Rnd_556x45_Stanag_Tracer_Green", "Rubber Bullets", 0, -1 },

          { "hgun_Rook40_F", "Rook", 0, -1 },
          { "hgun_Pistol_01_F", "PM 9mm [SI]", 0, -1 },
          { "hgun_Pistol_heavy_02_F", "Zubr [SI]", 0, -1 },
          { "hgun_Pistol_heavy_01_F", "4-Five [CSI]", 0, -1 },
          { "16Rnd_9x21_Mag", "16RND Rook ammo", 0, -1 },
          { "16Rnd_9x21_Mag", "10RND PMM 9mm", 0, -1 },
          { "6Rnd_45ACP_Cylinder", "6RND Zubr .45 ACP [SI]", 0, -1 },
          { "11Rnd_45ACP_Mag", "11RND .45 ACP Magazine [CSI]", 0, -1 },

          { "SMG_01_F", "Vermin [SPC]", 0, -1 },
          { "SMG_01_Holo_F", "Taser Rifle LG [SPC]", 0, -1 },
          { "SMG_05_F", "Protector [SPC]", 0, -1 },
          { "SMG_02_F", "Sting [SPC]", 0, -1 },
          { "30Rnd_45ACP_Mag_SMG_01", "30xVermin Rnd [SPC]", 0, -1 },
          { "30Rnd_45ACP_Mag_SMG_01_tracer_green", "30x Vermin Tracer [SPC]", 0, -1 },
          { "30Rnd_9x21_Mag_SMG_02", "9MM SMG 30RND Magazine", 0, -1 },
          { "30Rnd_9x21_Mag_SMG_02_Tracer_Yellow", "9MM SMG 30RND Magazine (TRACER)", 0, -1 },

          { "arifle_SDAR_F", "", 0, -1 },
          { "arifle_SPAR_01_blk_F", "SPAR-16 Black [SGT]", 0, -1 },
          { "arifle_SPAR_01_GL_blk_F", "SPAR-16 GL Black [AR/NCA]", 0, -1 },
          { "arifle_SPAR_02_blk_F", "SPAR-16S Black [AR]", 0, -1 },
          { "arifle_MXC_Black_F", "MXC Black [SGT]", 0, -1 },
          { "arifle_MX_Black_F", "MX Black [DSGT]", 0, -1 },
          { "arifle_MXM_Black_F", "MXM Black [DI]", 0, -1 },
          { "arifle_MX_GL_Black_F", "MX-3GL [AR/NCA]", 0, -1 },
          { "arifle_MX_SW_Black_F", "MX SW [AR]", 0, -1 },

          { "20Rnd_556x45_UW_mag", "SDAR UW 556x45 [MPO]", 0, -1 },
          { "30Rnd_556x45_Stanag", "5.56MM SPAR-16", 0, -1 },
          { "30Rnd_556x45_Stanag_Tracer_Green", "5.56MM SPAR-16 (Tracer)", 0, -1 },
          { "150Rnd_556x45_Drum_Mag_Tracer_F", "150RND 5.56MM Drum", 0, -1 },
          { "30Rnd_65x39_caseless_mag", "30x MX Rnd [SGT]", 0, -1 },
          { "30Rnd_65x39_caseless_mag_Tracer", "30x MX Tracer [SGT]", 0, -1 },
          { "100Rnd_65x39_caseless_mag", "100x MX SW", 0, -1 },

          { "1Rnd_Smoke_Grenade_shell", "Smokegrenade (Spar-16)", 0, -1 },
          { "3Rnd_Smoke_Grenade_shell", "MX-3GL Smoke Grenade Round", 0, -1 },

          { "srifle_EBR_F", "MK18 [MARKSMEN]", 0, -1 },
          { "srifle_DMR_03_F", "MK-1 [MARKSMEN]", 0, -1 },
          { "arifle_SPAR_03_blk_F", "SPAR 7.62mm DMR [MARKSMEN]", 0, -1 },
          { "20Rnd_762x51_Mag", "20X 7.62MM DMR ROUNDS [MARKSMEN]", 0, -1 },

          { "optic_MRD", "4-Five Scope [CSI]", 0, -1 },
          { "optic_Holosight_smg", "Holographic SMG [SPC]", 0, -1 },
          { "optic_Holosight_smg_blk_F", "Holographic SMG Black [SPC]", 0, -1 },
          { "optic_Aco", "Red ACO Scope", 0, -1 },
          { "optic_Aco_grn", "Green ACO Scope", 0, -1 },
          { "optic_Holosight", "Holographic Scope", 0, -1 },
          { "optic_Holosight_blk_F", "Holographic Black", 0, -1 },
          { "optic_Hamr", "RCO Scope", 0, -1 },
          { "optic_MRCO", "MRCO Scope", 0, -1 },
          { "optic_ARCO", "ARCO Scope", 0, -1 },
          { "optic_Hamr", "ARCO Black Scope", 0, -1 },
          { "optic_ARCO_blk_F", "ARCO Black Scope", 0, -1 },
          { "optic_ERCO_blk_F", "ERCO Black Scope", 0, -1 },
          { "optic_ERCO_blk_F", "DMS Scope", 0, -1 },
          { "optic_SOS", "(S)MOS Scope", 0, -1 },
          { "optic_AMS", "AMS Scope", 0, -1 },
          { "optic_LRPS", "LRPS Scope", 0, -1 },

          { "muzzle_snds_L", "9MM SMG Supressor", 0, -1 },
          { "muzzle_snds_acp", ".45 Vermin Supressor", 0, -1 },
          { "muzzle_snds_M", "5.56 Silencer(MK-20+SPAR16)[SPC]", 0, -1 },
          { "muzzle_snds_H", "6.5MM Supressor", 0, -1 },
          { "muzzle_snds_B", "7.62MM Supressor", 0, -1 },
          { "bipod_01_F_blk", "Bipod", 0, -1 },
          { "acc_flashlight", "Flashlight", 0, -1 },
          { "acc_pointer_IR", "", 0, -1 },
          { "HandGrenade_Stone", "Flashbang", 0, -1 },
          { "SmokeShell", "Smoke Grenade", 0, -1 },

          { "ToolKit", "", 0, -1 },
          { "Medikit", "", 0, -1 },
          { "FirstAidKit", "", 0, -1 },
          { "Binocular", "", 0, -1 },
          { "Rangefinder", "Rangefinders", 0, -1 },
          { "ItemGPS", "", 0, -1 },
          { "ItemCompass", "", 0, -1 },
          { "ItemWatch", "", 0, -1 },
          { "ItemMap", "", 0, -1 },
          { "ItemRadio", "", 0, -1 },
          { "B_UavTerminal", "", 0, -1 },
          { "NVGoggles_OPFOR", "", 0, -1 }
        };
        mags[] = {
        };
    };

    //Medic Shops
    class med_basic {
        name = "store";
        side = "med";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "ItemGPS", "", 100, -1 },
            { "Binocular", "", 150, -1 },
            { "ToolKit", "", 250, -1 },
            { "FirstAidKit", "", 150, -1 },
            { "Medikit", "", 0, -1 },
            { "NVGoggles", "", 0, -1 }
        };
        mags[] = {};
    };
};
