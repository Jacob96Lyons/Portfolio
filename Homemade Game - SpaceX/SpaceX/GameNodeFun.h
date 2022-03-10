#ifndef _GAMENODEFUN_H_
#define _GAMENODEFUN_H_

#define SPACEMAN	0
#define SPACEMAN_LEFT	0
#define SPACEMAN_RIGHT	1
#define SPACEMAN_BACK	2
#define SPACEMAN_FORWARD	3
#define SPACEMAN_IDLEF	4
#define SPACEMAN_IDLEB	5
#define SPACEMAN_IDLER	6
#define SPACEMAN_IDLEL	7

#define ALIEN1	1
#define ALIEN1_FORWARD	0
#define ALIEN1_LEFT	1
#define ALIEN1_RIGHT	2
#define ALIEN1_BACK	3
#define ALIEN1_IDLEF	4
#define ALIEN1_IDLEB	5
#define ALIEN1_IDLER	6
#define ALIEN1_IDLEL	7

#define ALIEN2	2
#define ALIEN2_FORWARD	0
#define ALIEN2_LEFT	1
#define ALIEN2_RIGHT	2
#define ALIEN2_BACK	3
#define ALIEN2_IDLEF	4
#define ALIEN2_IDLEB	5
#define ALIEN2_IDLER	6
#define ALIEN2_IDLEL	7

#define ALIEN3	3
#define ALIEN3_FORWARD	0
#define ALIEN3_LEFT	1
#define ALIEN3_RIGHT	2
#define ALIEN3_BACK	3
#define ALIEN3_IDLEF	4
#define ALIEN3_IDLEB	5
#define ALIEN3_IDLEL	6
#define ALIEN3_IDLER	7

#define WALL	4
#define WALL_WALL	0
#define WALL_SERVER	1
#define WALL_DOOR1	2
#define WALL_DOOR2	3
#define WALL_BED1	4
#define WALL_BED2	5
#define WALL_BED3	6

#define CHIPS	5
#define CHIPS_CHIP	0

#define VISION	6
#define VISION_HARD	0
#define VISION_MED	1
#define VISION_EASY	2

#define STATIC	7
#define STATIC_STATIC	0

#define MENU	8
#define MENU_MENU	0
#define MENU_INFO	1
#define MENU_CONTROL	2
#define MENU_DIFI	3
#define MENU_WIN	4
#define MENU_LOSE	5
#define MENU_INTRO	6

#define BUTTON	9
#define BUTTON_BUTTON	0
#define BUTTON_GREEN_BAR	1
#define BUTTON_LIFE_BAR	2

#define EXIT	10
#define EXIT_ZERO	0

void Init_AlphaFunction(GameNode *gn);
void Exit_AlphaFunction(GameNode *gn);
void End_AlphaFunction(GameNode *gn);
void Init_Level_1Function(GameNode *gn);
void Exit_Level_1Function(GameNode *gn);
void End_Level_1Function(GameNode *gn);
void Init_Level_2Function(GameNode *gn);
void Exit_Level_2Function(GameNode *gn);
void End_Level_2Function(GameNode *gn);
void Init_Level_3Function(GameNode *gn);
void Exit_Level_3Function(GameNode *gn);
void End_Level_3Function(GameNode *gn);
void Init_Level_4Function(GameNode *gn);
void Exit_Level_4Function(GameNode *gn);
void End_Level_4Function(GameNode *gn);
void Init_Level_5Function(GameNode *gn);
void Exit_Level_5Function(GameNode *gn);
void End_Level_5Function(GameNode *gn);
void Init_Level_6Function(GameNode *gn);
void Exit_Level_6Function(GameNode *gn);
void End_Level_6Function(GameNode *gn);
void Init_Level_7Function(GameNode *gn);
void Exit_Level_7Function(GameNode *gn);
void End_Level_7Function(GameNode *gn);
void Init_MenuFunction(GameNode *gn);
void Exit_MenuFunction(GameNode *gn);
void End_MenuFunction(GameNode *gn);
void Init_infoFunction(GameNode *gn);
void Exit_infoFunction(GameNode *gn);
void End_infoFunction(GameNode *gn);
void Init_ConrolFunction(GameNode *gn);
void Exit_ConrolFunction(GameNode *gn);
void End_ConrolFunction(GameNode *gn);
void Init_difiFunction(GameNode *gn);
void Exit_difiFunction(GameNode *gn);
void End_difiFunction(GameNode *gn);
void Init_WinFunction(GameNode *gn);
void Exit_WinFunction(GameNode *gn);
void End_WinFunction(GameNode *gn);
void Init_LoseFunction(GameNode *gn);
void Exit_LoseFunction(GameNode *gn);
void End_LoseFunction(GameNode *gn);
void Init_IntroFunction(GameNode *gn);
void Exit_IntroFunction(GameNode *gn);
void End_IntroFunction(GameNode *gn);

#endif
