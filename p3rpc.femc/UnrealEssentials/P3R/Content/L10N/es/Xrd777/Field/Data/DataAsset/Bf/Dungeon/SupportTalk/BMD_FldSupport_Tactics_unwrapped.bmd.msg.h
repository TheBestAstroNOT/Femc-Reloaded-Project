// Decompiled by Atlus Script Tools (2017-2021) © TGE
const int SEL_YESNO                        = 0;
const int SEL_ORDER                        = 1;
const int FSS_FUKA_ORDER                   = 2;
const int SEL_FUKA_YESNO                   = 3;
const int MSG_MITSURU_RETURN_ADVIC         = 4;
const int MSG_FUKA_RETURN_ADVICE           = 5;
const int MSG_MITSURU_NOT_ORDER_BT         = 6;
const int MSG_FUKA_NOT_ORDER_BTL           = 7;
const int MSG_MITSURU_NOT_ORDER_NO         = 8;
const int MSG_FUKA_NOT_ORDER_NOBTL         = 9;
const int MSG_MITU_ORDER_IN_GATE_0         = 10;
const int MSG_FUKA_ORDER_IN_GATE_0         = 11;
const int MSG_MITU_ORDER_IN_GATE_0_2       = 12;
const int MSG_FUKA_ORDER_IN_GATE_0_2       = 13;
const int MSG_MITU_ORDER_IN_GATE_0_3       = 14;
const int MSG_FUKA_ORDER_IN_GATE_0_3       = 15;
const int MSG_MITU_ORDER_IN_HIGH_R         = 16;
const int MSG_FUKA_ORDER_IN_HIGH_R         = 17;
const int MSG_FUKA_SUPPORT_SKILL_0         = 18;
const int MSG_FUKA_SUPPORT_SKILL_0_2       = 19;
const int MSG_FUKA_SUPPORT_SKILL_0_3       = 20;
const int MSG_FUKA_ORDER_FIRST             = 21;
const int MSG_FUKA_ORDER_ESCAPE            = 22;
const int MSG_FUKA_ORDER_ESCAPE_DO         = 23;
const int MSG_FUKA_ORDER_ESCAPE_NO         = 24;
const int MSG_FUKA_ORDER_SEARCH            = 25;
const int MSG_FUKA_ORDER_SEARCH_DO         = 26;
const int MSG_FUKA_ORDER_SEARCH_NO         = 27;
const int MSG_FUKA_ORDER_SEARCH_DO_2       = 28;
const int MSG_FUKA_ORDER_JAMMING           = 29;
const int MSG_FUKA_ORDER_JAMMING_D         = 30;
const int MSG_FUKA_ORDER_JAMMING_N         = 31;
const int MSG_FUKA_ORDER_JAMMING_D_2       = 32;
const int MSG_FUKA_ORDER_SFAURA            = 33;
const int MSG_FUKA_ORDER_SFAURA_DO         = 34;
const int MSG_FUKA_ORDER_SFAURA_DO_2       = 35;
const int MSG_FUKA_ORDER_SHOCKN            = 36;
const int MSG_FUKA_ORDER_SHOCKN_DO         = 37;
const int MSG_FUKA_ORDER_SHOCKN_NO         = 38;
const int MSG_FUKA_ORDER_SHOCKN_DO_2       = 39;
const int MSG_FUKA_NOT_ENOUGH_SP           = 40;
const int MSG_FUKA_ORDER_RESTART           = 41;
const int MSG_TARTARUS_FIRST_TRY_0         = 42;
const int MSG_TARTARUS_FIRST_TRY_0_2       = 43;
const int MSG_TARTARUS_FIRST_TRY_0_3       = 44;
const int TRL_TARTARUS_FIRST_TRY_H         = 45;
const int MSG_F031_OPERATION_01            = 46;
const int MSG_F031_OPERATION_02            = 47;
const int MSG_F031_OPERATION_03            = 48;
const int MSG_F031_OPERATION_04            = 49;
const int MSG_F031_OPERATION_05            = 50;
const int MND_F052_OPERATION               = 51;
const int MSG_THEURGIA_OPERATION_0         = 52;
const int MSG_THEURGIA_OPERATION_0_2       = 53;
const int MSG_THEURGIA_OPERATION_0_3       = 54;
const int MSG_THEURGIA_OPERATION_0_4       = 55;
const int MSG_F034_OPERATION_01            = 56;
const int MSG_F034_OPERATION_02            = 57;
const int MSG_F034_OPERATION_03            = 58;
const int MSG_F034_OPERATION_04            = 59;
const int MSG_F034_OPERATION_05            = 60;
const int MSG_F034_OPERATION_06            = 61;
const int MSG_F034_OPERATION_07            = 62;
const int MSG_F034_OPERATION_08            = 63;
const int MSG_F035_OPERATION_START         = 64;
const int MSG_F035_OPERATION_01            = 65;
const int MSG_F035_OPERATION_02            = 66;
const int MSG_TAR_ARRIVAL_FLOOR_MI         = 67;
const int MSG_TAR_ARRIVAL_FLOOR_FU         = 68;
const int MSG_TAR_REAPER_MITU              = 69;
const int MSG_TAR_REAPER_FUKA              = 70;
const int MSG_TAR_REAPER_WARNING_M         = 71;
const int MSG_TAR_REAPER_WARNING_F         = 72;
const int MSG_TAR_MISNPC                   = 73;
const int MSG_TAR_MISNPC_CAT               = 74;
const int MSG_TAR_FDOOR                    = 75;
const int MSG_TAR_ACCIDENT_00_MITU         = 76;
const int MSG_TAR_ACCIDENT_00_FUKA         = 77;
const int MSG_TAR_ENDGATE_00_MITU          = 78;
const int MSG_TAR_ENDGATE_00_FUKA          = 79;
const int MSG_TAR_ENDGATE_01_MITU          = 80;
const int MSG_TAR_ENDGATE_01_FUKA          = 81;
const int MSG_TAR_ENDGATE_02_MITU          = 82;
const int MSG_TAR_ENDGATE_02_FUKA          = 83;
const int MSG_TAR_GK_DEFEATED_MITU         = 84;
const int MSG_TAR_GK_DEFEATED_FUKA         = 85;
const int MSG_TAR_GK_EXIST_MITU            = 86;
const int MSG_TAR_GK_EXIST_FUKA            = 87;
const int MSG_TAR_JIN_DEFEATED             = 88;
const int MSG_TAR_JIN_EXIST                = 89;
const int MSG_TAR_TAKAYA_DEFEATED          = 90;
const int MSG_TAR_TAKAYA_EXIST             = 91;
const int MSG_TAR_NYX_EXIST                = 92;
const int MSG_TAR_NEAR_ENDGATE_MIT         = 93;
const int MSG_TAR_NEAR_ENDGATE_FUK         = 94;
const int MSG_TAR_MIDDLE_ENDGATE_M         = 95;
const int MSG_TAR_MIDDLE_ENDGATE_F         = 96;
const int MSG_TAR_FAR_ENDGATE_MITU         = 97;
const int MSG_TAR_FAR_ENDGATE_FUKA         = 98;
const int MSG_TAR_NEAR_GK_MITU             = 99;
const int MSG_TAR_NEAR_GK_FUKA             = 100;
const int MSG_TAR_MIDDLE_GK_MITU           = 101;
const int MSG_TAR_MIDDLE_GK_FUKA           = 102;
const int MSG_TAR_FAR_GK_MITU              = 103;
const int MSG_TAR_FAR_GK_FUKA              = 104;
const int MSG_TAR_NEAR_JIN                 = 105;
const int MSG_TAR_NEAR_TAKAYA              = 106;
const int MSG_TAR_NEAR_NYX                 = 107;
const int MSG_Monad_NotDiscovery           = 108;
const int MSG_Monad_NotAccess              = 109;
const int MSG_Monad_BackEntrance           = 110;
const int MSG_Monad_NowIn                  = 111;
const int MSG_MonadPass_NotAccess          = 112;
const int MSG_MonadPass_NowIn              = 113;
const int MSG_JinFloor_NotDefeat           = 114;
const int MSG_JinFloor_Defeated            = 115;
const int MSG_TakayaFloor_NotDefea         = 116;