#ifndef _STATEMACHINEFUN_H_
#define _STATEMACHINEFUN_H_

#define SM_MOVEMENT		0
	#define SMS_MOVEMENT_IDLE		0
	const unsigned int SMSA_MOVEMENT_IDLE_ACTION		 = 0;
	#define SMS_MOVEMENT_DOWN		1
	const unsigned int SMSA_MOVEMENT_DOWN_ACTION		 = 1;
	#define SMS_MOVEMENT_LEFT		2
	const unsigned int SMSA_MOVEMENT_LEFT_ACTION		 = 2;
	#define SMS_MOVEMENT_RIGHT		3
	const unsigned int SMSA_MOVEMENT_RIGHT_ACTION		 = 3;
	#define SMS_MOVEMENT_UP		4
	const unsigned int SMSA_MOVEMENT_UP_ACTION		 = 4;
	const unsigned int SMEC_MOVEMENT_S2_TO_S1_CONDITION		 = 5;
	const unsigned int SMEC_MOVEMENT_S1_TO_S2_CONDITION		 = 6;
	const unsigned int SMEC_MOVEMENT_S3_TO_S1_CONDITION		 = 7;
	const unsigned int SMEC_MOVEMENT_S1_TO_S3_CONDITION		 = 8;
	const unsigned int SMEC_MOVEMENT_S4_TO_S1_CONDITION		 = 9;
	const unsigned int SMEC_MOVEMENT_S5_TO_S1_CONDITION		 = 10;
	const unsigned int SMEC_MOVEMENT_S1_TO_S4_CONDITION		 = 11;
	const unsigned int SMEC_MOVEMENT_S1_TO_S5_CONDITION		 = 12;
#define SM_CARLY_AL		1
	#define SMS_CARLY_AL_RIGHT		0
	const unsigned int SMSA_CARLY_AL_RIGHT_ACTION		 = 13;
	#define SMS_CARLY_AL_DOWN		1
	const unsigned int SMSA_CARLY_AL_DOWN_ACTION		 = 14;
	#define SMS_CARLY_AL_LEFT		2
	const unsigned int SMSA_CARLY_AL_LEFT_ACTION		 = 15;
	#define SMS_CARLY_AL_UP		3
	const unsigned int SMSA_CARLY_AL_UP_ACTION		 = 16;
	const unsigned int SMEC_CARLY_AL_S1_TO_S2_CONDITION		 = 17;
	const unsigned int SMEC_CARLY_AL_S4_TO_S1_CONDITION		 = 18;
	const unsigned int SMEC_CARLY_AL_S2_TO_S3_CONDITION		 = 19;
	const unsigned int SMEC_CARLY_AL_S3_TO_S4_CONDITION		 = 20;
#define SM_ZAE_AL		2
	#define SMS_ZAE_AL_DOWN		0
	const unsigned int SMSA_ZAE_AL_DOWN_ACTION		 = 21;
	#define SMS_ZAE_AL_UP		1
	const unsigned int SMSA_ZAE_AL_UP_ACTION		 = 22;
	const unsigned int SMEC_ZAE_AL_S2_TO_S1_CONDITION		 = 23;
	const unsigned int SMEC_ZAE_AL_S1_TO_S2_CONDITION		 = 24;
#define SM_JEFF_AL		3
	#define SMS_JEFF_AL_DOWN		0
	const unsigned int SMSA_JEFF_AL_DOWN_ACTION		 = 25;
	#define SMS_JEFF_AL_UP		1
	const unsigned int SMSA_JEFF_AL_UP_ACTION		 = 26;
	const unsigned int SMEC_JEFF_AL_S1_TO_S2_CONDITION		 = 27;
	const unsigned int SMEC_JEFF_AL_S2_TO_S1_CONDITION		 = 28;
#define SM_JIF_AL		4
	#define SMS_JIF_AL_RIGHT		0
	const unsigned int SMSA_JIF_AL_RIGHT_ACTION		 = 29;
	#define SMS_JIF_AL_LEFT		1
	const unsigned int SMSA_JIF_AL_LEFT_ACTION		 = 30;
	const unsigned int SMEC_JIF_AL_S1_TO_S2_CONDITION		 = 31;
	const unsigned int SMEC_JIF_AL_S2_TO_S1_CONDITION		 = 32;
#define SM_ACCESS_TRACKER		5
	#define SMS_ACCESS_TRACKER_IDLE		0
	const unsigned int SMSA_ACCESS_TRACKER_IDLE_ACTION		 = 33;
	#define SMS_ACCESS_TRACKER_DOWN		1
	const unsigned int SMSA_ACCESS_TRACKER_DOWN_ACTION		 = 34;
	#define SMS_ACCESS_TRACKER_LEFT		2
	const unsigned int SMSA_ACCESS_TRACKER_LEFT_ACTION		 = 35;
	#define SMS_ACCESS_TRACKER_RIGHT		3
	const unsigned int SMSA_ACCESS_TRACKER_RIGHT_ACTION		 = 36;
	#define SMS_ACCESS_TRACKER_UP		4
	const unsigned int SMSA_ACCESS_TRACKER_UP_ACTION		 = 37;
	const unsigned int SMEC_ACCESS_TRACKER_S1_TO_S2_CONDITION		 = 38;
	const unsigned int SMEC_ACCESS_TRACKER_S2_TO_S1_CONDITION		 = 39;
	const unsigned int SMEC_ACCESS_TRACKER_S4_TO_S1_CONDITION		 = 40;
	const unsigned int SMEC_ACCESS_TRACKER_S1_TO_S3_CONDITION		 = 41;
	const unsigned int SMEC_ACCESS_TRACKER_S3_TO_S1_CONDITION		 = 42;
	const unsigned int SMEC_ACCESS_TRACKER_S1_TO_S4_CONDITION		 = 43;
	const unsigned int SMEC_ACCESS_TRACKER_S5_TO_S1_CONDITION		 = 44;
	const unsigned int SMEC_ACCESS_TRACKER_S3_TO_S2_CONDITION		 = 45;
	const unsigned int SMEC_ACCESS_TRACKER_S2_TO_S3_CONDITION		 = 46;
	const unsigned int SMEC_ACCESS_TRACKER_S4_TO_S2_CONDITION		 = 47;
	const unsigned int SMEC_ACCESS_TRACKER_S1_TO_S5_CONDITION		 = 48;
	const unsigned int SMEC_ACCESS_TRACKER_S2_TO_S4_CONDITION		 = 49;
	const unsigned int SMEC_ACCESS_TRACKER_S5_TO_S3_CONDITION		 = 50;
	const unsigned int SMEC_ACCESS_TRACKER_S3_TO_S5_CONDITION		 = 51;
	const unsigned int SMEC_ACCESS_TRACKER_S4_TO_S5_CONDITION		 = 52;
	const unsigned int SMEC_ACCESS_TRACKER_S5_TO_S4_CONDITION		 = 53;
