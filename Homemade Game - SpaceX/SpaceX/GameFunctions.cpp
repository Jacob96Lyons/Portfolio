#include "stdafx.h"
#include "Headers.h"
#include "GameFunctions.h"

int binaryMap[24][20];
bool Following = true;
int difi = 0;
int Lives = 5;
int StaticCount = 0;
void Restart(GameNode* This)
{
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Restart");
	strcpy(_UE.objectType,"GameNode");
	strcpy(_UE.objectName,This->Name());
#endif

	if(pKeyboard->IsPressed(DIK_R))
	myGame->RestartLevel();
};

void VisionTracker(Sprite* This)
{
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"VisionTracker");
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.objectName,This->Name());
#endif

	SpritePTR Space("Spaceman");
	This->WorldPositionX(Space->WorldPositionX()-706);
	This->WorldPositionY(Space->WorldPositionY()-595);
	
	
	
};

void KeyBehaviorFN(Sprite* This)
{
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"KeyBehaviorFN");
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.objectName,This->Name());
#endif

	SpritePTR pc("Spaceman");
	TextPTR score("Score");
	Circle2D c1,c2;
	
	c1.Center.x=pc->WorldPositionX()+pc->HotSpotX(0);
	c1.Center.y=pc->WorldPositionY()+pc->HotSpotY(0);
	//c1.Radius=pc->HotSpotX(0);
	c1.Radius=12;
	
	c2.Center.x=This->WorldPositionX()+This->HotSpotX(0);
	c2.Center.y=This->WorldPositionY()+This->HotSpotY(0);
	c2.Radius=This->HotSpotX(0);
	
	if(CheckTwoCirclesCollision(c1,c2))
	{
		This->DeleteFlag(true);
	
		TextPTR score("Score");
		score->Value++;
	}
	
	
};

void Cheat_codes(Game* This)
{
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Cheat_codes");
	strcpy(_UE.objectType,"Game");
	strcpy(_UE.objectName,This->Name());
#endif

	SpritePTR Vision("Vision");
	TextPTR Score("Score");
	
	if(pKeyboard->IsPressed(DIK_1))
		{myGame->LevelName("Menu");}
	
	else if(pKeyboard->IsPressed(DIK_2))
		{myGame->LevelName("info");}
	
	else if(pKeyboard->IsPressed(DIK_3))
		{myGame->LevelName("Conrol");}
	
	else if(pKeyboard->IsPressed(DIK_4))
		{myGame->LevelName("difi");}
	
	else if(pKeyboard->IsPressed(DIK_5))
		{myGame->LevelName("Alpha");}
	
	else if(pKeyboard->IsPressed(DIK_6))
	 	{Vision->Visible(false);}
	
	else if(pKeyboard->IsPressed(DIK_7))
		{myGame->LevelName("Boss");}
	
	else if(pKeyboard->IsPressed(DIK_9))
		{myGame->LevelName("Win");}
	
	else if(pKeyboard->IsPressed(DIK_0))
		{myGame->LevelName("Lose");}
	
	else if(pKeyboard->IsPressed(DIK_EQUALS))
		{Score->Value=5;}
	
	else if(pKeyboard->IsPressed(DIK_NUMPAD1))
		{myGame->LevelName("Level_1");}
	
	else if(pKeyboard->IsPressed(DIK_NUMPAD2))
		{myGame->LevelName("Level_2");}
	
	else if(pKeyboard->IsPressed(DIK_NUMPAD3))
		{myGame->LevelName("Level_3");}
	
	else if(pKeyboard->IsPressed(DIK_NUMPAD4))
		{myGame->LevelName("Level_4");}
	
	else if(pKeyboard->IsPressed(DIK_NUMPAD5))
		{myGame->LevelName("Level_5");}
	
	else if(pKeyboard->IsPressed(DIK_NUMPAD6))
		{myGame->LevelName("Level_6");}
	
	else if(pKeyboard->IsPressed(DIK_NUMPAD7))
		{myGame->LevelName("Level_7");}
	
	
	else
	 {Vision->Visible(true);
	}
	
};

