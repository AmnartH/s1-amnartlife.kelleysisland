/*
*    ARRAY FORMAT:
*        0: STRING (Classname)
*        1: STRING (Display Name, leave as "" for default)
*        2: SCALAR (Price)
*        4: ARRAY (This is for limiting items to certain things)
*            0: Variable to read from
*            1: Variable Value Type (SCALAR / BOOL / EQUAL)
*            2: What to compare to (-1 = Check Disabled)
*
*   Clothing classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Equipment
*   Backpacks/remaining classnames can be found here (TIP: Search page for "pack"): https://community.bistudio.com/wiki/Arma_3_CfgVehicles_EMPTY
*
*/
class Clothing {
    class bruce {
        title = "Clothing Store";
        license = "";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },

            //New Apex Civilian Clothing
            { "U_C_man_sport_1_F", "Beach Sport Clothes", 250, { "", "", -1 } },
            { "U_C_man_sport_2_F", "Orange Sport Clothes", 250, { "", "", -1 } },
            { "U_C_man_sport_3_F", "Blue Sport Clothes", 250, { "", "", -1 } },
            { "U_C_Man_casual_1_F", "Navy Casuals", 250, { "", "", -1 } },
            { "U_C_Man_casual_2_F", "Blue Casuals", 250, { "", "", -1 } },
            { "U_C_Man_casual_3_F", "Green Casuals", 250, { "", "", -1 } },
            { "U_C_Man_casual_4_F", "Sky Summer Clothes", 250, { "", "", -1 } },
            { "U_C_Man_casual_5_F", "Yellow Summer Clothes", 250, { "", "", -1 } },
            { "U_C_Man_casual_6_F", "Red Summer Clothes", 250, { "", "", -1 } },

            //New Apex clothing by Amnart
            { "U_I_C_Soldier_Bandit_4_F", "Shorts & Checkered shirt", 250, { "", "", -1 } },
            { "U_I_C_Soldier_Bandit_2_F", "Polo Skull", 250, { "", "", -1 } },
            { "U_I_C_Soldier_Bandit_5_F", "Sweaty tank top", 250, { "", "", -1 } },
            { "U_I_C_Soldier_Bandit_3_F", "T-shirt and jeans", 250, { "", "", -1 } },

            //Normal Altis Life clothing
            { "U_C_Poloshirt_blue", "Poloshirt Red/White", 250, { "", "", -1 } },
            { "U_C_Poloshirt_burgundy", "Surfing On Land", 250, { "", "", -1 } },
            { "U_C_Poloshirt_redwhite", "Poloshirt Red/White", 250, { "", "", -1 } },
            { "U_C_Poloshirt_salmon", "Poloshirt Salmon", 250, { "", "", -1 } },
            { "U_C_Poloshirt_stripped", "Poloshirt stripped", 250, { "", "", -1 } },
            { "U_C_Poloshirt_tricolour", "Poloshirt Tricolor", 250, { "", "", -1 } },
            { "U_C_Poor_2", "Rag tagged clothes", 250, { "", "", -1 } },
            { "U_IG_Guerilla2_2", "Green stripped shirt & Pants", 650, { "", "", -1 } },
            { "U_IG_Guerilla3_1", "Brown Jacket & Pants", 735, { "", "", -1 } },
            { "U_IG_Guerilla2_3", "The Outback Wrangler", 1200, { "", "", -1 } },
            { "U_C_HunterBody_grn", "The Hunter Look", 1500, { "", "", -1 } },
            { "U_C_WorkerCoveralls", "Mechanic Coveralls", 2500, { "", "", -1 } },
            { "U_OrestesBody", "Surfing On Land", 1100, { "", "", -1 } },
            { "U_C_Journalist", "News", 20000, { "", "", -1 } },