#define SM_SPACEMAN_ANIMATION		6
	#define SMS_SPACEMAN_ANIMATION_S		0
	const unsigned int SMSA_SPACEMAN_ANIMATION_S_ACTION		 = 54;
	#define SMS_SPACEMAN_ANIMATION_BACK		1
	const unsigned int SMSA_SPACEMAN_ANIMATION_BACK_ACTION		 = 55;
	#define SMS_SPACEMAN_ANIMATION_IDLE_BACK		2
	const unsigned int SMSA_SPACEMAN_ANIMATION_IDLE_BACK_ACTION		 = 56;
	#define SMS_SPACEMAN_ANIMATION_RIGHT		3
	const unsigned int SMSA_SPACEMAN_ANIMATION_RIGHT_ACTION		 = 57;
	#define SMS_SPACEMAN_ANIMATION_IDLE_RIG		4
	const unsigned int SMSA_SPACEMAN_ANIMATION_IDLE_RIG_ACTION		 = 58;
	#define SMS_SPACEMAN_ANIMATION_FORWARD		5
	const unsigned int SMSA_SPACEMAN_ANIMATION_FORWARD_ACTION		 = 59;
	#define SMS_SPACEMAN_ANIMATION_IDLE_FOR		6
	const unsigned int SMSA_SPACEMAN_ANIMATION_IDLE_FOR_ACTION		 = 60;
	#define SMS_SPACEMAN_ANIMATION_LEFT		7
	const unsigned int SMSA_SPACEMAN_ANIMATION_LEFT_ACTION		 = 61;
	#define SMS_SPACEMAN_ANIMATION_IDLE_LEFT		8
	const unsigned int SMSA_SPACEMAN_ANIMATION_IDLE_LEFT_ACTION		 = 62;
	const unsigned int SMEC_SPACEMAN_ANIMATION_S1_TO_S2_CONDITION		 = 63;
	const unsigned int SMEC_SPACEMAN_ANIMATION_S3_TO_S2_CONDITION		 = 64;
	const unsigned int SMEC_SPACEMAN_ANIMATION_S2_TO_S3_CONDITION		 = 65;
	const unsigned int SMEC_SPACEMAN_ANIMATION_S1_TO_S4_CONDITION		 = 66;
	const unsigned int SMEC_SPACEMAN_ANIMATION_S5_TO_S2_CONDITION		 = 67;
	const unsigned int SMEC_SPACEMAN_ANIMATION_S7_TO_S4B_CONDITION		 = 68;
	const unsigned int SMEC_SPACEMAN_ANIMATION_S3_TO_S4_CONDITION		 = 69;
	const unsigned int SMEC_SPACEMAN_ANIMATION_S7_TO_S2_CONDITION		 = 70;
	const unsigned int SMEC_SPACEMAN_ANIMATION_S1_TO_S6_CONDITION		 = 71;
	const unsigned int SMEC_SPACEMAN_ANIMATION_S5_TO_S4_CONDITION		 = 72;
	const unsigned int SMEC_SPACEMAN_ANIMATION_S4_TO_S5_CONDITION		 = 73;
	const unsigned int SMEC_SPACEMAN_ANIMATION_S3_TO_S6_CONDITION		 = 74;
	const unsigned int SMEC_SPACEMAN_ANIMATION_S9_TO_S2_CONDITION		 = 75;
	const unsigned int SMEC_SPACEMAN_ANIMATION_S1_TO_S8_CONDITION		 = 76;
	const unsigned int SMEC_SPACEMAN_ANIMATION_S5_TO_S6_CONDITION		 = 77;
	const unsigned int SMEC_SPACEMAN_ANIMATION_S3_TO_S8_CONDITION		 = 78;
	const unsigned int SMEC_SPACEMAN_ANIMATION_S7_TO_S6_CONDITION		 = 79;
	const unsigned int SMEC_SPACEMAN_ANIMATION_S9_TO_S4_CONDITION		 = 80;
	const unsigned int SMEC_SPACEMAN_ANIMATION_S5_TO_S8_CONDITION		 = 81;
	const unsigned int SMEC_SPACEMAN_ANIMATION_S6_TO_S7_CONDITION		 = 82;
	const unsigned int SMEC_SPACEMAN_ANIMATION_S7_TO_S8_CONDITION		 = 83;
	const unsigned int SMEC_SPACEMAN_ANIMATION_S9_TO_S6_CONDITION		 = 84;
	const unsigned int SMEC_SPACEMAN_ANIMATION_S9_TO_S8_CONDITION		 = 85;
	const unsigned int SMEC_SPACEMAN_ANIMATION_S8_TO_S9_CONDITION		 = 86;
#define SM_ALIEN1_ANIMATION		7
	#define SMS_ALIEN1_ANIMATION_S		0
	const unsigned int SMSA_ALIEN1_ANIMATION_S_ACTION		 = 87;
	#define SMS_ALIEN1_ANIMATION_BACK		1
	const unsigned int SMSA_ALIEN1_ANIMATION_BACK_ACTION		 = 88;
	#define SMS_ALIEN1_ANIMATION_IDLE_BACK		2
	const unsigned int SMSA_ALIEN1_ANIMATION_IDLE_BACK_ACTION		 = 89;
	#define SMS_ALIEN1_ANIMATION_RIGHT		3
	const unsigned int SMSA_ALIEN1_ANIMATION_RIGHT_ACTION		 = 90;
	#define SMS_ALIEN1_ANIMATION_IDLE_RIG		4
	const unsigned int SMSA_ALIEN1_ANIMATION_IDLE_RIG_ACTION		 = 91;
	#define SMS_ALIEN1_ANIMATION_FORWARD		5
	const unsigned int SMSA_ALIEN1_ANIMATION_FORWARD_ACTION		 = 92;
	#define SMS_ALIEN1_ANIMATION_IDLE_FOR		6
	const unsigned int SMSA_ALIEN1_ANIMATION_IDLE_FOR_ACTION		 = 93;
	#define SMS_ALIEN1_ANIMATION_LEFT		7
	const unsigned int SMSA_ALIEN1_ANIMATION_LEFT_ACTION		 = 94;
	#define SMS_ALIEN1_ANIMATION_IDLE_LEFT		8
	const unsigned int SMSA_ALIEN1_ANIMATION_IDLE_LEFT_ACTION		 = 95;
	const unsigned int SMEC_ALIEN1_ANIMATION_S1_TO_S2_CONDITION		 = 96;
	const unsigned int SMEC_ALIEN1_ANIMATION_S1_TO_S4_CONDITION		 = 97;
	const unsigned int SMEC_ALIEN1_ANIMATION_S2_TO_S3_CONDITION		 = 98;
	const unsigned int SMEC_ALIEN1_ANIMATION_S3_TO_S2_CONDITION		 = 99;
	const unsigned int SMEC_ALIEN1_ANIMATION_S7_TO_S4B_CONDITION		 = 100;
	const unsigned int SMEC_ALIEN1_ANIMATION_S5_TO_S2_CONDITION		 = 101;
	const unsigned int SMEC_ALIEN1_ANIMATION_S6_TO_S2_CONDITION		 = 102;
	const unsigned int SMEC_ALIEN1_ANIMATION_S1_TO_S6_CONDITION		 = 103;
	const unsigned int SMEC_ALIEN1_ANIMATION_S7_TO_S2_CONDITION		 = 104;
	const unsigned int SMEC_ALIEN1_ANIMATION_S3_TO_S4_CONDITION		 = 105;
	const unsigned int SMEC_ALIEN1_ANIMATION_S2_TO_S6_CONDITION		 = 106;
	const unsigned int SMEC_ALIEN1_ANIMATION_S4_TO_S5_CONDITION		 = 107;
	const unsigned int SMEC_ALIEN1_ANIMATION_S5_TO_S4_CONDITION		 = 108;
	const unsigned int SMEC_ALIEN1_ANIMATION_S1_TO_S8_CONDITION		 = 109;
	const unsigned int SMEC_ALIEN1_ANIMATION_S9_TO_S2_CONDITION		 = 110;
	const unsigned int SMEC_ALIEN1_ANIMATION_S3_TO_S6_CONDITION		 = 111;
	const unsigned int SMEC_ALIEN1_ANIMATION_S8_TO_S4_CONDITION		 = 112;
	const unsigned int SMEC_ALIEN1_ANIMATION_S5_TO_S6_CONDITION		 = 113;
	const unsigned int SMEC_ALIEN1_ANIMATION_S4_TO_S8_CONDITION		 = 114;
	const unsigned int SMEC_ALIEN1_ANIMATION_S9_TO_S4_CONDITION		 = 115;
	const unsigned int SMEC_ALIEN1_ANIMATION_S7_TO_S6_CONDITION		 = 116;
	const unsigned int SMEC_ALIEN1_ANIMATION_S3_TO_S8_CONDITION		 = 117;
	const unsigned int SMEC_ALIEN1_ANIMATION_S6_TO_S7_CONDITION		 = 118;
	const unsigned int SMEC_ALIEN1_ANIMATION_S5_TO_S8_CONDITION		 = 119;
	const unsigned int SMEC_ALIEN1_ANIMATION_S9_TO_S6_CONDITION		 = 120;
	const unsigned int SMEC_ALIEN1_ANIMATION_S7_TO_S8_CONDITION		 = 121;
	const unsigned int SMEC_ALIEN1_ANIMATION_S8_TO_S9_CONDITION		 = 122;
	const unsigned int SMEC_ALIEN1_ANIMATION_S9_TO_S8_CONDITION		 = 123;
