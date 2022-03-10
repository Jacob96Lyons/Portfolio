#include "stdafx.h"
#include "Headers.h"
#include "GameFunctions.h"

void Mode()
{
	SetMode(800,600,32);
	_IsWindowed = true;
}

void SetDataPath()
{
	ArtAssetsPath = "";
	RTDPath = "";
};

void BuildLogic()
{
	SMArray = NewStateMachines(20);
	SMFArray = NewVoidPointers(339);

	SMFArray[0] = (void*)Movement_Idle_Action;
	SMFArray[1] = (void*)Movement_Down_Action;
	SMFArray[2] = (void*)Movement_Left_Action;
	SMFArray[3] = (void*)Movement_Right_Action;
	SMFArray[4] = (void*)Movement_UP_Action;
	SMFArray[5] = (void*)Movement_S2_To_S1_Condition;
	SMFArray[6] = (void*)Movement_S1_To_S2_Condition;
	SMFArray[7] = (void*)Movement_S3_To_S1_Condition;
	SMFArray[8] = (void*)Movement_S1_To_S3_Condition;
	SMFArray[9] = (void*)Movement_S4_To_S1_Condition;
	SMFArray[10] = (void*)Movement_S5_To_S1_Condition;
	SMFArray[11] = (void*)Movement_S1_To_S4_Condition;
	SMFArray[12] = (void*)Movement_S1_To_S5_Condition;
	SMFArray[13] = (void*)Carly_AL_right_Action;
	SMFArray[14] = (void*)Carly_AL_down_Action;
	SMFArray[15] = (void*)Carly_AL_left_Action;
	SMFArray[16] = (void*)Carly_AL_up_Action;
	SMFArray[17] = (void*)Carly_AL_S1_To_S2_Condition;
	SMFArray[18] = (void*)Carly_AL_S4_To_S1_Condition;
	SMFArray[19] = (void*)Carly_AL_S2_To_S3_Condition;
	SMFArray[20] = (void*)Carly_AL_S3_To_S4_Condition;
	SMFArray[21] = (void*)zae_AL_Down_Action;
	SMFArray[22] = (void*)zae_AL_UP_Action;
	SMFArray[23] = (void*)zae_AL_S2_To_S1_Condition;
	SMFArray[24] = (void*)zae_AL_S1_To_S2_Condition;
	SMFArray[25] = (void*)Jeff_AL_Down_Action;
	SMFArray[26] = (void*)Jeff_AL_UP_Action;
	SMFArray[27] = (void*)Jeff_AL_S1_To_S2_Condition;
	SMFArray[28] = (void*)Jeff_AL_S2_To_S1_Condition;
	SMFArray[29] = (void*)Jif_AL_Right_Action;
	SMFArray[30] = (void*)Jif_AL_Left_Action;
	SMFArray[31] = (void*)Jif_AL_S1_To_S2_Condition;
	SMFArray[32] = (void*)Jif_AL_S2_To_S1_Condition;
	SMFArray[33] = (void*)Access_Tracker_Idle_Action;
	SMFArray[34] = (void*)Access_Tracker_Down_Action;
	SMFArray[35] = (void*)Access_Tracker_Left_Action;
	SMFArray[36] = (void*)Access_Tracker_Right_Action;
	SMFArray[37] = (void*)Access_Tracker_UP_Action;
	SMFArray[38] = (void*)Access_Tracker_S1_To_S2_Condition;
	SMFArray[39] = (void*)Access_Tracker_S2_To_S1_Condition;
	SMFArray[40] = (void*)Access_Tracker_S4_To_S1_Condition;
	SMFArray[41] = (void*)Access_Tracker_S1_To_S3_Condition;
	SMFArray[42] = (void*)Access_Tracker_S3_To_S1_Condition;
	SMFArray[43] = (void*)Access_Tracker_S1_To_S4_Condition;
	SMFArray[44] = (void*)Access_Tracker_S5_To_S1_Condition;
	SMFArray[45] = (void*)Access_Tracker_S3_To_S2_Condition;
	SMFArray[46] = (void*)Access_Tracker_S2_To_S3_Condition;
	SMFArray[47] = (void*)Access_Tracker_S4_To_S2_Condition;
	SMFArray[48] = (void*)Access_Tracker_S1_To_S5_Condition;
	SMFArray[49] = (void*)Access_Tracker_S2_To_S4_Condition;
	SMFArray[50] = (void*)Access_Tracker_S5_To_S3_Condition;
	SMFArray[51] = (void*)Access_Tracker_S3_To_S5_Condition;
	SMFArray[52] = (void*)Access_Tracker_S4_To_S5_Condition;
	SMFArray[53] = (void*)Access_Tracker_S5_To_S4_Condition;
	SMFArray[54] = (void*)Spaceman_Animation_S_Action;
	SMFArray[55] = (void*)Spaceman_Animation_Back_Action;
	SMFArray[56] = (void*)Spaceman_Animation_Idle_BACK_Action;
	SMFArray[57] = (void*)Spaceman_Animation_Right_Action;
	SMFArray[58] = (void*)Spaceman_Animation_Idle_RIG_Action;
	SMFArray[59] = (void*)Spaceman_Animation_Forward_Action;
	SMFArray[60] = (void*)Spaceman_Animation_Idle_FOR_Action;
	SMFArray[61] = (void*)Spaceman_Animation_Left_Action;
	SMFArray[62] = (void*)Spaceman_Animation_Idle_Left_Action;
	SMFArray[63] = (void*)Spaceman_Animation_S1_To_S2_Condition;
	SMFArray[64] = (void*)Spaceman_Animation_S3_To_S2_Condition;
	SMFArray[65] = (void*)Spaceman_Animation_S2_To_S3_Condition;
	SMFArray[66] = (void*)Spaceman_Animation_S1_To_S4_Condition;
	SMFArray[67] = (void*)Spaceman_Animation_S5_To_S2_Condition;
	SMFArray[68] = (void*)Spaceman_Animation_S7_To_S4b_Condition;
	SMFArray[69] = (void*)Spaceman_Animation_S3_To_S4_Condition;
	SMFArray[70] = (void*)Spaceman_Animation_S7_To_S2_Condition;
	SMFArray[71] = (void*)Spaceman_Animation_S1_To_S6_Condition;
	SMFArray[72] = (void*)Spaceman_Animation_S5_To_S4_Condition;
	SMFArray[73] = (void*)Spaceman_Animation_S4_To_S5_Condition;
	SMFArray[74] = (void*)Spaceman_Animation_S3_To_S6_Condition;
	SMFArray[75] = (void*)Spaceman_Animation_S9_To_S2_Condition;
	SMFArray[76] = (void*)Spaceman_Animation_S1_To_S8_Condition;
	SMFArray[77] = (void*)Spaceman_Animation_S5_To_S6_Condition;
	SMFArray[78] = (void*)Spaceman_Animation_S3_To_S8_Condition;
	SMFArray[79] = (void*)Spaceman_Animation_S7_To_S6_Condition;
	SMFArray[80] = (void*)Spaceman_Animation_S9_To_S4_Condition;
	SMFArray[81] = (void*)Spaceman_Animation_S5_To_S8_Condition;
	SMFArray[82] = (void*)Spaceman_Animation_S6_To_S7_Condition;
	SMFArray[83] = (void*)Spaceman_Animation_S7_To_S8_Condition;
	SMFArray[84] = (void*)Spaceman_Animation_S9_To_S6_Condition;
	SMFArray[85] = (void*)Spaceman_Animation_S9_To_S8_Condition;
	SMFArray[86] = (void*)Spaceman_Animation_S8_To_S9_Condition;
	SMFArray[87] = (void*)Alien1_Animation_S_Action;
	SMFArray[88] = (void*)Alien1_Animation_Back_Action;
	SMFArray[89] = (void*)Alien1_Animation_Idle_BACK_Action;
	SMFArray[90] = (void*)Alien1_Animation_Right_Action;
	SMFArray[91] = (void*)Alien1_Animation_Idle_RIG_Action;
	SMFArray[92] = (void*)Alien1_Animation_Forward_Action;
	SMFArray[93] = (void*)Alien1_Animation_Idle_FOR_Action;
	SMFArray[94] = (void*)Alien1_Animation_Left_Action;
	SMFArray[95] = (void*)Alien1_Animation_Idle_Left_Action;
	SMFArray[96] = (void*)Alien1_Animation_S1_To_S2_Condition;
	SMFArray[97] = (void*)Alien1_Animation_S1_To_S4_Condition;
	SMFArray[98] = (void*)Alien1_Animation_S2_To_S3_Condition;
	SMFArray[99] = (void*)Alien1_Animation_S3_To_S2_Condition;
	SMFArray[100] = (void*)Alien1_Animation_S7_To_S4b_Condition;
	SMFArray[101] = (void*)Alien1_Animation_S5_To_S2_Condition;
	SMFArray[102] = (void*)Alien1_Animation_S6_To_S2_Condition;
	SMFArray[103] = (void*)Alien1_Animation_S1_To_S6_Condition;
	SMFArray[104] = (void*)Alien1_Animation_S7_To_S2_Condition;
	SMFArray[105] = (void*)Alien1_Animation_S3_To_S4_Condition;
	SMFArray[106] = (void*)Alien1_Animation_S2_To_S6_Condition;
	SMFArray[107] = (void*)Alien1_Animation_S4_To_S5_Condition;
	SMFArray[108] = (void*)Alien1_Animation_S5_To_S4_Condition;
	SMFArray[109] = (void*)Alien1_Animation_S1_To_S8_Condition;
	SMFArray[110] = (void*)Alien1_Animation_S9_To_S2_Condition;
	SMFArray[111] = (void*)Alien1_Animation_S3_To_S6_Condition;
	SMFArray[112] = (void*)Alien1_Animation_S8_To_S4_Condition;
	SMFArray[113] = (void*)Alien1_Animation_S5_To_S6_Condition;
	SMFArray[114] = (void*)Alien1_Animation_S4_To_S8_Condition;
	SMFArray[115] = (void*)Alien1_Animation_S9_To_S4_Condition;
	SMFArray[116] = (void*)Alien1_Animation_S7_To_S6_Condition;
	SMFArray[117] = (void*)Alien1_Animation_S3_To_S8_Condition;
	SMFArray[118] = (void*)Alien1_Animation_S6_To_S7_Condition;
	SMFArray[119] = (void*)Alien1_Animation_S5_To_S8_Condition;
	SMFArray[120] = (void*)Alien1_Animation_S9_To_S6_Condition;
	SMFArray[121] = (void*)Alien1_Animation_S7_To_S8_Condition;
	SMFArray[122] = (void*)Alien1_Animation_S8_To_S9_Condition;
	SMFArray[123] = (void*)Alien1_Animation_S9_To_S8_Condition;
	SMFArray[124] = (void*)Alien2_Animation_S_Action;
	SMFArray[125] = (void*)Alien2_Animation_Back_Action;
	SMFArray[126] = (void*)Alien2_Animation_Idle_BACK_Action;
	SMFArray[127] = (void*)Alien2_Animation_Right_Action;
	SMFArray[128] = (void*)Alien2_Animation_Idle_RIG_Action;
	SMFArray[129] = (void*)Alien2_Animation_Forward_Action;
	SMFArray[130] = (void*)Alien2_Animation_Idle_FOR_Action;
	SMFArray[131] = (void*)Alien2_Animation_Left_Action;
	SMFArray[132] = (void*)Alien2_Animation_Idle_Left_Action;
	SMFArray[133] = (void*)Alien2_Animation_S1_To_S2_Condition;
	SMFArray[134] = (void*)Alien2_Animation_S3_To_S2_Condition;
	SMFArray[135] = (void*)Alien2_Animation_S2_To_S3_Condition;
	SMFArray[136] = (void*)Alien2_Animation_S1_To_S4_Condition;
	SMFArray[137] = (void*)Alien2_Animation_S5_To_S2_Condition;
	SMFArray[138] = (void*)Alien2_Animation_S7_To_S4b_Condition;
	SMFArray[139] = (void*)Alien2_Animation_S6_To_S2_Condition;
	SMFArray[140] = (void*)Alien2_Animation_S3_To_S4_Condition;
	SMFArray[141] = (void*)Alien2_Animation_S7_To_S2_Condition;
	SMFArray[142] = (void*)Alien2_Animation_S1_To_S6_Condition;
	SMFArray[143] = (void*)Alien2_Animation_S2_To_S6_Condition;
	SMFArray[144] = (void*)Alien2_Animation_S5_To_S4_Condition;
	SMFArray[145] = (void*)Alien2_Animation_S4_To_S5_Condition;
	SMFArray[146] = (void*)Alien2_Animation_S3_To_S6_Condition;
	SMFArray[147] = (void*)Alien2_Animation_S9_To_S2_Condition;
	SMFArray[148] = (void*)Alien2_Animation_S1_To_S8_Condition;
	SMFArray[149] = (void*)Alien2_Animation_S8_To_S4_Condition;
	SMFArray[150] = (void*)Alien2_Animation_S5_To_S6_Condition;
	SMFArray[151] = (void*)Alien2_Animation_S4_To_S8_Condition;
	SMFArray[152] = (void*)Alien2_Animation_S3_To_S8_Condition;
	SMFArray[153] = (void*)Alien2_Animation_S7_To_S6_Condition;
	SMFArray[154] = (void*)Alien2_Animation_S9_To_S4_Condition;
	SMFArray[155] = (void*)Alien2_Animation_S5_To_S8_Condition;
	SMFArray[156] = (void*)Alien2_Animation_S6_To_S7_Condition;
	SMFArray[157] = (void*)Alien2_Animation_S7_To_S8_Condition;
	SMFArray[158] = (void*)Alien2_Animation_S9_To_S6_Condition;
	SMFArray[159] = (void*)Alien2_Animation_S9_To_S8_Condition;
	SMFArray[160] = (void*)Alien2_Animation_S8_To_S9_Condition;
	SMFArray[161] = (void*)Alien3_Animation_S_Action;
	SMFArray[162] = (void*)Alien3_Animation_Back_Action;
	SMFArray[163] = (void*)Alien3_Animation_Idle_BACK_Action;
	SMFArray[164] = (void*)Alien3_Animation_Right_Action;
	SMFArray[165] = (void*)Alien3_Animation_Idle_RIG_Action;
	SMFArray[166] = (void*)Alien3_Animation_Forward_Action;
	SMFArray[167] = (void*)Alien3_Animation_Idle_FOR_Action;
	SMFArray[168] = (void*)Alien3_Animation_Left_Action;
	SMFArray[169] = (void*)Alien3_Animation_Idle_Left_Action;
	SMFArray[170] = (void*)Alien3_Animation_S1_To_S2_Condition;
	SMFArray[171] = (void*)Alien3_Animation_S1_To_S4_Condition;
	SMFArray[172] = (void*)Alien3_Animation_S2_To_S3_Condition;
	SMFArray[173] = (void*)Alien3_Animation_S3_To_S2_Condition;
	SMFArray[174] = (void*)Alien3_Animation_S7_To_S4b_Condition;
	SMFArray[175] = (void*)Alien3_Animation_S5_To_S2_Condition;
	SMFArray[176] = (void*)Alien3_Animation_S6_To_S2_Condition;
	SMFArray[177] = (void*)Alien3_Animation_S1_To_S6_Condition;
	SMFArray[178] = (void*)Alien3_Animation_S7_To_S2_Condition;
	SMFArray[179] = (void*)Alien3_Animation_S3_To_S4_Condition;
	SMFArray[180] = (void*)Alien3_Animation_S2_To_S6_Condition;
	SMFArray[181] = (void*)Alien3_Animation_S4_To_S5_Condition;
	SMFArray[182] = (void*)Alien3_Animation_S5_To_S4_Condition;
	SMFArray[183] = (void*)Alien3_Animation_S1_To_S8_Condition;
	SMFArray[184] = (void*)Alien3_Animation_S9_To_S2_Condition;
	SMFArray[185] = (void*)Alien3_Animation_S3_To_S6_Condition;
	SMFArray[186] = (void*)Alien3_Animation_S8_To_S4_Condition;
	SMFArray[187] = (void*)Alien3_Animation_S5_To_S6_Condition;
	SMFArray[188] = (void*)Alien3_Animation_S4_To_S8_Condition;
	SMFArray[189] = (void*)Alien3_Animation_S9_To_S4_Condition;
	SMFArray[190] = (void*)Alien3_Animation_S7_To_S6_Condition;
	SMFArray[191] = (void*)Alien3_Animation_S3_To_S8_Condition;
	SMFArray[192] = (void*)Alien3_Animation_S6_To_S7_Condition;
	SMFArray[193] = (void*)Alien3_Animation_S5_To_S8_Condition;
	SMFArray[194] = (void*)Alien3_Animation_S9_To_S6_Condition;
	SMFArray[195] = (void*)Alien3_Animation_S7_To_S8_Condition;
	SMFArray[196] = (void*)Alien3_Animation_S8_To_S9_Condition;
	SMFArray[197] = (void*)Alien3_Animation_S9_To_S8_Condition;
	SMFArray[198] = (void*)Alex_AL_s1_Action;
	SMFArray[199] = (void*)Alex_AL_S2_Action;
	SMFArray[200] = (void*)Alex_AL_S3_Action;
	SMFArray[201] = (void*)Alex_AL_S4_Action;
	SMFArray[202] = (void*)Alex_AL_S5_Action;
	SMFArray[203] = (void*)Alex_AL_S1_To_S2_Condition;
	SMFArray[204] = (void*)Alex_AL_S5_To_S1_Condition;
	SMFArray[205] = (void*)Alex_AL_S2_To_S3_Condition;
	SMFArray[206] = (void*)Alex_AL_S3_To_S4_Condition;
	SMFArray[207] = (void*)Alex_AL_S4_To_S5_Condition;
	SMFArray[208] = (void*)Hunter_AI_Idle_Action;
	SMFArray[209] = (void*)Hunter_AI_Up_Action;
	SMFArray[210] = (void*)Hunter_AI_Down_Action;
	SMFArray[211] = (void*)Hunter_AI_Left_Action;
	SMFArray[212] = (void*)Hunter_AI_Right_Action;
	SMFArray[213] = (void*)Hunter_AI_S6_Action;
	SMFArray[214] = (void*)Hunter_AI_S7_Action;
	SMFArray[215] = (void*)Hunter_AI_S8_Action;
	SMFArray[216] = (void*)Hunter_AI_S9_Action;
	SMFArray[217] = (void*)Hunter_AI_S2_To_S1_Condition;
	SMFArray[218] = (void*)Hunter_AI_S1_To_S2_Condition;
	SMFArray[219] = (void*)Hunter_AI_S4_To_S1_Condition;
	SMFArray[220] = (void*)Hunter_AI_S3_To_S1_Condition;
	SMFArray[221] = (void*)Hunter_AI_S1_To_S3_Condition;
	SMFArray[222] = (void*)Hunter_AI_S4_To_S2_Condition;
	SMFArray[223] = (void*)Hunter_AI_S3_To_S2_Condition;
	SMFArray[224] = (void*)Hunter_AI_S2_To_S3_Condition;
	SMFArray[225] = (void*)Hunter_AI_S5_To_S1_Condition;
	SMFArray[226] = (void*)Hunter_AI_S1_To_S4_Condition;
	SMFArray[227] = (void*)Hunter_AI_S7_To_S1_Condition;
	SMFArray[228] = (void*)Hunter_AI_S6_To_S1_Condition;
	SMFArray[229] = (void*)Hunter_AI_S4_To_S3_Condition;
	SMFArray[230] = (void*)Hunter_AI_S2_To_S4_Condition;
	SMFArray[231] = (void*)Hunter_AI_S5_To_S2_Condition;
	SMFArray[232] = (void*)Hunter_AI_S1_To_S5_Condition;
	SMFArray[233] = (void*)Hunter_AI_S8_To_S1_Condition;
	SMFArray[234] = (void*)Hunter_AI_S6_To_S2_Condition;
	SMFArray[235] = (void*)Hunter_AI_S1_To_S6_Condition;
	SMFArray[236] = (void*)Hunter_AI_S5_To_S3_Condition;
	SMFArray[237] = (void*)Hunter_AI_S3_To_S4_Condition;
	SMFArray[238] = (void*)Hunter_AI_S2_To_S5_Condition;
	SMFArray[239] = (void*)Hunter_AI_S9_To_S1_Condition;
	SMFArray[240] = (void*)Hunter_AI_S2_To_S6_Condition;
	SMFArray[241] = (void*)Hunter_AI_S3_To_S5_Condition;
	SMFArray[242] = (void*)Hunter_AI_S4_To_S5_Condition;
	SMFArray[243] = (void*)Hunter_AI_S5_To_S4_Condition;
	SMFArray[244] = (void*)Hunter_AI_S8_To_S3_Condition;
	SMFArray[245] = (void*)Hunter_AI_S1_To_S8_Condition;
	SMFArray[246] = (void*)Hunter_AI_S7_To_S5_Condition;
	SMFArray[247] = (void*)Hunter_AI_S9_To_S4_Condition;
	SMFArray[248] = (void*)Hunter_AI_S3_To_S8_Condition;
	SMFArray[249] = (void*)Hunter_AI_S5_To_S7_Condition;
	SMFArray[250] = (void*)Hunter_AI_S4_To_S9_Condition;
	SMFArray[251] = (void*)left_right_left_Action;
	SMFArray[252] = (void*)left_right_Right_Action;
	SMFArray[253] = (void*)left_right_S1_To_S3_Condition;
	SMFArray[254] = (void*)left_right_S3_To_S1_Condition;
	SMFArray[255] = (void*)up_down_up_Action;
	SMFArray[256] = (void*)up_down_Down_Action;
	SMFArray[257] = (void*)up_down_S3_To_S1_Condition;
	SMFArray[258] = (void*)up_down_S1_To_S3_Condition;
	SMFArray[259] = (void*)Illiminati_Al_right_Action;
	SMFArray[260] = (void*)Illiminati_Al_down_Action;
	SMFArray[261] = (void*)Illiminati_Al_left_Action;
	SMFArray[262] = (void*)Illiminati_Al_up_Action;
	SMFArray[263] = (void*)Illiminati_Al_S1_To_S2_Condition;
	SMFArray[264] = (void*)Illiminati_Al_S4_To_S1_Condition;
	SMFArray[265] = (void*)Illiminati_Al_S2_To_S3_Condition;
	SMFArray[266] = (void*)Illiminati_Al_S3_To_S4_Condition;
	SMFArray[267] = (void*)Fred_AL_right_Action;
	SMFArray[268] = (void*)Fred_AL_down_Action;
	SMFArray[269] = (void*)Fred_AL_left_Action;
	SMFArray[270] = (void*)Fred_AL_up_Action;
	SMFArray[271] = (void*)Fred_AL_S1_To_S2_Condition;
	SMFArray[272] = (void*)Fred_AL_S4_To_S1_Condition;
	SMFArray[273] = (void*)Fred_AL_S2_To_S3_Condition;
	SMFArray[274] = (void*)Fred_AL_S3_To_S4_Condition;
	SMFArray[275] = (void*)Drugs_AI_Left2_Action;
	SMFArray[276] = (void*)Drugs_AI_down_Action;
	SMFArray[277] = (void*)Drugs_AI_left_Action;
	SMFArray[278] = (void*)Drugs_AI_Down2_Action;
	SMFArray[279] = (void*)Drugs_AI_up_Action;
	SMFArray[280] = (void*)Drugs_AI_Right_Action;
	SMFArray[281] = (void*)Drugs_AI_up2_Action;
	SMFArray[282] = (void*)Drugs_AI_Right2_Action;
	SMFArray[283] = (void*)Drugs_AI_Up3_Action;
	SMFArray[284] = (void*)Drugs_AI_Right3_Action;
	SMFArray[285] = (void*)Drugs_AI_S10_To_S2_Condition;
	SMFArray[286] = (void*)Drugs_AI_S4_To_S1_Condition;
	SMFArray[287] = (void*)Drugs_AI_S9_To_S10_Condition;
	SMFArray[288] = (void*)Drugs_AI_S2_To_S3_Condition;
	SMFArray[289] = (void*)Drugs_AI_S1_To_S5_Condition;
	SMFArray[290] = (void*)Drugs_AI_S3_To_S4_Condition;
	SMFArray[291] = (void*)Drugs_AI_S5_To_S6_Condition;
	SMFArray[292] = (void*)Drugs_AI_S6_To_S7_Condition;
	SMFArray[293] = (void*)Drugs_AI_S7_To_S8_Condition;
	SMFArray[294] = (void*)Drugs_AI_S8_To_S9_Condition;
	SMFArray[295] = (void*)Nate_AL_right_Action;
	SMFArray[296] = (void*)Nate_AL_down_Action;
	SMFArray[297] = (void*)Nate_AL_left_Action;
	SMFArray[298] = (void*)Nate_AL_up_Action;
	SMFArray[299] = (void*)Nate_AL_S1_To_S2_Condition;
	SMFArray[300] = (void*)Nate_AL_S4_To_S1_Condition;
	SMFArray[301] = (void*)Nate_AL_S2_To_S3_Condition;
	SMFArray[302] = (void*)Nate_AL_S3_To_S4_Condition;
	SMFArray[303] = (void*)Staci_AL_right_Action;
	SMFArray[304] = (void*)Staci_AL_down_Action;
	SMFArray[305] = (void*)Staci_AL_left_Action;
	SMFArray[306] = (void*)Staci_AL_up_Action;
	SMFArray[307] = (void*)Staci_AL_S1_To_S2_Condition;
	SMFArray[308] = (void*)Staci_AL_S4_To_S1_Condition;
	SMFArray[309] = (void*)Staci_AL_S2_To_S3_Condition;
	SMFArray[310] = (void*)Staci_AL_S3_To_S4_Condition;
	SMFArray[311] = (void*)axe_AL_UP_Action;
	SMFArray[312] = (void*)axe_AL_Right5_Action;
	SMFArray[313] = (void*)axe_AL_down_Action;
	SMFArray[314] = (void*)axe_AL_Down3_Action;
	SMFArray[315] = (void*)axe_AL_left_Action;
	SMFArray[316] = (void*)axe_AL_Right2_Action;
	SMFArray[317] = (void*)axe_AL_Left2_Action;
	SMFArray[318] = (void*)axe_AL_left4_Action;
	SMFArray[319] = (void*)axe_AL_Right3_Action;
	SMFArray[320] = (void*)axe_AL_down4_Action;
	SMFArray[321] = (void*)axe_AL_up3_Action;
	SMFArray[322] = (void*)axe_AL_Right4_Action;
	SMFArray[323] = (void*)axe_AL_up4_Action;
	SMFArray[324] = (void*)axe_AL_left3_Action;
	SMFArray[325] = (void*)axe_AL_S5_To_S14_Condition;
	SMFArray[326] = (void*)axe_AL_S4_To_S1_Condition;
	SMFArray[327] = (void*)axe_AL_S13_To_S2_Condition;
	SMFArray[328] = (void*)axe_AL_S2_To_S3_Condition;
	SMFArray[329] = (void*)axe_AL_S1_To_S5_Condition;
	SMFArray[330] = (void*)axe_AL_S10_To_S11_Condition;
	SMFArray[331] = (void*)axe_AL_S3_To_S4_Condition;
	SMFArray[332] = (void*)axe_AL_S12_To_S9_Condition;
	SMFArray[333] = (void*)axe_AL_S7_To_S6_Condition;
	SMFArray[334] = (void*)axe_AL_S6_To_S8_Condition;
	SMFArray[335] = (void*)axe_AL_S9_To_S7_Condition;
	SMFArray[336] = (void*)axe_AL_S11_To_S13_Condition;
	SMFArray[337] = (void*)axe_AL_S14_To_S12_Condition;
	SMFArray[338] = (void*)axe_AL_S8_To_S10_Condition;
	FArray = NewVoidPointers(28);
	FArray[FN_RESTART] = (void*)Restart;
	FArray[FN_VISIONTRACKER] = (void*)VisionTracker;
	FArray[FN_KEYBEHAVIORFN] = (void*)KeyBehaviorFN;
	FArray[FN_CHEAT_CODES] = (void*)Cheat_codes;
	FArray[FN_DIFI] = (void*)Difi;
	FArray[FN_DIFI_SELECT] = (void*)difi_select;
	FArray[FN_EXIT] = (void*)Exit;
	FArray[FN_MENU_FUNK] = (void*)Menu_funk;
	FArray[FN_ALEX_AI] = (void*)Alex_AI;
	FArray[FN_KILL_CODE] = (void*)Kill_Code;
	FArray[FN_KILL_CODE_HU] = (void*)Kill_Code_HU;
	FArray[FN_KILL_CODE_AR] = (void*)Kill_Code_AR;
	FArray[FN_KILLLIVES] = (void*)killLives;
	FArray[FN_KILL_CODE_ALGORE] = (void*)Kill_Code_ALgore;
	FArray[FN_STORY_START] = (void*)Story_start;
	FArray[FN_STORY_START2] = (void*)story_start2;
	FArray[FN_DIS_TEXT] = (void*)dis_text;
	FArray[FN_SERVERTOHALL1] = (void*)ServerToHall1;
	FArray[FN_HALL1TOTESTLAB1] = (void*)Hall1ToTestLab1;
	FArray[FN_TESTLAB1TOTESTLAB2] = (void*)TestLab1toTestLab2;
	FArray[FN_TESTLAB2TOHALL2] = (void*)TestLab2toHall2;
	FArray[FN_HALL2TOLQ] = (void*)Hall2toLQ;
	FArray[FN_LQTOHALL3] = (void*)LQtoHall3;
	FArray[FN_VISABLITY] = (void*)Visablity;
	FArray[FN_KILL_CODE_L2] = (void*)Kill_Code_L2;
	FArray[FN_KILL_CODE_L3] = (void*)Kill_Code_L3;
	FArray[FN_KILL_CODE_L4] = (void*)Kill_Code_L4;
	FArray[FN_KILL_CODE_L5] = (void*)Kill_Code_L5;

	maxSMIndex = 19;
	maxFIndex = 27;

	TMArray = NewTimers(2);
	TMArray[TIMER_STORY_START] = Timer(GetTimerFunction(FN_STORY_START),60000,TU_Milliseconds,true,TM_Infinite);
	TMArray[TIMER_DIS_TEXT] = Timer(GetTimerFunction(FN_DIS_TEXT),3000,TU_Milliseconds,true,TM_Infinite);

	maxTMIndex = 1;

	StateMachine Movement;
	State Movement_Idle(GetStateFunction(SMSA_MOVEMENT_IDLE_ACTION),NULL);
	Edge Movement_S1_To_S2(1,GetEdgeFunction(SMEC_MOVEMENT_S1_TO_S2_CONDITION),false);
	Movement_Idle.AddEdge(Movement_S1_To_S2);
	Edge Movement_S1_To_S3(2,GetEdgeFunction(SMEC_MOVEMENT_S1_TO_S3_CONDITION),false);
	Movement_Idle.AddEdge(Movement_S1_To_S3);
	Edge Movement_S1_To_S4(3,GetEdgeFunction(SMEC_MOVEMENT_S1_TO_S4_CONDITION),false);
	Movement_Idle.AddEdge(Movement_S1_To_S4);
	Edge Movement_S1_To_S5(4,GetEdgeFunction(SMEC_MOVEMENT_S1_TO_S5_CONDITION),false);
	Movement_Idle.AddEdge(Movement_S1_To_S5);
	Movement.AddState(Movement_Idle);

	State Movement_Down(GetStateFunction(SMSA_MOVEMENT_DOWN_ACTION),NULL);
	Edge Movement_S2_To_S1(0,GetEdgeFunction(SMEC_MOVEMENT_S2_TO_S1_CONDITION),false);
	Movement_Down.AddEdge(Movement_S2_To_S1);
	Movement.AddState(Movement_Down);

	State Movement_Left(GetStateFunction(SMSA_MOVEMENT_LEFT_ACTION),NULL);
	Edge Movement_S3_To_S1(0,GetEdgeFunction(SMEC_MOVEMENT_S3_TO_S1_CONDITION),false);
	Movement_Left.AddEdge(Movement_S3_To_S1);
	Movement.AddState(Movement_Left);

	State Movement_Right(GetStateFunction(SMSA_MOVEMENT_RIGHT_ACTION),NULL);
	Edge Movement_S4_To_S1(0,GetEdgeFunction(SMEC_MOVEMENT_S4_TO_S1_CONDITION),false);
	Movement_Right.AddEdge(Movement_S4_To_S1);
	Movement.AddState(Movement_Right);

	State Movement_UP(GetStateFunction(SMSA_MOVEMENT_UP_ACTION),NULL);
	Edge Movement_S5_To_S1(0,GetEdgeFunction(SMEC_MOVEMENT_S5_TO_S1_CONDITION),false);
	Movement_UP.AddEdge(Movement_S5_To_S1);
	Movement.AddState(Movement_UP);

	Movement.SetStartingState(0u);
	SMArray[SM_MOVEMENT] = Movement;

	StateMachine Carly_AL;
	State Carly_AL_right(GetStateFunction(SMSA_CARLY_AL_RIGHT_ACTION),NULL);
	Edge Carly_AL_S1_To_S2(1,GetEdgeFunction(SMEC_CARLY_AL_S1_TO_S2_CONDITION),false);
	Carly_AL_right.AddEdge(Carly_AL_S1_To_S2);
	Carly_AL.AddState(Carly_AL_right);

	State Carly_AL_down(GetStateFunction(SMSA_CARLY_AL_DOWN_ACTION),NULL);
	Edge Carly_AL_S2_To_S3(2,GetEdgeFunction(SMEC_CARLY_AL_S2_TO_S3_CONDITION),false);
	Carly_AL_down.AddEdge(Carly_AL_S2_To_S3);
	Carly_AL.AddState(Carly_AL_down);

	State Carly_AL_left(GetStateFunction(SMSA_CARLY_AL_LEFT_ACTION),NULL);
	Edge Carly_AL_S3_To_S4(3,GetEdgeFunction(SMEC_CARLY_AL_S3_TO_S4_CONDITION),false);
	Carly_AL_left.AddEdge(Carly_AL_S3_To_S4);
	Carly_AL.AddState(Carly_AL_left);

	State Carly_AL_up(GetStateFunction(SMSA_CARLY_AL_UP_ACTION),NULL);
	Edge Carly_AL_S4_To_S1(0,GetEdgeFunction(SMEC_CARLY_AL_S4_TO_S1_CONDITION),false);
	Carly_AL_up.AddEdge(Carly_AL_S4_To_S1);
	Carly_AL.AddState(Carly_AL_up);

	Carly_AL.SetStartingState(0u);
	SMArray[SM_CARLY_AL] = Carly_AL;

	StateMachine zae_AL;
	State zae_AL_Down(GetStateFunction(SMSA_ZAE_AL_DOWN_ACTION),NULL);
	Edge zae_AL_S1_To_S2(1,GetEdgeFunction(SMEC_ZAE_AL_S1_TO_S2_CONDITION),false);
	zae_AL_Down.AddEdge(zae_AL_S1_To_S2);
	zae_AL.AddState(zae_AL_Down);

	State zae_AL_UP(GetStateFunction(SMSA_ZAE_AL_UP_ACTION),NULL);
	Edge zae_AL_S2_To_S1(0,GetEdgeFunction(SMEC_ZAE_AL_S2_TO_S1_CONDITION),false);
	zae_AL_UP.AddEdge(zae_AL_S2_To_S1);
	zae_AL.AddState(zae_AL_UP);

	zae_AL.SetStartingState(0u);
	SMArray[SM_ZAE_AL] = zae_AL;

	StateMachine Jeff_AL;
	State Jeff_AL_Down(GetStateFunction(SMSA_JEFF_AL_DOWN_ACTION),NULL);
	Edge Jeff_AL_S1_To_S2(1,GetEdgeFunction(SMEC_JEFF_AL_S1_TO_S2_CONDITION),false);
	Jeff_AL_Down.AddEdge(Jeff_AL_S1_To_S2);
	Jeff_AL.AddState(Jeff_AL_Down);

	State Jeff_AL_UP(GetStateFunction(SMSA_JEFF_AL_UP_ACTION),NULL);
	Edge Jeff_AL_S2_To_S1(0,GetEdgeFunction(SMEC_JEFF_AL_S2_TO_S1_CONDITION),false);
	Jeff_AL_UP.AddEdge(Jeff_AL_S2_To_S1);
	Jeff_AL.AddState(Jeff_AL_UP);

	Jeff_AL.SetStartingState(0u);
	SMArray[SM_JEFF_AL] = Jeff_AL;

	StateMachine Jif_AL;
	State Jif_AL_Right(GetStateFunction(SMSA_JIF_AL_RIGHT_ACTION),NULL);
	Edge Jif_AL_S1_To_S2(1,GetEdgeFunction(SMEC_JIF_AL_S1_TO_S2_CONDITION),false);
	Jif_AL_Right.AddEdge(Jif_AL_S1_To_S2);
	Jif_AL.AddState(Jif_AL_Right);

	State Jif_AL_Left(GetStateFunction(SMSA_JIF_AL_LEFT_ACTION),NULL);
	Edge Jif_AL_S2_To_S1(0,GetEdgeFunction(SMEC_JIF_AL_S2_TO_S1_CONDITION),false);
	Jif_AL_Left.AddEdge(Jif_AL_S2_To_S1);
	Jif_AL.AddState(Jif_AL_Left);

	Jif_AL.SetStartingState(0u);
	SMArray[SM_JIF_AL] = Jif_AL;

	StateMachine Access_Tracker;
	State Access_Tracker_Idle(GetStateFunction(SMSA_ACCESS_TRACKER_IDLE_ACTION),NULL);
	Edge Access_Tracker_S1_To_S2(1,GetEdgeFunction(SMEC_ACCESS_TRACKER_S1_TO_S2_CONDITION),false);
	Access_Tracker_Idle.AddEdge(Access_Tracker_S1_To_S2);
	Edge Access_Tracker_S1_To_S3(2,GetEdgeFunction(SMEC_ACCESS_TRACKER_S1_TO_S3_CONDITION),false);
	Access_Tracker_Idle.AddEdge(Access_Tracker_S1_To_S3);
	Edge Access_Tracker_S1_To_S4(3,GetEdgeFunction(SMEC_ACCESS_TRACKER_S1_TO_S4_CONDITION),false);
	Access_Tracker_Idle.AddEdge(Access_Tracker_S1_To_S4);
	Edge Access_Tracker_S1_To_S5(4,GetEdgeFunction(SMEC_ACCESS_TRACKER_S1_TO_S5_CONDITION),false);
	Access_Tracker_Idle.AddEdge(Access_Tracker_S1_To_S5);
	Access_Tracker.AddState(Access_Tracker_Idle);

	State Access_Tracker_Down(GetStateFunction(SMSA_ACCESS_TRACKER_DOWN_ACTION),NULL);
	Edge Access_Tracker_S2_To_S1(0,GetEdgeFunction(SMEC_ACCESS_TRACKER_S2_TO_S1_CONDITION),false);
	Access_Tracker_Down.AddEdge(Access_Tracker_S2_To_S1);
	Edge Access_Tracker_S2_To_S3(2,GetEdgeFunction(SMEC_ACCESS_TRACKER_S2_TO_S3_CONDITION),false);
	Access_Tracker_Down.AddEdge(Access_Tracker_S2_To_S3);
	Edge Access_Tracker_S2_To_S4(3,GetEdgeFunction(SMEC_ACCESS_TRACKER_S2_TO_S4_CONDITION),false);
	Access_Tracker_Down.AddEdge(Access_Tracker_S2_To_S4);
	Edge Access_Tracker_S2_To_S5(4,NULL,false);
	Access_Tracker_Down.AddEdge(Access_Tracker_S2_To_S5);
	Access_Tracker.AddState(Access_Tracker_Down);

	State Access_Tracker_Left(GetStateFunction(SMSA_ACCESS_TRACKER_LEFT_ACTION),NULL);
	Edge Access_Tracker_S3_To_S1(0,GetEdgeFunction(SMEC_ACCESS_TRACKER_S3_TO_S1_CONDITION),false);
	Access_Tracker_Left.AddEdge(Access_Tracker_S3_To_S1);
	Edge Access_Tracker_S3_To_S2(1,GetEdgeFunction(SMEC_ACCESS_TRACKER_S3_TO_S2_CONDITION),false);
	Access_Tracker_Left.AddEdge(Access_Tracker_S3_To_S2);
	Edge Access_Tracker_S3_To_S4(3,NULL,false);
	Access_Tracker_Left.AddEdge(Access_Tracker_S3_To_S4);
	Edge Access_Tracker_S3_To_S5(4,GetEdgeFunction(SMEC_ACCESS_TRACKER_S3_TO_S5_CONDITION),false);
	Access_Tracker_Left.AddEdge(Access_Tracker_S3_To_S5);
	Access_Tracker.AddState(Access_Tracker_Left);

	State Access_Tracker_Right(GetStateFunction(SMSA_ACCESS_TRACKER_RIGHT_ACTION),NULL);
	Edge Access_Tracker_S4_To_S1(0,GetEdgeFunction(SMEC_ACCESS_TRACKER_S4_TO_S1_CONDITION),false);
	Access_Tracker_Right.AddEdge(Access_Tracker_S4_To_S1);
	Edge Access_Tracker_S4_To_S2(1,GetEdgeFunction(SMEC_ACCESS_TRACKER_S4_TO_S2_CONDITION),false);
	Access_Tracker_Right.AddEdge(Access_Tracker_S4_To_S2);
	Edge Access_Tracker_S4_To_S3(2,NULL,false);
	Access_Tracker_Right.AddEdge(Access_Tracker_S4_To_S3);
	Edge Access_Tracker_S4_To_S5(4,GetEdgeFunction(SMEC_ACCESS_TRACKER_S4_TO_S5_CONDITION),false);
	Access_Tracker_Right.AddEdge(Access_Tracker_S4_To_S5);
	Access_Tracker.AddState(Access_Tracker_Right);

	State Access_Tracker_UP(GetStateFunction(SMSA_ACCESS_TRACKER_UP_ACTION),NULL);
	Edge Access_Tracker_S5_To_S1(0,GetEdgeFunction(SMEC_ACCESS_TRACKER_S5_TO_S1_CONDITION),false);
	Access_Tracker_UP.AddEdge(Access_Tracker_S5_To_S1);
	Edge Access_Tracker_S5_To_S2(1,NULL,false);
	Access_Tracker_UP.AddEdge(Access_Tracker_S5_To_S2);
	Edge Access_Tracker_S5_To_S3(2,GetEdgeFunction(SMEC_ACCESS_TRACKER_S5_TO_S3_CONDITION),false);
	Access_Tracker_UP.AddEdge(Access_Tracker_S5_To_S3);
	Edge Access_Tracker_S5_To_S4(3,GetEdgeFunction(SMEC_ACCESS_TRACKER_S5_TO_S4_CONDITION),false);
	Access_Tracker_UP.AddEdge(Access_Tracker_S5_To_S4);
	Access_Tracker.AddState(Access_Tracker_UP);

	Access_Tracker.SetStartingState(0u);
	SMArray[SM_ACCESS_TRACKER] = Access_Tracker;

	StateMachine Spaceman_Animation;
	State Spaceman_Animation_S(GetStateFunction(SMSA_SPACEMAN_ANIMATION_S_ACTION),NULL);
	Edge Spaceman_Animation_S1_To_S2(1,GetEdgeFunction(SMEC_SPACEMAN_ANIMATION_S1_TO_S2_CONDITION),false);
	Spaceman_Animation_S.AddEdge(Spaceman_Animation_S1_To_S2);
	Edge Spaceman_Animation_S1_To_S4(3,GetEdgeFunction(SMEC_SPACEMAN_ANIMATION_S1_TO_S4_CONDITION),false);
	Spaceman_Animation_S.AddEdge(Spaceman_Animation_S1_To_S4);
	Edge Spaceman_Animation_S1_To_S6(5,GetEdgeFunction(SMEC_SPACEMAN_ANIMATION_S1_TO_S6_CONDITION),false);
	Spaceman_Animation_S.AddEdge(Spaceman_Animation_S1_To_S6);
	Edge Spaceman_Animation_S1_To_S8(7,GetEdgeFunction(SMEC_SPACEMAN_ANIMATION_S1_TO_S8_CONDITION),false);
	Spaceman_Animation_S.AddEdge(Spaceman_Animation_S1_To_S8);
	Spaceman_Animation.AddState(Spaceman_Animation_S);

	State Spaceman_Animation_Back(GetStateFunction(SMSA_SPACEMAN_ANIMATION_BACK_ACTION),NULL);
	Edge Spaceman_Animation_S2_To_S3(2,GetEdgeFunction(SMEC_SPACEMAN_ANIMATION_S2_TO_S3_CONDITION),false);
	Spaceman_Animation_Back.AddEdge(Spaceman_Animation_S2_To_S3);
	Spaceman_Animation.AddState(Spaceman_Animation_Back);

	State Spaceman_Animation_Idle_BACK(GetStateFunction(SMSA_SPACEMAN_ANIMATION_IDLE_BACK_ACTION),NULL);
	Edge Spaceman_Animation_S3_To_S2(1,GetEdgeFunction(SMEC_SPACEMAN_ANIMATION_S3_TO_S2_CONDITION),false);
	Spaceman_Animation_Idle_BACK.AddEdge(Spaceman_Animation_S3_To_S2);
	Edge Spaceman_Animation_S3_To_S4(3,GetEdgeFunction(SMEC_SPACEMAN_ANIMATION_S3_TO_S4_CONDITION),false);
	Spaceman_Animation_Idle_BACK.AddEdge(Spaceman_Animation_S3_To_S4);
	Edge Spaceman_Animation_S3_To_S6(5,GetEdgeFunction(SMEC_SPACEMAN_ANIMATION_S3_TO_S6_CONDITION),false);
	Spaceman_Animation_Idle_BACK.AddEdge(Spaceman_Animation_S3_To_S6);
	Edge Spaceman_Animation_S3_To_S8(7,GetEdgeFunction(SMEC_SPACEMAN_ANIMATION_S3_TO_S8_CONDITION),false);
	Spaceman_Animation_Idle_BACK.AddEdge(Spaceman_Animation_S3_To_S8);
	Spaceman_Animation.AddState(Spaceman_Animation_Idle_BACK);

	State Spaceman_Animation_Right(GetStateFunction(SMSA_SPACEMAN_ANIMATION_RIGHT_ACTION),NULL);
	Edge Spaceman_Animation_S4_To_S5(4,GetEdgeFunction(SMEC_SPACEMAN_ANIMATION_S4_TO_S5_CONDITION),false);
	Spaceman_Animation_Right.AddEdge(Spaceman_Animation_S4_To_S5);
	Spaceman_Animation.AddState(Spaceman_Animation_Right);

	State Spaceman_Animation_Idle_RIG(GetStateFunction(SMSA_SPACEMAN_ANIMATION_IDLE_RIG_ACTION),NULL);
	Edge Spaceman_Animation_S5_To_S2(1,GetEdgeFunction(SMEC_SPACEMAN_ANIMATION_S5_TO_S2_CONDITION),false);
	Spaceman_Animation_Idle_RIG.AddEdge(Spaceman_Animation_S5_To_S2);
	Edge Spaceman_Animation_S5_To_S4(3,GetEdgeFunction(SMEC_SPACEMAN_ANIMATION_S5_TO_S4_CONDITION),false);
	Spaceman_Animation_Idle_RIG.AddEdge(Spaceman_Animation_S5_To_S4);
	Edge Spaceman_Animation_S5_To_S6(5,GetEdgeFunction(SMEC_SPACEMAN_ANIMATION_S5_TO_S6_CONDITION),false);
	Spaceman_Animation_Idle_RIG.AddEdge(Spaceman_Animation_S5_To_S6);
	Edge Spaceman_Animation_S5_To_S8(7,GetEdgeFunction(SMEC_SPACEMAN_ANIMATION_S5_TO_S8_CONDITION),false);
	Spaceman_Animation_Idle_RIG.AddEdge(Spaceman_Animation_S5_To_S8);
	Spaceman_Animation.AddState(Spaceman_Animation_Idle_RIG);

	State Spaceman_Animation_Forward(GetStateFunction(SMSA_SPACEMAN_ANIMATION_FORWARD_ACTION),NULL);
	Edge Spaceman_Animation_S6_To_S7(6,GetEdgeFunction(SMEC_SPACEMAN_ANIMATION_S6_TO_S7_CONDITION),false);
	Spaceman_Animation_Forward.AddEdge(Spaceman_Animation_S6_To_S7);
	Spaceman_Animation.AddState(Spaceman_Animation_Forward);

	State Spaceman_Animation_Idle_FOR(GetStateFunction(SMSA_SPACEMAN_ANIMATION_IDLE_FOR_ACTION),NULL);
	Edge Spaceman_Animation_S7_To_S4b(3,GetEdgeFunction(SMEC_SPACEMAN_ANIMATION_S7_TO_S4B_CONDITION),false);
	Spaceman_Animation_Idle_FOR.AddEdge(Spaceman_Animation_S7_To_S4b);
	Edge Spaceman_Animation_S7_To_S2(1,GetEdgeFunction(SMEC_SPACEMAN_ANIMATION_S7_TO_S2_CONDITION),false);
	Spaceman_Animation_Idle_FOR.AddEdge(Spaceman_Animation_S7_To_S2);
	Edge Spaceman_Animation_S7_To_S6(5,GetEdgeFunction(SMEC_SPACEMAN_ANIMATION_S7_TO_S6_CONDITION),false);
	Spaceman_Animation_Idle_FOR.AddEdge(Spaceman_Animation_S7_To_S6);
	Edge Spaceman_Animation_S7_To_S8(7,GetEdgeFunction(SMEC_SPACEMAN_ANIMATION_S7_TO_S8_CONDITION),false);
	Spaceman_Animation_Idle_FOR.AddEdge(Spaceman_Animation_S7_To_S8);
	Spaceman_Animation.AddState(Spaceman_Animation_Idle_FOR);

	State Spaceman_Animation_Left(GetStateFunction(SMSA_SPACEMAN_ANIMATION_LEFT_ACTION),NULL);
	Edge Spaceman_Animation_S8_To_S9(8,GetEdgeFunction(SMEC_SPACEMAN_ANIMATION_S8_TO_S9_CONDITION),false);
	Spaceman_Animation_Left.AddEdge(Spaceman_Animation_S8_To_S9);
	Spaceman_Animation.AddState(Spaceman_Animation_Left);

	State Spaceman_Animation_Idle_Left(GetStateFunction(SMSA_SPACEMAN_ANIMATION_IDLE_LEFT_ACTION),NULL);
	Edge Spaceman_Animation_S9_To_S2(1,GetEdgeFunction(SMEC_SPACEMAN_ANIMATION_S9_TO_S2_CONDITION),false);
	Spaceman_Animation_Idle_Left.AddEdge(Spaceman_Animation_S9_To_S2);
	Edge Spaceman_Animation_S9_To_S4(3,GetEdgeFunction(SMEC_SPACEMAN_ANIMATION_S9_TO_S4_CONDITION),false);
	Spaceman_Animation_Idle_Left.AddEdge(Spaceman_Animation_S9_To_S4);
	Edge Spaceman_Animation_S9_To_S6(5,GetEdgeFunction(SMEC_SPACEMAN_ANIMATION_S9_TO_S6_CONDITION),false);
	Spaceman_Animation_Idle_Left.AddEdge(Spaceman_Animation_S9_To_S6);
	Edge Spaceman_Animation_S9_To_S8(7,GetEdgeFunction(SMEC_SPACEMAN_ANIMATION_S9_TO_S8_CONDITION),false);
	Spaceman_Animation_Idle_Left.AddEdge(Spaceman_Animation_S9_To_S8);
	Spaceman_Animation.AddState(Spaceman_Animation_Idle_Left);

	Spaceman_Animation.SetStartingState(0u);
	SMArray[SM_SPACEMAN_ANIMATION] = Spaceman_Animation;

	StateMachine Alien1_Animation;
	State Alien1_Animation_S(GetStateFunction(SMSA_ALIEN1_ANIMATION_S_ACTION),NULL);
	Edge Alien1_Animation_S1_To_S2(1,GetEdgeFunction(SMEC_ALIEN1_ANIMATION_S1_TO_S2_CONDITION),false);
	Alien1_Animation_S.AddEdge(Alien1_Animation_S1_To_S2);
	Edge Alien1_Animation_S1_To_S4(3,GetEdgeFunction(SMEC_ALIEN1_ANIMATION_S1_TO_S4_CONDITION),false);
	Alien1_Animation_S.AddEdge(Alien1_Animation_S1_To_S4);
	Edge Alien1_Animation_S1_To_S6(5,GetEdgeFunction(SMEC_ALIEN1_ANIMATION_S1_TO_S6_CONDITION),false);
	Alien1_Animation_S.AddEdge(Alien1_Animation_S1_To_S6);
	Edge Alien1_Animation_S1_To_S8(7,GetEdgeFunction(SMEC_ALIEN1_ANIMATION_S1_TO_S8_CONDITION),false);
	Alien1_Animation_S.AddEdge(Alien1_Animation_S1_To_S8);
	Alien1_Animation.AddState(Alien1_Animation_S);

	State Alien1_Animation_Back(GetStateFunction(SMSA_ALIEN1_ANIMATION_BACK_ACTION),NULL);
	Edge Alien1_Animation_S2_To_S3(2,GetEdgeFunction(SMEC_ALIEN1_ANIMATION_S2_TO_S3_CONDITION),false);
	Alien1_Animation_Back.AddEdge(Alien1_Animation_S2_To_S3);
	Edge Alien1_Animation_S2_To_S6(5,GetEdgeFunction(SMEC_ALIEN1_ANIMATION_S2_TO_S6_CONDITION),false);
	Alien1_Animation_Back.AddEdge(Alien1_Animation_S2_To_S6);
	Alien1_Animation.AddState(Alien1_Animation_Back);

	State Alien1_Animation_Idle_BACK(GetStateFunction(SMSA_ALIEN1_ANIMATION_IDLE_BACK_ACTION),NULL);
	Edge Alien1_Animation_S3_To_S2(1,GetEdgeFunction(SMEC_ALIEN1_ANIMATION_S3_TO_S2_CONDITION),false);
	Alien1_Animation_Idle_BACK.AddEdge(Alien1_Animation_S3_To_S2);
	Edge Alien1_Animation_S3_To_S4(3,GetEdgeFunction(SMEC_ALIEN1_ANIMATION_S3_TO_S4_CONDITION),false);
	Alien1_Animation_Idle_BACK.AddEdge(Alien1_Animation_S3_To_S4);
	Edge Alien1_Animation_S3_To_S6(5,GetEdgeFunction(SMEC_ALIEN1_ANIMATION_S3_TO_S6_CONDITION),false);
	Alien1_Animation_Idle_BACK.AddEdge(Alien1_Animation_S3_To_S6);
	Edge Alien1_Animation_S3_To_S8(7,GetEdgeFunction(SMEC_ALIEN1_ANIMATION_S3_TO_S8_CONDITION),false);
	Alien1_Animation_Idle_BACK.AddEdge(Alien1_Animation_S3_To_S8);
	Alien1_Animation.AddState(Alien1_Animation_Idle_BACK);

	State Alien1_Animation_Right(GetStateFunction(SMSA_ALIEN1_ANIMATION_RIGHT_ACTION),NULL);
	Edge Alien1_Animation_S4_To_S5(4,GetEdgeFunction(SMEC_ALIEN1_ANIMATION_S4_TO_S5_CONDITION),false);
	Alien1_Animation_Right.AddEdge(Alien1_Animation_S4_To_S5);
	Edge Alien1_Animation_S4_To_S8(7,GetEdgeFunction(SMEC_ALIEN1_ANIMATION_S4_TO_S8_CONDITION),false);
	Alien1_Animation_Right.AddEdge(Alien1_Animation_S4_To_S8);
	Alien1_Animation.AddState(Alien1_Animation_Right);

	State Alien1_Animation_Idle_RIG(GetStateFunction(SMSA_ALIEN1_ANIMATION_IDLE_RIG_ACTION),NULL);
	Edge Alien1_Animation_S5_To_S2(1,GetEdgeFunction(SMEC_ALIEN1_ANIMATION_S5_TO_S2_CONDITION),false);
	Alien1_Animation_Idle_RIG.AddEdge(Alien1_Animation_S5_To_S2);
	Edge Alien1_Animation_S5_To_S4(3,GetEdgeFunction(SMEC_ALIEN1_ANIMATION_S5_TO_S4_CONDITION),false);
	Alien1_Animation_Idle_RIG.AddEdge(Alien1_Animation_S5_To_S4);
	Edge Alien1_Animation_S5_To_S6(5,GetEdgeFunction(SMEC_ALIEN1_ANIMATION_S5_TO_S6_CONDITION),false);
	Alien1_Animation_Idle_RIG.AddEdge(Alien1_Animation_S5_To_S6);
	Edge Alien1_Animation_S5_To_S8(7,GetEdgeFunction(SMEC_ALIEN1_ANIMATION_S5_TO_S8_CONDITION),false);
	Alien1_Animation_Idle_RIG.AddEdge(Alien1_Animation_S5_To_S8);
	Alien1_Animation.AddState(Alien1_Animation_Idle_RIG);

	State Alien1_Animation_Forward(GetStateFunction(SMSA_ALIEN1_ANIMATION_FORWARD_ACTION),NULL);
	Edge Alien1_Animation_S6_To_S2(1,GetEdgeFunction(SMEC_ALIEN1_ANIMATION_S6_TO_S2_CONDITION),false);
	Alien1_Animation_Forward.AddEdge(Alien1_Animation_S6_To_S2);
	Edge Alien1_Animation_S6_To_S7(6,GetEdgeFunction(SMEC_ALIEN1_ANIMATION_S6_TO_S7_CONDITION),false);
	Alien1_Animation_Forward.AddEdge(Alien1_Animation_S6_To_S7);
	Alien1_Animation.AddState(Alien1_Animation_Forward);

	State Alien1_Animation_Idle_FOR(GetStateFunction(SMSA_ALIEN1_ANIMATION_IDLE_FOR_ACTION),NULL);
	Edge Alien1_Animation_S7_To_S4b(3,GetEdgeFunction(SMEC_ALIEN1_ANIMATION_S7_TO_S4B_CONDITION),false);
	Alien1_Animation_Idle_FOR.AddEdge(Alien1_Animation_S7_To_S4b);
	Edge Alien1_Animation_S7_To_S2(1,GetEdgeFunction(SMEC_ALIEN1_ANIMATION_S7_TO_S2_CONDITION),false);
	Alien1_Animation_Idle_FOR.AddEdge(Alien1_Animation_S7_To_S2);
	Edge Alien1_Animation_S7_To_S6(5,GetEdgeFunction(SMEC_ALIEN1_ANIMATION_S7_TO_S6_CONDITION),false);
	Alien1_Animation_Idle_FOR.AddEdge(Alien1_Animation_S7_To_S6);
	Edge Alien1_Animation_S7_To_S8(7,GetEdgeFunction(SMEC_ALIEN1_ANIMATION_S7_TO_S8_CONDITION),false);
	Alien1_Animation_Idle_FOR.AddEdge(Alien1_Animation_S7_To_S8);
	Alien1_Animation.AddState(Alien1_Animation_Idle_FOR);

	State Alien1_Animation_Left(GetStateFunction(SMSA_ALIEN1_ANIMATION_LEFT_ACTION),NULL);
	Edge Alien1_Animation_S8_To_S4(3,GetEdgeFunction(SMEC_ALIEN1_ANIMATION_S8_TO_S4_CONDITION),false);
	Alien1_Animation_Left.AddEdge(Alien1_Animation_S8_To_S4);
	Edge Alien1_Animation_S8_To_S9(8,GetEdgeFunction(SMEC_ALIEN1_ANIMATION_S8_TO_S9_CONDITION),false);
	Alien1_Animation_Left.AddEdge(Alien1_Animation_S8_To_S9);
	Alien1_Animation.AddState(Alien1_Animation_Left);

	State Alien1_Animation_Idle_Left(GetStateFunction(SMSA_ALIEN1_ANIMATION_IDLE_LEFT_ACTION),NULL);
	Edge Alien1_Animation_S9_To_S2(1,GetEdgeFunction(SMEC_ALIEN1_ANIMATION_S9_TO_S2_CONDITION),false);
	Alien1_Animation_Idle_Left.AddEdge(Alien1_Animation_S9_To_S2);
	Edge Alien1_Animation_S9_To_S4(3,GetEdgeFunction(SMEC_ALIEN1_ANIMATION_S9_TO_S4_CONDITION),false);
	Alien1_Animation_Idle_Left.AddEdge(Alien1_Animation_S9_To_S4);
	Edge Alien1_Animation_S9_To_S6(5,GetEdgeFunction(SMEC_ALIEN1_ANIMATION_S9_TO_S6_CONDITION),false);
	Alien1_Animation_Idle_Left.AddEdge(Alien1_Animation_S9_To_S6);
	Edge Alien1_Animation_S9_To_S8(7,GetEdgeFunction(SMEC_ALIEN1_ANIMATION_S9_TO_S8_CONDITION),false);
	Alien1_Animation_Idle_Left.AddEdge(Alien1_Animation_S9_To_S8);
	Alien1_Animation.AddState(Alien1_Animation_Idle_Left);

	Alien1_Animation.SetStartingState(0u);
	SMArray[SM_ALIEN1_ANIMATION] = Alien1_Animation;

	StateMachine Alien2_Animation;
	State Alien2_Animation_S(GetStateFunction(SMSA_ALIEN2_ANIMATION_S_ACTION),NULL);
	Edge Alien2_Animation_S1_To_S2(1,GetEdgeFunction(SMEC_ALIEN2_ANIMATION_S1_TO_S2_CONDITION),false);
	Alien2_Animation_S.AddEdge(Alien2_Animation_S1_To_S2);
	Edge Alien2_Animation_S1_To_S4(3,GetEdgeFunction(SMEC_ALIEN2_ANIMATION_S1_TO_S4_CONDITION),false);
	Alien2_Animation_S.AddEdge(Alien2_Animation_S1_To_S4);
	Edge Alien2_Animation_S1_To_S6(5,GetEdgeFunction(SMEC_ALIEN2_ANIMATION_S1_TO_S6_CONDITION),false);
	Alien2_Animation_S.AddEdge(Alien2_Animation_S1_To_S6);
	Edge Alien2_Animation_S1_To_S8(7,GetEdgeFunction(SMEC_ALIEN2_ANIMATION_S1_TO_S8_CONDITION),false);
	Alien2_Animation_S.AddEdge(Alien2_Animation_S1_To_S8);
	Alien2_Animation.AddState(Alien2_Animation_S);

	State Alien2_Animation_Back(GetStateFunction(SMSA_ALIEN2_ANIMATION_BACK_ACTION),NULL);
	Edge Alien2_Animation_S2_To_S3(2,GetEdgeFunction(SMEC_ALIEN2_ANIMATION_S2_TO_S3_CONDITION),false);
	Alien2_Animation_Back.AddEdge(Alien2_Animation_S2_To_S3);
	Edge Alien2_Animation_S2_To_S6(5,GetEdgeFunction(SMEC_ALIEN2_ANIMATION_S2_TO_S6_CONDITION),false);
	Alien2_Animation_Back.AddEdge(Alien2_Animation_S2_To_S6);
	Alien2_Animation.AddState(Alien2_Animation_Back);

	State Alien2_Animation_Idle_BACK(GetStateFunction(SMSA_ALIEN2_ANIMATION_IDLE_BACK_ACTION),NULL);
	Edge Alien2_Animation_S3_To_S2(1,GetEdgeFunction(SMEC_ALIEN2_ANIMATION_S3_TO_S2_CONDITION),false);
	Alien2_Animation_Idle_BACK.AddEdge(Alien2_Animation_S3_To_S2);
	Edge Alien2_Animation_S3_To_S4(3,GetEdgeFunction(SMEC_ALIEN2_ANIMATION_S3_TO_S4_CONDITION),false);
	Alien2_Animation_Idle_BACK.AddEdge(Alien2_Animation_S3_To_S4);
	Edge Alien2_Animation_S3_To_S6(5,GetEdgeFunction(SMEC_ALIEN2_ANIMATION_S3_TO_S6_CONDITION),false);
	Alien2_Animation_Idle_BACK.AddEdge(Alien2_Animation_S3_To_S6);
	Edge Alien2_Animation_S3_To_S8(7,GetEdgeFunction(SMEC_ALIEN2_ANIMATION_S3_TO_S8_CONDITION),false);
	Alien2_Animation_Idle_BACK.AddEdge(Alien2_Animation_S3_To_S8);
	Alien2_Animation.AddState(Alien2_Animation_Idle_BACK);

	State Alien2_Animation_Right(GetStateFunction(SMSA_ALIEN2_ANIMATION_RIGHT_ACTION),NULL);
	Edge Alien2_Animation_S4_To_S5(4,GetEdgeFunction(SMEC_ALIEN2_ANIMATION_S4_TO_S5_CONDITION),false);
	Alien2_Animation_Right.AddEdge(Alien2_Animation_S4_To_S5);
	Edge Alien2_Animation_S4_To_S8(7,GetEdgeFunction(SMEC_ALIEN2_ANIMATION_S4_TO_S8_CONDITION),false);
	Alien2_Animation_Right.AddEdge(Alien2_Animation_S4_To_S8);
	Alien2_Animation.AddState(Alien2_Animation_Right);

	State Alien2_Animation_Idle_RIG(GetStateFunction(SMSA_ALIEN2_ANIMATION_IDLE_RIG_ACTION),NULL);
	Edge Alien2_Animation_S5_To_S2(1,GetEdgeFunction(SMEC_ALIEN2_ANIMATION_S5_TO_S2_CONDITION),false);
	Alien2_Animation_Idle_RIG.AddEdge(Alien2_Animation_S5_To_S2);
	Edge Alien2_Animation_S5_To_S4(3,GetEdgeFunction(SMEC_ALIEN2_ANIMATION_S5_TO_S4_CONDITION),false);
	Alien2_Animation_Idle_RIG.AddEdge(Alien2_Animation_S5_To_S4);
	Edge Alien2_Animation_S5_To_S6(5,GetEdgeFunction(SMEC_ALIEN2_ANIMATION_S5_TO_S6_CONDITION),false);
	Alien2_Animation_Idle_RIG.AddEdge(Alien2_Animation_S5_To_S6);
	Edge Alien2_Animation_S5_To_S8(7,GetEdgeFunction(SMEC_ALIEN2_ANIMATION_S5_TO_S8_CONDITION),false);
	Alien2_Animation_Idle_RIG.AddEdge(Alien2_Animation_S5_To_S8);
	Alien2_Animation.AddState(Alien2_Animation_Idle_RIG);

	State Alien2_Animation_Forward(GetStateFunction(SMSA_ALIEN2_ANIMATION_FORWARD_ACTION),NULL);
	Edge Alien2_Animation_S6_To_S2(1,GetEdgeFunction(SMEC_ALIEN2_ANIMATION_S6_TO_S2_CONDITION),false);
	Alien2_Animation_Forward.AddEdge(Alien2_Animation_S6_To_S2);
	Edge Alien2_Animation_S6_To_S7(6,GetEdgeFunction(SMEC_ALIEN2_ANIMATION_S6_TO_S7_CONDITION),false);
	Alien2_Animation_Forward.AddEdge(Alien2_Animation_S6_To_S7);
	Alien2_Animation.AddState(Alien2_Animation_Forward);

	State Alien2_Animation_Idle_FOR(GetStateFunction(SMSA_ALIEN2_ANIMATION_IDLE_FOR_ACTION),NULL);
	Edge Alien2_Animation_S7_To_S4b(3,GetEdgeFunction(SMEC_ALIEN2_ANIMATION_S7_TO_S4B_CONDITION),false);
	Alien2_Animation_Idle_FOR.AddEdge(Alien2_Animation_S7_To_S4b);
	Edge Alien2_Animation_S7_To_S2(1,GetEdgeFunction(SMEC_ALIEN2_ANIMATION_S7_TO_S2_CONDITION),false);
	Alien2_Animation_Idle_FOR.AddEdge(Alien2_Animation_S7_To_S2);
	Edge Alien2_Animation_S7_To_S6(5,GetEdgeFunction(SMEC_ALIEN2_ANIMATION_S7_TO_S6_CONDITION),false);
	Alien2_Animation_Idle_FOR.AddEdge(Alien2_Animation_S7_To_S6);
	Edge Alien2_Animation_S7_To_S8(7,GetEdgeFunction(SMEC_ALIEN2_ANIMATION_S7_TO_S8_CONDITION),false);
	Alien2_Animation_Idle_FOR.AddEdge(Alien2_Animation_S7_To_S8);
	Alien2_Animation.AddState(Alien2_Animation_Idle_FOR);

	State Alien2_Animation_Left(GetStateFunction(SMSA_ALIEN2_ANIMATION_LEFT_ACTION),NULL);
	Edge Alien2_Animation_S8_To_S4(3,GetEdgeFunction(SMEC_ALIEN2_ANIMATION_S8_TO_S4_CONDITION),false);
	Alien2_Animation_Left.AddEdge(Alien2_Animation_S8_To_S4);
	Edge Alien2_Animation_S8_To_S9(8,GetEdgeFunction(SMEC_ALIEN2_ANIMATION_S8_TO_S9_CONDITION),false);
	Alien2_Animation_Left.AddEdge(Alien2_Animation_S8_To_S9);
	Alien2_Animation.AddState(Alien2_Animation_Left);

	State Alien2_Animation_Idle_Left(GetStateFunction(SMSA_ALIEN2_ANIMATION_IDLE_LEFT_ACTION),NULL);
	Edge Alien2_Animation_S9_To_S2(1,GetEdgeFunction(SMEC_ALIEN2_ANIMATION_S9_TO_S2_CONDITION),false);
	Alien2_Animation_Idle_Left.AddEdge(Alien2_Animation_S9_To_S2);
	Edge Alien2_Animation_S9_To_S4(3,GetEdgeFunction(SMEC_ALIEN2_ANIMATION_S9_TO_S4_CONDITION),false);
	Alien2_Animation_Idle_Left.AddEdge(Alien2_Animation_S9_To_S4);
	Edge Alien2_Animation_S9_To_S6(5,GetEdgeFunction(SMEC_ALIEN2_ANIMATION_S9_TO_S6_CONDITION),false);
	Alien2_Animation_Idle_Left.AddEdge(Alien2_Animation_S9_To_S6);
	Edge Alien2_Animation_S9_To_S8(7,GetEdgeFunction(SMEC_ALIEN2_ANIMATION_S9_TO_S8_CONDITION),false);
	Alien2_Animation_Idle_Left.AddEdge(Alien2_Animation_S9_To_S8);
	Alien2_Animation.AddState(Alien2_Animation_Idle_Left);

	Alien2_Animation.SetStartingState(0u);
	SMArray[SM_ALIEN2_ANIMATION] = Alien2_Animation;

	StateMachine Alien3_Animation;
	State Alien3_Animation_S(GetStateFunction(SMSA_ALIEN3_ANIMATION_S_ACTION),NULL);
	Edge Alien3_Animation_S1_To_S2(1,GetEdgeFunction(SMEC_ALIEN3_ANIMATION_S1_TO_S2_CONDITION),false);
	Alien3_Animation_S.AddEdge(Alien3_Animation_S1_To_S2);
	Edge Alien3_Animation_S1_To_S4(3,GetEdgeFunction(SMEC_ALIEN3_ANIMATION_S1_TO_S4_CONDITION),false);
	Alien3_Animation_S.AddEdge(Alien3_Animation_S1_To_S4);
	Edge Alien3_Animation_S1_To_S6(5,GetEdgeFunction(SMEC_ALIEN3_ANIMATION_S1_TO_S6_CONDITION),false);
	Alien3_Animation_S.AddEdge(Alien3_Animation_S1_To_S6);
	Edge Alien3_Animation_S1_To_S8(7,GetEdgeFunction(SMEC_ALIEN3_ANIMATION_S1_TO_S8_CONDITION),false);
	Alien3_Animation_S.AddEdge(Alien3_Animation_S1_To_S8);
	Alien3_Animation.AddState(Alien3_Animation_S);

	State Alien3_Animation_Back(GetStateFunction(SMSA_ALIEN3_ANIMATION_BACK_ACTION),NULL);
	Edge Alien3_Animation_S2_To_S3(2,GetEdgeFunction(SMEC_ALIEN3_ANIMATION_S2_TO_S3_CONDITION),false);
	Alien3_Animation_Back.AddEdge(Alien3_Animation_S2_To_S3);
	Edge Alien3_Animation_S2_To_S6(5,GetEdgeFunction(SMEC_ALIEN3_ANIMATION_S2_TO_S6_CONDITION),false);
	Alien3_Animation_Back.AddEdge(Alien3_Animation_S2_To_S6);
	Alien3_Animation.AddState(Alien3_Animation_Back);

	State Alien3_Animation_Idle_BACK(GetStateFunction(SMSA_ALIEN3_ANIMATION_IDLE_BACK_ACTION),NULL);
	Edge Alien3_Animation_S3_To_S2(1,GetEdgeFunction(SMEC_ALIEN3_ANIMATION_S3_TO_S2_CONDITION),false);
	Alien3_Animation_Idle_BACK.AddEdge(Alien3_Animation_S3_To_S2);
	Edge Alien3_Animation_S3_To_S4(3,GetEdgeFunction(SMEC_ALIEN3_ANIMATION_S3_TO_S4_CONDITION),false);
	Alien3_Animation_Idle_BACK.AddEdge(Alien3_Animation_S3_To_S4);
	Edge Alien3_Animation_S3_To_S6(5,GetEdgeFunction(SMEC_ALIEN3_ANIMATION_S3_TO_S6_CONDITION),false);
	Alien3_Animation_Idle_BACK.AddEdge(Alien3_Animation_S3_To_S6);
	Edge Alien3_Animation_S3_To_S8(7,GetEdgeFunction(SMEC_ALIEN3_ANIMATION_S3_TO_S8_CONDITION),false);
	Alien3_Animation_Idle_BACK.AddEdge(Alien3_Animation_S3_To_S8);
	Alien3_Animation.AddState(Alien3_Animation_Idle_BACK);

	State Alien3_Animation_Right(GetStateFunction(SMSA_ALIEN3_ANIMATION_RIGHT_ACTION),NULL);
	Edge Alien3_Animation_S4_To_S5(4,GetEdgeFunction(SMEC_ALIEN3_ANIMATION_S4_TO_S5_CONDITION),false);
	Alien3_Animation_Right.AddEdge(Alien3_Animation_S4_To_S5);
	Edge Alien3_Animation_S4_To_S8(7,GetEdgeFunction(SMEC_ALIEN3_ANIMATION_S4_TO_S8_CONDITION),false);
	Alien3_Animation_Right.AddEdge(Alien3_Animation_S4_To_S8);
	Alien3_Animation.AddState(Alien3_Animation_Right);

	State Alien3_Animation_Idle_RIG(GetStateFunction(SMSA_ALIEN3_ANIMATION_IDLE_RIG_ACTION),NULL);
	Edge Alien3_Animation_S5_To_S2(1,GetEdgeFunction(SMEC_ALIEN3_ANIMATION_S5_TO_S2_CONDITION),false);
	Alien3_Animation_Idle_RIG.AddEdge(Alien3_Animation_S5_To_S2);
	Edge Alien3_Animation_S5_To_S4(3,GetEdgeFunction(SMEC_ALIEN3_ANIMATION_S5_TO_S4_CONDITION),false);
	Alien3_Animation_Idle_RIG.AddEdge(Alien3_Animation_S5_To_S4);
	Edge Alien3_Animation_S5_To_S6(5,GetEdgeFunction(SMEC_ALIEN3_ANIMATION_S5_TO_S6_CONDITION),false);
	Alien3_Animation_Idle_RIG.AddEdge(Alien3_Animation_S5_To_S6);
	Edge Alien3_Animation_S5_To_S8(7,GetEdgeFunction(SMEC_ALIEN3_ANIMATION_S5_TO_S8_CONDITION),false);
	Alien3_Animation_Idle_RIG.AddEdge(Alien3_Animation_S5_To_S8);
	Alien3_Animation.AddState(Alien3_Animation_Idle_RIG);

	State Alien3_Animation_Forward(GetStateFunction(SMSA_ALIEN3_ANIMATION_FORWARD_ACTION),NULL);
	Edge Alien3_Animation_S6_To_S2(1,GetEdgeFunction(SMEC_ALIEN3_ANIMATION_S6_TO_S2_CONDITION),false);
	Alien3_Animation_Forward.AddEdge(Alien3_Animation_S6_To_S2);
	Edge Alien3_Animation_S6_To_S7(6,GetEdgeFunction(SMEC_ALIEN3_ANIMATION_S6_TO_S7_CONDITION),false);
	Alien3_Animation_Forward.AddEdge(Alien3_Animation_S6_To_S7);
	Alien3_Animation.AddState(Alien3_Animation_Forward);

	State Alien3_Animation_Idle_FOR(GetStateFunction(SMSA_ALIEN3_ANIMATION_IDLE_FOR_ACTION),NULL);
	Edge Alien3_Animation_S7_To_S4b(3,GetEdgeFunction(SMEC_ALIEN3_ANIMATION_S7_TO_S4B_CONDITION),false);
	Alien3_Animation_Idle_FOR.AddEdge(Alien3_Animation_S7_To_S4b);
	Edge Alien3_Animation_S7_To_S2(1,GetEdgeFunction(SMEC_ALIEN3_ANIMATION_S7_TO_S2_CONDITION),false);
	Alien3_Animation_Idle_FOR.AddEdge(Alien3_Animation_S7_To_S2);
	Edge Alien3_Animation_S7_To_S6(5,GetEdgeFunction(SMEC_ALIEN3_ANIMATION_S7_TO_S6_CONDITION),false);
	Alien3_Animation_Idle_FOR.AddEdge(Alien3_Animation_S7_To_S6);
	Edge Alien3_Animation_S7_To_S8(7,GetEdgeFunction(SMEC_ALIEN3_ANIMATION_S7_TO_S8_CONDITION),false);
	Alien3_Animation_Idle_FOR.AddEdge(Alien3_Animation_S7_To_S8);
	Alien3_Animation.AddState(Alien3_Animation_Idle_FOR);

	State Alien3_Animation_Left(GetStateFunction(SMSA_ALIEN3_ANIMATION_LEFT_ACTION),NULL);
	Edge Alien3_Animation_S8_To_S4(3,GetEdgeFunction(SMEC_ALIEN3_ANIMATION_S8_TO_S4_CONDITION),false);
	Alien3_Animation_Left.AddEdge(Alien3_Animation_S8_To_S4);
	Edge Alien3_Animation_S8_To_S9(8,GetEdgeFunction(SMEC_ALIEN3_ANIMATION_S8_TO_S9_CONDITION),false);
	Alien3_Animation_Left.AddEdge(Alien3_Animation_S8_To_S9);
	Alien3_Animation.AddState(Alien3_Animation_Left);

	State Alien3_Animation_Idle_Left(GetStateFunction(SMSA_ALIEN3_ANIMATION_IDLE_LEFT_ACTION),NULL);
	Edge Alien3_Animation_S9_To_S2(1,GetEdgeFunction(SMEC_ALIEN3_ANIMATION_S9_TO_S2_CONDITION),false);
	Alien3_Animation_Idle_Left.AddEdge(Alien3_Animation_S9_To_S2);
	Edge Alien3_Animation_S9_To_S4(3,GetEdgeFunction(SMEC_ALIEN3_ANIMATION_S9_TO_S4_CONDITION),false);
	Alien3_Animation_Idle_Left.AddEdge(Alien3_Animation_S9_To_S4);
	Edge Alien3_Animation_S9_To_S6(5,GetEdgeFunction(SMEC_ALIEN3_ANIMATION_S9_TO_S6_CONDITION),false);
	Alien3_Animation_Idle_Left.AddEdge(Alien3_Animation_S9_To_S6);
	Edge Alien3_Animation_S9_To_S8(7,GetEdgeFunction(SMEC_ALIEN3_ANIMATION_S9_TO_S8_CONDITION),false);
	Alien3_Animation_Idle_Left.AddEdge(Alien3_Animation_S9_To_S8);
	Alien3_Animation.AddState(Alien3_Animation_Idle_Left);

	Alien3_Animation.SetStartingState(0u);
	SMArray[SM_ALIEN3_ANIMATION] = Alien3_Animation;

	StateMachine Alex_AL;
	State Alex_AL_s1(GetStateFunction(SMSA_ALEX_AL_S1_ACTION),NULL);
	Edge Alex_AL_S1_To_S2(1,GetEdgeFunction(SMEC_ALEX_AL_S1_TO_S2_CONDITION),false);
	Alex_AL_s1.AddEdge(Alex_AL_S1_To_S2);
	Alex_AL.AddState(Alex_AL_s1);

	State Alex_AL_S2(GetStateFunction(SMSA_ALEX_AL_S2_ACTION),NULL);
	Edge Alex_AL_S2_To_S3(2,GetEdgeFunction(SMEC_ALEX_AL_S2_TO_S3_CONDITION),false);
	Alex_AL_S2.AddEdge(Alex_AL_S2_To_S3);
	Alex_AL.AddState(Alex_AL_S2);

	State Alex_AL_S3(GetStateFunction(SMSA_ALEX_AL_S3_ACTION),NULL);
	Edge Alex_AL_S3_To_S4(3,GetEdgeFunction(SMEC_ALEX_AL_S3_TO_S4_CONDITION),false);
	Alex_AL_S3.AddEdge(Alex_AL_S3_To_S4);
	Alex_AL.AddState(Alex_AL_S3);

	State Alex_AL_S4(GetStateFunction(SMSA_ALEX_AL_S4_ACTION),NULL);
	Edge Alex_AL_S4_To_S5(4,GetEdgeFunction(SMEC_ALEX_AL_S4_TO_S5_CONDITION),false);
	Alex_AL_S4.AddEdge(Alex_AL_S4_To_S5);
	Alex_AL.AddState(Alex_AL_S4);

	State Alex_AL_S5(GetStateFunction(SMSA_ALEX_AL_S5_ACTION),NULL);
	Edge Alex_AL_S5_To_S1(0,GetEdgeFunction(SMEC_ALEX_AL_S5_TO_S1_CONDITION),false);
	Alex_AL_S5.AddEdge(Alex_AL_S5_To_S1);
	Alex_AL.AddState(Alex_AL_S5);

	Alex_AL.SetStartingState(0u);
	SMArray[SM_ALEX_AL] = Alex_AL;

	StateMachine Hunter_AI;
	State Hunter_AI_Idle(GetStateFunction(SMSA_HUNTER_AI_IDLE_ACTION),NULL);
	Edge Hunter_AI_S1_To_S2(1,GetEdgeFunction(SMEC_HUNTER_AI_S1_TO_S2_CONDITION),false);
	Hunter_AI_Idle.AddEdge(Hunter_AI_S1_To_S2);
	Edge Hunter_AI_S1_To_S3(2,GetEdgeFunction(SMEC_HUNTER_AI_S1_TO_S3_CONDITION),false);
	Hunter_AI_Idle.AddEdge(Hunter_AI_S1_To_S3);
	Edge Hunter_AI_S1_To_S4(3,GetEdgeFunction(SMEC_HUNTER_AI_S1_TO_S4_CONDITION),false);
	Hunter_AI_Idle.AddEdge(Hunter_AI_S1_To_S4);
	Edge Hunter_AI_S1_To_S5(4,GetEdgeFunction(SMEC_HUNTER_AI_S1_TO_S5_CONDITION),false);
	Hunter_AI_Idle.AddEdge(Hunter_AI_S1_To_S5);
	Edge Hunter_AI_S1_To_S6(5,GetEdgeFunction(SMEC_HUNTER_AI_S1_TO_S6_CONDITION),false);
	Hunter_AI_Idle.AddEdge(Hunter_AI_S1_To_S6);
	Edge Hunter_AI_S1_To_S8(7,GetEdgeFunction(SMEC_HUNTER_AI_S1_TO_S8_CONDITION),false);
	Hunter_AI_Idle.AddEdge(Hunter_AI_S1_To_S8);
	Hunter_AI.AddState(Hunter_AI_Idle);

	State Hunter_AI_Up(GetStateFunction(SMSA_HUNTER_AI_UP_ACTION),NULL);
	Edge Hunter_AI_S2_To_S1(0,GetEdgeFunction(SMEC_HUNTER_AI_S2_TO_S1_CONDITION),false);
	Hunter_AI_Up.AddEdge(Hunter_AI_S2_To_S1);
	Edge Hunter_AI_S2_To_S3(2,GetEdgeFunction(SMEC_HUNTER_AI_S2_TO_S3_CONDITION),false);
	Hunter_AI_Up.AddEdge(Hunter_AI_S2_To_S3);
	Edge Hunter_AI_S2_To_S4(3,GetEdgeFunction(SMEC_HUNTER_AI_S2_TO_S4_CONDITION),false);
	Hunter_AI_Up.AddEdge(Hunter_AI_S2_To_S4);
	Edge Hunter_AI_S2_To_S5(4,GetEdgeFunction(SMEC_HUNTER_AI_S2_TO_S5_CONDITION),false);
	Hunter_AI_Up.AddEdge(Hunter_AI_S2_To_S5);
	Edge Hunter_AI_S2_To_S6(5,GetEdgeFunction(SMEC_HUNTER_AI_S2_TO_S6_CONDITION),false);
	Hunter_AI_Up.AddEdge(Hunter_AI_S2_To_S6);
	Hunter_AI.AddState(Hunter_AI_Up);

	State Hunter_AI_Down(GetStateFunction(SMSA_HUNTER_AI_DOWN_ACTION),NULL);
	Edge Hunter_AI_S3_To_S1(0,GetEdgeFunction(SMEC_HUNTER_AI_S3_TO_S1_CONDITION),false);
	Hunter_AI_Down.AddEdge(Hunter_AI_S3_To_S1);
	Edge Hunter_AI_S3_To_S2(1,GetEdgeFunction(SMEC_HUNTER_AI_S3_TO_S2_CONDITION),false);
	Hunter_AI_Down.AddEdge(Hunter_AI_S3_To_S2);
	Edge Hunter_AI_S3_To_S4(3,GetEdgeFunction(SMEC_HUNTER_AI_S3_TO_S4_CONDITION),false);
	Hunter_AI_Down.AddEdge(Hunter_AI_S3_To_S4);
	Edge Hunter_AI_S3_To_S5(4,GetEdgeFunction(SMEC_HUNTER_AI_S3_TO_S5_CONDITION),false);
	Hunter_AI_Down.AddEdge(Hunter_AI_S3_To_S5);
	Edge Hunter_AI_S3_To_S8(7,GetEdgeFunction(SMEC_HUNTER_AI_S3_TO_S8_CONDITION),false);
	Hunter_AI_Down.AddEdge(Hunter_AI_S3_To_S8);
	Hunter_AI.AddState(Hunter_AI_Down);

	State Hunter_AI_Left(GetStateFunction(SMSA_HUNTER_AI_LEFT_ACTION),NULL);
	Edge Hunter_AI_S4_To_S1(0,GetEdgeFunction(SMEC_HUNTER_AI_S4_TO_S1_CONDITION),false);
	Hunter_AI_Left.AddEdge(Hunter_AI_S4_To_S1);
	Edge Hunter_AI_S4_To_S2(1,GetEdgeFunction(SMEC_HUNTER_AI_S4_TO_S2_CONDITION),false);
	Hunter_AI_Left.AddEdge(Hunter_AI_S4_To_S2);
	Edge Hunter_AI_S4_To_S3(2,GetEdgeFunction(SMEC_HUNTER_AI_S4_TO_S3_CONDITION),false);
	Hunter_AI_Left.AddEdge(Hunter_AI_S4_To_S3);
	Edge Hunter_AI_S4_To_S5(4,GetEdgeFunction(SMEC_HUNTER_AI_S4_TO_S5_CONDITION),false);
	Hunter_AI_Left.AddEdge(Hunter_AI_S4_To_S5);
	Edge Hunter_AI_S4_To_S9(8,GetEdgeFunction(SMEC_HUNTER_AI_S4_TO_S9_CONDITION),false);
	Hunter_AI_Left.AddEdge(Hunter_AI_S4_To_S9);
	Hunter_AI.AddState(Hunter_AI_Left);

	State Hunter_AI_Right(GetStateFunction(SMSA_HUNTER_AI_RIGHT_ACTION),NULL);
	Edge Hunter_AI_S5_To_S1(0,GetEdgeFunction(SMEC_HUNTER_AI_S5_TO_S1_CONDITION),false);
	Hunter_AI_Right.AddEdge(Hunter_AI_S5_To_S1);
	Edge Hunter_AI_S5_To_S2(1,GetEdgeFunction(SMEC_HUNTER_AI_S5_TO_S2_CONDITION),false);
	Hunter_AI_Right.AddEdge(Hunter_AI_S5_To_S2);
	Edge Hunter_AI_S5_To_S3(2,GetEdgeFunction(SMEC_HUNTER_AI_S5_TO_S3_CONDITION),false);
	Hunter_AI_Right.AddEdge(Hunter_AI_S5_To_S3);
	Edge Hunter_AI_S5_To_S4(3,GetEdgeFunction(SMEC_HUNTER_AI_S5_TO_S4_CONDITION),false);
	Hunter_AI_Right.AddEdge(Hunter_AI_S5_To_S4);
	Edge Hunter_AI_S5_To_S7(6,GetEdgeFunction(SMEC_HUNTER_AI_S5_TO_S7_CONDITION),false);
	Hunter_AI_Right.AddEdge(Hunter_AI_S5_To_S7);
	Hunter_AI.AddState(Hunter_AI_Right);

	State Hunter_AI_S6(GetStateFunction(SMSA_HUNTER_AI_S6_ACTION),NULL);
	Edge Hunter_AI_S6_To_S1(0,GetEdgeFunction(SMEC_HUNTER_AI_S6_TO_S1_CONDITION),false);
	Hunter_AI_S6.AddEdge(Hunter_AI_S6_To_S1);
	Edge Hunter_AI_S6_To_S2(1,GetEdgeFunction(SMEC_HUNTER_AI_S6_TO_S2_CONDITION),false);
	Hunter_AI_S6.AddEdge(Hunter_AI_S6_To_S2);
	Hunter_AI.AddState(Hunter_AI_S6);

	State Hunter_AI_S7(GetStateFunction(SMSA_HUNTER_AI_S7_ACTION),NULL);
	Edge Hunter_AI_S7_To_S1(0,GetEdgeFunction(SMEC_HUNTER_AI_S7_TO_S1_CONDITION),false);
	Hunter_AI_S7.AddEdge(Hunter_AI_S7_To_S1);
	Edge Hunter_AI_S7_To_S5(4,GetEdgeFunction(SMEC_HUNTER_AI_S7_TO_S5_CONDITION),false);
	Hunter_AI_S7.AddEdge(Hunter_AI_S7_To_S5);
	Hunter_AI.AddState(Hunter_AI_S7);

	State Hunter_AI_S8(GetStateFunction(SMSA_HUNTER_AI_S8_ACTION),NULL);
	Edge Hunter_AI_S8_To_S1(0,GetEdgeFunction(SMEC_HUNTER_AI_S8_TO_S1_CONDITION),false);
	Hunter_AI_S8.AddEdge(Hunter_AI_S8_To_S1);
	Edge Hunter_AI_S8_To_S3(2,GetEdgeFunction(SMEC_HUNTER_AI_S8_TO_S3_CONDITION),false);
	Hunter_AI_S8.AddEdge(Hunter_AI_S8_To_S3);
	Hunter_AI.AddState(Hunter_AI_S8);

	State Hunter_AI_S9(GetStateFunction(SMSA_HUNTER_AI_S9_ACTION),NULL);
	Edge Hunter_AI_S9_To_S1(0,GetEdgeFunction(SMEC_HUNTER_AI_S9_TO_S1_CONDITION),false);
	Hunter_AI_S9.AddEdge(Hunter_AI_S9_To_S1);
	Edge Hunter_AI_S9_To_S4(3,GetEdgeFunction(SMEC_HUNTER_AI_S9_TO_S4_CONDITION),false);
	Hunter_AI_S9.AddEdge(Hunter_AI_S9_To_S4);
	Hunter_AI.AddState(Hunter_AI_S9);

	Hunter_AI.SetStartingState(0u);
	SMArray[SM_HUNTER_AI] = Hunter_AI;

	StateMachine left_right;
	State left_right_left(GetStateFunction(SMSA_LEFT_RIGHT_LEFT_ACTION),NULL);
	Edge left_right_S1_To_S3(1,GetEdgeFunction(SMEC_LEFT_RIGHT_S1_TO_S3_CONDITION),false);
	left_right_left.AddEdge(left_right_S1_To_S3);
	left_right.AddState(left_right_left);

	State left_right_Right(GetStateFunction(SMSA_LEFT_RIGHT_RIGHT_ACTION),NULL);
	Edge left_right_S3_To_S1(0,GetEdgeFunction(SMEC_LEFT_RIGHT_S3_TO_S1_CONDITION),false);
	left_right_Right.AddEdge(left_right_S3_To_S1);
	left_right.AddState(left_right_Right);

	left_right.SetStartingState(0u);
	SMArray[SM_LEFT_RIGHT] = left_right;

	StateMachine up_down;
	State up_down_up(GetStateFunction(SMSA_UP_DOWN_UP_ACTION),NULL);
	Edge up_down_S1_To_S3(1,GetEdgeFunction(SMEC_UP_DOWN_S1_TO_S3_CONDITION),false);
	up_down_up.AddEdge(up_down_S1_To_S3);
	up_down.AddState(up_down_up);

	State up_down_Down(GetStateFunction(SMSA_UP_DOWN_DOWN_ACTION),NULL);
	Edge up_down_S3_To_S1(0,GetEdgeFunction(SMEC_UP_DOWN_S3_TO_S1_CONDITION),false);
	up_down_Down.AddEdge(up_down_S3_To_S1);
	up_down.AddState(up_down_Down);

	up_down.SetStartingState(0u);
	SMArray[SM_UP_DOWN] = up_down;

	StateMachine Illiminati_Al;
	State Illiminati_Al_right(GetStateFunction(SMSA_ILLIMINATI_AL_RIGHT_ACTION),NULL);
	Edge Illiminati_Al_S1_To_S2(1,GetEdgeFunction(SMEC_ILLIMINATI_AL_S1_TO_S2_CONDITION),false);
	Illiminati_Al_right.AddEdge(Illiminati_Al_S1_To_S2);
	Illiminati_Al.AddState(Illiminati_Al_right);

	State Illiminati_Al_down(GetStateFunction(SMSA_ILLIMINATI_AL_DOWN_ACTION),NULL);
	Edge Illiminati_Al_S2_To_S3(2,GetEdgeFunction(SMEC_ILLIMINATI_AL_S2_TO_S3_CONDITION),false);
	Illiminati_Al_down.AddEdge(Illiminati_Al_S2_To_S3);
	Illiminati_Al.AddState(Illiminati_Al_down);

	State Illiminati_Al_left(GetStateFunction(SMSA_ILLIMINATI_AL_LEFT_ACTION),NULL);
	Edge Illiminati_Al_S3_To_S4(3,GetEdgeFunction(SMEC_ILLIMINATI_AL_S3_TO_S4_CONDITION),false);
	Illiminati_Al_left.AddEdge(Illiminati_Al_S3_To_S4);
	Illiminati_Al.AddState(Illiminati_Al_left);

	State Illiminati_Al_up(GetStateFunction(SMSA_ILLIMINATI_AL_UP_ACTION),NULL);
	Edge Illiminati_Al_S4_To_S1(0,GetEdgeFunction(SMEC_ILLIMINATI_AL_S4_TO_S1_CONDITION),false);
	Illiminati_Al_up.AddEdge(Illiminati_Al_S4_To_S1);
	Illiminati_Al.AddState(Illiminati_Al_up);

	Illiminati_Al.SetStartingState(3u);
	SMArray[SM_ILLIMINATI_AL] = Illiminati_Al;

	StateMachine Fred_AL;
	State Fred_AL_right(GetStateFunction(SMSA_FRED_AL_RIGHT_ACTION),NULL);
	Edge Fred_AL_S1_To_S2(1,GetEdgeFunction(SMEC_FRED_AL_S1_TO_S2_CONDITION),false);
	Fred_AL_right.AddEdge(Fred_AL_S1_To_S2);
	Fred_AL.AddState(Fred_AL_right);

	State Fred_AL_down(GetStateFunction(SMSA_FRED_AL_DOWN_ACTION),NULL);
	Edge Fred_AL_S2_To_S3(2,GetEdgeFunction(SMEC_FRED_AL_S2_TO_S3_CONDITION),false);
	Fred_AL_down.AddEdge(Fred_AL_S2_To_S3);
	Fred_AL.AddState(Fred_AL_down);

	State Fred_AL_left(GetStateFunction(SMSA_FRED_AL_LEFT_ACTION),NULL);
	Edge Fred_AL_S3_To_S4(3,GetEdgeFunction(SMEC_FRED_AL_S3_TO_S4_CONDITION),false);
	Fred_AL_left.AddEdge(Fred_AL_S3_To_S4);
	Fred_AL.AddState(Fred_AL_left);

	State Fred_AL_up(GetStateFunction(SMSA_FRED_AL_UP_ACTION),NULL);
	Edge Fred_AL_S4_To_S1(0,GetEdgeFunction(SMEC_FRED_AL_S4_TO_S1_CONDITION),false);
	Fred_AL_up.AddEdge(Fred_AL_S4_To_S1);
	Fred_AL.AddState(Fred_AL_up);

	Fred_AL.SetStartingState(3u);
	SMArray[SM_FRED_AL] = Fred_AL;

	StateMachine Drugs_AI;
	State Drugs_AI_Left2(GetStateFunction(SMSA_DRUGS_AI_LEFT2_ACTION),NULL);
	Edge Drugs_AI_S1_To_S5(4,GetEdgeFunction(SMEC_DRUGS_AI_S1_TO_S5_CONDITION),false);
	Drugs_AI_Left2.AddEdge(Drugs_AI_S1_To_S5);
	Drugs_AI.AddState(Drugs_AI_Left2);

	State Drugs_AI_down(GetStateFunction(SMSA_DRUGS_AI_DOWN_ACTION),NULL);
	Edge Drugs_AI_S2_To_S3(2,GetEdgeFunction(SMEC_DRUGS_AI_S2_TO_S3_CONDITION),false);
	Drugs_AI_down.AddEdge(Drugs_AI_S2_To_S3);
	Drugs_AI.AddState(Drugs_AI_down);

	State Drugs_AI_left(GetStateFunction(SMSA_DRUGS_AI_LEFT_ACTION),NULL);
	Edge Drugs_AI_S3_To_S4(3,GetEdgeFunction(SMEC_DRUGS_AI_S3_TO_S4_CONDITION),false);
	Drugs_AI_left.AddEdge(Drugs_AI_S3_To_S4);
	Drugs_AI.AddState(Drugs_AI_left);

	State Drugs_AI_Down2(GetStateFunction(SMSA_DRUGS_AI_DOWN2_ACTION),NULL);
	Edge Drugs_AI_S4_To_S1(0,GetEdgeFunction(SMEC_DRUGS_AI_S4_TO_S1_CONDITION),false);
	Drugs_AI_Down2.AddEdge(Drugs_AI_S4_To_S1);
	Drugs_AI.AddState(Drugs_AI_Down2);

	State Drugs_AI_up(GetStateFunction(SMSA_DRUGS_AI_UP_ACTION),NULL);
	Edge Drugs_AI_S5_To_S6(5,GetEdgeFunction(SMEC_DRUGS_AI_S5_TO_S6_CONDITION),false);
	Drugs_AI_up.AddEdge(Drugs_AI_S5_To_S6);
	Drugs_AI.AddState(Drugs_AI_up);

	State Drugs_AI_Right(GetStateFunction(SMSA_DRUGS_AI_RIGHT_ACTION),NULL);
	Edge Drugs_AI_S6_To_S7(6,GetEdgeFunction(SMEC_DRUGS_AI_S6_TO_S7_CONDITION),false);
	Drugs_AI_Right.AddEdge(Drugs_AI_S6_To_S7);
	Drugs_AI.AddState(Drugs_AI_Right);

	State Drugs_AI_up2(GetStateFunction(SMSA_DRUGS_AI_UP2_ACTION),NULL);
	Edge Drugs_AI_S7_To_S8(7,GetEdgeFunction(SMEC_DRUGS_AI_S7_TO_S8_CONDITION),false);
	Drugs_AI_up2.AddEdge(Drugs_AI_S7_To_S8);
	Drugs_AI.AddState(Drugs_AI_up2);

	State Drugs_AI_Right2(GetStateFunction(SMSA_DRUGS_AI_RIGHT2_ACTION),NULL);
	Edge Drugs_AI_S8_To_S9(8,GetEdgeFunction(SMEC_DRUGS_AI_S8_TO_S9_CONDITION),false);
	Drugs_AI_Right2.AddEdge(Drugs_AI_S8_To_S9);
	Drugs_AI.AddState(Drugs_AI_Right2);

	State Drugs_AI_Up3(GetStateFunction(SMSA_DRUGS_AI_UP3_ACTION),NULL);
	Edge Drugs_AI_S9_To_S10(9,GetEdgeFunction(SMEC_DRUGS_AI_S9_TO_S10_CONDITION),false);
	Drugs_AI_Up3.AddEdge(Drugs_AI_S9_To_S10);
	Drugs_AI.AddState(Drugs_AI_Up3);

	State Drugs_AI_Right3(GetStateFunction(SMSA_DRUGS_AI_RIGHT3_ACTION),NULL);
	Edge Drugs_AI_S10_To_S2(1,GetEdgeFunction(SMEC_DRUGS_AI_S10_TO_S2_CONDITION),false);
	Drugs_AI_Right3.AddEdge(Drugs_AI_S10_To_S2);
	Drugs_AI.AddState(Drugs_AI_Right3);

	Drugs_AI.SetStartingState(1u);
	SMArray[SM_DRUGS_AI] = Drugs_AI;

	StateMachine Nate_AL;
	State Nate_AL_right(GetStateFunction(SMSA_NATE_AL_RIGHT_ACTION),NULL);
	Edge Nate_AL_S1_To_S2(1,GetEdgeFunction(SMEC_NATE_AL_S1_TO_S2_CONDITION),false);
	Nate_AL_right.AddEdge(Nate_AL_S1_To_S2);
	Nate_AL.AddState(Nate_AL_right);

	State Nate_AL_down(GetStateFunction(SMSA_NATE_AL_DOWN_ACTION),NULL);
	Edge Nate_AL_S2_To_S3(2,GetEdgeFunction(SMEC_NATE_AL_S2_TO_S3_CONDITION),false);
	Nate_AL_down.AddEdge(Nate_AL_S2_To_S3);
	Nate_AL.AddState(Nate_AL_down);

	State Nate_AL_left(GetStateFunction(SMSA_NATE_AL_LEFT_ACTION),NULL);
	Edge Nate_AL_S3_To_S4(3,GetEdgeFunction(SMEC_NATE_AL_S3_TO_S4_CONDITION),false);
	Nate_AL_left.AddEdge(Nate_AL_S3_To_S4);
	Nate_AL.AddState(Nate_AL_left);

	State Nate_AL_up(GetStateFunction(SMSA_NATE_AL_UP_ACTION),NULL);
	Edge Nate_AL_S4_To_S1(0,GetEdgeFunction(SMEC_NATE_AL_S4_TO_S1_CONDITION),false);
	Nate_AL_up.AddEdge(Nate_AL_S4_To_S1);
	Nate_AL.AddState(Nate_AL_up);

	Nate_AL.SetStartingState(3u);
	SMArray[SM_NATE_AL] = Nate_AL;

	StateMachine Staci_AL;
	State Staci_AL_right(GetStateFunction(SMSA_STACI_AL_RIGHT_ACTION),NULL);
	Edge Staci_AL_S1_To_S2(1,GetEdgeFunction(SMEC_STACI_AL_S1_TO_S2_CONDITION),false);
	Staci_AL_right.AddEdge(Staci_AL_S1_To_S2);
	Staci_AL.AddState(Staci_AL_right);

	State Staci_AL_down(GetStateFunction(SMSA_STACI_AL_DOWN_ACTION),NULL);
	Edge Staci_AL_S2_To_S3(2,GetEdgeFunction(SMEC_STACI_AL_S2_TO_S3_CONDITION),false);
	Staci_AL_down.AddEdge(Staci_AL_S2_To_S3);
	Staci_AL.AddState(Staci_AL_down);

	State Staci_AL_left(GetStateFunction(SMSA_STACI_AL_LEFT_ACTION),NULL);
	Edge Staci_AL_S3_To_S4(3,GetEdgeFunction(SMEC_STACI_AL_S3_TO_S4_CONDITION),false);
	Staci_AL_left.AddEdge(Staci_AL_S3_To_S4);
	Staci_AL.AddState(Staci_AL_left);

	State Staci_AL_up(GetStateFunction(SMSA_STACI_AL_UP_ACTION),NULL);
	Edge Staci_AL_S4_To_S1(0,GetEdgeFunction(SMEC_STACI_AL_S4_TO_S1_CONDITION),false);
	Staci_AL_up.AddEdge(Staci_AL_S4_To_S1);
	Staci_AL.AddState(Staci_AL_up);

	Staci_AL.SetStartingState(0u);
	SMArray[SM_STACI_AL] = Staci_AL;

	StateMachine axe_AL;
	State axe_AL_UP(GetStateFunction(SMSA_AXE_AL_UP_ACTION),NULL);
	Edge axe_AL_S1_To_S5(6,GetEdgeFunction(SMEC_AXE_AL_S1_TO_S5_CONDITION),false);
	axe_AL_UP.AddEdge(axe_AL_S1_To_S5);
	axe_AL.AddState(axe_AL_UP);

	State axe_AL_Right5(GetStateFunction(SMSA_AXE_AL_RIGHT5_ACTION),NULL);
	Edge axe_AL_S13_To_S2(2,GetEdgeFunction(SMEC_AXE_AL_S13_TO_S2_CONDITION),false);
	axe_AL_Right5.AddEdge(axe_AL_S13_To_S2);
	axe_AL.AddState(axe_AL_Right5);

	State axe_AL_down(GetStateFunction(SMSA_AXE_AL_DOWN_ACTION),NULL);
	Edge axe_AL_S2_To_S3(4,GetEdgeFunction(SMEC_AXE_AL_S2_TO_S3_CONDITION),false);
	axe_AL_down.AddEdge(axe_AL_S2_To_S3);
	axe_AL.AddState(axe_AL_down);

	State axe_AL_Down3(GetStateFunction(SMSA_AXE_AL_DOWN3_ACTION),NULL);
	Edge axe_AL_S14_To_S12(13,GetEdgeFunction(SMEC_AXE_AL_S14_TO_S12_CONDITION),false);
	axe_AL_Down3.AddEdge(axe_AL_S14_To_S12);
	axe_AL.AddState(axe_AL_Down3);

	State axe_AL_left(GetStateFunction(SMSA_AXE_AL_LEFT_ACTION),NULL);
	Edge axe_AL_S3_To_S4(5,GetEdgeFunction(SMEC_AXE_AL_S3_TO_S4_CONDITION),false);
	axe_AL_left.AddEdge(axe_AL_S3_To_S4);
	axe_AL.AddState(axe_AL_left);

	State axe_AL_Right2(GetStateFunction(SMSA_AXE_AL_RIGHT2_ACTION),NULL);
	Edge axe_AL_S4_To_S1(0,GetEdgeFunction(SMEC_AXE_AL_S4_TO_S1_CONDITION),false);
	axe_AL_Right2.AddEdge(axe_AL_S4_To_S1);
	axe_AL.AddState(axe_AL_Right2);

	State axe_AL_Left2(GetStateFunction(SMSA_AXE_AL_LEFT2_ACTION),NULL);
	Edge axe_AL_S5_To_S14(3,GetEdgeFunction(SMEC_AXE_AL_S5_TO_S14_CONDITION),false);
	axe_AL_Left2.AddEdge(axe_AL_S5_To_S14);
	axe_AL.AddState(axe_AL_Left2);

	State axe_AL_left4(GetStateFunction(SMSA_AXE_AL_LEFT4_ACTION),NULL);
	Edge axe_AL_S6_To_S8(9,GetEdgeFunction(SMEC_AXE_AL_S6_TO_S8_CONDITION),false);
	axe_AL_left4.AddEdge(axe_AL_S6_To_S8);
	axe_AL.AddState(axe_AL_left4);

	State axe_AL_Right3(GetStateFunction(SMSA_AXE_AL_RIGHT3_ACTION),NULL);
	Edge axe_AL_S7_To_S6(7,GetEdgeFunction(SMEC_AXE_AL_S7_TO_S6_CONDITION),false);
	axe_AL_Right3.AddEdge(axe_AL_S7_To_S6);
	axe_AL.AddState(axe_AL_Right3);

	State axe_AL_down4(GetStateFunction(SMSA_AXE_AL_DOWN4_ACTION),NULL);
	Edge axe_AL_S8_To_S10(11,GetEdgeFunction(SMEC_AXE_AL_S8_TO_S10_CONDITION),false);
	axe_AL_down4.AddEdge(axe_AL_S8_To_S10);
	axe_AL.AddState(axe_AL_down4);

	State axe_AL_up3(GetStateFunction(SMSA_AXE_AL_UP3_ACTION),NULL);
	Edge axe_AL_S9_To_S7(8,GetEdgeFunction(SMEC_AXE_AL_S9_TO_S7_CONDITION),false);
	axe_AL_up3.AddEdge(axe_AL_S9_To_S7);
	axe_AL.AddState(axe_AL_up3);

	State axe_AL_Right4(GetStateFunction(SMSA_AXE_AL_RIGHT4_ACTION),NULL);
	Edge axe_AL_S10_To_S11(12,GetEdgeFunction(SMEC_AXE_AL_S10_TO_S11_CONDITION),false);
	axe_AL_Right4.AddEdge(axe_AL_S10_To_S11);
	axe_AL.AddState(axe_AL_Right4);

	State axe_AL_up4(GetStateFunction(SMSA_AXE_AL_UP4_ACTION),NULL);
	Edge axe_AL_S11_To_S13(1,GetEdgeFunction(SMEC_AXE_AL_S11_TO_S13_CONDITION),false);
	axe_AL_up4.AddEdge(axe_AL_S11_To_S13);
	axe_AL.AddState(axe_AL_up4);

	State axe_AL_left3(GetStateFunction(SMSA_AXE_AL_LEFT3_ACTION),NULL);
	Edge axe_AL_S12_To_S9(10,GetEdgeFunction(SMEC_AXE_AL_S12_TO_S9_CONDITION),false);
	axe_AL_left3.AddEdge(axe_AL_S12_To_S9);
	axe_AL.AddState(axe_AL_left3);

	axe_AL.SetStartingState(4u);
	SMArray[SM_AXE_AL] = axe_AL;

};