            { "U_C_Poor_1", "Poor", 100, { "", "", -1 } },
            { "U_NikosBody", "Niko", 1000, { "", "", -1 } },
            { "U_I_G_Story_Protagonist_F", "Protagonist", 1000, { "", "", -1 } },
            { "U_I_G_resistanceLeader_F", "Resistance Leader", 1000, { "", "", -1 } },
            { "U_I_HeliPilotCoveralls", "Heli Pilot Coveralls", 1000, { "", "", -1 } },
            { "U_B_HeliPilotCoveralls", "Heli Pilot Coveralls", 1000, { "", "", -1 } },
            { "U_B_PilotCoveralls", "PilotCoveralls Blue", 1000, { "", "", -1 } },
            { "U_I_pilotCoveralls", "PilotCoveralls Green", 1000, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "H_Bandanna_camo", "Camo Bandanna", 120, { "", "", -1 } },
            { "H_Bandanna_gry", "Grey Bandanna", 150, { "", "", -1 } },
            { "H_Bandanna_cbr", "", 165, { "", "", -1 } },
            { "H_Bandanna_surfer", "", 135, { "", "", -1 } },
            { "H_Bandanna_khk", "Khaki Bandanna", 145, { "", "", -1 } },
            { "H_Bandanna_sgg", "Sage Bandanna", 160, { "", "", -1 } },
            { "H_StrawHat", "Dark Straw Fedora", 225, { "", "", -1 } },
            { "H_BandMask_blk", "Hat & Bandanna", 300, { "", "", -1 } },
            { "H_Booniehat_tan", "", 425, { "", "", -1 } },
            { "H_Hat_blue", "", 310, { "", "", -1 } },
            { "H_Hat_brown", "", 276, { "", "", -1 } },
            { "H_Hat_checker", "", 340, { "", "", -1 } },
            { "H_Hat_grey", "", 280, { "", "", -1 } },
            { "H_Hat_tan", "", 265, { "", "", -1 } },
            { "H_Cap_blu", "", 150, { "", "", -1 } },
            { "H_Cap_grn", "", 150, { "", "", -1 } },
            { "H_Cap_grn_BI", "", 150, { "", "", -1 } },
            { "H_Cap_oli", "", 150, { "", "", -1 } },
            { "H_Cap_red", "", 150, { "", "", -1 } },
            { "H_Cap_surfer", "", 150, { "", "", -1 } },
            { "H_Cap_blk_ION", "", 150, { "", "", -1 } },
            { "H_Cap_oli_hs", "", 150, { "", "", -1 } },
            { "H_Cap_blk_Raven", "", 150, { "", "", -1 } },
            { "H_Cap_khaki_specops_UK", "", 150, { "", "", -1 } },
            { "H_Cap_blk_CMMG", "", 150, { "", "", -1 } },
            { "H_Cap_tan", "", 150, { "", "", -1 } },
            { "H_Cap_press", "News Cap", 500, { "", "", -1 } },
            { "H_Cap_usblack", "USA Hat", 200, { "", "", -1 } },
            { "H_StrawHat_dark", "Dark Fedora", 500, { "", "", -1 } },
            { "H_Helmet_Skate", "Skate Helmet", 1000, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
            { "G_Shades_Black", "", 25, { "", "", -1 } },
            { "G_Shades_Blue", "", 20, { "", "", -1 } },
            { "G_Sport_Blackred", "", 20, { "", "", -1 } },
            { "G_Sport_Checkered", "", 20, { "", "", -1 } },
            { "G_Sport_Blackyellow", "", 20, { "", "", -1 } },
            { "G_Sport_BlackWhite", "", 20, { "", "", -1 } },
            { "G_Squares", "", 10, { "", "", -1 } },
            { "G_Aviator", "", 100, { "", "", -1 } },
            { "G_Spectacles", "Hipster Glasses", 100, { "", "", -1 } },
            { "G_Spectacles_Tinted", "Hipster Sunglasses", 100, { "", "", -1 } },
            { "G_Lady_Mirror", "", 150, { "", "", -1 } },
            { "G_Lady_Dark", "", 150, { "", "", -1 } },
            { "G_Lady_Blue", "", 150, { "", "", -1 } },
            { "G_Lowprofile", "", 30, { "", "", -1 } },
            { "G_Goggles_VR", "", 30, { "", "", -1 } },
            { "G_Combat", "", 55, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
            { "B_AssaultPack_cbr", "", 2500, { "", "", -1 } },
            { "B_AssaultPack_blk", "", 2500, { "", "", -1 } },
            { "B_Kitbag_mcamo", "", 4500, { "", "", -1 } },
            { "B_TacticalPack_oli", "", 3500, { "", "", -1 } },
            { "B_FieldPack_ocamo", "", 3000, { "", "", -1 } },
            { "B_FieldPack_blk", "", 3000, { "", "", -1 } },
            { "B_Bergen_sgg", "", 4500, { "", "", -1 } },
            { "B_Kitbag_cbr", "", 4500, { "", "", -1 } },
            { "B_Carryall_oli", "", 5000, { "", "", -1 } },
            { "B_Carryall_khk", "", 5000, { "", "", -1 } }
        };
    };