#define SM_ALIEN2_ANIMATION		8
	#define SMS_ALIEN2_ANIMATION_S		0
	const unsigned int SMSA_ALIEN2_ANIMATION_S_ACTION		 = 124;
	#define SMS_ALIEN2_ANIMATION_BACK		1
	const unsigned int SMSA_ALIEN2_ANIMATION_BACK_ACTION		 = 125;
	#define SMS_ALIEN2_ANIMATION_IDLE_BACK		2
	const unsigned int SMSA_ALIEN2_ANIMATION_IDLE_BACK_ACTION		 = 126;
	#define SMS_ALIEN2_ANIMATION_RIGHT		3
	const unsigned int SMSA_ALIEN2_ANIMATION_RIGHT_ACTION		 = 127;
	#define SMS_ALIEN2_ANIMATION_IDLE_RIG		4
	const unsigned int SMSA_ALIEN2_ANIMATION_IDLE_RIG_ACTION		 = 128;
	#define SMS_ALIEN2_ANIMATION_FORWARD		5
	const unsigned int SMSA_ALIEN2_ANIMATION_FORWARD_ACTION		 = 129;
	#define SMS_ALIEN2_ANIMATION_IDLE_FOR		6
	const unsigned int SMSA_ALIEN2_ANIMATION_IDLE_FOR_ACTION		 = 130;
	#define SMS_ALIEN2_ANIMATION_LEFT		7
	const unsigned int SMSA_ALIEN2_ANIMATION_LEFT_ACTION		 = 131;
	#define SMS_ALIEN2_ANIMATION_IDLE_LEFT		8
	const unsigned int SMSA_ALIEN2_ANIMATION_IDLE_LEFT_ACTION		 = 132;
	const unsigned int SMEC_ALIEN2_ANIMATION_S1_TO_S2_CONDITION		 = 133;
	const unsigned int SMEC_ALIEN2_ANIMATION_S3_TO_S2_CONDITION		 = 134;
	const unsigned int SMEC_ALIEN2_ANIMATION_S2_TO_S3_CONDITION		 = 135;
	const unsigned int SMEC_ALIEN2_ANIMATION_S1_TO_S4_CONDITION		 = 136;
	const unsigned int SMEC_ALIEN2_ANIMATION_S5_TO_S2_CONDITION		 = 137;
	const unsigned int SMEC_ALIEN2_ANIMATION_S7_TO_S4B_CONDITION		 = 138;
	const unsigned int SMEC_ALIEN2_ANIMATION_S6_TO_S2_CONDITION		 = 139;
	const unsigned int SMEC_ALIEN2_ANIMATION_S3_TO_S4_CONDITION		 = 140;
	const unsigned int SMEC_ALIEN2_ANIMATION_S7_TO_S2_CONDITION		 = 141;
	const unsigned int SMEC_ALIEN2_ANIMATION_S1_TO_S6_CONDITION		 = 142;
	const unsigned int SMEC_ALIEN2_ANIMATION_S2_TO_S6_CONDITION		 = 143;
	const unsigned int SMEC_ALIEN2_ANIMATION_S5_TO_S4_CONDITION		 = 144;
	const unsigned int SMEC_ALIEN2_ANIMATION_S4_TO_S5_CONDITION		 = 145;
	const unsigned int SMEC_ALIEN2_ANIMATION_S3_TO_S6_CONDITION		 = 146;
	const unsigned int SMEC_ALIEN2_ANIMATION_S9_TO_S2_CONDITION		 = 147;
	const unsigned int SMEC_ALIEN2_ANIMATION_S1_TO_S8_CONDITION		 = 148;
	const unsigned int SMEC_ALIEN2_ANIMATION_S8_TO_S4_CONDITION		 = 149;
	const unsigned int SMEC_ALIEN2_ANIMATION_S5_TO_S6_CONDITION		 = 150;
	const unsigned int SMEC_ALIEN2_ANIMATION_S4_TO_S8_CONDITION		 = 151;
	const unsigned int SMEC_ALIEN2_ANIMATION_S3_TO_S8_CONDITION		 = 152;
	const unsigned int SMEC_ALIEN2_ANIMATION_S7_TO_S6_CONDITION		 = 153;
	const unsigned int SMEC_ALIEN2_ANIMATION_S9_TO_S4_CONDITION		 = 154;
	const unsigned int SMEC_ALIEN2_ANIMATION_S5_TO_S8_CONDITION		 = 155;
	const unsigned int SMEC_ALIEN2_ANIMATION_S6_TO_S7_CONDITION		 = 156;
	const unsigned int SMEC_ALIEN2_ANIMATION_S7_TO_S8_CONDITION		 = 157;
	const unsigned int SMEC_ALIEN2_ANIMATION_S9_TO_S6_CONDITION		 = 158;
	const unsigned int SMEC_ALIEN2_ANIMATION_S9_TO_S8_CONDITION		 = 159;
	const unsigned int SMEC_ALIEN2_ANIMATION_S8_TO_S9_CONDITION		 = 160;
#define SM_ALIEN3_ANIMATION		9
	#define SMS_ALIEN3_ANIMATION_S		0
	const unsigned int SMSA_ALIEN3_ANIMATION_S_ACTION		 = 161;
	#define SMS_ALIEN3_ANIMATION_BACK		1
	const unsigned int SMSA_ALIEN3_ANIMATION_BACK_ACTION		 = 162;
	#define SMS_ALIEN3_ANIMATION_IDLE_BACK		2
	const unsigned int SMSA_ALIEN3_ANIMATION_IDLE_BACK_ACTION		 = 163;
	#define SMS_ALIEN3_ANIMATION_RIGHT		3
	const unsigned int SMSA_ALIEN3_ANIMATION_RIGHT_ACTION		 = 164;
	#define SMS_ALIEN3_ANIMATION_IDLE_RIG		4
	const unsigned int SMSA_ALIEN3_ANIMATION_IDLE_RIG_ACTION		 = 165;
	#define SMS_ALIEN3_ANIMATION_FORWARD		5
	const unsigned int SMSA_ALIEN3_ANIMATION_FORWARD_ACTION		 = 166;
	#define SMS_ALIEN3_ANIMATION_IDLE_FOR		6
	const unsigned int SMSA_ALIEN3_ANIMATION_IDLE_FOR_ACTION		 = 167;
	#define SMS_ALIEN3_ANIMATION_LEFT		7
	const unsigned int SMSA_ALIEN3_ANIMATION_LEFT_ACTION		 = 168;
	#define SMS_ALIEN3_ANIMATION_IDLE_LEFT		8
	const unsigned int SMSA_ALIEN3_ANIMATION_IDLE_LEFT_ACTION		 = 169;
	const unsigned int SMEC_ALIEN3_ANIMATION_S1_TO_S2_CONDITION		 = 170;
	const unsigned int SMEC_ALIEN3_ANIMATION_S1_TO_S4_CONDITION		 = 171;
	const unsigned int SMEC_ALIEN3_ANIMATION_S2_TO_S3_CONDITION		 = 172;
	const unsigned int SMEC_ALIEN3_ANIMATION_S3_TO_S2_CONDITION		 = 173;
	const unsigned int SMEC_ALIEN3_ANIMATION_S7_TO_S4B_CONDITION		 = 174;
	const unsigned int SMEC_ALIEN3_ANIMATION_S5_TO_S2_CONDITION		 = 175;
	const unsigned int SMEC_ALIEN3_ANIMATION_S6_TO_S2_CONDITION		 = 176;
	const unsigned int SMEC_ALIEN3_ANIMATION_S1_TO_S6_CONDITION		 = 177;
	const unsigned int SMEC_ALIEN3_ANIMATION_S7_TO_S2_CONDITION		 = 178;
	const unsigned int SMEC_ALIEN3_ANIMATION_S3_TO_S4_CONDITION		 = 179;
	const unsigned int SMEC_ALIEN3_ANIMATION_S2_TO_S6_CONDITION		 = 180;
	const unsigned int SMEC_ALIEN3_ANIMATION_S4_TO_S5_CONDITION		 = 181;
	const unsigned int SMEC_ALIEN3_ANIMATION_S5_TO_S4_CONDITION		 = 182;
	const unsigned int SMEC_ALIEN3_ANIMATION_S1_TO_S8_CONDITION		 = 183;
	const unsigned int SMEC_ALIEN3_ANIMATION_S9_TO_S2_CONDITION		 = 184;
	const unsigned int SMEC_ALIEN3_ANIMATION_S3_TO_S6_CONDITION		 = 185;
	const unsigned int SMEC_ALIEN3_ANIMATION_S8_TO_S4_CONDITION		 = 186;
	const unsigned int SMEC_ALIEN3_ANIMATION_S5_TO_S6_CONDITION		 = 187;
	const unsigned int SMEC_ALIEN3_ANIMATION_S4_TO_S8_CONDITION		 = 188;
	const unsigned int SMEC_ALIEN3_ANIMATION_S9_TO_S4_CONDITION		 = 189;
	const unsigned int SMEC_ALIEN3_ANIMATION_S7_TO_S6_CONDITION		 = 190;
	const unsigned int SMEC_ALIEN3_ANIMATION_S3_TO_S8_CONDITION		 = 191;
	const unsigned int SMEC_ALIEN3_ANIMATION_S6_TO_S7_CONDITION		 = 192;
	const unsigned int SMEC_ALIEN3_ANIMATION_S5_TO_S8_CONDITION		 = 193;
	const unsigned int SMEC_ALIEN3_ANIMATION_S9_TO_S6_CONDITION		 = 194;
	const unsigned int SMEC_ALIEN3_ANIMATION_S7_TO_S8_CONDITION		 = 195;
	const unsigned int SMEC_ALIEN3_ANIMATION_S8_TO_S9_CONDITION		 = 196;
	const unsigned int SMEC_ALIEN3_ANIMATION_S9_TO_S8_CONDITION		 = 197;