void Difi(Sprite* This)
{
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Difi");
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.objectName,This->Name());
#endif

	SpritePTR al("ALgore");
	
	
	if(difi==1)
		{This->Animation(VISION_EASY);
		al->Speed(0);
	}
	
	else if(difi==2)
		{This->Animation(VISION_MED);
		al->Speed(1);
	}
	else if(difi==3)
		{This->Animation(VISION_HARD);
		al->Speed(2);
	}
	
	else
		{This->Animation(VISION_EASY);
		al->Speed(1);
	}
	
	
};

void difi_select(FunCursor* This)
{
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"difi select");
	strcpy(_UE.objectType,"FunCursor");
#endif

	SpritePTR AMA("AMA");
	SpritePTR MOD("MOD");
	SpritePTR SUR("SUR");
	SpritePTR Exit("Exit");
	
	if(pFunCursor->CollisionWithSprite("AMA"))
		{AMA->Visible(true);
		if(pFunCursor->IsPressedOnSprite("AMA",DIM_LEFT))
		{difi=1;
		myGame->LevelName("Intro");}}
	
	
	else if(pFunCursor->CollisionWithSprite("MOD"))
		{MOD->Visible(true);
		if(pFunCursor->IsPressedOnSprite("MOD",DIM_LEFT))
		{difi=2;
		myGame->LevelName("Intro");}}
	
	
	else if(pFunCursor->CollisionWithSprite("SUR"))
		{SUR->Visible(true);
		if(pFunCursor->IsPressedOnSprite("SUR",DIM_LEFT))
		{difi=3;
		myGame->LevelName("Intro");}}
	
	
	
	else if(pFunCursor->CollisionWithSprite("Exit"))
		{Exit->Visible(true);
		if(pFunCursor->IsPressedOnSprite("Exit",DIM_LEFT))
		{myGame->LevelName("Menu");}}
	
	
	else
			{AMA->Visible(false);
			MOD->Visible(false);
			SUR->Visible(false);
			Exit->Visible(false);}
};

void Exit(FunCursor* This)
{
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Exit");
	strcpy(_UE.objectType,"FunCursor");
#endif

	SpritePTR Exit("exit");
	
	 if(pFunCursor->CollisionWithSprite("exit"))
		{Exit->Visible(true);
		if(pFunCursor->IsPressedOnSprite("exit",DIM_LEFT))
		{
		myGame->LevelName("Menu");}}
	
	else
			Exit->Visible(false);
};

void Menu_funk(FunCursor* This)
{
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Menu_funk");
	strcpy(_UE.objectType,"FunCursor");
#endif

	SpritePTR NewG("NewG");
	SpritePTR Info("Info");
	SpritePTR Cont("Cont");
	SpritePTR Exit("Exit");
	
	if(pFunCursor->CollisionWithSprite("NewG"))
		{NewG->Visible(true);
			if(pFunCursor->IsPressedOnSprite("NewG",DIM_LEFT))
			{
			myGame->LevelName("difi");}}
	
	
	else if(pFunCursor->CollisionWithSprite("Info"))
		{Info->Visible(true);
			if(pFunCursor->IsPressedOnSprite("Info",DIM_LEFT))
			{
			myGame->LevelName("info");}}
	
	else if(pFunCursor->CollisionWithSprite("Cont"))
		{Cont->Visible(true);
			if(pFunCursor->IsPressedOnSprite("Cont",DIM_LEFT))
			{
			myGame->LevelName("Conrol");}}
	
	else if(pFunCursor->CollisionWithSprite("Exit"))
		{Exit->Visible(true);
		if(pFunCursor->IsPressedOnSprite("Exit",DIM_LEFT))
			{myGame->EndGame();}}
	
	else
	{	NewG->Visible(false);
		Info->Visible(false);
		Cont->Visible(false);
		Exit->Visible(false);}
	
};

void Alex_AI(Sprite* This)
{
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Alex_AI");
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.objectName,This->Name());
#endif

	
	if(This->WorldPositionX()==180)
			This->VectorDirection(1,0);
	
			if(This->WorldPositionX()==270)
				This->VectorDirection(0,-1);
	
				if(This->WorldPositionY()==240)
					This->VectorDirection(0,1);
	
					if(This->WorldPositionY()==390)
						This->VectorDirection(1,0);
	
						if(This->WorldPositionX()==450)
							This->VectorDirection(-1,0);
	
	
};

