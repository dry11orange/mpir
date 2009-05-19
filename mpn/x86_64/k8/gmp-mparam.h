/* Generated by tuneup.c, 2009-04-11, gcc 4.2 */

#define MUL_KARATSUBA_THRESHOLD          28
#define MUL_TOOM3_THRESHOLD              85
#define MUL_TOOM4_THRESHOLD             442
#define MUL_TOOM7_THRESHOLD             454

#define SQR_BASECASE_THRESHOLD            0  /* always (native) */
#define SQR_KARATSUBA_THRESHOLD          32
#define SQR_TOOM3_THRESHOLD             107
#define SQR_TOOM4_THRESHOLD             324
#define SQR_TOOM7_THRESHOLD             507

#define MULLOW_BASECASE_THRESHOLD         6
#define MULLOW_DC_THRESHOLD              28
#define MULLOW_MUL_N_THRESHOLD          303

#define DIV_SB_PREINV_THRESHOLD           0  /* always */
#define DIV_DC_THRESHOLD                 64
#define POWM_THRESHOLD                  162

#define GCD_ACCEL_THRESHOLD              97
#define GCDEXT_THRESHOLD                  0  /* always */
#define JACOBI_BASE_METHOD                1

#define DIVREM_1_NORM_THRESHOLD       MP_SIZE_T_MAX  /* never */
#define DIVREM_1_UNNORM_THRESHOLD     MP_SIZE_T_MAX  /* never */
#define MOD_1_NORM_THRESHOLD              0  /* always */
#define MOD_1_UNNORM_THRESHOLD            0  /* always */
#define USE_PREINV_DIVREM_1               0
#define USE_PREINV_MOD_1                  1
#define DIVREM_2_THRESHOLD                0  /* always */
#define DIVEXACT_1_THRESHOLD              0  /* always */
#define MODEXACT_1_ODD_THRESHOLD          0  /* always (native) */

#define GET_STR_DC_THRESHOLD              6
#define GET_STR_PRECOMPUTE_THRESHOLD      7
#define SET_STR_THRESHOLD              7059

#define MUL_FFT_TABLE  { 464, 928, 3008, 3328, 7168, 28672, 0 }
#define MUL_FFT_MODF_THRESHOLD          480
#define MUL_FFT_THRESHOLD              6656

#define SQR_FFT_TABLE  { 464, 928, 2880, 3328, 7168, 28672, 0 }
#define SQR_FFT_MODF_THRESHOLD          424
#define SQR_FFT_THRESHOLD              2688

#define MUL_FFT_TABLE2 {{1, 4}, {344, 5}, {360, 4}, {377, 5}, {386, 4}, {404, 5}, {813, 6}, {850, 5}, {869, 6}, {1038, 5}, {1061, 6}, {1134, 7}, {1159, 6}, {2392, 7}, {2445, 6}, {2499, 7}, {2610, 6}, {2668, 7}, {2727, 8}, {2849, 7}, {3109, 8}, {3393, 7}, {3468, 8}, {3867, 7}, {4039, 8}, {6957, 9}, {7756, 8}, {8460, 9}, {8836, 8}, {9030, 9}, {9850, 8}, {10513, 9}, {11976, 8}, {12239, 9}, {13939, 10}, {14557, 9}, {15876, 8}, {16224, 9}, {22461, 10}, {23970, 9}, {26142, 10}, {27898, 9}, {28509, 10}, {31772, 9}, {32468, 10}, {40326, 9}, {41210, 10}, {46934, 11}, {47962, 10}, {57042, 11}, {62207, 12}, {63570, 10}, {73983, 11}, {80681, 10}, {86099, 11}, {98051, 10}, {MP_SIZE_T_MAX,0}}

#define MUL_FFTM_TABLE2 {{1, 4}, {313, 5}, {320, 4}, {344, 5}, {360, 4}, {377, 5}, {743, 6}, {760, 5}, {813, 6}, {1612, 7}, {1685, 6}, {1760, 7}, {1839, 6}, {1880, 7}, {3622, 8}, {3867, 7}, {4039, 8}, {7266, 9}, {7756, 8}, {8460, 9}, {8836, 8}, {9030, 9}, {9850, 8}, {10066, 9}, {11976, 8}, {12239, 9}, {18084, 10}, {18480, 9}, {19299, 10}, {19722, 9}, {21047, 10}, {21508, 9}, {22461, 10}, {23970, 9}, {26142, 10}, {27898, 9}, {28509, 10}, {31772, 9}, {32468, 10}, {36184, 9}, {36977, 10}, {40326, 9}, {41210, 10}, {44943, 11}, {47962, 10}, {57042, 11}, {62207, 12}, {63570, 10}, {73983, 11}, {80681, 10}, {86099, 11}, {98051, 10}, {MP_SIZE_T_MAX,0}}