#define SM_ALEX_AL		10
	#define SMS_ALEX_AL_S1		0
	const unsigned int SMSA_ALEX_AL_S1_ACTION		 = 198;
	#define SMS_ALEX_AL_S2		1
	const unsigned int SMSA_ALEX_AL_S2_ACTION		 = 199;
	#define SMS_ALEX_AL_S3		2
	const unsigned int SMSA_ALEX_AL_S3_ACTION		 = 200;
	#define SMS_ALEX_AL_S4		3
	const unsigned int SMSA_ALEX_AL_S4_ACTION		 = 201;
	#define SMS_ALEX_AL_S5		4
	const unsigned int SMSA_ALEX_AL_S5_ACTION		 = 202;
	const unsigned int SMEC_ALEX_AL_S1_TO_S2_CONDITION		 = 203;
	const unsigned int SMEC_ALEX_AL_S5_TO_S1_CONDITION		 = 204;
	const unsigned int SMEC_ALEX_AL_S2_TO_S3_CONDITION		 = 205;
	const unsigned int SMEC_ALEX_AL_S3_TO_S4_CONDITION		 = 206;
	const unsigned int SMEC_ALEX_AL_S4_TO_S5_CONDITION		 = 207;
#define SM_HUNTER_AI		11
	#define SMS_HUNTER_AI_IDLE		0
	const unsigned int SMSA_HUNTER_AI_IDLE_ACTION		 = 208;
	#define SMS_HUNTER_AI_UP		1
	const unsigned int SMSA_HUNTER_AI_UP_ACTION		 = 209;
	#define SMS_HUNTER_AI_DOWN		2
	const unsigned int SMSA_HUNTER_AI_DOWN_ACTION		 = 210;
	#define SMS_HUNTER_AI_LEFT		3
	const unsigned int SMSA_HUNTER_AI_LEFT_ACTION		 = 211;
	#define SMS_HUNTER_AI_RIGHT		4
	const unsigned int SMSA_HUNTER_AI_RIGHT_ACTION		 = 212;
	#define SMS_HUNTER_AI_S6		5
	const unsigned int SMSA_HUNTER_AI_S6_ACTION		 = 213;
	#define SMS_HUNTER_AI_S7		6
	const unsigned int SMSA_HUNTER_AI_S7_ACTION		 = 214;
	#define SMS_HUNTER_AI_S8		7
	const unsigned int SMSA_HUNTER_AI_S8_ACTION		 = 215;
	#define SMS_HUNTER_AI_S9		8
	const unsigned int SMSA_HUNTER_AI_S9_ACTION		 = 216;
	const unsigned int SMEC_HUNTER_AI_S2_TO_S1_CONDITION		 = 217;
	const unsigned int SMEC_HUNTER_AI_S1_TO_S2_CONDITION		 = 218;
	const unsigned int SMEC_HUNTER_AI_S4_TO_S1_CONDITION		 = 219;
	const unsigned int SMEC_HUNTER_AI_S3_TO_S1_CONDITION		 = 220;
	const unsigned int SMEC_HUNTER_AI_S1_TO_S3_CONDITION		 = 221;
	const unsigned int SMEC_HUNTER_AI_S4_TO_S2_CONDITION		 = 222;
	const unsigned int SMEC_HUNTER_AI_S3_TO_S2_CONDITION		 = 223;
	const unsigned int SMEC_HUNTER_AI_S2_TO_S3_CONDITION		 = 224;
	const unsigned int SMEC_HUNTER_AI_S5_TO_S1_CONDITION		 = 225;
	const unsigned int SMEC_HUNTER_AI_S1_TO_S4_CONDITION		 = 226;
	const unsigned int SMEC_HUNTER_AI_S7_TO_S1_CONDITION		 = 227;
	const unsigned int SMEC_HUNTER_AI_S6_TO_S1_CONDITION		 = 228;
	const unsigned int SMEC_HUNTER_AI_S4_TO_S3_CONDITION		 = 229;
	const unsigned int SMEC_HUNTER_AI_S2_TO_S4_CONDITION		 = 230;
	const unsigned int SMEC_HUNTER_AI_S5_TO_S2_CONDITION		 = 231;
	const unsigned int SMEC_HUNTER_AI_S1_TO_S5_CONDITION		 = 232;
	const unsigned int SMEC_HUNTER_AI_S8_TO_S1_CONDITION		 = 233;
	const unsigned int SMEC_HUNTER_AI_S6_TO_S2_CONDITION		 = 234;
	const unsigned int SMEC_HUNTER_AI_S1_TO_S6_CONDITION		 = 235;
	const unsigned int SMEC_HUNTER_AI_S5_TO_S3_CONDITION		 = 236;
	const unsigned int SMEC_HUNTER_AI_S3_TO_S4_CONDITION		 = 237;
	const unsigned int SMEC_HUNTER_AI_S2_TO_S5_CONDITION		 = 238;
	const unsigned int SMEC_HUNTER_AI_S9_TO_S1_CONDITION		 = 239;
	const unsigned int SMEC_HUNTER_AI_S2_TO_S6_CONDITION		 = 240;
	const unsigned int SMEC_HUNTER_AI_S3_TO_S5_CONDITION		 = 241;
	const unsigned int SMEC_HUNTER_AI_S4_TO_S5_CONDITION		 = 242;
	const unsigned int SMEC_HUNTER_AI_S5_TO_S4_CONDITION		 = 243;
	const unsigned int SMEC_HUNTER_AI_S8_TO_S3_CONDITION		 = 244;
	const unsigned int SMEC_HUNTER_AI_S1_TO_S8_CONDITION		 = 245;
	const unsigned int SMEC_HUNTER_AI_S7_TO_S5_CONDITION		 = 246;
	const unsigned int SMEC_HUNTER_AI_S9_TO_S4_CONDITION		 = 247;
	const unsigned int SMEC_HUNTER_AI_S3_TO_S8_CONDITION		 = 248;
	const unsigned int SMEC_HUNTER_AI_S5_TO_S7_CONDITION		 = 249;
	const unsigned int SMEC_HUNTER_AI_S4_TO_S9_CONDITION		 = 250;
#define SM_LEFT_RIGHT		12
	#define SMS_LEFT_RIGHT_LEFT		0
	const unsigned int SMSA_LEFT_RIGHT_LEFT_ACTION		 = 251;
	#define SMS_LEFT_RIGHT_RIGHT		1
	const unsigned int SMSA_LEFT_RIGHT_RIGHT_ACTION		 = 252;
	const unsigned int SMEC_LEFT_RIGHT_S1_TO_S3_CONDITION		 = 253;
	const unsigned int SMEC_LEFT_RIGHT_S3_TO_S1_CONDITION		 = 254;
#define SM_UP_DOWN		13
	#define SMS_UP_DOWN_UP		0
	const unsigned int SMSA_UP_DOWN_UP_ACTION		 = 255;
	#define SMS_UP_DOWN_DOWN		1
	const unsigned int SMSA_UP_DOWN_DOWN_ACTION		 = 256;
	const unsigned int SMEC_UP_DOWN_S3_TO_S1_CONDITION		 = 257;
	const unsigned int SMEC_UP_DOWN_S1_TO_S3_CONDITION		 = 258;