void Kill_Code(Sprite* This)
{
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Kill_Code");
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.objectName,This->Name());
#endif

	SpritePTR pc("Spaceman");
	SpritePTR s("Static");
	
	Circle2D c1,c2;
	
	c1.Center.x=pc->WorldPositionX()+pc->HotSpotX(0);
	c1.Center.y=pc->WorldPositionY()+pc->HotSpotY(0);
	//c1.Radius=pc->HotSpotX(0);
	c1.Radius=12;
	
	c2.Center.x=This->WorldPositionX()+This->HotSpotX(0);
	c2.Center.y=This->WorldPositionY()+This->HotSpotY(0);
	c2.Radius=This->HotSpotX(0);
	
	
	if(CheckTwoCirclesCollision(c1,c2))
	{
		Lives--;
		pc->WorldPosition(360,270);
		s->Visible(true);
		s->Frame(0);
	}
	
	else if  (s->EndOfAnimation(STATIC_STATIC))
	{
		s->Visible(false);
	}	
};

void Kill_Code_HU(Sprite* This)
{
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Kill_Code_HU");
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.objectName,This->Name());
#endif

	SpritePTR pc("Spaceman");
	
	SpritePTR s("Static");
	
	Circle2D c1,c2;
	
	c1.Center.x=pc->WorldPositionX()+pc->HotSpotX(0);
	c1.Center.y=pc->WorldPositionY()+pc->HotSpotY(0);
	//c1.Radius=pc->HotSpotX(0);
	c1.Radius=12;
	
	c2.Center.x=This->WorldPositionX()+This->HotSpotX(0);
	c2.Center.y=This->WorldPositionY()+This->HotSpotY(0);
	c2.Radius=This->HotSpotX(0);
	
	
	if(CheckTwoCirclesCollision(c1,c2))
	{
		Lives--;
		pc->WorldPosition(360,270);
	
		This->WorldPosition(570,450);
		s->Visible(true);
		s->Frame(0);
	}
	if (s->EndOfAnimation(STATIC_STATIC))
	{
		s->Visible(false);
	}	
};

void Kill_Code_AR(Sprite* This)
{
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Kill_Code_AR");
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.objectName,This->Name());
#endif

	SpritePTR pc("Spaceman");
	
	SpritePTR s("Static");
	
	Circle2D c1,c2;
	
	c1.Center.x=pc->WorldPositionX()+pc->HotSpotX(0);
	c1.Center.y=pc->WorldPositionY()+pc->HotSpotY(0);
	//c1.Radius=pc->HotSpotX(0);
	c1.Radius=12;
	
	c2.Center.x=This->WorldPositionX()+This->HotSpotX(0);
	c2.Center.y=This->WorldPositionY()+This->HotSpotY(0);
	c2.Radius=This->HotSpotX(0);
	
	
	if(CheckTwoCirclesCollision(c1,c2))
	{
		Lives--;
		pc->WorldPosition(360,270);
		This->WorldPosition(300,540);
		s->Visible(true);
		s->Frame(0);
	}
	if (s->EndOfAnimation(STATIC_STATIC))
	{
		s->Visible(false);
	}	
};

void killLives(GameNode* This)
{
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"killLives");
	strcpy(_UE.objectType,"GameNode");
	strcpy(_UE.objectName,This->Name());
#endif

	SpritePTR gb1("GreenBar1");
	SpritePTR gb2("GreenBar2");
	SpritePTR gb3("GreenBar3");
	SpritePTR gb4("GreenBar4");
	SpritePTR gb5("GreenBar5");
	
	
	
	
	
	if(Lives==4)
		gb1->Visible(false);
	
	else if(Lives==3)
		{gb1->Visible(false);
		gb2->Visible(false);}
	
	else if(Lives==2)
		{gb1->Visible(false);
		gb2->Visible(false);
		gb3->Visible(false);}
	
	else if(Lives==1)
		{gb1->Visible(false);
		gb2->Visible(false);
		gb3->Visible(false);
		gb4->Visible(false);}
	
	
	else if(Lives==0)
		{
		gb1->Visible(false);
		gb2->Visible(false);
		gb3->Visible(false);
		gb4->Visible(false);
		gb5->Visible(false);
		myGame->LevelName("Lose");}
	
	else
		{gb1->Visible(true);
		gb2->Visible(true);
		gb3->Visible(true);
		gb4->Visible(true);
		gb5->Visible(true);}
};