#define SQR_FFT_TABLE2 {{1, 3}, {205, 4}, {404, 5}, {423, 4}, {433, 5}, {869, 6}, {971, 5}, {993, 6}, {2144, 7}, {2191, 6}, {2289, 7}, {2340, 6}, {2392, 7}, {2445, 6}, {2499, 7}, {2610, 6}, {2668, 7}, {2727, 8}, {2849, 7}, {3248, 8}, {3393, 7}, {3622, 8}, {3867, 7}, {4039, 8}, {6957, 9}, {7756, 8}, {8460, 9}, {8836, 8}, {9030, 9}, {9850, 8}, {10287, 9}, {11976, 8}, {12239, 9}, {13939, 10}, {14876, 9}, {18084, 10}, {19299, 9}, {22461, 10}, {23970, 9}, {26142, 10}, {27898, 9}, {28509, 10}, {31772, 9}, {32468, 10}, {44943, 11}, {45928, 10}, {46934, 11}, {47962, 10}, {57042, 11}, {62207, 12}, {63570, 10}, {73983, 11}, {80681, 10}, {86099, 11}, {MP_SIZE_T_MAX,0}}

#define SQR_FFTM_TABLE2 {{1, 4}, {344, 5}, {360, 4}, {377, 5}, {743, 6}, {760, 5}, {813, 6}, {850, 5}, {869, 6}, {1612, 7}, {1685, 6}, {1760, 7}, {1799, 6}, {1880, 7}, {1922, 6}, {2009, 7}, {3544, 8}, {3867, 7}, {4039, 8}, {7266, 9}, {7756, 8}, {8460, 9}, {8836, 8}, {9030, 9}, {9850, 8}, {10066, 9}, {11976, 8}, {12239, 9}, {18084, 10}, {19722, 9}, {22461, 10}, {23970, 9}, {26142, 10}, {27898, 9}, {28509, 10}, {31772, 9}, {32468, 10}, {44943, 11}, {47962, 10}, {57042, 11}, {62207, 12}, {63570, 10}, {73983, 11}, {80681, 10}, {86099, 11}, {MP_SIZE_T_MAX,0}}

#define MUL_FFT_FULL_TABLE2 {{16, 1}, {1045, 2}, {1068, 1}, {1092, 2}, {1116, 1}, {1141, 2}, {1166, 1}, {1623, 2}, {1659, 1}, {1811, 2}, {1851, 1}, {2066, 4}, {2112, 1}, {2207, 2}, {2256, 5}, {2306, 4}, {2409, 1}, {2462, 3}, {2572, 2}, {2629, 4}, {2687, 1}, {2746, 2}, {2932, 4}, {3063, 2}, {3271, 1}, {3343, 4}, {3417, 2}, {3648, 4}, {3728, 1}, {3894, 2}, {4068, 1}, {4158, 2}, {4250, 4}, {4344, 2}, {4440, 5}, {4638, 4}, {4844, 1}, {4951, 3}, {5171, 2}, {5285, 1}, {5401, 4}, {5520, 3}, {5641, 2}, {5765, 1}, {5892, 2}, {6022, 4}, {6154, 6}, {6289, 2}, {6568, 3}, {6712, 4}, {6859, 1}, {7010, 4}, {7482, 1}, {7986, 4}, {8710, 2}, {8901, 5}, {9296, 1}, {9922, 3}, {10363, 2}, {10590, 1}, {10822, 4}, {11059, 2}, {11550, 1}, {11803, 2}, {12062, 4}, {12327, 1}, {12873, 2}, {13155, 1}, {14040, 2}, {14663, 1}, {15993, 2}, {16344, 1}, {17068, 2}, {17824, 1}, {18215, 3}, {18614, 1}, {19022, 4}, {19439, 1}, {20300, 3}, {20745, 1}, {22140, 2}, {22625, 1}, {23121, 2}, {24146, 4}, {25216, 2}, {25769, 1}, {32708, 2}, {33425, 1}, {36452, 4}, {37251, 1}, {40624, 3}, {41514, 1}, {44303, 2}, {47280, 4}, {50456, 1}, {52691, 3}, {53845, 1}, {57462, 4}, {58721, 2}, {60007, 1}, {62664, 2}, {64037, 1}, {65440, 2}, {71365, 1}, {81272, 2}, {83052, 1}, {MP_SIZE_T_MAX,0}}

/* Tuneup completed successfully, took 1026 seconds */