    class cop {
        title = "Police Clothing Store";
        license = "";
        side = "cop";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "U_I_CombatUniform", "CSO/PCSO Uniform", 0, { "", "", -1 } },
            { "U_IG_Guerrilla_6_1", "PC Uniform", 0, { "", "", -1 } },
            { "U_I_CombatUniform_tshirt", "National Crime Agency", 0, { "", "", -1 } },
            { "U_B_HeliPilotCoveralls", "NPAS Uniform", 0, { "", "", -1 } },
            { "U_B_CombatUniform_mcam_worn", "Armed Response", 0, { "", "", -1 } },
            { "U_B_Wetsuit", "Police Wetsuit", 0, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "H_Cap_blk", "", 0, { "life_coplevel", "SCALAR", -1 } },
            { "H_Beret_blk", "Police Beret", 0, { "life_coplevel", "SCALAR", -1 } },
            { "H_Beret_gen_F", "Command Beret", 0, { "life_coplevel", "SCALAR", -1 } },
            { "H_Watchcap_blk", "Beanie", 0, { "life_coplevel", "SCALAR", -1 } },
            { "H_Booniehat_khk", "Boonie Hat", 0, { "life_coplevel", "SCALAR", -1 } },
            { "H_Cap_police", "National Crime Agency Cap", 0, { "life_coplevel", "SCALAR", -1 } },
            { "H_PilotHelmetHeli_B", "NPAS Helmet", 0, { "life_coplevel", "SCALAR", -1 } },
            { "H_HelmetB_plain_blk", "AR Helmet", 0, { "life_coplevel", "SCALAR", -1 } },
            { "H_HelmetSpecB_blk", "AR (Tactical) Helmet", 0, { "life_coplevel", "SCALAR", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
            { "G_Shades_Black", "", 0, { "", "", -1 } },
            { "G_Shades_Blue", "", 0, { "", "", -1 } },
            { "G_Sport_Blackred", "", 0, { "", "", -1 } },
            { "G_Sport_Checkered", "", 0, { "", "", -1 } },
            { "G_Sport_Blackyellow", "", 0, { "", "", -1 } },
            { "G_Sport_BlackWhite", "", 0, { "", "", -1 } },
            { "G_Aviator", "", 0, { "", "", -1 } },
            { "G_Squares", "", 0, { "", "", -1 } },
            { "G_Lowprofile", "", 0, { "", "", -1 } },
            { "G_Combat", "", 0, { "", "", -1 } },
            { "G_Spectacles_Tinted", "", 0, { "", "", -1 } },
            { "G_B_Diving", "Diving Goggles", 0, { "", "", -1 } },
            { "G_Balaclava_TI_G_blk_F", "Black Balaclava Combat Goggles", 0, { "", "", -1 } },
            { "G_Balaclava_blk", "AR Balaclava", 0, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "V_TacVest_blk_POLICE", "Police Vest", 0, { "", "", -1 } },
            { "V_PlateCarrier2_blk", "Carrier Rig", 0, { "", "", -1 } },
            { "V_RebreatherB", "Rebreather", 0, { "life_coplevel", "SCALAR", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
            { "B_Carryall_mcamo", "Cop Backpack", 0, { "", "", -1 } }
        };
    };

    class dive {
        title = "STR_Shops_C_Diving";
        license = "dive";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "U_B_Wetsuit", "", 2000, { "", "", -1 } },
            { "U_O_Wetsuit", "", 2000, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
            { "G_Diving", "", 500, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "V_RebreatherB", "", 5000, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } }
        };
    };