void Kill_Code_ALgore(Sprite* This)
{
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Kill_Code_ALgore");
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.objectName,This->Name());
#endif

	SpritePTR pc("Spaceman");
	
	SpritePTR s("Static");
	
	Circle2D c1,c2;
	
	c1.Center.x=pc->WorldPositionX()+pc->HotSpotX(0);
	c1.Center.y=pc->WorldPositionY()+pc->HotSpotY(0);
	//c1.Radius=pc->HotSpotX(0);
	c1.Radius=12;
	
	c2.Center.x=This->WorldPositionX()+This->HotSpotX(0);
	c2.Center.y=This->WorldPositionY()+This->HotSpotY(0);
	c2.Radius=This->HotSpotX(0);
	
	
	if(CheckTwoCirclesCollision(c1,c2))
	{
		Lives--;
		pc->WorldPosition(360,270);
	
		This->WorldPosition(660,30);
		s->Visible(true);
		s->Frame(0);
	}
	if (s->EndOfAnimation(STATIC_STATIC))
	{
		s->Visible(false);
	}	
};

void Story_start(GameNode* This)
{
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Story_start");
	strcpy(_UE.objectType,"GameNode");
	strcpy(_UE.objectName,This->Name());
#endif

	myGame->LevelName("Level_1");
	
};

void story_start2(GameNode* This)
{
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"story_start2");
	strcpy(_UE.objectType,"GameNode");
	strcpy(_UE.objectName,This->Name());
#endif

	if (pKeyboard->IsPressed(DIK_RETURN))
	myGame->LevelName("Level_1");
};

void dis_text(Text* This)
{
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"dis_text");
	strcpy(_UE.objectType,"Text");
	strcpy(_UE.objectName,This->Name());
#endif

	This->Visible(false);
};

void ServerToHall1(Sprite* This)
{
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"ServerToHall1");
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.objectName,This->Name());
#endif

	TextPTR score("Score");
	
	if((This->WorldPositionX()==300)&&(This->WorldPositionY()==540)&&(score->Value==5))
		{myGame->LevelName("Level_2");}
};

void Hall1ToTestLab1(Sprite* This)
{
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Hall1ToTestLab1");
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.objectName,This->Name());
#endif

	TextPTR score("Score");
	
	
	if((This->WorldPositionX()==660)&&(This->WorldPositionY()==480)&&(score->Value==5))
	{myGame->LevelName("Level_3");}
};

void TestLab1toTestLab2(Sprite* This)
{
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"TestLab1toTestLab2");
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.objectName,This->Name());
#endif

	TextPTR score("Score");
	
	
	if((This->WorldPositionX()==660)&&(This->WorldPositionY()==480)&&(score->Value==5))
	{myGame->LevelName("Level_4");}
};

void TestLab2toHall2(Sprite* This)
{
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"TestLab2toHall2");
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.objectName,This->Name());
#endif

	TextPTR score("Score");
	
	
	if((This->WorldPositionX()==660)&&(This->WorldPositionY()==390)&&(score->Value==5))
	{myGame->LevelName("Level_5");}
};

void Hall2toLQ(Sprite* This)
{
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Hall2toLQ");
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.objectName,This->Name());
#endif

	TextPTR score("Score");
	
	
	if((This->WorldPositionX()==630)&&(This->WorldPositionY()==30)&&(score->Value==5))
	{myGame->LevelName("Level_6");}
};

void LQtoHall3(Sprite* This)
{
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"LQtoHall3");
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.objectName,This->Name());
#endif

	TextPTR score("Score");
	
	
	if((This->WorldPositionX()==30)&&(This->WorldPositionY()==270)&&(score->Value==5))
	{myGame->LevelName("Level_7");}
};

void Visablity(Sprite* This)
{
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Visablity");
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.objectName,This->Name());
#endif

	if( pKeyboard->IsPressed(DIK_SPACE) )
	{
	for( int col = 0; col < 26; ++col )
	{
	for( int row = 0; row < 20; ++row )
	{
	if( binaryMap[col][row] == 1 )
	DrawCircle(col,row,RGB(0,255,0));
	else
	DrawCircle(col,row,RGB(255,0,0));
	}
	}
	}
};