void OnGameStart()
{
	myGame->LevelName("Menu");
};

void OnGameEnd(){
};

void OnSave(File& file)
{
	int a1 = 0,  a2 = 0,  a3 = 0;
	for (a1 = 0; a1 < 24; a1++)
		for (a2 = 0; a2 < 20; a2++)
			file.Write(binaryMap[a1][a2]);
	file.Write(Following);
	file.Write(difi);
	file.Write(Lives);
	file.Write(StaticCount);
	
};

void OnLoad(File& file)
{
	int a1 = 0,  a2 = 0,  a3 = 0;
	for (a1 = 0; a1 < 24; a1++)
		for (a2 = 0; a2 < 20; a2++)
			file.Read(binaryMap[a1][a2]);
	file.Read(Following);
	file.Read(difi);
	file.Read(Lives);
	file.Read(StaticCount);
	
};

void Fun()
{
	myGame->behavior.AddFunction(FN_CHEAT_CODES);
	GameNode *g1;
	g1=NewGameNode();
	g1->Id(1);
	g1->Name("Alpha");
	g1->gameNodeActorsFunction = LoadAnimation_Alpha;
	g1->gameNodeLevelFunction = Init_AlphaFunction;
	g1->transitionFunction = Exit_AlphaFunction;
	g1->endLevelFunction = End_AlphaFunction;
	myGame->Add(g1);

	GameNode *g2;
	g2=NewGameNode();
	g2->Id(2);
	g2->Name("Level_1");
	g2->gameNodeActorsFunction = LoadAnimation_Level_1;
	g2->gameNodeLevelFunction = Init_Level_1Function;
	g2->transitionFunction = Exit_Level_1Function;
	g2->endLevelFunction = End_Level_1Function;
	myGame->Add(g2);

	GameNode *g3;
	g3=NewGameNode();
	g3->Id(3);
	g3->Name("Level_2");
	g3->gameNodeActorsFunction = LoadAnimation_Level_2;
	g3->gameNodeLevelFunction = Init_Level_2Function;
	g3->transitionFunction = Exit_Level_2Function;
	g3->endLevelFunction = End_Level_2Function;
	myGame->Add(g3);

	GameNode *g4;
	g4=NewGameNode();
	g4->Id(4);
	g4->Name("Level_3");
	g4->gameNodeActorsFunction = LoadAnimation_Level_3;
	g4->gameNodeLevelFunction = Init_Level_3Function;
	g4->transitionFunction = Exit_Level_3Function;
	g4->endLevelFunction = End_Level_3Function;
	myGame->Add(g4);

	GameNode *g5;
	g5=NewGameNode();
	g5->Id(5);
	g5->Name("Level_4");
	g5->gameNodeActorsFunction = LoadAnimation_Level_4;
	g5->gameNodeLevelFunction = Init_Level_4Function;
	g5->transitionFunction = Exit_Level_4Function;
	g5->endLevelFunction = End_Level_4Function;
	myGame->Add(g5);

	GameNode *g6;
	g6=NewGameNode();
	g6->Id(6);
	g6->Name("Level_5");
	g6->gameNodeActorsFunction = LoadAnimation_Level_5;
	g6->gameNodeLevelFunction = Init_Level_5Function;
	g6->transitionFunction = Exit_Level_5Function;
	g6->endLevelFunction = End_Level_5Function;
	myGame->Add(g6);

	GameNode *g7;
	g7=NewGameNode();
	g7->Id(7);
	g7->Name("Level_6");
	g7->gameNodeActorsFunction = LoadAnimation_Level_6;
	g7->gameNodeLevelFunction = Init_Level_6Function;
	g7->transitionFunction = Exit_Level_6Function;
	g7->endLevelFunction = End_Level_6Function;
	myGame->Add(g7);

	GameNode *g8;
	g8=NewGameNode();
	g8->Id(8);
	g8->Name("Level_7");
	g8->gameNodeActorsFunction = LoadAnimation_Level_7;
	g8->gameNodeLevelFunction = Init_Level_7Function;
	g8->transitionFunction = Exit_Level_7Function;
	g8->endLevelFunction = End_Level_7Function;
	myGame->Add(g8);

	GameNode *g9;
	g9=NewGameNode();
	g9->Id(9);
	g9->Name("Menu");
	g9->gameNodeActorsFunction = LoadAnimation_Menu;
	g9->gameNodeLevelFunction = Init_MenuFunction;
	g9->transitionFunction = Exit_MenuFunction;
	g9->endLevelFunction = End_MenuFunction;
	myGame->Add(g9);

	GameNode *g10;
	g10=NewGameNode();
	g10->Id(10);
	g10->Name("info");
	g10->gameNodeActorsFunction = LoadAnimation_info;
	g10->gameNodeLevelFunction = Init_infoFunction;
	g10->transitionFunction = Exit_infoFunction;
	g10->endLevelFunction = End_infoFunction;
	myGame->Add(g10);

	GameNode *g11;
	g11=NewGameNode();
	g11->Id(11);
	g11->Name("Conrol");
	g11->gameNodeActorsFunction = LoadAnimation_Conrol;
	g11->gameNodeLevelFunction = Init_ConrolFunction;
	g11->transitionFunction = Exit_ConrolFunction;
	g11->endLevelFunction = End_ConrolFunction;
	myGame->Add(g11);

	GameNode *g12;
	g12=NewGameNode();
	g12->Id(12);
	g12->Name("difi");
	g12->gameNodeActorsFunction = LoadAnimation_difi;
	g12->gameNodeLevelFunction = Init_difiFunction;
	g12->transitionFunction = Exit_difiFunction;
	g12->endLevelFunction = End_difiFunction;
	myGame->Add(g12);

	GameNode *g13;
	g13=NewGameNode();
	g13->Id(13);
	g13->Name("Win");
	g13->gameNodeActorsFunction = LoadAnimation_Win;
	g13->gameNodeLevelFunction = Init_WinFunction;
	g13->transitionFunction = Exit_WinFunction;
	g13->endLevelFunction = End_WinFunction;
	myGame->Add(g13);

	GameNode *g14;
	g14=NewGameNode();
	g14->Id(14);
	g14->Name("Lose");
	g14->gameNodeActorsFunction = LoadAnimation_Lose;
	g14->gameNodeLevelFunction = Init_LoseFunction;
	g14->transitionFunction = Exit_LoseFunction;
	g14->endLevelFunction = End_LoseFunction;
	myGame->Add(g14);

	GameNode *g15;
	g15=NewGameNode();
	g15->Id(15);
	g15->Name("Intro");
	g15->gameNodeActorsFunction = LoadAnimation_Intro;
	g15->gameNodeLevelFunction = Init_IntroFunction;
	g15->transitionFunction = Exit_IntroFunction;
	g15->endLevelFunction = End_IntroFunction;
	myGame->Add(g15);


	myGame->Title("SpaceX");
}