    class gun_clothing {
        title = "STR_Shops_C_Gun";
        license = "gun";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } }
        };
    };

    class gang_clothing {
        title = "STR_Shops_C_Gang";
        license = "";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } }
        };
    };

    class med_clothing {
        title = "NHS Clothing";
        license = "";
        side = "med";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "U_O_OfficerUniform_ocamo", "NHS Uniform", 0, { "", "", -1 } },
            { "U_B_Wetsuit", "", 0, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "H_Cap_blk", "", 0, { "", "", -1 } },
            { "H_Cap_oli", "", 0, { "", "", -1 } },
            { "H_Cap_red", "", 0, { "", "", -1 } },
            { "H_Cap_tan", "", 0, { "", "", -1 } },
            { "H_Cap_blu", "", 0, { "", "", -1 } },
            { "H_Hat_blue", "", 0, { "", "", -1 } },
            { "H_Hat_brown", "", 0, { "", "", -1 } },
            { "H_Hat_grey", "", 0, { "", "", -1 } }

        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
            { "G_Shades_Black", "", 0, { "", "", -1 } },
            { "G_Shades_Blue", "", 0, { "", "", -1 } },
            { "G_Sport_Blackred", "", 0, { "", "", -1 } },
            { "G_Sport_Checkered", "", 0, { "", "", -1 } },
            { "G_Sport_Blackyellow", "", 0, { "", "", -1 } },
            { "G_Sport_BlackWhite", "", 0, { "", "", -1 } },
            { "G_Aviator", "", 0, { "", "", -1 } },
            { "G_Squares", "", 0, { "", "", -1 } },
            { "G_Lowprofile", "", 0, { "", "", -1 } },
            { "G_Combat", "", 0, { "", "", -1 } },
            { "G_Diving", "", 0, { "", "", -1 } }

        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "V_RebreatherB", "", 0, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
            { "B_Carryall_mcamo", "NHS Backpack", 0, { "", "", -1 } }
        };
    };

    class reb {
        title = "British Hope Stores";
        license = "rebel";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "U_IG_Guerilla1_1", "", 5000, {"", "", -1} },
            { "U_BG_Guerrilla_6_1", "", 5000, {"", "", -1} },
            { "U_BG_Guerilla2_1", "", 5000, {"", "", -1} },
            { "U_BG_Guerilla2_2", "", 5000, {"", "", -1} },
            { "U_BG_Guerilla2_3", "", 5000, {"", "", -1} },
            { "U_BG_Guerilla3_1", "", 5000, {"", "", -1} },

            { "U_BG_Guerilla1_1", "", 5000, {"", "", -1} },
            { "U_BG_Guerilla3_2", "", 5000, {"", "", -1} },
            { "U_OG_Guerilla2_1", "", 5000, {"", "", -1} },
            { "U_OG_Guerilla2_2", "", 5000, {"", "", -1} },
            { "U_OG_Guerilla2_3", "", 5000, {"", "", -1} },
            { "U_OG_Guerilla3_1", "", 5000, {"", "", -1} },
            { "U_OG_Guerilla3_2", "", 5000, {"", "", -1} },
            { "U_OG_leader", "", 5000, {"", "", -1} },
            { "U_I_HeliPilotCoveralls", "", 5000, {"", "", -1} },
            { "U_I_pilotCoveralls", "", 5000, {"", "", -1} },

            { "U_I_G_Story_Protagonist_F", "", 7500, {"", "", -1} },
            { "U_I_G_resistanceLeader_F", "", 11500, {"", "", -1} },

            { "U_IG_leader", "Guerilla Leader", 15340, {"", "", -1} },
            { "U_BG_leader", "Guerilla Leader 2", 15340, {"", "", -1} },

            { "U_B_FullGhillie_lsh", "", 200000, {"", "", -1} },
            { "U_B_FullGhillie_sard", "", 200000, {"", "", -1} },
            { "U_B_FullGhillie_ard", "", 200000, {"", "", -1} },

            { "U_I_CombatUniform", "", 10000, {"", "", -1} },
            { "U_I_CombatUniform_tshirt", "", 10000, {"", "", -1} },
            { "U_I_CombatUniform_shortsleeve", "", 10000, {"", "", -1} },
            { "U_I_CombatUniform_shortsleeve", "", 10000, {"", "", -1} },

            { "U_I_FullGhillie_lsh", "", 200000, {"", "", -1} },
            { "U_I_FullGhillie_sard", "", 200000, {"", "", -1} },
            { "U_I_FullGhillie_ard", "", 200000, {"", "", -1} },
            { "U_B_GhillieSuit", "", 150000, {"", "", -1} },
            { "U_I_GhillieSuit", "", 150000, {"", "", -1} },

            { "U_I_C_Soldier_Para_2_F", "", 15000, {"", "", -1} },
            { "U_I_C_Soldier_Para_3_F", "", 15000, {"", "", -1} },
            { "U_I_C_Soldier_Para_5_F", "", 7500, {"", "", -1} },
            { "U_I_C_Soldier_Para_1_F", "", 10000, {"", "", -1} },
            { "U_O_T_Officer_F", "", 10000, {"", "", -1} },
            { "U_O_T_Soldier_F", "", 10000, {"", "", -1} },
            { "U_B_T_Soldier_AR_F", "", 10000, {"", "", -1} },
            { "U_B_CTRG_Soldier_urb_3_F", "", 10000, {"", "", -1} },
            { "U_B_CTRG_Soldier_urb_2_F", "", 10000, {"", "", -1} }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "H_MilCap_oucamo", "", 1200, { "", "", -1 } },
            { "H_MilCap_ghex_F", "", 1200, { "", "", -1 } },
            { "H_MilCap_tna_F", "", 1200, { "", "", -1 } },
            { "H_Watchcap_blk", "", 500, { "", "", -1 } },
            { "H_HelmetO_ocamo", "", 2500, { "", "", -1 } },
            { "H_Bandanna_camo", "", 650, { "", "", -1 } },
            { "H_Booniehat_khk", "", 850, { "", "", -1 } },
            { "H_Booniehat_indp", "", 850, { "", "", -1 } },
            { "H_Booniehat_mcamo", "", 850, { "", "", -1 } },
            { "H_Booniehat_tan", "", 850, { "", "", -1 } },
            { "H_Booniehat_dirty", "", 850, { "", "", -1 } },
            { "H_Booniehat_dgtl", "", 850, { "", "", -1 } },
            { "H_Booniehat_khk_hs", "", 850, { "", "", -1 } },
            { "H_Booniehat_tna_F", "", 850, { "", "", -1 } },
            { "H_HelmetB_plain_mcamo", "", 850, { "", "", -1 } },
            { "H_Cap_headphones", "", 850, { "", "", -1 } },
            { "H_HelmetCrew_I", "", 850, { "", "", -1 } },
            { "H_CrewHelmetHeli_B", "", 850, { "", "", -1 } },
            { "H_MilCap_rucamo", "", 850, { "", "", -1 } },
            { "H_MilCap_ocamo", "", 850, { "", "", -1 } },
            { "H_HelmetLeaderO_ocamo", "", 850, { "", "", -1 } },
            { "H_PilotHelmetHeli_O", "", 850, { "", "", -1 } },
            { "H_HelmetCrew_B", "", 850, { "", "", -1 } },
            { "H_HelmetB_grass", "", 850, { "", "", -1 } },
            { "H_HelmetB_snakeskin", "", 850, { "", "", -1 } },
            { "H_HelmetB_desert", "", 850, { "", "", -1 } },
            { "H_ShemagOpen_tan", "", 75000, { "", "", -1 } },
            { "H_Shemag_olive", "", 75000, { "", "", -1 } },
            { "H_ShemagOpen_khk", "", 75000, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
            { "G_Balaclava_blk", "", 75000, { "", "", -1 } },
            { "G_Balaclava_combat", "", 75000, { "", "", -1 } },
            { "G_Balaclava_lowprofile", "", 75000, { "", "", -1 } },
            { "G_Balaclava_oli", "", 75000, { "", "", -1 } },
            { "G_Shades_Black", "", 25, { "", "", -1 } },
            { "G_Shades_Blue", "", 20, { "", "", -1 } },
            { "G_Sport_Blackred", "", 20, { "", "", -1 } },
            { "G_Sport_Checkered", "", 20, { "", "", -1 } },
            { "G_Sport_Blackyellow", "", 20, { "", "", -1 } },
            { "G_Sport_BlackWhite", "", 20, { "", "", -1 } },
            { "G_Squares", "", 10, { "", "", -1 } },
            { "G_Lowprofile", "", 30, { "", "", -1 } },
            { "G_Combat", "", 55, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "V_TacVest_khk", "", 12500, { "", "", -1 } },
            { "V_BandollierB_cbr", "", 4500, { "", "", -1 } },
            { "V_HarnessO_brn", "", 7500, { "", "", -1 } },
            { "V_BandollierB_khk", "", 7500, { "", "", -1 } },
            { "V_BandollierB_blk", "", 7500, { "", "", -1 } },
            { "V_BandollierB_oli", "", 7500, { "", "", -1 } },
            { "V_BandollierB_ghex_F", "", 7500, { "", "", -1 } },
            { "V_HarnessOGL_brn", "", 7500, { "", "", -1 } },
            { "V_HarnessO_gry", "", 7500, { "", "", -1 } },
            { "V_HarnessOGL_gry", "", 7500, { "", "", -1 } },
            { "V_HarnessOSpec_brn", "", 7500, { "", "", -1 } },
            { "V_HarnessOSpec_gry", "", 7500, { "", "", -1 } },
            { "V_HarnessO_ghex_F", "", 7500, { "", "", -1 } },
            { "V_PlateCarrierH_CTRG", "", 7500, { "", "", -1 } },
            { "V_PlateCarrier2_tna_F", "", 7500, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
            { "B_AssaultPack_cbr", "", 2500, { "", "", -1 } },
            { "B_AssaultPack_blk", "", 2500, { "", "", -1 } },
            { "B_Kitbag_mcamo", "", 4500, { "", "", -1 } },
            { "B_TacticalPack_oli", "", 3500, { "", "", -1 } },
            { "B_FieldPack_ocamo", "", 3000, { "", "", -1 } },
            { "B_FieldPack_ghex_F", "", 3000, { "", "", -1 } },
            { "B_FieldPack_blk", "", 3000, { "", "", -1 } },
            { "B_Bergen_sgg", "", 4500, { "", "", -1 } },
            { "B_Kitbag_cbr", "", 4500, { "", "", -1 } },
            { "B_Kitbag_rgr", "", 4500, { "", "", -1 } },
            { "B_Carryall_oli", "", 5000, { "", "", -1 } },
            { "B_Carryall_ghex_F", "", 5000, { "", "", -1 } },
            { "B_Carryall_khk", "", 5000, { "", "", -1 } },

            { "B_ViperHarness_blk_F", "", 5000, { "", "", -1 } },
            { "B_ViperHarness_ghex_F", "", 5000, { "", "", -1 } },
            { "B_ViperHarness_khk_F", "", 5000, { "", "", -1 } },
            { "B_ViperLightHarness_oli_F", "", 5000, { "", "", -1 } }
        };
    };

    class kart {
        title = "Bobbys Kart-Racing Outfits";
        license = "";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "U_C_Driver_1_black", "", 1500, { "", "", -1 } },
            { "U_C_Driver_1_blue", "", 1500, { "", "", -1 } },
            { "U_C_Driver_1_red", "", 1500, { "", "", -1 } },
            { "U_C_Driver_1_orange", "", 1500, { "", "", -1 } },
            { "U_C_Driver_1_green", "", 1500, { "", "", -1 } },
            { "U_C_Driver_1_white", "", 1500, { "", "", -1 } },
            { "U_C_Driver_1_yellow", "", 1500, { "", "", -1 } },
            { "U_C_Driver_2", "", 3500, { "", "", -1 } },
            { "U_C_Driver_1", "", 3600, { "", "", -1 } },
            { "U_C_Driver_3", "", 3700, { "", "", -1 } },
            { "U_C_Driver_4", "", 3700, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "H_RacingHelmet_1_black_F", "", 1000, { "", "", -1 } },
            { "H_RacingHelmet_1_red_F", "", 1000, { "", "", -1 } },
            { "H_RacingHelmet_1_white_F", "", 1000, { "", "", -1 } },
            { "H_RacingHelmet_1_blue_F", "", 1000, { "", "", -1 } },
            { "H_RacingHelmet_1_yellow_F", "", 1000, { "", "", -1 } },
            { "H_RacingHelmet_1_green_F", "", 1000, { "", "", -1 } },
            { "H_RacingHelmet_1_F", "", 2500, { "", "", -1 } },
            { "H_RacingHelmet_2_F", "", 2500, { "", "", -1 } },
            { "H_RacingHelmet_3_F", "", 2500, { "", "", -1 } },
            { "H_RacingHelmet_4_F", "", 2500, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } }
        };
    };
};