void Kill_Code_L2(Sprite* This)
{
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Kill_Code_L2");
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.objectName,This->Name());
#endif

	SpritePTR pc("Spaceman");
	SpritePTR s("Static");
	
	Circle2D c1,c2;
	
	c1.Center.x=pc->WorldPositionX()+pc->HotSpotX(0);
	c1.Center.y=pc->WorldPositionY()+pc->HotSpotY(0);
	//c1.Radius=pc->HotSpotX(0);
	c1.Radius=12;
	
	c2.Center.x=This->WorldPositionX()+This->HotSpotX(0);
	c2.Center.y=This->WorldPositionY()+This->HotSpotY(0);
	c2.Radius=This->HotSpotX(0);
	
	
	if(CheckTwoCirclesCollision(c1,c2))
	{
		Lives--;
		pc->WorldPosition(300,30);
		s->Visible(true);
		s->Frame(0);
	}
	
	else if  (s->EndOfAnimation(STATIC_STATIC))
	{
		s->Visible(false);
	}	
};

void Kill_Code_L3(Sprite* This)
{
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Kill_Code_L3");
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.objectName,This->Name());
#endif

	SpritePTR pc("Spaceman");
	SpritePTR s("Static");
	SpritePTR Ch("Chad");
	SpritePTR An("Andrew");
	
	Circle2D c1,c2;
	
	c1.Center.x=pc->WorldPositionX()+pc->HotSpotX(0);
	c1.Center.y=pc->WorldPositionY()+pc->HotSpotY(0);
	//c1.Radius=pc->HotSpotX(0);
	c1.Radius=12;
	
	c2.Center.x=This->WorldPositionX()+This->HotSpotX(0);
	c2.Center.y=This->WorldPositionY()+This->HotSpotY(0);
	c2.Radius=This->HotSpotX(0);
	
	
	if(CheckTwoCirclesCollision(c1,c2))
	{
		Lives--;
		pc->WorldPosition(30,90);
		Ch->WorldPosition(660,30);
		An->WorldPosition(30,360);
		s->Visible(true);
		s->Frame(0);
	}
	
	else if  (s->EndOfAnimation(STATIC_STATIC))
	{
		s->Visible(false);
	}	
};

void Kill_Code_L4(Sprite* This)
{
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Kill_Code_L4");
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.objectName,This->Name());
#endif

	SpritePTR pc("Spaceman");
	SpritePTR s("Static");
	SpritePTR Ch("Chad");
	SpritePTR Ax("Alex");
	
	Circle2D c1,c2;
	
	c1.Center.x=pc->WorldPositionX()+pc->HotSpotX(0);
	c1.Center.y=pc->WorldPositionY()+pc->HotSpotY(0);
	//c1.Radius=pc->HotSpotX(0);
	c1.Radius=12;
	
	c2.Center.x=This->WorldPositionX()+This->HotSpotX(0);
	c2.Center.y=This->WorldPositionY()+This->HotSpotY(0);
	c2.Radius=This->HotSpotX(0);
	
	
	if(CheckTwoCirclesCollision(c1,c2))
	{
		Lives--;
		pc->WorldPosition(30,480);
		Ch->WorldPosition(420,60);
		Ax->WorldPosition(210,210);
		s->Visible(true);
		s->Frame(0);
	}
	
	else if  (s->EndOfAnimation(STATIC_STATIC))
	{
		s->Visible(false);
	}	
};

void Kill_Code_L5(Sprite* This)
{
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Kill_Code_L5");
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.objectName,This->Name());
#endif

	SpritePTR pc("Spaceman");
	SpritePTR s("Static");
	SpritePTR JO("Joe");
	
	
	Circle2D c1,c2;
	
	c1.Center.x=pc->WorldPositionX()+pc->HotSpotX(0);
	c1.Center.y=pc->WorldPositionY()+pc->HotSpotY(0);
	//c1.Radius=pc->HotSpotX(0);
	c1.Radius=12;
	
	c2.Center.x=This->WorldPositionX()+This->HotSpotX(0);
	c2.Center.y=This->WorldPositionY()+This->HotSpotY(0);
	c2.Radius=This->HotSpotX(0);
	
	
	if(CheckTwoCirclesCollision(c1,c2))
	{
		Lives--;
		pc->WorldPosition(30,540);
		JO->WorldPosition(60,120);
		s->Visible(true);
		s->Frame(0);
	}
	
	else if  (s->EndOfAnimation(STATIC_STATIC))
	{
		s->Visible(false);
	}	
};

