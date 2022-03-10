#ifndef _GAMEFUNCTIONS_H_
#define _GAMEFUNCTIONS_H_

#include "GameNodeFun.h"
#include "LoadActorsFun.h"
#include "StateMachineFun.h"

#include "LibraryWrapper.h"
#define FN_RESTART	0
#define FN_VISIONTRACKER	1
#define FN_KEYBEHAVIORFN	2
#define FN_CHEAT_CODES	3
#define FN_DIFI	4
#define FN_DIFI_SELECT	5
#define FN_EXIT	6
#define FN_MENU_FUNK	7
#define FN_ALEX_AI	8
#define FN_KILL_CODE	9
#define FN_KILL_CODE_HU	10
#define FN_KILL_CODE_AR	11
#define FN_KILLLIVES	12
#define FN_KILL_CODE_ALGORE	13
#define FN_STORY_START	14
#define TIMER_STORY_START	0
#define FN_STORY_START2	15
#define FN_DIS_TEXT	16
#define TIMER_DIS_TEXT	1
#define FN_SERVERTOHALL1	17
#define FN_HALL1TOTESTLAB1	18
#define FN_TESTLAB1TOTESTLAB2	19
#define FN_TESTLAB2TOHALL2	20
#define FN_HALL2TOLQ	21
#define FN_LQTOHALL3	22
#define FN_VISABLITY	23
#define FN_KILL_CODE_L2	24
#define FN_KILL_CODE_L3	25
#define FN_KILL_CODE_L4	26
#define FN_KILL_CODE_L5	27



extern int binaryMap[24][20];
extern bool Following;
extern int difi;
extern int Lives;
extern int StaticCount;
#include "MyFunctions.h"
extern void Restart(GameNode* This);
extern void VisionTracker(Sprite* This);
extern void KeyBehaviorFN(Sprite* This);
extern void Cheat_codes(Game* This);
extern void Difi(Sprite* This);
extern void difi_select(FunCursor* This);
extern void Exit(FunCursor* This);
extern void Menu_funk(FunCursor* This);
extern void Alex_AI(Sprite* This);
extern void Kill_Code(Sprite* This);
extern void Kill_Code_HU(Sprite* This);
extern void Kill_Code_AR(Sprite* This);
extern void killLives(GameNode* This);
extern void Kill_Code_ALgore(Sprite* This);
extern void Story_start(GameNode* This);
extern void story_start2(GameNode* This);
extern void dis_text(Text* This);
extern void ServerToHall1(Sprite* This);
extern void Hall1ToTestLab1(Sprite* This);
extern void TestLab1toTestLab2(Sprite* This);
extern void TestLab2toHall2(Sprite* This);
extern void Hall2toLQ(Sprite* This);
extern void LQtoHall3(Sprite* This);
extern void Visablity(Sprite* This);
extern void Kill_Code_L2(Sprite* This);
extern void Kill_Code_L3(Sprite* This);
extern void Kill_Code_L4(Sprite* This);
extern void Kill_Code_L5(Sprite* This);

#endif
