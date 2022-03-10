#include "stdafx.h"
#include "Headers.h"
#include "GameFunctions.h"

void LoadGameFile()
{
	
}

void Init_AlphaFunction(GameNode *gn)
{
#ifdef ERROR_MESSAGES
	pConsole->Color(RGB(0,0,0));
#endif

	gn->behavior.AddFunction(FN_RESTART);
	gn->behavior.AddFunction(FN_KILLLIVES);
	gn->WorldWidth(800);
	gn->WorldHeight(600);

	gn->FPStoMS(60);
	gn->QuitOnEscape(true);
	gn->ShowScrollingBoundingBox(false);

	gn->viewPort.ViewPortScrollingBB(0,0,640,480);

	gn->viewPort.WorldXPos(0);
	gn->viewPort.WorldYPos(0);
	gn->viewPort.MaxInflateBBLeft(0);
	gn->viewPort.MaxInflateBBTop(0);
	gn->viewPort.MaxInflateBBRight(0);
	gn->viewPort.MaxInflateBBBottom(0);

	gn->viewPort.ViewPortWidth(800);
	gn->viewPort.ViewPortHeight(600);

	FunRect rectGameMap = {0,0,800,600};
	Map mGameMap("GameMap","Background.bmp",Map::STANDARDMAP,0,0,0,true,rectGameMap);
	mGameMap.SpeedX(0.00);
	mGameMap.SpeedY(0.00);
	mGameMap.ScrollRatioX(0.00);
	mGameMap.ScrollRatioY(0.00);
	mGameMap.UseTransparency(false);
	mGameMap.Visible(true);
	mGameMap.Unused(false);
	mGameMap.Pause(false);
	mGameMap.SpacePartitionGridSize(128);
	mGameMap.ShowMapCollision(false);
	gn->Add(mGameMap);

	Sprite sWall38568661516;
	sWall38568661516.Name("Wall");
	sWall38568661516.Visible(true);
	sWall38568661516.Unused(true);
	sWall38568661516.Pause(false);
	sWall38568661516.Reflection(false);
	sWall38568661516.MainCharacter(false);
	sWall38568661516.BelongToMap("GameMap");
	sWall38568661516.ActorIndex(4);
	sWall38568661516.Animation(0);
	sWall38568661516.Frame(0);
	sWall38568661516.PegRegistered(false);
	sWall38568661516.ZOrder(0);
	sWall38568661516.MapPositionX(0);
	sWall38568661516.MapPositionY(0);
	sWall38568661516.CheckCollisionWithMap(false);
	sWall38568661516.DisplayListNumber(0);
	sWall38568661516.Friction(0);
	sWall38568661516.ActivateCollisionWithSprite(false);
	sWall38568661516.VectorDirection(0,0,0);
	sWall38568661516.ShowVectorOfTranslation(false);
	sWall38568661516.CollisionType(LOOSECOLLISION);
	sWall38568661516.Speed((float)0.00);
	sWall38568661516.VariableNumber(0);
	sWall38568661516.ShowSpriteBoundingBox(false);
	sWall38568661516.ShowSpriteCollision(false);
	sWall38568661516.Gravity(false);
	gn->Add(sWall38568661516);

	Sprite sSpaceman120434629922;
	sSpaceman120434629922.Name("Spaceman");
	sSpaceman120434629922.Visible(true);
	sSpaceman120434629922.Unused(false);
	sSpaceman120434629922.Pause(false);
	sSpaceman120434629922.Reflection(false);
	sSpaceman120434629922.MainCharacter(false);
	sSpaceman120434629922.BelongToMap("GameMap");
	sSpaceman120434629922.ActorIndex(0);
	sSpaceman120434629922.Animation(3);
	sSpaceman120434629922.Frame(1);
	sSpaceman120434629922.PegRegistered(false);
	sSpaceman120434629922.ZOrder(0);
	sSpaceman120434629922.MapPositionX(360);
	sSpaceman120434629922.MapPositionY(270);
	sSpaceman120434629922.CheckCollisionWithMap(false);
	sSpaceman120434629922.DisplayListNumber(1);
	sSpaceman120434629922.Friction(0);
	sSpaceman120434629922.ActivateCollisionWithSprite(false);
	sSpaceman120434629922.behavior.AddStateMachine(SM_MOVEMENT);
	sSpaceman120434629922.behavior.AddStateMachine(SM_SPACEMAN_ANIMATION);
	sSpaceman120434629922.behavior.AddFunction(FN_VISABLITY);
	sSpaceman120434629922.VectorDirection(0,0,0);
	sSpaceman120434629922.ShowVectorOfTranslation(false);
	sSpaceman120434629922.CollisionType(LOOSECOLLISION);
	sSpaceman120434629922.Speed((float)2.00);
	sSpaceman120434629922.VariableNumber(0);
	sSpaceman120434629922.ShowSpriteBoundingBox(false);
	sSpaceman120434629922.ShowSpriteCollision(false);
	sSpaceman120434629922.Gravity(false);
	gn->Add(sSpaceman120434629922);

	Sprite sALgore119838199729;
	sALgore119838199729.Name("ALgore");
	sALgore119838199729.Visible(true);
	sALgore119838199729.Unused(false);
	sALgore119838199729.Pause(false);
	sALgore119838199729.Reflection(false);
	sALgore119838199729.MainCharacter(false);
	sALgore119838199729.BelongToMap("GameMap");
	sALgore119838199729.ActorIndex(3);
	sALgore119838199729.Animation(0);
	sALgore119838199729.Frame(0);
	sALgore119838199729.PegRegistered(false);
	sALgore119838199729.ZOrder(0);
	sALgore119838199729.MapPositionX(660);
	sALgore119838199729.MapPositionY(30);
	sALgore119838199729.CheckCollisionWithMap(false);
	sALgore119838199729.DisplayListNumber(1);
	sALgore119838199729.Friction(0);
	sALgore119838199729.ActivateCollisionWithSprite(false);
	sALgore119838199729.behavior.AddStateMachine(SM_ALIEN3_ANIMATION);
	sALgore119838199729.behavior.AddStateMachine(SM_HUNTER_AI);
	sALgore119838199729.behavior.AddFunction(FN_KILL_CODE_ALGORE);
	sALgore119838199729.VectorDirection(0,0,0);
	sALgore119838199729.ShowVectorOfTranslation(false);
	sALgore119838199729.CollisionType(LOOSECOLLISION);
	sALgore119838199729.Speed((float)0.00);
	sALgore119838199729.VariableNumber(0);
	sALgore119838199729.ShowSpriteBoundingBox(false);
	sALgore119838199729.ShowSpriteCollision(false);
	sALgore119838199729.Gravity(false);
	gn->Add(sALgore119838199729);

	Sprite sHue260445607243;
	sHue260445607243.Name("Hue");
	sHue260445607243.Visible(false);
	sHue260445607243.Unused(true);
	sHue260445607243.Pause(false);
	sHue260445607243.Reflection(false);
	sHue260445607243.MainCharacter(false);
	sHue260445607243.BelongToMap("GameMap");
	sHue260445607243.ActorIndex(2);
	sHue260445607243.Animation(0);
	sHue260445607243.Frame(0);
	sHue260445607243.PegRegistered(false);
	sHue260445607243.ZOrder(0);
	sHue260445607243.MapPositionX(570);
	sHue260445607243.MapPositionY(180);
	sHue260445607243.CheckCollisionWithMap(false);
	sHue260445607243.DisplayListNumber(1);
	sHue260445607243.Friction(0);
	sHue260445607243.ActivateCollisionWithSprite(false);
	sHue260445607243.behavior.AddStateMachine(SM_ACCESS_TRACKER);
	sHue260445607243.behavior.AddStateMachine(SM_ALIEN2_ANIMATION);
	sHue260445607243.behavior.AddFunction(FN_KILL_CODE_HU);
	sHue260445607243.VectorDirection(0,0,0);
	sHue260445607243.ShowVectorOfTranslation(false);
	sHue260445607243.CollisionType(LOOSECOLLISION);
	sHue260445607243.Speed((float)2.00);
	sHue260445607243.VariableNumber(0);
	sHue260445607243.ShowSpriteBoundingBox(false);
	sHue260445607243.ShowSpriteCollision(false);
	sHue260445607243.Gravity(false);
	gn->Add(sHue260445607243);

	Sprite sJif119793789713;
	sJif119793789713.Name("Jif");
	sJif119793789713.Visible(true);
	sJif119793789713.Unused(false);
	sJif119793789713.Pause(false);
	sJif119793789713.Reflection(false);
	sJif119793789713.MainCharacter(false);
	sJif119793789713.BelongToMap("GameMap");
	sJif119793789713.ActorIndex(2);
	sJif119793789713.Animation(0);
	sJif119793789713.Frame(0);
	sJif119793789713.PegRegistered(false);
	sJif119793789713.ZOrder(0);
	sJif119793789713.MapPositionX(570);
	sJif119793789713.MapPositionY(450);
	sJif119793789713.CheckCollisionWithMap(false);
	sJif119793789713.DisplayListNumber(1);
	sJif119793789713.Friction(0);
	sJif119793789713.ActivateCollisionWithSprite(false);
	sJif119793789713.behavior.AddStateMachine(SM_ACCESS_TRACKER);
	sJif119793789713.behavior.AddStateMachine(SM_ALIEN2_ANIMATION);
	sJif119793789713.behavior.AddFunction(FN_KILL_CODE_HU);
	sJif119793789713.VectorDirection(0,0,0);
	sJif119793789713.ShowVectorOfTranslation(false);
	sJif119793789713.CollisionType(LOOSECOLLISION);
	sJif119793789713.Speed((float)2.00);
	sJif119793789713.VariableNumber(0);
	sJif119793789713.ShowSpriteBoundingBox(false);
	sJif119793789713.ShowSpriteCollision(false);
	sJif119793789713.Gravity(false);
	gn->Add(sJif119793789713);

	Sprite sJeff83337788933;
	sJeff83337788933.Name("Jeff");
	sJeff83337788933.Visible(true);
	sJeff83337788933.Unused(false);
	sJeff83337788933.Pause(false);
	sJeff83337788933.Reflection(false);
	sJeff83337788933.MainCharacter(false);
	sJeff83337788933.BelongToMap("GameMap");
	sJeff83337788933.ActorIndex(1);
	sJeff83337788933.Animation(0);
	sJeff83337788933.Frame(0);
	sJeff83337788933.PegRegistered(false);
	sJeff83337788933.ZOrder(0);
	sJeff83337788933.MapPositionX(630);
	sJeff83337788933.MapPositionY(390);
	sJeff83337788933.CheckCollisionWithMap(false);
	sJeff83337788933.DisplayListNumber(1);
	sJeff83337788933.Friction(0);
	sJeff83337788933.ActivateCollisionWithSprite(false);
	sJeff83337788933.behavior.AddStateMachine(SM_JEFF_AL);
	sJeff83337788933.behavior.AddStateMachine(SM_ALIEN1_ANIMATION);
	sJeff83337788933.behavior.AddFunction(FN_KILL_CODE);
	sJeff83337788933.VectorDirection(0,0,0);
	sJeff83337788933.ShowVectorOfTranslation(false);
	sJeff83337788933.CollisionType(LOOSECOLLISION);
	sJeff83337788933.Speed((float)5.00);
	sJeff83337788933.VariableNumber(0);
	sJeff83337788933.ShowSpriteBoundingBox(false);
	sJeff83337788933.ShowSpriteCollision(false);
	sJeff83337788933.Gravity(false);
	gn->Add(sJeff83337788933);

	Sprite salex83449328969;
	salex83449328969.Name("alex");
	salex83449328969.Visible(true);
	salex83449328969.Unused(false);
	salex83449328969.Pause(false);
	salex83449328969.Reflection(false);
	salex83449328969.MainCharacter(false);
	salex83449328969.BelongToMap("GameMap");
	salex83449328969.ActorIndex(2);
	salex83449328969.Animation(2);
	salex83449328969.Frame(0);
	salex83449328969.PegRegistered(false);
	salex83449328969.ZOrder(0);
	salex83449328969.MapPositionX(180);
	salex83449328969.MapPositionY(390);
	salex83449328969.CheckCollisionWithMap(false);
	salex83449328969.DisplayListNumber(1);
	salex83449328969.Friction(0);
	salex83449328969.ActivateCollisionWithSprite(false);
	salex83449328969.behavior.AddStateMachine(SM_ALEX_AL);
	salex83449328969.behavior.AddStateMachine(SM_ALIEN2_ANIMATION);
	salex83449328969.behavior.AddFunction(FN_KILL_CODE);
	salex83449328969.VectorDirection(0,0,0);
	salex83449328969.ShowVectorOfTranslation(false);
	salex83449328969.CollisionType(LOOSECOLLISION);
	salex83449328969.Speed((float)2.00);
	salex83449328969.VariableNumber(0);
	salex83449328969.ShowSpriteBoundingBox(false);
	salex83449328969.ShowSpriteCollision(false);
	salex83449328969.Gravity(false);
	gn->Add(salex83449328969);

	Sprite szac83552649005;
	szac83552649005.Name("zac");
	szac83552649005.Visible(true);
	szac83552649005.Unused(false);
	szac83552649005.Pause(false);
	szac83552649005.Reflection(false);
	szac83552649005.MainCharacter(false);
	szac83552649005.BelongToMap("GameMap");
	szac83552649005.ActorIndex(2);
	szac83552649005.Animation(5);
	szac83552649005.Frame(0);
	szac83552649005.PegRegistered(false);
	szac83552649005.ZOrder(0);
	szac83552649005.MapPositionX(450);
	szac83552649005.MapPositionY(540);
	szac83552649005.CheckCollisionWithMap(false);
	szac83552649005.DisplayListNumber(1);
	szac83552649005.Friction(0);
	szac83552649005.ActivateCollisionWithSprite(false);
	szac83552649005.behavior.AddFunction(FN_KILL_CODE);
	szac83552649005.VectorDirection(0,0,0);
	szac83552649005.ShowVectorOfTranslation(false);
	szac83552649005.CollisionType(LOOSECOLLISION);
	szac83552649005.Speed((float)0.00);
	szac83552649005.VariableNumber(0);
	szac83552649005.ShowSpriteBoundingBox(false);
	szac83552649005.ShowSpriteCollision(false);
	szac83552649005.Gravity(false);
	gn->Add(szac83552649005);

	Sprite saron2603706821;
	saron2603706821.Name("aron");
	saron2603706821.Visible(true);
	saron2603706821.Unused(false);
	saron2603706821.Pause(false);
	saron2603706821.Reflection(false);
	saron2603706821.MainCharacter(false);
	saron2603706821.BelongToMap("GameMap");
	saron2603706821.ActorIndex(3);
	saron2603706821.Animation(0);
	saron2603706821.Frame(0);
	saron2603706821.PegRegistered(false);
	saron2603706821.ZOrder(0);
	saron2603706821.MapPositionX(300);
	saron2603706821.MapPositionY(540);
	saron2603706821.CheckCollisionWithMap(false);
	saron2603706821.DisplayListNumber(1);
	saron2603706821.Friction(0);
	saron2603706821.ActivateCollisionWithSprite(false);
	saron2603706821.behavior.AddStateMachine(SM_ACCESS_TRACKER);
	saron2603706821.behavior.AddStateMachine(SM_ALIEN3_ANIMATION);
	saron2603706821.behavior.AddFunction(FN_KILL_CODE_AR);
	saron2603706821.VectorDirection(0,0,0);
	saron2603706821.ShowVectorOfTranslation(false);
	saron2603706821.CollisionType(LOOSECOLLISION);
	saron2603706821.Speed((float)2.00);
	saron2603706821.VariableNumber(0);
	saron2603706821.ShowSpriteBoundingBox(false);
	saron2603706821.ShowSpriteCollision(false);
	saron2603706821.Gravity(false);
	gn->Add(saron2603706821);

	Sprite szae83763329074;
	szae83763329074.Name("zae");
	szae83763329074.Visible(true);
	szae83763329074.Unused(false);
	szae83763329074.Pause(false);
	szae83763329074.Reflection(false);
	szae83763329074.MainCharacter(false);
	szae83763329074.BelongToMap("GameMap");
	szae83763329074.ActorIndex(2);
	szae83763329074.Animation(0);
	szae83763329074.Frame(0);
	szae83763329074.PegRegistered(false);
	szae83763329074.ZOrder(0);
	szae83763329074.MapPositionX(30);
	szae83763329074.MapPositionY(420);
	szae83763329074.CheckCollisionWithMap(false);
	szae83763329074.DisplayListNumber(1);
	szae83763329074.Friction(0);
	szae83763329074.ActivateCollisionWithSprite(false);
	szae83763329074.behavior.AddStateMachine(SM_ZAE_AL);
	szae83763329074.behavior.AddStateMachine(SM_ALIEN2_ANIMATION);
	szae83763329074.behavior.AddFunction(FN_KILL_CODE);
	szae83763329074.VectorDirection(0,0,0);
	szae83763329074.ShowVectorOfTranslation(false);
	szae83763329074.CollisionType(LOOSECOLLISION);
	szae83763329074.Speed((float)1.00);
	szae83763329074.VariableNumber(0);
	szae83763329074.ShowSpriteBoundingBox(false);
	szae83763329074.ShowSpriteCollision(false);
	szae83763329074.Gravity(false);
	gn->Add(szae83763329074);

	Sprite sCarly2671581473653;
	sCarly2671581473653.Name("Carly");
	sCarly2671581473653.Visible(true);
	sCarly2671581473653.Unused(false);
	sCarly2671581473653.Pause(false);
	sCarly2671581473653.Reflection(false);
	sCarly2671581473653.MainCharacter(false);
	sCarly2671581473653.BelongToMap("GameMap");
	sCarly2671581473653.ActorIndex(1);
	sCarly2671581473653.Animation(0);
	sCarly2671581473653.Frame(0);
	sCarly2671581473653.PegRegistered(false);
	sCarly2671581473653.ZOrder(0);
	sCarly2671581473653.MapPositionX(30);
	sCarly2671581473653.MapPositionY(30);
	sCarly2671581473653.CheckCollisionWithMap(false);
	sCarly2671581473653.DisplayListNumber(1);
	sCarly2671581473653.Friction(0);
	sCarly2671581473653.ActivateCollisionWithSprite(false);
	sCarly2671581473653.behavior.AddStateMachine(SM_CARLY_AL);
	sCarly2671581473653.behavior.AddStateMachine(SM_ALIEN1_ANIMATION);
	sCarly2671581473653.behavior.AddFunction(FN_KILL_CODE);
	sCarly2671581473653.VectorDirection(0,0,0);
	sCarly2671581473653.ShowVectorOfTranslation(false);
	sCarly2671581473653.CollisionType(LOOSECOLLISION);
	sCarly2671581473653.Speed((float)5.00);
	sCarly2671581473653.VariableNumber(0);
	sCarly2671581473653.ShowSpriteBoundingBox(false);
	sCarly2671581473653.ShowSpriteCollision(false);
	sCarly2671581473653.Gravity(false);
	gn->Add(sCarly2671581473653);

	Sprite sKey1811159279895;
	sKey1811159279895.Name("Key");
	sKey1811159279895.Visible(true);
	sKey1811159279895.Unused(true);
	sKey1811159279895.Pause(false);
	sKey1811159279895.Reflection(false);
	sKey1811159279895.MainCharacter(false);
	sKey1811159279895.BelongToMap("GameMap");
	sKey1811159279895.ActorIndex(5);
	sKey1811159279895.Animation(0);
	sKey1811159279895.Frame(0);
	sKey1811159279895.PegRegistered(false);
	sKey1811159279895.ZOrder(0);
	sKey1811159279895.MapPositionX(30);
	sKey1811159279895.MapPositionY(60);
	sKey1811159279895.CheckCollisionWithMap(false);
	sKey1811159279895.DisplayListNumber(0);
	sKey1811159279895.Friction(0);
	sKey1811159279895.ActivateCollisionWithSprite(false);
	sKey1811159279895.behavior.AddFunction(FN_KEYBEHAVIORFN);
	sKey1811159279895.VectorDirection(0,0,0);
	sKey1811159279895.ShowVectorOfTranslation(false);
	sKey1811159279895.CollisionType(LOOSECOLLISION);
	sKey1811159279895.Speed((float)0.00);
	sKey1811159279895.VariableNumber(0);
	sKey1811159279895.ShowSpriteBoundingBox(false);
	sKey1811159279895.ShowSpriteCollision(false);
	sKey1811159279895.Gravity(false);
	gn->Add(sKey1811159279895);

	Sprite sVision2607752001320;
	sVision2607752001320.Name("Vision");
	sVision2607752001320.Visible(false);
	sVision2607752001320.Unused(false);
	sVision2607752001320.Pause(false);
	sVision2607752001320.Reflection(false);
	sVision2607752001320.MainCharacter(false);
	sVision2607752001320.BelongToMap("GameMap");
	sVision2607752001320.ActorIndex(6);
	sVision2607752001320.Animation(0);
	sVision2607752001320.Frame(0);
	sVision2607752001320.PegRegistered(false);
	sVision2607752001320.ZOrder(0);
	sVision2607752001320.MapPositionX(0);
	sVision2607752001320.MapPositionY(0);
	sVision2607752001320.CheckCollisionWithMap(false);
	sVision2607752001320.DisplayListNumber(3);
	sVision2607752001320.Friction(0);
	sVision2607752001320.ActivateCollisionWithSprite(false);
	sVision2607752001320.behavior.AddFunction(FN_VISIONTRACKER);
	sVision2607752001320.behavior.AddFunction(FN_DIFI);
	sVision2607752001320.VectorDirection(0,0,0);
	sVision2607752001320.ShowVectorOfTranslation(false);
	sVision2607752001320.CollisionType(LOOSECOLLISION);
	sVision2607752001320.Speed((float)5.00);
	sVision2607752001320.VariableNumber(0);
	sVision2607752001320.ShowSpriteBoundingBox(false);
	sVision2607752001320.ShowSpriteCollision(false);
	sVision2607752001320.Gravity(false);
	gn->Add(sVision2607752001320);

	Sprite sLife_Bar78305077291;
	sLife_Bar78305077291.Name("Life_Bar");
	sLife_Bar78305077291.Visible(true);
	sLife_Bar78305077291.Unused(false);
	sLife_Bar78305077291.Pause(false);
	sLife_Bar78305077291.Reflection(false);
	sLife_Bar78305077291.MainCharacter(false);
	sLife_Bar78305077291.BelongToMap("GameMap");
	sLife_Bar78305077291.ActorIndex(9);
	sLife_Bar78305077291.Animation(2);
	sLife_Bar78305077291.Frame(0);
	sLife_Bar78305077291.PegRegistered(false);
	sLife_Bar78305077291.ZOrder(0);
	sLife_Bar78305077291.MapPositionX(720);
	sLife_Bar78305077291.MapPositionY(-10);
	sLife_Bar78305077291.CheckCollisionWithMap(false);
	sLife_Bar78305077291.DisplayListNumber(4);
	sLife_Bar78305077291.Friction(0);
	sLife_Bar78305077291.ActivateCollisionWithSprite(false);
	sLife_Bar78305077291.VectorDirection(0,0,0);
	sLife_Bar78305077291.ShowVectorOfTranslation(false);
	sLife_Bar78305077291.CollisionType(LOOSECOLLISION);
	sLife_Bar78305077291.Speed((float)0.00);
	sLife_Bar78305077291.VariableNumber(0);
	sLife_Bar78305077291.ShowSpriteBoundingBox(false);
	sLife_Bar78305077291.ShowSpriteCollision(false);
	sLife_Bar78305077291.Gravity(false);
	gn->Add(sLife_Bar78305077291);

	Sprite sGreenBar116749754390;
	sGreenBar116749754390.Name("GreenBar1");
	sGreenBar116749754390.Visible(true);
	sGreenBar116749754390.Unused(false);
	sGreenBar116749754390.Pause(false);
	sGreenBar116749754390.Reflection(false);
	sGreenBar116749754390.MainCharacter(false);
	sGreenBar116749754390.BelongToMap("GameMap");
	sGreenBar116749754390.ActorIndex(9);
	sGreenBar116749754390.Animation(1);
	sGreenBar116749754390.Frame(0);
	sGreenBar116749754390.PegRegistered(false);
	sGreenBar116749754390.ZOrder(0);
	sGreenBar116749754390.MapPositionX(720);
	sGreenBar116749754390.MapPositionY(-10);
	sGreenBar116749754390.CheckCollisionWithMap(false);
	sGreenBar116749754390.DisplayListNumber(5);
	sGreenBar116749754390.Friction(0);
	sGreenBar116749754390.ActivateCollisionWithSprite(false);
	sGreenBar116749754390.VectorDirection(0,0,0);
	sGreenBar116749754390.ShowVectorOfTranslation(false);
	sGreenBar116749754390.CollisionType(LOOSECOLLISION);
	sGreenBar116749754390.Speed((float)0.00);
	sGreenBar116749754390.VariableNumber(0);
	sGreenBar116749754390.ShowSpriteBoundingBox(false);
	sGreenBar116749754390.ShowSpriteCollision(false);
	sGreenBar116749754390.Gravity(false);
	gn->Add(sGreenBar116749754390);

	Sprite sGreenBar234880513107;
	sGreenBar234880513107.Name("GreenBar2");
	sGreenBar234880513107.Visible(true);
	sGreenBar234880513107.Unused(false);
	sGreenBar234880513107.Pause(false);
	sGreenBar234880513107.Reflection(false);
	sGreenBar234880513107.MainCharacter(false);
	sGreenBar234880513107.BelongToMap("GameMap");
	sGreenBar234880513107.ActorIndex(9);
	sGreenBar234880513107.Animation(1);
	sGreenBar234880513107.Frame(0);
	sGreenBar234880513107.PegRegistered(false);
	sGreenBar234880513107.ZOrder(0);
	sGreenBar234880513107.MapPositionX(720);
	sGreenBar234880513107.MapPositionY(91);
	sGreenBar234880513107.CheckCollisionWithMap(false);
	sGreenBar234880513107.DisplayListNumber(5);
	sGreenBar234880513107.Friction(0);
	sGreenBar234880513107.ActivateCollisionWithSprite(false);
	sGreenBar234880513107.VectorDirection(0,0,0);
	sGreenBar234880513107.ShowVectorOfTranslation(false);
	sGreenBar234880513107.CollisionType(LOOSECOLLISION);
	sGreenBar234880513107.Speed((float)0.00);
	sGreenBar234880513107.VariableNumber(0);
	sGreenBar234880513107.ShowSpriteBoundingBox(false);
	sGreenBar234880513107.ShowSpriteCollision(false);
	sGreenBar234880513107.Gravity(false);
	gn->Add(sGreenBar234880513107);

	Sprite sGreenBar336183863535;
	sGreenBar336183863535.Name("GreenBar3");
	sGreenBar336183863535.Visible(true);
	sGreenBar336183863535.Unused(false);
	sGreenBar336183863535.Pause(false);
	sGreenBar336183863535.Reflection(false);
	sGreenBar336183863535.MainCharacter(false);
	sGreenBar336183863535.BelongToMap("GameMap");
	sGreenBar336183863535.ActorIndex(9);
	sGreenBar336183863535.Animation(1);
	sGreenBar336183863535.Frame(0);
	sGreenBar336183863535.PegRegistered(false);
	sGreenBar336183863535.ZOrder(0);
	sGreenBar336183863535.MapPositionX(720);
	sGreenBar336183863535.MapPositionY(192);
	sGreenBar336183863535.CheckCollisionWithMap(false);
	sGreenBar336183863535.DisplayListNumber(5);
	sGreenBar336183863535.Friction(0);
	sGreenBar336183863535.ActivateCollisionWithSprite(false);
	sGreenBar336183863535.VectorDirection(0,0,0);
	sGreenBar336183863535.ShowVectorOfTranslation(false);
	sGreenBar336183863535.CollisionType(LOOSECOLLISION);
	sGreenBar336183863535.Speed((float)0.00);
	sGreenBar336183863535.VariableNumber(0);
	sGreenBar336183863535.ShowSpriteBoundingBox(false);
	sGreenBar336183863535.ShowSpriteCollision(false);
	sGreenBar336183863535.Gravity(false);
	gn->Add(sGreenBar336183863535);

	Sprite sGreenBar435235313225;
	sGreenBar435235313225.Name("GreenBar4");
	sGreenBar435235313225.Visible(true);
	sGreenBar435235313225.Unused(false);
	sGreenBar435235313225.Pause(false);
	sGreenBar435235313225.Reflection(false);
	sGreenBar435235313225.MainCharacter(false);
	sGreenBar435235313225.BelongToMap("GameMap");
	sGreenBar435235313225.ActorIndex(9);
	sGreenBar435235313225.Animation(1);
	sGreenBar435235313225.Frame(0);
	sGreenBar435235313225.PegRegistered(false);
	sGreenBar435235313225.ZOrder(0);
	sGreenBar435235313225.MapPositionX(720);
	sGreenBar435235313225.MapPositionY(293);
	sGreenBar435235313225.CheckCollisionWithMap(false);
	sGreenBar435235313225.DisplayListNumber(5);
	sGreenBar435235313225.Friction(0);
	sGreenBar435235313225.ActivateCollisionWithSprite(false);
	sGreenBar435235313225.VectorDirection(0,0,0);
	sGreenBar435235313225.ShowVectorOfTranslation(false);
	sGreenBar435235313225.CollisionType(LOOSECOLLISION);
	sGreenBar435235313225.Speed((float)0.00);
	sGreenBar435235313225.VariableNumber(0);
	sGreenBar435235313225.ShowSpriteBoundingBox(false);
	sGreenBar435235313225.ShowSpriteCollision(false);
	sGreenBar435235313225.Gravity(false);
	gn->Add(sGreenBar435235313225);

	Sprite sGreenBar535143113195;
	sGreenBar535143113195.Name("GreenBar5");
	sGreenBar535143113195.Visible(true);
	sGreenBar535143113195.Unused(false);
	sGreenBar535143113195.Pause(false);
	sGreenBar535143113195.Reflection(false);
	sGreenBar535143113195.MainCharacter(false);
	sGreenBar535143113195.BelongToMap("GameMap");
	sGreenBar535143113195.ActorIndex(9);
	sGreenBar535143113195.Animation(1);
	sGreenBar535143113195.Frame(0);
	sGreenBar535143113195.PegRegistered(false);
	sGreenBar535143113195.ZOrder(0);
	sGreenBar535143113195.MapPositionX(720);
	sGreenBar535143113195.MapPositionY(394);
	sGreenBar535143113195.CheckCollisionWithMap(false);
	sGreenBar535143113195.DisplayListNumber(5);
	sGreenBar535143113195.Friction(0);
	sGreenBar535143113195.ActivateCollisionWithSprite(false);
	sGreenBar535143113195.VectorDirection(0,0,0);
	sGreenBar535143113195.ShowVectorOfTranslation(false);
	sGreenBar535143113195.CollisionType(LOOSECOLLISION);
	sGreenBar535143113195.Speed((float)0.00);
	sGreenBar535143113195.VariableNumber(0);
	sGreenBar535143113195.ShowSpriteBoundingBox(false);
	sGreenBar535143113195.ShowSpriteCollision(false);
	sGreenBar535143113195.Gravity(false);
	gn->Add(sGreenBar535143113195);

	Sprite sStatic46161056791;
	sStatic46161056791.Name("Static");
	sStatic46161056791.Visible(false);
	sStatic46161056791.Unused(false);
	sStatic46161056791.Pause(false);
	sStatic46161056791.Reflection(false);
	sStatic46161056791.MainCharacter(false);
	sStatic46161056791.BelongToMap("GameMap");
	sStatic46161056791.ActorIndex(7);
	sStatic46161056791.Animation(0);
	sStatic46161056791.Frame(0);
	sStatic46161056791.PegRegistered(false);
	sStatic46161056791.ZOrder(0);
	sStatic46161056791.MapPositionX(0);
	sStatic46161056791.MapPositionY(0);
	sStatic46161056791.CheckCollisionWithMap(false);
	sStatic46161056791.DisplayListNumber(6);
	sStatic46161056791.Friction(0);
	sStatic46161056791.ActivateCollisionWithSprite(false);
	sStatic46161056791.VectorDirection(0,0,0);
	sStatic46161056791.ShowVectorOfTranslation(false);
	sStatic46161056791.CollisionType(LOOSECOLLISION);
	sStatic46161056791.Speed((float)0.00);
	sStatic46161056791.VariableNumber(0);
	sStatic46161056791.ShowSpriteBoundingBox(false);
	sStatic46161056791.ShowSpriteCollision(false);
	sStatic46161056791.Gravity(false);
	gn->Add(sStatic46161056791);

	Variable tScore;
	tScore.Name("Score");
	tScore.Visible(true);
	tScore.Unused(false);
	tScore.Pause(false);
	tScore.FontName("Impact");
	tScore.Width(0);
	tScore.Height(15.75);
	tScore.Weight(500);
	tScore.Color(RGB(192,192,192));
	tScore.Italic(false);
	tScore.StrikeOut(false);
	tScore.Underline(false);

	FunRect rectScore = {742,524,792,564};
	tScore.Frame(rectScore);
	tScore.ShowFrame(false);
	tScore.InWorld(true);
	tScore.ActivateOutOfViewport(true);
	tScore.BelongToMap("GameMap");
	tScore.TopMost(true);
	tScore.DisplayType(Variable::RespectingWords);
	tScore.TopMargin(0);
	tScore.LeftMargin(0);
	tScore.LineSpacing(0);
	tScore.LetterSpacing(0);
	tScore.LeadingSpaces(true);
	tScore.Effect(Variable::MummyEffect);
	tScore.Delay(0,0);
	tScore.OnlyIntegerPart(true);
	tScore = 0.000000;
	gn->Add(tScore);

	Variable tout_of;
	tout_of.Name("out_of");
	tout_of.Visible(true);
	tout_of.Unused(false);
	tout_of.Pause(false);
	tout_of.FontName("Impact");
	tout_of.Width(0);
	tout_of.Height(15.75);
	tout_of.Weight(500);
	tout_of.Color(RGB(128,128,128));
	tout_of.Italic(false);
	tout_of.StrikeOut(false);
	tout_of.Underline(false);

	FunRect rectout_of = {759,524,799,584};
	tout_of.Frame(rectout_of);
	tout_of.ShowFrame(false);
	tout_of.InWorld(true);
	tout_of.ActivateOutOfViewport(true);
	tout_of.BelongToMap("GameMap");
	tout_of.TopMost(true);
	tout_of.DisplayType(Variable::RespectingWords);
	tout_of.TopMargin(0);
	tout_of.LeftMargin(0);
	tout_of.LineSpacing(0);
	tout_of.LetterSpacing(0);
	tout_of.LeadingSpaces(true);
	tout_of.Effect(Variable::MummyEffect);
	tout_of.Delay(0,0);
	tout_of = "/5";
	gn->Add(tout_of);

	Variable tKeycards;
	tKeycards.Name("Keycards");
	tKeycards.Visible(true);
	tKeycards.Unused(false);
	tKeycards.Pause(false);
	tKeycards.FontName("Impact");
	tKeycards.Width(0);
	tKeycards.Height(9.75);
	tKeycards.Weight(400);
	tKeycards.Color(RGB(255,0,0));
	tKeycards.Italic(false);
	tKeycards.StrikeOut(false);
	tKeycards.Underline(false);

	FunRect rectKeycards = {731,548,800,592};
	tKeycards.Frame(rectKeycards);
	tKeycards.ShowFrame(false);
	tKeycards.InWorld(true);
	tKeycards.ActivateOutOfViewport(true);
	tKeycards.BelongToMap("GameMap");
	tKeycards.TopMost(true);
	tKeycards.DisplayType(Variable::RespectingWords);
	tKeycards.TopMargin(0);
	tKeycards.LeftMargin(0);
	tKeycards.LineSpacing(0);
	tKeycards.LetterSpacing(0);
	tKeycards.LeadingSpaces(true);
	tKeycards.Effect(Variable::MummyEffect);
	tKeycards.Delay(0,0);
	tKeycards = "Key Cards \n";
	gn->Add(tKeycards);


	FILE*f1;
	
	f1=fopen("map1.txt","rt");
	
	//y is # of rows & x is # of Columns
	for(int y=0;y<20;y++)
	{
		char ch;
		for(int x=0;x<24;x++)
			{
				fscanf(f1,"%c",&ch);
							if(ch=='W')
			{					
									MakeWall(x,y);
									binaryMap[x][y]=0;
							}
	
							else if(ch=='K')
			{	
									MakeKey(x,y);
									binaryMap[x][y]=1;
	
							}  
							else if(ch=='A')
			{	
									MakeDoor(x,y);
									binaryMap[x][y]=0;
	
							}  
	
							else if(ch=='S')
			{	
									MakeServer(x,y);
									binaryMap[x][y]=0;
	
							}  
							else if(ch=='B')
			{	
									MakeBed1(x,y);
									binaryMap[x][y]=0;
	
							}  
							else{
	
								//	MakeFood(x,y);
									binaryMap[x][y]=1;
							}
		}
		fscanf(f1,"%c",&ch);
	}
	fclose(f1);

};

void End_AlphaFunction(GameNode *gn)
{
	

};

void Exit_AlphaFunction(GameNode *gn)
{
};

void Init_Level_1Function(GameNode *gn)
{
#ifdef ERROR_MESSAGES
	pConsole->Color(RGB(0,0,0));
#endif

	gn->behavior.AddFunction(FN_RESTART);
	gn->behavior.AddFunction(FN_KILLLIVES);
	gn->WorldWidth(800);
	gn->WorldHeight(600);

	gn->FPStoMS(60);
	gn->QuitOnEscape(true);
	gn->ShowScrollingBoundingBox(false);

	gn->viewPort.ViewPortScrollingBB(0,0,640,480);

	gn->viewPort.WorldXPos(0);
	gn->viewPort.WorldYPos(0);
	gn->viewPort.MaxInflateBBLeft(0);
	gn->viewPort.MaxInflateBBTop(0);
	gn->viewPort.MaxInflateBBRight(0);
	gn->viewPort.MaxInflateBBBottom(0);

	gn->viewPort.ViewPortWidth(800);
	gn->viewPort.ViewPortHeight(600);

	FunRect rectGameMap = {0,0,800,600};
	Map mGameMap("GameMap","Background.bmp",Map::STANDARDMAP,0,0,0,true,rectGameMap);
	mGameMap.SpeedX(0.00);
	mGameMap.SpeedY(0.00);
	mGameMap.ScrollRatioX(0.00);
	mGameMap.ScrollRatioY(0.00);
	mGameMap.UseTransparency(false);
	mGameMap.Visible(true);
	mGameMap.Unused(false);
	mGameMap.Pause(false);
	mGameMap.SpacePartitionGridSize(128);
	mGameMap.ShowMapCollision(false);
	gn->Add(mGameMap);

	Sprite sWall38568661516;
	sWall38568661516.Name("Wall");
	sWall38568661516.Visible(true);
	sWall38568661516.Unused(true);
	sWall38568661516.Pause(false);
	sWall38568661516.Reflection(false);
	sWall38568661516.MainCharacter(false);
	sWall38568661516.BelongToMap("GameMap");
	sWall38568661516.ActorIndex(4);
	sWall38568661516.Animation(0);
	sWall38568661516.Frame(0);
	sWall38568661516.PegRegistered(false);
	sWall38568661516.ZOrder(0);
	sWall38568661516.MapPositionX(0);
	sWall38568661516.MapPositionY(0);
	sWall38568661516.CheckCollisionWithMap(false);
	sWall38568661516.DisplayListNumber(0);
	sWall38568661516.Friction(0);
	sWall38568661516.ActivateCollisionWithSprite(false);
	sWall38568661516.VectorDirection(0,0,0);
	sWall38568661516.ShowVectorOfTranslation(false);
	sWall38568661516.CollisionType(LOOSECOLLISION);
	sWall38568661516.Speed((float)0.00);
	sWall38568661516.VariableNumber(0);
	sWall38568661516.ShowSpriteBoundingBox(false);
	sWall38568661516.ShowSpriteCollision(false);
	sWall38568661516.Gravity(false);
	gn->Add(sWall38568661516);

	Sprite sSpaceman69977591270;
	sSpaceman69977591270.Name("Spaceman");
	sSpaceman69977591270.Visible(true);
	sSpaceman69977591270.Unused(false);
	sSpaceman69977591270.Pause(false);
	sSpaceman69977591270.Reflection(false);
	sSpaceman69977591270.MainCharacter(false);
	sSpaceman69977591270.BelongToMap("GameMap");
	sSpaceman69977591270.ActorIndex(0);
	sSpaceman69977591270.Animation(3);
	sSpaceman69977591270.Frame(1);
	sSpaceman69977591270.PegRegistered(false);
	sSpaceman69977591270.ZOrder(0);
	sSpaceman69977591270.MapPositionX(360);
	sSpaceman69977591270.MapPositionY(270);
	sSpaceman69977591270.CheckCollisionWithMap(false);
	sSpaceman69977591270.DisplayListNumber(0);
	sSpaceman69977591270.Friction(0);
	sSpaceman69977591270.ActivateCollisionWithSprite(false);
	sSpaceman69977591270.behavior.AddStateMachine(SM_MOVEMENT);
	sSpaceman69977591270.behavior.AddStateMachine(SM_SPACEMAN_ANIMATION);
	sSpaceman69977591270.behavior.AddFunction(FN_SERVERTOHALL1);
	sSpaceman69977591270.VectorDirection(0,0,0);
	sSpaceman69977591270.ShowVectorOfTranslation(false);
	sSpaceman69977591270.CollisionType(LOOSECOLLISION);
	sSpaceman69977591270.Speed((float)2.00);
	sSpaceman69977591270.VariableNumber(0);
	sSpaceman69977591270.ShowSpriteBoundingBox(false);
	sSpaceman69977591270.ShowSpriteCollision(false);
	sSpaceman69977591270.Gravity(false);
	gn->Add(sSpaceman69977591270);

	Sprite sKey1811159279895;
	sKey1811159279895.Name("Key");
	sKey1811159279895.Visible(true);
	sKey1811159279895.Unused(true);
	sKey1811159279895.Pause(false);
	sKey1811159279895.Reflection(false);
	sKey1811159279895.MainCharacter(false);
	sKey1811159279895.BelongToMap("GameMap");
	sKey1811159279895.ActorIndex(5);
	sKey1811159279895.Animation(0);
	sKey1811159279895.Frame(0);
	sKey1811159279895.PegRegistered(false);
	sKey1811159279895.ZOrder(0);
	sKey1811159279895.MapPositionX(30);
	sKey1811159279895.MapPositionY(60);
	sKey1811159279895.CheckCollisionWithMap(false);
	sKey1811159279895.DisplayListNumber(0);
	sKey1811159279895.Friction(0);
	sKey1811159279895.ActivateCollisionWithSprite(false);
	sKey1811159279895.behavior.AddFunction(FN_KEYBEHAVIORFN);
	sKey1811159279895.VectorDirection(0,0,0);
	sKey1811159279895.ShowVectorOfTranslation(false);
	sKey1811159279895.CollisionType(LOOSECOLLISION);
	sKey1811159279895.Speed((float)0.00);
	sKey1811159279895.VariableNumber(0);
	sKey1811159279895.ShowSpriteBoundingBox(false);
	sKey1811159279895.ShowSpriteCollision(false);
	sKey1811159279895.Gravity(false);
	gn->Add(sKey1811159279895);

	Sprite sVision2607752001320;
	sVision2607752001320.Name("Vision");
	sVision2607752001320.Visible(false);
	sVision2607752001320.Unused(false);
	sVision2607752001320.Pause(false);
	sVision2607752001320.Reflection(false);
	sVision2607752001320.MainCharacter(false);
	sVision2607752001320.BelongToMap("GameMap");
	sVision2607752001320.ActorIndex(6);
	sVision2607752001320.Animation(0);
	sVision2607752001320.Frame(0);
	sVision2607752001320.PegRegistered(false);
	sVision2607752001320.ZOrder(0);
	sVision2607752001320.MapPositionX(0);
	sVision2607752001320.MapPositionY(0);
	sVision2607752001320.CheckCollisionWithMap(false);
	sVision2607752001320.DisplayListNumber(3);
	sVision2607752001320.Friction(0);
	sVision2607752001320.ActivateCollisionWithSprite(false);
	sVision2607752001320.behavior.AddFunction(FN_VISIONTRACKER);
	sVision2607752001320.behavior.AddFunction(FN_DIFI);
	sVision2607752001320.VectorDirection(0,0,0);
	sVision2607752001320.ShowVectorOfTranslation(false);
	sVision2607752001320.CollisionType(LOOSECOLLISION);
	sVision2607752001320.Speed((float)5.00);
	sVision2607752001320.VariableNumber(0);
	sVision2607752001320.ShowSpriteBoundingBox(false);
	sVision2607752001320.ShowSpriteCollision(false);
	sVision2607752001320.Gravity(false);
	gn->Add(sVision2607752001320);

	Sprite sLife_Bar70453111423;
	sLife_Bar70453111423.Name("Life_Bar");
	sLife_Bar70453111423.Visible(true);
	sLife_Bar70453111423.Unused(false);
	sLife_Bar70453111423.Pause(false);
	sLife_Bar70453111423.Reflection(false);
	sLife_Bar70453111423.MainCharacter(false);
	sLife_Bar70453111423.BelongToMap("GameMap");
	sLife_Bar70453111423.ActorIndex(9);
	sLife_Bar70453111423.Animation(2);
	sLife_Bar70453111423.Frame(0);
	sLife_Bar70453111423.PegRegistered(false);
	sLife_Bar70453111423.ZOrder(0);
	sLife_Bar70453111423.MapPositionX(720);
	sLife_Bar70453111423.MapPositionY(-10);
	sLife_Bar70453111423.CheckCollisionWithMap(false);
	sLife_Bar70453111423.DisplayListNumber(4);
	sLife_Bar70453111423.Friction(0);
	sLife_Bar70453111423.ActivateCollisionWithSprite(false);
	sLife_Bar70453111423.VectorDirection(0,0,0);
	sLife_Bar70453111423.ShowVectorOfTranslation(false);
	sLife_Bar70453111423.CollisionType(LOOSECOLLISION);
	sLife_Bar70453111423.Speed((float)0.00);
	sLife_Bar70453111423.VariableNumber(0);
	sLife_Bar70453111423.ShowSpriteBoundingBox(false);
	sLife_Bar70453111423.ShowSpriteCollision(false);
	sLife_Bar70453111423.Gravity(false);
	gn->Add(sLife_Bar70453111423);

	Sprite sGreenBar174427852723;
	sGreenBar174427852723.Name("GreenBar1");
	sGreenBar174427852723.Visible(true);
	sGreenBar174427852723.Unused(false);
	sGreenBar174427852723.Pause(false);
	sGreenBar174427852723.Reflection(false);
	sGreenBar174427852723.MainCharacter(false);
	sGreenBar174427852723.BelongToMap("GameMap");
	sGreenBar174427852723.ActorIndex(9);
	sGreenBar174427852723.Animation(1);
	sGreenBar174427852723.Frame(0);
	sGreenBar174427852723.PegRegistered(false);
	sGreenBar174427852723.ZOrder(0);
	sGreenBar174427852723.MapPositionX(720);
	sGreenBar174427852723.MapPositionY(-10);
	sGreenBar174427852723.CheckCollisionWithMap(false);
	sGreenBar174427852723.DisplayListNumber(5);
	sGreenBar174427852723.Friction(0);
	sGreenBar174427852723.ActivateCollisionWithSprite(false);
	sGreenBar174427852723.VectorDirection(0,0,0);
	sGreenBar174427852723.ShowVectorOfTranslation(false);
	sGreenBar174427852723.CollisionType(LOOSECOLLISION);
	sGreenBar174427852723.Speed((float)0.00);
	sGreenBar174427852723.VariableNumber(0);
	sGreenBar174427852723.ShowSpriteBoundingBox(false);
	sGreenBar174427852723.ShowSpriteCollision(false);
	sGreenBar174427852723.Gravity(false);
	gn->Add(sGreenBar174427852723);

	Sprite sGreenBar270449111423;
	sGreenBar270449111423.Name("GreenBar2");
	sGreenBar270449111423.Visible(true);
	sGreenBar270449111423.Unused(false);
	sGreenBar270449111423.Pause(false);
	sGreenBar270449111423.Reflection(false);
	sGreenBar270449111423.MainCharacter(false);
	sGreenBar270449111423.BelongToMap("GameMap");
	sGreenBar270449111423.ActorIndex(9);
	sGreenBar270449111423.Animation(1);
	sGreenBar270449111423.Frame(0);
	sGreenBar270449111423.PegRegistered(false);
	sGreenBar270449111423.ZOrder(0);
	sGreenBar270449111423.MapPositionX(720);
	sGreenBar270449111423.MapPositionY(91);
	sGreenBar270449111423.CheckCollisionWithMap(false);
	sGreenBar270449111423.DisplayListNumber(5);
	sGreenBar270449111423.Friction(0);
	sGreenBar270449111423.ActivateCollisionWithSprite(false);
	sGreenBar270449111423.VectorDirection(0,0,0);
	sGreenBar270449111423.ShowVectorOfTranslation(false);
	sGreenBar270449111423.CollisionType(LOOSECOLLISION);
	sGreenBar270449111423.Speed((float)0.00);
	sGreenBar270449111423.VariableNumber(0);
	sGreenBar270449111423.ShowSpriteBoundingBox(false);
	sGreenBar270449111423.ShowSpriteCollision(false);
	sGreenBar270449111423.Gravity(false);
	gn->Add(sGreenBar270449111423);

	Sprite sGreenBar370447111420;
	sGreenBar370447111420.Name("GreenBar3");
	sGreenBar370447111420.Visible(true);
	sGreenBar370447111420.Unused(false);
	sGreenBar370447111420.Pause(false);
	sGreenBar370447111420.Reflection(false);
	sGreenBar370447111420.MainCharacter(false);
	sGreenBar370447111420.BelongToMap("GameMap");
	sGreenBar370447111420.ActorIndex(9);
	sGreenBar370447111420.Animation(1);
	sGreenBar370447111420.Frame(0);
	sGreenBar370447111420.PegRegistered(false);
	sGreenBar370447111420.ZOrder(0);
	sGreenBar370447111420.MapPositionX(720);
	sGreenBar370447111420.MapPositionY(192);
	sGreenBar370447111420.CheckCollisionWithMap(false);
	sGreenBar370447111420.DisplayListNumber(5);
	sGreenBar370447111420.Friction(0);
	sGreenBar370447111420.ActivateCollisionWithSprite(false);
	sGreenBar370447111420.VectorDirection(0,0,0);
	sGreenBar370447111420.ShowVectorOfTranslation(false);
	sGreenBar370447111420.CollisionType(LOOSECOLLISION);
	sGreenBar370447111420.Speed((float)0.00);
	sGreenBar370447111420.VariableNumber(0);
	sGreenBar370447111420.ShowSpriteBoundingBox(false);
	sGreenBar370447111420.ShowSpriteCollision(false);
	sGreenBar370447111420.Gravity(false);
	gn->Add(sGreenBar370447111420);

	Sprite sGreenBar470445211420;
	sGreenBar470445211420.Name("GreenBar4");
	sGreenBar470445211420.Visible(true);
	sGreenBar470445211420.Unused(false);
	sGreenBar470445211420.Pause(false);
	sGreenBar470445211420.Reflection(false);
	sGreenBar470445211420.MainCharacter(false);
	sGreenBar470445211420.BelongToMap("GameMap");
	sGreenBar470445211420.ActorIndex(9);
	sGreenBar470445211420.Animation(1);
	sGreenBar470445211420.Frame(0);
	sGreenBar470445211420.PegRegistered(false);
	sGreenBar470445211420.ZOrder(0);
	sGreenBar470445211420.MapPositionX(720);
	sGreenBar470445211420.MapPositionY(293);
	sGreenBar470445211420.CheckCollisionWithMap(false);
	sGreenBar470445211420.DisplayListNumber(5);
	sGreenBar470445211420.Friction(0);
	sGreenBar470445211420.ActivateCollisionWithSprite(false);
	sGreenBar470445211420.VectorDirection(0,0,0);
	sGreenBar470445211420.ShowVectorOfTranslation(false);
	sGreenBar470445211420.CollisionType(LOOSECOLLISION);
	sGreenBar470445211420.Speed((float)0.00);
	sGreenBar470445211420.VariableNumber(0);
	sGreenBar470445211420.ShowSpriteBoundingBox(false);
	sGreenBar470445211420.ShowSpriteCollision(false);
	sGreenBar470445211420.Gravity(false);
	gn->Add(sGreenBar470445211420);

	Sprite sGreenBar570437511417;
	sGreenBar570437511417.Name("GreenBar5");
	sGreenBar570437511417.Visible(true);
	sGreenBar570437511417.Unused(false);
	sGreenBar570437511417.Pause(false);
	sGreenBar570437511417.Reflection(false);
	sGreenBar570437511417.MainCharacter(false);
	sGreenBar570437511417.BelongToMap("GameMap");
	sGreenBar570437511417.ActorIndex(9);
	sGreenBar570437511417.Animation(1);
	sGreenBar570437511417.Frame(0);
	sGreenBar570437511417.PegRegistered(false);
	sGreenBar570437511417.ZOrder(0);
	sGreenBar570437511417.MapPositionX(720);
	sGreenBar570437511417.MapPositionY(394);
	sGreenBar570437511417.CheckCollisionWithMap(false);
	sGreenBar570437511417.DisplayListNumber(5);
	sGreenBar570437511417.Friction(0);
	sGreenBar570437511417.ActivateCollisionWithSprite(false);
	sGreenBar570437511417.VectorDirection(0,0,0);
	sGreenBar570437511417.ShowVectorOfTranslation(false);
	sGreenBar570437511417.CollisionType(LOOSECOLLISION);
	sGreenBar570437511417.Speed((float)0.00);
	sGreenBar570437511417.VariableNumber(0);
	sGreenBar570437511417.ShowSpriteBoundingBox(false);
	sGreenBar570437511417.ShowSpriteCollision(false);
	sGreenBar570437511417.Gravity(false);
	gn->Add(sGreenBar570437511417);

	Sprite sStatic46161056791;
	sStatic46161056791.Name("Static");
	sStatic46161056791.Visible(false);
	sStatic46161056791.Unused(false);
	sStatic46161056791.Pause(false);
	sStatic46161056791.Reflection(false);
	sStatic46161056791.MainCharacter(false);
	sStatic46161056791.BelongToMap("GameMap");
	sStatic46161056791.ActorIndex(7);
	sStatic46161056791.Animation(0);
	sStatic46161056791.Frame(0);
	sStatic46161056791.PegRegistered(false);
	sStatic46161056791.ZOrder(0);
	sStatic46161056791.MapPositionX(0);
	sStatic46161056791.MapPositionY(0);
	sStatic46161056791.CheckCollisionWithMap(false);
	sStatic46161056791.DisplayListNumber(6);
	sStatic46161056791.Friction(0);
	sStatic46161056791.ActivateCollisionWithSprite(false);
	sStatic46161056791.VectorDirection(0,0,0);
	sStatic46161056791.ShowVectorOfTranslation(false);
	sStatic46161056791.CollisionType(LOOSECOLLISION);
	sStatic46161056791.Speed((float)0.00);
	sStatic46161056791.VariableNumber(0);
	sStatic46161056791.ShowSpriteBoundingBox(false);
	sStatic46161056791.ShowSpriteCollision(false);
	sStatic46161056791.Gravity(false);
	gn->Add(sStatic46161056791);

	Sprite sServer50513774912;
	sServer50513774912.Name("Server");
	sServer50513774912.Visible(true);
	sServer50513774912.Unused(true);
	sServer50513774912.Pause(false);
	sServer50513774912.Reflection(false);
	sServer50513774912.MainCharacter(false);
	sServer50513774912.BelongToMap("GameMap");
	sServer50513774912.ActorIndex(4);
	sServer50513774912.Animation(1);
	sServer50513774912.Frame(0);
	sServer50513774912.PegRegistered(false);
	sServer50513774912.ZOrder(0);
	sServer50513774912.MapPositionX(0);
	sServer50513774912.MapPositionY(0);
	sServer50513774912.CheckCollisionWithMap(false);
	sServer50513774912.DisplayListNumber(0);
	sServer50513774912.Friction(0);
	sServer50513774912.ActivateCollisionWithSprite(false);
	sServer50513774912.VectorDirection(0,0,0);
	sServer50513774912.ShowVectorOfTranslation(false);
	sServer50513774912.CollisionType(LOOSECOLLISION);
	sServer50513774912.Speed((float)0.00);
	sServer50513774912.VariableNumber(0);
	sServer50513774912.ShowSpriteBoundingBox(false);
	sServer50513774912.ShowSpriteCollision(false);
	sServer50513774912.Gravity(false);
	gn->Add(sServer50513774912);

	Sprite sDoor62799053716;
	sDoor62799053716.Name("Door");
	sDoor62799053716.Visible(true);
	sDoor62799053716.Unused(true);
	sDoor62799053716.Pause(false);
	sDoor62799053716.Reflection(false);
	sDoor62799053716.MainCharacter(false);
	sDoor62799053716.BelongToMap("GameMap");
	sDoor62799053716.ActorIndex(4);
	sDoor62799053716.Animation(2);
	sDoor62799053716.Frame(0);
	sDoor62799053716.PegRegistered(false);
	sDoor62799053716.ZOrder(0);
	sDoor62799053716.MapPositionX(0);
	sDoor62799053716.MapPositionY(0);
	sDoor62799053716.CheckCollisionWithMap(false);
	sDoor62799053716.DisplayListNumber(0);
	sDoor62799053716.Friction(0);
	sDoor62799053716.ActivateCollisionWithSprite(false);
	sDoor62799053716.VectorDirection(0,0,0);
	sDoor62799053716.ShowVectorOfTranslation(false);
	sDoor62799053716.CollisionType(LOOSECOLLISION);
	sDoor62799053716.Speed((float)0.00);
	sDoor62799053716.VariableNumber(0);
	sDoor62799053716.ShowSpriteBoundingBox(false);
	sDoor62799053716.ShowSpriteCollision(false);
	sDoor62799053716.Gravity(false);
	gn->Add(sDoor62799053716);

	Sprite sjoe2694596911171;
	sjoe2694596911171.Name("joe");
	sjoe2694596911171.Visible(true);
	sjoe2694596911171.Unused(false);
	sjoe2694596911171.Pause(false);
	sjoe2694596911171.Reflection(false);
	sjoe2694596911171.MainCharacter(false);
	sjoe2694596911171.BelongToMap("GameMap");
	sjoe2694596911171.ActorIndex(2);
	sjoe2694596911171.Animation(4);
	sjoe2694596911171.Frame(0);
	sjoe2694596911171.PegRegistered(false);
	sjoe2694596911171.ZOrder(0);
	sjoe2694596911171.MapPositionX(660);
	sjoe2694596911171.MapPositionY(30);
	sjoe2694596911171.CheckCollisionWithMap(false);
	sjoe2694596911171.DisplayListNumber(0);
	sjoe2694596911171.Friction(0);
	sjoe2694596911171.ActivateCollisionWithSprite(false);
	sjoe2694596911171.behavior.AddFunction(FN_KILL_CODE);
	sjoe2694596911171.VectorDirection(0,0,0);
	sjoe2694596911171.ShowVectorOfTranslation(false);
	sjoe2694596911171.CollisionType(LOOSECOLLISION);
	sjoe2694596911171.Speed((float)0.00);
	sjoe2694596911171.VariableNumber(0);
	sjoe2694596911171.ShowSpriteBoundingBox(false);
	sjoe2694596911171.ShowSpriteCollision(false);
	sjoe2694596911171.Gravity(false);
	gn->Add(sjoe2694596911171);

	Sprite ssteve2694715511210;
	ssteve2694715511210.Name("steve");
	ssteve2694715511210.Visible(true);
	ssteve2694715511210.Unused(false);
	ssteve2694715511210.Pause(false);
	ssteve2694715511210.Reflection(false);
	ssteve2694715511210.MainCharacter(false);
	ssteve2694715511210.BelongToMap("GameMap");
	ssteve2694715511210.ActorIndex(2);
	ssteve2694715511210.Animation(6);
	ssteve2694715511210.Frame(0);
	ssteve2694715511210.PegRegistered(false);
	ssteve2694715511210.ZOrder(0);
	ssteve2694715511210.MapPositionX(30);
	ssteve2694715511210.MapPositionY(90);
	ssteve2694715511210.CheckCollisionWithMap(false);
	ssteve2694715511210.DisplayListNumber(0);
	ssteve2694715511210.Friction(0);
	ssteve2694715511210.ActivateCollisionWithSprite(false);
	ssteve2694715511210.behavior.AddStateMachine(SM_LEFT_RIGHT);
	ssteve2694715511210.behavior.AddStateMachine(SM_ALIEN2_ANIMATION);
	ssteve2694715511210.behavior.AddFunction(FN_KILL_CODE);
	ssteve2694715511210.VectorDirection(0,0,0);
	ssteve2694715511210.ShowVectorOfTranslation(false);
	ssteve2694715511210.CollisionType(LOOSECOLLISION);
	ssteve2694715511210.Speed((float)2.00);
	ssteve2694715511210.VariableNumber(0);
	ssteve2694715511210.ShowSpriteBoundingBox(false);
	ssteve2694715511210.ShowSpriteCollision(false);
	ssteve2694715511210.Gravity(false);
	gn->Add(ssteve2694715511210);

	Sprite svic2694918811275;
	svic2694918811275.Name("vic");
	svic2694918811275.Visible(true);
	svic2694918811275.Unused(false);
	svic2694918811275.Pause(false);
	svic2694918811275.Reflection(false);
	svic2694918811275.MainCharacter(false);
	svic2694918811275.BelongToMap("GameMap");
	svic2694918811275.ActorIndex(2);
	svic2694918811275.Animation(3);
	svic2694918811275.Frame(0);
	svic2694918811275.PegRegistered(false);
	svic2694918811275.ZOrder(0);
	svic2694918811275.MapPositionX(480);
	svic2694918811275.MapPositionY(30);
	svic2694918811275.CheckCollisionWithMap(false);
	svic2694918811275.DisplayListNumber(0);
	svic2694918811275.Friction(0);
	svic2694918811275.ActivateCollisionWithSprite(false);
	svic2694918811275.behavior.AddStateMachine(SM_ALIEN2_ANIMATION);
	svic2694918811275.behavior.AddStateMachine(SM_UP_DOWN);
	svic2694918811275.behavior.AddFunction(FN_KILL_CODE);
	svic2694918811275.VectorDirection(0,0,0);
	svic2694918811275.ShowVectorOfTranslation(false);
	svic2694918811275.CollisionType(LOOSECOLLISION);
	svic2694918811275.Speed((float)2.00);
	svic2694918811275.VariableNumber(0);
	svic2694918811275.ShowSpriteBoundingBox(false);
	svic2694918811275.ShowSpriteCollision(false);
	svic2694918811275.Gravity(false);
	gn->Add(svic2694918811275);

	Sprite sbleg2695052611318;
	sbleg2695052611318.Name("bleg");
	sbleg2695052611318.Visible(true);
	sbleg2695052611318.Unused(false);
	sbleg2695052611318.Pause(false);
	sbleg2695052611318.Reflection(false);
	sbleg2695052611318.MainCharacter(false);
	sbleg2695052611318.BelongToMap("GameMap");
	sbleg2695052611318.ActorIndex(2);
	sbleg2695052611318.Animation(6);
	sbleg2695052611318.Frame(0);
	sbleg2695052611318.PegRegistered(false);
	sbleg2695052611318.ZOrder(0);
	sbleg2695052611318.MapPositionX(600);
	sbleg2695052611318.MapPositionY(300);
	sbleg2695052611318.CheckCollisionWithMap(false);
	sbleg2695052611318.DisplayListNumber(0);
	sbleg2695052611318.Friction(0);
	sbleg2695052611318.ActivateCollisionWithSprite(false);
	sbleg2695052611318.behavior.AddFunction(FN_KILL_CODE);
	sbleg2695052611318.VectorDirection(0,0,0);
	sbleg2695052611318.ShowVectorOfTranslation(false);
	sbleg2695052611318.CollisionType(LOOSECOLLISION);
	sbleg2695052611318.Speed((float)0.00);
	sbleg2695052611318.VariableNumber(0);
	sbleg2695052611318.ShowSpriteBoundingBox(false);
	sbleg2695052611318.ShowSpriteCollision(false);
	sbleg2695052611318.Gravity(false);
	gn->Add(sbleg2695052611318);

	Sprite sidiot2695021811308;
	sidiot2695021811308.Name("idiot");
	sidiot2695021811308.Visible(true);
	sidiot2695021811308.Unused(false);
	sidiot2695021811308.Pause(false);
	sidiot2695021811308.Reflection(false);
	sidiot2695021811308.MainCharacter(false);
	sidiot2695021811308.BelongToMap("GameMap");
	sidiot2695021811308.ActorIndex(2);
	sidiot2695021811308.Animation(5);
	sidiot2695021811308.Frame(0);
	sidiot2695021811308.PegRegistered(false);
	sidiot2695021811308.ZOrder(0);
	sidiot2695021811308.MapPositionX(60);
	sidiot2695021811308.MapPositionY(360);
	sidiot2695021811308.CheckCollisionWithMap(false);
	sidiot2695021811308.DisplayListNumber(0);
	sidiot2695021811308.Friction(0);
	sidiot2695021811308.ActivateCollisionWithSprite(false);
	sidiot2695021811308.behavior.AddFunction(FN_KILL_CODE);
	sidiot2695021811308.VectorDirection(0,0,0);
	sidiot2695021811308.ShowVectorOfTranslation(false);
	sidiot2695021811308.CollisionType(LOOSECOLLISION);
	sidiot2695021811308.Speed((float)0.00);
	sidiot2695021811308.VariableNumber(0);
	sidiot2695021811308.ShowSpriteBoundingBox(false);
	sidiot2695021811308.ShowSpriteCollision(false);
	sidiot2695021811308.Gravity(false);
	gn->Add(sidiot2695021811308);

	Sprite silliminati2695173711357;
	silliminati2695173711357.Name("illiminati");
	silliminati2695173711357.Visible(true);
	silliminati2695173711357.Unused(false);
	silliminati2695173711357.Pause(false);
	silliminati2695173711357.Reflection(false);
	silliminati2695173711357.MainCharacter(false);
	silliminati2695173711357.BelongToMap("GameMap");
	silliminati2695173711357.ActorIndex(1);
	silliminati2695173711357.Animation(2);
	silliminati2695173711357.Frame(0);
	silliminati2695173711357.PegRegistered(false);
	silliminati2695173711357.ZOrder(0);
	silliminati2695173711357.MapPositionX(30);
	silliminati2695173711357.MapPositionY(540);
	silliminati2695173711357.CheckCollisionWithMap(false);
	silliminati2695173711357.DisplayListNumber(0);
	silliminati2695173711357.Friction(0);
	silliminati2695173711357.ActivateCollisionWithSprite(false);
	silliminati2695173711357.behavior.AddStateMachine(SM_ILLIMINATI_AL);
	silliminati2695173711357.behavior.AddStateMachine(SM_ALIEN1_ANIMATION);
	silliminati2695173711357.behavior.AddFunction(FN_KILL_CODE);
	silliminati2695173711357.VectorDirection(0,0,0);
	silliminati2695173711357.ShowVectorOfTranslation(false);
	silliminati2695173711357.CollisionType(LOOSECOLLISION);
	silliminati2695173711357.Speed((float)5.00);
	silliminati2695173711357.VariableNumber(0);
	silliminati2695173711357.ShowSpriteBoundingBox(false);
	silliminati2695173711357.ShowSpriteCollision(false);
	silliminati2695173711357.Gravity(false);
	gn->Add(silliminati2695173711357);

	Sprite sExit19402869698;
	sExit19402869698.Name("Exit");
	sExit19402869698.Visible(true);
	sExit19402869698.Unused(true);
	sExit19402869698.Pause(false);
	sExit19402869698.Reflection(false);
	sExit19402869698.MainCharacter(false);
	sExit19402869698.BelongToMap("GameMap");
	sExit19402869698.ActorIndex(4);
	sExit19402869698.Animation(3);
	sExit19402869698.Frame(0);
	sExit19402869698.PegRegistered(false);
	sExit19402869698.ZOrder(0);
	sExit19402869698.MapPositionX(0);
	sExit19402869698.MapPositionY(0);
	sExit19402869698.CheckCollisionWithMap(false);
	sExit19402869698.DisplayListNumber(0);
	sExit19402869698.Friction(0);
	sExit19402869698.ActivateCollisionWithSprite(false);
	sExit19402869698.VectorDirection(0,0,0);
	sExit19402869698.ShowVectorOfTranslation(false);
	sExit19402869698.CollisionType(LOOSECOLLISION);
	sExit19402869698.Speed((float)0.00);
	sExit19402869698.VariableNumber(0);
	sExit19402869698.ShowSpriteBoundingBox(false);
	sExit19402869698.ShowSpriteCollision(false);
	sExit19402869698.Gravity(false);
	gn->Add(sExit19402869698);

	Variable tScore;
	tScore.Name("Score");
	tScore.Visible(true);
	tScore.Unused(false);
	tScore.Pause(false);
	tScore.FontName("OCR A Extended");
	tScore.Width(0);
	tScore.Height(15.75);
	tScore.Weight(400);
	tScore.Color(RGB(192,192,192));
	tScore.Italic(false);
	tScore.StrikeOut(false);
	tScore.Underline(false);

	FunRect rectScore = {742,524,792,564};
	tScore.Frame(rectScore);
	tScore.ShowFrame(false);
	tScore.InWorld(true);
	tScore.ActivateOutOfViewport(true);
	tScore.BelongToMap("GameMap");
	tScore.TopMost(true);
	tScore.DisplayType(Variable::RespectingWords);
	tScore.TopMargin(0);
	tScore.LeftMargin(0);
	tScore.LineSpacing(0);
	tScore.LetterSpacing(0);
	tScore.LeadingSpaces(true);
	tScore.Effect(Variable::MummyEffect);
	tScore.Delay(0,0);
	tScore.OnlyIntegerPart(true);
	tScore = 0.000000;
	gn->Add(tScore);

	Variable tout_of;
	tout_of.Name("out_of");
	tout_of.Visible(true);
	tout_of.Unused(false);
	tout_of.Pause(false);
	tout_of.FontName("OCR A Extended");
	tout_of.Width(0);
	tout_of.Height(15.75);
	tout_of.Weight(400);
	tout_of.Color(RGB(128,128,128));
	tout_of.Italic(false);
	tout_of.StrikeOut(false);
	tout_of.Underline(false);

	FunRect rectout_of = {759,524,799,584};
	tout_of.Frame(rectout_of);
	tout_of.ShowFrame(false);
	tout_of.InWorld(true);
	tout_of.ActivateOutOfViewport(true);
	tout_of.BelongToMap("GameMap");
	tout_of.TopMost(true);
	tout_of.DisplayType(Variable::RespectingWords);
	tout_of.TopMargin(0);
	tout_of.LeftMargin(0);
	tout_of.LineSpacing(0);
	tout_of.LetterSpacing(0);
	tout_of.LeadingSpaces(true);
	tout_of.Effect(Variable::MummyEffect);
	tout_of.Delay(0,0);
	tout_of = "/5";
	gn->Add(tout_of);

	Variable tKeycards;
	tKeycards.Name("Keycards");
	tKeycards.Visible(true);
	tKeycards.Unused(false);
	tKeycards.Pause(false);
	tKeycards.FontName("OCR A Extended");
	tKeycards.Width(0);
	tKeycards.Height(12.00);
	tKeycards.Weight(400);
	tKeycards.Color(RGB(255,0,0));
	tKeycards.Italic(false);
	tKeycards.StrikeOut(false);
	tKeycards.Underline(false);

	FunRect rectKeycards = {731,548,800,592};
	tKeycards.Frame(rectKeycards);
	tKeycards.ShowFrame(false);
	tKeycards.InWorld(true);
	tKeycards.ActivateOutOfViewport(true);
	tKeycards.BelongToMap("GameMap");
	tKeycards.TopMost(true);
	tKeycards.DisplayType(Variable::RespectingWords);
	tKeycards.TopMargin(0);
	tKeycards.LeftMargin(0);
	tKeycards.LineSpacing(0);
	tKeycards.LetterSpacing(0);
	tKeycards.LeadingSpaces(true);
	tKeycards.Effect(Variable::MummyEffect);
	tKeycards.Delay(0,0);
	tKeycards = "Server Room\n";
	gn->Add(tKeycards);

	Variable ttip;
	ttip.Name("tip");
	ttip.Visible(true);
	ttip.Unused(false);
	ttip.Pause(false);
	ttip.FontName("Kozuka Gothic Pro R");
	ttip.Width(0);
	ttip.Height(15.75);
	ttip.Weight(400);
	ttip.Color(RGB(192,192,192));
	ttip.Italic(false);
	ttip.StrikeOut(false);
	ttip.Underline(false);

	FunRect recttip = {0,0,640,480};
	ttip.Frame(recttip);
	ttip.ShowFrame(false);
	ttip.InWorld(true);
	ttip.ActivateOutOfViewport(true);
	ttip.BelongToMap("GameMap");
	ttip.TopMost(true);
	ttip.DisplayType(Variable::RespectingWords);
	ttip.TopMargin(0);
	ttip.LeftMargin(0);
	ttip.LineSpacing(0);
	ttip.LetterSpacing(0);
	ttip.LeadingSpaces(true);
	ttip.Effect(Variable::MummyEffect);
	ttip.Delay(0,0);
	ttip = "Collect the Key cards to open the door, ";
	ttip.behavior.AddTimer(TIMER_DIS_TEXT,true);
	gn->Add(ttip);

	Variable ttip2;
	ttip2.Name("tip2");
	ttip2.Visible(true);
	ttip2.Unused(false);
	ttip2.Pause(false);
	ttip2.FontName("Kozuka Gothic Pro R");
	ttip2.Width(0);
	ttip2.Height(15.75);
	ttip2.Weight(400);
	ttip2.Color(RGB(192,192,192));
	ttip2.Italic(false);
	ttip2.StrikeOut(false);
	ttip2.Underline(false);

	FunRect recttip2 = {503,535,723,565};
	ttip2.Frame(recttip2);
	ttip2.ShowFrame(false);
	ttip2.InWorld(false);
	ttip2.DisplayType(Variable::RespectingWords);
	ttip2.TopMargin(0);
	ttip2.LeftMargin(0);
	ttip2.LineSpacing(0);
	ttip2.LetterSpacing(0);
	ttip2.LeadingSpaces(true);
	ttip2.Effect(Variable::MummyEffect);
	ttip2.Delay(0,0);
	ttip2 = "but avoid the infected.";
	ttip2.behavior.AddTimer(TIMER_DIS_TEXT,true);
	gn->Add(ttip2);


	FILE*f1;
	
	f1=fopen("Server Room.txt","rt");
	
	//y is # of rows & x is # of Columns
	for(int y=0;y<20;y++)
	{
		char ch;
		for(int x=0;x<24;x++)
			{
				fscanf(f1,"%c",&ch);
							if(ch=='W')
			{					
									MakeWall(x,y);
									binaryMap[x][y]=0;
							}
	
							else if(ch=='K')
			{	
									MakeKey(x,y);
									binaryMap[x][y]=1;
	
							}  
							else if(ch=='A')
			{	
									MakeDoor(x,y);
									binaryMap[x][y]=0;
	
							}  
	
							else if(ch=='S')
			{	
									MakeServer(x,y);
									binaryMap[x][y]=0;
	
							}  
							else if(ch=='B')
			{	
									MakeBed1(x,y);
									binaryMap[x][y]=0;
	
							}  
	
							 else if(ch=='X')
			{					
									MakeBed1(x,y);
									binaryMap[x][y]=0;
							}
							else if(ch=='Y')
			{					
									MakeBed2(x,y);
									binaryMap[x][y]=0;
							}
							else if(ch=='Z')
			{					
									MakeBed3(x,y);
									binaryMap[x][y]=0;
							}  
							else if(ch=='E')
			{	
									MakeExit(x,y);
									binaryMap[x][y]=0;
	
							}  
	
							else{
	
								//	MakeFood(x,y);
									binaryMap[x][y]=1;
							}
		}
		fscanf(f1,"%c",&ch);
	}
	fclose(f1);
	
	Lives=5;

};

void End_Level_1Function(GameNode *gn)
{
	

};

void Exit_Level_1Function(GameNode *gn)
{
};

void Init_Level_2Function(GameNode *gn)
{
#ifdef ERROR_MESSAGES
	pConsole->Color(RGB(0,0,0));
#endif

	gn->behavior.AddFunction(FN_RESTART);
	gn->behavior.AddFunction(FN_KILLLIVES);
	gn->WorldWidth(800);
	gn->WorldHeight(600);

	gn->FPStoMS(60);
	gn->QuitOnEscape(true);
	gn->ShowScrollingBoundingBox(false);

	gn->viewPort.ViewPortScrollingBB(0,0,640,480);

	gn->viewPort.WorldXPos(0);
	gn->viewPort.WorldYPos(0);
	gn->viewPort.MaxInflateBBLeft(0);
	gn->viewPort.MaxInflateBBTop(0);
	gn->viewPort.MaxInflateBBRight(0);
	gn->viewPort.MaxInflateBBBottom(0);

	gn->viewPort.ViewPortWidth(800);
	gn->viewPort.ViewPortHeight(600);

	FunRect rectGameMap = {0,0,800,600};
	Map mGameMap("GameMap","Background.bmp",Map::STANDARDMAP,0,0,0,true,rectGameMap);
	mGameMap.SpeedX(0.00);
	mGameMap.SpeedY(0.00);
	mGameMap.ScrollRatioX(0.00);
	mGameMap.ScrollRatioY(0.00);
	mGameMap.UseTransparency(false);
	mGameMap.Visible(true);
	mGameMap.Unused(false);
	mGameMap.Pause(false);
	mGameMap.SpacePartitionGridSize(128);
	mGameMap.ShowMapCollision(false);
	gn->Add(mGameMap);

	Sprite sWall38568661516;
	sWall38568661516.Name("Wall");
	sWall38568661516.Visible(true);
	sWall38568661516.Unused(true);
	sWall38568661516.Pause(false);
	sWall38568661516.Reflection(false);
	sWall38568661516.MainCharacter(false);
	sWall38568661516.BelongToMap("GameMap");
	sWall38568661516.ActorIndex(4);
	sWall38568661516.Animation(0);
	sWall38568661516.Frame(0);
	sWall38568661516.PegRegistered(false);
	sWall38568661516.ZOrder(0);
	sWall38568661516.MapPositionX(0);
	sWall38568661516.MapPositionY(0);
	sWall38568661516.CheckCollisionWithMap(false);
	sWall38568661516.DisplayListNumber(0);
	sWall38568661516.Friction(0);
	sWall38568661516.ActivateCollisionWithSprite(false);
	sWall38568661516.VectorDirection(0,0,0);
	sWall38568661516.ShowVectorOfTranslation(false);
	sWall38568661516.CollisionType(LOOSECOLLISION);
	sWall38568661516.Speed((float)0.00);
	sWall38568661516.VariableNumber(0);
	sWall38568661516.ShowSpriteBoundingBox(false);
	sWall38568661516.ShowSpriteCollision(false);
	sWall38568661516.Gravity(false);
	gn->Add(sWall38568661516);

	Sprite sSpaceman105470275036;
	sSpaceman105470275036.Name("Spaceman");
	sSpaceman105470275036.Visible(true);
	sSpaceman105470275036.Unused(false);
	sSpaceman105470275036.Pause(false);
	sSpaceman105470275036.Reflection(false);
	sSpaceman105470275036.MainCharacter(false);
	sSpaceman105470275036.BelongToMap("GameMap");
	sSpaceman105470275036.ActorIndex(0);
	sSpaceman105470275036.Animation(3);
	sSpaceman105470275036.Frame(1);
	sSpaceman105470275036.PegRegistered(false);
	sSpaceman105470275036.ZOrder(0);
	sSpaceman105470275036.MapPositionX(300);
	sSpaceman105470275036.MapPositionY(30);
	sSpaceman105470275036.CheckCollisionWithMap(false);
	sSpaceman105470275036.DisplayListNumber(0);
	sSpaceman105470275036.Friction(0);
	sSpaceman105470275036.ActivateCollisionWithSprite(false);
	sSpaceman105470275036.behavior.AddStateMachine(SM_MOVEMENT);
	sSpaceman105470275036.behavior.AddStateMachine(SM_SPACEMAN_ANIMATION);
	sSpaceman105470275036.behavior.AddFunction(FN_HALL1TOTESTLAB1);
	sSpaceman105470275036.behavior.AddFunction(FN_VISABLITY);
	sSpaceman105470275036.VectorDirection(0,0,0);
	sSpaceman105470275036.ShowVectorOfTranslation(false);
	sSpaceman105470275036.CollisionType(LOOSECOLLISION);
	sSpaceman105470275036.Speed((float)2.00);
	sSpaceman105470275036.VariableNumber(0);
	sSpaceman105470275036.ShowSpriteBoundingBox(false);
	sSpaceman105470275036.ShowSpriteCollision(false);
	sSpaceman105470275036.Gravity(false);
	gn->Add(sSpaceman105470275036);

	Sprite sKey1811159279895;
	sKey1811159279895.Name("Key");
	sKey1811159279895.Visible(true);
	sKey1811159279895.Unused(true);
	sKey1811159279895.Pause(false);
	sKey1811159279895.Reflection(false);
	sKey1811159279895.MainCharacter(false);
	sKey1811159279895.BelongToMap("GameMap");
	sKey1811159279895.ActorIndex(5);
	sKey1811159279895.Animation(0);
	sKey1811159279895.Frame(0);
	sKey1811159279895.PegRegistered(false);
	sKey1811159279895.ZOrder(0);
	sKey1811159279895.MapPositionX(30);
	sKey1811159279895.MapPositionY(60);
	sKey1811159279895.CheckCollisionWithMap(false);
	sKey1811159279895.DisplayListNumber(0);
	sKey1811159279895.Friction(0);
	sKey1811159279895.ActivateCollisionWithSprite(false);
	sKey1811159279895.behavior.AddFunction(FN_KEYBEHAVIORFN);
	sKey1811159279895.VectorDirection(0,0,0);
	sKey1811159279895.ShowVectorOfTranslation(false);
	sKey1811159279895.CollisionType(LOOSECOLLISION);
	sKey1811159279895.Speed((float)0.00);
	sKey1811159279895.VariableNumber(0);
	sKey1811159279895.ShowSpriteBoundingBox(false);
	sKey1811159279895.ShowSpriteCollision(false);
	sKey1811159279895.Gravity(false);
	gn->Add(sKey1811159279895);

	Sprite sVision2607752001320;
	sVision2607752001320.Name("Vision");
	sVision2607752001320.Visible(false);
	sVision2607752001320.Unused(false);
	sVision2607752001320.Pause(false);
	sVision2607752001320.Reflection(false);
	sVision2607752001320.MainCharacter(false);
	sVision2607752001320.BelongToMap("GameMap");
	sVision2607752001320.ActorIndex(6);
	sVision2607752001320.Animation(0);
	sVision2607752001320.Frame(0);
	sVision2607752001320.PegRegistered(false);
	sVision2607752001320.ZOrder(0);
	sVision2607752001320.MapPositionX(0);
	sVision2607752001320.MapPositionY(0);
	sVision2607752001320.CheckCollisionWithMap(false);
	sVision2607752001320.DisplayListNumber(3);
	sVision2607752001320.Friction(0);
	sVision2607752001320.ActivateCollisionWithSprite(false);
	sVision2607752001320.behavior.AddFunction(FN_VISIONTRACKER);
	sVision2607752001320.behavior.AddFunction(FN_DIFI);
	sVision2607752001320.VectorDirection(0,0,0);
	sVision2607752001320.ShowVectorOfTranslation(false);
	sVision2607752001320.CollisionType(LOOSECOLLISION);
	sVision2607752001320.Speed((float)5.00);
	sVision2607752001320.VariableNumber(0);
	sVision2607752001320.ShowSpriteBoundingBox(false);
	sVision2607752001320.ShowSpriteCollision(false);
	sVision2607752001320.Gravity(false);
	gn->Add(sVision2607752001320);

	Sprite sLife_Bar78305077291;
	sLife_Bar78305077291.Name("Life_Bar");
	sLife_Bar78305077291.Visible(true);
	sLife_Bar78305077291.Unused(false);
	sLife_Bar78305077291.Pause(false);
	sLife_Bar78305077291.Reflection(false);
	sLife_Bar78305077291.MainCharacter(false);
	sLife_Bar78305077291.BelongToMap("GameMap");
	sLife_Bar78305077291.ActorIndex(9);
	sLife_Bar78305077291.Animation(2);
	sLife_Bar78305077291.Frame(0);
	sLife_Bar78305077291.PegRegistered(false);
	sLife_Bar78305077291.ZOrder(0);
	sLife_Bar78305077291.MapPositionX(720);
	sLife_Bar78305077291.MapPositionY(-10);
	sLife_Bar78305077291.CheckCollisionWithMap(false);
	sLife_Bar78305077291.DisplayListNumber(4);
	sLife_Bar78305077291.Friction(0);
	sLife_Bar78305077291.ActivateCollisionWithSprite(false);
	sLife_Bar78305077291.VectorDirection(0,0,0);
	sLife_Bar78305077291.ShowVectorOfTranslation(false);
	sLife_Bar78305077291.CollisionType(LOOSECOLLISION);
	sLife_Bar78305077291.Speed((float)0.00);
	sLife_Bar78305077291.VariableNumber(0);
	sLife_Bar78305077291.ShowSpriteBoundingBox(false);
	sLife_Bar78305077291.ShowSpriteCollision(false);
	sLife_Bar78305077291.Gravity(false);
	gn->Add(sLife_Bar78305077291);

	Sprite sGreenBar116749754390;
	sGreenBar116749754390.Name("GreenBar1");
	sGreenBar116749754390.Visible(true);
	sGreenBar116749754390.Unused(false);
	sGreenBar116749754390.Pause(false);
	sGreenBar116749754390.Reflection(false);
	sGreenBar116749754390.MainCharacter(false);
	sGreenBar116749754390.BelongToMap("GameMap");
	sGreenBar116749754390.ActorIndex(9);
	sGreenBar116749754390.Animation(1);
	sGreenBar116749754390.Frame(0);
	sGreenBar116749754390.PegRegistered(false);
	sGreenBar116749754390.ZOrder(0);
	sGreenBar116749754390.MapPositionX(720);
	sGreenBar116749754390.MapPositionY(-10);
	sGreenBar116749754390.CheckCollisionWithMap(false);
	sGreenBar116749754390.DisplayListNumber(5);
	sGreenBar116749754390.Friction(0);
	sGreenBar116749754390.ActivateCollisionWithSprite(false);
	sGreenBar116749754390.VectorDirection(0,0,0);
	sGreenBar116749754390.ShowVectorOfTranslation(false);
	sGreenBar116749754390.CollisionType(LOOSECOLLISION);
	sGreenBar116749754390.Speed((float)0.00);
	sGreenBar116749754390.VariableNumber(0);
	sGreenBar116749754390.ShowSpriteBoundingBox(false);
	sGreenBar116749754390.ShowSpriteCollision(false);
	sGreenBar116749754390.Gravity(false);
	gn->Add(sGreenBar116749754390);

	Sprite sGreenBar23487165597843;
	sGreenBar23487165597843.Name("GreenBar2");
	sGreenBar23487165597843.Visible(true);
	sGreenBar23487165597843.Unused(false);
	sGreenBar23487165597843.Pause(false);
	sGreenBar23487165597843.Reflection(false);
	sGreenBar23487165597843.MainCharacter(false);
	sGreenBar23487165597843.BelongToMap("GameMap");
	sGreenBar23487165597843.ActorIndex(9);
	sGreenBar23487165597843.Animation(1);
	sGreenBar23487165597843.Frame(0);
	sGreenBar23487165597843.PegRegistered(false);
	sGreenBar23487165597843.ZOrder(0);
	sGreenBar23487165597843.MapPositionX(720);
	sGreenBar23487165597843.MapPositionY(91);
	sGreenBar23487165597843.CheckCollisionWithMap(false);
	sGreenBar23487165597843.DisplayListNumber(5);
	sGreenBar23487165597843.Friction(0);
	sGreenBar23487165597843.ActivateCollisionWithSprite(false);
	sGreenBar23487165597843.VectorDirection(0,0,0);
	sGreenBar23487165597843.ShowVectorOfTranslation(false);
	sGreenBar23487165597843.CollisionType(LOOSECOLLISION);
	sGreenBar23487165597843.Speed((float)0.00);
	sGreenBar23487165597843.VariableNumber(0);
	sGreenBar23487165597843.ShowSpriteBoundingBox(false);
	sGreenBar23487165597843.ShowSpriteCollision(false);
	sGreenBar23487165597843.Gravity(false);
	gn->Add(sGreenBar23487165597843);

	Sprite sGreenBar336183863535;
	sGreenBar336183863535.Name("GreenBar3");
	sGreenBar336183863535.Visible(true);
	sGreenBar336183863535.Unused(false);
	sGreenBar336183863535.Pause(false);
	sGreenBar336183863535.Reflection(false);
	sGreenBar336183863535.MainCharacter(false);
	sGreenBar336183863535.BelongToMap("GameMap");
	sGreenBar336183863535.ActorIndex(9);
	sGreenBar336183863535.Animation(1);
	sGreenBar336183863535.Frame(0);
	sGreenBar336183863535.PegRegistered(false);
	sGreenBar336183863535.ZOrder(0);
	sGreenBar336183863535.MapPositionX(720);
	sGreenBar336183863535.MapPositionY(192);
	sGreenBar336183863535.CheckCollisionWithMap(false);
	sGreenBar336183863535.DisplayListNumber(5);
	sGreenBar336183863535.Friction(0);
	sGreenBar336183863535.ActivateCollisionWithSprite(false);
	sGreenBar336183863535.VectorDirection(0,0,0);
	sGreenBar336183863535.ShowVectorOfTranslation(false);
	sGreenBar336183863535.CollisionType(LOOSECOLLISION);
	sGreenBar336183863535.Speed((float)0.00);
	sGreenBar336183863535.VariableNumber(0);
	sGreenBar336183863535.ShowSpriteBoundingBox(false);
	sGreenBar336183863535.ShowSpriteCollision(false);
	sGreenBar336183863535.Gravity(false);
	gn->Add(sGreenBar336183863535);

	Sprite sGreenBar435235313225;
	sGreenBar435235313225.Name("GreenBar4");
	sGreenBar435235313225.Visible(true);
	sGreenBar435235313225.Unused(false);
	sGreenBar435235313225.Pause(false);
	sGreenBar435235313225.Reflection(false);
	sGreenBar435235313225.MainCharacter(false);
	sGreenBar435235313225.BelongToMap("GameMap");
	sGreenBar435235313225.ActorIndex(9);
	sGreenBar435235313225.Animation(1);
	sGreenBar435235313225.Frame(0);
	sGreenBar435235313225.PegRegistered(false);
	sGreenBar435235313225.ZOrder(0);
	sGreenBar435235313225.MapPositionX(720);
	sGreenBar435235313225.MapPositionY(293);
	sGreenBar435235313225.CheckCollisionWithMap(false);
	sGreenBar435235313225.DisplayListNumber(5);
	sGreenBar435235313225.Friction(0);
	sGreenBar435235313225.ActivateCollisionWithSprite(false);
	sGreenBar435235313225.VectorDirection(0,0,0);
	sGreenBar435235313225.ShowVectorOfTranslation(false);
	sGreenBar435235313225.CollisionType(LOOSECOLLISION);
	sGreenBar435235313225.Speed((float)0.00);
	sGreenBar435235313225.VariableNumber(0);
	sGreenBar435235313225.ShowSpriteBoundingBox(false);
	sGreenBar435235313225.ShowSpriteCollision(false);
	sGreenBar435235313225.Gravity(false);
	gn->Add(sGreenBar435235313225);

	Sprite sGreenBar535143113195;
	sGreenBar535143113195.Name("GreenBar5");
	sGreenBar535143113195.Visible(true);
	sGreenBar535143113195.Unused(false);
	sGreenBar535143113195.Pause(false);
	sGreenBar535143113195.Reflection(false);
	sGreenBar535143113195.MainCharacter(false);
	sGreenBar535143113195.BelongToMap("GameMap");
	sGreenBar535143113195.ActorIndex(9);
	sGreenBar535143113195.Animation(1);
	sGreenBar535143113195.Frame(0);
	sGreenBar535143113195.PegRegistered(false);
	sGreenBar535143113195.ZOrder(0);
	sGreenBar535143113195.MapPositionX(720);
	sGreenBar535143113195.MapPositionY(394);
	sGreenBar535143113195.CheckCollisionWithMap(false);
	sGreenBar535143113195.DisplayListNumber(5);
	sGreenBar535143113195.Friction(0);
	sGreenBar535143113195.ActivateCollisionWithSprite(false);
	sGreenBar535143113195.VectorDirection(0,0,0);
	sGreenBar535143113195.ShowVectorOfTranslation(false);
	sGreenBar535143113195.CollisionType(LOOSECOLLISION);
	sGreenBar535143113195.Speed((float)0.00);
	sGreenBar535143113195.VariableNumber(0);
	sGreenBar535143113195.ShowSpriteBoundingBox(false);
	sGreenBar535143113195.ShowSpriteCollision(false);
	sGreenBar535143113195.Gravity(false);
	gn->Add(sGreenBar535143113195);

	Sprite sStatic46161056791;
	sStatic46161056791.Name("Static");
	sStatic46161056791.Visible(false);
	sStatic46161056791.Unused(false);
	sStatic46161056791.Pause(false);
	sStatic46161056791.Reflection(false);
	sStatic46161056791.MainCharacter(false);
	sStatic46161056791.BelongToMap("GameMap");
	sStatic46161056791.ActorIndex(7);
	sStatic46161056791.Animation(0);
	sStatic46161056791.Frame(0);
	sStatic46161056791.PegRegistered(false);
	sStatic46161056791.ZOrder(0);
	sStatic46161056791.MapPositionX(0);
	sStatic46161056791.MapPositionY(0);
	sStatic46161056791.CheckCollisionWithMap(false);
	sStatic46161056791.DisplayListNumber(6);
	sStatic46161056791.Friction(0);
	sStatic46161056791.ActivateCollisionWithSprite(false);
	sStatic46161056791.VectorDirection(0,0,0);
	sStatic46161056791.ShowVectorOfTranslation(false);
	sStatic46161056791.CollisionType(LOOSECOLLISION);
	sStatic46161056791.Speed((float)0.00);
	sStatic46161056791.VariableNumber(0);
	sStatic46161056791.ShowSpriteBoundingBox(false);
	sStatic46161056791.ShowSpriteCollision(false);
	sStatic46161056791.Gravity(false);
	gn->Add(sStatic46161056791);

	Sprite sServer50513774912;
	sServer50513774912.Name("Server");
	sServer50513774912.Visible(true);
	sServer50513774912.Unused(true);
	sServer50513774912.Pause(false);
	sServer50513774912.Reflection(false);
	sServer50513774912.MainCharacter(false);
	sServer50513774912.BelongToMap("GameMap");
	sServer50513774912.ActorIndex(4);
	sServer50513774912.Animation(1);
	sServer50513774912.Frame(0);
	sServer50513774912.PegRegistered(false);
	sServer50513774912.ZOrder(0);
	sServer50513774912.MapPositionX(0);
	sServer50513774912.MapPositionY(0);
	sServer50513774912.CheckCollisionWithMap(false);
	sServer50513774912.DisplayListNumber(0);
	sServer50513774912.Friction(0);
	sServer50513774912.ActivateCollisionWithSprite(false);
	sServer50513774912.VectorDirection(0,0,0);
	sServer50513774912.ShowVectorOfTranslation(false);
	sServer50513774912.CollisionType(LOOSECOLLISION);
	sServer50513774912.Speed((float)0.00);
	sServer50513774912.VariableNumber(0);
	sServer50513774912.ShowSpriteBoundingBox(false);
	sServer50513774912.ShowSpriteCollision(false);
	sServer50513774912.Gravity(false);
	gn->Add(sServer50513774912);

	Sprite sDoor63475353935;
	sDoor63475353935.Name("Door");
	sDoor63475353935.Visible(true);
	sDoor63475353935.Unused(true);
	sDoor63475353935.Pause(false);
	sDoor63475353935.Reflection(false);
	sDoor63475353935.MainCharacter(false);
	sDoor63475353935.BelongToMap("GameMap");
	sDoor63475353935.ActorIndex(4);
	sDoor63475353935.Animation(2);
	sDoor63475353935.Frame(0);
	sDoor63475353935.PegRegistered(false);
	sDoor63475353935.ZOrder(0);
	sDoor63475353935.MapPositionX(0);
	sDoor63475353935.MapPositionY(0);
	sDoor63475353935.CheckCollisionWithMap(false);
	sDoor63475353935.DisplayListNumber(0);
	sDoor63475353935.Friction(0);
	sDoor63475353935.ActivateCollisionWithSprite(false);
	sDoor63475353935.VectorDirection(0,0,0);
	sDoor63475353935.ShowVectorOfTranslation(false);
	sDoor63475353935.CollisionType(LOOSECOLLISION);
	sDoor63475353935.Speed((float)0.00);
	sDoor63475353935.VariableNumber(0);
	sDoor63475353935.ShowSpriteBoundingBox(false);
	sDoor63475353935.ShowSpriteCollision(false);
	sDoor63475353935.Gravity(false);
	gn->Add(sDoor63475353935);

	Sprite srue105966205196;
	srue105966205196.Name("rue");
	srue105966205196.Visible(true);
	srue105966205196.Unused(false);
	srue105966205196.Pause(false);
	srue105966205196.Reflection(false);
	srue105966205196.MainCharacter(false);
	srue105966205196.BelongToMap("GameMap");
	srue105966205196.ActorIndex(2);
	srue105966205196.Animation(5);
	srue105966205196.Frame(0);
	srue105966205196.PegRegistered(false);
	srue105966205196.ZOrder(0);
	srue105966205196.MapPositionX(150);
	srue105966205196.MapPositionY(30);
	srue105966205196.CheckCollisionWithMap(false);
	srue105966205196.DisplayListNumber(0);
	srue105966205196.Friction(0);
	srue105966205196.ActivateCollisionWithSprite(false);
	srue105966205196.behavior.AddStateMachine(SM_UP_DOWN);
	srue105966205196.behavior.AddStateMachine(SM_ALIEN2_ANIMATION);
	srue105966205196.behavior.AddFunction(FN_KILL_CODE_L2);
	srue105966205196.VectorDirection(0,0,0);
	srue105966205196.ShowVectorOfTranslation(false);
	srue105966205196.CollisionType(LOOSECOLLISION);
	srue105966205196.Speed((float)1.00);
	srue105966205196.VariableNumber(0);
	srue105966205196.ShowSpriteBoundingBox(false);
	srue105966205196.ShowSpriteCollision(false);
	srue105966205196.Gravity(false);
	gn->Add(srue105966205196);

	Sprite ssteve106069625232;
	ssteve106069625232.Name("steve");
	ssteve106069625232.Visible(true);
	ssteve106069625232.Unused(false);
	ssteve106069625232.Pause(false);
	ssteve106069625232.Reflection(false);
	ssteve106069625232.MainCharacter(false);
	ssteve106069625232.BelongToMap("GameMap");
	ssteve106069625232.ActorIndex(2);
	ssteve106069625232.Animation(6);
	ssteve106069625232.Frame(0);
	ssteve106069625232.PegRegistered(false);
	ssteve106069625232.ZOrder(0);
	ssteve106069625232.MapPositionX(30);
	ssteve106069625232.MapPositionY(240);
	ssteve106069625232.CheckCollisionWithMap(false);
	ssteve106069625232.DisplayListNumber(0);
	ssteve106069625232.Friction(0);
	ssteve106069625232.ActivateCollisionWithSprite(false);
	ssteve106069625232.behavior.AddFunction(FN_KILL_CODE_L2);
	ssteve106069625232.VectorDirection(0,0,0);
	ssteve106069625232.ShowVectorOfTranslation(false);
	ssteve106069625232.CollisionType(LOOSECOLLISION);
	ssteve106069625232.Speed((float)0.00);
	ssteve106069625232.VariableNumber(0);
	ssteve106069625232.ShowSpriteBoundingBox(false);
	ssteve106069625232.ShowSpriteCollision(false);
	ssteve106069625232.Gravity(false);
	gn->Add(ssteve106069625232);

	Sprite smarc106197855275;
	smarc106197855275.Name("marc");
	smarc106197855275.Visible(true);
	smarc106197855275.Unused(false);
	smarc106197855275.Pause(false);
	smarc106197855275.Reflection(false);
	smarc106197855275.MainCharacter(false);
	smarc106197855275.BelongToMap("GameMap");
	smarc106197855275.ActorIndex(2);
	smarc106197855275.Animation(6);
	smarc106197855275.Frame(0);
	smarc106197855275.PegRegistered(false);
	smarc106197855275.ZOrder(0);
	smarc106197855275.MapPositionX(300);
	smarc106197855275.MapPositionY(510);
	smarc106197855275.CheckCollisionWithMap(false);
	smarc106197855275.DisplayListNumber(0);
	smarc106197855275.Friction(0);
	smarc106197855275.ActivateCollisionWithSprite(false);
	smarc106197855275.behavior.AddFunction(FN_KILL_CODE_L2);
	smarc106197855275.VectorDirection(0,0,0);
	smarc106197855275.ShowVectorOfTranslation(false);
	smarc106197855275.CollisionType(LOOSECOLLISION);
	smarc106197855275.Speed((float)0.00);
	smarc106197855275.VariableNumber(0);
	smarc106197855275.ShowSpriteBoundingBox(false);
	smarc106197855275.ShowSpriteCollision(false);
	smarc106197855275.Gravity(false);
	gn->Add(smarc106197855275);

	Sprite sjak106316675311;
	sjak106316675311.Name("jak");
	sjak106316675311.Visible(true);
	sjak106316675311.Unused(false);
	sjak106316675311.Pause(false);
	sjak106316675311.Reflection(false);
	sjak106316675311.MainCharacter(false);
	sjak106316675311.BelongToMap("GameMap");
	sjak106316675311.ActorIndex(2);
	sjak106316675311.Animation(5);
	sjak106316675311.Frame(0);
	sjak106316675311.PegRegistered(false);
	sjak106316675311.ZOrder(0);
	sjak106316675311.MapPositionX(630);
	sjak106316675311.MapPositionY(450);
	sjak106316675311.CheckCollisionWithMap(false);
	sjak106316675311.DisplayListNumber(0);
	sjak106316675311.Friction(0);
	sjak106316675311.ActivateCollisionWithSprite(false);
	sjak106316675311.behavior.AddFunction(FN_KILL_CODE_L2);
	sjak106316675311.VectorDirection(0,0,0);
	sjak106316675311.ShowVectorOfTranslation(false);
	sjak106316675311.CollisionType(LOOSECOLLISION);
	sjak106316675311.Speed((float)0.00);
	sjak106316675311.VariableNumber(0);
	sjak106316675311.ShowSpriteBoundingBox(false);
	sjak106316675311.ShowSpriteCollision(false);
	sjak106316675311.Gravity(false);
	gn->Add(sjak106316675311);

	Sprite sjef106485555366;
	sjef106485555366.Name("jef");
	sjef106485555366.Visible(true);
	sjef106485555366.Unused(false);
	sjef106485555366.Pause(false);
	sjef106485555366.Reflection(false);
	sjef106485555366.MainCharacter(false);
	sjef106485555366.BelongToMap("GameMap");
	sjef106485555366.ActorIndex(2);
	sjef106485555366.Animation(7);
	sjef106485555366.Frame(0);
	sjef106485555366.PegRegistered(false);
	sjef106485555366.ZOrder(0);
	sjef106485555366.MapPositionX(480);
	sjef106485555366.MapPositionY(270);
	sjef106485555366.CheckCollisionWithMap(false);
	sjef106485555366.DisplayListNumber(0);
	sjef106485555366.Friction(0);
	sjef106485555366.ActivateCollisionWithSprite(false);
	sjef106485555366.behavior.AddFunction(FN_KILL_CODE_L2);
	sjef106485555366.VectorDirection(0,0,0);
	sjef106485555366.ShowVectorOfTranslation(false);
	sjef106485555366.CollisionType(LOOSECOLLISION);
	sjef106485555366.Speed((float)0.00);
	sjef106485555366.VariableNumber(0);
	sjef106485555366.ShowSpriteBoundingBox(false);
	sjef106485555366.ShowSpriteCollision(false);
	sjef106485555366.Gravity(false);
	gn->Add(sjef106485555366);

	Sprite sFred106606185405;
	sFred106606185405.Name("Fred");
	sFred106606185405.Visible(true);
	sFred106606185405.Unused(false);
	sFred106606185405.Pause(false);
	sFred106606185405.Reflection(false);
	sFred106606185405.MainCharacter(false);
	sFred106606185405.BelongToMap("GameMap");
	sFred106606185405.ActorIndex(2);
	sFred106606185405.Animation(3);
	sFred106606185405.Frame(0);
	sFred106606185405.PegRegistered(false);
	sFred106606185405.ZOrder(0);
	sFred106606185405.MapPositionX(270);
	sFred106606185405.MapPositionY(440);
	sFred106606185405.CheckCollisionWithMap(false);
	sFred106606185405.DisplayListNumber(0);
	sFred106606185405.Friction(0);
	sFred106606185405.ActivateCollisionWithSprite(false);
	sFred106606185405.behavior.AddStateMachine(SM_FRED_AL);
	sFred106606185405.behavior.AddStateMachine(SM_ALIEN2_ANIMATION);
	sFred106606185405.behavior.AddFunction(FN_KILL_CODE_L2);
	sFred106606185405.VectorDirection(0,0,0);
	sFred106606185405.ShowVectorOfTranslation(false);
	sFred106606185405.CollisionType(LOOSECOLLISION);
	sFred106606185405.Speed((float)1.00);
	sFred106606185405.VariableNumber(0);
	sFred106606185405.ShowSpriteBoundingBox(false);
	sFred106606185405.ShowSpriteCollision(false);
	sFred106606185405.Gravity(false);
	gn->Add(sFred106606185405);

	Sprite sExit18579909430;
	sExit18579909430.Name("Exit");
	sExit18579909430.Visible(true);
	sExit18579909430.Unused(true);
	sExit18579909430.Pause(false);
	sExit18579909430.Reflection(false);
	sExit18579909430.MainCharacter(false);
	sExit18579909430.BelongToMap("GameMap");
	sExit18579909430.ActorIndex(4);
	sExit18579909430.Animation(3);
	sExit18579909430.Frame(0);
	sExit18579909430.PegRegistered(false);
	sExit18579909430.ZOrder(0);
	sExit18579909430.MapPositionX(0);
	sExit18579909430.MapPositionY(0);
	sExit18579909430.CheckCollisionWithMap(false);
	sExit18579909430.DisplayListNumber(0);
	sExit18579909430.Friction(0);
	sExit18579909430.ActivateCollisionWithSprite(false);
	sExit18579909430.VectorDirection(0,0,0);
	sExit18579909430.ShowVectorOfTranslation(false);
	sExit18579909430.CollisionType(LOOSECOLLISION);
	sExit18579909430.Speed((float)0.00);
	sExit18579909430.VariableNumber(0);
	sExit18579909430.ShowSpriteBoundingBox(false);
	sExit18579909430.ShowSpriteCollision(false);
	sExit18579909430.Gravity(false);
	gn->Add(sExit18579909430);

	Sprite sDrugs106741855451;
	sDrugs106741855451.Name("Drugs");
	sDrugs106741855451.Visible(true);
	sDrugs106741855451.Unused(false);
	sDrugs106741855451.Pause(false);
	sDrugs106741855451.Reflection(false);
	sDrugs106741855451.MainCharacter(false);
	sDrugs106741855451.BelongToMap("GameMap");
	sDrugs106741855451.ActorIndex(1);
	sDrugs106741855451.Animation(0);
	sDrugs106741855451.Frame(0);
	sDrugs106741855451.PegRegistered(false);
	sDrugs106741855451.ZOrder(0);
	sDrugs106741855451.MapPositionX(660);
	sDrugs106741855451.MapPositionY(30);
	sDrugs106741855451.CheckCollisionWithMap(false);
	sDrugs106741855451.DisplayListNumber(0);
	sDrugs106741855451.Friction(0);
	sDrugs106741855451.ActivateCollisionWithSprite(false);
	sDrugs106741855451.behavior.AddStateMachine(SM_DRUGS_AI);
	sDrugs106741855451.behavior.AddStateMachine(SM_ALIEN1_ANIMATION);
	sDrugs106741855451.behavior.AddFunction(FN_KILL_CODE_L2);
	sDrugs106741855451.VectorDirection(0,0,0);
	sDrugs106741855451.ShowVectorOfTranslation(false);
	sDrugs106741855451.CollisionType(LOOSECOLLISION);
	sDrugs106741855451.Speed((float)5.00);
	sDrugs106741855451.VariableNumber(0);
	sDrugs106741855451.ShowSpriteBoundingBox(false);
	sDrugs106741855451.ShowSpriteCollision(false);
	sDrugs106741855451.Gravity(false);
	gn->Add(sDrugs106741855451);

	Variable tScore;
	tScore.Name("Score");
	tScore.Visible(true);
	tScore.Unused(false);
	tScore.Pause(false);
	tScore.FontName("OCR A Extended");
	tScore.Width(0);
	tScore.Height(15.75);
	tScore.Weight(400);
	tScore.Color(RGB(192,192,192));
	tScore.Italic(false);
	tScore.StrikeOut(false);
	tScore.Underline(false);

	FunRect rectScore = {742,524,792,564};
	tScore.Frame(rectScore);
	tScore.ShowFrame(false);
	tScore.InWorld(true);
	tScore.ActivateOutOfViewport(true);
	tScore.BelongToMap("GameMap");
	tScore.TopMost(true);
	tScore.DisplayType(Variable::RespectingWords);
	tScore.TopMargin(0);
	tScore.LeftMargin(0);
	tScore.LineSpacing(0);
	tScore.LetterSpacing(0);
	tScore.LeadingSpaces(true);
	tScore.Effect(Variable::MummyEffect);
	tScore.Delay(0,0);
	tScore.OnlyIntegerPart(true);
	tScore = 0.000000;
	gn->Add(tScore);

	Variable tout_of;
	tout_of.Name("out_of");
	tout_of.Visible(true);
	tout_of.Unused(false);
	tout_of.Pause(false);
	tout_of.FontName("OCR A Extended");
	tout_of.Width(0);
	tout_of.Height(15.75);
	tout_of.Weight(400);
	tout_of.Color(RGB(128,128,128));
	tout_of.Italic(false);
	tout_of.StrikeOut(false);
	tout_of.Underline(false);

	FunRect rectout_of = {759,524,799,584};
	tout_of.Frame(rectout_of);
	tout_of.ShowFrame(false);
	tout_of.InWorld(true);
	tout_of.ActivateOutOfViewport(true);
	tout_of.BelongToMap("GameMap");
	tout_of.TopMost(true);
	tout_of.DisplayType(Variable::RespectingWords);
	tout_of.TopMargin(0);
	tout_of.LeftMargin(0);
	tout_of.LineSpacing(0);
	tout_of.LetterSpacing(0);
	tout_of.LeadingSpaces(true);
	tout_of.Effect(Variable::MummyEffect);
	tout_of.Delay(0,0);
	tout_of = "/5";
	gn->Add(tout_of);

	Variable tKeycards;
	tKeycards.Name("Keycards");
	tKeycards.Visible(true);
	tKeycards.Unused(false);
	tKeycards.Pause(false);
	tKeycards.FontName("OCR A Extended");
	tKeycards.Width(0);
	tKeycards.Height(12.00);
	tKeycards.Weight(400);
	tKeycards.Color(RGB(255,0,0));
	tKeycards.Italic(false);
	tKeycards.StrikeOut(false);
	tKeycards.Underline(false);

	FunRect rectKeycards = {731,548,800,592};
	tKeycards.Frame(rectKeycards);
	tKeycards.ShowFrame(false);
	tKeycards.InWorld(true);
	tKeycards.ActivateOutOfViewport(true);
	tKeycards.BelongToMap("GameMap");
	tKeycards.TopMost(true);
	tKeycards.DisplayType(Variable::RespectingWords);
	tKeycards.TopMargin(0);
	tKeycards.LeftMargin(0);
	tKeycards.LineSpacing(0);
	tKeycards.LetterSpacing(0);
	tKeycards.LeadingSpaces(true);
	tKeycards.Effect(Variable::MummyEffect);
	tKeycards.Delay(0,0);
	tKeycards = "Hall 1\n";
	gn->Add(tKeycards);


	FILE*f1;
	
	f1=fopen("Hall 1.txt","rt");
	
	//y is # of rows & x is # of Columns
	for(int y=0;y<20;y++)
	{
		char ch;
		for(int x=0;x<24;x++)
			{
				fscanf(f1,"%c",&ch);
							if(ch=='W')
			{					
									MakeWall(x,y);
									binaryMap[x][y]=0;
							}
	
							else if(ch=='K')
			{	
									MakeKey(x,y);
									binaryMap[x][y]=1;
	
							}  
							else if(ch=='A')
			{	
									MakeDoor(x,y);
									binaryMap[x][y]=0;
	
							}  
	
							else if(ch=='S')
			{	
									MakeServer(x,y);
									binaryMap[x][y]=0;
	
							}  
							else if(ch=='B')
			{	
									MakeBed1(x,y);
									binaryMap[x][y]=0;
	
							}  
							 else if(ch=='X')
			{					
									MakeBed1(x,y);
									binaryMap[x][y]=0;
							}
							else if(ch=='Y')
			{					
									MakeBed2(x,y);
									binaryMap[x][y]=0;
							}
							else if(ch=='Z')
			{					
									MakeBed3(x,y);
									binaryMap[x][y]=0;
							} 
							else if(ch=='E')
			{	
									MakeExit(x,y);
									binaryMap[x][y]=0;
	
							}   
							else{
	
								//	MakeFood(x,y);
									binaryMap[x][y]=1;
							}
		}
		fscanf(f1,"%c",&ch);
	}
	fclose(f1);

};

void End_Level_2Function(GameNode *gn)
{
	
	

};

void Exit_Level_2Function(GameNode *gn)
{
};

void Init_Level_3Function(GameNode *gn)
{
#ifdef ERROR_MESSAGES
	pConsole->Color(RGB(0,0,0));
#endif

	gn->behavior.AddFunction(FN_RESTART);
	gn->behavior.AddFunction(FN_KILLLIVES);
	gn->WorldWidth(800);
	gn->WorldHeight(600);

	gn->FPStoMS(60);
	gn->QuitOnEscape(true);
	gn->ShowScrollingBoundingBox(false);

	gn->viewPort.ViewPortScrollingBB(0,0,640,480);

	gn->viewPort.WorldXPos(0);
	gn->viewPort.WorldYPos(0);
	gn->viewPort.MaxInflateBBLeft(0);
	gn->viewPort.MaxInflateBBTop(0);
	gn->viewPort.MaxInflateBBRight(0);
	gn->viewPort.MaxInflateBBBottom(0);

	gn->viewPort.ViewPortWidth(800);
	gn->viewPort.ViewPortHeight(600);

	FunRect rectGameMap = {0,0,800,600};
	Map mGameMap("GameMap","Background.bmp",Map::STANDARDMAP,0,0,0,true,rectGameMap);
	mGameMap.SpeedX(0.00);
	mGameMap.SpeedY(0.00);
	mGameMap.ScrollRatioX(0.00);
	mGameMap.ScrollRatioY(0.00);
	mGameMap.UseTransparency(false);
	mGameMap.Visible(true);
	mGameMap.Unused(false);
	mGameMap.Pause(false);
	mGameMap.SpacePartitionGridSize(128);
	mGameMap.ShowMapCollision(false);
	gn->Add(mGameMap);

	Sprite sWall38568661516;
	sWall38568661516.Name("Wall");
	sWall38568661516.Visible(true);
	sWall38568661516.Unused(true);
	sWall38568661516.Pause(false);
	sWall38568661516.Reflection(false);
	sWall38568661516.MainCharacter(false);
	sWall38568661516.BelongToMap("GameMap");
	sWall38568661516.ActorIndex(4);
	sWall38568661516.Animation(0);
	sWall38568661516.Frame(0);
	sWall38568661516.PegRegistered(false);
	sWall38568661516.ZOrder(0);
	sWall38568661516.MapPositionX(0);
	sWall38568661516.MapPositionY(0);
	sWall38568661516.CheckCollisionWithMap(false);
	sWall38568661516.DisplayListNumber(0);
	sWall38568661516.Friction(0);
	sWall38568661516.ActivateCollisionWithSprite(false);
	sWall38568661516.VectorDirection(0,0,0);
	sWall38568661516.ShowVectorOfTranslation(false);
	sWall38568661516.CollisionType(LOOSECOLLISION);
	sWall38568661516.Speed((float)0.00);
	sWall38568661516.VariableNumber(0);
	sWall38568661516.ShowSpriteBoundingBox(false);
	sWall38568661516.ShowSpriteCollision(false);
	sWall38568661516.Gravity(false);
	gn->Add(sWall38568661516);

	Sprite sSpaceman126177951799;
	sSpaceman126177951799.Name("Spaceman");
	sSpaceman126177951799.Visible(true);
	sSpaceman126177951799.Unused(false);
	sSpaceman126177951799.Pause(false);
	sSpaceman126177951799.Reflection(false);
	sSpaceman126177951799.MainCharacter(false);
	sSpaceman126177951799.BelongToMap("GameMap");
	sSpaceman126177951799.ActorIndex(0);
	sSpaceman126177951799.Animation(3);
	sSpaceman126177951799.Frame(1);
	sSpaceman126177951799.PegRegistered(false);
	sSpaceman126177951799.ZOrder(0);
	sSpaceman126177951799.MapPositionX(30);
	sSpaceman126177951799.MapPositionY(90);
	sSpaceman126177951799.CheckCollisionWithMap(false);
	sSpaceman126177951799.DisplayListNumber(0);
	sSpaceman126177951799.Friction(0);
	sSpaceman126177951799.ActivateCollisionWithSprite(false);
	sSpaceman126177951799.behavior.AddStateMachine(SM_MOVEMENT);
	sSpaceman126177951799.behavior.AddStateMachine(SM_SPACEMAN_ANIMATION);
	sSpaceman126177951799.behavior.AddFunction(FN_TESTLAB1TOTESTLAB2);
	sSpaceman126177951799.VectorDirection(0,0,0);
	sSpaceman126177951799.ShowVectorOfTranslation(false);
	sSpaceman126177951799.CollisionType(LOOSECOLLISION);
	sSpaceman126177951799.Speed((float)2.00);
	sSpaceman126177951799.VariableNumber(0);
	sSpaceman126177951799.ShowSpriteBoundingBox(false);
	sSpaceman126177951799.ShowSpriteCollision(false);
	sSpaceman126177951799.Gravity(false);
	gn->Add(sSpaceman126177951799);

	Sprite sKey1811159279895;
	sKey1811159279895.Name("Key");
	sKey1811159279895.Visible(true);
	sKey1811159279895.Unused(true);
	sKey1811159279895.Pause(false);
	sKey1811159279895.Reflection(false);
	sKey1811159279895.MainCharacter(false);
	sKey1811159279895.BelongToMap("GameMap");
	sKey1811159279895.ActorIndex(5);
	sKey1811159279895.Animation(0);
	sKey1811159279895.Frame(0);
	sKey1811159279895.PegRegistered(false);
	sKey1811159279895.ZOrder(0);
	sKey1811159279895.MapPositionX(30);
	sKey1811159279895.MapPositionY(60);
	sKey1811159279895.CheckCollisionWithMap(false);
	sKey1811159279895.DisplayListNumber(0);
	sKey1811159279895.Friction(0);
	sKey1811159279895.ActivateCollisionWithSprite(false);
	sKey1811159279895.behavior.AddFunction(FN_KEYBEHAVIORFN);
	sKey1811159279895.VectorDirection(0,0,0);
	sKey1811159279895.ShowVectorOfTranslation(false);
	sKey1811159279895.CollisionType(LOOSECOLLISION);
	sKey1811159279895.Speed((float)0.00);
	sKey1811159279895.VariableNumber(0);
	sKey1811159279895.ShowSpriteBoundingBox(false);
	sKey1811159279895.ShowSpriteCollision(false);
	sKey1811159279895.Gravity(false);
	gn->Add(sKey1811159279895);

	Sprite sVision2607752001320;
	sVision2607752001320.Name("Vision");
	sVision2607752001320.Visible(false);
	sVision2607752001320.Unused(false);
	sVision2607752001320.Pause(false);
	sVision2607752001320.Reflection(false);
	sVision2607752001320.MainCharacter(false);
	sVision2607752001320.BelongToMap("GameMap");
	sVision2607752001320.ActorIndex(6);
	sVision2607752001320.Animation(0);
	sVision2607752001320.Frame(0);
	sVision2607752001320.PegRegistered(false);
	sVision2607752001320.ZOrder(0);
	sVision2607752001320.MapPositionX(0);
	sVision2607752001320.MapPositionY(0);
	sVision2607752001320.CheckCollisionWithMap(false);
	sVision2607752001320.DisplayListNumber(3);
	sVision2607752001320.Friction(0);
	sVision2607752001320.ActivateCollisionWithSprite(false);
	sVision2607752001320.behavior.AddFunction(FN_VISIONTRACKER);
	sVision2607752001320.behavior.AddFunction(FN_DIFI);
	sVision2607752001320.VectorDirection(0,0,0);
	sVision2607752001320.ShowVectorOfTranslation(false);
	sVision2607752001320.CollisionType(LOOSECOLLISION);
	sVision2607752001320.Speed((float)5.00);
	sVision2607752001320.VariableNumber(0);
	sVision2607752001320.ShowSpriteBoundingBox(false);
	sVision2607752001320.ShowSpriteCollision(false);
	sVision2607752001320.Gravity(false);
	gn->Add(sVision2607752001320);

	Sprite sLife_Bar78305077291;
	sLife_Bar78305077291.Name("Life_Bar");
	sLife_Bar78305077291.Visible(true);
	sLife_Bar78305077291.Unused(false);
	sLife_Bar78305077291.Pause(false);
	sLife_Bar78305077291.Reflection(false);
	sLife_Bar78305077291.MainCharacter(false);
	sLife_Bar78305077291.BelongToMap("GameMap");
	sLife_Bar78305077291.ActorIndex(9);
	sLife_Bar78305077291.Animation(2);
	sLife_Bar78305077291.Frame(0);
	sLife_Bar78305077291.PegRegistered(false);
	sLife_Bar78305077291.ZOrder(0);
	sLife_Bar78305077291.MapPositionX(720);
	sLife_Bar78305077291.MapPositionY(-10);
	sLife_Bar78305077291.CheckCollisionWithMap(false);
	sLife_Bar78305077291.DisplayListNumber(4);
	sLife_Bar78305077291.Friction(0);
	sLife_Bar78305077291.ActivateCollisionWithSprite(false);
	sLife_Bar78305077291.VectorDirection(0,0,0);
	sLife_Bar78305077291.ShowVectorOfTranslation(false);
	sLife_Bar78305077291.CollisionType(LOOSECOLLISION);
	sLife_Bar78305077291.Speed((float)0.00);
	sLife_Bar78305077291.VariableNumber(0);
	sLife_Bar78305077291.ShowSpriteBoundingBox(false);
	sLife_Bar78305077291.ShowSpriteCollision(false);
	sLife_Bar78305077291.Gravity(false);
	gn->Add(sLife_Bar78305077291);

	Sprite sGreenBar116749754390;
	sGreenBar116749754390.Name("GreenBar1");
	sGreenBar116749754390.Visible(true);
	sGreenBar116749754390.Unused(false);
	sGreenBar116749754390.Pause(false);
	sGreenBar116749754390.Reflection(false);
	sGreenBar116749754390.MainCharacter(false);
	sGreenBar116749754390.BelongToMap("GameMap");
	sGreenBar116749754390.ActorIndex(9);
	sGreenBar116749754390.Animation(1);
	sGreenBar116749754390.Frame(0);
	sGreenBar116749754390.PegRegistered(false);
	sGreenBar116749754390.ZOrder(0);
	sGreenBar116749754390.MapPositionX(720);
	sGreenBar116749754390.MapPositionY(-10);
	sGreenBar116749754390.CheckCollisionWithMap(false);
	sGreenBar116749754390.DisplayListNumber(5);
	sGreenBar116749754390.Friction(0);
	sGreenBar116749754390.ActivateCollisionWithSprite(false);
	sGreenBar116749754390.VectorDirection(0,0,0);
	sGreenBar116749754390.ShowVectorOfTranslation(false);
	sGreenBar116749754390.CollisionType(LOOSECOLLISION);
	sGreenBar116749754390.Speed((float)0.00);
	sGreenBar116749754390.VariableNumber(0);
	sGreenBar116749754390.ShowSpriteBoundingBox(false);
	sGreenBar116749754390.ShowSpriteCollision(false);
	sGreenBar116749754390.Gravity(false);
	gn->Add(sGreenBar116749754390);

	Sprite sGreenBar234880513107;
	sGreenBar234880513107.Name("GreenBar2");
	sGreenBar234880513107.Visible(true);
	sGreenBar234880513107.Unused(false);
	sGreenBar234880513107.Pause(false);
	sGreenBar234880513107.Reflection(false);
	sGreenBar234880513107.MainCharacter(false);
	sGreenBar234880513107.BelongToMap("GameMap");
	sGreenBar234880513107.ActorIndex(9);
	sGreenBar234880513107.Animation(1);
	sGreenBar234880513107.Frame(0);
	sGreenBar234880513107.PegRegistered(false);
	sGreenBar234880513107.ZOrder(0);
	sGreenBar234880513107.MapPositionX(720);
	sGreenBar234880513107.MapPositionY(91);
	sGreenBar234880513107.CheckCollisionWithMap(false);
	sGreenBar234880513107.DisplayListNumber(5);
	sGreenBar234880513107.Friction(0);
	sGreenBar234880513107.ActivateCollisionWithSprite(false);
	sGreenBar234880513107.VectorDirection(0,0,0);
	sGreenBar234880513107.ShowVectorOfTranslation(false);
	sGreenBar234880513107.CollisionType(LOOSECOLLISION);
	sGreenBar234880513107.Speed((float)0.00);
	sGreenBar234880513107.VariableNumber(0);
	sGreenBar234880513107.ShowSpriteBoundingBox(false);
	sGreenBar234880513107.ShowSpriteCollision(false);
	sGreenBar234880513107.Gravity(false);
	gn->Add(sGreenBar234880513107);

	Sprite sGreenBar336183863535;
	sGreenBar336183863535.Name("GreenBar3");
	sGreenBar336183863535.Visible(true);
	sGreenBar336183863535.Unused(false);
	sGreenBar336183863535.Pause(false);
	sGreenBar336183863535.Reflection(false);
	sGreenBar336183863535.MainCharacter(false);
	sGreenBar336183863535.BelongToMap("GameMap");
	sGreenBar336183863535.ActorIndex(9);
	sGreenBar336183863535.Animation(1);
	sGreenBar336183863535.Frame(0);
	sGreenBar336183863535.PegRegistered(false);
	sGreenBar336183863535.ZOrder(0);
	sGreenBar336183863535.MapPositionX(720);
	sGreenBar336183863535.MapPositionY(192);
	sGreenBar336183863535.CheckCollisionWithMap(false);
	sGreenBar336183863535.DisplayListNumber(5);
	sGreenBar336183863535.Friction(0);
	sGreenBar336183863535.ActivateCollisionWithSprite(false);
	sGreenBar336183863535.VectorDirection(0,0,0);
	sGreenBar336183863535.ShowVectorOfTranslation(false);
	sGreenBar336183863535.CollisionType(LOOSECOLLISION);
	sGreenBar336183863535.Speed((float)0.00);
	sGreenBar336183863535.VariableNumber(0);
	sGreenBar336183863535.ShowSpriteBoundingBox(false);
	sGreenBar336183863535.ShowSpriteCollision(false);
	sGreenBar336183863535.Gravity(false);
	gn->Add(sGreenBar336183863535);

	Sprite sGreenBar435235313225;
	sGreenBar435235313225.Name("GreenBar4");
	sGreenBar435235313225.Visible(true);
	sGreenBar435235313225.Unused(false);
	sGreenBar435235313225.Pause(false);
	sGreenBar435235313225.Reflection(false);
	sGreenBar435235313225.MainCharacter(false);
	sGreenBar435235313225.BelongToMap("GameMap");
	sGreenBar435235313225.ActorIndex(9);
	sGreenBar435235313225.Animation(1);
	sGreenBar435235313225.Frame(0);
	sGreenBar435235313225.PegRegistered(false);
	sGreenBar435235313225.ZOrder(0);
	sGreenBar435235313225.MapPositionX(720);
	sGreenBar435235313225.MapPositionY(293);
	sGreenBar435235313225.CheckCollisionWithMap(false);
	sGreenBar435235313225.DisplayListNumber(5);
	sGreenBar435235313225.Friction(0);
	sGreenBar435235313225.ActivateCollisionWithSprite(false);
	sGreenBar435235313225.VectorDirection(0,0,0);
	sGreenBar435235313225.ShowVectorOfTranslation(false);
	sGreenBar435235313225.CollisionType(LOOSECOLLISION);
	sGreenBar435235313225.Speed((float)0.00);
	sGreenBar435235313225.VariableNumber(0);
	sGreenBar435235313225.ShowSpriteBoundingBox(false);
	sGreenBar435235313225.ShowSpriteCollision(false);
	sGreenBar435235313225.Gravity(false);
	gn->Add(sGreenBar435235313225);

	Sprite sGreenBar535143113195;
	sGreenBar535143113195.Name("GreenBar5");
	sGreenBar535143113195.Visible(true);
	sGreenBar535143113195.Unused(false);
	sGreenBar535143113195.Pause(false);
	sGreenBar535143113195.Reflection(false);
	sGreenBar535143113195.MainCharacter(false);
	sGreenBar535143113195.BelongToMap("GameMap");
	sGreenBar535143113195.ActorIndex(9);
	sGreenBar535143113195.Animation(1);
	sGreenBar535143113195.Frame(0);
	sGreenBar535143113195.PegRegistered(false);
	sGreenBar535143113195.ZOrder(0);
	sGreenBar535143113195.MapPositionX(720);
	sGreenBar535143113195.MapPositionY(394);
	sGreenBar535143113195.CheckCollisionWithMap(false);
	sGreenBar535143113195.DisplayListNumber(5);
	sGreenBar535143113195.Friction(0);
	sGreenBar535143113195.ActivateCollisionWithSprite(false);
	sGreenBar535143113195.VectorDirection(0,0,0);
	sGreenBar535143113195.ShowVectorOfTranslation(false);
	sGreenBar535143113195.CollisionType(LOOSECOLLISION);
	sGreenBar535143113195.Speed((float)0.00);
	sGreenBar535143113195.VariableNumber(0);
	sGreenBar535143113195.ShowSpriteBoundingBox(false);
	sGreenBar535143113195.ShowSpriteCollision(false);
	sGreenBar535143113195.Gravity(false);
	gn->Add(sGreenBar535143113195);

	Sprite sStatic46161056791;
	sStatic46161056791.Name("Static");
	sStatic46161056791.Visible(false);
	sStatic46161056791.Unused(false);
	sStatic46161056791.Pause(false);
	sStatic46161056791.Reflection(false);
	sStatic46161056791.MainCharacter(false);
	sStatic46161056791.BelongToMap("GameMap");
	sStatic46161056791.ActorIndex(7);
	sStatic46161056791.Animation(0);
	sStatic46161056791.Frame(0);
	sStatic46161056791.PegRegistered(false);
	sStatic46161056791.ZOrder(0);
	sStatic46161056791.MapPositionX(0);
	sStatic46161056791.MapPositionY(0);
	sStatic46161056791.CheckCollisionWithMap(false);
	sStatic46161056791.DisplayListNumber(6);
	sStatic46161056791.Friction(0);
	sStatic46161056791.ActivateCollisionWithSprite(false);
	sStatic46161056791.VectorDirection(0,0,0);
	sStatic46161056791.ShowVectorOfTranslation(false);
	sStatic46161056791.CollisionType(LOOSECOLLISION);
	sStatic46161056791.Speed((float)0.00);
	sStatic46161056791.VariableNumber(0);
	sStatic46161056791.ShowSpriteBoundingBox(false);
	sStatic46161056791.ShowSpriteCollision(false);
	sStatic46161056791.Gravity(false);
	gn->Add(sStatic46161056791);

	Sprite sServer50513774912;
	sServer50513774912.Name("Server");
	sServer50513774912.Visible(true);
	sServer50513774912.Unused(true);
	sServer50513774912.Pause(false);
	sServer50513774912.Reflection(false);
	sServer50513774912.MainCharacter(false);
	sServer50513774912.BelongToMap("GameMap");
	sServer50513774912.ActorIndex(4);
	sServer50513774912.Animation(1);
	sServer50513774912.Frame(0);
	sServer50513774912.PegRegistered(false);
	sServer50513774912.ZOrder(0);
	sServer50513774912.MapPositionX(0);
	sServer50513774912.MapPositionY(0);
	sServer50513774912.CheckCollisionWithMap(false);
	sServer50513774912.DisplayListNumber(0);
	sServer50513774912.Friction(0);
	sServer50513774912.ActivateCollisionWithSprite(false);
	sServer50513774912.VectorDirection(0,0,0);
	sServer50513774912.ShowVectorOfTranslation(false);
	sServer50513774912.CollisionType(LOOSECOLLISION);
	sServer50513774912.Speed((float)0.00);
	sServer50513774912.VariableNumber(0);
	sServer50513774912.ShowSpriteBoundingBox(false);
	sServer50513774912.ShowSpriteCollision(false);
	sServer50513774912.Gravity(false);
	gn->Add(sServer50513774912);

	Sprite sDoor63005053782;
	sDoor63005053782.Name("Door");
	sDoor63005053782.Visible(true);
	sDoor63005053782.Unused(true);
	sDoor63005053782.Pause(false);
	sDoor63005053782.Reflection(false);
	sDoor63005053782.MainCharacter(false);
	sDoor63005053782.BelongToMap("GameMap");
	sDoor63005053782.ActorIndex(4);
	sDoor63005053782.Animation(2);
	sDoor63005053782.Frame(0);
	sDoor63005053782.PegRegistered(false);
	sDoor63005053782.ZOrder(0);
	sDoor63005053782.MapPositionX(0);
	sDoor63005053782.MapPositionY(0);
	sDoor63005053782.CheckCollisionWithMap(false);
	sDoor63005053782.DisplayListNumber(0);
	sDoor63005053782.Friction(0);
	sDoor63005053782.ActivateCollisionWithSprite(false);
	sDoor63005053782.VectorDirection(0,0,0);
	sDoor63005053782.ShowVectorOfTranslation(false);
	sDoor63005053782.CollisionType(LOOSECOLLISION);
	sDoor63005053782.Speed((float)0.00);
	sDoor63005053782.VariableNumber(0);
	sDoor63005053782.ShowSpriteBoundingBox(false);
	sDoor63005053782.ShowSpriteCollision(false);
	sDoor63005053782.Gravity(false);
	gn->Add(sDoor63005053782);

	Sprite sBed172331836829;
	sBed172331836829.Name("Bed1");
	sBed172331836829.Visible(true);
	sBed172331836829.Unused(true);
	sBed172331836829.Pause(false);
	sBed172331836829.Reflection(false);
	sBed172331836829.MainCharacter(false);
	sBed172331836829.BelongToMap("GameMap");
	sBed172331836829.ActorIndex(4);
	sBed172331836829.Animation(4);
	sBed172331836829.Frame(0);
	sBed172331836829.PegRegistered(false);
	sBed172331836829.ZOrder(0);
	sBed172331836829.MapPositionX(0);
	sBed172331836829.MapPositionY(0);
	sBed172331836829.CheckCollisionWithMap(false);
	sBed172331836829.DisplayListNumber(0);
	sBed172331836829.Friction(0);
	sBed172331836829.ActivateCollisionWithSprite(false);
	sBed172331836829.VectorDirection(0,0,0);
	sBed172331836829.ShowVectorOfTranslation(false);
	sBed172331836829.CollisionType(LOOSECOLLISION);
	sBed172331836829.Speed((float)0.00);
	sBed172331836829.VariableNumber(0);
	sBed172331836829.ShowSpriteBoundingBox(false);
	sBed172331836829.ShowSpriteCollision(false);
	sBed172331836829.Gravity(false);
	gn->Add(sBed172331836829);

	Sprite sBed272443536865;
	sBed272443536865.Name("Bed2");
	sBed272443536865.Visible(true);
	sBed272443536865.Unused(true);
	sBed272443536865.Pause(false);
	sBed272443536865.Reflection(false);
	sBed272443536865.MainCharacter(false);
	sBed272443536865.BelongToMap("GameMap");
	sBed272443536865.ActorIndex(4);
	sBed272443536865.Animation(5);
	sBed272443536865.Frame(0);
	sBed272443536865.PegRegistered(false);
	sBed272443536865.ZOrder(0);
	sBed272443536865.MapPositionX(0);
	sBed272443536865.MapPositionY(0);
	sBed272443536865.CheckCollisionWithMap(false);
	sBed272443536865.DisplayListNumber(0);
	sBed272443536865.Friction(0);
	sBed272443536865.ActivateCollisionWithSprite(false);
	sBed272443536865.VectorDirection(0,0,0);
	sBed272443536865.ShowVectorOfTranslation(false);
	sBed272443536865.CollisionType(LOOSECOLLISION);
	sBed272443536865.Speed((float)0.00);
	sBed272443536865.VariableNumber(0);
	sBed272443536865.ShowSpriteBoundingBox(false);
	sBed272443536865.ShowSpriteCollision(false);
	sBed272443536865.Gravity(false);
	gn->Add(sBed272443536865);

	Sprite sBed372961837034;
	sBed372961837034.Name("Bed3");
	sBed372961837034.Visible(true);
	sBed372961837034.Unused(true);
	sBed372961837034.Pause(false);
	sBed372961837034.Reflection(false);
	sBed372961837034.MainCharacter(false);
	sBed372961837034.BelongToMap("GameMap");
	sBed372961837034.ActorIndex(4);
	sBed372961837034.Animation(6);
	sBed372961837034.Frame(0);
	sBed372961837034.PegRegistered(false);
	sBed372961837034.ZOrder(0);
	sBed372961837034.MapPositionX(0);
	sBed372961837034.MapPositionY(0);
	sBed372961837034.CheckCollisionWithMap(false);
	sBed372961837034.DisplayListNumber(0);
	sBed372961837034.Friction(0);
	sBed372961837034.ActivateCollisionWithSprite(false);
	sBed372961837034.VectorDirection(0,0,0);
	sBed372961837034.ShowVectorOfTranslation(false);
	sBed372961837034.CollisionType(LOOSECOLLISION);
	sBed372961837034.Speed((float)0.00);
	sBed372961837034.VariableNumber(0);
	sBed372961837034.ShowSpriteBoundingBox(false);
	sBed372961837034.ShowSpriteCollision(false);
	sBed372961837034.Gravity(false);
	gn->Add(sBed372961837034);

	Sprite sExit18808959505;
	sExit18808959505.Name("Exit");
	sExit18808959505.Visible(true);
	sExit18808959505.Unused(true);
	sExit18808959505.Pause(false);
	sExit18808959505.Reflection(false);
	sExit18808959505.MainCharacter(false);
	sExit18808959505.BelongToMap("GameMap");
	sExit18808959505.ActorIndex(4);
	sExit18808959505.Animation(3);
	sExit18808959505.Frame(0);
	sExit18808959505.PegRegistered(false);
	sExit18808959505.ZOrder(0);
	sExit18808959505.MapPositionX(0);
	sExit18808959505.MapPositionY(0);
	sExit18808959505.CheckCollisionWithMap(false);
	sExit18808959505.DisplayListNumber(0);
	sExit18808959505.Friction(0);
	sExit18808959505.ActivateCollisionWithSprite(false);
	sExit18808959505.VectorDirection(0,0,0);
	sExit18808959505.ShowVectorOfTranslation(false);
	sExit18808959505.CollisionType(LOOSECOLLISION);
	sExit18808959505.Speed((float)0.00);
	sExit18808959505.VariableNumber(0);
	sExit18808959505.ShowSpriteBoundingBox(false);
	sExit18808959505.ShowSpriteCollision(false);
	sExit18808959505.Gravity(false);
	gn->Add(sExit18808959505);

	Sprite sChad128525782564;
	sChad128525782564.Name("Chad");
	sChad128525782564.Visible(true);
	sChad128525782564.Unused(false);
	sChad128525782564.Pause(false);
	sChad128525782564.Reflection(false);
	sChad128525782564.MainCharacter(false);
	sChad128525782564.BelongToMap("GameMap");
	sChad128525782564.ActorIndex(2);
	sChad128525782564.Animation(4);
	sChad128525782564.Frame(0);
	sChad128525782564.PegRegistered(false);
	sChad128525782564.ZOrder(0);
	sChad128525782564.MapPositionX(660);
	sChad128525782564.MapPositionY(30);
	sChad128525782564.CheckCollisionWithMap(false);
	sChad128525782564.DisplayListNumber(1);
	sChad128525782564.Friction(0);
	sChad128525782564.ActivateCollisionWithSprite(false);
	sChad128525782564.behavior.AddStateMachine(SM_ACCESS_TRACKER);
	sChad128525782564.behavior.AddStateMachine(SM_ALIEN2_ANIMATION);
	sChad128525782564.behavior.AddFunction(FN_KILL_CODE_L3);
	sChad128525782564.VectorDirection(0,0,0);
	sChad128525782564.ShowVectorOfTranslation(false);
	sChad128525782564.CollisionType(LOOSECOLLISION);
	sChad128525782564.Speed((float)2.00);
	sChad128525782564.VariableNumber(0);
	sChad128525782564.ShowSpriteBoundingBox(false);
	sChad128525782564.ShowSpriteCollision(false);
	sChad128525782564.Gravity(false);
	gn->Add(sChad128525782564);

	Sprite sDom127140052113;
	sDom127140052113.Name("Dom");
	sDom127140052113.Visible(true);
	sDom127140052113.Unused(false);
	sDom127140052113.Pause(false);
	sDom127140052113.Reflection(false);
	sDom127140052113.MainCharacter(false);
	sDom127140052113.BelongToMap("GameMap");
	sDom127140052113.ActorIndex(1);
	sDom127140052113.Animation(3);
	sDom127140052113.Frame(0);
	sDom127140052113.PegRegistered(false);
	sDom127140052113.ZOrder(0);
	sDom127140052113.MapPositionX(480);
	sDom127140052113.MapPositionY(90);
	sDom127140052113.CheckCollisionWithMap(false);
	sDom127140052113.DisplayListNumber(0);
	sDom127140052113.Friction(0);
	sDom127140052113.ActivateCollisionWithSprite(false);
	sDom127140052113.behavior.AddStateMachine(SM_UP_DOWN);
	sDom127140052113.behavior.AddStateMachine(SM_ALIEN1_ANIMATION);
	sDom127140052113.behavior.AddFunction(FN_KILL_CODE_L3);
	sDom127140052113.VectorDirection(0,0,0);
	sDom127140052113.ShowVectorOfTranslation(false);
	sDom127140052113.CollisionType(LOOSECOLLISION);
	sDom127140052113.Speed((float)5.00);
	sDom127140052113.VariableNumber(0);
	sDom127140052113.ShowSpriteBoundingBox(false);
	sDom127140052113.ShowSpriteCollision(false);
	sDom127140052113.Gravity(false);
	gn->Add(sDom127140052113);

	Sprite sZack126799972002;
	sZack126799972002.Name("Zack");
	sZack126799972002.Visible(true);
	sZack126799972002.Unused(false);
	sZack126799972002.Pause(false);
	sZack126799972002.Reflection(false);
	sZack126799972002.MainCharacter(false);
	sZack126799972002.BelongToMap("GameMap");
	sZack126799972002.ActorIndex(2);
	sZack126799972002.Animation(7);
	sZack126799972002.Frame(0);
	sZack126799972002.PegRegistered(false);
	sZack126799972002.ZOrder(0);
	sZack126799972002.MapPositionX(360);
	sZack126799972002.MapPositionY(510);
	sZack126799972002.CheckCollisionWithMap(false);
	sZack126799972002.DisplayListNumber(0);
	sZack126799972002.Friction(0);
	sZack126799972002.ActivateCollisionWithSprite(false);
	sZack126799972002.behavior.AddStateMachine(SM_LEFT_RIGHT);
	sZack126799972002.behavior.AddStateMachine(SM_ALIEN2_ANIMATION);
	sZack126799972002.behavior.AddFunction(FN_KILL_CODE_L3);
	sZack126799972002.VectorDirection(0,0,0);
	sZack126799972002.ShowVectorOfTranslation(false);
	sZack126799972002.CollisionType(LOOSECOLLISION);
	sZack126799972002.Speed((float)1.00);
	sZack126799972002.VariableNumber(0);
	sZack126799972002.ShowSpriteBoundingBox(false);
	sZack126799972002.ShowSpriteCollision(false);
	sZack126799972002.Gravity(false);
	gn->Add(sZack126799972002);

	Sprite sAndrew128649002606;
	sAndrew128649002606.Name("Andrew");
	sAndrew128649002606.Visible(true);
	sAndrew128649002606.Unused(false);
	sAndrew128649002606.Pause(false);
	sAndrew128649002606.Reflection(false);
	sAndrew128649002606.MainCharacter(false);
	sAndrew128649002606.BelongToMap("GameMap");
	sAndrew128649002606.ActorIndex(2);
	sAndrew128649002606.Animation(6);
	sAndrew128649002606.Frame(0);
	sAndrew128649002606.PegRegistered(false);
	sAndrew128649002606.ZOrder(0);
	sAndrew128649002606.MapPositionX(30);
	sAndrew128649002606.MapPositionY(360);
	sAndrew128649002606.CheckCollisionWithMap(false);
	sAndrew128649002606.DisplayListNumber(0);
	sAndrew128649002606.Friction(0);
	sAndrew128649002606.ActivateCollisionWithSprite(false);
	sAndrew128649002606.behavior.AddStateMachine(SM_ACCESS_TRACKER);
	sAndrew128649002606.behavior.AddStateMachine(SM_ALIEN2_ANIMATION);
	sAndrew128649002606.behavior.AddFunction(FN_KILL_CODE_L3);
	sAndrew128649002606.VectorDirection(0,0,0);
	sAndrew128649002606.ShowVectorOfTranslation(false);
	sAndrew128649002606.CollisionType(LOOSECOLLISION);
	sAndrew128649002606.Speed((float)1.00);
	sAndrew128649002606.VariableNumber(0);
	sAndrew128649002606.ShowSpriteBoundingBox(false);
	sAndrew128649002606.ShowSpriteCollision(false);
	sAndrew128649002606.Gravity(false);
	gn->Add(sAndrew128649002606);

	Sprite snate126993722064;
	snate126993722064.Name("nate");
	snate126993722064.Visible(true);
	snate126993722064.Unused(false);
	snate126993722064.Pause(false);
	snate126993722064.Reflection(false);
	snate126993722064.MainCharacter(false);
	snate126993722064.BelongToMap("GameMap");
	snate126993722064.ActorIndex(1);
	snate126993722064.Animation(5);
	snate126993722064.Frame(0);
	snate126993722064.PegRegistered(false);
	snate126993722064.ZOrder(0);
	snate126993722064.MapPositionX(240);
	snate126993722064.MapPositionY(270);
	snate126993722064.CheckCollisionWithMap(false);
	snate126993722064.DisplayListNumber(1);
	snate126993722064.Friction(0);
	snate126993722064.ActivateCollisionWithSprite(false);
	snate126993722064.behavior.AddStateMachine(SM_NATE_AL);
	snate126993722064.behavior.AddStateMachine(SM_ALIEN1_ANIMATION);
	snate126993722064.behavior.AddFunction(FN_KILL_CODE_L3);
	snate126993722064.VectorDirection(0,0,0);
	snate126993722064.ShowVectorOfTranslation(false);
	snate126993722064.CollisionType(LOOSECOLLISION);
	snate126993722064.Speed((float)5.00);
	snate126993722064.VariableNumber(0);
	snate126993722064.ShowSpriteBoundingBox(false);
	snate126993722064.ShowSpriteCollision(false);
	snate126993722064.Gravity(false);
	gn->Add(snate126993722064);

	Variable tScore;
	tScore.Name("Score");
	tScore.Visible(true);
	tScore.Unused(false);
	tScore.Pause(false);
	tScore.FontName("OCR A Extended");
	tScore.Width(0);
	tScore.Height(15.75);
	tScore.Weight(400);
	tScore.Color(RGB(192,192,192));
	tScore.Italic(false);
	tScore.StrikeOut(false);
	tScore.Underline(false);

	FunRect rectScore = {742,524,792,564};
	tScore.Frame(rectScore);
	tScore.ShowFrame(false);
	tScore.InWorld(true);
	tScore.ActivateOutOfViewport(true);
	tScore.BelongToMap("GameMap");
	tScore.TopMost(true);
	tScore.DisplayType(Variable::RespectingWords);
	tScore.TopMargin(0);
	tScore.LeftMargin(0);
	tScore.LineSpacing(0);
	tScore.LetterSpacing(0);
	tScore.LeadingSpaces(true);
	tScore.Effect(Variable::MummyEffect);
	tScore.Delay(0,0);
	tScore.OnlyIntegerPart(true);
	tScore = 0.000000;
	gn->Add(tScore);

	Variable tout_of;
	tout_of.Name("out_of");
	tout_of.Visible(true);
	tout_of.Unused(false);
	tout_of.Pause(false);
	tout_of.FontName("OCR A Extended");
	tout_of.Width(0);
	tout_of.Height(15.75);
	tout_of.Weight(400);
	tout_of.Color(RGB(128,128,128));
	tout_of.Italic(false);
	tout_of.StrikeOut(false);
	tout_of.Underline(false);

	FunRect rectout_of = {759,524,799,584};
	tout_of.Frame(rectout_of);
	tout_of.ShowFrame(false);
	tout_of.InWorld(true);
	tout_of.ActivateOutOfViewport(true);
	tout_of.BelongToMap("GameMap");
	tout_of.TopMost(true);
	tout_of.DisplayType(Variable::RespectingWords);
	tout_of.TopMargin(0);
	tout_of.LeftMargin(0);
	tout_of.LineSpacing(0);
	tout_of.LetterSpacing(0);
	tout_of.LeadingSpaces(true);
	tout_of.Effect(Variable::MummyEffect);
	tout_of.Delay(0,0);
	tout_of = "/5";
	gn->Add(tout_of);

	Variable tKeycards;
	tKeycards.Name("Keycards");
	tKeycards.Visible(true);
	tKeycards.Unused(false);
	tKeycards.Pause(false);
	tKeycards.FontName("OCR A Extended");
	tKeycards.Width(0);
	tKeycards.Height(12.00);
	tKeycards.Weight(400);
	tKeycards.Color(RGB(255,0,0));
	tKeycards.Italic(false);
	tKeycards.StrikeOut(false);
	tKeycards.Underline(false);

	FunRect rectKeycards = {731,548,800,592};
	tKeycards.Frame(rectKeycards);
	tKeycards.ShowFrame(false);
	tKeycards.InWorld(true);
	tKeycards.ActivateOutOfViewport(true);
	tKeycards.BelongToMap("GameMap");
	tKeycards.TopMost(true);
	tKeycards.DisplayType(Variable::RespectingWords);
	tKeycards.TopMargin(0);
	tKeycards.LeftMargin(0);
	tKeycards.LineSpacing(0);
	tKeycards.LetterSpacing(0);
	tKeycards.LeadingSpaces(true);
	tKeycards.Effect(Variable::MummyEffect);
	tKeycards.Delay(0,0);
	tKeycards = "Test lab 1\n";
	gn->Add(tKeycards);


	FILE*f1;
	
	f1=fopen("Test Lab 1.txt","rt");
	
	//y is # of rows & x is # of Columns
	for(int y=0;y<20;y++)
	{
		char ch;
		for(int x=0;x<24;x++)
			{
				fscanf(f1,"%c",&ch);
							if(ch=='W')
			{					
									MakeWall(x,y);
									binaryMap[x][y]=0;
							}
	
							else if(ch=='K')
			{	
									MakeKey(x,y);
									binaryMap[x][y]=1;
	
							}  
							else if(ch=='A')
			{	
									MakeDoor(x,y);
									binaryMap[x][y]=0;
	
							}  
	
							else if(ch=='S')
			{	
									MakeServer(x,y);
									binaryMap[x][y]=0;
	
							}  
							else if(ch=='B')
			{	
									MakeBed1(x,y);
									binaryMap[x][y]=0;
	
							}  
	
							 else if(ch=='X')
			{					
									MakeBed1(x,y);
									binaryMap[x][y]=0;
							}
							else if(ch=='Y')
			{					
									MakeBed2(x,y);
									binaryMap[x][y]=0;
							}
							else if(ch=='Z')
			{					
									MakeBed3(x,y);
									binaryMap[x][y]=0;
							}  
							else if(ch=='E')
			{	
									MakeExit(x,y);
									binaryMap[x][y]=0;
	
							}  
							else{
	
								//	MakeFood(x,y);
									binaryMap[x][y]=1;
							}
		}
		fscanf(f1,"%c",&ch);
	}
	fclose(f1);

};

void End_Level_3Function(GameNode *gn)
{
	

};

void Exit_Level_3Function(GameNode *gn)
{
};

void Init_Level_4Function(GameNode *gn)
{
#ifdef ERROR_MESSAGES
	pConsole->Color(RGB(0,0,0));
#endif

	gn->behavior.AddFunction(FN_RESTART);
	gn->behavior.AddFunction(FN_KILLLIVES);
	gn->WorldWidth(800);
	gn->WorldHeight(600);

	gn->FPStoMS(60);
	gn->QuitOnEscape(true);
	gn->ShowScrollingBoundingBox(false);

	gn->viewPort.ViewPortScrollingBB(0,0,640,480);

	gn->viewPort.WorldXPos(0);
	gn->viewPort.WorldYPos(0);
	gn->viewPort.MaxInflateBBLeft(0);
	gn->viewPort.MaxInflateBBTop(0);
	gn->viewPort.MaxInflateBBRight(0);
	gn->viewPort.MaxInflateBBBottom(0);

	gn->viewPort.ViewPortWidth(800);
	gn->viewPort.ViewPortHeight(600);

	FunRect rectGameMap = {0,0,800,600};
	Map mGameMap("GameMap","Background.bmp",Map::STANDARDMAP,0,0,0,true,rectGameMap);
	mGameMap.SpeedX(0.00);
	mGameMap.SpeedY(0.00);
	mGameMap.ScrollRatioX(0.00);
	mGameMap.ScrollRatioY(0.00);
	mGameMap.UseTransparency(false);
	mGameMap.Visible(true);
	mGameMap.Unused(false);
	mGameMap.Pause(false);
	mGameMap.SpacePartitionGridSize(128);
	mGameMap.ShowMapCollision(false);
	gn->Add(mGameMap);

	Sprite sWall38568661516;
	sWall38568661516.Name("Wall");
	sWall38568661516.Visible(true);
	sWall38568661516.Unused(true);
	sWall38568661516.Pause(false);
	sWall38568661516.Reflection(false);
	sWall38568661516.MainCharacter(false);
	sWall38568661516.BelongToMap("GameMap");
	sWall38568661516.ActorIndex(4);
	sWall38568661516.Animation(0);
	sWall38568661516.Frame(0);
	sWall38568661516.PegRegistered(false);
	sWall38568661516.ZOrder(0);
	sWall38568661516.MapPositionX(0);
	sWall38568661516.MapPositionY(0);
	sWall38568661516.CheckCollisionWithMap(false);
	sWall38568661516.DisplayListNumber(0);
	sWall38568661516.Friction(0);
	sWall38568661516.ActivateCollisionWithSprite(false);
	sWall38568661516.VectorDirection(0,0,0);
	sWall38568661516.ShowVectorOfTranslation(false);
	sWall38568661516.CollisionType(LOOSECOLLISION);
	sWall38568661516.Speed((float)0.00);
	sWall38568661516.VariableNumber(0);
	sWall38568661516.ShowSpriteBoundingBox(false);
	sWall38568661516.ShowSpriteCollision(false);
	sWall38568661516.Gravity(false);
	gn->Add(sWall38568661516);

	Sprite sSpaceman137832805604;
	sSpaceman137832805604.Name("Spaceman");
	sSpaceman137832805604.Visible(true);
	sSpaceman137832805604.Unused(false);
	sSpaceman137832805604.Pause(false);
	sSpaceman137832805604.Reflection(false);
	sSpaceman137832805604.MainCharacter(false);
	sSpaceman137832805604.BelongToMap("GameMap");
	sSpaceman137832805604.ActorIndex(0);
	sSpaceman137832805604.Animation(3);
	sSpaceman137832805604.Frame(1);
	sSpaceman137832805604.PegRegistered(false);
	sSpaceman137832805604.ZOrder(0);
	sSpaceman137832805604.MapPositionX(30);
	sSpaceman137832805604.MapPositionY(480);
	sSpaceman137832805604.CheckCollisionWithMap(false);
	sSpaceman137832805604.DisplayListNumber(0);
	sSpaceman137832805604.Friction(0);
	sSpaceman137832805604.ActivateCollisionWithSprite(false);
	sSpaceman137832805604.behavior.AddStateMachine(SM_MOVEMENT);
	sSpaceman137832805604.behavior.AddStateMachine(SM_SPACEMAN_ANIMATION);
	sSpaceman137832805604.behavior.AddFunction(FN_TESTLAB2TOHALL2);
	sSpaceman137832805604.VectorDirection(0,0,0);
	sSpaceman137832805604.ShowVectorOfTranslation(false);
	sSpaceman137832805604.CollisionType(LOOSECOLLISION);
	sSpaceman137832805604.Speed((float)2.00);
	sSpaceman137832805604.VariableNumber(0);
	sSpaceman137832805604.ShowSpriteBoundingBox(false);
	sSpaceman137832805604.ShowSpriteCollision(false);
	sSpaceman137832805604.Gravity(false);
	gn->Add(sSpaceman137832805604);

	Sprite sKey1811159279895;
	sKey1811159279895.Name("Key");
	sKey1811159279895.Visible(true);
	sKey1811159279895.Unused(true);
	sKey1811159279895.Pause(false);
	sKey1811159279895.Reflection(false);
	sKey1811159279895.MainCharacter(false);
	sKey1811159279895.BelongToMap("GameMap");
	sKey1811159279895.ActorIndex(5);
	sKey1811159279895.Animation(0);
	sKey1811159279895.Frame(0);
	sKey1811159279895.PegRegistered(false);
	sKey1811159279895.ZOrder(0);
	sKey1811159279895.MapPositionX(30);
	sKey1811159279895.MapPositionY(60);
	sKey1811159279895.CheckCollisionWithMap(false);
	sKey1811159279895.DisplayListNumber(0);
	sKey1811159279895.Friction(0);
	sKey1811159279895.ActivateCollisionWithSprite(false);
	sKey1811159279895.behavior.AddFunction(FN_KEYBEHAVIORFN);
	sKey1811159279895.VectorDirection(0,0,0);
	sKey1811159279895.ShowVectorOfTranslation(false);
	sKey1811159279895.CollisionType(LOOSECOLLISION);
	sKey1811159279895.Speed((float)0.00);
	sKey1811159279895.VariableNumber(0);
	sKey1811159279895.ShowSpriteBoundingBox(false);
	sKey1811159279895.ShowSpriteCollision(false);
	sKey1811159279895.Gravity(false);
	gn->Add(sKey1811159279895);

	Sprite sVision2607752001320;
	sVision2607752001320.Name("Vision");
	sVision2607752001320.Visible(false);
	sVision2607752001320.Unused(false);
	sVision2607752001320.Pause(false);
	sVision2607752001320.Reflection(false);
	sVision2607752001320.MainCharacter(false);
	sVision2607752001320.BelongToMap("GameMap");
	sVision2607752001320.ActorIndex(6);
	sVision2607752001320.Animation(0);
	sVision2607752001320.Frame(0);
	sVision2607752001320.PegRegistered(false);
	sVision2607752001320.ZOrder(0);
	sVision2607752001320.MapPositionX(0);
	sVision2607752001320.MapPositionY(0);
	sVision2607752001320.CheckCollisionWithMap(false);
	sVision2607752001320.DisplayListNumber(3);
	sVision2607752001320.Friction(0);
	sVision2607752001320.ActivateCollisionWithSprite(false);
	sVision2607752001320.behavior.AddFunction(FN_VISIONTRACKER);
	sVision2607752001320.behavior.AddFunction(FN_DIFI);
	sVision2607752001320.VectorDirection(0,0,0);
	sVision2607752001320.ShowVectorOfTranslation(false);
	sVision2607752001320.CollisionType(LOOSECOLLISION);
	sVision2607752001320.Speed((float)5.00);
	sVision2607752001320.VariableNumber(0);
	sVision2607752001320.ShowSpriteBoundingBox(false);
	sVision2607752001320.ShowSpriteCollision(false);
	sVision2607752001320.Gravity(false);
	gn->Add(sVision2607752001320);

	Sprite sLife_Bar78305077291;
	sLife_Bar78305077291.Name("Life_Bar");
	sLife_Bar78305077291.Visible(true);
	sLife_Bar78305077291.Unused(false);
	sLife_Bar78305077291.Pause(false);
	sLife_Bar78305077291.Reflection(false);
	sLife_Bar78305077291.MainCharacter(false);
	sLife_Bar78305077291.BelongToMap("GameMap");
	sLife_Bar78305077291.ActorIndex(9);
	sLife_Bar78305077291.Animation(2);
	sLife_Bar78305077291.Frame(0);
	sLife_Bar78305077291.PegRegistered(false);
	sLife_Bar78305077291.ZOrder(0);
	sLife_Bar78305077291.MapPositionX(720);
	sLife_Bar78305077291.MapPositionY(-10);
	sLife_Bar78305077291.CheckCollisionWithMap(false);
	sLife_Bar78305077291.DisplayListNumber(4);
	sLife_Bar78305077291.Friction(0);
	sLife_Bar78305077291.ActivateCollisionWithSprite(false);
	sLife_Bar78305077291.VectorDirection(0,0,0);
	sLife_Bar78305077291.ShowVectorOfTranslation(false);
	sLife_Bar78305077291.CollisionType(LOOSECOLLISION);
	sLife_Bar78305077291.Speed((float)0.00);
	sLife_Bar78305077291.VariableNumber(0);
	sLife_Bar78305077291.ShowSpriteBoundingBox(false);
	sLife_Bar78305077291.ShowSpriteCollision(false);
	sLife_Bar78305077291.Gravity(false);
	gn->Add(sLife_Bar78305077291);

	Sprite sGreenBar116749754390;
	sGreenBar116749754390.Name("GreenBar1");
	sGreenBar116749754390.Visible(true);
	sGreenBar116749754390.Unused(false);
	sGreenBar116749754390.Pause(false);
	sGreenBar116749754390.Reflection(false);
	sGreenBar116749754390.MainCharacter(false);
	sGreenBar116749754390.BelongToMap("GameMap");
	sGreenBar116749754390.ActorIndex(9);
	sGreenBar116749754390.Animation(1);
	sGreenBar116749754390.Frame(0);
	sGreenBar116749754390.PegRegistered(false);
	sGreenBar116749754390.ZOrder(0);
	sGreenBar116749754390.MapPositionX(720);
	sGreenBar116749754390.MapPositionY(-10);
	sGreenBar116749754390.CheckCollisionWithMap(false);
	sGreenBar116749754390.DisplayListNumber(5);
	sGreenBar116749754390.Friction(0);
	sGreenBar116749754390.ActivateCollisionWithSprite(false);
	sGreenBar116749754390.VectorDirection(0,0,0);
	sGreenBar116749754390.ShowVectorOfTranslation(false);
	sGreenBar116749754390.CollisionType(LOOSECOLLISION);
	sGreenBar116749754390.Speed((float)0.00);
	sGreenBar116749754390.VariableNumber(0);
	sGreenBar116749754390.ShowSpriteBoundingBox(false);
	sGreenBar116749754390.ShowSpriteCollision(false);
	sGreenBar116749754390.Gravity(false);
	gn->Add(sGreenBar116749754390);

	Sprite sGreenBar234880513107;
	sGreenBar234880513107.Name("GreenBar2");
	sGreenBar234880513107.Visible(true);
	sGreenBar234880513107.Unused(false);
	sGreenBar234880513107.Pause(false);
	sGreenBar234880513107.Reflection(false);
	sGreenBar234880513107.MainCharacter(false);
	sGreenBar234880513107.BelongToMap("GameMap");
	sGreenBar234880513107.ActorIndex(9);
	sGreenBar234880513107.Animation(1);
	sGreenBar234880513107.Frame(0);
	sGreenBar234880513107.PegRegistered(false);
	sGreenBar234880513107.ZOrder(0);
	sGreenBar234880513107.MapPositionX(720);
	sGreenBar234880513107.MapPositionY(91);
	sGreenBar234880513107.CheckCollisionWithMap(false);
	sGreenBar234880513107.DisplayListNumber(5);
	sGreenBar234880513107.Friction(0);
	sGreenBar234880513107.ActivateCollisionWithSprite(false);
	sGreenBar234880513107.VectorDirection(0,0,0);
	sGreenBar234880513107.ShowVectorOfTranslation(false);
	sGreenBar234880513107.CollisionType(LOOSECOLLISION);
	sGreenBar234880513107.Speed((float)0.00);
	sGreenBar234880513107.VariableNumber(0);
	sGreenBar234880513107.ShowSpriteBoundingBox(false);
	sGreenBar234880513107.ShowSpriteCollision(false);
	sGreenBar234880513107.Gravity(false);
	gn->Add(sGreenBar234880513107);

	Sprite sGreenBar336183863535;
	sGreenBar336183863535.Name("GreenBar3");
	sGreenBar336183863535.Visible(true);
	sGreenBar336183863535.Unused(false);
	sGreenBar336183863535.Pause(false);
	sGreenBar336183863535.Reflection(false);
	sGreenBar336183863535.MainCharacter(false);
	sGreenBar336183863535.BelongToMap("GameMap");
	sGreenBar336183863535.ActorIndex(9);
	sGreenBar336183863535.Animation(1);
	sGreenBar336183863535.Frame(0);
	sGreenBar336183863535.PegRegistered(false);
	sGreenBar336183863535.ZOrder(0);
	sGreenBar336183863535.MapPositionX(720);
	sGreenBar336183863535.MapPositionY(192);
	sGreenBar336183863535.CheckCollisionWithMap(false);
	sGreenBar336183863535.DisplayListNumber(5);
	sGreenBar336183863535.Friction(0);
	sGreenBar336183863535.ActivateCollisionWithSprite(false);
	sGreenBar336183863535.VectorDirection(0,0,0);
	sGreenBar336183863535.ShowVectorOfTranslation(false);
	sGreenBar336183863535.CollisionType(LOOSECOLLISION);
	sGreenBar336183863535.Speed((float)0.00);
	sGreenBar336183863535.VariableNumber(0);
	sGreenBar336183863535.ShowSpriteBoundingBox(false);
	sGreenBar336183863535.ShowSpriteCollision(false);
	sGreenBar336183863535.Gravity(false);
	gn->Add(sGreenBar336183863535);

	Sprite sGreenBar435235313225;
	sGreenBar435235313225.Name("GreenBar4");
	sGreenBar435235313225.Visible(true);
	sGreenBar435235313225.Unused(false);
	sGreenBar435235313225.Pause(false);
	sGreenBar435235313225.Reflection(false);
	sGreenBar435235313225.MainCharacter(false);
	sGreenBar435235313225.BelongToMap("GameMap");
	sGreenBar435235313225.ActorIndex(9);
	sGreenBar435235313225.Animation(1);
	sGreenBar435235313225.Frame(0);
	sGreenBar435235313225.PegRegistered(false);
	sGreenBar435235313225.ZOrder(0);
	sGreenBar435235313225.MapPositionX(720);
	sGreenBar435235313225.MapPositionY(293);
	sGreenBar435235313225.CheckCollisionWithMap(false);
	sGreenBar435235313225.DisplayListNumber(5);
	sGreenBar435235313225.Friction(0);
	sGreenBar435235313225.ActivateCollisionWithSprite(false);
	sGreenBar435235313225.VectorDirection(0,0,0);
	sGreenBar435235313225.ShowVectorOfTranslation(false);
	sGreenBar435235313225.CollisionType(LOOSECOLLISION);
	sGreenBar435235313225.Speed((float)0.00);
	sGreenBar435235313225.VariableNumber(0);
	sGreenBar435235313225.ShowSpriteBoundingBox(false);
	sGreenBar435235313225.ShowSpriteCollision(false);
	sGreenBar435235313225.Gravity(false);
	gn->Add(sGreenBar435235313225);

	Sprite sGreenBar535143113195;
	sGreenBar535143113195.Name("GreenBar5");
	sGreenBar535143113195.Visible(true);
	sGreenBar535143113195.Unused(false);
	sGreenBar535143113195.Pause(false);
	sGreenBar535143113195.Reflection(false);
	sGreenBar535143113195.MainCharacter(false);
	sGreenBar535143113195.BelongToMap("GameMap");
	sGreenBar535143113195.ActorIndex(9);
	sGreenBar535143113195.Animation(1);
	sGreenBar535143113195.Frame(0);
	sGreenBar535143113195.PegRegistered(false);
	sGreenBar535143113195.ZOrder(0);
	sGreenBar535143113195.MapPositionX(720);
	sGreenBar535143113195.MapPositionY(394);
	sGreenBar535143113195.CheckCollisionWithMap(false);
	sGreenBar535143113195.DisplayListNumber(5);
	sGreenBar535143113195.Friction(0);
	sGreenBar535143113195.ActivateCollisionWithSprite(false);
	sGreenBar535143113195.VectorDirection(0,0,0);
	sGreenBar535143113195.ShowVectorOfTranslation(false);
	sGreenBar535143113195.CollisionType(LOOSECOLLISION);
	sGreenBar535143113195.Speed((float)0.00);
	sGreenBar535143113195.VariableNumber(0);
	sGreenBar535143113195.ShowSpriteBoundingBox(false);
	sGreenBar535143113195.ShowSpriteCollision(false);
	sGreenBar535143113195.Gravity(false);
	gn->Add(sGreenBar535143113195);

	Sprite sStatic46161056791;
	sStatic46161056791.Name("Static");
	sStatic46161056791.Visible(false);
	sStatic46161056791.Unused(false);
	sStatic46161056791.Pause(false);
	sStatic46161056791.Reflection(false);
	sStatic46161056791.MainCharacter(false);
	sStatic46161056791.BelongToMap("GameMap");
	sStatic46161056791.ActorIndex(7);
	sStatic46161056791.Animation(0);
	sStatic46161056791.Frame(0);
	sStatic46161056791.PegRegistered(false);
	sStatic46161056791.ZOrder(0);
	sStatic46161056791.MapPositionX(0);
	sStatic46161056791.MapPositionY(0);
	sStatic46161056791.CheckCollisionWithMap(false);
	sStatic46161056791.DisplayListNumber(6);
	sStatic46161056791.Friction(0);
	sStatic46161056791.ActivateCollisionWithSprite(false);
	sStatic46161056791.VectorDirection(0,0,0);
	sStatic46161056791.ShowVectorOfTranslation(false);
	sStatic46161056791.CollisionType(LOOSECOLLISION);
	sStatic46161056791.Speed((float)0.00);
	sStatic46161056791.VariableNumber(0);
	sStatic46161056791.ShowSpriteBoundingBox(false);
	sStatic46161056791.ShowSpriteCollision(false);
	sStatic46161056791.Gravity(false);
	gn->Add(sStatic46161056791);

	Sprite sServer50513774912;
	sServer50513774912.Name("Server");
	sServer50513774912.Visible(true);
	sServer50513774912.Unused(true);
	sServer50513774912.Pause(false);
	sServer50513774912.Reflection(false);
	sServer50513774912.MainCharacter(false);
	sServer50513774912.BelongToMap("GameMap");
	sServer50513774912.ActorIndex(4);
	sServer50513774912.Animation(1);
	sServer50513774912.Frame(0);
	sServer50513774912.PegRegistered(false);
	sServer50513774912.ZOrder(0);
	sServer50513774912.MapPositionX(0);
	sServer50513774912.MapPositionY(0);
	sServer50513774912.CheckCollisionWithMap(false);
	sServer50513774912.DisplayListNumber(0);
	sServer50513774912.Friction(0);
	sServer50513774912.ActivateCollisionWithSprite(false);
	sServer50513774912.VectorDirection(0,0,0);
	sServer50513774912.ShowVectorOfTranslation(false);
	sServer50513774912.CollisionType(LOOSECOLLISION);
	sServer50513774912.Speed((float)0.00);
	sServer50513774912.VariableNumber(0);
	sServer50513774912.ShowSpriteBoundingBox(false);
	sServer50513774912.ShowSpriteCollision(false);
	sServer50513774912.Gravity(false);
	gn->Add(sServer50513774912);

	Sprite sDoor63166953834;
	sDoor63166953834.Name("Door");
	sDoor63166953834.Visible(true);
	sDoor63166953834.Unused(true);
	sDoor63166953834.Pause(false);
	sDoor63166953834.Reflection(false);
	sDoor63166953834.MainCharacter(false);
	sDoor63166953834.BelongToMap("GameMap");
	sDoor63166953834.ActorIndex(4);
	sDoor63166953834.Animation(2);
	sDoor63166953834.Frame(0);
	sDoor63166953834.PegRegistered(false);
	sDoor63166953834.ZOrder(0);
	sDoor63166953834.MapPositionX(0);
	sDoor63166953834.MapPositionY(0);
	sDoor63166953834.CheckCollisionWithMap(false);
	sDoor63166953834.DisplayListNumber(0);
	sDoor63166953834.Friction(0);
	sDoor63166953834.ActivateCollisionWithSprite(false);
	sDoor63166953834.VectorDirection(0,0,0);
	sDoor63166953834.ShowVectorOfTranslation(false);
	sDoor63166953834.CollisionType(LOOSECOLLISION);
	sDoor63166953834.Speed((float)0.00);
	sDoor63166953834.VariableNumber(0);
	sDoor63166953834.ShowSpriteBoundingBox(false);
	sDoor63166953834.ShowSpriteCollision(false);
	sDoor63166953834.Gravity(false);
	gn->Add(sDoor63166953834);

	Sprite sBed172792946979;
	sBed172792946979.Name("Bed1");
	sBed172792946979.Visible(true);
	sBed172792946979.Unused(true);
	sBed172792946979.Pause(false);
	sBed172792946979.Reflection(false);
	sBed172792946979.MainCharacter(false);
	sBed172792946979.BelongToMap("GameMap");
	sBed172792946979.ActorIndex(4);
	sBed172792946979.Animation(4);
	sBed172792946979.Frame(0);
	sBed172792946979.PegRegistered(false);
	sBed172792946979.ZOrder(0);
	sBed172792946979.MapPositionX(0);
	sBed172792946979.MapPositionY(0);
	sBed172792946979.CheckCollisionWithMap(false);
	sBed172792946979.DisplayListNumber(0);
	sBed172792946979.Friction(0);
	sBed172792946979.ActivateCollisionWithSprite(false);
	sBed172792946979.VectorDirection(0,0,0);
	sBed172792946979.ShowVectorOfTranslation(false);
	sBed172792946979.CollisionType(LOOSECOLLISION);
	sBed172792946979.Speed((float)0.00);
	sBed172792946979.VariableNumber(0);
	sBed172792946979.ShowSpriteBoundingBox(false);
	sBed172792946979.ShowSpriteCollision(false);
	sBed172792946979.Gravity(false);
	gn->Add(sBed172792946979);

	Sprite sBed272888337011;
	sBed272888337011.Name("Bed2");
	sBed272888337011.Visible(true);
	sBed272888337011.Unused(true);
	sBed272888337011.Pause(false);
	sBed272888337011.Reflection(false);
	sBed272888337011.MainCharacter(false);
	sBed272888337011.BelongToMap("GameMap");
	sBed272888337011.ActorIndex(4);
	sBed272888337011.Animation(5);
	sBed272888337011.Frame(0);
	sBed272888337011.PegRegistered(false);
	sBed272888337011.ZOrder(0);
	sBed272888337011.MapPositionX(0);
	sBed272888337011.MapPositionY(0);
	sBed272888337011.CheckCollisionWithMap(false);
	sBed272888337011.DisplayListNumber(0);
	sBed272888337011.Friction(0);
	sBed272888337011.ActivateCollisionWithSprite(false);
	sBed272888337011.VectorDirection(0,0,0);
	sBed272888337011.ShowVectorOfTranslation(false);
	sBed272888337011.CollisionType(LOOSECOLLISION);
	sBed272888337011.Speed((float)0.00);
	sBed272888337011.VariableNumber(0);
	sBed272888337011.ShowSpriteBoundingBox(false);
	sBed272888337011.ShowSpriteCollision(false);
	sBed272888337011.Gravity(false);
	gn->Add(sBed272888337011);

	Sprite sBed372988737044;
	sBed372988737044.Name("Bed3");
	sBed372988737044.Visible(true);
	sBed372988737044.Unused(true);
	sBed372988737044.Pause(false);
	sBed372988737044.Reflection(false);
	sBed372988737044.MainCharacter(false);
	sBed372988737044.BelongToMap("GameMap");
	sBed372988737044.ActorIndex(4);
	sBed372988737044.Animation(6);
	sBed372988737044.Frame(0);
	sBed372988737044.PegRegistered(false);
	sBed372988737044.ZOrder(0);
	sBed372988737044.MapPositionX(0);
	sBed372988737044.MapPositionY(0);
	sBed372988737044.CheckCollisionWithMap(false);
	sBed372988737044.DisplayListNumber(0);
	sBed372988737044.Friction(0);
	sBed372988737044.ActivateCollisionWithSprite(false);
	sBed372988737044.VectorDirection(0,0,0);
	sBed372988737044.ShowVectorOfTranslation(false);
	sBed372988737044.CollisionType(LOOSECOLLISION);
	sBed372988737044.Speed((float)0.00);
	sBed372988737044.VariableNumber(0);
	sBed372988737044.ShowSpriteBoundingBox(false);
	sBed372988737044.ShowSpriteCollision(false);
	sBed372988737044.Gravity(false);
	gn->Add(sBed372988737044);

	Sprite sExit18967109554;
	sExit18967109554.Name("Exit");
	sExit18967109554.Visible(true);
	sExit18967109554.Unused(true);
	sExit18967109554.Pause(false);
	sExit18967109554.Reflection(false);
	sExit18967109554.MainCharacter(false);
	sExit18967109554.BelongToMap("GameMap");
	sExit18967109554.ActorIndex(4);
	sExit18967109554.Animation(3);
	sExit18967109554.Frame(0);
	sExit18967109554.PegRegistered(false);
	sExit18967109554.ZOrder(0);
	sExit18967109554.MapPositionX(0);
	sExit18967109554.MapPositionY(0);
	sExit18967109554.CheckCollisionWithMap(false);
	sExit18967109554.DisplayListNumber(0);
	sExit18967109554.Friction(0);
	sExit18967109554.ActivateCollisionWithSprite(false);
	sExit18967109554.VectorDirection(0,0,0);
	sExit18967109554.ShowVectorOfTranslation(false);
	sExit18967109554.CollisionType(LOOSECOLLISION);
	sExit18967109554.Speed((float)0.00);
	sExit18967109554.VariableNumber(0);
	sExit18967109554.ShowSpriteBoundingBox(false);
	sExit18967109554.ShowSpriteCollision(false);
	sExit18967109554.Gravity(false);
	gn->Add(sExit18967109554);

	Sprite smarc139410976120;
	smarc139410976120.Name("marc");
	smarc139410976120.Visible(true);
	smarc139410976120.Unused(false);
	smarc139410976120.Pause(false);
	smarc139410976120.Reflection(false);
	smarc139410976120.MainCharacter(false);
	smarc139410976120.BelongToMap("GameMap");
	smarc139410976120.ActorIndex(2);
	smarc139410976120.Animation(6);
	smarc139410976120.Frame(0);
	smarc139410976120.PegRegistered(false);
	smarc139410976120.ZOrder(0);
	smarc139410976120.MapPositionX(30);
	smarc139410976120.MapPositionY(30);
	smarc139410976120.CheckCollisionWithMap(false);
	smarc139410976120.DisplayListNumber(0);
	smarc139410976120.Friction(0);
	smarc139410976120.ActivateCollisionWithSprite(false);
	smarc139410976120.behavior.AddFunction(FN_KILL_CODE_L4);
	smarc139410976120.VectorDirection(0,0,0);
	smarc139410976120.ShowVectorOfTranslation(false);
	smarc139410976120.CollisionType(LOOSECOLLISION);
	smarc139410976120.Speed((float)0.00);
	smarc139410976120.VariableNumber(0);
	smarc139410976120.ShowSpriteBoundingBox(false);
	smarc139410976120.ShowSpriteCollision(false);
	smarc139410976120.Gravity(false);
	gn->Add(smarc139410976120);

	Sprite sJacob139509046152;
	sJacob139509046152.Name("Jacob");
	sJacob139509046152.Visible(true);
	sJacob139509046152.Unused(false);
	sJacob139509046152.Pause(false);
	sJacob139509046152.Reflection(false);
	sJacob139509046152.MainCharacter(false);
	sJacob139509046152.BelongToMap("GameMap");
	sJacob139509046152.ActorIndex(2);
	sJacob139509046152.Animation(7);
	sJacob139509046152.Frame(0);
	sJacob139509046152.PegRegistered(false);
	sJacob139509046152.ZOrder(0);
	sJacob139509046152.MapPositionX(60);
	sJacob139509046152.MapPositionY(30);
	sJacob139509046152.CheckCollisionWithMap(false);
	sJacob139509046152.DisplayListNumber(0);
	sJacob139509046152.Friction(0);
	sJacob139509046152.ActivateCollisionWithSprite(false);
	sJacob139509046152.behavior.AddFunction(FN_KILL_CODE_L4);
	sJacob139509046152.VectorDirection(0,0,0);
	sJacob139509046152.ShowVectorOfTranslation(false);
	sJacob139509046152.CollisionType(LOOSECOLLISION);
	sJacob139509046152.Speed((float)0.00);
	sJacob139509046152.VariableNumber(0);
	sJacob139509046152.ShowSpriteBoundingBox(false);
	sJacob139509046152.ShowSpriteCollision(false);
	sJacob139509046152.Gravity(false);
	gn->Add(sJacob139509046152);

	Sprite sReu139603366182;
	sReu139603366182.Name("Reu");
	sReu139603366182.Visible(true);
	sReu139603366182.Unused(false);
	sReu139603366182.Pause(false);
	sReu139603366182.Reflection(false);
	sReu139603366182.MainCharacter(false);
	sReu139603366182.BelongToMap("GameMap");
	sReu139603366182.ActorIndex(2);
	sReu139603366182.Animation(5);
	sReu139603366182.Frame(0);
	sReu139603366182.PegRegistered(false);
	sReu139603366182.ZOrder(0);
	sReu139603366182.MapPositionX(630);
	sReu139603366182.MapPositionY(30);
	sReu139603366182.CheckCollisionWithMap(false);
	sReu139603366182.DisplayListNumber(0);
	sReu139603366182.Friction(0);
	sReu139603366182.ActivateCollisionWithSprite(false);
	sReu139603366182.behavior.AddFunction(FN_KILL_CODE_L4);
	sReu139603366182.VectorDirection(0,0,0);
	sReu139603366182.ShowVectorOfTranslation(false);
	sReu139603366182.CollisionType(LOOSECOLLISION);
	sReu139603366182.Speed((float)0.00);
	sReu139603366182.VariableNumber(0);
	sReu139603366182.ShowSpriteBoundingBox(false);
	sReu139603366182.ShowSpriteCollision(false);
	sReu139603366182.Gravity(false);
	gn->Add(sReu139603366182);

	Sprite sChad139696736211;
	sChad139696736211.Name("Chad");
	sChad139696736211.Visible(true);
	sChad139696736211.Unused(false);
	sChad139696736211.Pause(false);
	sChad139696736211.Reflection(false);
	sChad139696736211.MainCharacter(false);
	sChad139696736211.BelongToMap("GameMap");
	sChad139696736211.ActorIndex(2);
	sChad139696736211.Animation(4);
	sChad139696736211.Frame(0);
	sChad139696736211.PegRegistered(false);
	sChad139696736211.ZOrder(0);
	sChad139696736211.MapPositionX(420);
	sChad139696736211.MapPositionY(60);
	sChad139696736211.CheckCollisionWithMap(false);
	sChad139696736211.DisplayListNumber(0);
	sChad139696736211.Friction(0);
	sChad139696736211.ActivateCollisionWithSprite(false);
	sChad139696736211.behavior.AddStateMachine(SM_ACCESS_TRACKER);
	sChad139696736211.behavior.AddStateMachine(SM_ALIEN2_ANIMATION);
	sChad139696736211.behavior.AddFunction(FN_KILL_CODE_L4);
	sChad139696736211.VectorDirection(0,0,0);
	sChad139696736211.ShowVectorOfTranslation(false);
	sChad139696736211.CollisionType(LOOSECOLLISION);
	sChad139696736211.Speed((float)1.00);
	sChad139696736211.VariableNumber(0);
	sChad139696736211.ShowSpriteBoundingBox(false);
	sChad139696736211.ShowSpriteCollision(false);
	sChad139696736211.Gravity(false);
	gn->Add(sChad139696736211);

	Sprite sAlex139794906244;
	sAlex139794906244.Name("Alex");
	sAlex139794906244.Visible(true);
	sAlex139794906244.Unused(false);
	sAlex139794906244.Pause(false);
	sAlex139794906244.Reflection(false);
	sAlex139794906244.MainCharacter(false);
	sAlex139794906244.BelongToMap("GameMap");
	sAlex139794906244.ActorIndex(2);
	sAlex139794906244.Animation(5);
	sAlex139794906244.Frame(0);
	sAlex139794906244.PegRegistered(false);
	sAlex139794906244.ZOrder(0);
	sAlex139794906244.MapPositionX(210);
	sAlex139794906244.MapPositionY(210);
	sAlex139794906244.CheckCollisionWithMap(false);
	sAlex139794906244.DisplayListNumber(0);
	sAlex139794906244.Friction(0);
	sAlex139794906244.ActivateCollisionWithSprite(false);
	sAlex139794906244.behavior.AddStateMachine(SM_ACCESS_TRACKER);
	sAlex139794906244.behavior.AddStateMachine(SM_ALIEN2_ANIMATION);
	sAlex139794906244.behavior.AddFunction(FN_KILL_CODE_L4);
	sAlex139794906244.VectorDirection(0,0,0);
	sAlex139794906244.ShowVectorOfTranslation(false);
	sAlex139794906244.CollisionType(LOOSECOLLISION);
	sAlex139794906244.Speed((float)1.00);
	sAlex139794906244.VariableNumber(0);
	sAlex139794906244.ShowSpriteBoundingBox(false);
	sAlex139794906244.ShowSpriteCollision(false);
	sAlex139794906244.Gravity(false);
	gn->Add(sAlex139794906244);

	Sprite sNick139917526283;
	sNick139917526283.Name("Nick");
	sNick139917526283.Visible(true);
	sNick139917526283.Unused(false);
	sNick139917526283.Pause(false);
	sNick139917526283.Reflection(false);
	sNick139917526283.MainCharacter(false);
	sNick139917526283.BelongToMap("GameMap");
	sNick139917526283.ActorIndex(1);
	sNick139917526283.Animation(7);
	sNick139917526283.Frame(0);
	sNick139917526283.PegRegistered(false);
	sNick139917526283.ZOrder(0);
	sNick139917526283.MapPositionX(30);
	sNick139917526283.MapPositionY(300);
	sNick139917526283.CheckCollisionWithMap(false);
	sNick139917526283.DisplayListNumber(0);
	sNick139917526283.Friction(0);
	sNick139917526283.ActivateCollisionWithSprite(false);
	sNick139917526283.behavior.AddFunction(FN_KILL_CODE_L4);
	sNick139917526283.VectorDirection(0,0,0);
	sNick139917526283.ShowVectorOfTranslation(false);
	sNick139917526283.CollisionType(LOOSECOLLISION);
	sNick139917526283.Speed((float)0.00);
	sNick139917526283.VariableNumber(0);
	sNick139917526283.ShowSpriteBoundingBox(false);
	sNick139917526283.ShowSpriteCollision(false);
	sNick139917526283.Gravity(false);
	gn->Add(sNick139917526283);

	Sprite sTan140019946319;
	sTan140019946319.Name("Tan");
	sTan140019946319.Visible(true);
	sTan140019946319.Unused(false);
	sTan140019946319.Pause(false);
	sTan140019946319.Reflection(false);
	sTan140019946319.MainCharacter(false);
	sTan140019946319.BelongToMap("GameMap");
	sTan140019946319.ActorIndex(2);
	sTan140019946319.Animation(6);
	sTan140019946319.Frame(0);
	sTan140019946319.PegRegistered(false);
	sTan140019946319.ZOrder(0);
	sTan140019946319.MapPositionX(300);
	sTan140019946319.MapPositionY(540);
	sTan140019946319.CheckCollisionWithMap(false);
	sTan140019946319.DisplayListNumber(0);
	sTan140019946319.Friction(0);
	sTan140019946319.ActivateCollisionWithSprite(false);
	sTan140019946319.behavior.AddStateMachine(SM_LEFT_RIGHT);
	sTan140019946319.behavior.AddStateMachine(SM_ALIEN2_ANIMATION);
	sTan140019946319.behavior.AddFunction(FN_KILL_CODE_L4);
	sTan140019946319.VectorDirection(0,0,0);
	sTan140019946319.ShowVectorOfTranslation(false);
	sTan140019946319.CollisionType(LOOSECOLLISION);
	sTan140019946319.Speed((float)2.00);
	sTan140019946319.VariableNumber(0);
	sTan140019946319.ShowSpriteBoundingBox(false);
	sTan140019946319.ShowSpriteCollision(false);
	sTan140019946319.Gravity(false);
	gn->Add(sTan140019946319);

	Sprite sStaci140152326361;
	sStaci140152326361.Name("Staci");
	sStaci140152326361.Visible(true);
	sStaci140152326361.Unused(false);
	sStaci140152326361.Pause(false);
	sStaci140152326361.Reflection(false);
	sStaci140152326361.MainCharacter(false);
	sStaci140152326361.BelongToMap("GameMap");
	sStaci140152326361.ActorIndex(1);
	sStaci140152326361.Animation(6);
	sStaci140152326361.Frame(0);
	sStaci140152326361.PegRegistered(false);
	sStaci140152326361.ZOrder(0);
	sStaci140152326361.MapPositionX(330);
	sStaci140152326361.MapPositionY(390);
	sStaci140152326361.CheckCollisionWithMap(false);
	sStaci140152326361.DisplayListNumber(0);
	sStaci140152326361.Friction(0);
	sStaci140152326361.ActivateCollisionWithSprite(false);
	sStaci140152326361.behavior.AddStateMachine(SM_STACI_AL);
	sStaci140152326361.behavior.AddStateMachine(SM_ALIEN1_ANIMATION);
	sStaci140152326361.behavior.AddFunction(FN_KILL_CODE_L4);
	sStaci140152326361.VectorDirection(0,0,0);
	sStaci140152326361.ShowVectorOfTranslation(false);
	sStaci140152326361.CollisionType(LOOSECOLLISION);
	sStaci140152326361.Speed((float)5.00);
	sStaci140152326361.VariableNumber(0);
	sStaci140152326361.ShowSpriteBoundingBox(false);
	sStaci140152326361.ShowSpriteCollision(false);
	sStaci140152326361.Gravity(false);
	gn->Add(sStaci140152326361);

	Variable tScore;
	tScore.Name("Score");
	tScore.Visible(true);
	tScore.Unused(false);
	tScore.Pause(false);
	tScore.FontName("OCR A Extended");
	tScore.Width(0);
	tScore.Height(15.75);
	tScore.Weight(400);
	tScore.Color(RGB(192,192,192));
	tScore.Italic(false);
	tScore.StrikeOut(false);
	tScore.Underline(false);

	FunRect rectScore = {742,524,792,564};
	tScore.Frame(rectScore);
	tScore.ShowFrame(false);
	tScore.InWorld(true);
	tScore.ActivateOutOfViewport(true);
	tScore.BelongToMap("GameMap");
	tScore.TopMost(true);
	tScore.DisplayType(Variable::RespectingWords);
	tScore.TopMargin(0);
	tScore.LeftMargin(0);
	tScore.LineSpacing(0);
	tScore.LetterSpacing(0);
	tScore.LeadingSpaces(true);
	tScore.Effect(Variable::MummyEffect);
	tScore.Delay(0,0);
	tScore.OnlyIntegerPart(true);
	tScore = 0.000000;
	gn->Add(tScore);

	Variable tout_of;
	tout_of.Name("out_of");
	tout_of.Visible(true);
	tout_of.Unused(false);
	tout_of.Pause(false);
	tout_of.FontName("OCR A Extended");
	tout_of.Width(0);
	tout_of.Height(15.75);
	tout_of.Weight(400);
	tout_of.Color(RGB(128,128,128));
	tout_of.Italic(false);
	tout_of.StrikeOut(false);
	tout_of.Underline(false);

	FunRect rectout_of = {759,524,799,584};
	tout_of.Frame(rectout_of);
	tout_of.ShowFrame(false);
	tout_of.InWorld(true);
	tout_of.ActivateOutOfViewport(true);
	tout_of.BelongToMap("GameMap");
	tout_of.TopMost(true);
	tout_of.DisplayType(Variable::RespectingWords);
	tout_of.TopMargin(0);
	tout_of.LeftMargin(0);
	tout_of.LineSpacing(0);
	tout_of.LetterSpacing(0);
	tout_of.LeadingSpaces(true);
	tout_of.Effect(Variable::MummyEffect);
	tout_of.Delay(0,0);
	tout_of = "/5";
	gn->Add(tout_of);

	Variable tKeycards;
	tKeycards.Name("Keycards");
	tKeycards.Visible(true);
	tKeycards.Unused(false);
	tKeycards.Pause(false);
	tKeycards.FontName("OCR A Extended");
	tKeycards.Width(0);
	tKeycards.Height(12.00);
	tKeycards.Weight(400);
	tKeycards.Color(RGB(255,0,0));
	tKeycards.Italic(false);
	tKeycards.StrikeOut(false);
	tKeycards.Underline(false);

	FunRect rectKeycards = {731,548,800,592};
	tKeycards.Frame(rectKeycards);
	tKeycards.ShowFrame(false);
	tKeycards.InWorld(true);
	tKeycards.ActivateOutOfViewport(true);
	tKeycards.BelongToMap("GameMap");
	tKeycards.TopMost(true);
	tKeycards.DisplayType(Variable::RespectingWords);
	tKeycards.TopMargin(0);
	tKeycards.LeftMargin(0);
	tKeycards.LineSpacing(0);
	tKeycards.LetterSpacing(0);
	tKeycards.LeadingSpaces(true);
	tKeycards.Effect(Variable::MummyEffect);
	tKeycards.Delay(0,0);
	tKeycards = "Test Lab 2";
	gn->Add(tKeycards);


	FILE*f1;
	
	f1=fopen("Test Labs 2.txt","rt");
	
	//y is # of rows & x is # of Columns
	for(int y=0;y<20;y++)
	{
		char ch;
		for(int x=0;x<24;x++)
			{
				fscanf(f1,"%c",&ch);
							if(ch=='W')
			{					
									MakeWall(x,y);
									binaryMap[x][y]=0;
							}
	
							else if(ch=='K')
			{	
									MakeKey(x,y);
									binaryMap[x][y]=1;
	
							}  
							else if(ch=='A')
			{	
									MakeDoor(x,y);
									binaryMap[x][y]=0;
	
							}  
	
							else if(ch=='S')
			{	
									MakeServer(x,y);
									binaryMap[x][y]=0;
	
							}  
							else if(ch=='B')
			{	
									MakeBed1(x,y);
									binaryMap[x][y]=0;
	
							}  
	
							 else if(ch=='X')
			{					
									MakeBed1(x,y);
									binaryMap[x][y]=0;
							}
							else if(ch=='Y')
			{					
									MakeBed2(x,y);
									binaryMap[x][y]=0;
							}
							else if(ch=='Z')
			{					
									MakeBed3(x,y);
									binaryMap[x][y]=0;
							} 
							else if(ch=='E')
			{	
									MakeExit(x,y);
									binaryMap[x][y]=0;
	
							}   
							else{
	
								//	MakeFood(x,y);
									binaryMap[x][y]=1;
							}
		}
		fscanf(f1,"%c",&ch);
	}
	fclose(f1);

};

void End_Level_4Function(GameNode *gn)
{
	

};

void Exit_Level_4Function(GameNode *gn)
{
};

void Init_Level_5Function(GameNode *gn)
{
#ifdef ERROR_MESSAGES
	pConsole->Color(RGB(0,0,0));
#endif

	gn->behavior.AddFunction(FN_RESTART);
	gn->behavior.AddFunction(FN_KILLLIVES);
	gn->WorldWidth(800);
	gn->WorldHeight(600);

	gn->FPStoMS(60);
	gn->QuitOnEscape(true);
	gn->ShowScrollingBoundingBox(false);

	gn->viewPort.ViewPortScrollingBB(0,0,640,480);

	gn->viewPort.WorldXPos(0);
	gn->viewPort.WorldYPos(0);
	gn->viewPort.MaxInflateBBLeft(0);
	gn->viewPort.MaxInflateBBTop(0);
	gn->viewPort.MaxInflateBBRight(0);
	gn->viewPort.MaxInflateBBBottom(0);

	gn->viewPort.ViewPortWidth(800);
	gn->viewPort.ViewPortHeight(600);

	FunRect rectGameMap = {0,0,800,600};
	Map mGameMap("GameMap","Background.bmp",Map::STANDARDMAP,0,0,0,true,rectGameMap);
	mGameMap.SpeedX(0.00);
	mGameMap.SpeedY(0.00);
	mGameMap.ScrollRatioX(0.00);
	mGameMap.ScrollRatioY(0.00);
	mGameMap.UseTransparency(false);
	mGameMap.Visible(true);
	mGameMap.Unused(false);
	mGameMap.Pause(false);
	mGameMap.SpacePartitionGridSize(128);
	mGameMap.ShowMapCollision(false);
	gn->Add(mGameMap);

	Sprite sWall91135142968;
	sWall91135142968.Name("Wall");
	sWall91135142968.Visible(true);
	sWall91135142968.Unused(false);
	sWall91135142968.Pause(false);
	sWall91135142968.Reflection(false);
	sWall91135142968.MainCharacter(false);
	sWall91135142968.BelongToMap("GameMap");
	sWall91135142968.ActorIndex(4);
	sWall91135142968.Animation(0);
	sWall91135142968.Frame(0);
	sWall91135142968.PegRegistered(false);
	sWall91135142968.ZOrder(0);
	sWall91135142968.MapPositionX(0);
	sWall91135142968.MapPositionY(0);
	sWall91135142968.CheckCollisionWithMap(false);
	sWall91135142968.DisplayListNumber(0);
	sWall91135142968.Friction(0);
	sWall91135142968.ActivateCollisionWithSprite(false);
	sWall91135142968.VectorDirection(0,0,0);
	sWall91135142968.ShowVectorOfTranslation(false);
	sWall91135142968.CollisionType(LOOSECOLLISION);
	sWall91135142968.Speed((float)0.00);
	sWall91135142968.VariableNumber(0);
	sWall91135142968.ShowSpriteBoundingBox(false);
	sWall91135142968.ShowSpriteCollision(false);
	sWall91135142968.Gravity(false);
	gn->Add(sWall91135142968);

	Sprite sSpaceman163327071160;
	sSpaceman163327071160.Name("Spaceman");
	sSpaceman163327071160.Visible(true);
	sSpaceman163327071160.Unused(false);
	sSpaceman163327071160.Pause(false);
	sSpaceman163327071160.Reflection(false);
	sSpaceman163327071160.MainCharacter(false);
	sSpaceman163327071160.BelongToMap("GameMap");
	sSpaceman163327071160.ActorIndex(0);
	sSpaceman163327071160.Animation(3);
	sSpaceman163327071160.Frame(1);
	sSpaceman163327071160.PegRegistered(false);
	sSpaceman163327071160.ZOrder(0);
	sSpaceman163327071160.MapPositionX(30);
	sSpaceman163327071160.MapPositionY(540);
	sSpaceman163327071160.CheckCollisionWithMap(false);
	sSpaceman163327071160.DisplayListNumber(0);
	sSpaceman163327071160.Friction(0);
	sSpaceman163327071160.ActivateCollisionWithSprite(false);
	sSpaceman163327071160.behavior.AddStateMachine(SM_MOVEMENT);
	sSpaceman163327071160.behavior.AddStateMachine(SM_SPACEMAN_ANIMATION);
	sSpaceman163327071160.behavior.AddFunction(FN_HALL2TOLQ);
	sSpaceman163327071160.VectorDirection(0,0,0);
	sSpaceman163327071160.ShowVectorOfTranslation(false);
	sSpaceman163327071160.CollisionType(LOOSECOLLISION);
	sSpaceman163327071160.Speed((float)2.00);
	sSpaceman163327071160.VariableNumber(0);
	sSpaceman163327071160.ShowSpriteBoundingBox(false);
	sSpaceman163327071160.ShowSpriteCollision(false);
	sSpaceman163327071160.Gravity(false);
	gn->Add(sSpaceman163327071160);

	Sprite sKey1811159279895;
	sKey1811159279895.Name("Key");
	sKey1811159279895.Visible(true);
	sKey1811159279895.Unused(true);
	sKey1811159279895.Pause(false);
	sKey1811159279895.Reflection(false);
	sKey1811159279895.MainCharacter(false);
	sKey1811159279895.BelongToMap("GameMap");
	sKey1811159279895.ActorIndex(5);
	sKey1811159279895.Animation(0);
	sKey1811159279895.Frame(0);
	sKey1811159279895.PegRegistered(false);
	sKey1811159279895.ZOrder(0);
	sKey1811159279895.MapPositionX(30);
	sKey1811159279895.MapPositionY(60);
	sKey1811159279895.CheckCollisionWithMap(false);
	sKey1811159279895.DisplayListNumber(0);
	sKey1811159279895.Friction(0);
	sKey1811159279895.ActivateCollisionWithSprite(false);
	sKey1811159279895.behavior.AddFunction(FN_KEYBEHAVIORFN);
	sKey1811159279895.VectorDirection(0,0,0);
	sKey1811159279895.ShowVectorOfTranslation(false);
	sKey1811159279895.CollisionType(LOOSECOLLISION);
	sKey1811159279895.Speed((float)0.00);
	sKey1811159279895.VariableNumber(0);
	sKey1811159279895.ShowSpriteBoundingBox(false);
	sKey1811159279895.ShowSpriteCollision(false);
	sKey1811159279895.Gravity(false);
	gn->Add(sKey1811159279895);

	Sprite sVision2607752001320;
	sVision2607752001320.Name("Vision");
	sVision2607752001320.Visible(false);
	sVision2607752001320.Unused(false);
	sVision2607752001320.Pause(false);
	sVision2607752001320.Reflection(false);
	sVision2607752001320.MainCharacter(false);
	sVision2607752001320.BelongToMap("GameMap");
	sVision2607752001320.ActorIndex(6);
	sVision2607752001320.Animation(0);
	sVision2607752001320.Frame(0);
	sVision2607752001320.PegRegistered(false);
	sVision2607752001320.ZOrder(0);
	sVision2607752001320.MapPositionX(0);
	sVision2607752001320.MapPositionY(0);
	sVision2607752001320.CheckCollisionWithMap(false);
	sVision2607752001320.DisplayListNumber(3);
	sVision2607752001320.Friction(0);
	sVision2607752001320.ActivateCollisionWithSprite(false);
	sVision2607752001320.behavior.AddFunction(FN_VISIONTRACKER);
	sVision2607752001320.behavior.AddFunction(FN_DIFI);
	sVision2607752001320.VectorDirection(0,0,0);
	sVision2607752001320.ShowVectorOfTranslation(false);
	sVision2607752001320.CollisionType(LOOSECOLLISION);
	sVision2607752001320.Speed((float)5.00);
	sVision2607752001320.VariableNumber(0);
	sVision2607752001320.ShowSpriteBoundingBox(false);
	sVision2607752001320.ShowSpriteCollision(false);
	sVision2607752001320.Gravity(false);
	gn->Add(sVision2607752001320);

	Sprite sLife_Bar78305077291;
	sLife_Bar78305077291.Name("Life_Bar");
	sLife_Bar78305077291.Visible(true);
	sLife_Bar78305077291.Unused(false);
	sLife_Bar78305077291.Pause(false);
	sLife_Bar78305077291.Reflection(false);
	sLife_Bar78305077291.MainCharacter(false);
	sLife_Bar78305077291.BelongToMap("GameMap");
	sLife_Bar78305077291.ActorIndex(9);
	sLife_Bar78305077291.Animation(2);
	sLife_Bar78305077291.Frame(0);
	sLife_Bar78305077291.PegRegistered(false);
	sLife_Bar78305077291.ZOrder(0);
	sLife_Bar78305077291.MapPositionX(720);
	sLife_Bar78305077291.MapPositionY(-10);
	sLife_Bar78305077291.CheckCollisionWithMap(false);
	sLife_Bar78305077291.DisplayListNumber(4);
	sLife_Bar78305077291.Friction(0);
	sLife_Bar78305077291.ActivateCollisionWithSprite(false);
	sLife_Bar78305077291.VectorDirection(0,0,0);
	sLife_Bar78305077291.ShowVectorOfTranslation(false);
	sLife_Bar78305077291.CollisionType(LOOSECOLLISION);
	sLife_Bar78305077291.Speed((float)0.00);
	sLife_Bar78305077291.VariableNumber(0);
	sLife_Bar78305077291.ShowSpriteBoundingBox(false);
	sLife_Bar78305077291.ShowSpriteCollision(false);
	sLife_Bar78305077291.Gravity(false);
	gn->Add(sLife_Bar78305077291);

	Sprite sGreenBar116749754390;
	sGreenBar116749754390.Name("GreenBar1");
	sGreenBar116749754390.Visible(true);
	sGreenBar116749754390.Unused(false);
	sGreenBar116749754390.Pause(false);
	sGreenBar116749754390.Reflection(false);
	sGreenBar116749754390.MainCharacter(false);
	sGreenBar116749754390.BelongToMap("GameMap");
	sGreenBar116749754390.ActorIndex(9);
	sGreenBar116749754390.Animation(1);
	sGreenBar116749754390.Frame(0);
	sGreenBar116749754390.PegRegistered(false);
	sGreenBar116749754390.ZOrder(0);
	sGreenBar116749754390.MapPositionX(720);
	sGreenBar116749754390.MapPositionY(-10);
	sGreenBar116749754390.CheckCollisionWithMap(false);
	sGreenBar116749754390.DisplayListNumber(5);
	sGreenBar116749754390.Friction(0);
	sGreenBar116749754390.ActivateCollisionWithSprite(false);
	sGreenBar116749754390.VectorDirection(0,0,0);
	sGreenBar116749754390.ShowVectorOfTranslation(false);
	sGreenBar116749754390.CollisionType(LOOSECOLLISION);
	sGreenBar116749754390.Speed((float)0.00);
	sGreenBar116749754390.VariableNumber(0);
	sGreenBar116749754390.ShowSpriteBoundingBox(false);
	sGreenBar116749754390.ShowSpriteCollision(false);
	sGreenBar116749754390.Gravity(false);
	gn->Add(sGreenBar116749754390);

	Sprite sGreenBar234880513107;
	sGreenBar234880513107.Name("GreenBar2");
	sGreenBar234880513107.Visible(true);
	sGreenBar234880513107.Unused(false);
	sGreenBar234880513107.Pause(false);
	sGreenBar234880513107.Reflection(false);
	sGreenBar234880513107.MainCharacter(false);
	sGreenBar234880513107.BelongToMap("GameMap");
	sGreenBar234880513107.ActorIndex(9);
	sGreenBar234880513107.Animation(1);
	sGreenBar234880513107.Frame(0);
	sGreenBar234880513107.PegRegistered(false);
	sGreenBar234880513107.ZOrder(0);
	sGreenBar234880513107.MapPositionX(720);
	sGreenBar234880513107.MapPositionY(91);
	sGreenBar234880513107.CheckCollisionWithMap(false);
	sGreenBar234880513107.DisplayListNumber(5);
	sGreenBar234880513107.Friction(0);
	sGreenBar234880513107.ActivateCollisionWithSprite(false);
	sGreenBar234880513107.VectorDirection(0,0,0);
	sGreenBar234880513107.ShowVectorOfTranslation(false);
	sGreenBar234880513107.CollisionType(LOOSECOLLISION);
	sGreenBar234880513107.Speed((float)0.00);
	sGreenBar234880513107.VariableNumber(0);
	sGreenBar234880513107.ShowSpriteBoundingBox(false);
	sGreenBar234880513107.ShowSpriteCollision(false);
	sGreenBar234880513107.Gravity(false);
	gn->Add(sGreenBar234880513107);

	Sprite sGreenBar336183863535;
	sGreenBar336183863535.Name("GreenBar3");
	sGreenBar336183863535.Visible(true);
	sGreenBar336183863535.Unused(false);
	sGreenBar336183863535.Pause(false);
	sGreenBar336183863535.Reflection(false);
	sGreenBar336183863535.MainCharacter(false);
	sGreenBar336183863535.BelongToMap("GameMap");
	sGreenBar336183863535.ActorIndex(9);
	sGreenBar336183863535.Animation(1);
	sGreenBar336183863535.Frame(0);
	sGreenBar336183863535.PegRegistered(false);
	sGreenBar336183863535.ZOrder(0);
	sGreenBar336183863535.MapPositionX(720);
	sGreenBar336183863535.MapPositionY(192);
	sGreenBar336183863535.CheckCollisionWithMap(false);
	sGreenBar336183863535.DisplayListNumber(5);
	sGreenBar336183863535.Friction(0);
	sGreenBar336183863535.ActivateCollisionWithSprite(false);
	sGreenBar336183863535.VectorDirection(0,0,0);
	sGreenBar336183863535.ShowVectorOfTranslation(false);
	sGreenBar336183863535.CollisionType(LOOSECOLLISION);
	sGreenBar336183863535.Speed((float)0.00);
	sGreenBar336183863535.VariableNumber(0);
	sGreenBar336183863535.ShowSpriteBoundingBox(false);
	sGreenBar336183863535.ShowSpriteCollision(false);
	sGreenBar336183863535.Gravity(false);
	gn->Add(sGreenBar336183863535);

	Sprite sGreenBar435235313225;
	sGreenBar435235313225.Name("GreenBar4");
	sGreenBar435235313225.Visible(true);
	sGreenBar435235313225.Unused(false);
	sGreenBar435235313225.Pause(false);
	sGreenBar435235313225.Reflection(false);
	sGreenBar435235313225.MainCharacter(false);
	sGreenBar435235313225.BelongToMap("GameMap");
	sGreenBar435235313225.ActorIndex(9);
	sGreenBar435235313225.Animation(1);
	sGreenBar435235313225.Frame(0);
	sGreenBar435235313225.PegRegistered(false);
	sGreenBar435235313225.ZOrder(0);
	sGreenBar435235313225.MapPositionX(720);
	sGreenBar435235313225.MapPositionY(293);
	sGreenBar435235313225.CheckCollisionWithMap(false);
	sGreenBar435235313225.DisplayListNumber(5);
	sGreenBar435235313225.Friction(0);
	sGreenBar435235313225.ActivateCollisionWithSprite(false);
	sGreenBar435235313225.VectorDirection(0,0,0);
	sGreenBar435235313225.ShowVectorOfTranslation(false);
	sGreenBar435235313225.CollisionType(LOOSECOLLISION);
	sGreenBar435235313225.Speed((float)0.00);
	sGreenBar435235313225.VariableNumber(0);
	sGreenBar435235313225.ShowSpriteBoundingBox(false);
	sGreenBar435235313225.ShowSpriteCollision(false);
	sGreenBar435235313225.Gravity(false);
	gn->Add(sGreenBar435235313225);

	Sprite sGreenBar535143113195;
	sGreenBar535143113195.Name("GreenBar5");
	sGreenBar535143113195.Visible(true);
	sGreenBar535143113195.Unused(false);
	sGreenBar535143113195.Pause(false);
	sGreenBar535143113195.Reflection(false);
	sGreenBar535143113195.MainCharacter(false);
	sGreenBar535143113195.BelongToMap("GameMap");
	sGreenBar535143113195.ActorIndex(9);
	sGreenBar535143113195.Animation(1);
	sGreenBar535143113195.Frame(0);
	sGreenBar535143113195.PegRegistered(false);
	sGreenBar535143113195.ZOrder(0);
	sGreenBar535143113195.MapPositionX(720);
	sGreenBar535143113195.MapPositionY(394);
	sGreenBar535143113195.CheckCollisionWithMap(false);
	sGreenBar535143113195.DisplayListNumber(5);
	sGreenBar535143113195.Friction(0);
	sGreenBar535143113195.ActivateCollisionWithSprite(false);
	sGreenBar535143113195.VectorDirection(0,0,0);
	sGreenBar535143113195.ShowVectorOfTranslation(false);
	sGreenBar535143113195.CollisionType(LOOSECOLLISION);
	sGreenBar535143113195.Speed((float)0.00);
	sGreenBar535143113195.VariableNumber(0);
	sGreenBar535143113195.ShowSpriteBoundingBox(false);
	sGreenBar535143113195.ShowSpriteCollision(false);
	sGreenBar535143113195.Gravity(false);
	gn->Add(sGreenBar535143113195);

	Sprite sStatic46161056791;
	sStatic46161056791.Name("Static");
	sStatic46161056791.Visible(false);
	sStatic46161056791.Unused(false);
	sStatic46161056791.Pause(false);
	sStatic46161056791.Reflection(false);
	sStatic46161056791.MainCharacter(false);
	sStatic46161056791.BelongToMap("GameMap");
	sStatic46161056791.ActorIndex(7);
	sStatic46161056791.Animation(0);
	sStatic46161056791.Frame(0);
	sStatic46161056791.PegRegistered(false);
	sStatic46161056791.ZOrder(0);
	sStatic46161056791.MapPositionX(0);
	sStatic46161056791.MapPositionY(0);
	sStatic46161056791.CheckCollisionWithMap(false);
	sStatic46161056791.DisplayListNumber(6);
	sStatic46161056791.Friction(0);
	sStatic46161056791.ActivateCollisionWithSprite(false);
	sStatic46161056791.VectorDirection(0,0,0);
	sStatic46161056791.ShowVectorOfTranslation(false);
	sStatic46161056791.CollisionType(LOOSECOLLISION);
	sStatic46161056791.Speed((float)0.00);
	sStatic46161056791.VariableNumber(0);
	sStatic46161056791.ShowSpriteBoundingBox(false);
	sStatic46161056791.ShowSpriteCollision(false);
	sStatic46161056791.Gravity(false);
	gn->Add(sStatic46161056791);

	Sprite sServer50513774912;
	sServer50513774912.Name("Server");
	sServer50513774912.Visible(true);
	sServer50513774912.Unused(true);
	sServer50513774912.Pause(false);
	sServer50513774912.Reflection(false);
	sServer50513774912.MainCharacter(false);
	sServer50513774912.BelongToMap("GameMap");
	sServer50513774912.ActorIndex(4);
	sServer50513774912.Animation(1);
	sServer50513774912.Frame(0);
	sServer50513774912.PegRegistered(false);
	sServer50513774912.ZOrder(0);
	sServer50513774912.MapPositionX(0);
	sServer50513774912.MapPositionY(0);
	sServer50513774912.CheckCollisionWithMap(false);
	sServer50513774912.DisplayListNumber(0);
	sServer50513774912.Friction(0);
	sServer50513774912.ActivateCollisionWithSprite(false);
	sServer50513774912.VectorDirection(0,0,0);
	sServer50513774912.ShowVectorOfTranslation(false);
	sServer50513774912.CollisionType(LOOSECOLLISION);
	sServer50513774912.Speed((float)0.00);
	sServer50513774912.VariableNumber(0);
	sServer50513774912.ShowSpriteBoundingBox(false);
	sServer50513774912.ShowSpriteCollision(false);
	sServer50513774912.Gravity(false);
	gn->Add(sServer50513774912);

	Sprite sDoor63275153870;
	sDoor63275153870.Name("Door");
	sDoor63275153870.Visible(true);
	sDoor63275153870.Unused(true);
	sDoor63275153870.Pause(false);
	sDoor63275153870.Reflection(false);
	sDoor63275153870.MainCharacter(false);
	sDoor63275153870.BelongToMap("GameMap");
	sDoor63275153870.ActorIndex(4);
	sDoor63275153870.Animation(2);
	sDoor63275153870.Frame(0);
	sDoor63275153870.PegRegistered(false);
	sDoor63275153870.ZOrder(0);
	sDoor63275153870.MapPositionX(0);
	sDoor63275153870.MapPositionY(0);
	sDoor63275153870.CheckCollisionWithMap(false);
	sDoor63275153870.DisplayListNumber(0);
	sDoor63275153870.Friction(0);
	sDoor63275153870.ActivateCollisionWithSprite(false);
	sDoor63275153870.VectorDirection(0,0,0);
	sDoor63275153870.ShowVectorOfTranslation(false);
	sDoor63275153870.CollisionType(LOOSECOLLISION);
	sDoor63275153870.Speed((float)0.00);
	sDoor63275153870.VariableNumber(0);
	sDoor63275153870.ShowSpriteBoundingBox(false);
	sDoor63275153870.ShowSpriteCollision(false);
	sDoor63275153870.Gravity(false);
	gn->Add(sDoor63275153870);

	Sprite sExit19149109616;
	sExit19149109616.Name("Exit");
	sExit19149109616.Visible(true);
	sExit19149109616.Unused(true);
	sExit19149109616.Pause(false);
	sExit19149109616.Reflection(false);
	sExit19149109616.MainCharacter(false);
	sExit19149109616.BelongToMap("GameMap");
	sExit19149109616.ActorIndex(4);
	sExit19149109616.Animation(3);
	sExit19149109616.Frame(0);
	sExit19149109616.PegRegistered(false);
	sExit19149109616.ZOrder(0);
	sExit19149109616.MapPositionX(0);
	sExit19149109616.MapPositionY(0);
	sExit19149109616.CheckCollisionWithMap(false);
	sExit19149109616.DisplayListNumber(0);
	sExit19149109616.Friction(0);
	sExit19149109616.ActivateCollisionWithSprite(false);
	sExit19149109616.VectorDirection(0,0,0);
	sExit19149109616.ShowVectorOfTranslation(false);
	sExit19149109616.CollisionType(LOOSECOLLISION);
	sExit19149109616.Speed((float)0.00);
	sExit19149109616.VariableNumber(0);
	sExit19149109616.ShowSpriteBoundingBox(false);
	sExit19149109616.ShowSpriteCollision(false);
	sExit19149109616.Gravity(false);
	gn->Add(sExit19149109616);

	Sprite sJoe164378041506;
	sJoe164378041506.Name("Joe");
	sJoe164378041506.Visible(true);
	sJoe164378041506.Unused(false);
	sJoe164378041506.Pause(false);
	sJoe164378041506.Reflection(false);
	sJoe164378041506.MainCharacter(false);
	sJoe164378041506.BelongToMap("GameMap");
	sJoe164378041506.ActorIndex(2);
	sJoe164378041506.Animation(5);
	sJoe164378041506.Frame(0);
	sJoe164378041506.PegRegistered(false);
	sJoe164378041506.ZOrder(0);
	sJoe164378041506.MapPositionX(60);
	sJoe164378041506.MapPositionY(120);
	sJoe164378041506.CheckCollisionWithMap(false);
	sJoe164378041506.DisplayListNumber(0);
	sJoe164378041506.Friction(0);
	sJoe164378041506.ActivateCollisionWithSprite(false);
	sJoe164378041506.behavior.AddStateMachine(SM_ACCESS_TRACKER);
	sJoe164378041506.behavior.AddStateMachine(SM_ALIEN2_ANIMATION);
	sJoe164378041506.behavior.AddFunction(FN_KILL_CODE_L5);
	sJoe164378041506.VectorDirection(0,0,0);
	sJoe164378041506.ShowVectorOfTranslation(false);
	sJoe164378041506.CollisionType(LOOSECOLLISION);
	sJoe164378041506.Speed((float)2.00);
	sJoe164378041506.VariableNumber(0);
	sJoe164378041506.ShowSpriteBoundingBox(false);
	sJoe164378041506.ShowSpriteCollision(false);
	sJoe164378041506.Gravity(false);
	gn->Add(sJoe164378041506);

	Sprite sbey164524771552;
	sbey164524771552.Name("bey");
	sbey164524771552.Visible(true);
	sbey164524771552.Unused(false);
	sbey164524771552.Pause(false);
	sbey164524771552.Reflection(false);
	sbey164524771552.MainCharacter(false);
	sbey164524771552.BelongToMap("GameMap");
	sbey164524771552.ActorIndex(2);
	sbey164524771552.Animation(6);
	sbey164524771552.Frame(0);
	sbey164524771552.PegRegistered(false);
	sbey164524771552.ZOrder(0);
	sbey164524771552.MapPositionX(60);
	sbey164524771552.MapPositionY(330);
	sbey164524771552.CheckCollisionWithMap(false);
	sbey164524771552.DisplayListNumber(0);
	sbey164524771552.Friction(0);
	sbey164524771552.ActivateCollisionWithSprite(false);
	sbey164524771552.behavior.AddStateMachine(SM_LEFT_RIGHT);
	sbey164524771552.behavior.AddStateMachine(SM_ALIEN2_ANIMATION);
	sbey164524771552.behavior.AddFunction(FN_KILL_CODE_L5);
	sbey164524771552.VectorDirection(0,0,0);
	sbey164524771552.ShowVectorOfTranslation(false);
	sbey164524771552.CollisionType(LOOSECOLLISION);
	sbey164524771552.Speed((float)1.00);
	sbey164524771552.VariableNumber(0);
	sbey164524771552.ShowSpriteBoundingBox(false);
	sbey164524771552.ShowSpriteCollision(false);
	sbey164524771552.Gravity(false);
	gn->Add(sbey164524771552);

	Sprite sJacob164634591588;
	sJacob164634591588.Name("Jacob");
	sJacob164634591588.Visible(true);
	sJacob164634591588.Unused(false);
	sJacob164634591588.Pause(false);
	sJacob164634591588.Reflection(false);
	sJacob164634591588.MainCharacter(false);
	sJacob164634591588.BelongToMap("GameMap");
	sJacob164634591588.ActorIndex(2);
	sJacob164634591588.Animation(4);
	sJacob164634591588.Frame(0);
	sJacob164634591588.PegRegistered(false);
	sJacob164634591588.ZOrder(0);
	sJacob164634591588.MapPositionX(420);
	sJacob164634591588.MapPositionY(360);
	sJacob164634591588.CheckCollisionWithMap(false);
	sJacob164634591588.DisplayListNumber(0);
	sJacob164634591588.Friction(0);
	sJacob164634591588.ActivateCollisionWithSprite(false);
	sJacob164634591588.behavior.AddFunction(FN_KILL_CODE_L5);
	sJacob164634591588.VectorDirection(0,0,0);
	sJacob164634591588.ShowVectorOfTranslation(false);
	sJacob164634591588.CollisionType(LOOSECOLLISION);
	sJacob164634591588.Speed((float)0.00);
	sJacob164634591588.VariableNumber(0);
	sJacob164634591588.ShowSpriteBoundingBox(false);
	sJacob164634591588.ShowSpriteCollision(false);
	sJacob164634591588.Gravity(false);
	gn->Add(sJacob164634591588);

	Sprite saxe164766561630;
	saxe164766561630.Name("axe");
	saxe164766561630.Visible(true);
	saxe164766561630.Unused(false);
	saxe164766561630.Pause(false);
	saxe164766561630.Reflection(false);
	saxe164766561630.MainCharacter(false);
	saxe164766561630.BelongToMap("GameMap");
	saxe164766561630.ActorIndex(2);
	saxe164766561630.Animation(6);
	saxe164766561630.Frame(0);
	saxe164766561630.PegRegistered(false);
	saxe164766561630.ZOrder(0);
	saxe164766561630.MapPositionX(360);
	saxe164766561630.MapPositionY(510);
	saxe164766561630.CheckCollisionWithMap(false);
	saxe164766561630.DisplayListNumber(0);
	saxe164766561630.Friction(0);
	saxe164766561630.ActivateCollisionWithSprite(false);
	saxe164766561630.behavior.AddStateMachine(SM_ALIEN2_ANIMATION);
	saxe164766561630.behavior.AddStateMachine(SM_AXE_AL);
	saxe164766561630.behavior.AddFunction(FN_KILL_CODE_L5);
	saxe164766561630.VectorDirection(0,0,0);
	saxe164766561630.ShowVectorOfTranslation(false);
	saxe164766561630.CollisionType(LOOSECOLLISION);
	saxe164766561630.Speed((float)2.00);
	saxe164766561630.VariableNumber(0);
	saxe164766561630.ShowSpriteBoundingBox(false);
	saxe164766561630.ShowSpriteCollision(false);
	saxe164766561630.Gravity(false);
	gn->Add(saxe164766561630);

	Variable tScore;
	tScore.Name("Score");
	tScore.Visible(true);
	tScore.Unused(false);
	tScore.Pause(false);
	tScore.FontName("OCR A Extended");
	tScore.Width(0);
	tScore.Height(15.75);
	tScore.Weight(400);
	tScore.Color(RGB(192,192,192));
	tScore.Italic(false);
	tScore.StrikeOut(false);
	tScore.Underline(false);

	FunRect rectScore = {742,524,792,564};
	tScore.Frame(rectScore);
	tScore.ShowFrame(false);
	tScore.InWorld(true);
	tScore.ActivateOutOfViewport(true);
	tScore.BelongToMap("GameMap");
	tScore.TopMost(true);
	tScore.DisplayType(Variable::RespectingWords);
	tScore.TopMargin(0);
	tScore.LeftMargin(0);
	tScore.LineSpacing(0);
	tScore.LetterSpacing(0);
	tScore.LeadingSpaces(true);
	tScore.Effect(Variable::MummyEffect);
	tScore.Delay(0,0);
	tScore.OnlyIntegerPart(true);
	tScore = 0.000000;
	gn->Add(tScore);

	Variable tout_of;
	tout_of.Name("out_of");
	tout_of.Visible(true);
	tout_of.Unused(false);
	tout_of.Pause(false);
	tout_of.FontName("OCR A Extended");
	tout_of.Width(0);
	tout_of.Height(15.75);
	tout_of.Weight(400);
	tout_of.Color(RGB(128,128,128));
	tout_of.Italic(false);
	tout_of.StrikeOut(false);
	tout_of.Underline(false);

	FunRect rectout_of = {759,524,799,584};
	tout_of.Frame(rectout_of);
	tout_of.ShowFrame(false);
	tout_of.InWorld(true);
	tout_of.ActivateOutOfViewport(true);
	tout_of.BelongToMap("GameMap");
	tout_of.TopMost(true);
	tout_of.DisplayType(Variable::RespectingWords);
	tout_of.TopMargin(0);
	tout_of.LeftMargin(0);
	tout_of.LineSpacing(0);
	tout_of.LetterSpacing(0);
	tout_of.LeadingSpaces(true);
	tout_of.Effect(Variable::MummyEffect);
	tout_of.Delay(0,0);
	tout_of = "/5";
	gn->Add(tout_of);

	Variable tKeycards;
	tKeycards.Name("Keycards");
	tKeycards.Visible(true);
	tKeycards.Unused(false);
	tKeycards.Pause(false);
	tKeycards.FontName("OCR A Extended");
	tKeycards.Width(0);
	tKeycards.Height(12.00);
	tKeycards.Weight(400);
	tKeycards.Color(RGB(255,0,0));
	tKeycards.Italic(false);
	tKeycards.StrikeOut(false);
	tKeycards.Underline(false);

	FunRect rectKeycards = {731,548,800,592};
	tKeycards.Frame(rectKeycards);
	tKeycards.ShowFrame(false);
	tKeycards.InWorld(true);
	tKeycards.ActivateOutOfViewport(true);
	tKeycards.BelongToMap("GameMap");
	tKeycards.TopMost(true);
	tKeycards.DisplayType(Variable::RespectingWords);
	tKeycards.TopMargin(0);
	tKeycards.LeftMargin(0);
	tKeycards.LineSpacing(0);
	tKeycards.LetterSpacing(0);
	tKeycards.LeadingSpaces(true);
	tKeycards.Effect(Variable::MummyEffect);
	tKeycards.Delay(0,0);
	tKeycards = "Hall 2\n";
	gn->Add(tKeycards);


	FILE*f1;
	
	f1=fopen("Hall 2.txt","rt");
	
	//y is # of rows & x is # of Columns
	for(int y=0;y<20;y++)
	{
		char ch;
		for(int x=0;x<24;x++)
			{
				fscanf(f1,"%c",&ch);
							if(ch=='W')
			{					
									MakeWall(x,y);
									binaryMap[x][y]=0;
							}
	
							else if(ch=='K')
			{	
									MakeKey(x,y);
									binaryMap[x][y]=1;
	
							}  
							else if(ch=='A')
			{	
									MakeDoor(x,y);
									binaryMap[x][y]=0;
	
							}  
	
							else if(ch=='S')
			{	
									MakeServer(x,y);
									binaryMap[x][y]=0;
	
							}  
							else if(ch=='B')
			{	
									MakeBed1(x,y);
									binaryMap[x][y]=0;
	
							} 
	
							 else if(ch=='X')
			{					
									MakeBed1(x,y);
									binaryMap[x][y]=0;
							}
							else if(ch=='Y')
			{					
									MakeBed2(x,y);
									binaryMap[x][y]=0;
							}
							else if(ch=='Z')
			{					
									MakeBed3(x,y);
									binaryMap[x][y]=0;
							}   
							else if(ch=='E')
			{	
									MakeExit(x,y);
									binaryMap[x][y]=0;
	
							}  
							else{
	
								//	MakeFood(x,y);
									binaryMap[x][y]=1;
							}
		}
		fscanf(f1,"%c",&ch);
	}
	fclose(f1);

};

void End_Level_5Function(GameNode *gn)
{
	

};

void Exit_Level_5Function(GameNode *gn)
{
};

void Init_Level_6Function(GameNode *gn)
{
#ifdef ERROR_MESSAGES
	pConsole->Color(RGB(0,0,0));
#endif

	gn->behavior.AddFunction(FN_RESTART);
	gn->behavior.AddFunction(FN_KILLLIVES);
	gn->WorldWidth(800);
	gn->WorldHeight(600);

	gn->FPStoMS(60);
	gn->QuitOnEscape(true);
	gn->ShowScrollingBoundingBox(false);

	gn->viewPort.ViewPortScrollingBB(0,0,640,480);

	gn->viewPort.WorldXPos(0);
	gn->viewPort.WorldYPos(0);
	gn->viewPort.MaxInflateBBLeft(0);
	gn->viewPort.MaxInflateBBTop(0);
	gn->viewPort.MaxInflateBBRight(0);
	gn->viewPort.MaxInflateBBBottom(0);

	gn->viewPort.ViewPortWidth(800);
	gn->viewPort.ViewPortHeight(600);

	FunRect rectGameMap = {0,0,800,600};
	Map mGameMap("GameMap","Background.bmp",Map::STANDARDMAP,0,0,0,true,rectGameMap);
	mGameMap.SpeedX(0.00);
	mGameMap.SpeedY(0.00);
	mGameMap.ScrollRatioX(0.00);
	mGameMap.ScrollRatioY(0.00);
	mGameMap.UseTransparency(false);
	mGameMap.Visible(true);
	mGameMap.Unused(false);
	mGameMap.Pause(false);
	mGameMap.SpacePartitionGridSize(128);
	mGameMap.ShowMapCollision(false);
	gn->Add(mGameMap);

	Sprite sWall38568661516;
	sWall38568661516.Name("Wall");
	sWall38568661516.Visible(true);
	sWall38568661516.Unused(true);
	sWall38568661516.Pause(false);
	sWall38568661516.Reflection(false);
	sWall38568661516.MainCharacter(false);
	sWall38568661516.BelongToMap("GameMap");
	sWall38568661516.ActorIndex(4);
	sWall38568661516.Animation(0);
	sWall38568661516.Frame(0);
	sWall38568661516.PegRegistered(false);
	sWall38568661516.ZOrder(0);
	sWall38568661516.MapPositionX(0);
	sWall38568661516.MapPositionY(0);
	sWall38568661516.CheckCollisionWithMap(false);
	sWall38568661516.DisplayListNumber(0);
	sWall38568661516.Friction(0);
	sWall38568661516.ActivateCollisionWithSprite(false);
	sWall38568661516.VectorDirection(0,0,0);
	sWall38568661516.ShowVectorOfTranslation(false);
	sWall38568661516.CollisionType(LOOSECOLLISION);
	sWall38568661516.Speed((float)0.00);
	sWall38568661516.VariableNumber(0);
	sWall38568661516.ShowSpriteBoundingBox(false);
	sWall38568661516.ShowSpriteCollision(false);
	sWall38568661516.Gravity(false);
	gn->Add(sWall38568661516);

	Sprite sSpaceman87418851756;
	sSpaceman87418851756.Name("Spaceman");
	sSpaceman87418851756.Visible(true);
	sSpaceman87418851756.Unused(false);
	sSpaceman87418851756.Pause(false);
	sSpaceman87418851756.Reflection(false);
	sSpaceman87418851756.MainCharacter(false);
	sSpaceman87418851756.BelongToMap("GameMap");
	sSpaceman87418851756.ActorIndex(0);
	sSpaceman87418851756.Animation(3);
	sSpaceman87418851756.Frame(1);
	sSpaceman87418851756.PegRegistered(false);
	sSpaceman87418851756.ZOrder(0);
	sSpaceman87418851756.MapPositionX(660);
	sSpaceman87418851756.MapPositionY(540);
	sSpaceman87418851756.CheckCollisionWithMap(false);
	sSpaceman87418851756.DisplayListNumber(0);
	sSpaceman87418851756.Friction(0);
	sSpaceman87418851756.ActivateCollisionWithSprite(false);
	sSpaceman87418851756.behavior.AddStateMachine(SM_MOVEMENT);
	sSpaceman87418851756.behavior.AddStateMachine(SM_SPACEMAN_ANIMATION);
	sSpaceman87418851756.behavior.AddFunction(FN_LQTOHALL3);
	sSpaceman87418851756.VectorDirection(0,0,0);
	sSpaceman87418851756.ShowVectorOfTranslation(false);
	sSpaceman87418851756.CollisionType(LOOSECOLLISION);
	sSpaceman87418851756.Speed((float)2.00);
	sSpaceman87418851756.VariableNumber(0);
	sSpaceman87418851756.ShowSpriteBoundingBox(false);
	sSpaceman87418851756.ShowSpriteCollision(false);
	sSpaceman87418851756.Gravity(false);
	gn->Add(sSpaceman87418851756);

	Sprite sKey1811159279895;
	sKey1811159279895.Name("Key");
	sKey1811159279895.Visible(true);
	sKey1811159279895.Unused(true);
	sKey1811159279895.Pause(false);
	sKey1811159279895.Reflection(false);
	sKey1811159279895.MainCharacter(false);
	sKey1811159279895.BelongToMap("GameMap");
	sKey1811159279895.ActorIndex(5);
	sKey1811159279895.Animation(0);
	sKey1811159279895.Frame(0);
	sKey1811159279895.PegRegistered(false);
	sKey1811159279895.ZOrder(0);
	sKey1811159279895.MapPositionX(30);
	sKey1811159279895.MapPositionY(60);
	sKey1811159279895.CheckCollisionWithMap(false);
	sKey1811159279895.DisplayListNumber(0);
	sKey1811159279895.Friction(0);
	sKey1811159279895.ActivateCollisionWithSprite(false);
	sKey1811159279895.behavior.AddFunction(FN_KEYBEHAVIORFN);
	sKey1811159279895.VectorDirection(0,0,0);
	sKey1811159279895.ShowVectorOfTranslation(false);
	sKey1811159279895.CollisionType(LOOSECOLLISION);
	sKey1811159279895.Speed((float)0.00);
	sKey1811159279895.VariableNumber(0);
	sKey1811159279895.ShowSpriteBoundingBox(false);
	sKey1811159279895.ShowSpriteCollision(false);
	sKey1811159279895.Gravity(false);
	gn->Add(sKey1811159279895);

	Sprite sVision2607752001320;
	sVision2607752001320.Name("Vision");
	sVision2607752001320.Visible(false);
	sVision2607752001320.Unused(false);
	sVision2607752001320.Pause(false);
	sVision2607752001320.Reflection(false);
	sVision2607752001320.MainCharacter(false);
	sVision2607752001320.BelongToMap("GameMap");
	sVision2607752001320.ActorIndex(6);
	sVision2607752001320.Animation(0);
	sVision2607752001320.Frame(0);
	sVision2607752001320.PegRegistered(false);
	sVision2607752001320.ZOrder(0);
	sVision2607752001320.MapPositionX(0);
	sVision2607752001320.MapPositionY(0);
	sVision2607752001320.CheckCollisionWithMap(false);
	sVision2607752001320.DisplayListNumber(3);
	sVision2607752001320.Friction(0);
	sVision2607752001320.ActivateCollisionWithSprite(false);
	sVision2607752001320.behavior.AddFunction(FN_VISIONTRACKER);
	sVision2607752001320.behavior.AddFunction(FN_DIFI);
	sVision2607752001320.VectorDirection(0,0,0);
	sVision2607752001320.ShowVectorOfTranslation(false);
	sVision2607752001320.CollisionType(LOOSECOLLISION);
	sVision2607752001320.Speed((float)5.00);
	sVision2607752001320.VariableNumber(0);
	sVision2607752001320.ShowSpriteBoundingBox(false);
	sVision2607752001320.ShowSpriteCollision(false);
	sVision2607752001320.Gravity(false);
	gn->Add(sVision2607752001320);

	Sprite sLife_Bar78305077291;
	sLife_Bar78305077291.Name("Life_Bar");
	sLife_Bar78305077291.Visible(true);
	sLife_Bar78305077291.Unused(false);
	sLife_Bar78305077291.Pause(false);
	sLife_Bar78305077291.Reflection(false);
	sLife_Bar78305077291.MainCharacter(false);
	sLife_Bar78305077291.BelongToMap("GameMap");
	sLife_Bar78305077291.ActorIndex(9);
	sLife_Bar78305077291.Animation(2);
	sLife_Bar78305077291.Frame(0);
	sLife_Bar78305077291.PegRegistered(false);
	sLife_Bar78305077291.ZOrder(0);
	sLife_Bar78305077291.MapPositionX(720);
	sLife_Bar78305077291.MapPositionY(-10);
	sLife_Bar78305077291.CheckCollisionWithMap(false);
	sLife_Bar78305077291.DisplayListNumber(4);
	sLife_Bar78305077291.Friction(0);
	sLife_Bar78305077291.ActivateCollisionWithSprite(false);
	sLife_Bar78305077291.VectorDirection(0,0,0);
	sLife_Bar78305077291.ShowVectorOfTranslation(false);
	sLife_Bar78305077291.CollisionType(LOOSECOLLISION);
	sLife_Bar78305077291.Speed((float)0.00);
	sLife_Bar78305077291.VariableNumber(0);
	sLife_Bar78305077291.ShowSpriteBoundingBox(false);
	sLife_Bar78305077291.ShowSpriteCollision(false);
	sLife_Bar78305077291.Gravity(false);
	gn->Add(sLife_Bar78305077291);

	Sprite sGreenBar116749754390;
	sGreenBar116749754390.Name("GreenBar1");
	sGreenBar116749754390.Visible(true);
	sGreenBar116749754390.Unused(false);
	sGreenBar116749754390.Pause(false);
	sGreenBar116749754390.Reflection(false);
	sGreenBar116749754390.MainCharacter(false);
	sGreenBar116749754390.BelongToMap("GameMap");
	sGreenBar116749754390.ActorIndex(9);
	sGreenBar116749754390.Animation(1);
	sGreenBar116749754390.Frame(0);
	sGreenBar116749754390.PegRegistered(false);
	sGreenBar116749754390.ZOrder(0);
	sGreenBar116749754390.MapPositionX(720);
	sGreenBar116749754390.MapPositionY(-10);
	sGreenBar116749754390.CheckCollisionWithMap(false);
	sGreenBar116749754390.DisplayListNumber(5);
	sGreenBar116749754390.Friction(0);
	sGreenBar116749754390.ActivateCollisionWithSprite(false);
	sGreenBar116749754390.VectorDirection(0,0,0);
	sGreenBar116749754390.ShowVectorOfTranslation(false);
	sGreenBar116749754390.CollisionType(LOOSECOLLISION);
	sGreenBar116749754390.Speed((float)0.00);
	sGreenBar116749754390.VariableNumber(0);
	sGreenBar116749754390.ShowSpriteBoundingBox(false);
	sGreenBar116749754390.ShowSpriteCollision(false);
	sGreenBar116749754390.Gravity(false);
	gn->Add(sGreenBar116749754390);

	Sprite sGreenBar234880513107;
	sGreenBar234880513107.Name("GreenBar2");
	sGreenBar234880513107.Visible(true);
	sGreenBar234880513107.Unused(false);
	sGreenBar234880513107.Pause(false);
	sGreenBar234880513107.Reflection(false);
	sGreenBar234880513107.MainCharacter(false);
	sGreenBar234880513107.BelongToMap("GameMap");
	sGreenBar234880513107.ActorIndex(9);
	sGreenBar234880513107.Animation(1);
	sGreenBar234880513107.Frame(0);
	sGreenBar234880513107.PegRegistered(false);
	sGreenBar234880513107.ZOrder(0);
	sGreenBar234880513107.MapPositionX(720);
	sGreenBar234880513107.MapPositionY(91);
	sGreenBar234880513107.CheckCollisionWithMap(false);
	sGreenBar234880513107.DisplayListNumber(5);
	sGreenBar234880513107.Friction(0);
	sGreenBar234880513107.ActivateCollisionWithSprite(false);
	sGreenBar234880513107.VectorDirection(0,0,0);
	sGreenBar234880513107.ShowVectorOfTranslation(false);
	sGreenBar234880513107.CollisionType(LOOSECOLLISION);
	sGreenBar234880513107.Speed((float)0.00);
	sGreenBar234880513107.VariableNumber(0);
	sGreenBar234880513107.ShowSpriteBoundingBox(false);
	sGreenBar234880513107.ShowSpriteCollision(false);
	sGreenBar234880513107.Gravity(false);
	gn->Add(sGreenBar234880513107);

	Sprite sGreenBar336183863535;
	sGreenBar336183863535.Name("GreenBar3");
	sGreenBar336183863535.Visible(true);
	sGreenBar336183863535.Unused(false);
	sGreenBar336183863535.Pause(false);
	sGreenBar336183863535.Reflection(false);
	sGreenBar336183863535.MainCharacter(false);
	sGreenBar336183863535.BelongToMap("GameMap");
	sGreenBar336183863535.ActorIndex(9);
	sGreenBar336183863535.Animation(1);
	sGreenBar336183863535.Frame(0);
	sGreenBar336183863535.PegRegistered(false);
	sGreenBar336183863535.ZOrder(0);
	sGreenBar336183863535.MapPositionX(720);
	sGreenBar336183863535.MapPositionY(192);
	sGreenBar336183863535.CheckCollisionWithMap(false);
	sGreenBar336183863535.DisplayListNumber(5);
	sGreenBar336183863535.Friction(0);
	sGreenBar336183863535.ActivateCollisionWithSprite(false);
	sGreenBar336183863535.VectorDirection(0,0,0);
	sGreenBar336183863535.ShowVectorOfTranslation(false);
	sGreenBar336183863535.CollisionType(LOOSECOLLISION);
	sGreenBar336183863535.Speed((float)0.00);
	sGreenBar336183863535.VariableNumber(0);
	sGreenBar336183863535.ShowSpriteBoundingBox(false);
	sGreenBar336183863535.ShowSpriteCollision(false);
	sGreenBar336183863535.Gravity(false);
	gn->Add(sGreenBar336183863535);

	Sprite sGreenBar435235313225;
	sGreenBar435235313225.Name("GreenBar4");
	sGreenBar435235313225.Visible(true);
	sGreenBar435235313225.Unused(false);
	sGreenBar435235313225.Pause(false);
	sGreenBar435235313225.Reflection(false);
	sGreenBar435235313225.MainCharacter(false);
	sGreenBar435235313225.BelongToMap("GameMap");
	sGreenBar435235313225.ActorIndex(9);
	sGreenBar435235313225.Animation(1);
	sGreenBar435235313225.Frame(0);
	sGreenBar435235313225.PegRegistered(false);
	sGreenBar435235313225.ZOrder(0);
	sGreenBar435235313225.MapPositionX(720);
	sGreenBar435235313225.MapPositionY(293);
	sGreenBar435235313225.CheckCollisionWithMap(false);
	sGreenBar435235313225.DisplayListNumber(5);
	sGreenBar435235313225.Friction(0);
	sGreenBar435235313225.ActivateCollisionWithSprite(false);
	sGreenBar435235313225.VectorDirection(0,0,0);
	sGreenBar435235313225.ShowVectorOfTranslation(false);
	sGreenBar435235313225.CollisionType(LOOSECOLLISION);
	sGreenBar435235313225.Speed((float)0.00);
	sGreenBar435235313225.VariableNumber(0);
	sGreenBar435235313225.ShowSpriteBoundingBox(false);
	sGreenBar435235313225.ShowSpriteCollision(false);
	sGreenBar435235313225.Gravity(false);
	gn->Add(sGreenBar435235313225);

	Sprite sGreenBar535143113195;
	sGreenBar535143113195.Name("GreenBar5");
	sGreenBar535143113195.Visible(true);
	sGreenBar535143113195.Unused(false);
	sGreenBar535143113195.Pause(false);
	sGreenBar535143113195.Reflection(false);
	sGreenBar535143113195.MainCharacter(false);
	sGreenBar535143113195.BelongToMap("GameMap");
	sGreenBar535143113195.ActorIndex(9);
	sGreenBar535143113195.Animation(1);
	sGreenBar535143113195.Frame(0);
	sGreenBar535143113195.PegRegistered(false);
	sGreenBar535143113195.ZOrder(0);
	sGreenBar535143113195.MapPositionX(720);
	sGreenBar535143113195.MapPositionY(394);
	sGreenBar535143113195.CheckCollisionWithMap(false);
	sGreenBar535143113195.DisplayListNumber(5);
	sGreenBar535143113195.Friction(0);
	sGreenBar535143113195.ActivateCollisionWithSprite(false);
	sGreenBar535143113195.VectorDirection(0,0,0);
	sGreenBar535143113195.ShowVectorOfTranslation(false);
	sGreenBar535143113195.CollisionType(LOOSECOLLISION);
	sGreenBar535143113195.Speed((float)0.00);
	sGreenBar535143113195.VariableNumber(0);
	sGreenBar535143113195.ShowSpriteBoundingBox(false);
	sGreenBar535143113195.ShowSpriteCollision(false);
	sGreenBar535143113195.Gravity(false);
	gn->Add(sGreenBar535143113195);

	Sprite sStatic46161056791;
	sStatic46161056791.Name("Static");
	sStatic46161056791.Visible(false);
	sStatic46161056791.Unused(false);
	sStatic46161056791.Pause(false);
	sStatic46161056791.Reflection(false);
	sStatic46161056791.MainCharacter(false);
	sStatic46161056791.BelongToMap("GameMap");
	sStatic46161056791.ActorIndex(7);
	sStatic46161056791.Animation(0);
	sStatic46161056791.Frame(0);
	sStatic46161056791.PegRegistered(false);
	sStatic46161056791.ZOrder(0);
	sStatic46161056791.MapPositionX(0);
	sStatic46161056791.MapPositionY(0);
	sStatic46161056791.CheckCollisionWithMap(false);
	sStatic46161056791.DisplayListNumber(6);
	sStatic46161056791.Friction(0);
	sStatic46161056791.ActivateCollisionWithSprite(false);
	sStatic46161056791.VectorDirection(0,0,0);
	sStatic46161056791.ShowVectorOfTranslation(false);
	sStatic46161056791.CollisionType(LOOSECOLLISION);
	sStatic46161056791.Speed((float)0.00);
	sStatic46161056791.VariableNumber(0);
	sStatic46161056791.ShowSpriteBoundingBox(false);
	sStatic46161056791.ShowSpriteCollision(false);
	sStatic46161056791.Gravity(false);
	gn->Add(sStatic46161056791);

	Sprite sServer50513774912;
	sServer50513774912.Name("Server");
	sServer50513774912.Visible(true);
	sServer50513774912.Unused(true);
	sServer50513774912.Pause(false);
	sServer50513774912.Reflection(false);
	sServer50513774912.MainCharacter(false);
	sServer50513774912.BelongToMap("GameMap");
	sServer50513774912.ActorIndex(4);
	sServer50513774912.Animation(1);
	sServer50513774912.Frame(0);
	sServer50513774912.PegRegistered(false);
	sServer50513774912.ZOrder(0);
	sServer50513774912.MapPositionX(0);
	sServer50513774912.MapPositionY(0);
	sServer50513774912.CheckCollisionWithMap(false);
	sServer50513774912.DisplayListNumber(0);
	sServer50513774912.Friction(0);
	sServer50513774912.ActivateCollisionWithSprite(false);
	sServer50513774912.VectorDirection(0,0,0);
	sServer50513774912.ShowVectorOfTranslation(false);
	sServer50513774912.CollisionType(LOOSECOLLISION);
	sServer50513774912.Speed((float)0.00);
	sServer50513774912.VariableNumber(0);
	sServer50513774912.ShowSpriteBoundingBox(false);
	sServer50513774912.ShowSpriteCollision(false);
	sServer50513774912.Gravity(false);
	gn->Add(sServer50513774912);

	Sprite sDoor63390253909;
	sDoor63390253909.Name("Door");
	sDoor63390253909.Visible(true);
	sDoor63390253909.Unused(true);
	sDoor63390253909.Pause(false);
	sDoor63390253909.Reflection(false);
	sDoor63390253909.MainCharacter(false);
	sDoor63390253909.BelongToMap("GameMap");
	sDoor63390253909.ActorIndex(4);
	sDoor63390253909.Animation(2);
	sDoor63390253909.Frame(0);
	sDoor63390253909.PegRegistered(false);
	sDoor63390253909.ZOrder(0);
	sDoor63390253909.MapPositionX(0);
	sDoor63390253909.MapPositionY(0);
	sDoor63390253909.CheckCollisionWithMap(false);
	sDoor63390253909.DisplayListNumber(0);
	sDoor63390253909.Friction(0);
	sDoor63390253909.ActivateCollisionWithSprite(false);
	sDoor63390253909.VectorDirection(0,0,0);
	sDoor63390253909.ShowVectorOfTranslation(false);
	sDoor63390253909.CollisionType(LOOSECOLLISION);
	sDoor63390253909.Speed((float)0.00);
	sDoor63390253909.VariableNumber(0);
	sDoor63390253909.ShowSpriteBoundingBox(false);
	sDoor63390253909.ShowSpriteCollision(false);
	sDoor63390253909.Gravity(false);
	gn->Add(sDoor63390253909);

	Sprite sBed167077915114;
	sBed167077915114.Name("Bed1");
	sBed167077915114.Visible(true);
	sBed167077915114.Unused(true);
	sBed167077915114.Pause(false);
	sBed167077915114.Reflection(false);
	sBed167077915114.MainCharacter(false);
	sBed167077915114.BelongToMap("GameMap");
	sBed167077915114.ActorIndex(4);
	sBed167077915114.Animation(4);
	sBed167077915114.Frame(0);
	sBed167077915114.PegRegistered(false);
	sBed167077915114.ZOrder(0);
	sBed167077915114.MapPositionX(0);
	sBed167077915114.MapPositionY(0);
	sBed167077915114.CheckCollisionWithMap(false);
	sBed167077915114.DisplayListNumber(0);
	sBed167077915114.Friction(0);
	sBed167077915114.ActivateCollisionWithSprite(false);
	sBed167077915114.VectorDirection(0,0,0);
	sBed167077915114.ShowVectorOfTranslation(false);
	sBed167077915114.CollisionType(LOOSECOLLISION);
	sBed167077915114.Speed((float)0.00);
	sBed167077915114.VariableNumber(0);
	sBed167077915114.ShowSpriteBoundingBox(false);
	sBed167077915114.ShowSpriteCollision(false);
	sBed167077915114.Gravity(false);
	gn->Add(sBed167077915114);

	Sprite sBed272401936851;
	sBed272401936851.Name("Bed2");
	sBed272401936851.Visible(true);
	sBed272401936851.Unused(true);
	sBed272401936851.Pause(false);
	sBed272401936851.Reflection(false);
	sBed272401936851.MainCharacter(false);
	sBed272401936851.BelongToMap("GameMap");
	sBed272401936851.ActorIndex(4);
	sBed272401936851.Animation(5);
	sBed272401936851.Frame(0);
	sBed272401936851.PegRegistered(false);
	sBed272401936851.ZOrder(0);
	sBed272401936851.MapPositionX(0);
	sBed272401936851.MapPositionY(0);
	sBed272401936851.CheckCollisionWithMap(false);
	sBed272401936851.DisplayListNumber(0);
	sBed272401936851.Friction(0);
	sBed272401936851.ActivateCollisionWithSprite(false);
	sBed272401936851.VectorDirection(0,0,0);
	sBed272401936851.ShowVectorOfTranslation(false);
	sBed272401936851.CollisionType(LOOSECOLLISION);
	sBed272401936851.Speed((float)0.00);
	sBed272401936851.VariableNumber(0);
	sBed272401936851.ShowSpriteBoundingBox(false);
	sBed272401936851.ShowSpriteCollision(false);
	sBed272401936851.Gravity(false);
	gn->Add(sBed272401936851);

	Sprite sBed372525536891;
	sBed372525536891.Name("Bed3");
	sBed372525536891.Visible(true);
	sBed372525536891.Unused(true);
	sBed372525536891.Pause(false);
	sBed372525536891.Reflection(false);
	sBed372525536891.MainCharacter(false);
	sBed372525536891.BelongToMap("GameMap");
	sBed372525536891.ActorIndex(4);
	sBed372525536891.Animation(6);
	sBed372525536891.Frame(0);
	sBed372525536891.PegRegistered(false);
	sBed372525536891.ZOrder(0);
	sBed372525536891.MapPositionX(0);
	sBed372525536891.MapPositionY(0);
	sBed372525536891.CheckCollisionWithMap(false);
	sBed372525536891.DisplayListNumber(0);
	sBed372525536891.Friction(0);
	sBed372525536891.ActivateCollisionWithSprite(false);
	sBed372525536891.VectorDirection(0,0,0);
	sBed372525536891.ShowVectorOfTranslation(false);
	sBed372525536891.CollisionType(LOOSECOLLISION);
	sBed372525536891.Speed((float)0.00);
	sBed372525536891.VariableNumber(0);
	sBed372525536891.ShowSpriteBoundingBox(false);
	sBed372525536891.ShowSpriteCollision(false);
	sBed372525536891.Gravity(false);
	gn->Add(sBed372525536891);

	Sprite sExit19299429665;
	sExit19299429665.Name("Exit");
	sExit19299429665.Visible(true);
	sExit19299429665.Unused(true);
	sExit19299429665.Pause(false);
	sExit19299429665.Reflection(false);
	sExit19299429665.MainCharacter(false);
	sExit19299429665.BelongToMap("GameMap");
	sExit19299429665.ActorIndex(4);
	sExit19299429665.Animation(3);
	sExit19299429665.Frame(0);
	sExit19299429665.PegRegistered(false);
	sExit19299429665.ZOrder(0);
	sExit19299429665.MapPositionX(0);
	sExit19299429665.MapPositionY(0);
	sExit19299429665.CheckCollisionWithMap(false);
	sExit19299429665.DisplayListNumber(0);
	sExit19299429665.Friction(0);
	sExit19299429665.ActivateCollisionWithSprite(false);
	sExit19299429665.VectorDirection(0,0,0);
	sExit19299429665.ShowVectorOfTranslation(false);
	sExit19299429665.CollisionType(LOOSECOLLISION);
	sExit19299429665.Speed((float)0.00);
	sExit19299429665.VariableNumber(0);
	sExit19299429665.ShowSpriteBoundingBox(false);
	sExit19299429665.ShowSpriteCollision(false);
	sExit19299429665.Gravity(false);
	gn->Add(sExit19299429665);

	Variable tScore;
	tScore.Name("Score");
	tScore.Visible(true);
	tScore.Unused(false);
	tScore.Pause(false);
	tScore.FontName("OCR A Extended");
	tScore.Width(0);
	tScore.Height(15.75);
	tScore.Weight(400);
	tScore.Color(RGB(192,192,192));
	tScore.Italic(false);
	tScore.StrikeOut(false);
	tScore.Underline(false);

	FunRect rectScore = {742,524,792,564};
	tScore.Frame(rectScore);
	tScore.ShowFrame(false);
	tScore.InWorld(true);
	tScore.ActivateOutOfViewport(true);
	tScore.BelongToMap("GameMap");
	tScore.TopMost(true);
	tScore.DisplayType(Variable::RespectingWords);
	tScore.TopMargin(0);
	tScore.LeftMargin(0);
	tScore.LineSpacing(0);
	tScore.LetterSpacing(0);
	tScore.LeadingSpaces(true);
	tScore.Effect(Variable::MummyEffect);
	tScore.Delay(0,0);
	tScore.OnlyIntegerPart(true);
	tScore = 0.000000;
	gn->Add(tScore);

	Variable tout_of;
	tout_of.Name("out_of");
	tout_of.Visible(true);
	tout_of.Unused(false);
	tout_of.Pause(false);
	tout_of.FontName("OCR A Extended");
	tout_of.Width(0);
	tout_of.Height(15.75);
	tout_of.Weight(400);
	tout_of.Color(RGB(128,128,128));
	tout_of.Italic(false);
	tout_of.StrikeOut(false);
	tout_of.Underline(false);

	FunRect rectout_of = {759,524,799,584};
	tout_of.Frame(rectout_of);
	tout_of.ShowFrame(false);
	tout_of.InWorld(true);
	tout_of.ActivateOutOfViewport(true);
	tout_of.BelongToMap("GameMap");
	tout_of.TopMost(true);
	tout_of.DisplayType(Variable::RespectingWords);
	tout_of.TopMargin(0);
	tout_of.LeftMargin(0);
	tout_of.LineSpacing(0);
	tout_of.LetterSpacing(0);
	tout_of.LeadingSpaces(true);
	tout_of.Effect(Variable::MummyEffect);
	tout_of.Delay(0,0);
	tout_of = "/5";
	gn->Add(tout_of);

	Variable tKeycards;
	tKeycards.Name("Keycards");
	tKeycards.Visible(true);
	tKeycards.Unused(false);
	tKeycards.Pause(false);
	tKeycards.FontName("OCR A Extended");
	tKeycards.Width(0);
	tKeycards.Height(9.75);
	tKeycards.Weight(400);
	tKeycards.Color(RGB(255,0,0));
	tKeycards.Italic(false);
	tKeycards.StrikeOut(false);
	tKeycards.Underline(false);

	FunRect rectKeycards = {731,548,800,592};
	tKeycards.Frame(rectKeycards);
	tKeycards.ShowFrame(false);
	tKeycards.InWorld(true);
	tKeycards.ActivateOutOfViewport(true);
	tKeycards.BelongToMap("GameMap");
	tKeycards.TopMost(true);
	tKeycards.DisplayType(Variable::RespectingWords);
	tKeycards.TopMargin(0);
	tKeycards.LeftMargin(0);
	tKeycards.LineSpacing(0);
	tKeycards.LetterSpacing(0);
	tKeycards.LeadingSpaces(true);
	tKeycards.Effect(Variable::MummyEffect);
	tKeycards.Delay(0,0);
	tKeycards = "Living Quarters\n";
	gn->Add(tKeycards);


	FILE*f1;
	
	f1=fopen("Living Quarters.txt","rt");
	
	//y is # of rows & x is # of Columns
	for(int y=0;y<20;y++)
	{
		char ch;
		for(int x=0;x<24;x++)
			{
				fscanf(f1,"%c",&ch);
							if(ch=='W')
			{					
									MakeWall(x,y);
									binaryMap[x][y]=0;
							}
	
							else if(ch=='K')
			{	
									MakeKey(x,y);
									binaryMap[x][y]=1;
	
							}  
							else if(ch=='A')
			{	
									MakeDoor(x,y);
									binaryMap[x][y]=0;
	
							}  
	
							else if(ch=='S')
			{	
									MakeServer(x,y);
									binaryMap[x][y]=0;
	
							}  
							else if(ch=='B')
			{	
									MakeBed1(x,y);
									binaryMap[x][y]=0;
	
							}
							 else if(ch=='X')
			{					
									MakeBed1(x,y);
									binaryMap[x][y]=0;
							}
							else if(ch=='Y')
			{					
									MakeBed2(x,y);
									binaryMap[x][y]=0;
							}
							else if(ch=='Z')
			{					
									MakeBed3(x,y);
									binaryMap[x][y]=0;
							}  
							else if(ch=='E')
			{	
									MakeExit(x,y);
									binaryMap[x][y]=0;
	
							}  
							else{
	
								//	MakeFood(x,y);
									binaryMap[x][y]=1;
							}
		}
		fscanf(f1,"%c",&ch);
	}
	fclose(f1);

};

void End_Level_6Function(GameNode *gn)
{
	

};

void Exit_Level_6Function(GameNode *gn)
{
};

void Init_Level_7Function(GameNode *gn)
{
#ifdef ERROR_MESSAGES
	pConsole->Color(RGB(0,0,0));
#endif

	gn->behavior.AddFunction(FN_RESTART);
	gn->behavior.AddFunction(FN_KILLLIVES);
	gn->WorldWidth(800);
	gn->WorldHeight(600);

	gn->FPStoMS(60);
	gn->QuitOnEscape(true);
	gn->ShowScrollingBoundingBox(false);

	gn->viewPort.ViewPortScrollingBB(0,0,640,480);

	gn->viewPort.WorldXPos(0);
	gn->viewPort.WorldYPos(0);
	gn->viewPort.MaxInflateBBLeft(0);
	gn->viewPort.MaxInflateBBTop(0);
	gn->viewPort.MaxInflateBBRight(0);
	gn->viewPort.MaxInflateBBBottom(0);

	gn->viewPort.ViewPortWidth(800);
	gn->viewPort.ViewPortHeight(600);

	FunRect rectGameMap = {0,0,800,600};
	Map mGameMap("GameMap","Background.bmp",Map::STANDARDMAP,0,0,0,true,rectGameMap);
	mGameMap.SpeedX(0.00);
	mGameMap.SpeedY(0.00);
	mGameMap.ScrollRatioX(0.00);
	mGameMap.ScrollRatioY(0.00);
	mGameMap.UseTransparency(false);
	mGameMap.Visible(true);
	mGameMap.Unused(false);
	mGameMap.Pause(false);
	mGameMap.SpacePartitionGridSize(128);
	mGameMap.ShowMapCollision(false);
	gn->Add(mGameMap);

	Sprite sWall38568661516;
	sWall38568661516.Name("Wall");
	sWall38568661516.Visible(true);
	sWall38568661516.Unused(true);
	sWall38568661516.Pause(false);
	sWall38568661516.Reflection(false);
	sWall38568661516.MainCharacter(false);
	sWall38568661516.BelongToMap("GameMap");
	sWall38568661516.ActorIndex(4);
	sWall38568661516.Animation(0);
	sWall38568661516.Frame(0);
	sWall38568661516.PegRegistered(false);
	sWall38568661516.ZOrder(0);
	sWall38568661516.MapPositionX(0);
	sWall38568661516.MapPositionY(0);
	sWall38568661516.CheckCollisionWithMap(false);
	sWall38568661516.DisplayListNumber(0);
	sWall38568661516.Friction(0);
	sWall38568661516.ActivateCollisionWithSprite(false);
	sWall38568661516.VectorDirection(0,0,0);
	sWall38568661516.ShowVectorOfTranslation(false);
	sWall38568661516.CollisionType(LOOSECOLLISION);
	sWall38568661516.Speed((float)0.00);
	sWall38568661516.VariableNumber(0);
	sWall38568661516.ShowSpriteBoundingBox(false);
	sWall38568661516.ShowSpriteCollision(false);
	sWall38568661516.Gravity(false);
	gn->Add(sWall38568661516);

	Sprite sSpaceman78841938954;
	sSpaceman78841938954.Name("Spaceman");
	sSpaceman78841938954.Visible(true);
	sSpaceman78841938954.Unused(false);
	sSpaceman78841938954.Pause(false);
	sSpaceman78841938954.Reflection(false);
	sSpaceman78841938954.MainCharacter(false);
	sSpaceman78841938954.BelongToMap("GameMap");
	sSpaceman78841938954.ActorIndex(0);
	sSpaceman78841938954.Animation(3);
	sSpaceman78841938954.Frame(1);
	sSpaceman78841938954.PegRegistered(false);
	sSpaceman78841938954.ZOrder(0);
	sSpaceman78841938954.MapPositionX(660);
	sSpaceman78841938954.MapPositionY(270);
	sSpaceman78841938954.CheckCollisionWithMap(false);
	sSpaceman78841938954.DisplayListNumber(0);
	sSpaceman78841938954.Friction(0);
	sSpaceman78841938954.ActivateCollisionWithSprite(false);
	sSpaceman78841938954.behavior.AddStateMachine(SM_MOVEMENT);
	sSpaceman78841938954.behavior.AddStateMachine(SM_SPACEMAN_ANIMATION);
	sSpaceman78841938954.VectorDirection(0,0,0);
	sSpaceman78841938954.ShowVectorOfTranslation(false);
	sSpaceman78841938954.CollisionType(LOOSECOLLISION);
	sSpaceman78841938954.Speed((float)2.00);
	sSpaceman78841938954.VariableNumber(0);
	sSpaceman78841938954.ShowSpriteBoundingBox(false);
	sSpaceman78841938954.ShowSpriteCollision(false);
	sSpaceman78841938954.Gravity(false);
	gn->Add(sSpaceman78841938954);

	Sprite sKey1811159279895;
	sKey1811159279895.Name("Key");
	sKey1811159279895.Visible(true);
	sKey1811159279895.Unused(true);
	sKey1811159279895.Pause(false);
	sKey1811159279895.Reflection(false);
	sKey1811159279895.MainCharacter(false);
	sKey1811159279895.BelongToMap("GameMap");
	sKey1811159279895.ActorIndex(5);
	sKey1811159279895.Animation(0);
	sKey1811159279895.Frame(0);
	sKey1811159279895.PegRegistered(false);
	sKey1811159279895.ZOrder(0);
	sKey1811159279895.MapPositionX(30);
	sKey1811159279895.MapPositionY(60);
	sKey1811159279895.CheckCollisionWithMap(false);
	sKey1811159279895.DisplayListNumber(0);
	sKey1811159279895.Friction(0);
	sKey1811159279895.ActivateCollisionWithSprite(false);
	sKey1811159279895.behavior.AddFunction(FN_KEYBEHAVIORFN);
	sKey1811159279895.VectorDirection(0,0,0);
	sKey1811159279895.ShowVectorOfTranslation(false);
	sKey1811159279895.CollisionType(LOOSECOLLISION);
	sKey1811159279895.Speed((float)0.00);
	sKey1811159279895.VariableNumber(0);
	sKey1811159279895.ShowSpriteBoundingBox(false);
	sKey1811159279895.ShowSpriteCollision(false);
	sKey1811159279895.Gravity(false);
	gn->Add(sKey1811159279895);

	Sprite sVision2607752001320;
	sVision2607752001320.Name("Vision");
	sVision2607752001320.Visible(false);
	sVision2607752001320.Unused(false);
	sVision2607752001320.Pause(false);
	sVision2607752001320.Reflection(false);
	sVision2607752001320.MainCharacter(false);
	sVision2607752001320.BelongToMap("GameMap");
	sVision2607752001320.ActorIndex(6);
	sVision2607752001320.Animation(0);
	sVision2607752001320.Frame(0);
	sVision2607752001320.PegRegistered(false);
	sVision2607752001320.ZOrder(0);
	sVision2607752001320.MapPositionX(0);
	sVision2607752001320.MapPositionY(0);
	sVision2607752001320.CheckCollisionWithMap(false);
	sVision2607752001320.DisplayListNumber(3);
	sVision2607752001320.Friction(0);
	sVision2607752001320.ActivateCollisionWithSprite(false);
	sVision2607752001320.behavior.AddFunction(FN_VISIONTRACKER);
	sVision2607752001320.behavior.AddFunction(FN_DIFI);
	sVision2607752001320.VectorDirection(0,0,0);
	sVision2607752001320.ShowVectorOfTranslation(false);
	sVision2607752001320.CollisionType(LOOSECOLLISION);
	sVision2607752001320.Speed((float)5.00);
	sVision2607752001320.VariableNumber(0);
	sVision2607752001320.ShowSpriteBoundingBox(false);
	sVision2607752001320.ShowSpriteCollision(false);
	sVision2607752001320.Gravity(false);
	gn->Add(sVision2607752001320);

	Sprite sLife_Bar78305077291;
	sLife_Bar78305077291.Name("Life_Bar");
	sLife_Bar78305077291.Visible(true);
	sLife_Bar78305077291.Unused(false);
	sLife_Bar78305077291.Pause(false);
	sLife_Bar78305077291.Reflection(false);
	sLife_Bar78305077291.MainCharacter(false);
	sLife_Bar78305077291.BelongToMap("GameMap");
	sLife_Bar78305077291.ActorIndex(9);
	sLife_Bar78305077291.Animation(2);
	sLife_Bar78305077291.Frame(0);
	sLife_Bar78305077291.PegRegistered(false);
	sLife_Bar78305077291.ZOrder(0);
	sLife_Bar78305077291.MapPositionX(720);
	sLife_Bar78305077291.MapPositionY(-10);
	sLife_Bar78305077291.CheckCollisionWithMap(false);
	sLife_Bar78305077291.DisplayListNumber(4);
	sLife_Bar78305077291.Friction(0);
	sLife_Bar78305077291.ActivateCollisionWithSprite(false);
	sLife_Bar78305077291.VectorDirection(0,0,0);
	sLife_Bar78305077291.ShowVectorOfTranslation(false);
	sLife_Bar78305077291.CollisionType(LOOSECOLLISION);
	sLife_Bar78305077291.Speed((float)0.00);
	sLife_Bar78305077291.VariableNumber(0);
	sLife_Bar78305077291.ShowSpriteBoundingBox(false);
	sLife_Bar78305077291.ShowSpriteCollision(false);
	sLife_Bar78305077291.Gravity(false);
	gn->Add(sLife_Bar78305077291);

	Sprite sGreenBar116749754390;
	sGreenBar116749754390.Name("GreenBar1");
	sGreenBar116749754390.Visible(true);
	sGreenBar116749754390.Unused(false);
	sGreenBar116749754390.Pause(false);
	sGreenBar116749754390.Reflection(false);
	sGreenBar116749754390.MainCharacter(false);
	sGreenBar116749754390.BelongToMap("GameMap");
	sGreenBar116749754390.ActorIndex(9);
	sGreenBar116749754390.Animation(1);
	sGreenBar116749754390.Frame(0);
	sGreenBar116749754390.PegRegistered(false);
	sGreenBar116749754390.ZOrder(0);
	sGreenBar116749754390.MapPositionX(720);
	sGreenBar116749754390.MapPositionY(-10);
	sGreenBar116749754390.CheckCollisionWithMap(false);
	sGreenBar116749754390.DisplayListNumber(5);
	sGreenBar116749754390.Friction(0);
	sGreenBar116749754390.ActivateCollisionWithSprite(false);
	sGreenBar116749754390.VectorDirection(0,0,0);
	sGreenBar116749754390.ShowVectorOfTranslation(false);
	sGreenBar116749754390.CollisionType(LOOSECOLLISION);
	sGreenBar116749754390.Speed((float)0.00);
	sGreenBar116749754390.VariableNumber(0);
	sGreenBar116749754390.ShowSpriteBoundingBox(false);
	sGreenBar116749754390.ShowSpriteCollision(false);
	sGreenBar116749754390.Gravity(false);
	gn->Add(sGreenBar116749754390);

	Sprite sGreenBar234880513107;
	sGreenBar234880513107.Name("GreenBar2");
	sGreenBar234880513107.Visible(true);
	sGreenBar234880513107.Unused(false);
	sGreenBar234880513107.Pause(false);
	sGreenBar234880513107.Reflection(false);
	sGreenBar234880513107.MainCharacter(false);
	sGreenBar234880513107.BelongToMap("GameMap");
	sGreenBar234880513107.ActorIndex(9);
	sGreenBar234880513107.Animation(1);
	sGreenBar234880513107.Frame(0);
	sGreenBar234880513107.PegRegistered(false);
	sGreenBar234880513107.ZOrder(0);
	sGreenBar234880513107.MapPositionX(720);
	sGreenBar234880513107.MapPositionY(91);
	sGreenBar234880513107.CheckCollisionWithMap(false);
	sGreenBar234880513107.DisplayListNumber(5);
	sGreenBar234880513107.Friction(0);
	sGreenBar234880513107.ActivateCollisionWithSprite(false);
	sGreenBar234880513107.VectorDirection(0,0,0);
	sGreenBar234880513107.ShowVectorOfTranslation(false);
	sGreenBar234880513107.CollisionType(LOOSECOLLISION);
	sGreenBar234880513107.Speed((float)0.00);
	sGreenBar234880513107.VariableNumber(0);
	sGreenBar234880513107.ShowSpriteBoundingBox(false);
	sGreenBar234880513107.ShowSpriteCollision(false);
	sGreenBar234880513107.Gravity(false);
	gn->Add(sGreenBar234880513107);

	Sprite sGreenBar336183863535;
	sGreenBar336183863535.Name("GreenBar3");
	sGreenBar336183863535.Visible(true);
	sGreenBar336183863535.Unused(false);
	sGreenBar336183863535.Pause(false);
	sGreenBar336183863535.Reflection(false);
	sGreenBar336183863535.MainCharacter(false);
	sGreenBar336183863535.BelongToMap("GameMap");
	sGreenBar336183863535.ActorIndex(9);
	sGreenBar336183863535.Animation(1);
	sGreenBar336183863535.Frame(0);
	sGreenBar336183863535.PegRegistered(false);
	sGreenBar336183863535.ZOrder(0);
	sGreenBar336183863535.MapPositionX(720);
	sGreenBar336183863535.MapPositionY(192);
	sGreenBar336183863535.CheckCollisionWithMap(false);
	sGreenBar336183863535.DisplayListNumber(5);
	sGreenBar336183863535.Friction(0);
	sGreenBar336183863535.ActivateCollisionWithSprite(false);
	sGreenBar336183863535.VectorDirection(0,0,0);
	sGreenBar336183863535.ShowVectorOfTranslation(false);
	sGreenBar336183863535.CollisionType(LOOSECOLLISION);
	sGreenBar336183863535.Speed((float)0.00);
	sGreenBar336183863535.VariableNumber(0);
	sGreenBar336183863535.ShowSpriteBoundingBox(false);
	sGreenBar336183863535.ShowSpriteCollision(false);
	sGreenBar336183863535.Gravity(false);
	gn->Add(sGreenBar336183863535);

	Sprite sGreenBar435235313225;
	sGreenBar435235313225.Name("GreenBar4");
	sGreenBar435235313225.Visible(true);
	sGreenBar435235313225.Unused(false);
	sGreenBar435235313225.Pause(false);
	sGreenBar435235313225.Reflection(false);
	sGreenBar435235313225.MainCharacter(false);
	sGreenBar435235313225.BelongToMap("GameMap");
	sGreenBar435235313225.ActorIndex(9);
	sGreenBar435235313225.Animation(1);
	sGreenBar435235313225.Frame(0);
	sGreenBar435235313225.PegRegistered(false);
	sGreenBar435235313225.ZOrder(0);
	sGreenBar435235313225.MapPositionX(720);
	sGreenBar435235313225.MapPositionY(293);
	sGreenBar435235313225.CheckCollisionWithMap(false);
	sGreenBar435235313225.DisplayListNumber(5);
	sGreenBar435235313225.Friction(0);
	sGreenBar435235313225.ActivateCollisionWithSprite(false);
	sGreenBar435235313225.VectorDirection(0,0,0);
	sGreenBar435235313225.ShowVectorOfTranslation(false);
	sGreenBar435235313225.CollisionType(LOOSECOLLISION);
	sGreenBar435235313225.Speed((float)0.00);
	sGreenBar435235313225.VariableNumber(0);
	sGreenBar435235313225.ShowSpriteBoundingBox(false);
	sGreenBar435235313225.ShowSpriteCollision(false);
	sGreenBar435235313225.Gravity(false);
	gn->Add(sGreenBar435235313225);

	Sprite sGreenBar535143113195;
	sGreenBar535143113195.Name("GreenBar5");
	sGreenBar535143113195.Visible(true);
	sGreenBar535143113195.Unused(false);
	sGreenBar535143113195.Pause(false);
	sGreenBar535143113195.Reflection(false);
	sGreenBar535143113195.MainCharacter(false);
	sGreenBar535143113195.BelongToMap("GameMap");
	sGreenBar535143113195.ActorIndex(9);
	sGreenBar535143113195.Animation(1);
	sGreenBar535143113195.Frame(0);
	sGreenBar535143113195.PegRegistered(false);
	sGreenBar535143113195.ZOrder(0);
	sGreenBar535143113195.MapPositionX(720);
	sGreenBar535143113195.MapPositionY(394);
	sGreenBar535143113195.CheckCollisionWithMap(false);
	sGreenBar535143113195.DisplayListNumber(5);
	sGreenBar535143113195.Friction(0);
	sGreenBar535143113195.ActivateCollisionWithSprite(false);
	sGreenBar535143113195.VectorDirection(0,0,0);
	sGreenBar535143113195.ShowVectorOfTranslation(false);
	sGreenBar535143113195.CollisionType(LOOSECOLLISION);
	sGreenBar535143113195.Speed((float)0.00);
	sGreenBar535143113195.VariableNumber(0);
	sGreenBar535143113195.ShowSpriteBoundingBox(false);
	sGreenBar535143113195.ShowSpriteCollision(false);
	sGreenBar535143113195.Gravity(false);
	gn->Add(sGreenBar535143113195);

	Sprite sStatic46161056791;
	sStatic46161056791.Name("Static");
	sStatic46161056791.Visible(false);
	sStatic46161056791.Unused(false);
	sStatic46161056791.Pause(false);
	sStatic46161056791.Reflection(false);
	sStatic46161056791.MainCharacter(false);
	sStatic46161056791.BelongToMap("GameMap");
	sStatic46161056791.ActorIndex(7);
	sStatic46161056791.Animation(0);
	sStatic46161056791.Frame(0);
	sStatic46161056791.PegRegistered(false);
	sStatic46161056791.ZOrder(0);
	sStatic46161056791.MapPositionX(0);
	sStatic46161056791.MapPositionY(0);
	sStatic46161056791.CheckCollisionWithMap(false);
	sStatic46161056791.DisplayListNumber(6);
	sStatic46161056791.Friction(0);
	sStatic46161056791.ActivateCollisionWithSprite(false);
	sStatic46161056791.VectorDirection(0,0,0);
	sStatic46161056791.ShowVectorOfTranslation(false);
	sStatic46161056791.CollisionType(LOOSECOLLISION);
	sStatic46161056791.Speed((float)0.00);
	sStatic46161056791.VariableNumber(0);
	sStatic46161056791.ShowSpriteBoundingBox(false);
	sStatic46161056791.ShowSpriteCollision(false);
	sStatic46161056791.Gravity(false);
	gn->Add(sStatic46161056791);

	Sprite sServer50513774912;
	sServer50513774912.Name("Server");
	sServer50513774912.Visible(true);
	sServer50513774912.Unused(true);
	sServer50513774912.Pause(false);
	sServer50513774912.Reflection(false);
	sServer50513774912.MainCharacter(false);
	sServer50513774912.BelongToMap("GameMap");
	sServer50513774912.ActorIndex(4);
	sServer50513774912.Animation(1);
	sServer50513774912.Frame(0);
	sServer50513774912.PegRegistered(false);
	sServer50513774912.ZOrder(0);
	sServer50513774912.MapPositionX(0);
	sServer50513774912.MapPositionY(0);
	sServer50513774912.CheckCollisionWithMap(false);
	sServer50513774912.DisplayListNumber(0);
	sServer50513774912.Friction(0);
	sServer50513774912.ActivateCollisionWithSprite(false);
	sServer50513774912.VectorDirection(0,0,0);
	sServer50513774912.ShowVectorOfTranslation(false);
	sServer50513774912.CollisionType(LOOSECOLLISION);
	sServer50513774912.Speed((float)0.00);
	sServer50513774912.VariableNumber(0);
	sServer50513774912.ShowSpriteBoundingBox(false);
	sServer50513774912.ShowSpriteCollision(false);
	sServer50513774912.Gravity(false);
	gn->Add(sServer50513774912);

	Sprite sDoor63507753948;
	sDoor63507753948.Name("Door");
	sDoor63507753948.Visible(true);
	sDoor63507753948.Unused(true);
	sDoor63507753948.Pause(false);
	sDoor63507753948.Reflection(false);
	sDoor63507753948.MainCharacter(false);
	sDoor63507753948.BelongToMap("GameMap");
	sDoor63507753948.ActorIndex(4);
	sDoor63507753948.Animation(2);
	sDoor63507753948.Frame(0);
	sDoor63507753948.PegRegistered(false);
	sDoor63507753948.ZOrder(0);
	sDoor63507753948.MapPositionX(0);
	sDoor63507753948.MapPositionY(0);
	sDoor63507753948.CheckCollisionWithMap(false);
	sDoor63507753948.DisplayListNumber(0);
	sDoor63507753948.Friction(0);
	sDoor63507753948.ActivateCollisionWithSprite(false);
	sDoor63507753948.VectorDirection(0,0,0);
	sDoor63507753948.ShowVectorOfTranslation(false);
	sDoor63507753948.CollisionType(LOOSECOLLISION);
	sDoor63507753948.Speed((float)0.00);
	sDoor63507753948.VariableNumber(0);
	sDoor63507753948.ShowSpriteBoundingBox(false);
	sDoor63507753948.ShowSpriteCollision(false);
	sDoor63507753948.Gravity(false);
	gn->Add(sDoor63507753948);

	Sprite sExit19443989711;
	sExit19443989711.Name("Exit");
	sExit19443989711.Visible(true);
	sExit19443989711.Unused(true);
	sExit19443989711.Pause(false);
	sExit19443989711.Reflection(false);
	sExit19443989711.MainCharacter(false);
	sExit19443989711.BelongToMap("GameMap");
	sExit19443989711.ActorIndex(4);
	sExit19443989711.Animation(3);
	sExit19443989711.Frame(0);
	sExit19443989711.PegRegistered(false);
	sExit19443989711.ZOrder(0);
	sExit19443989711.MapPositionX(0);
	sExit19443989711.MapPositionY(0);
	sExit19443989711.CheckCollisionWithMap(false);
	sExit19443989711.DisplayListNumber(0);
	sExit19443989711.Friction(0);
	sExit19443989711.ActivateCollisionWithSprite(false);
	sExit19443989711.VectorDirection(0,0,0);
	sExit19443989711.ShowVectorOfTranslation(false);
	sExit19443989711.CollisionType(LOOSECOLLISION);
	sExit19443989711.Speed((float)0.00);
	sExit19443989711.VariableNumber(0);
	sExit19443989711.ShowSpriteBoundingBox(false);
	sExit19443989711.ShowSpriteCollision(false);
	sExit19443989711.Gravity(false);
	gn->Add(sExit19443989711);

	Variable tScore;
	tScore.Name("Score");
	tScore.Visible(true);
	tScore.Unused(false);
	tScore.Pause(false);
	tScore.FontName("OCR A Extended");
	tScore.Width(0);
	tScore.Height(15.75);
	tScore.Weight(400);
	tScore.Color(RGB(192,192,192));
	tScore.Italic(false);
	tScore.StrikeOut(false);
	tScore.Underline(false);

	FunRect rectScore = {742,524,792,564};
	tScore.Frame(rectScore);
	tScore.ShowFrame(false);
	tScore.InWorld(true);
	tScore.ActivateOutOfViewport(true);
	tScore.BelongToMap("GameMap");
	tScore.TopMost(true);
	tScore.DisplayType(Variable::RespectingWords);
	tScore.TopMargin(0);
	tScore.LeftMargin(0);
	tScore.LineSpacing(0);
	tScore.LetterSpacing(0);
	tScore.LeadingSpaces(true);
	tScore.Effect(Variable::MummyEffect);
	tScore.Delay(0,0);
	tScore.OnlyIntegerPart(true);
	tScore = 0.000000;
	gn->Add(tScore);

	Variable tout_of;
	tout_of.Name("out_of");
	tout_of.Visible(true);
	tout_of.Unused(false);
	tout_of.Pause(false);
	tout_of.FontName("OCR A Extended");
	tout_of.Width(0);
	tout_of.Height(15.75);
	tout_of.Weight(400);
	tout_of.Color(RGB(128,128,128));
	tout_of.Italic(false);
	tout_of.StrikeOut(false);
	tout_of.Underline(false);

	FunRect rectout_of = {759,524,799,584};
	tout_of.Frame(rectout_of);
	tout_of.ShowFrame(false);
	tout_of.InWorld(true);
	tout_of.ActivateOutOfViewport(true);
	tout_of.BelongToMap("GameMap");
	tout_of.TopMost(true);
	tout_of.DisplayType(Variable::RespectingWords);
	tout_of.TopMargin(0);
	tout_of.LeftMargin(0);
	tout_of.LineSpacing(0);
	tout_of.LetterSpacing(0);
	tout_of.LeadingSpaces(true);
	tout_of.Effect(Variable::MummyEffect);
	tout_of.Delay(0,0);
	tout_of = "/5";
	gn->Add(tout_of);

	Variable tKeycards;
	tKeycards.Name("Keycards");
	tKeycards.Visible(true);
	tKeycards.Unused(false);
	tKeycards.Pause(false);
	tKeycards.FontName("OCR A Extended");
	tKeycards.Width(0);
	tKeycards.Height(12.00);
	tKeycards.Weight(400);
	tKeycards.Color(RGB(255,0,0));
	tKeycards.Italic(false);
	tKeycards.StrikeOut(false);
	tKeycards.Underline(false);

	FunRect rectKeycards = {731,548,800,592};
	tKeycards.Frame(rectKeycards);
	tKeycards.ShowFrame(false);
	tKeycards.InWorld(true);
	tKeycards.ActivateOutOfViewport(true);
	tKeycards.BelongToMap("GameMap");
	tKeycards.TopMost(true);
	tKeycards.DisplayType(Variable::RespectingWords);
	tKeycards.TopMargin(0);
	tKeycards.LeftMargin(0);
	tKeycards.LineSpacing(0);
	tKeycards.LetterSpacing(0);
	tKeycards.LeadingSpaces(true);
	tKeycards.Effect(Variable::MummyEffect);
	tKeycards.Delay(0,0);
	tKeycards = "Hall 3\n";
	gn->Add(tKeycards);


	FILE*f1;
	
	f1=fopen("Hall 3.txt","rt");
	
	//y is # of rows & x is # of Columns
	for(int y=0;y<20;y++)
	{
		char ch;
		for(int x=0;x<24;x++)
			{
				fscanf(f1,"%c",&ch);
							if(ch=='W')
			{					
									MakeWall(x,y);
									binaryMap[x][y]=0;
							}
	
							else if(ch=='K')
			{	
									MakeKey(x,y);
									binaryMap[x][y]=1;
	
							}  
							else if(ch=='A')
			{	
									MakeDoor(x,y);
									binaryMap[x][y]=0;
	
							}  
	
							else if(ch=='S')
			{	
									MakeServer(x,y);
									binaryMap[x][y]=0;
	
							}  
							else if(ch=='B')
			{	
									MakeBed1(x,y);
									binaryMap[x][y]=0;
	
							}  
	
							 else if(ch=='X')
			{					
									MakeBed1(x,y);
									binaryMap[x][y]=0;
							}
							else if(ch=='Y')
			{					
									MakeBed2(x,y);
									binaryMap[x][y]=0;
							}
							else if(ch=='Z')
			{					
									MakeBed3(x,y);
									binaryMap[x][y]=0;
							}  
							else if(ch=='E')
			{	
									MakeExit(x,y);
									binaryMap[x][y]=0;
	
							}  
							else{
	
								//	MakeFood(x,y);
									binaryMap[x][y]=1;
							}
		}
		fscanf(f1,"%c",&ch);
	}
	fclose(f1);

};

void End_Level_7Function(GameNode *gn)
{
	

};

void Exit_Level_7Function(GameNode *gn)
{
};

void Init_MenuFunction(GameNode *gn)
{
#ifdef ERROR_MESSAGES
	pConsole->Color(RGB(0,0,0));
#endif

	gn->WorldWidth(800);
	gn->WorldHeight(600);

	gn->FPStoMS(60);
	gn->QuitOnEscape(true);
	gn->ShowScrollingBoundingBox(false);

	gn->viewPort.ViewPortScrollingBB(0,0,640,480);

	gn->viewPort.WorldXPos(0);
	gn->viewPort.WorldYPos(0);
	gn->viewPort.MaxInflateBBLeft(0);
	gn->viewPort.MaxInflateBBTop(0);
	gn->viewPort.MaxInflateBBRight(0);
	gn->viewPort.MaxInflateBBBottom(0);

	gn->viewPort.ViewPortWidth(800);
	gn->viewPort.ViewPortHeight(600);

	pFunCursor = NewFunCursor();
	pFunCursor->AddSpriteCursor(DEFAULT_CURSOR,0,0,LOOSECOLLISION);
	pFunCursor->ViewportPosition(gn->viewPort.Width()/2,gn->viewPort.Height()/2);
	pFunCursor->behavior.AddFunction(FN_MENU_FUNK);
	myGame->ShowCursor(true);


	FunRect rectBackground = {0,0,800,600};
	Map mBackground("Background","Menu 1.bmp",Map::STANDARDMAP,0,0,0,true,rectBackground);
	mBackground.SpeedX(0.00);
	mBackground.SpeedY(0.00);
	mBackground.ScrollRatioX(0.00);
	mBackground.ScrollRatioY(0.00);
	mBackground.UseTransparency(false);
	mBackground.Visible(true);
	mBackground.Unused(false);
	mBackground.Pause(false);
	mBackground.SpacePartitionGridSize(128);
	mBackground.ShowMapCollision(false);
	gn->Add(mBackground);

	Sprite sNewG2680011856406;
	sNewG2680011856406.Name("NewG");
	sNewG2680011856406.Visible(false);
	sNewG2680011856406.Unused(false);
	sNewG2680011856406.Pause(false);
	sNewG2680011856406.Reflection(false);
	sNewG2680011856406.MainCharacter(false);
	sNewG2680011856406.BelongToMap("Background");
	sNewG2680011856406.ActorIndex(9);
	sNewG2680011856406.Animation(0);
	sNewG2680011856406.Frame(0);
	sNewG2680011856406.PegRegistered(false);
	sNewG2680011856406.ZOrder(0);
	sNewG2680011856406.MapPositionX(47);
	sNewG2680011856406.MapPositionY(53);
	sNewG2680011856406.CheckCollisionWithMap(false);
	sNewG2680011856406.DisplayListNumber(0);
	sNewG2680011856406.Friction(0);
	sNewG2680011856406.ActivateCollisionWithSprite(true);
	sNewG2680011856406.CheckCollisionWithSprite(true);
	sNewG2680011856406.CheckSameDisplayList(false);
	sNewG2680011856406.GhostCollisionWithSprite(false);
	sNewG2680011856406.VectorDirection(0,0,0);
	sNewG2680011856406.ShowVectorOfTranslation(false);
	sNewG2680011856406.CollisionType(LOOSECOLLISION);
	sNewG2680011856406.Speed((float)0.00);
	sNewG2680011856406.VariableNumber(0);
	sNewG2680011856406.ShowSpriteBoundingBox(false);
	sNewG2680011856406.ShowSpriteCollision(false);
	sNewG2680011856406.Gravity(false);
	gn->Add(sNewG2680011856406);

	Sprite sInfo53033739935;
	sInfo53033739935.Name("Info");
	sInfo53033739935.Visible(false);
	sInfo53033739935.Unused(false);
	sInfo53033739935.Pause(false);
	sInfo53033739935.Reflection(false);
	sInfo53033739935.MainCharacter(false);
	sInfo53033739935.BelongToMap("Background");
	sInfo53033739935.ActorIndex(9);
	sInfo53033739935.Animation(0);
	sInfo53033739935.Frame(0);
	sInfo53033739935.PegRegistered(false);
	sInfo53033739935.ZOrder(0);
	sInfo53033739935.MapPositionX(46);
	sInfo53033739935.MapPositionY(197);
	sInfo53033739935.CheckCollisionWithMap(false);
	sInfo53033739935.DisplayListNumber(0);
	sInfo53033739935.Friction(0);
	sInfo53033739935.ActivateCollisionWithSprite(true);
	sInfo53033739935.CheckCollisionWithSprite(true);
	sInfo53033739935.CheckSameDisplayList(false);
	sInfo53033739935.GhostCollisionWithSprite(false);
	sInfo53033739935.VectorDirection(0,0,0);
	sInfo53033739935.ShowVectorOfTranslation(false);
	sInfo53033739935.CollisionType(LOOSECOLLISION);
	sInfo53033739935.Speed((float)0.00);
	sInfo53033739935.VariableNumber(0);
	sInfo53033739935.ShowSpriteBoundingBox(false);
	sInfo53033739935.ShowSpriteCollision(false);
	sInfo53033739935.Gravity(false);
	gn->Add(sInfo53033739935);

	Sprite sCont74845267058;
	sCont74845267058.Name("Cont");
	sCont74845267058.Visible(false);
	sCont74845267058.Unused(false);
	sCont74845267058.Pause(false);
	sCont74845267058.Reflection(false);
	sCont74845267058.MainCharacter(false);
	sCont74845267058.BelongToMap("Background");
	sCont74845267058.ActorIndex(9);
	sCont74845267058.Animation(0);
	sCont74845267058.Frame(0);
	sCont74845267058.PegRegistered(false);
	sCont74845267058.ZOrder(1);
	sCont74845267058.MapPositionX(43);
	sCont74845267058.MapPositionY(341);
	sCont74845267058.CheckCollisionWithMap(false);
	sCont74845267058.DisplayListNumber(0);
	sCont74845267058.Friction(0);
	sCont74845267058.ActivateCollisionWithSprite(true);
	sCont74845267058.CheckCollisionWithSprite(true);
	sCont74845267058.CheckSameDisplayList(false);
	sCont74845267058.GhostCollisionWithSprite(false);
	sCont74845267058.VectorDirection(0,0,0);
	sCont74845267058.ShowVectorOfTranslation(false);
	sCont74845267058.CollisionType(LOOSECOLLISION);
	sCont74845267058.Speed((float)0.00);
	sCont74845267058.VariableNumber(0);
	sCont74845267058.ShowSpriteBoundingBox(false);
	sCont74845267058.ShowSpriteCollision(false);
	sCont74845267058.Gravity(false);
	gn->Add(sCont74845267058);

	Sprite sExit53111799962;
	sExit53111799962.Name("Exit");
	sExit53111799962.Visible(false);
	sExit53111799962.Unused(false);
	sExit53111799962.Pause(false);
	sExit53111799962.Reflection(false);
	sExit53111799962.MainCharacter(false);
	sExit53111799962.BelongToMap("Background");
	sExit53111799962.ActorIndex(9);
	sExit53111799962.Animation(0);
	sExit53111799962.Frame(0);
	sExit53111799962.PegRegistered(false);
	sExit53111799962.ZOrder(0);
	sExit53111799962.MapPositionX(42);
	sExit53111799962.MapPositionY(488);
	sExit53111799962.CheckCollisionWithMap(false);
	sExit53111799962.DisplayListNumber(0);
	sExit53111799962.Friction(0);
	sExit53111799962.ActivateCollisionWithSprite(true);
	sExit53111799962.CheckCollisionWithSprite(true);
	sExit53111799962.CheckSameDisplayList(false);
	sExit53111799962.GhostCollisionWithSprite(false);
	sExit53111799962.VectorDirection(0,0,0);
	sExit53111799962.ShowVectorOfTranslation(false);
	sExit53111799962.CollisionType(LOOSECOLLISION);
	sExit53111799962.Speed((float)0.00);
	sExit53111799962.VariableNumber(0);
	sExit53111799962.ShowSpriteBoundingBox(false);
	sExit53111799962.ShowSpriteCollision(false);
	sExit53111799962.Gravity(false);
	gn->Add(sExit53111799962);

	Sprite sMenu2648252044546;
	sMenu2648252044546.Name("Menu");
	sMenu2648252044546.Visible(true);
	sMenu2648252044546.Unused(false);
	sMenu2648252044546.Pause(false);
	sMenu2648252044546.Reflection(false);
	sMenu2648252044546.MainCharacter(false);
	sMenu2648252044546.BelongToMap("Background");
	sMenu2648252044546.ActorIndex(8);
	sMenu2648252044546.Animation(0);
	sMenu2648252044546.Frame(0);
	sMenu2648252044546.PegRegistered(false);
	sMenu2648252044546.ZOrder(0);
	sMenu2648252044546.MapPositionX(0);
	sMenu2648252044546.MapPositionY(0);
	sMenu2648252044546.CheckCollisionWithMap(false);
	sMenu2648252044546.DisplayListNumber(0);
	sMenu2648252044546.Friction(0);
	sMenu2648252044546.ActivateCollisionWithSprite(false);
	sMenu2648252044546.VectorDirection(0,0,0);
	sMenu2648252044546.ShowVectorOfTranslation(false);
	sMenu2648252044546.CollisionType(LOOSECOLLISION);
	sMenu2648252044546.Speed((float)0.00);
	sMenu2648252044546.VariableNumber(0);
	sMenu2648252044546.ShowSpriteBoundingBox(false);
	sMenu2648252044546.ShowSpriteCollision(false);
	sMenu2648252044546.Gravity(false);
	gn->Add(sMenu2648252044546);


};

void End_MenuFunction(GameNode *gn)
{
	

};

void Exit_MenuFunction(GameNode *gn)
{
};

void Init_infoFunction(GameNode *gn)
{
#ifdef ERROR_MESSAGES
	pConsole->Color(RGB(0,0,0));
#endif

	gn->WorldWidth(640);
	gn->WorldHeight(480);

	gn->FPStoMS(60);
	gn->QuitOnEscape(true);
	gn->ShowScrollingBoundingBox(false);

	gn->viewPort.ViewPortScrollingBB(0,0,640,480);

	gn->viewPort.WorldXPos(0);
	gn->viewPort.WorldYPos(0);
	gn->viewPort.MaxInflateBBLeft(0);
	gn->viewPort.MaxInflateBBTop(0);
	gn->viewPort.MaxInflateBBRight(0);
	gn->viewPort.MaxInflateBBBottom(0);

	gn->viewPort.ViewPortWidth(800);
	gn->viewPort.ViewPortHeight(600);

	pFunCursor = NewFunCursor();
	pFunCursor->AddSpriteCursor(DEFAULT_CURSOR,0,0,LOOSECOLLISION);
	pFunCursor->ViewportPosition(gn->viewPort.Width()/2,gn->viewPort.Height()/2);
	pFunCursor->behavior.AddFunction(FN_EXIT);
	myGame->ShowCursor(true);


	FunRect rectback = {0,0,800,600};
	Map mback("back","Info Menu 1.bmp",Map::STANDARDMAP,0,0,0,true,rectback);
	mback.SpeedX(0.00);
	mback.SpeedY(0.00);
	mback.ScrollRatioX(0.00);
	mback.ScrollRatioY(0.00);
	mback.UseTransparency(false);
	mback.Visible(true);
	mback.Unused(false);
	mback.Pause(false);
	mback.SpacePartitionGridSize(128);
	mback.ShowMapCollision(false);
	gn->Add(mback);

	Sprite sexit60988192535;
	sexit60988192535.Name("exit");
	sexit60988192535.Visible(false);
	sexit60988192535.Unused(false);
	sexit60988192535.Pause(false);
	sexit60988192535.Reflection(false);
	sexit60988192535.MainCharacter(false);
	sexit60988192535.BelongToMap("back");
	sexit60988192535.ActorIndex(9);
	sexit60988192535.Animation(0);
	sexit60988192535.Frame(0);
	sexit60988192535.PegRegistered(false);
	sexit60988192535.ZOrder(1);
	sexit60988192535.MapPositionX(47);
	sexit60988192535.MapPositionY(491);
	sexit60988192535.CheckCollisionWithMap(false);
	sexit60988192535.DisplayListNumber(0);
	sexit60988192535.Friction(0);
	sexit60988192535.ActivateCollisionWithSprite(true);
	sexit60988192535.CheckCollisionWithSprite(true);
	sexit60988192535.CheckSameDisplayList(false);
	sexit60988192535.GhostCollisionWithSprite(false);
	sexit60988192535.VectorDirection(0,0,0);
	sexit60988192535.ShowVectorOfTranslation(false);
	sexit60988192535.CollisionType(LOOSECOLLISION);
	sexit60988192535.Speed((float)0.00);
	sexit60988192535.VariableNumber(0);
	sexit60988192535.ShowSpriteBoundingBox(false);
	sexit60988192535.ShowSpriteCollision(false);
	sexit60988192535.Gravity(false);
	gn->Add(sexit60988192535);

	Sprite sinfo2648544544641;
	sinfo2648544544641.Name("info");
	sinfo2648544544641.Visible(true);
	sinfo2648544544641.Unused(false);
	sinfo2648544544641.Pause(false);
	sinfo2648544544641.Reflection(false);
	sinfo2648544544641.MainCharacter(false);
	sinfo2648544544641.BelongToMap("back");
	sinfo2648544544641.ActorIndex(8);
	sinfo2648544544641.Animation(1);
	sinfo2648544544641.Frame(0);
	sinfo2648544544641.PegRegistered(false);
	sinfo2648544544641.ZOrder(0);
	sinfo2648544544641.MapPositionX(0);
	sinfo2648544544641.MapPositionY(0);
	sinfo2648544544641.CheckCollisionWithMap(false);
	sinfo2648544544641.DisplayListNumber(0);
	sinfo2648544544641.Friction(0);
	sinfo2648544544641.ActivateCollisionWithSprite(false);
	sinfo2648544544641.VectorDirection(0,0,0);
	sinfo2648544544641.ShowVectorOfTranslation(false);
	sinfo2648544544641.CollisionType(LOOSECOLLISION);
	sinfo2648544544641.Speed((float)0.00);
	sinfo2648544544641.VariableNumber(0);
	sinfo2648544544641.ShowSpriteBoundingBox(false);
	sinfo2648544544641.ShowSpriteCollision(false);
	sinfo2648544544641.Gravity(false);
	gn->Add(sinfo2648544544641);


};

void End_infoFunction(GameNode *gn)
{
	

};

void Exit_infoFunction(GameNode *gn)
{
};

void Init_ConrolFunction(GameNode *gn)
{
#ifdef ERROR_MESSAGES
	pConsole->Color(RGB(0,0,0));
#endif

	gn->WorldWidth(800);
	gn->WorldHeight(600);

	gn->FPStoMS(60);
	gn->QuitOnEscape(true);
	gn->ShowScrollingBoundingBox(false);

	gn->viewPort.ViewPortScrollingBB(0,0,640,480);

	gn->viewPort.WorldXPos(0);
	gn->viewPort.WorldYPos(0);
	gn->viewPort.MaxInflateBBLeft(0);
	gn->viewPort.MaxInflateBBTop(0);
	gn->viewPort.MaxInflateBBRight(0);
	gn->viewPort.MaxInflateBBBottom(0);

	gn->viewPort.ViewPortWidth(800);
	gn->viewPort.ViewPortHeight(600);

	pFunCursor = NewFunCursor();
	pFunCursor->AddSpriteCursor(DEFAULT_CURSOR,0,0,LOOSECOLLISION);
	pFunCursor->ViewportPosition(gn->viewPort.Width()/2,gn->viewPort.Height()/2);
	pFunCursor->behavior.AddFunction(FN_EXIT);
	myGame->ShowCursor(true);


	FunRect rectmap = {0,0,800,600};
	Map mmap("map","Controls 1.bmp",Map::STANDARDMAP,0,0,0,true,rectmap);
	mmap.SpeedX(0.00);
	mmap.SpeedY(0.00);
	mmap.ScrollRatioX(0.00);
	mmap.ScrollRatioY(0.00);
	mmap.UseTransparency(false);
	mmap.Visible(true);
	mmap.Unused(false);
	mmap.Pause(false);
	mmap.SpacePartitionGridSize(128);
	mmap.ShowMapCollision(false);
	gn->Add(mmap);

	Sprite sexit61505812701;
	sexit61505812701.Name("exit");
	sexit61505812701.Visible(false);
	sexit61505812701.Unused(false);
	sexit61505812701.Pause(false);
	sexit61505812701.Reflection(false);
	sexit61505812701.MainCharacter(false);
	sexit61505812701.BelongToMap("map");
	sexit61505812701.ActorIndex(9);
	sexit61505812701.Animation(0);
	sexit61505812701.Frame(0);
	sexit61505812701.PegRegistered(false);
	sexit61505812701.ZOrder(1);
	sexit61505812701.MapPositionX(36);
	sexit61505812701.MapPositionY(486);
	sexit61505812701.CheckCollisionWithMap(false);
	sexit61505812701.DisplayListNumber(0);
	sexit61505812701.Friction(0);
	sexit61505812701.ActivateCollisionWithSprite(true);
	sexit61505812701.CheckCollisionWithSprite(true);
	sexit61505812701.CheckSameDisplayList(false);
	sexit61505812701.GhostCollisionWithSprite(false);
	sexit61505812701.VectorDirection(0,0,0);
	sexit61505812701.ShowVectorOfTranslation(false);
	sexit61505812701.CollisionType(LOOSECOLLISION);
	sexit61505812701.Speed((float)0.00);
	sexit61505812701.VariableNumber(0);
	sexit61505812701.ShowSpriteBoundingBox(false);
	sexit61505812701.ShowSpriteCollision(false);
	sexit61505812701.Gravity(false);
	gn->Add(sexit61505812701);

	Sprite scontori2648817244729;
	scontori2648817244729.Name("contori");
	scontori2648817244729.Visible(true);
	scontori2648817244729.Unused(false);
	scontori2648817244729.Pause(false);
	scontori2648817244729.Reflection(false);
	scontori2648817244729.MainCharacter(false);
	scontori2648817244729.BelongToMap("map");
	scontori2648817244729.ActorIndex(8);
	scontori2648817244729.Animation(2);
	scontori2648817244729.Frame(0);
	scontori2648817244729.PegRegistered(false);
	scontori2648817244729.ZOrder(0);
	scontori2648817244729.MapPositionX(0);
	scontori2648817244729.MapPositionY(0);
	scontori2648817244729.CheckCollisionWithMap(false);
	scontori2648817244729.DisplayListNumber(0);
	scontori2648817244729.Friction(0);
	scontori2648817244729.ActivateCollisionWithSprite(false);
	scontori2648817244729.VectorDirection(0,0,0);
	scontori2648817244729.ShowVectorOfTranslation(false);
	scontori2648817244729.CollisionType(LOOSECOLLISION);
	scontori2648817244729.Speed((float)0.00);
	scontori2648817244729.VariableNumber(0);
	scontori2648817244729.ShowSpriteBoundingBox(false);
	scontori2648817244729.ShowSpriteCollision(false);
	scontori2648817244729.Gravity(false);
	gn->Add(scontori2648817244729);


};

void End_ConrolFunction(GameNode *gn)
{
	

};

void Exit_ConrolFunction(GameNode *gn)
{
};

void Init_difiFunction(GameNode *gn)
{
#ifdef ERROR_MESSAGES
	pConsole->Color(RGB(0,0,0));
#endif

	gn->WorldWidth(800);
	gn->WorldHeight(600);

	gn->FPStoMS(60);
	gn->QuitOnEscape(true);
	gn->ShowScrollingBoundingBox(false);

	gn->viewPort.ViewPortScrollingBB(0,0,640,480);

	gn->viewPort.WorldXPos(0);
	gn->viewPort.WorldYPos(0);
	gn->viewPort.MaxInflateBBLeft(0);
	gn->viewPort.MaxInflateBBTop(0);
	gn->viewPort.MaxInflateBBRight(0);
	gn->viewPort.MaxInflateBBBottom(0);

	gn->viewPort.ViewPortWidth(800);
	gn->viewPort.ViewPortHeight(600);

	pFunCursor = NewFunCursor();
	pFunCursor->AddSpriteCursor(DEFAULT_CURSOR,0,0,LOOSECOLLISION);
	pFunCursor->ViewportPosition(gn->viewPort.Width()/2,gn->viewPort.Height()/2);
	pFunCursor->behavior.AddFunction(FN_DIFI_SELECT);
	myGame->ShowCursor(true);


	FunRect rectmap = {0,0,800,600};
	Map mmap("map","Difficulty 1.bmp",Map::STANDARDMAP,0,0,0,true,rectmap);
	mmap.SpeedX(0.00);
	mmap.SpeedY(0.00);
	mmap.ScrollRatioX(0.00);
	mmap.ScrollRatioY(0.00);
	mmap.UseTransparency(false);
	mmap.Visible(true);
	mmap.Unused(false);
	mmap.Pause(false);
	mmap.SpacePartitionGridSize(128);
	mmap.ShowMapCollision(false);
	gn->Add(mmap);

	Sprite sAMA66907134465;
	sAMA66907134465.Name("AMA");
	sAMA66907134465.Visible(false);
	sAMA66907134465.Unused(false);
	sAMA66907134465.Pause(false);
	sAMA66907134465.Reflection(false);
	sAMA66907134465.MainCharacter(false);
	sAMA66907134465.BelongToMap("map");
	sAMA66907134465.ActorIndex(9);
	sAMA66907134465.Animation(0);
	sAMA66907134465.Frame(0);
	sAMA66907134465.PegRegistered(false);
	sAMA66907134465.ZOrder(1);
	sAMA66907134465.MapPositionX(39);
	sAMA66907134465.MapPositionY(57);
	sAMA66907134465.CheckCollisionWithMap(false);
	sAMA66907134465.DisplayListNumber(1);
	sAMA66907134465.Friction(0);
	sAMA66907134465.ActivateCollisionWithSprite(true);
	sAMA66907134465.CheckCollisionWithSprite(true);
	sAMA66907134465.CheckSameDisplayList(false);
	sAMA66907134465.GhostCollisionWithSprite(false);
	sAMA66907134465.VectorDirection(0,0,0);
	sAMA66907134465.ShowVectorOfTranslation(false);
	sAMA66907134465.CollisionType(LOOSECOLLISION);
	sAMA66907134465.Speed((float)0.00);
	sAMA66907134465.VariableNumber(0);
	sAMA66907134465.ShowSpriteBoundingBox(false);
	sAMA66907134465.ShowSpriteCollision(false);
	sAMA66907134465.Gravity(false);
	gn->Add(sAMA66907134465);

	Sprite sMOD66019724177;
	sMOD66019724177.Name("MOD");
	sMOD66019724177.Visible(true);
	sMOD66019724177.Unused(false);
	sMOD66019724177.Pause(false);
	sMOD66019724177.Reflection(false);
	sMOD66019724177.MainCharacter(false);
	sMOD66019724177.BelongToMap("map");
	sMOD66019724177.ActorIndex(9);
	sMOD66019724177.Animation(0);
	sMOD66019724177.Frame(0);
	sMOD66019724177.PegRegistered(false);
	sMOD66019724177.ZOrder(1);
	sMOD66019724177.MapPositionX(38);
	sMOD66019724177.MapPositionY(200);
	sMOD66019724177.CheckCollisionWithMap(false);
	sMOD66019724177.DisplayListNumber(1);
	sMOD66019724177.Friction(0);
	sMOD66019724177.ActivateCollisionWithSprite(true);
	sMOD66019724177.CheckCollisionWithSprite(true);
	sMOD66019724177.CheckSameDisplayList(false);
	sMOD66019724177.GhostCollisionWithSprite(false);
	sMOD66019724177.VectorDirection(0,0,0);
	sMOD66019724177.ShowVectorOfTranslation(false);
	sMOD66019724177.CollisionType(LOOSECOLLISION);
	sMOD66019724177.Speed((float)0.00);
	sMOD66019724177.VariableNumber(0);
	sMOD66019724177.ShowSpriteBoundingBox(false);
	sMOD66019724177.ShowSpriteCollision(false);
	sMOD66019724177.Gravity(false);
	gn->Add(sMOD66019724177);

	Sprite sSUR66092664200;
	sSUR66092664200.Name("SUR");
	sSUR66092664200.Visible(false);
	sSUR66092664200.Unused(false);
	sSUR66092664200.Pause(false);
	sSUR66092664200.Reflection(false);
	sSUR66092664200.MainCharacter(false);
	sSUR66092664200.BelongToMap("map");
	sSUR66092664200.ActorIndex(9);
	sSUR66092664200.Animation(0);
	sSUR66092664200.Frame(0);
	sSUR66092664200.PegRegistered(false);
	sSUR66092664200.ZOrder(1);
	sSUR66092664200.MapPositionX(40);
	sSUR66092664200.MapPositionY(346);
	sSUR66092664200.CheckCollisionWithMap(false);
	sSUR66092664200.DisplayListNumber(1);
	sSUR66092664200.Friction(0);
	sSUR66092664200.ActivateCollisionWithSprite(true);
	sSUR66092664200.CheckCollisionWithSprite(true);
	sSUR66092664200.CheckSameDisplayList(false);
	sSUR66092664200.GhostCollisionWithSprite(false);
	sSUR66092664200.VectorDirection(0,0,0);
	sSUR66092664200.ShowVectorOfTranslation(false);
	sSUR66092664200.CollisionType(LOOSECOLLISION);
	sSUR66092664200.Speed((float)0.00);
	sSUR66092664200.VariableNumber(0);
	sSUR66092664200.ShowSpriteBoundingBox(false);
	sSUR66092664200.ShowSpriteCollision(false);
	sSUR66092664200.Gravity(false);
	gn->Add(sSUR66092664200);

	Sprite sExit66154284220;
	sExit66154284220.Name("Exit");
	sExit66154284220.Visible(false);
	sExit66154284220.Unused(false);
	sExit66154284220.Pause(false);
	sExit66154284220.Reflection(false);
	sExit66154284220.MainCharacter(false);
	sExit66154284220.BelongToMap("map");
	sExit66154284220.ActorIndex(9);
	sExit66154284220.Animation(0);
	sExit66154284220.Frame(0);
	sExit66154284220.PegRegistered(false);
	sExit66154284220.ZOrder(1);
	sExit66154284220.MapPositionX(41);
	sExit66154284220.MapPositionY(486);
	sExit66154284220.CheckCollisionWithMap(false);
	sExit66154284220.DisplayListNumber(0);
	sExit66154284220.Friction(0);
	sExit66154284220.ActivateCollisionWithSprite(true);
	sExit66154284220.CheckCollisionWithSprite(true);
	sExit66154284220.CheckSameDisplayList(false);
	sExit66154284220.GhostCollisionWithSprite(false);
	sExit66154284220.VectorDirection(0,0,0);
	sExit66154284220.ShowVectorOfTranslation(false);
	sExit66154284220.CollisionType(LOOSECOLLISION);
	sExit66154284220.Speed((float)0.00);
	sExit66154284220.VariableNumber(0);
	sExit66154284220.ShowSpriteBoundingBox(false);
	sExit66154284220.ShowSpriteCollision(false);
	sExit66154284220.Gravity(false);
	gn->Add(sExit66154284220);

	Sprite sdifi2648979864784;
	sdifi2648979864784.Name("difi");
	sdifi2648979864784.Visible(true);
	sdifi2648979864784.Unused(false);
	sdifi2648979864784.Pause(false);
	sdifi2648979864784.Reflection(false);
	sdifi2648979864784.MainCharacter(false);
	sdifi2648979864784.BelongToMap("map");
	sdifi2648979864784.ActorIndex(8);
	sdifi2648979864784.Animation(3);
	sdifi2648979864784.Frame(0);
	sdifi2648979864784.PegRegistered(false);
	sdifi2648979864784.ZOrder(0);
	sdifi2648979864784.MapPositionX(0);
	sdifi2648979864784.MapPositionY(0);
	sdifi2648979864784.CheckCollisionWithMap(false);
	sdifi2648979864784.DisplayListNumber(0);
	sdifi2648979864784.Friction(0);
	sdifi2648979864784.ActivateCollisionWithSprite(false);
	sdifi2648979864784.VectorDirection(0,0,0);
	sdifi2648979864784.ShowVectorOfTranslation(false);
	sdifi2648979864784.CollisionType(LOOSECOLLISION);
	sdifi2648979864784.Speed((float)0.00);
	sdifi2648979864784.VariableNumber(0);
	sdifi2648979864784.ShowSpriteBoundingBox(false);
	sdifi2648979864784.ShowSpriteCollision(false);
	sdifi2648979864784.Gravity(false);
	gn->Add(sdifi2648979864784);


};

void End_difiFunction(GameNode *gn)
{
	

};

void Exit_difiFunction(GameNode *gn)
{
};

void Init_WinFunction(GameNode *gn)
{
#ifdef ERROR_MESSAGES
	pConsole->Color(RGB(0,0,0));
#endif

	gn->WorldWidth(640);
	gn->WorldHeight(480);

	gn->FPStoMS(60);
	gn->QuitOnEscape(true);
	gn->ShowScrollingBoundingBox(false);

	gn->viewPort.ViewPortScrollingBB(0,0,640,480);

	gn->viewPort.WorldXPos(0);
	gn->viewPort.WorldYPos(0);
	gn->viewPort.MaxInflateBBLeft(0);
	gn->viewPort.MaxInflateBBTop(0);
	gn->viewPort.MaxInflateBBRight(0);
	gn->viewPort.MaxInflateBBBottom(0);

	gn->viewPort.ViewPortWidth(800);
	gn->viewPort.ViewPortHeight(600);

	pFunCursor = NewFunCursor();
	pFunCursor->AddSpriteCursor(DEFAULT_CURSOR,0,0,LOOSECOLLISION);
	pFunCursor->ViewportPosition(gn->viewPort.Width()/2,gn->viewPort.Height()/2);
	pFunCursor->behavior.AddFunction(FN_EXIT);
	myGame->ShowCursor(true);


	FunRect rectWin = {0,0,800,600};
	Map mWin("Win","Win 1.bmp",Map::STANDARDMAP,0,0,0,true,rectWin);
	mWin.SpeedX(0.00);
	mWin.SpeedY(0.00);
	mWin.ScrollRatioX(0.00);
	mWin.ScrollRatioY(0.00);
	mWin.UseTransparency(false);
	mWin.Visible(true);
	mWin.Unused(false);
	mWin.Pause(false);
	mWin.SpacePartitionGridSize(128);
	mWin.ShowMapCollision(false);
	gn->Add(mWin);

	Sprite sWin2662301439134;
	sWin2662301439134.Name("Win");
	sWin2662301439134.Visible(true);
	sWin2662301439134.Unused(false);
	sWin2662301439134.Pause(false);
	sWin2662301439134.Reflection(false);
	sWin2662301439134.MainCharacter(false);
	sWin2662301439134.BelongToMap("Win");
	sWin2662301439134.ActorIndex(8);
	sWin2662301439134.Animation(4);
	sWin2662301439134.Frame(0);
	sWin2662301439134.PegRegistered(false);
	sWin2662301439134.ZOrder(0);
	sWin2662301439134.MapPositionX(0);
	sWin2662301439134.MapPositionY(0);
	sWin2662301439134.CheckCollisionWithMap(false);
	sWin2662301439134.DisplayListNumber(0);
	sWin2662301439134.Friction(0);
	sWin2662301439134.ActivateCollisionWithSprite(false);
	sWin2662301439134.VectorDirection(0,0,0);
	sWin2662301439134.ShowVectorOfTranslation(false);
	sWin2662301439134.CollisionType(LOOSECOLLISION);
	sWin2662301439134.Speed((float)0.00);
	sWin2662301439134.VariableNumber(0);
	sWin2662301439134.ShowSpriteBoundingBox(false);
	sWin2662301439134.ShowSpriteCollision(false);
	sWin2662301439134.Gravity(false);
	gn->Add(sWin2662301439134);

	Sprite sexit78929868393;
	sexit78929868393.Name("exit");
	sexit78929868393.Visible(false);
	sexit78929868393.Unused(false);
	sexit78929868393.Pause(false);
	sexit78929868393.Reflection(false);
	sexit78929868393.MainCharacter(false);
	sexit78929868393.BelongToMap("Win");
	sexit78929868393.ActorIndex(9);
	sexit78929868393.Animation(0);
	sexit78929868393.Frame(0);
	sexit78929868393.PegRegistered(false);
	sexit78929868393.ZOrder(1);
	sexit78929868393.MapPositionX(43);
	sexit78929868393.MapPositionY(486);
	sexit78929868393.CheckCollisionWithMap(false);
	sexit78929868393.DisplayListNumber(1);
	sexit78929868393.Friction(0);
	sexit78929868393.ActivateCollisionWithSprite(true);
	sexit78929868393.CheckCollisionWithSprite(true);
	sexit78929868393.CheckSameDisplayList(false);
	sexit78929868393.GhostCollisionWithSprite(false);
	sexit78929868393.VectorDirection(0,0,0);
	sexit78929868393.ShowVectorOfTranslation(false);
	sexit78929868393.CollisionType(LOOSECOLLISION);
	sexit78929868393.Speed((float)0.00);
	sexit78929868393.VariableNumber(0);
	sexit78929868393.ShowSpriteBoundingBox(false);
	sexit78929868393.ShowSpriteCollision(false);
	sexit78929868393.Gravity(false);
	gn->Add(sexit78929868393);


};

void End_WinFunction(GameNode *gn)
{
	

};

void Exit_WinFunction(GameNode *gn)
{
};

void Init_LoseFunction(GameNode *gn)
{
#ifdef ERROR_MESSAGES
	pConsole->Color(RGB(0,0,0));
#endif

	gn->WorldWidth(800);
	gn->WorldHeight(600);

	gn->FPStoMS(60);
	gn->QuitOnEscape(true);
	gn->ShowScrollingBoundingBox(false);

	gn->viewPort.ViewPortScrollingBB(0,0,640,480);

	gn->viewPort.WorldXPos(0);
	gn->viewPort.WorldYPos(0);
	gn->viewPort.MaxInflateBBLeft(0);
	gn->viewPort.MaxInflateBBTop(0);
	gn->viewPort.MaxInflateBBRight(0);
	gn->viewPort.MaxInflateBBBottom(0);

	gn->viewPort.ViewPortWidth(800);
	gn->viewPort.ViewPortHeight(600);

	pFunCursor = NewFunCursor();
	pFunCursor->AddSpriteCursor(DEFAULT_CURSOR,0,0,LOOSECOLLISION);
	pFunCursor->ViewportPosition(gn->viewPort.Width()/2,gn->viewPort.Height()/2);
	pFunCursor->behavior.AddFunction(FN_EXIT);
	myGame->ShowCursor(true);


	FunRect rectlose = {0,0,800,600};
	Map mlose("lose","Death 1.bmp",Map::STANDARDMAP,0,0,0,true,rectlose);
	mlose.SpeedX(0.00);
	mlose.SpeedY(0.00);
	mlose.ScrollRatioX(0.00);
	mlose.ScrollRatioY(0.00);
	mlose.UseTransparency(false);
	mlose.Visible(true);
	mlose.Unused(false);
	mlose.Pause(false);
	mlose.SpacePartitionGridSize(128);
	mlose.ShowMapCollision(false);
	gn->Add(mlose);

	Sprite slose2663256369444;
	slose2663256369444.Name("lose");
	slose2663256369444.Visible(true);
	slose2663256369444.Unused(false);
	slose2663256369444.Pause(false);
	slose2663256369444.Reflection(false);
	slose2663256369444.MainCharacter(false);
	slose2663256369444.BelongToMap("lose");
	slose2663256369444.ActorIndex(8);
	slose2663256369444.Animation(5);
	slose2663256369444.Frame(0);
	slose2663256369444.PegRegistered(false);
	slose2663256369444.ZOrder(0);
	slose2663256369444.MapPositionX(0);
	slose2663256369444.MapPositionY(0);
	slose2663256369444.CheckCollisionWithMap(false);
	slose2663256369444.DisplayListNumber(0);
	slose2663256369444.Friction(0);
	slose2663256369444.ActivateCollisionWithSprite(false);
	slose2663256369444.VectorDirection(0,0,0);
	slose2663256369444.ShowVectorOfTranslation(false);
	slose2663256369444.CollisionType(LOOSECOLLISION);
	slose2663256369444.Speed((float)0.00);
	slose2663256369444.VariableNumber(0);
	slose2663256369444.ShowSpriteBoundingBox(false);
	slose2663256369444.ShowSpriteCollision(false);
	slose2663256369444.Gravity(false);
	gn->Add(slose2663256369444);

	Sprite sexit78727108325;
	sexit78727108325.Name("exit");
	sexit78727108325.Visible(false);
	sexit78727108325.Unused(false);
	sexit78727108325.Pause(false);
	sexit78727108325.Reflection(false);
	sexit78727108325.MainCharacter(false);
	sexit78727108325.BelongToMap("lose");
	sexit78727108325.ActorIndex(9);
	sexit78727108325.Animation(0);
	sexit78727108325.Frame(0);
	sexit78727108325.PegRegistered(false);
	sexit78727108325.ZOrder(1);
	sexit78727108325.MapPositionX(39);
	sexit78727108325.MapPositionY(487);
	sexit78727108325.CheckCollisionWithMap(false);
	sexit78727108325.DisplayListNumber(0);
	sexit78727108325.Friction(0);
	sexit78727108325.ActivateCollisionWithSprite(true);
	sexit78727108325.CheckCollisionWithSprite(true);
	sexit78727108325.CheckSameDisplayList(false);
	sexit78727108325.GhostCollisionWithSprite(false);
	sexit78727108325.VectorDirection(0,0,0);
	sexit78727108325.ShowVectorOfTranslation(false);
	sexit78727108325.CollisionType(LOOSECOLLISION);
	sexit78727108325.Speed((float)0.00);
	sexit78727108325.VariableNumber(0);
	sexit78727108325.ShowSpriteBoundingBox(false);
	sexit78727108325.ShowSpriteCollision(false);
	sexit78727108325.Gravity(false);
	gn->Add(sexit78727108325);


};

void End_LoseFunction(GameNode *gn)
{
	

};

void Exit_LoseFunction(GameNode *gn)
{
};

void Init_IntroFunction(GameNode *gn)
{
#ifdef ERROR_MESSAGES
	pConsole->Color(RGB(0,0,0));
#endif

	gn->behavior.AddTimer(TIMER_STORY_START,true);
	gn->behavior.AddFunction(FN_STORY_START2);
	gn->WorldWidth(640);
	gn->WorldHeight(480);

	gn->FPStoMS(60);
	gn->QuitOnEscape(true);
	gn->ShowScrollingBoundingBox(false);

	gn->viewPort.ViewPortScrollingBB(0,0,640,480);

	gn->viewPort.WorldXPos(0);
	gn->viewPort.WorldYPos(0);
	gn->viewPort.MaxInflateBBLeft(0);
	gn->viewPort.MaxInflateBBTop(0);
	gn->viewPort.MaxInflateBBRight(0);
	gn->viewPort.MaxInflateBBBottom(0);

	gn->viewPort.ViewPortWidth(800);
	gn->viewPort.ViewPortHeight(600);

	FunRect rectBackground = {0,0,800,600};
	Map mBackground("Background","Background.bmp",Map::STANDARDMAP,0,0,0,true,rectBackground);
	mBackground.SpeedX(0.00);
	mBackground.SpeedY(2.00);
	mBackground.ScrollRatioX(0.00);
	mBackground.ScrollRatioY(0.00);
	mBackground.UseTransparency(false);
	mBackground.Visible(true);
	mBackground.Unused(false);
	mBackground.Pause(false);
	mBackground.SpacePartitionGridSize(128);
	mBackground.ShowMapCollision(false);
	gn->Add(mBackground);

	Sprite sintro92513702561;
	sintro92513702561.Name("intro");
	sintro92513702561.Visible(true);
	sintro92513702561.Unused(false);
	sintro92513702561.Pause(false);
	sintro92513702561.Reflection(false);
	sintro92513702561.MainCharacter(false);
	sintro92513702561.BelongToMap("Background");
	sintro92513702561.ActorIndex(8);
	sintro92513702561.Animation(6);
	sintro92513702561.Frame(0);
	sintro92513702561.PegRegistered(false);
	sintro92513702561.ZOrder(0);
	sintro92513702561.MapPositionX(0);
	sintro92513702561.MapPositionY(600);
	sintro92513702561.CheckCollisionWithMap(false);
	sintro92513702561.DisplayListNumber(0);
	sintro92513702561.Friction(0);
	sintro92513702561.ActivateCollisionWithSprite(false);
	sintro92513702561.VectorDirection(0,-1,0);
	sintro92513702561.ShowVectorOfTranslation(false);
	sintro92513702561.CollisionType(LOOSECOLLISION);
	sintro92513702561.Speed((float)0.50);
	sintro92513702561.VariableNumber(0);
	sintro92513702561.ShowSpriteBoundingBox(false);
	sintro92513702561.ShowSpriteCollision(false);
	sintro92513702561.Gravity(false);
	gn->Add(sintro92513702561);

	Variable tEnter_to_skip;
	tEnter_to_skip.Name("Enter_to_skip");
	tEnter_to_skip.Visible(true);
	tEnter_to_skip.Unused(false);
	tEnter_to_skip.Pause(false);
	tEnter_to_skip.FontName("Consolas");
	tEnter_to_skip.Width(0);
	tEnter_to_skip.Height(15.75);
	tEnter_to_skip.Weight(400);
	tEnter_to_skip.Color(RGB(192,192,192));
	tEnter_to_skip.Italic(true);
	tEnter_to_skip.StrikeOut(false);
	tEnter_to_skip.Underline(false);

	FunRect rectEnter_to_skip = {0,0,640,480};
	tEnter_to_skip.Frame(rectEnter_to_skip);
	tEnter_to_skip.ShowFrame(false);
	tEnter_to_skip.InWorld(false);
	tEnter_to_skip.DisplayType(Variable::RespectingWords);
	tEnter_to_skip.TopMargin(0);
	tEnter_to_skip.LeftMargin(0);
	tEnter_to_skip.LineSpacing(0);
	tEnter_to_skip.LetterSpacing(0);
	tEnter_to_skip.LeadingSpaces(true);
	tEnter_to_skip.Effect(Variable::MummyEffect);
	tEnter_to_skip.Delay(0,0);
	tEnter_to_skip = "Press 'Enter' to skip";
	tEnter_to_skip.behavior.AddTimer(TIMER_DIS_TEXT,true);
	gn->Add(tEnter_to_skip);


};

void End_IntroFunction(GameNode *gn)
{
	

};

void Exit_IntroFunction(GameNode *gn)
{
};