#define SM_ILLIMINATI_AL		14
	#define SMS_ILLIMINATI_AL_RIGHT		0
	const unsigned int SMSA_ILLIMINATI_AL_RIGHT_ACTION		 = 259;
	#define SMS_ILLIMINATI_AL_DOWN		1
	const unsigned int SMSA_ILLIMINATI_AL_DOWN_ACTION		 = 260;
	#define SMS_ILLIMINATI_AL_LEFT		2
	const unsigned int SMSA_ILLIMINATI_AL_LEFT_ACTION		 = 261;
	#define SMS_ILLIMINATI_AL_UP		3
	const unsigned int SMSA_ILLIMINATI_AL_UP_ACTION		 = 262;
	const unsigned int SMEC_ILLIMINATI_AL_S1_TO_S2_CONDITION		 = 263;
	const unsigned int SMEC_ILLIMINATI_AL_S4_TO_S1_CONDITION		 = 264;
	const unsigned int SMEC_ILLIMINATI_AL_S2_TO_S3_CONDITION		 = 265;
	const unsigned int SMEC_ILLIMINATI_AL_S3_TO_S4_CONDITION		 = 266;
#define SM_FRED_AL		15
	#define SMS_FRED_AL_RIGHT		0
	const unsigned int SMSA_FRED_AL_RIGHT_ACTION		 = 267;
	#define SMS_FRED_AL_DOWN		1
	const unsigned int SMSA_FRED_AL_DOWN_ACTION		 = 268;
	#define SMS_FRED_AL_LEFT		2
	const unsigned int SMSA_FRED_AL_LEFT_ACTION		 = 269;
	#define SMS_FRED_AL_UP		3
	const unsigned int SMSA_FRED_AL_UP_ACTION		 = 270;
	const unsigned int SMEC_FRED_AL_S1_TO_S2_CONDITION		 = 271;
	const unsigned int SMEC_FRED_AL_S4_TO_S1_CONDITION		 = 272;
	const unsigned int SMEC_FRED_AL_S2_TO_S3_CONDITION		 = 273;
	const unsigned int SMEC_FRED_AL_S3_TO_S4_CONDITION		 = 274;
#define SM_DRUGS_AI		16
	#define SMS_DRUGS_AI_LEFT2		0
	const unsigned int SMSA_DRUGS_AI_LEFT2_ACTION		 = 275;
	#define SMS_DRUGS_AI_DOWN		1
	const unsigned int SMSA_DRUGS_AI_DOWN_ACTION		 = 276;
	#define SMS_DRUGS_AI_LEFT		2
	const unsigned int SMSA_DRUGS_AI_LEFT_ACTION		 = 277;
	#define SMS_DRUGS_AI_DOWN2		3
	const unsigned int SMSA_DRUGS_AI_DOWN2_ACTION		 = 278;
	#define SMS_DRUGS_AI_UP		4
	const unsigned int SMSA_DRUGS_AI_UP_ACTION		 = 279;
	#define SMS_DRUGS_AI_RIGHT		5
	const unsigned int SMSA_DRUGS_AI_RIGHT_ACTION		 = 280;
	#define SMS_DRUGS_AI_UP2		6
	const unsigned int SMSA_DRUGS_AI_UP2_ACTION		 = 281;
	#define SMS_DRUGS_AI_RIGHT2		7
	const unsigned int SMSA_DRUGS_AI_RIGHT2_ACTION		 = 282;
	#define SMS_DRUGS_AI_UP3		8
	const unsigned int SMSA_DRUGS_AI_UP3_ACTION		 = 283;
	#define SMS_DRUGS_AI_RIGHT3		9
	const unsigned int SMSA_DRUGS_AI_RIGHT3_ACTION		 = 284;
	const unsigned int SMEC_DRUGS_AI_S10_TO_S2_CONDITION		 = 285;
	const unsigned int SMEC_DRUGS_AI_S4_TO_S1_CONDITION		 = 286;
	const unsigned int SMEC_DRUGS_AI_S9_TO_S10_CONDITION		 = 287;
	const unsigned int SMEC_DRUGS_AI_S2_TO_S3_CONDITION		 = 288;
	const unsigned int SMEC_DRUGS_AI_S1_TO_S5_CONDITION		 = 289;
	const unsigned int SMEC_DRUGS_AI_S3_TO_S4_CONDITION		 = 290;
	const unsigned int SMEC_DRUGS_AI_S5_TO_S6_CONDITION		 = 291;
	const unsigned int SMEC_DRUGS_AI_S6_TO_S7_CONDITION		 = 292;
	const unsigned int SMEC_DRUGS_AI_S7_TO_S8_CONDITION		 = 293;
	const unsigned int SMEC_DRUGS_AI_S8_TO_S9_CONDITION		 = 294;
#define SM_NATE_AL		17
	#define SMS_NATE_AL_RIGHT		0
	const unsigned int SMSA_NATE_AL_RIGHT_ACTION		 = 295;
	#define SMS_NATE_AL_DOWN		1
	const unsigned int SMSA_NATE_AL_DOWN_ACTION		 = 296;
	#define SMS_NATE_AL_LEFT		2
	const unsigned int SMSA_NATE_AL_LEFT_ACTION		 = 297;
	#define SMS_NATE_AL_UP		3
	const unsigned int SMSA_NATE_AL_UP_ACTION		 = 298;
	const unsigned int SMEC_NATE_AL_S1_TO_S2_CONDITION		 = 299;
	const unsigned int SMEC_NATE_AL_S4_TO_S1_CONDITION		 = 300;
	const unsigned int SMEC_NATE_AL_S2_TO_S3_CONDITION		 = 301;
	const unsigned int SMEC_NATE_AL_S3_TO_S4_CONDITION		 = 302;
#define SM_STACI_AL		18
	#define SMS_STACI_AL_RIGHT		0
	const unsigned int SMSA_STACI_AL_RIGHT_ACTION		 = 303;
	#define SMS_STACI_AL_DOWN		1
	const unsigned int SMSA_STACI_AL_DOWN_ACTION		 = 304;
	#define SMS_STACI_AL_LEFT		2
	const unsigned int SMSA_STACI_AL_LEFT_ACTION		 = 305;
	#define SMS_STACI_AL_UP		3
	const unsigned int SMSA_STACI_AL_UP_ACTION		 = 306;
	const unsigned int SMEC_STACI_AL_S1_TO_S2_CONDITION		 = 307;
	const unsigned int SMEC_STACI_AL_S4_TO_S1_CONDITION		 = 308;
	const unsigned int SMEC_STACI_AL_S2_TO_S3_CONDITION		 = 309;
	const unsigned int SMEC_STACI_AL_S3_TO_S4_CONDITION		 = 310;
#define SM_AXE_AL		19
	#define SMS_AXE_AL_UP		0
	const unsigned int SMSA_AXE_AL_UP_ACTION		 = 311;
	#define SMS_AXE_AL_RIGHT5		1
	const unsigned int SMSA_AXE_AL_RIGHT5_ACTION		 = 312;
	#define SMS_AXE_AL_DOWN		2
	const unsigned int SMSA_AXE_AL_DOWN_ACTION		 = 313;
	#define SMS_AXE_AL_DOWN3		3
	const unsigned int SMSA_AXE_AL_DOWN3_ACTION		 = 314;
	#define SMS_AXE_AL_LEFT		4
	const unsigned int SMSA_AXE_AL_LEFT_ACTION		 = 315;
	#define SMS_AXE_AL_RIGHT2		5
	const unsigned int SMSA_AXE_AL_RIGHT2_ACTION		 = 316;
	#define SMS_AXE_AL_LEFT2		6
	const unsigned int SMSA_AXE_AL_LEFT2_ACTION		 = 317;
	#define SMS_AXE_AL_LEFT4		7
	const unsigned int SMSA_AXE_AL_LEFT4_ACTION		 = 318;
	#define SMS_AXE_AL_RIGHT3		8
	const unsigned int SMSA_AXE_AL_RIGHT3_ACTION		 = 319;
	#define SMS_AXE_AL_DOWN4		9
	const unsigned int SMSA_AXE_AL_DOWN4_ACTION		 = 320;
	#define SMS_AXE_AL_UP3		10
	const unsigned int SMSA_AXE_AL_UP3_ACTION		 = 321;
	#define SMS_AXE_AL_RIGHT4		11
	const unsigned int SMSA_AXE_AL_RIGHT4_ACTION		 = 322;
	#define SMS_AXE_AL_UP4		12
	const unsigned int SMSA_AXE_AL_UP4_ACTION		 = 323;
	#define SMS_AXE_AL_LEFT3		13
	const unsigned int SMSA_AXE_AL_LEFT3_ACTION		 = 324;
	const unsigned int SMEC_AXE_AL_S5_TO_S14_CONDITION		 = 325;
	const unsigned int SMEC_AXE_AL_S4_TO_S1_CONDITION		 = 326;
	const unsigned int SMEC_AXE_AL_S13_TO_S2_CONDITION		 = 327;
	const unsigned int SMEC_AXE_AL_S2_TO_S3_CONDITION		 = 328;
	const unsigned int SMEC_AXE_AL_S1_TO_S5_CONDITION		 = 329;
	const unsigned int SMEC_AXE_AL_S10_TO_S11_CONDITION		 = 330;
	const unsigned int SMEC_AXE_AL_S3_TO_S4_CONDITION		 = 331;
	const unsigned int SMEC_AXE_AL_S12_TO_S9_CONDITION		 = 332;
	const unsigned int SMEC_AXE_AL_S7_TO_S6_CONDITION		 = 333;
	const unsigned int SMEC_AXE_AL_S6_TO_S8_CONDITION		 = 334;
	const unsigned int SMEC_AXE_AL_S9_TO_S7_CONDITION		 = 335;
	const unsigned int SMEC_AXE_AL_S11_TO_S13_CONDITION		 = 336;
	const unsigned int SMEC_AXE_AL_S14_TO_S12_CONDITION		 = 337;
	const unsigned int SMEC_AXE_AL_S8_TO_S10_CONDITION		 = 338;

