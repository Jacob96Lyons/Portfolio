#include "stdafx.h"
#include "Headers.h"
#include "GameFunctions.h"

void DrawCircle(int col, int row, COLORREF color)
{
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"DrawCircle");
#endif

	int centerx = 30 * col + 15;
	int centery = 30 * row + 15;
	pDraw->Circle( centerx, centery, 15, color );
};

void MakeBed2(float x,float y)
{
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"MakeBed2");
#endif

	Sprite*sprite=Sprite::Search("Bed2");
	
	Sprite*newBed=NULL;
	newBed=sprite->CreateSprite();
	newBed->Name("MadeBed");
	newBed->WorldPosition(x*newBed->Width(),y*newBed->Width());
	newBed->Unused(false);
};

void MakeBed3(float x,float y)
{
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"MakeBed3");
#endif

	Sprite*sprite=Sprite::Search("Bed3");
	
	Sprite*newBed=NULL;
	newBed=sprite->CreateSprite();
	newBed->Name("MadeBed");
	newBed->WorldPosition(x*newBed->Width(),y*newBed->Width());
	newBed->Unused(false);
};

void MakeDoor(float x,float y)
{
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"MakeDoor");
#endif

	Sprite*sprite=Sprite::Search("Door");
	
	Sprite*newDoor=NULL;
	newDoor=sprite->CreateSprite();
	newDoor->Name("MadeDoor");
	newDoor->WorldPosition(x*newDoor->Width(),y*newDoor->Width());
	newDoor->Unused(false);
};

void MakeWall(float x,float y)
{
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"MakeWall");
#endif

	Sprite*sprite=Sprite::Search("Wall");
	
	Sprite*newwall=NULL;
	newwall=sprite->CreateSprite();
	newwall->Name("MadeWall");
	newwall->WorldPosition(x*newwall->Width(),y*newwall->Width());
	newwall->Unused(false);
};

void MakeEnemy1(float x,float y)
{
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"MakeEnemy1");
#endif

	Sprite*sprite=Sprite::Search("Enemy1");
	
	Sprite*newEnemy=NULL;
	newEnemy=sprite->CreateSprite();
	newEnemy->Name("MadeEnemy");
	newEnemy->WorldPosition(x*newEnemy->Width(),y*newEnemy->Width());
	newEnemy->Unused(false);
};

void MakeExit(float x,float y)
{
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"MakeExit");
#endif

	Sprite*sprite=Sprite::Search("Exit");
	
	Sprite*newExit=NULL;
	newExit=sprite->CreateSprite();
	newExit->Name("MadeExit");
	newExit->WorldPosition(x*newExit->Width(),y*newExit->Width());
	newExit->Unused(false);
};

void MakeServer(float x,float y)
{
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"MakeServer");
#endif

	Sprite*sprite=Sprite::Search("Server");
	
	Sprite*newServer=NULL;
	newServer=sprite->CreateSprite();
	newServer->Name("MadeServer");
	newServer->WorldPosition(x*newServer->Width(),y*newServer->Width());
	newServer->Unused(false);
};

void MakeBed1(float x,float y)
{
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"MakeBed1");
#endif

	Sprite*sprite=Sprite::Search("Bed1");
	
	Sprite*newBed=NULL;
	newBed=sprite->CreateSprite();
	newBed->Name("MadeBed");
	newBed->WorldPosition(x*newBed->Width(),y*newBed->Width());
	newBed->Unused(false);
};

void MakeKey(float x,float y)
{
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"MakeKey");
#endif

	Sprite*sprite=Sprite::Search("Key");
	
	Sprite*newKey=NULL;
	newKey=sprite->CreateSprite();
	newKey->Name("MadeKey");
	newKey->WorldPosition(x*newKey->Width(),y*newKey->Width());
	newKey->Unused(false);
};