extern void Movement_Idle_Action(int bInitAction, void *p);
extern void Movement_Down_Action(int bInitAction, void *p);
extern void Movement_Left_Action(int bInitAction, void *p);
extern void Movement_Right_Action(int bInitAction, void *p);
extern void Movement_UP_Action(int bInitAction, void *p);
extern bool Movement_S2_To_S1_Condition(void *p);
extern bool Movement_S1_To_S2_Condition(void *p);
extern bool Movement_S3_To_S1_Condition(void *p);
extern bool Movement_S1_To_S3_Condition(void *p);
extern bool Movement_S4_To_S1_Condition(void *p);
extern bool Movement_S5_To_S1_Condition(void *p);
extern bool Movement_S1_To_S4_Condition(void *p);
extern bool Movement_S1_To_S5_Condition(void *p);
extern void Carly_AL_right_Action(int bInitAction, void *p);
extern void Carly_AL_down_Action(int bInitAction, void *p);
extern void Carly_AL_left_Action(int bInitAction, void *p);
extern void Carly_AL_up_Action(int bInitAction, void *p);
extern bool Carly_AL_S1_To_S2_Condition(void *p);
extern bool Carly_AL_S4_To_S1_Condition(void *p);
extern bool Carly_AL_S2_To_S3_Condition(void *p);
extern bool Carly_AL_S3_To_S4_Condition(void *p);
extern void zae_AL_Down_Action(int bInitAction, void *p);
extern void zae_AL_UP_Action(int bInitAction, void *p);
extern bool zae_AL_S2_To_S1_Condition(void *p);
extern bool zae_AL_S1_To_S2_Condition(void *p);
extern void Jeff_AL_Down_Action(int bInitAction, void *p);
extern void Jeff_AL_UP_Action(int bInitAction, void *p);
extern bool Jeff_AL_S1_To_S2_Condition(void *p);
extern bool Jeff_AL_S2_To_S1_Condition(void *p);
extern void Jif_AL_Right_Action(int bInitAction, void *p);
extern void Jif_AL_Left_Action(int bInitAction, void *p);
extern bool Jif_AL_S1_To_S2_Condition(void *p);
extern bool Jif_AL_S2_To_S1_Condition(void *p);
extern void Access_Tracker_Idle_Action(int bInitAction, void *p);
extern void Access_Tracker_Down_Action(int bInitAction, void *p);
extern void Access_Tracker_Left_Action(int bInitAction, void *p);
extern void Access_Tracker_Right_Action(int bInitAction, void *p);
extern void Access_Tracker_UP_Action(int bInitAction, void *p);
extern bool Access_Tracker_S1_To_S2_Condition(void *p);
extern bool Access_Tracker_S2_To_S1_Condition(void *p);
extern bool Access_Tracker_S4_To_S1_Condition(void *p);
extern bool Access_Tracker_S1_To_S3_Condition(void *p);
extern bool Access_Tracker_S3_To_S1_Condition(void *p);
extern bool Access_Tracker_S1_To_S4_Condition(void *p);
extern bool Access_Tracker_S5_To_S1_Condition(void *p);
extern bool Access_Tracker_S3_To_S2_Condition(void *p);
extern bool Access_Tracker_S2_To_S3_Condition(void *p);
extern bool Access_Tracker_S4_To_S2_Condition(void *p);
extern bool Access_Tracker_S1_To_S5_Condition(void *p);
extern bool Access_Tracker_S2_To_S4_Condition(void *p);
extern bool Access_Tracker_S5_To_S3_Condition(void *p);
extern bool Access_Tracker_S3_To_S5_Condition(void *p);
extern bool Access_Tracker_S4_To_S5_Condition(void *p);
extern bool Access_Tracker_S5_To_S4_Condition(void *p);
extern void Spaceman_Animation_S_Action(int bInitAction, void *p);
extern void Spaceman_Animation_Back_Action(int bInitAction, void *p);
extern void Spaceman_Animation_Idle_BACK_Action(int bInitAction, void *p);
extern void Spaceman_Animation_Right_Action(int bInitAction, void *p);
extern void Spaceman_Animation_Idle_RIG_Action(int bInitAction, void *p);
extern void Spaceman_Animation_Forward_Action(int bInitAction, void *p);
extern void Spaceman_Animation_Idle_FOR_Action(int bInitAction, void *p);
extern void Spaceman_Animation_Left_Action(int bInitAction, void *p);
extern void Spaceman_Animation_Idle_Left_Action(int bInitAction, void *p);
extern bool Spaceman_Animation_S1_To_S2_Condition(void *p);
extern bool Spaceman_Animation_S3_To_S2_Condition(void *p);
extern bool Spaceman_Animation_S2_To_S3_Condition(void *p);
extern bool Spaceman_Animation_S1_To_S4_Condition(void *p);
extern bool Spaceman_Animation_S5_To_S2_Condition(void *p);
extern bool Spaceman_Animation_S7_To_S4b_Condition(void *p);
extern bool Spaceman_Animation_S3_To_S4_Condition(void *p);
extern bool Spaceman_Animation_S7_To_S2_Condition(void *p);
extern bool Spaceman_Animation_S1_To_S6_Condition(void *p);
extern bool Spaceman_Animation_S5_To_S4_Condition(void *p);
extern bool Spaceman_Animation_S4_To_S5_Condition(void *p);
extern bool Spaceman_Animation_S3_To_S6_Condition(void *p);
extern bool Spaceman_Animation_S9_To_S2_Condition(void *p);
extern bool Spaceman_Animation_S1_To_S8_Condition(void *p);
extern bool Spaceman_Animation_S5_To_S6_Condition(void *p);
extern bool Spaceman_Animation_S3_To_S8_Condition(void *p);
extern bool Spaceman_Animation_S7_To_S6_Condition(void *p);
extern bool Spaceman_Animation_S9_To_S4_Condition(void *p);
extern bool Spaceman_Animation_S5_To_S8_Condition(void *p);
extern bool Spaceman_Animation_S6_To_S7_Condition(void *p);
extern bool Spaceman_Animation_S7_To_S8_Condition(void *p);
extern bool Spaceman_Animation_S9_To_S6_Condition(void *p);
extern bool Spaceman_Animation_S9_To_S8_Condition(void *p);
extern bool Spaceman_Animation_S8_To_S9_Condition(void *p);
extern void Alien1_Animation_S_Action(int bInitAction, void *p);
extern void Alien1_Animation_Back_Action(int bInitAction, void *p);
extern void Alien1_Animation_Idle_BACK_Action(int bInitAction, void *p);
extern void Alien1_Animation_Right_Action(int bInitAction, void *p);
extern void Alien1_Animation_Idle_RIG_Action(int bInitAction, void *p);
extern void Alien1_Animation_Forward_Action(int bInitAction, void *p);
extern void Alien1_Animation_Idle_FOR_Action(int bInitAction, void *p);
extern void Alien1_Animation_Left_Action(int bInitAction, void *p);
extern void Alien1_Animation_Idle_Left_Action(int bInitAction, void *p);
extern bool Alien1_Animation_S1_To_S2_Condition(void *p);
extern bool Alien1_Animation_S1_To_S4_Condition(void *p);
extern bool Alien1_Animation_S2_To_S3_Condition(void *p);
extern bool Alien1_Animation_S3_To_S2_Condition(void *p);
extern bool Alien1_Animation_S7_To_S4b_Condition(void *p);
extern bool Alien1_Animation_S5_To_S2_Condition(void *p);
extern bool Alien1_Animation_S6_To_S2_Condition(void *p);
extern bool Alien1_Animation_S1_To_S6_Condition(void *p);
extern bool Alien1_Animation_S7_To_S2_Condition(void *p);
extern bool Alien1_Animation_S3_To_S4_Condition(void *p);
extern bool Alien1_Animation_S2_To_S6_Condition(void *p);
extern bool Alien1_Animation_S4_To_S5_Condition(void *p);
extern bool Alien1_Animation_S5_To_S4_Condition(void *p);
extern bool Alien1_Animation_S1_To_S8_Condition(void *p);
extern bool Alien1_Animation_S9_To_S2_Condition(void *p);
extern bool Alien1_Animation_S3_To_S6_Condition(void *p);
extern bool Alien1_Animation_S8_To_S4_Condition(void *p);
extern bool Alien1_Animation_S5_To_S6_Condition(void *p);
extern bool Alien1_Animation_S4_To_S8_Condition(void *p);
extern bool Alien1_Animation_S9_To_S4_Condition(void *p);
extern bool Alien1_Animation_S7_To_S6_Condition(void *p);
extern bool Alien1_Animation_S3_To_S8_Condition(void *p);
extern bool Alien1_Animation_S6_To_S7_Condition(void *p);
extern bool Alien1_Animation_S5_To_S8_Condition(void *p);
extern bool Alien1_Animation_S9_To_S6_Condition(void *p);
extern bool Alien1_Animation_S7_To_S8_Condition(void *p);
extern bool Alien1_Animation_S8_To_S9_Condition(void *p);
extern bool Alien1_Animation_S9_To_S8_Condition(void *p);
extern void Alien2_Animation_S_Action(int bInitAction, void *p);
extern void Alien2_Animation_Back_Action(int bInitAction, void *p);
extern void Alien2_Animation_Idle_BACK_Action(int bInitAction, void *p);
extern void Alien2_Animation_Right_Action(int bInitAction, void *p);
extern void Alien2_Animation_Idle_RIG_Action(int bInitAction, void *p);
extern void Alien2_Animation_Forward_Action(int bInitAction, void *p);
extern void Alien2_Animation_Idle_FOR_Action(int bInitAction, void *p);
extern void Alien2_Animation_Left_Action(int bInitAction, void *p);
extern void Alien2_Animation_Idle_Left_Action(int bInitAction, void *p);
extern bool Alien2_Animation_S1_To_S2_Condition(void *p);
extern bool Alien2_Animation_S3_To_S2_Condition(void *p);
extern bool Alien2_Animation_S2_To_S3_Condition(void *p);
extern bool Alien2_Animation_S1_To_S4_Condition(void *p);
extern bool Alien2_Animation_S5_To_S2_Condition(void *p);
extern bool Alien2_Animation_S7_To_S4b_Condition(void *p);
extern bool Alien2_Animation_S6_To_S2_Condition(void *p);
extern bool Alien2_Animation_S3_To_S4_Condition(void *p);
extern bool Alien2_Animation_S7_To_S2_Condition(void *p);
extern bool Alien2_Animation_S1_To_S6_Condition(void *p);
extern bool Alien2_Animation_S2_To_S6_Condition(void *p);
extern bool Alien2_Animation_S5_To_S4_Condition(void *p);
extern bool Alien2_Animation_S4_To_S5_Condition(void *p);
extern bool Alien2_Animation_S3_To_S6_Condition(void *p);
extern bool Alien2_Animation_S9_To_S2_Condition(void *p);
extern bool Alien2_Animation_S1_To_S8_Condition(void *p);
extern bool Alien2_Animation_S8_To_S4_Condition(void *p);
extern bool Alien2_Animation_S5_To_S6_Condition(void *p);
extern bool Alien2_Animation_S4_To_S8_Condition(void *p);
extern bool Alien2_Animation_S3_To_S8_Condition(void *p);
extern bool Alien2_Animation_S7_To_S6_Condition(void *p);
extern bool Alien2_Animation_S9_To_S4_Condition(void *p);
extern bool Alien2_Animation_S5_To_S8_Condition(void *p);
extern bool Alien2_Animation_S6_To_S7_Condition(void *p);
extern bool Alien2_Animation_S7_To_S8_Condition(void *p);
extern bool Alien2_Animation_S9_To_S6_Condition(void *p);
extern bool Alien2_Animation_S9_To_S8_Condition(void *p);
extern bool Alien2_Animation_S8_To_S9_Condition(void *p);
extern void Alien3_Animation_S_Action(int bInitAction, void *p);
extern void Alien3_Animation_Back_Action(int bInitAction, void *p);
extern void Alien3_Animation_Idle_BACK_Action(int bInitAction, void *p);
extern void Alien3_Animation_Right_Action(int bInitAction, void *p);
extern void Alien3_Animation_Idle_RIG_Action(int bInitAction, void *p);
extern void Alien3_Animation_Forward_Action(int bInitAction, void *p);
extern void Alien3_Animation_Idle_FOR_Action(int bInitAction, void *p);
extern void Alien3_Animation_Left_Action(int bInitAction, void *p);
extern void Alien3_Animation_Idle_Left_Action(int bInitAction, void *p);
extern bool Alien3_Animation_S1_To_S2_Condition(void *p);
extern bool Alien3_Animation_S1_To_S4_Condition(void *p);
extern bool Alien3_Animation_S2_To_S3_Condition(void *p);
extern bool Alien3_Animation_S3_To_S2_Condition(void *p);
extern bool Alien3_Animation_S7_To_S4b_Condition(void *p);
extern bool Alien3_Animation_S5_To_S2_Condition(void *p);
extern bool Alien3_Animation_S6_To_S2_Condition(void *p);
extern bool Alien3_Animation_S1_To_S6_Condition(void *p);
extern bool Alien3_Animation_S7_To_S2_Condition(void *p);
extern bool Alien3_Animation_S3_To_S4_Condition(void *p);
extern bool Alien3_Animation_S2_To_S6_Condition(void *p);
extern bool Alien3_Animation_S4_To_S5_Condition(void *p);
extern bool Alien3_Animation_S5_To_S4_Condition(void *p);
extern bool Alien3_Animation_S1_To_S8_Condition(void *p);
extern bool Alien3_Animation_S9_To_S2_Condition(void *p);
extern bool Alien3_Animation_S3_To_S6_Condition(void *p);
extern bool Alien3_Animation_S8_To_S4_Condition(void *p);
extern bool Alien3_Animation_S5_To_S6_Condition(void *p);
extern bool Alien3_Animation_S4_To_S8_Condition(void *p);
extern bool Alien3_Animation_S9_To_S4_Condition(void *p);
extern bool Alien3_Animation_S7_To_S6_Condition(void *p);
extern bool Alien3_Animation_S3_To_S8_Condition(void *p);
extern bool Alien3_Animation_S6_To_S7_Condition(void *p);
extern bool Alien3_Animation_S5_To_S8_Condition(void *p);
extern bool Alien3_Animation_S9_To_S6_Condition(void *p);
extern bool Alien3_Animation_S7_To_S8_Condition(void *p);
extern bool Alien3_Animation_S8_To_S9_Condition(void *p);
extern bool Alien3_Animation_S9_To_S8_Condition(void *p);
extern void Alex_AL_s1_Action(int bInitAction, void *p);
extern void Alex_AL_S2_Action(int bInitAction, void *p);
extern void Alex_AL_S3_Action(int bInitAction, void *p);
extern void Alex_AL_S4_Action(int bInitAction, void *p);
extern void Alex_AL_S5_Action(int bInitAction, void *p);
extern bool Alex_AL_S1_To_S2_Condition(void *p);
extern bool Alex_AL_S5_To_S1_Condition(void *p);
extern bool Alex_AL_S2_To_S3_Condition(void *p);
extern bool Alex_AL_S3_To_S4_Condition(void *p);
extern bool Alex_AL_S4_To_S5_Condition(void *p);
extern void Hunter_AI_Idle_Action(int bInitAction, void *p);
extern void Hunter_AI_Up_Action(int bInitAction, void *p);
extern void Hunter_AI_Down_Action(int bInitAction, void *p);
extern void Hunter_AI_Left_Action(int bInitAction, void *p);
extern void Hunter_AI_Right_Action(int bInitAction, void *p);
extern void Hunter_AI_S6_Action(int bInitAction, void *p);
extern void Hunter_AI_S7_Action(int bInitAction, void *p);
extern void Hunter_AI_S8_Action(int bInitAction, void *p);
extern void Hunter_AI_S9_Action(int bInitAction, void *p);
extern bool Hunter_AI_S2_To_S1_Condition(void *p);
extern bool Hunter_AI_S1_To_S2_Condition(void *p);
extern bool Hunter_AI_S4_To_S1_Condition(void *p);
extern bool Hunter_AI_S3_To_S1_Condition(void *p);
extern bool Hunter_AI_S1_To_S3_Condition(void *p);
extern bool Hunter_AI_S4_To_S2_Condition(void *p);
extern bool Hunter_AI_S3_To_S2_Condition(void *p);
extern bool Hunter_AI_S2_To_S3_Condition(void *p);
extern bool Hunter_AI_S5_To_S1_Condition(void *p);
extern bool Hunter_AI_S1_To_S4_Condition(void *p);
extern bool Hunter_AI_S7_To_S1_Condition(void *p);
extern bool Hunter_AI_S6_To_S1_Condition(void *p);
extern bool Hunter_AI_S4_To_S3_Condition(void *p);
extern bool Hunter_AI_S2_To_S4_Condition(void *p);
extern bool Hunter_AI_S5_To_S2_Condition(void *p);
extern bool Hunter_AI_S1_To_S5_Condition(void *p);
extern bool Hunter_AI_S8_To_S1_Condition(void *p);
extern bool Hunter_AI_S6_To_S2_Condition(void *p);
extern bool Hunter_AI_S1_To_S6_Condition(void *p);
extern bool Hunter_AI_S5_To_S3_Condition(void *p);
extern bool Hunter_AI_S3_To_S4_Condition(void *p);
extern bool Hunter_AI_S2_To_S5_Condition(void *p);
extern bool Hunter_AI_S9_To_S1_Condition(void *p);
extern bool Hunter_AI_S2_To_S6_Condition(void *p);
extern bool Hunter_AI_S3_To_S5_Condition(void *p);
extern bool Hunter_AI_S4_To_S5_Condition(void *p);
extern bool Hunter_AI_S5_To_S4_Condition(void *p);
extern bool Hunter_AI_S8_To_S3_Condition(void *p);
extern bool Hunter_AI_S1_To_S8_Condition(void *p);
extern bool Hunter_AI_S7_To_S5_Condition(void *p);
extern bool Hunter_AI_S9_To_S4_Condition(void *p);
extern bool Hunter_AI_S3_To_S8_Condition(void *p);
extern bool Hunter_AI_S5_To_S7_Condition(void *p);
extern bool Hunter_AI_S4_To_S9_Condition(void *p);
extern void left_right_left_Action(int bInitAction, void *p);
extern void left_right_Right_Action(int bInitAction, void *p);
extern bool left_right_S1_To_S3_Condition(void *p);
extern bool left_right_S3_To_S1_Condition(void *p);
extern void up_down_up_Action(int bInitAction, void *p);
extern void up_down_Down_Action(int bInitAction, void *p);
extern bool up_down_S3_To_S1_Condition(void *p);
extern bool up_down_S1_To_S3_Condition(void *p);
extern void Illiminati_Al_right_Action(int bInitAction, void *p);
extern void Illiminati_Al_down_Action(int bInitAction, void *p);
extern void Illiminati_Al_left_Action(int bInitAction, void *p);
extern void Illiminati_Al_up_Action(int bInitAction, void *p);
extern bool Illiminati_Al_S1_To_S2_Condition(void *p);
extern bool Illiminati_Al_S4_To_S1_Condition(void *p);
extern bool Illiminati_Al_S2_To_S3_Condition(void *p);
extern bool Illiminati_Al_S3_To_S4_Condition(void *p);
extern void Fred_AL_right_Action(int bInitAction, void *p);
extern void Fred_AL_down_Action(int bInitAction, void *p);
extern void Fred_AL_left_Action(int bInitAction, void *p);
extern void Fred_AL_up_Action(int bInitAction, void *p);
extern bool Fred_AL_S1_To_S2_Condition(void *p);
extern bool Fred_AL_S4_To_S1_Condition(void *p);
extern bool Fred_AL_S2_To_S3_Condition(void *p);
extern bool Fred_AL_S3_To_S4_Condition(void *p);
extern void Drugs_AI_Left2_Action(int bInitAction, void *p);
extern void Drugs_AI_down_Action(int bInitAction, void *p);
extern void Drugs_AI_left_Action(int bInitAction, void *p);
extern void Drugs_AI_Down2_Action(int bInitAction, void *p);
extern void Drugs_AI_up_Action(int bInitAction, void *p);
extern void Drugs_AI_Right_Action(int bInitAction, void *p);
extern void Drugs_AI_up2_Action(int bInitAction, void *p);
extern void Drugs_AI_Right2_Action(int bInitAction, void *p);
extern void Drugs_AI_Up3_Action(int bInitAction, void *p);
extern void Drugs_AI_Right3_Action(int bInitAction, void *p);
extern bool Drugs_AI_S10_To_S2_Condition(void *p);
extern bool Drugs_AI_S4_To_S1_Condition(void *p);
extern bool Drugs_AI_S9_To_S10_Condition(void *p);
extern bool Drugs_AI_S2_To_S3_Condition(void *p);
extern bool Drugs_AI_S1_To_S5_Condition(void *p);
extern bool Drugs_AI_S3_To_S4_Condition(void *p);
extern bool Drugs_AI_S5_To_S6_Condition(void *p);
extern bool Drugs_AI_S6_To_S7_Condition(void *p);
extern bool Drugs_AI_S7_To_S8_Condition(void *p);
extern bool Drugs_AI_S8_To_S9_Condition(void *p);
extern void Nate_AL_right_Action(int bInitAction, void *p);
extern void Nate_AL_down_Action(int bInitAction, void *p);
extern void Nate_AL_left_Action(int bInitAction, void *p);
extern void Nate_AL_up_Action(int bInitAction, void *p);
extern bool Nate_AL_S1_To_S2_Condition(void *p);
extern bool Nate_AL_S4_To_S1_Condition(void *p);
extern bool Nate_AL_S2_To_S3_Condition(void *p);
extern bool Nate_AL_S3_To_S4_Condition(void *p);
extern void Staci_AL_right_Action(int bInitAction, void *p);
extern void Staci_AL_down_Action(int bInitAction, void *p);
extern void Staci_AL_left_Action(int bInitAction, void *p);
extern void Staci_AL_up_Action(int bInitAction, void *p);
extern bool Staci_AL_S1_To_S2_Condition(void *p);
extern bool Staci_AL_S4_To_S1_Condition(void *p);
extern bool Staci_AL_S2_To_S3_Condition(void *p);
extern bool Staci_AL_S3_To_S4_Condition(void *p);
extern void axe_AL_UP_Action(int bInitAction, void *p);
extern void axe_AL_Right5_Action(int bInitAction, void *p);
extern void axe_AL_down_Action(int bInitAction, void *p);
extern void axe_AL_Down3_Action(int bInitAction, void *p);
extern void axe_AL_left_Action(int bInitAction, void *p);
extern void axe_AL_Right2_Action(int bInitAction, void *p);
extern void axe_AL_Left2_Action(int bInitAction, void *p);
extern void axe_AL_left4_Action(int bInitAction, void *p);
extern void axe_AL_Right3_Action(int bInitAction, void *p);
extern void axe_AL_down4_Action(int bInitAction, void *p);
extern void axe_AL_up3_Action(int bInitAction, void *p);
extern void axe_AL_Right4_Action(int bInitAction, void *p);
extern void axe_AL_up4_Action(int bInitAction, void *p);
extern void axe_AL_left3_Action(int bInitAction, void *p);
extern bool axe_AL_S5_To_S14_Condition(void *p);
extern bool axe_AL_S4_To_S1_Condition(void *p);
extern bool axe_AL_S13_To_S2_Condition(void *p);
extern bool axe_AL_S2_To_S3_Condition(void *p);
extern bool axe_AL_S1_To_S5_Condition(void *p);
extern bool axe_AL_S10_To_S11_Condition(void *p);
extern bool axe_AL_S3_To_S4_Condition(void *p);
extern bool axe_AL_S12_To_S9_Condition(void *p);
extern bool axe_AL_S7_To_S6_Condition(void *p);
extern bool axe_AL_S6_To_S8_Condition(void *p);
extern bool axe_AL_S9_To_S7_Condition(void *p);
extern bool axe_AL_S11_To_S13_Condition(void *p);
extern bool axe_AL_S14_To_S12_Condition(void *p);
extern bool axe_AL_S8_To_S10_Condition(void *p);

#endif
