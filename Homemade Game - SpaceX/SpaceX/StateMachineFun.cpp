#include "stdafx.h"
#include "Headers.h"
#include "GameFunctions.h"

void Movement_Idle_Action(int bInitAction, void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Action");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Movement");
	strcpy(_UE.stateName,"Idle");
#endif

	if (bInitAction == 1){
		This->VectorDirection(0,0);
		
	};

	if (This->WorldPositionY()<29)
			{This->WorldPositionY(30);
			 This->VectorDirection(0,0);}
};

void Movement_Down_Action(int bInitAction, void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Action");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Movement");
	strcpy(_UE.stateName,"Down");
#endif

	if (bInitAction == 1){
		This->VectorDirection(0,1);
		
	};

	
	int test=(int)(This->WorldPositionY())%30;
	
	int i=This->WorldPositionX()/30;
	int j=This->WorldPositionY()/30;
	
	if(test==0)
		if(j==20||binaryMap[i][j+1]==0)
			This->VectorDirection(0,0);
};

void Movement_Left_Action(int bInitAction, void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Action");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Movement");
	strcpy(_UE.stateName,"Left");
#endif

	if (bInitAction == 1){
		This->VectorDirection(-1,0);
		
	};

	int test=(int)(This->WorldPositionX())%30;
	
	int i=This->WorldPositionX()/30;
	int j=This->WorldPositionY()/30;
	
	if(test==0)
		if(i==0||binaryMap[i-1][j]==0)
			This->VectorDirection(0,0);
};

void Movement_Right_Action(int bInitAction, void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Action");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Movement");
	strcpy(_UE.stateName,"Right");
#endif

	if (bInitAction == 1){
		This->VectorDirection(1,0);
		
	};

	int test=(int)(This->WorldPositionX())%30;
	
	int i=This->WorldPositionX()/30;
	int j=This->WorldPositionY()/30;
	
	if(test==0)
		if(i==26||binaryMap[i+1][j]==0)
			This->VectorDirection(0,0);
};

void Movement_UP_Action(int bInitAction, void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Action");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Movement");
	strcpy(_UE.stateName,"UP");
#endif

	if (bInitAction == 1){
		This->VectorDirection(0,-1);
		
	};

	int test=(int)(This->WorldPositionY())%30;
	
	int i=(This->WorldPositionX()+This->HotSpotX(2))/30;
	int j=(This->WorldPositionY()+This->HotSpotY(2))/30;
	
	if(test==0)
		if(j==0||binaryMap[i][j-1]==0)
			This->VectorDirection(0,0);
};

bool Movement_S2_To_S1_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Movement");
	strcpy(_UE.edgeName,"Movement_S2_To_S1_Condition");
#endif

	if(pKeyboard->IsNotPressed(DIK_DOWN))
	{
		int test1=(int)This->WorldPositionX()%30;
		int test2=(int)This->WorldPositionY()%30;
	
	int i=This->WorldPositionX()/30;
	int j=This->WorldPositionY()/30;
	
	
	if((!test1&&!test2&&j!=0)||(!test1&&!test2&&j!=0&&binaryMap[i][j+1]==0))
		return true;
	else
		return false;
	}
	else
		return false;
};

bool Movement_S1_To_S2_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Movement");
	strcpy(_UE.edgeName,"Movement_S1_To_S2_Condition");
#endif

	if(pKeyboard->IsPressed(DIK_DOWN))
	{
		int test=(int)(This->WorldPositionY())%30;
	
	int i=This->WorldPositionX()/30;
	int j=This->WorldPositionY()/30;
	
	if(!test&&j!=20&&binaryMap[i][j+1])
		return true;
	else
		return false;
	}
	else
		return false;
};

bool Movement_S3_To_S1_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Movement");
	strcpy(_UE.edgeName,"Movement_S3_To_S1_Condition");
#endif

	if(pKeyboard->IsNotPressed(DIK_LEFT))
	{
		int test1=(int)This->WorldPositionX()%30;
		int test2=(int)This->WorldPositionY()%30;
	
	int i=This->WorldPositionX()/30;
	int j=This->WorldPositionY()/30;
	if((!test1&&!test2&&i!=0)||(!test1&&!test2&&i!=0&&binaryMap[i-1][j]==0))
		return true;
	else
		return false;
	}
	else
		return false;
};

bool Movement_S1_To_S3_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Movement");
	strcpy(_UE.edgeName,"Movement_S1_To_S3_Condition");
#endif

	if(pKeyboard->IsPressed(DIK_LEFT))
	{
		int test=(int)This->WorldPositionX()%30;
	
	int i=This->WorldPositionX()/30;
	int j=This->WorldPositionY()/30;
	
	if(!test&&i!=0&&binaryMap[i-1][j])
		return true;
	else
		return false;
	}
	else 
	return false;
};

bool Movement_S4_To_S1_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Movement");
	strcpy(_UE.edgeName,"Movement_S4_To_S1_Condition");
#endif

	if(pKeyboard->IsNotPressed(DIK_RIGHT))
	{
		int test1=(int)This->WorldPositionX()%30;
		int test2=(int)This->WorldPositionY()%30;
	
	int i=This->WorldPositionX()/30;
	int j=This->WorldPositionY()/30;
	
	if((!test1&&!test2&&i!=0)||(!test1&&!test2&&i!=0&&binaryMap[i+1][j]==0))
		return true;
	else
		return false;
	}
	else
		return false;
};

bool Movement_S5_To_S1_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Movement");
	strcpy(_UE.edgeName,"Movement_S5_To_S1_Condition");
#endif

	if(pKeyboard->IsNotPressed(DIK_UP))
	{	
		int test1=(int)This->WorldPositionX()%30;
		int test2=(int)This->WorldPositionY()%30;
	
	int i=This->WorldPositionX()/30;
	int j=This->WorldPositionY()/30;
	
	if((!test1&&!test2&&j!=0)||(!test1&&!test2&&j!=0&&binaryMap[i][j-1]==0))
		return true;
	else
		return false;
	}
	else
		return false;
};

bool Movement_S1_To_S4_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Movement");
	strcpy(_UE.edgeName,"Movement_S1_To_S4_Condition");
#endif

	if(pKeyboard->IsPressed(DIK_RIGHT))
	{
		int test=(int)This->WorldPositionX()%30;
	
	int i=This->WorldPositionX()/30;
	int j=This->WorldPositionY()/30;
	
	if(!test&&i!=26&&binaryMap[i+1][j])
		return true;
	else
		return false;
	}
	else 
	return false;
};

bool Movement_S1_To_S5_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Movement");
	strcpy(_UE.edgeName,"Movement_S1_To_S5_Condition");
#endif

	if(pKeyboard->IsPressed(DIK_UP))
	{
		int test=(int)(This->WorldPositionY())%30;
	
	int i=This->WorldPositionX()/30;
	int j=This->WorldPositionY()/30;
	
	if(!test&&j!=0&&binaryMap[i][j-1])
		return true;
	else
		return false;
	}
	else
		return false;
	
};

void Carly_AL_right_Action(int bInitAction, void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Action");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Carly_AL");
	strcpy(_UE.stateName,"right");
#endif

	if (bInitAction == 1){
		This->VectorDirection(1,0);
		
		
		
	};

	
};

void Carly_AL_down_Action(int bInitAction, void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Action");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Carly_AL");
	strcpy(_UE.stateName,"down");
#endif

	if (bInitAction == 1){
		This->VectorDirection(0,1);
		
	};

	
};

void Carly_AL_left_Action(int bInitAction, void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Action");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Carly_AL");
	strcpy(_UE.stateName,"left");
#endif

	if (bInitAction == 1){
		This->VectorDirection(-1,0);
		
	};

	
};

void Carly_AL_up_Action(int bInitAction, void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Action");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Carly_AL");
	strcpy(_UE.stateName,"up");
#endif

	if (bInitAction == 1){
		This->VectorDirection(0,-1);
		
	};

	
};

bool Carly_AL_S1_To_S2_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Carly_AL");
	strcpy(_UE.edgeName,"Carly_AL_S1_To_S2_Condition");
#endif

	return (This->WorldPositionX()==390);
};

bool Carly_AL_S4_To_S1_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Carly_AL");
	strcpy(_UE.edgeName,"Carly_AL_S4_To_S1_Condition");
#endif

	return (This->WorldPositionY()==30);
};

bool Carly_AL_S2_To_S3_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Carly_AL");
	strcpy(_UE.edgeName,"Carly_AL_S2_To_S3_Condition");
#endif

	return (This->WorldPositionY()==120);
};

bool Carly_AL_S3_To_S4_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Carly_AL");
	strcpy(_UE.edgeName,"Carly_AL_S3_To_S4_Condition");
#endif

	return (This->WorldPositionX()==30);
};

void zae_AL_Down_Action(int bInitAction, void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Action");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"zae_AL");
	strcpy(_UE.stateName,"Down");
#endif

	if (bInitAction == 1){
		This->VectorDirection(0,1);
		
	};

	
};

void zae_AL_UP_Action(int bInitAction, void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Action");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"zae_AL");
	strcpy(_UE.stateName,"UP");
#endif

	if (bInitAction == 1){
		This->VectorDirection(0,-1);
		
	};

	
};

bool zae_AL_S2_To_S1_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"zae_AL");
	strcpy(_UE.edgeName,"zae_AL_S2_To_S1_Condition");
#endif

	return (This->WorldPositionY()==300);
};

bool zae_AL_S1_To_S2_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"zae_AL");
	strcpy(_UE.edgeName,"zae_AL_S1_To_S2_Condition");
#endif

	return (This->WorldPositionY()==540);
};

void Jeff_AL_Down_Action(int bInitAction, void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Action");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Jeff_AL");
	strcpy(_UE.stateName,"Down");
#endif

	if (bInitAction == 1){
		This->VectorDirection(0,1);
		
	};

	
};

void Jeff_AL_UP_Action(int bInitAction, void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Action");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Jeff_AL");
	strcpy(_UE.stateName,"UP");
#endif

	if (bInitAction == 1){
		This->VectorDirection(0,-1);
		
	};

	
};

bool Jeff_AL_S1_To_S2_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Jeff_AL");
	strcpy(_UE.edgeName,"Jeff_AL_S1_To_S2_Condition");
#endif

	return (This->WorldPositionY()==540);
};

bool Jeff_AL_S2_To_S1_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Jeff_AL");
	strcpy(_UE.edgeName,"Jeff_AL_S2_To_S1_Condition");
#endif

	return (This->WorldPositionY()==30);
};

void Jif_AL_Right_Action(int bInitAction, void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Action");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Jif_AL");
	strcpy(_UE.stateName,"Right");
#endif

	if (bInitAction == 1){
		This->VectorDirection(1,0);
		
	};

	
};

void Jif_AL_Left_Action(int bInitAction, void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Action");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Jif_AL");
	strcpy(_UE.stateName,"Left");
#endif

	if (bInitAction == 1){
		This->VectorDirection(-1,0);
		
	};

	
};

bool Jif_AL_S1_To_S2_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Jif_AL");
	strcpy(_UE.edgeName,"Jif_AL_S1_To_S2_Condition");
#endif

	return (This->WorldPositionX()==660);
};

bool Jif_AL_S2_To_S1_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Jif_AL");
	strcpy(_UE.edgeName,"Jif_AL_S2_To_S1_Condition");
#endif

	return (This->WorldPositionX()==510);
};

void Access_Tracker_Idle_Action(int bInitAction, void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Action");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Access_Tracker");
	strcpy(_UE.stateName,"Idle");
#endif

	if (bInitAction == 1){
		This->VectorDirection(0,0);
		
	};

	if (This->WorldPositionY()<29)
			{This->WorldPositionY(30);
			 This->VectorDirection(0,0);}
};

void Access_Tracker_Down_Action(int bInitAction, void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Action");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Access_Tracker");
	strcpy(_UE.stateName,"Down");
#endif

	if (bInitAction == 1){
		This->VectorDirection(0,1);
		
	};

	
	int test=(int)(This->WorldPositionY())%30;
	
	int i=This->WorldPositionX()/30;
	int j=This->WorldPositionY()/30;
	
	if(test==0)
		if(j==20||binaryMap[i][j+1]==0)
			This->VectorDirection(0,0);
};

void Access_Tracker_Left_Action(int bInitAction, void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Action");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Access_Tracker");
	strcpy(_UE.stateName,"Left");
#endif

	if (bInitAction == 1){
		This->VectorDirection(-1,0);
		
	};

	int test=(int)(This->WorldPositionX())%30;
	
	int i=This->WorldPositionX()/30;
	int j=This->WorldPositionY()/30;
	
	if(test==0)
		if(i==0||binaryMap[i-1][j]==0)
			This->VectorDirection(0,0);
};

void Access_Tracker_Right_Action(int bInitAction, void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Action");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Access_Tracker");
	strcpy(_UE.stateName,"Right");
#endif

	if (bInitAction == 1){
		This->VectorDirection(1,0);
		
	};

	int test=(int)(This->WorldPositionX())%30;
	
	int i=This->WorldPositionX()/30;
	int j=This->WorldPositionY()/30;
	
	if(test==0)
		if(i==26||binaryMap[i+1][j]==0)
			This->VectorDirection(0,0);
};

void Access_Tracker_UP_Action(int bInitAction, void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Action");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Access_Tracker");
	strcpy(_UE.stateName,"UP");
#endif

	if (bInitAction == 1){
		This->VectorDirection(0,-1);
		
	};

	int test=(int)(This->WorldPositionY())%30;
	
	int i=(This->WorldPositionX()+This->HotSpotX(2))/30;
	int j=(This->WorldPositionY()+This->HotSpotY(2))/30;
	
	if(test==0)
		if(j==0||binaryMap[i][j-1]==0)
			This->VectorDirection(0,0);
};

bool Access_Tracker_S1_To_S2_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Access_Tracker");
	strcpy(_UE.edgeName,"Access_Tracker_S1_To_S2_Condition");
#endif

	SpritePTR Space ("Spaceman");
	if(Space->WorldPositionX()==This->WorldPositionX()&&This->WorldPositionY()<Space->WorldPositionY())
	{
		int test=(int)(This->WorldPositionY())%30;
	
	int i=This->WorldPositionX()/30;
	int j=This->WorldPositionY()/30;
	
	if(!test&&j!=20&&binaryMap[i][j+1])
		return true;
	else
		return false;
	}
	else
		return false;
};

bool Access_Tracker_S2_To_S1_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Access_Tracker");
	strcpy(_UE.edgeName,"Access_Tracker_S2_To_S1_Condition");
#endif

	return! This->DirectionY();
};

bool Access_Tracker_S4_To_S1_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Access_Tracker");
	strcpy(_UE.edgeName,"Access_Tracker_S4_To_S1_Condition");
#endif

	return! This->DirectionX();
};

bool Access_Tracker_S1_To_S3_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Access_Tracker");
	strcpy(_UE.edgeName,"Access_Tracker_S1_To_S3_Condition");
#endif

	SpritePTR Space ("Spaceman");
	if(Space->WorldPositionY()==This->WorldPositionY()&&This->WorldPositionX()>Space->WorldPositionX())
	{
		int test=(int)This->WorldPositionX()%30;
	
	int i=This->WorldPositionX()/30;
	int j=This->WorldPositionY()/30;
	
	if(!test&&i!=0&&binaryMap[i-1][j])
		return true;
	else
		return false;
	}
	else 
	return false;
};

bool Access_Tracker_S3_To_S1_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Access_Tracker");
	strcpy(_UE.edgeName,"Access_Tracker_S3_To_S1_Condition");
#endif

	return! This->DirectionX();
};

bool Access_Tracker_S1_To_S4_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Access_Tracker");
	strcpy(_UE.edgeName,"Access_Tracker_S1_To_S4_Condition");
#endif

	SpritePTR Space ("Spaceman");
	if(Space->WorldPositionY()==This->WorldPositionY()&&This->WorldPositionX()<Space->WorldPositionX())
	{
		int test=(int)This->WorldPositionX()%30;
	
	int i=This->WorldPositionX()/30;
	int j=This->WorldPositionY()/30;
	
	if(!test&&i!=26&&binaryMap[i+1][j])
		return true;
	else
		return false;
	}
	else 
	return false;
};

bool Access_Tracker_S5_To_S1_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Access_Tracker");
	strcpy(_UE.edgeName,"Access_Tracker_S5_To_S1_Condition");
#endif

	return! This->DirectionY();
};

bool Access_Tracker_S3_To_S2_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Access_Tracker");
	strcpy(_UE.edgeName,"Access_Tracker_S3_To_S2_Condition");
#endif

	SpritePTR Space ("Spaceman");
	if(Space->WorldPositionX()==This->WorldPositionX()&&This->WorldPositionY()<Space->WorldPositionY())
	{
		int test1=(int)This->WorldPositionX()%30;
		int test2=(int)This->WorldPositionY()%30;
	
	int i=This->WorldPositionX()/30;
	int j=This->WorldPositionY()/30;
	
	if(!test1&&!test2&&j!=20&&binaryMap[i][j+1])
		return true;
	else
		return false;
	}
	else
		return false;
};

bool Access_Tracker_S2_To_S3_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Access_Tracker");
	strcpy(_UE.edgeName,"Access_Tracker_S2_To_S3_Condition");
#endif

	SpritePTR Space ("Spaceman");
	if(Space->WorldPositionY()==This->WorldPositionY()&&This->WorldPositionX()>Space->WorldPositionX())
	{
		int test1=(int)This->WorldPositionX()%30;
		int test2=(int)This->WorldPositionY()%30;
	
	int i=This->WorldPositionX()/30;
	int j=This->WorldPositionY()/30;
	
	if(!test1&&!test2&&i!=0&&binaryMap[j][i+1])
		return true;
	else
		return false;
	}
	else
		return false;
};

bool Access_Tracker_S4_To_S2_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Access_Tracker");
	strcpy(_UE.edgeName,"Access_Tracker_S4_To_S2_Condition");
#endif

	SpritePTR Space ("Spaceman");
	if(Space->WorldPositionX()==This->WorldPositionX()&&This->WorldPositionY()<Space->WorldPositionY())
	{
		int test1=(int)This->WorldPositionX()%30;
		int test2=(int)This->WorldPositionY()%30;
	
	int i=This->WorldPositionX()/30;
	int j=This->WorldPositionY()/30;
	
	if(!test1&&!test2&&j!=20&&binaryMap[i][j+1])
		return true;
	else
		return false;
	}
	else
		return false;
};

bool Access_Tracker_S1_To_S5_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Access_Tracker");
	strcpy(_UE.edgeName,"Access_Tracker_S1_To_S5_Condition");
#endif

	SpritePTR Space ("Spaceman");
	if(Space->WorldPositionX()==This->WorldPositionX()&&This->WorldPositionY()>Space->WorldPositionY())
	{
		int test=(int)(This->WorldPositionY())%30;
	
	int i=This->WorldPositionX()/30;
	int j=This->WorldPositionY()/30;
	
	if(!test&&j!=0&&binaryMap[i][j-1])
		return true;
	else
		return false;
	}
	else
		return false;
	
};

bool Access_Tracker_S2_To_S4_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Access_Tracker");
	strcpy(_UE.edgeName,"Access_Tracker_S2_To_S4_Condition");
#endif

	SpritePTR Space ("Spaceman");
	if(Space->WorldPositionY()==This->WorldPositionY()&&This->WorldPositionX()<Space->WorldPositionX())
	{
		int test1=(int)This->WorldPositionX()%30;
		int test2=(int)This->WorldPositionY()%30;
	
	int i=This->WorldPositionX()/30;
	int j=This->WorldPositionY()/30;
	
	if(!test1&&!test2&&i!=26&&binaryMap[i+1][j])
		return true;
	else
		return false;
	}
	else
		return false;
};

bool Access_Tracker_S5_To_S3_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Access_Tracker");
	strcpy(_UE.edgeName,"Access_Tracker_S5_To_S3_Condition");
#endif

	SpritePTR Space ("Spaceman");
	if(Space->WorldPositionY()==This->WorldPositionY()&&This->WorldPositionX()>Space->WorldPositionX())
	{
		int test1=(int)This->WorldPositionX()%30;
		int test2=(int)This->WorldPositionY()%30;
	
	int i=This->WorldPositionX()/30;
	int j=This->WorldPositionY()/30;
	
	if(!test1&&!test2&&i!=0&&binaryMap[j][i+1])
		return true;
	else
		return false;
	}
	else
		return false;
};

bool Access_Tracker_S3_To_S5_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Access_Tracker");
	strcpy(_UE.edgeName,"Access_Tracker_S3_To_S5_Condition");
#endif

	SpritePTR Space ("Spaceman");
	if(Space->WorldPositionX()==This->WorldPositionX()&&This->WorldPositionY()>Space->WorldPositionY())
	{
		int test1=(int)This->WorldPositionX()%30;
		int test2=(int)This->WorldPositionY()%30;
	
	int i=This->WorldPositionX()/30;
	int j=This->WorldPositionY()/30;
	
	if(!test1&&!test2&&j!=0&&binaryMap[i][j-1])
		return true;
	else
		return false;
	}
	else
		return false;
};

bool Access_Tracker_S4_To_S5_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Access_Tracker");
	strcpy(_UE.edgeName,"Access_Tracker_S4_To_S5_Condition");
#endif

	SpritePTR Space ("Spaceman");
	if(Space->WorldPositionX()==This->WorldPositionX()&&This->WorldPositionY()>Space->WorldPositionY())
	{
		int test1=(int)This->WorldPositionX()%30;
		int test2=(int)This->WorldPositionY()%30;
	
	int i=This->WorldPositionX()/30;
	int j=This->WorldPositionY()/30;
	
	if(!test1&&!test2&&j!=0&&binaryMap[i][j-1])
		return true;
	else
		return false;
	}
	else
		return false;
};

bool Access_Tracker_S5_To_S4_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Access_Tracker");
	strcpy(_UE.edgeName,"Access_Tracker_S5_To_S4_Condition");
#endif

	SpritePTR Space ("Spaceman");
	if(Space->WorldPositionY()==This->WorldPositionY()&&This->WorldPositionX()<Space->WorldPositionX())
	{
		int test1=(int)This->WorldPositionX()%30;
		int test2=(int)This->WorldPositionY()%30;
	
	int i=This->WorldPositionX()/30;
	int j=This->WorldPositionY()/30;
	
	if(!test1&&!test2&&i!=26&&binaryMap[i+1][j])
		return true;
	else
		return false;
	}
	else
		return false;
};

void Spaceman_Animation_S_Action(int bInitAction, void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Action");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Spaceman_Animation");
	strcpy(_UE.stateName,"S");
#endif

	if (bInitAction == 1){
		This->Animation(SPACEMAN_IDLEF);
		
		
	};

	
};

void Spaceman_Animation_Back_Action(int bInitAction, void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Action");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Spaceman_Animation");
	strcpy(_UE.stateName,"Back");
#endif

	if (bInitAction == 1){
		This->Animation(SPACEMAN_BACK);
	};

	
};

void Spaceman_Animation_Idle_BACK_Action(int bInitAction, void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Action");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Spaceman_Animation");
	strcpy(_UE.stateName,"Idle_BACK");
#endif

	if (bInitAction == 1){
		This->Animation(SPACEMAN_IDLEB);
	};

	
};

void Spaceman_Animation_Right_Action(int bInitAction, void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Action");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Spaceman_Animation");
	strcpy(_UE.stateName,"Right");
#endif

	if (bInitAction == 1){
		This->Animation(SPACEMAN_RIGHT);
	};

	
};

void Spaceman_Animation_Idle_RIG_Action(int bInitAction, void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Action");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Spaceman_Animation");
	strcpy(_UE.stateName,"Idle_RIG");
#endif

	if (bInitAction == 1){
		This->Animation(SPACEMAN_IDLER);
	};

	
};

void Spaceman_Animation_Forward_Action(int bInitAction, void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Action");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Spaceman_Animation");
	strcpy(_UE.stateName,"Forward");
#endif

	if (bInitAction == 1){
		This->Animation(SPACEMAN_FORWARD);
	};

	
};

void Spaceman_Animation_Idle_FOR_Action(int bInitAction, void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Action");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Spaceman_Animation");
	strcpy(_UE.stateName,"Idle_FOR");
#endif

	if (bInitAction == 1){
		This->Animation(SPACEMAN_IDLEF);
	};

	
};

void Spaceman_Animation_Left_Action(int bInitAction, void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Action");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Spaceman_Animation");
	strcpy(_UE.stateName,"Left");
#endif

	if (bInitAction == 1){
		This->Animation(SPACEMAN_LEFT);
	};

	
};

void Spaceman_Animation_Idle_Left_Action(int bInitAction, void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Action");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Spaceman_Animation");
	strcpy(_UE.stateName,"Idle_Left");
#endif

	if (bInitAction == 1){
		This->Animation(SPACEMAN_IDLEL);
	};

	
};

bool Spaceman_Animation_S1_To_S2_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Spaceman_Animation");
	strcpy(_UE.edgeName,"Spaceman_Animation_S1_To_S2_Condition");
#endif

	return(This->DirectionY()<0);
};

bool Spaceman_Animation_S3_To_S2_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Spaceman_Animation");
	strcpy(_UE.edgeName,"Spaceman_Animation_S3_To_S2_Condition");
#endif

	return(This->DirectionY()<0);
};

bool Spaceman_Animation_S2_To_S3_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Spaceman_Animation");
	strcpy(_UE.edgeName,"Spaceman_Animation_S2_To_S3_Condition");
#endif

	return(This->DirectionY()==0);
};

bool Spaceman_Animation_S1_To_S4_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Spaceman_Animation");
	strcpy(_UE.edgeName,"Spaceman_Animation_S1_To_S4_Condition");
#endif

	return(This->DirectionX()>0);
};

bool Spaceman_Animation_S5_To_S2_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Spaceman_Animation");
	strcpy(_UE.edgeName,"Spaceman_Animation_S5_To_S2_Condition");
#endif

	return(This->DirectionY()<0);
};

bool Spaceman_Animation_S7_To_S4b_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Spaceman_Animation");
	strcpy(_UE.edgeName,"Spaceman_Animation_S7_To_S4b_Condition");
#endif

	return(This->DirectionX()>0);
};

bool Spaceman_Animation_S3_To_S4_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Spaceman_Animation");
	strcpy(_UE.edgeName,"Spaceman_Animation_S3_To_S4_Condition");
#endif

	return(This->DirectionX()>0);
};

bool Spaceman_Animation_S7_To_S2_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Spaceman_Animation");
	strcpy(_UE.edgeName,"Spaceman_Animation_S7_To_S2_Condition");
#endif

	return(This->DirectionY()<0);
};

bool Spaceman_Animation_S1_To_S6_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Spaceman_Animation");
	strcpy(_UE.edgeName,"Spaceman_Animation_S1_To_S6_Condition");
#endif

	return(This->DirectionY()>0);
};

bool Spaceman_Animation_S5_To_S4_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Spaceman_Animation");
	strcpy(_UE.edgeName,"Spaceman_Animation_S5_To_S4_Condition");
#endif

	return(This->DirectionX()>0);
};

bool Spaceman_Animation_S4_To_S5_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Spaceman_Animation");
	strcpy(_UE.edgeName,"Spaceman_Animation_S4_To_S5_Condition");
#endif

	return(This->DirectionX()==0);
};

bool Spaceman_Animation_S3_To_S6_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Spaceman_Animation");
	strcpy(_UE.edgeName,"Spaceman_Animation_S3_To_S6_Condition");
#endif

	return(This->DirectionY()>0);
};

bool Spaceman_Animation_S9_To_S2_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Spaceman_Animation");
	strcpy(_UE.edgeName,"Spaceman_Animation_S9_To_S2_Condition");
#endif

	return(This->DirectionY()<0);
};

bool Spaceman_Animation_S1_To_S8_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Spaceman_Animation");
	strcpy(_UE.edgeName,"Spaceman_Animation_S1_To_S8_Condition");
#endif

	return(This->DirectionX()<0);
};

bool Spaceman_Animation_S5_To_S6_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Spaceman_Animation");
	strcpy(_UE.edgeName,"Spaceman_Animation_S5_To_S6_Condition");
#endif

	return(This->DirectionY()>0);
};

bool Spaceman_Animation_S3_To_S8_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Spaceman_Animation");
	strcpy(_UE.edgeName,"Spaceman_Animation_S3_To_S8_Condition");
#endif

	return(This->DirectionX()<0);
};

bool Spaceman_Animation_S7_To_S6_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Spaceman_Animation");
	strcpy(_UE.edgeName,"Spaceman_Animation_S7_To_S6_Condition");
#endif

	return(This->DirectionY()>0);
};

bool Spaceman_Animation_S9_To_S4_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Spaceman_Animation");
	strcpy(_UE.edgeName,"Spaceman_Animation_S9_To_S4_Condition");
#endif

	return(This->DirectionX()>0);
};

bool Spaceman_Animation_S5_To_S8_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Spaceman_Animation");
	strcpy(_UE.edgeName,"Spaceman_Animation_S5_To_S8_Condition");
#endif

	return(This->DirectionX()<0);
};

bool Spaceman_Animation_S6_To_S7_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Spaceman_Animation");
	strcpy(_UE.edgeName,"Spaceman_Animation_S6_To_S7_Condition");
#endif

	return(This->DirectionY()==0);
};

bool Spaceman_Animation_S7_To_S8_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Spaceman_Animation");
	strcpy(_UE.edgeName,"Spaceman_Animation_S7_To_S8_Condition");
#endif

	return(This->DirectionX()<0);
};

bool Spaceman_Animation_S9_To_S6_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Spaceman_Animation");
	strcpy(_UE.edgeName,"Spaceman_Animation_S9_To_S6_Condition");
#endif

	return(This->DirectionY()>0);
};

bool Spaceman_Animation_S9_To_S8_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Spaceman_Animation");
	strcpy(_UE.edgeName,"Spaceman_Animation_S9_To_S8_Condition");
#endif

	return(This->DirectionX()<0);
};

bool Spaceman_Animation_S8_To_S9_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Spaceman_Animation");
	strcpy(_UE.edgeName,"Spaceman_Animation_S8_To_S9_Condition");
#endif

	return(This->DirectionX()==0);
};

void Alien1_Animation_S_Action(int bInitAction, void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Action");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Alien1_Animation");
	strcpy(_UE.stateName,"S");
#endif

	if (bInitAction == 1){
		This->Animation(ALIEN1_IDLEF);
		
		
	};

	
};

void Alien1_Animation_Back_Action(int bInitAction, void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Action");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Alien1_Animation");
	strcpy(_UE.stateName,"Back");
#endif

	if (bInitAction == 1){
		This->Animation(ALIEN1_BACK);
	};

	
};

void Alien1_Animation_Idle_BACK_Action(int bInitAction, void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Action");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Alien1_Animation");
	strcpy(_UE.stateName,"Idle_BACK");
#endif

	if (bInitAction == 1){
		This->Animation(ALIEN1_IDLEB);
	};

	
};

void Alien1_Animation_Right_Action(int bInitAction, void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Action");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Alien1_Animation");
	strcpy(_UE.stateName,"Right");
#endif

	if (bInitAction == 1){
		This->Animation(ALIEN1_RIGHT);
	};

	
};

void Alien1_Animation_Idle_RIG_Action(int bInitAction, void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Action");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Alien1_Animation");
	strcpy(_UE.stateName,"Idle_RIG");
#endif

	if (bInitAction == 1){
		This->Animation(ALIEN1_IDLER);
	};

	
};

void Alien1_Animation_Forward_Action(int bInitAction, void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Action");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Alien1_Animation");
	strcpy(_UE.stateName,"Forward");
#endif

	if (bInitAction == 1){
		This->Animation(ALIEN1_FORWARD);
	};

	
};

void Alien1_Animation_Idle_FOR_Action(int bInitAction, void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Action");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Alien1_Animation");
	strcpy(_UE.stateName,"Idle_FOR");
#endif

	if (bInitAction == 1){
		This->Animation(ALIEN1_IDLEF);
	};

	
};

void Alien1_Animation_Left_Action(int bInitAction, void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Action");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Alien1_Animation");
	strcpy(_UE.stateName,"Left");
#endif

	if (bInitAction == 1){
		This->Animation(ALIEN1_LEFT);
	};

	
};

void Alien1_Animation_Idle_Left_Action(int bInitAction, void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Action");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Alien1_Animation");
	strcpy(_UE.stateName,"Idle_Left");
#endif

	if (bInitAction == 1){
		This->Animation(ALIEN1_IDLEL);
	};

	
};

bool Alien1_Animation_S1_To_S2_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Alien1_Animation");
	strcpy(_UE.edgeName,"Alien1_Animation_S1_To_S2_Condition");
#endif

	return(This->DirectionY()<0);
};

bool Alien1_Animation_S1_To_S4_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Alien1_Animation");
	strcpy(_UE.edgeName,"Alien1_Animation_S1_To_S4_Condition");
#endif

	return(This->DirectionX()>0);
};

bool Alien1_Animation_S2_To_S3_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Alien1_Animation");
	strcpy(_UE.edgeName,"Alien1_Animation_S2_To_S3_Condition");
#endif

	return(This->DirectionY()==0);
};

bool Alien1_Animation_S3_To_S2_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Alien1_Animation");
	strcpy(_UE.edgeName,"Alien1_Animation_S3_To_S2_Condition");
#endif

	return(This->DirectionY()<0);
};

bool Alien1_Animation_S7_To_S4b_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Alien1_Animation");
	strcpy(_UE.edgeName,"Alien1_Animation_S7_To_S4b_Condition");
#endif

	return(This->DirectionX()>0);
};

bool Alien1_Animation_S5_To_S2_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Alien1_Animation");
	strcpy(_UE.edgeName,"Alien1_Animation_S5_To_S2_Condition");
#endif

	return(This->DirectionY()<0);
};

bool Alien1_Animation_S6_To_S2_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Alien1_Animation");
	strcpy(_UE.edgeName,"Alien1_Animation_S6_To_S2_Condition");
#endif

	return(This->DirectionY()<0);
};

bool Alien1_Animation_S1_To_S6_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Alien1_Animation");
	strcpy(_UE.edgeName,"Alien1_Animation_S1_To_S6_Condition");
#endif

	return(This->DirectionY()>0);
};

bool Alien1_Animation_S7_To_S2_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Alien1_Animation");
	strcpy(_UE.edgeName,"Alien1_Animation_S7_To_S2_Condition");
#endif

	return(This->DirectionY()<0);
};

bool Alien1_Animation_S3_To_S4_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Alien1_Animation");
	strcpy(_UE.edgeName,"Alien1_Animation_S3_To_S4_Condition");
#endif

	return(This->DirectionX()>0);
};

bool Alien1_Animation_S2_To_S6_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Alien1_Animation");
	strcpy(_UE.edgeName,"Alien1_Animation_S2_To_S6_Condition");
#endif

	return(This->DirectionY()>0);
};

bool Alien1_Animation_S4_To_S5_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Alien1_Animation");
	strcpy(_UE.edgeName,"Alien1_Animation_S4_To_S5_Condition");
#endif

	return(This->DirectionX()==0);
};

bool Alien1_Animation_S5_To_S4_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Alien1_Animation");
	strcpy(_UE.edgeName,"Alien1_Animation_S5_To_S4_Condition");
#endif

	return(This->DirectionX()>0);
};

bool Alien1_Animation_S1_To_S8_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Alien1_Animation");
	strcpy(_UE.edgeName,"Alien1_Animation_S1_To_S8_Condition");
#endif

	return(This->DirectionX()<0);
};

bool Alien1_Animation_S9_To_S2_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Alien1_Animation");
	strcpy(_UE.edgeName,"Alien1_Animation_S9_To_S2_Condition");
#endif

	return(This->DirectionY()<0);
};

bool Alien1_Animation_S3_To_S6_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Alien1_Animation");
	strcpy(_UE.edgeName,"Alien1_Animation_S3_To_S6_Condition");
#endif

	return(This->DirectionY()>0);
};

bool Alien1_Animation_S8_To_S4_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Alien1_Animation");
	strcpy(_UE.edgeName,"Alien1_Animation_S8_To_S4_Condition");
#endif

	return(This->DirectionX()>0);
};

bool Alien1_Animation_S5_To_S6_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Alien1_Animation");
	strcpy(_UE.edgeName,"Alien1_Animation_S5_To_S6_Condition");
#endif

	return(This->DirectionY()>0);
};

bool Alien1_Animation_S4_To_S8_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Alien1_Animation");
	strcpy(_UE.edgeName,"Alien1_Animation_S4_To_S8_Condition");
#endif

	return(This->DirectionX()<0);
};

bool Alien1_Animation_S9_To_S4_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Alien1_Animation");
	strcpy(_UE.edgeName,"Alien1_Animation_S9_To_S4_Condition");
#endif

	return(This->DirectionX()>0);
};

bool Alien1_Animation_S7_To_S6_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Alien1_Animation");
	strcpy(_UE.edgeName,"Alien1_Animation_S7_To_S6_Condition");
#endif

	return(This->DirectionY()>0);
};

bool Alien1_Animation_S3_To_S8_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Alien1_Animation");
	strcpy(_UE.edgeName,"Alien1_Animation_S3_To_S8_Condition");
#endif

	return(This->DirectionX()<0);
};

bool Alien1_Animation_S6_To_S7_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Alien1_Animation");
	strcpy(_UE.edgeName,"Alien1_Animation_S6_To_S7_Condition");
#endif

	return(This->DirectionY()==0);
};

bool Alien1_Animation_S5_To_S8_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Alien1_Animation");
	strcpy(_UE.edgeName,"Alien1_Animation_S5_To_S8_Condition");
#endif

	return(This->DirectionX()<0);
};

bool Alien1_Animation_S9_To_S6_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Alien1_Animation");
	strcpy(_UE.edgeName,"Alien1_Animation_S9_To_S6_Condition");
#endif

	return(This->DirectionY()>0);
};

bool Alien1_Animation_S7_To_S8_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Alien1_Animation");
	strcpy(_UE.edgeName,"Alien1_Animation_S7_To_S8_Condition");
#endif

	return(This->DirectionX()<0);
};

bool Alien1_Animation_S8_To_S9_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Alien1_Animation");
	strcpy(_UE.edgeName,"Alien1_Animation_S8_To_S9_Condition");
#endif

	return(This->DirectionX()==0);
};

bool Alien1_Animation_S9_To_S8_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Alien1_Animation");
	strcpy(_UE.edgeName,"Alien1_Animation_S9_To_S8_Condition");
#endif

	return(This->DirectionX()<0);
};

void Alien2_Animation_S_Action(int bInitAction, void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Action");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Alien2_Animation");
	strcpy(_UE.stateName,"S");
#endif

	if (bInitAction == 1){
		This->Animation(ALIEN2_IDLEF);
		
		
	};

	
};

void Alien2_Animation_Back_Action(int bInitAction, void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Action");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Alien2_Animation");
	strcpy(_UE.stateName,"Back");
#endif

	if (bInitAction == 1){
		This->Animation(ALIEN2_BACK);
	};

	
};

void Alien2_Animation_Idle_BACK_Action(int bInitAction, void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Action");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Alien2_Animation");
	strcpy(_UE.stateName,"Idle_BACK");
#endif

	if (bInitAction == 1){
		This->Animation(ALIEN2_IDLEB);
	};

	
};

void Alien2_Animation_Right_Action(int bInitAction, void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Action");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Alien2_Animation");
	strcpy(_UE.stateName,"Right");
#endif

	if (bInitAction == 1){
		This->Animation(ALIEN2_RIGHT);
	};

	
};

void Alien2_Animation_Idle_RIG_Action(int bInitAction, void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Action");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Alien2_Animation");
	strcpy(_UE.stateName,"Idle_RIG");
#endif

	if (bInitAction == 1){
		This->Animation(ALIEN2_IDLER);
	};

	
};

void Alien2_Animation_Forward_Action(int bInitAction, void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Action");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Alien2_Animation");
	strcpy(_UE.stateName,"Forward");
#endif

	if (bInitAction == 1){
		This->Animation(ALIEN2_FORWARD);
	};

	
};

void Alien2_Animation_Idle_FOR_Action(int bInitAction, void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Action");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Alien2_Animation");
	strcpy(_UE.stateName,"Idle_FOR");
#endif

	if (bInitAction == 1){
		This->Animation(ALIEN2_IDLEF);
	};

	
};

void Alien2_Animation_Left_Action(int bInitAction, void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Action");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Alien2_Animation");
	strcpy(_UE.stateName,"Left");
#endif

	if (bInitAction == 1){
		This->Animation(ALIEN2_LEFT);
	};

	
};

void Alien2_Animation_Idle_Left_Action(int bInitAction, void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Action");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Alien2_Animation");
	strcpy(_UE.stateName,"Idle_Left");
#endif

	if (bInitAction == 1){
		This->Animation(ALIEN2_IDLEL);
	};

	
};

bool Alien2_Animation_S1_To_S2_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Alien2_Animation");
	strcpy(_UE.edgeName,"Alien2_Animation_S1_To_S2_Condition");
#endif

	return(This->DirectionY()<0);
};

bool Alien2_Animation_S3_To_S2_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Alien2_Animation");
	strcpy(_UE.edgeName,"Alien2_Animation_S3_To_S2_Condition");
#endif

	return(This->DirectionY()<0);
};

bool Alien2_Animation_S2_To_S3_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Alien2_Animation");
	strcpy(_UE.edgeName,"Alien2_Animation_S2_To_S3_Condition");
#endif

	return(This->DirectionY()==0);
};

bool Alien2_Animation_S1_To_S4_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Alien2_Animation");
	strcpy(_UE.edgeName,"Alien2_Animation_S1_To_S4_Condition");
#endif

	return(This->DirectionX()>0);
};

bool Alien2_Animation_S5_To_S2_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Alien2_Animation");
	strcpy(_UE.edgeName,"Alien2_Animation_S5_To_S2_Condition");
#endif

	return(This->DirectionY()<0);
};

bool Alien2_Animation_S7_To_S4b_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Alien2_Animation");
	strcpy(_UE.edgeName,"Alien2_Animation_S7_To_S4b_Condition");
#endif

	return(This->DirectionX()>0);
};

bool Alien2_Animation_S6_To_S2_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Alien2_Animation");
	strcpy(_UE.edgeName,"Alien2_Animation_S6_To_S2_Condition");
#endif

	return(This->DirectionY()<0);
};

bool Alien2_Animation_S3_To_S4_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Alien2_Animation");
	strcpy(_UE.edgeName,"Alien2_Animation_S3_To_S4_Condition");
#endif

	return(This->DirectionX()>0);
};

bool Alien2_Animation_S7_To_S2_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Alien2_Animation");
	strcpy(_UE.edgeName,"Alien2_Animation_S7_To_S2_Condition");
#endif

	return(This->DirectionY()<0);
};

bool Alien2_Animation_S1_To_S6_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Alien2_Animation");
	strcpy(_UE.edgeName,"Alien2_Animation_S1_To_S6_Condition");
#endif

	return(This->DirectionY()>0);
};

bool Alien2_Animation_S2_To_S6_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Alien2_Animation");
	strcpy(_UE.edgeName,"Alien2_Animation_S2_To_S6_Condition");
#endif

	return(This->DirectionY()>0);
};

bool Alien2_Animation_S5_To_S4_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Alien2_Animation");
	strcpy(_UE.edgeName,"Alien2_Animation_S5_To_S4_Condition");
#endif

	return(This->DirectionX()>0);
};

bool Alien2_Animation_S4_To_S5_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Alien2_Animation");
	strcpy(_UE.edgeName,"Alien2_Animation_S4_To_S5_Condition");
#endif

	return(This->DirectionX()==0);
};

bool Alien2_Animation_S3_To_S6_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Alien2_Animation");
	strcpy(_UE.edgeName,"Alien2_Animation_S3_To_S6_Condition");
#endif

	return(This->DirectionY()>0);
};

bool Alien2_Animation_S9_To_S2_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Alien2_Animation");
	strcpy(_UE.edgeName,"Alien2_Animation_S9_To_S2_Condition");
#endif

	return(This->DirectionY()<0);
};

bool Alien2_Animation_S1_To_S8_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Alien2_Animation");
	strcpy(_UE.edgeName,"Alien2_Animation_S1_To_S8_Condition");
#endif

	return(This->DirectionX()<0);
};

bool Alien2_Animation_S8_To_S4_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Alien2_Animation");
	strcpy(_UE.edgeName,"Alien2_Animation_S8_To_S4_Condition");
#endif

	return(This->DirectionX()>0);
};

bool Alien2_Animation_S5_To_S6_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Alien2_Animation");
	strcpy(_UE.edgeName,"Alien2_Animation_S5_To_S6_Condition");
#endif

	return(This->DirectionY()>0);
};

bool Alien2_Animation_S4_To_S8_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Alien2_Animation");
	strcpy(_UE.edgeName,"Alien2_Animation_S4_To_S8_Condition");
#endif

	return(This->DirectionX()<0);
};

bool Alien2_Animation_S3_To_S8_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Alien2_Animation");
	strcpy(_UE.edgeName,"Alien2_Animation_S3_To_S8_Condition");
#endif

	return(This->DirectionX()<0);
};

bool Alien2_Animation_S7_To_S6_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Alien2_Animation");
	strcpy(_UE.edgeName,"Alien2_Animation_S7_To_S6_Condition");
#endif

	return(This->DirectionY()>0);
};

bool Alien2_Animation_S9_To_S4_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Alien2_Animation");
	strcpy(_UE.edgeName,"Alien2_Animation_S9_To_S4_Condition");
#endif

	return(This->DirectionX()>0);
};

bool Alien2_Animation_S5_To_S8_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Alien2_Animation");
	strcpy(_UE.edgeName,"Alien2_Animation_S5_To_S8_Condition");
#endif

	return(This->DirectionX()<0);
};

bool Alien2_Animation_S6_To_S7_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Alien2_Animation");
	strcpy(_UE.edgeName,"Alien2_Animation_S6_To_S7_Condition");
#endif

	return(This->DirectionY()==0);
};

bool Alien2_Animation_S7_To_S8_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Alien2_Animation");
	strcpy(_UE.edgeName,"Alien2_Animation_S7_To_S8_Condition");
#endif

	return(This->DirectionX()<0);
};

bool Alien2_Animation_S9_To_S6_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Alien2_Animation");
	strcpy(_UE.edgeName,"Alien2_Animation_S9_To_S6_Condition");
#endif

	return(This->DirectionY()>0);
};

bool Alien2_Animation_S9_To_S8_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Alien2_Animation");
	strcpy(_UE.edgeName,"Alien2_Animation_S9_To_S8_Condition");
#endif

	return(This->DirectionX()<0);
};

bool Alien2_Animation_S8_To_S9_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Alien2_Animation");
	strcpy(_UE.edgeName,"Alien2_Animation_S8_To_S9_Condition");
#endif

	return(This->DirectionX()==0);
};

void Alien3_Animation_S_Action(int bInitAction, void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Action");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Alien3_Animation");
	strcpy(_UE.stateName,"S");
#endif

	if (bInitAction == 1){
		This->Animation(ALIEN3_IDLEF);
		
		
	};

	
};

void Alien3_Animation_Back_Action(int bInitAction, void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Action");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Alien3_Animation");
	strcpy(_UE.stateName,"Back");
#endif

	if (bInitAction == 1){
		This->Animation(ALIEN3_BACK);
	};

	
};

void Alien3_Animation_Idle_BACK_Action(int bInitAction, void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Action");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Alien3_Animation");
	strcpy(_UE.stateName,"Idle_BACK");
#endif

	if (bInitAction == 1){
		This->Animation(ALIEN3_IDLEB);
	};

	
};

void Alien3_Animation_Right_Action(int bInitAction, void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Action");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Alien3_Animation");
	strcpy(_UE.stateName,"Right");
#endif

	if (bInitAction == 1){
		This->Animation(ALIEN3_RIGHT);
	};

	
};

void Alien3_Animation_Idle_RIG_Action(int bInitAction, void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Action");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Alien3_Animation");
	strcpy(_UE.stateName,"Idle_RIG");
#endif

	if (bInitAction == 1){
		This->Animation(ALIEN3_IDLER);
	};

	
};

void Alien3_Animation_Forward_Action(int bInitAction, void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Action");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Alien3_Animation");
	strcpy(_UE.stateName,"Forward");
#endif

	if (bInitAction == 1){
		This->Animation(ALIEN3_FORWARD);
	};

	
};

void Alien3_Animation_Idle_FOR_Action(int bInitAction, void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Action");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Alien3_Animation");
	strcpy(_UE.stateName,"Idle_FOR");
#endif

	if (bInitAction == 1){
		This->Animation(ALIEN3_IDLEF);
	};

	
};

void Alien3_Animation_Left_Action(int bInitAction, void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Action");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Alien3_Animation");
	strcpy(_UE.stateName,"Left");
#endif

	if (bInitAction == 1){
		This->Animation(ALIEN3_LEFT);
	};

	
};

void Alien3_Animation_Idle_Left_Action(int bInitAction, void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Action");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Alien3_Animation");
	strcpy(_UE.stateName,"Idle_Left");
#endif

	if (bInitAction == 1){
		This->Animation(ALIEN3_IDLEL);
	};

	
};

bool Alien3_Animation_S1_To_S2_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Alien3_Animation");
	strcpy(_UE.edgeName,"Alien3_Animation_S1_To_S2_Condition");
#endif

	return(This->DirectionY()<0);
};

bool Alien3_Animation_S1_To_S4_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Alien3_Animation");
	strcpy(_UE.edgeName,"Alien3_Animation_S1_To_S4_Condition");
#endif

	return(This->DirectionX()>0);
};

bool Alien3_Animation_S2_To_S3_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Alien3_Animation");
	strcpy(_UE.edgeName,"Alien3_Animation_S2_To_S3_Condition");
#endif

	return(This->DirectionY()==0);
};

bool Alien3_Animation_S3_To_S2_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Alien3_Animation");
	strcpy(_UE.edgeName,"Alien3_Animation_S3_To_S2_Condition");
#endif

	return(This->DirectionY()<0);
};

bool Alien3_Animation_S7_To_S4b_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Alien3_Animation");
	strcpy(_UE.edgeName,"Alien3_Animation_S7_To_S4b_Condition");
#endif

	return(This->DirectionX()>0);
};

bool Alien3_Animation_S5_To_S2_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Alien3_Animation");
	strcpy(_UE.edgeName,"Alien3_Animation_S5_To_S2_Condition");
#endif

	return(This->DirectionY()<0);
};

bool Alien3_Animation_S6_To_S2_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Alien3_Animation");
	strcpy(_UE.edgeName,"Alien3_Animation_S6_To_S2_Condition");
#endif

	return(This->DirectionY()<0);
};

bool Alien3_Animation_S1_To_S6_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Alien3_Animation");
	strcpy(_UE.edgeName,"Alien3_Animation_S1_To_S6_Condition");
#endif

	return(This->DirectionY()>0);
};

bool Alien3_Animation_S7_To_S2_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Alien3_Animation");
	strcpy(_UE.edgeName,"Alien3_Animation_S7_To_S2_Condition");
#endif

	return(This->DirectionY()<0);
};

bool Alien3_Animation_S3_To_S4_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Alien3_Animation");
	strcpy(_UE.edgeName,"Alien3_Animation_S3_To_S4_Condition");
#endif

	return(This->DirectionX()>0);
};

bool Alien3_Animation_S2_To_S6_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Alien3_Animation");
	strcpy(_UE.edgeName,"Alien3_Animation_S2_To_S6_Condition");
#endif

	return(This->DirectionY()>0);
};

bool Alien3_Animation_S4_To_S5_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Alien3_Animation");
	strcpy(_UE.edgeName,"Alien3_Animation_S4_To_S5_Condition");
#endif

	return(This->DirectionX()==0);
};

bool Alien3_Animation_S5_To_S4_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Alien3_Animation");
	strcpy(_UE.edgeName,"Alien3_Animation_S5_To_S4_Condition");
#endif

	return(This->DirectionX()>0);
};

bool Alien3_Animation_S1_To_S8_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Alien3_Animation");
	strcpy(_UE.edgeName,"Alien3_Animation_S1_To_S8_Condition");
#endif

	return(This->DirectionX()<0);
};

bool Alien3_Animation_S9_To_S2_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Alien3_Animation");
	strcpy(_UE.edgeName,"Alien3_Animation_S9_To_S2_Condition");
#endif

	return(This->DirectionY()<0);
};

bool Alien3_Animation_S3_To_S6_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Alien3_Animation");
	strcpy(_UE.edgeName,"Alien3_Animation_S3_To_S6_Condition");
#endif

	return(This->DirectionY()>0);
};

bool Alien3_Animation_S8_To_S4_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Alien3_Animation");
	strcpy(_UE.edgeName,"Alien3_Animation_S8_To_S4_Condition");
#endif

	return(This->DirectionX()>0);
};

bool Alien3_Animation_S5_To_S6_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Alien3_Animation");
	strcpy(_UE.edgeName,"Alien3_Animation_S5_To_S6_Condition");
#endif

	return(This->DirectionY()>0);
};

bool Alien3_Animation_S4_To_S8_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Alien3_Animation");
	strcpy(_UE.edgeName,"Alien3_Animation_S4_To_S8_Condition");
#endif

	return(This->DirectionX()<0);
};

bool Alien3_Animation_S9_To_S4_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Alien3_Animation");
	strcpy(_UE.edgeName,"Alien3_Animation_S9_To_S4_Condition");
#endif

	return(This->DirectionX()>0);
};

bool Alien3_Animation_S7_To_S6_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Alien3_Animation");
	strcpy(_UE.edgeName,"Alien3_Animation_S7_To_S6_Condition");
#endif

	return(This->DirectionY()>0);
};

bool Alien3_Animation_S3_To_S8_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Alien3_Animation");
	strcpy(_UE.edgeName,"Alien3_Animation_S3_To_S8_Condition");
#endif

	return(This->DirectionX()<0);
};

bool Alien3_Animation_S6_To_S7_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Alien3_Animation");
	strcpy(_UE.edgeName,"Alien3_Animation_S6_To_S7_Condition");
#endif

	return(This->DirectionY()==0);
};

bool Alien3_Animation_S5_To_S8_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Alien3_Animation");
	strcpy(_UE.edgeName,"Alien3_Animation_S5_To_S8_Condition");
#endif

	return(This->DirectionX()<0);
};

bool Alien3_Animation_S9_To_S6_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Alien3_Animation");
	strcpy(_UE.edgeName,"Alien3_Animation_S9_To_S6_Condition");
#endif

	return(This->DirectionY()>0);
};

bool Alien3_Animation_S7_To_S8_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Alien3_Animation");
	strcpy(_UE.edgeName,"Alien3_Animation_S7_To_S8_Condition");
#endif

	return(This->DirectionX()<0);
};

bool Alien3_Animation_S8_To_S9_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Alien3_Animation");
	strcpy(_UE.edgeName,"Alien3_Animation_S8_To_S9_Condition");
#endif

	return(This->DirectionX()==0);
};

bool Alien3_Animation_S9_To_S8_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Alien3_Animation");
	strcpy(_UE.edgeName,"Alien3_Animation_S9_To_S8_Condition");
#endif

	return(This->DirectionX()<0);
};

void Alex_AL_s1_Action(int bInitAction, void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Action");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Alex_AL");
	strcpy(_UE.stateName,"s1");
#endif

	if (bInitAction == 1){
		This->VectorDirection(1,0);
	};

	
};

void Alex_AL_S2_Action(int bInitAction, void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Action");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Alex_AL");
	strcpy(_UE.stateName,"S2");
#endif

	if (bInitAction == 1){
		This->VectorDirection(0,-1);
	};

	
};

void Alex_AL_S3_Action(int bInitAction, void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Action");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Alex_AL");
	strcpy(_UE.stateName,"S3");
#endif

	if (bInitAction == 1){
		This->VectorDirection(0,1);
	};

	
};

void Alex_AL_S4_Action(int bInitAction, void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Action");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Alex_AL");
	strcpy(_UE.stateName,"S4");
#endif

	if (bInitAction == 1){
		This->VectorDirection(1,0);
	};

	
};

void Alex_AL_S5_Action(int bInitAction, void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Action");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Alex_AL");
	strcpy(_UE.stateName,"S5");
#endif

	if (bInitAction == 1){
		This->VectorDirection(-1,0);
		
	};

	
};

bool Alex_AL_S1_To_S2_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Alex_AL");
	strcpy(_UE.edgeName,"Alex_AL_S1_To_S2_Condition");
#endif

	return (This->WorldPositionX()>=270);
	
};

bool Alex_AL_S5_To_S1_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Alex_AL");
	strcpy(_UE.edgeName,"Alex_AL_S5_To_S1_Condition");
#endif

	return(This->WorldPositionX()==150);
	
};

bool Alex_AL_S2_To_S3_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Alex_AL");
	strcpy(_UE.edgeName,"Alex_AL_S2_To_S3_Condition");
#endif

	return (This->WorldPositionY()==270);
	
};

bool Alex_AL_S3_To_S4_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Alex_AL");
	strcpy(_UE.edgeName,"Alex_AL_S3_To_S4_Condition");
#endif

	return (This->WorldPositionY()==390);
	
};

bool Alex_AL_S4_To_S5_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Alex_AL");
	strcpy(_UE.edgeName,"Alex_AL_S4_To_S5_Condition");
#endif

	return(This->WorldPositionX()==450);
	
};

void Hunter_AI_Idle_Action(int bInitAction, void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Action");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Hunter_AI");
	strcpy(_UE.stateName,"Idle");
#endif

	if (bInitAction == 1){
		This->VectorDirection(0,0);
	};

	//increment counter
	This->LocalVariables[0]++;
	
};

void Hunter_AI_Up_Action(int bInitAction, void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Action");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Hunter_AI");
	strcpy(_UE.stateName,"Up");
#endif

	if (bInitAction == 1){
		This->VectorDirection(0,-1);
	};

	//increment counter
	This->LocalVariables[0]++;
	
	SpritePTR pc("Spaceman");
	//calculating the x distance between Spaceman and the enemy
	int dx = (int)(pc->WorldPositionX() - This->WorldPositionX());
	
	//Checking if Spaceman is inside the grid
	int test = (int)(This->WorldPositionY()) % 30;
	
	//getting the i and j to test whether the grid is open or blocked
	int i = (This->WorldPositionX() + This->HotSpotX(2))/30;
	int j = (This->WorldPositionY() + This->HotSpotY(2))/30;
	
	//if Spaceman is inside the grid and the upper grid is blocked, then go to idle state
	if(test == 0)
		if(j==0 || binaryMap[i][j-1] == 0)	
			This->VectorDirection(0,0);
	
};

void Hunter_AI_Down_Action(int bInitAction, void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Action");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Hunter_AI");
	strcpy(_UE.stateName,"Down");
#endif

	if (bInitAction == 1){
		This->VectorDirection(0,1);
	};

	//increment counter
	This->LocalVariables[0]++;
	
	SpritePTR pc("Spaceman");
	//calculating the y distance between Spaceman and the enemy
	int dy = (int)(pc->WorldPositionY() - This->WorldPositionY());
	
	//Checking if Spaceman is inside the grid
	int test = (int)(This->WorldPositionY()) % 30;
	
	//getting the i and j to test whether the grid is open or blocked
	int i = This->WorldPositionX()/30;
	int j = This->WorldPositionY()/30;
	
	//if the distance between Spaceman and the enemy is between 3 and -3 and the lower grid is open,
	//then the enemy moves down
	if(dy < 3 && dy > -3 && binaryMap[i][j-1]==1 && binaryMap[i-1][j]==0)
	{
		Following = false;
		This->VectorDirection(0,1);
	}
	
	//if Spaceman is inside the grid and the lower grid is blocked, then go to idle state
	if(test == 0)
		if(j==20 || binaryMap[i][j+1] == 0)	
			This->VectorDirection(0,0);
	
};

void Hunter_AI_Left_Action(int bInitAction, void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Action");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Hunter_AI");
	strcpy(_UE.stateName,"Left");
#endif

	if (bInitAction == 1){
		This->VectorDirection(-1,0);
	};

	//increment counter
	This->LocalVariables[0]++;
	
	SpritePTR pc("Spaceman");
	//calculating the x distance between Spaceman and the enemy
	int dx = (int)(pc->WorldPositionX() - This->WorldPositionX());
	
	//Checking if Spaceman is inside the grid
	int test = (int)(This->WorldPositionX()+30) % 30;
	
	//getting the i and j to test whether the grid is open or blocked
	int i = This->WorldPositionX()/30;
	int j = This->WorldPositionY()/30;
	
	//if the distance between Spaceman and the enemy is between 3 and -3 and the left grid is open,
	//then the enemy moves left
	if(dx < 3 && dx > -3 && binaryMap[i-1][j]==1)// && binaryMap[i][j+1]==0)
	{
		Following = false;
		This->VectorDirection(-1,0);
	}
	
	//if Spaceman is inside the grid and the left grid is blocked, then go to idle state
	if(test == 0)
		if(i == 0 || binaryMap[i-1][j] == 0)	
			This->VectorDirection(0,0);
	
};

void Hunter_AI_Right_Action(int bInitAction, void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Action");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Hunter_AI");
	strcpy(_UE.stateName,"Right");
#endif

	if (bInitAction == 1){
		This->VectorDirection(1,0);
	};

	//increment counter
	This->LocalVariables[0]++;
	
	//Checking if Spaceman is inside the grid
	int test = (int)(This->WorldPositionX()) % 30;
	
	//getting the i and j to test whether the grid is open or blocked
	int i = (This->WorldPositionX())/30;
	int j = This->WorldPositionY()/30;
	
	//if Spaceman is inside the grid and the right grid is blocked, then go to idle state
	if (test == 0)
		if(i==26 || binaryMap[i+1][j]==0)
			This->VectorDirection(0,0);
	
};

void Hunter_AI_S6_Action(int bInitAction, void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Action");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Hunter_AI");
	strcpy(_UE.stateName,"S6");
#endif

	if (bInitAction == 1){
		//reset counter if the enemy is following Spaceman
		if(Following)
			This->LocalVariables[0] = 0;
		
		//the enemy will not follow Spaceman
		Following = false;
		
	};

	//increment counter
	This->LocalVariables[0]++;
	
	//Checking if Spaceman is inside the grid
	int test = (int)(This->WorldPositionY()) % 30;
	
	//getting the i and j to test whether the grid is open or blocked
	int i = (This->WorldPositionX() + This->HotSpotX(2))/30;
	int j = (This->WorldPositionY() + This->HotSpotY(2))/30;
	
	//if Spaceman is inside the grid and the upper grid is blocked, then go to idle state
	if(test == 0)
		if(j==0 || binaryMap[i][j-1] == 0)	
			This->VectorDirection(0,0);
	
};

void Hunter_AI_S7_Action(int bInitAction, void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Action");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Hunter_AI");
	strcpy(_UE.stateName,"S7");
#endif

	if (bInitAction == 1){
		//reset counter
		if(Following)
			This->LocalVariables[0] = 0;
		
		//the enemy will not follow Spaceman
		Following = false;
		
	};

	//increment counter
	This->LocalVariables[0]++;
	
	//Checking if Spaceman is inside the grid
	int test = (int)(This->WorldPositionX()) % 30;
	
	//getting the i and j to test whether the grid is open or blocked
	int i = (This->WorldPositionX())/30;
	int j = This->WorldPositionY()/30;
	
	//if Spaceman is inside the grid and the right grid is blocked, then go to idle state
	if (test == 0)
		if(i==26 || binaryMap[i+1][j]==0)
			This->VectorDirection(0,0);
	
};

void Hunter_AI_S8_Action(int bInitAction, void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Action");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Hunter_AI");
	strcpy(_UE.stateName,"S8");
#endif

	if (bInitAction == 1){
		//reset counter
		if(Following)
			This->LocalVariables[0] = 0;
		
		//the enemy will not follow Spaceman
		Following = false;
		
	};

	//increment counter
	This->LocalVariables[0]++;
	
	//Checking if Spaceman is inside the grid
	int test = (int)(This->WorldPositionY()) % 30;
	
	//getting the i and j to test whether the grid is open or blocked
	int i = This->WorldPositionX()/30;
	int j = This->WorldPositionY()/30;
	
	//if Spaceman is inside the grid and the lower grid is blocked, then go to idle state
	if(test == 0)
		if(j==20 || binaryMap[i][j+1] == 0)	
			This->VectorDirection(0,0);
	
};

void Hunter_AI_S9_Action(int bInitAction, void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Action");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Hunter_AI");
	strcpy(_UE.stateName,"S9");
#endif

	if (bInitAction == 1){
		//reset counter
		if(Following)
			This->LocalVariables[0] = 0;
		
		//the enemy will not follow Spaceman
		Following = false;
		
	};

	//increment counter
	This->LocalVariables[0]++;
	
	//Checking if Spaceman is inside the grid
	int test = (int)(This->WorldPositionX()+30) % 30;
	
	//getting the i and j to test whether the grid is open or blocked
	int i = This->WorldPositionX()/30;
	int j = This->WorldPositionY()/30;
	
	//if Spaceman is inside the grid and the left grid is blocked, then go to idle state
	if(test == 0)
		if(i == 0 || binaryMap[i-1][j] == 0)	
			This->VectorDirection(0,0);
	
};

bool Hunter_AI_S2_To_S1_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Hunter_AI");
	strcpy(_UE.edgeName,"Hunter_AI_S2_To_S1_Condition");
#endif

	return !This->DirectionY();
};

bool Hunter_AI_S1_To_S2_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Hunter_AI");
	strcpy(_UE.edgeName,"Hunter_AI_S1_To_S2_Condition");
#endif

	SpritePTR pc("Spaceman");
	//calculating the y distance between Spaceman and the enemy
	int dy = (int)(pc->WorldPositionY() - This->WorldPositionY());
	
	if(dy < 0)
	{
		//Checking if Spaceman is inside the grid
		int test = (int)This->WorldPositionY() % 30;
	
		//getting the i and j to test whether the grid is open or blocked
		int i = This->WorldPositionX()/30;
		int j = This->WorldPositionY()/30;
	
		if (!test && j!=0 && binaryMap[i][j-1])		
	 		return true;
		else
			return false;
	}
	else		
		return false;
	
};

bool Hunter_AI_S4_To_S1_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Hunter_AI");
	strcpy(_UE.edgeName,"Hunter_AI_S4_To_S1_Condition");
#endif

	return !This->DirectionX();
};

bool Hunter_AI_S3_To_S1_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Hunter_AI");
	strcpy(_UE.edgeName,"Hunter_AI_S3_To_S1_Condition");
#endif

	return !This->DirectionY();
};

bool Hunter_AI_S1_To_S3_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Hunter_AI");
	strcpy(_UE.edgeName,"Hunter_AI_S1_To_S3_Condition");
#endif

	SpritePTR pc("Spaceman");
	//calculating the y distance between Spaceman and the enemy
	int dy = (int)(pc->WorldPositionY() - This->WorldPositionY());
	
	if(dy > 0)
	{
		//Checking if Spaceman is inside the grid
		int test = (int)This->WorldPositionY() % 30;
	
		//getting the i and j to test whether the grid is open or blocked
		int i = This->WorldPositionX()/30;
		int j = This->WorldPositionY()/30;
	
		if (!test && j!=20 && binaryMap[i][j+1])	
			return true;
		else
			return false;
	}
	else
		return false;
	
};

bool Hunter_AI_S4_To_S2_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Hunter_AI");
	strcpy(_UE.edgeName,"Hunter_AI_S4_To_S2_Condition");
#endif

	SpritePTR pc("Spaceman");
	//calculating the y distance between Spaceman and the enemy
	int dy = (int)(pc->WorldPositionY() - This->WorldPositionY());
	
	if(dy < 0)
	{	
		//Checking if Spaceman is inside the grid
		int test1 = (int)This->WorldPositionX() % 30;
		int test2 = (int)This->WorldPositionY() % 30;
	
		//getting the i and j to test whether the grid is open or blocked
		int i = This->WorldPositionX()/30;
		int j = This->WorldPositionY()/30;
	
		if (j!=0 && !test1 && !test2 && binaryMap[i][j-1])
			return true;
		else
			return false;
	}
	else		
		return false;
	
};

bool Hunter_AI_S3_To_S2_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Hunter_AI");
	strcpy(_UE.edgeName,"Hunter_AI_S3_To_S2_Condition");
#endif

	SpritePTR pc("Spaceman");
	//calculating the y distance between Spaceman and the enemy
	int dy = (int)(pc->WorldPositionY() - This->WorldPositionY());
	
	return (dy < 0);
	
};

bool Hunter_AI_S2_To_S3_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Hunter_AI");
	strcpy(_UE.edgeName,"Hunter_AI_S2_To_S3_Condition");
#endif

	SpritePTR pc("Spaceman");
	//calculating the y distance between Spaceman and the enemy
	int dy = (int)(pc->WorldPositionY() - This->WorldPositionY());
	
	return (dy > 0);
	
};

bool Hunter_AI_S5_To_S1_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Hunter_AI");
	strcpy(_UE.edgeName,"Hunter_AI_S5_To_S1_Condition");
#endif

	return !This->DirectionX(); 
};

bool Hunter_AI_S1_To_S4_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Hunter_AI");
	strcpy(_UE.edgeName,"Hunter_AI_S1_To_S4_Condition");
#endif

	SpritePTR pc("Spaceman");
	//calculating the x distance between Spaceman and the enemy
	int dx = (int)(pc->WorldPositionX() - This->WorldPositionX());
	
	if(dx < 0)
	{
		//Checking if Spaceman is inside the grid
		int test = (int)This->WorldPositionX() % 30;
	
		//getting the i and j to test whether the grid is open or blocked
		int i = This->WorldPositionX()/30;
		int j = This->WorldPositionY()/30;
	
		if (!test && i!=0 && binaryMap[i-1][j])	
				return true;
		else
			return false;
	}
	else
		return false;
	
};

bool Hunter_AI_S7_To_S1_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Hunter_AI");
	strcpy(_UE.edgeName,"Hunter_AI_S7_To_S1_Condition");
#endif

	return !This->DirectionX();
};

bool Hunter_AI_S6_To_S1_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Hunter_AI");
	strcpy(_UE.edgeName,"Hunter_AI_S6_To_S1_Condition");
#endif

	return !This->DirectionY();
};

bool Hunter_AI_S4_To_S3_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Hunter_AI");
	strcpy(_UE.edgeName,"Hunter_AI_S4_To_S3_Condition");
#endif

	SpritePTR pc("Spaceman");
	//calculating the y distance between Spaceman and the enemy
	int dy = (int)(pc->WorldPositionY() - This->WorldPositionY());
	
	if(dy > 0)
	{	
		//Checking if Spaceman is inside the grid
		int test1 = (int)This->WorldPositionX() % 30;
		int test2 = (int)This->WorldPositionY() % 30;
	
		//getting the i and j to test whether the grid is open or blocked
		int i = This->WorldPositionX()/30;
		int j = This->WorldPositionY()/30;
	
		if (j!=20 && !test1 && !test2 && binaryMap[i][j+1])
			return true;
		else
			return false;
	}
	else		
		return false;
	
};

bool Hunter_AI_S2_To_S4_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Hunter_AI");
	strcpy(_UE.edgeName,"Hunter_AI_S2_To_S4_Condition");
#endif

	SpritePTR pc("Spaceman");
	//calculating the x distance between Spaceman and the enemy
	int dx = (int)(pc->WorldPositionX() - This->WorldPositionX());
	
	if(dx < 0)
	{	
		//Checking if Spaceman is inside the grid
		int test1 = (int)This->WorldPositionX() % 30;
		int test2 = (int)This->WorldPositionY() % 30;
	
		//getting the i and j to test whether the grid is open or blocked
		int i = This->WorldPositionX()/30;
		int j = This->WorldPositionY()/30;
	
		if (i!=0 && !test1 && !test2 && binaryMap[i-1][j])
			return true;
		else
			return false;
	}
	else		
		return false;
	
};

bool Hunter_AI_S5_To_S2_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Hunter_AI");
	strcpy(_UE.edgeName,"Hunter_AI_S5_To_S2_Condition");
#endif

	SpritePTR pc("Spaceman");
	//calculating the y distance between Spaceman and the enemy
	int dy = (int)(pc->WorldPositionY() - This->WorldPositionY());
	
	if(dy < 0)
	{	
		//Checking if Spaceman is inside the grid
		int test1 = (int)This->WorldPositionX() % 30;
		int test2 = (int)This->WorldPositionY() % 30;
	
		//getting the i and j to test whether the grid is open or blocked
		int i = This->WorldPositionX()/30;
		int j = This->WorldPositionY()/30;
	
		if (j!=0 && !test1 && !test2 && binaryMap[i][j-1])
			return true;
		else
			return false;
	}
	else		
		return false;
	
};

bool Hunter_AI_S1_To_S5_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Hunter_AI");
	strcpy(_UE.edgeName,"Hunter_AI_S1_To_S5_Condition");
#endif

	SpritePTR pc("Spaceman");
	//calculating the x distance between Spaceman and the enemy
	int dx = (int)(pc->WorldPositionX() - This->WorldPositionX());
	
	if(dx > 0)
	{
		//Checking if Spaceman is inside the grid
		int test = (int)This->WorldPositionX() % 30;
	
		//getting the i and j to test whether the grid is open or blocked
		int i = This->WorldPositionX()/30;
		int j = This->WorldPositionY()/30;
	
		if (!test && i!=26 && binaryMap[i+1][j])
				return true;
		else
			return false;
	}
	else 
		return false;
	
	
};

bool Hunter_AI_S8_To_S1_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Hunter_AI");
	strcpy(_UE.edgeName,"Hunter_AI_S8_To_S1_Condition");
#endif

	return !This->DirectionY();
};

bool Hunter_AI_S6_To_S2_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Hunter_AI");
	strcpy(_UE.edgeName,"Hunter_AI_S6_To_S2_Condition");
#endif

	//if the counter is equal to 180, reset counter and let the enemy follow Spaceman
	if(This->LocalVariables[0] == 180)
	{
		This->LocalVariables[0] = 0;
		Following = true;
		return true;
	}
	
};

bool Hunter_AI_S1_To_S6_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Hunter_AI");
	strcpy(_UE.edgeName,"Hunter_AI_S1_To_S6_Condition");
#endif

	SpritePTR pc("Spaceman");
	
	//reset counter
	This->LocalVariables[0] = 0;
	
	//Checking if Spaceman is inside the grid
	int test = (int)This->WorldPositionX() % 30;
	
	//getting the i and j to test whether the grid is open or blocked
	int i = This->WorldPositionX()/30;
	int j = This->WorldPositionY()/30;
	
	//calculating the x and y distance between Spaceman and the enemy
	int dx = (int)(pc->WorldPositionX() - This->WorldPositionX());
	int dy = (int)(pc->WorldPositionY() - This->WorldPositionY());
	
	//special case where the enemy cannot move through the x and y directions to get closer, so he must chose another path
	//to follow Spaceman
	if(test==0 && binaryMap[i-1][j]==0 && binaryMap[i][j+1]==0 && dx<=0 && dy>=0)
	{
		Following = false;
		This->VectorDirection(0,-1);
		This->LocalVariables[0]++;
		return true;
	}
	
	//special case where the enemy cannot move through the x and y directions to get closer, so he must chose another path
	//to follow Spaceman
	else if(test==0 && binaryMap[i+1][j]==0 && binaryMap[i][j+1]==0 && dx>=0 && dy>=0)
	{
		Following = false;
		This->VectorDirection(0,-1);
		This->LocalVariables[0]++;
		return true;
	}
	else
	return false;
	
};

bool Hunter_AI_S5_To_S3_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Hunter_AI");
	strcpy(_UE.edgeName,"Hunter_AI_S5_To_S3_Condition");
#endif

	SpritePTR pc("Spaceman");
	//calculating the y distance between Spaceman and the enemy
	int dy = (int)(pc->WorldPositionY() - This->WorldPositionY());
	
	if(dy > 0)
	{	
		//Checking if Spaceman is inside the grid
		int test1 = (int)This->WorldPositionX() % 30;
		int test2 = (int)This->WorldPositionY() % 30;
	
		//getting the i and j to test whether the grid is open or blocked
		int i = This->WorldPositionX()/30;
		int j = This->WorldPositionY()/30;
	
		if (j!=20 && !test1 && !test2 && binaryMap[i][j+1])
			return true;
		else
			return false;
	}
	else		
		return false;
	
};

bool Hunter_AI_S3_To_S4_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Hunter_AI");
	strcpy(_UE.edgeName,"Hunter_AI_S3_To_S4_Condition");
#endif

	SpritePTR pc("Spaceman");
	//calculating the x distance between Spaceman and the enemy
	int dx = (int)(pc->WorldPositionX() - This->WorldPositionX());
	
	if(dx < 0)
	{	
		//Checking if Spaceman is inside the grid
		int test1 = (int)This->WorldPositionX() % 30;
		int test2 = (int)This->WorldPositionY() % 30;
	
		//getting the i and j to test whether the grid is open or blocked
		int i = This->WorldPositionX()/30;
		int j = This->WorldPositionY()/30;
	
		if (i!=0 && !test1 && !test2 && binaryMap[i-1][j])
			return true;
		else
			return false;
	}
	else		
		return false;
	
};

bool Hunter_AI_S2_To_S5_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Hunter_AI");
	strcpy(_UE.edgeName,"Hunter_AI_S2_To_S5_Condition");
#endif

	SpritePTR pc("Spaceman");
	//calculating the x distance between Spaceman and the enemy
	int dx = (int)(pc->WorldPositionX() - This->WorldPositionX());
	
	if(dx > 0)
	{	
		//Checking if Spaceman is inside the grid
		int test1 = (int)This->WorldPositionX() % 30;
		int test2 = (int)This->WorldPositionY() % 30;
	
		//getting the i and j to test whether the grid is open or blocked
		int i = This->WorldPositionX()/30;
		int j = This->WorldPositionY()/30;
	
		if (i!=26 && !test1 && !test2 && binaryMap[i+1][j])
			return true;
		else
			return false;
	}
	else		
		return false;
	
};

bool Hunter_AI_S9_To_S1_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Hunter_AI");
	strcpy(_UE.edgeName,"Hunter_AI_S9_To_S1_Condition");
#endif

	return !This->DirectionX();
};

bool Hunter_AI_S2_To_S6_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Hunter_AI");
	strcpy(_UE.edgeName,"Hunter_AI_S2_To_S6_Condition");
#endif

	//return true if counter is equal to 120 or if the enemy is no following Spaceman
	return This->LocalVariables[0] == 120 || !Following;
	
};

bool Hunter_AI_S3_To_S5_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Hunter_AI");
	strcpy(_UE.edgeName,"Hunter_AI_S3_To_S5_Condition");
#endif

	SpritePTR pc("Spaceman");
	//calculating the x distance between Spaceman and the enemy
	int dx = (int)(pc->WorldPositionX() - This->WorldPositionX());
	
	if(dx > 0)
	{	
		//Checking if Spaceman is inside the grid
		int test1 = (int)This->WorldPositionX() % 30;
		int test2 = (int)This->WorldPositionY() % 30;
	
		//getting the i and j to test whether the grid is open or blocked
		int i = This->WorldPositionX()/30;
		int j = This->WorldPositionY()/30;
	
		if (i!=26 && !test1 && !test2 && binaryMap[i+1][j])
			return true;
		else
			return false;
	}
	else		
		return false;
	
};

bool Hunter_AI_S4_To_S5_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Hunter_AI");
	strcpy(_UE.edgeName,"Hunter_AI_S4_To_S5_Condition");
#endif

	SpritePTR pc("Spaceman");
	//calculating the x distance between Spaceman and the enemy
	int dx = (int)(pc->WorldPositionX() - This->WorldPositionX());
	
	return (dx > 0);
	
};

bool Hunter_AI_S5_To_S4_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Hunter_AI");
	strcpy(_UE.edgeName,"Hunter_AI_S5_To_S4_Condition");
#endif

	SpritePTR pc("Spaceman");
	//calculating the x distance between Spaceman and the enemy
	int dx = (int)(pc->WorldPositionX() - This->WorldPositionX());
	
	return (dx < 0);
	
};

bool Hunter_AI_S8_To_S3_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Hunter_AI");
	strcpy(_UE.edgeName,"Hunter_AI_S8_To_S3_Condition");
#endif

	//if the counter is equal to 180, reset counter and let the enemy follow Spaceman
	if(This->LocalVariables[0] == 180)
	{
	This->LocalVariables[0] = 0;
	Following = true;
	return true;
	}
	
};

bool Hunter_AI_S1_To_S8_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Hunter_AI");
	strcpy(_UE.edgeName,"Hunter_AI_S1_To_S8_Condition");
#endif

	SpritePTR pc("Spaceman");
	
	//reset counter
	This->LocalVariables[0] = 0;
	
	//Checking if Spaceman is inside the grid
	int test = (int)This->WorldPositionY() % 30;
	
	int i = This->WorldPositionX()/30;
	int j = This->WorldPositionY()/30;
	
	int dx = (int)(pc->WorldPositionX() - This->WorldPositionX());
	int dy = (int)(pc->WorldPositionY() - This->WorldPositionY());
	
	//special case where the enemy cannot move through the x and y directions to get closer, so he must chose another path
	//to follow Spaceman
	if(test==0 && binaryMap[i+1][j]==0 && binaryMap[i][j-1]==0 && dx>=0 && dy<=0)
	{
		Following = false;
		This->VectorDirection(0,1);
		This->LocalVariables[0]++;
		return true;
	}
	//special case where the enemy cannot move through the x and y directions to get closer, so he must chose another path
	//to follow Spaceman
	else if(test==0 && binaryMap[i-1][j]==0 && /*binaryMap[i][j-1]==0 &&*/ dx<=0 && dy<=0)
	{
		Following = false;
		This->VectorDirection(0,1);
		This->LocalVariables[0]++;
		return true;
	}
	else
	return false; 
	
};

bool Hunter_AI_S7_To_S5_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Hunter_AI");
	strcpy(_UE.edgeName,"Hunter_AI_S7_To_S5_Condition");
#endif

	//if the counter is equal to 180, reset counter and let the enemy follow Spaceman
	if(This->LocalVariables[0] == 180)
	{
	This->LocalVariables[0] = 0;
	Following = true;
	return true;
	}
	
};

bool Hunter_AI_S9_To_S4_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Hunter_AI");
	strcpy(_UE.edgeName,"Hunter_AI_S9_To_S4_Condition");
#endif

	//if the counter is equal to 180, reset counter and let the enemy follow Spaceman
	if(This->LocalVariables[0] == 180)
	{
	This->LocalVariables[0] = 0;
	Following = true;
	return true;
	}
	
};

bool Hunter_AI_S3_To_S8_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Hunter_AI");
	strcpy(_UE.edgeName,"Hunter_AI_S3_To_S8_Condition");
#endif

	//return true if counter is equal to 120 or if the enemy is no following Spaceman
	return This->LocalVariables[0] == 120 || !Following;
	
};

bool Hunter_AI_S5_To_S7_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Hunter_AI");
	strcpy(_UE.edgeName,"Hunter_AI_S5_To_S7_Condition");
#endif

	//return true if counter is equal to 120 or if the enemy is no following Spaceman
	return This->LocalVariables[0] == 120 || !Following;
	
};

bool Hunter_AI_S4_To_S9_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Hunter_AI");
	strcpy(_UE.edgeName,"Hunter_AI_S4_To_S9_Condition");
#endif

	//return true if counter is equal to 120 or if the enemy is no following Spaceman
	return This->LocalVariables[0] == 120 || !Following;
	
};

void left_right_left_Action(int bInitAction, void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Action");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"left_right");
	strcpy(_UE.stateName,"left");
#endif

	if (bInitAction == 1){
		This->VectorDirection(1,0);
	};

	int test=(int)(This->WorldPositionX())%30;
	
	int i=This->WorldPositionX()/30;
	int j=This->WorldPositionY()/30;
	
	if(test==0)
		if(i==24||binaryMap[i+1][j]==0)
			This->VectorDirection(0,0);
};

void left_right_Right_Action(int bInitAction, void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Action");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"left_right");
	strcpy(_UE.stateName,"Right");
#endif

	if (bInitAction == 1){
		This->VectorDirection(-1,0);
	};

	int test=(int)(This->WorldPositionX())%30;
	
	int i=This->WorldPositionX()/30;
	int j=This->WorldPositionY()/30;
	
	if(test==0)
		if(i==0||binaryMap[i-1][j]==0)
			This->VectorDirection(0,0);
};

bool left_right_S1_To_S3_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"left_right");
	strcpy(_UE.edgeName,"left_right_S1_To_S3_Condition");
#endif

	return! This->DirectionX();
};

bool left_right_S3_To_S1_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"left_right");
	strcpy(_UE.edgeName,"left_right_S3_To_S1_Condition");
#endif

	return! This->DirectionX();
};

void up_down_up_Action(int bInitAction, void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Action");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"up_down");
	strcpy(_UE.stateName,"up");
#endif

	if (bInitAction == 1){
		This->VectorDirection(0,1);
	};

	int test=(int)(This->WorldPositionX())%30;
	
	int i=This->WorldPositionX()/30;
	int j=This->WorldPositionY()/30;
	
	if(test==0)
		if(j==18||binaryMap[i][j+1]==0)
			This->VectorDirection(0,0);
};

void up_down_Down_Action(int bInitAction, void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Action");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"up_down");
	strcpy(_UE.stateName,"Down");
#endif

	if (bInitAction == 1){
		This->VectorDirection(0,-1);
	};

	int test=(int)(This->WorldPositionX())%30;
	
	int i=This->WorldPositionX()/30;
	int j=This->WorldPositionY()/30;
	
	if(test==0)
		if(j==0||binaryMap[i][j-1]==0)
			This->VectorDirection(0,0);
};

bool up_down_S3_To_S1_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"up_down");
	strcpy(_UE.edgeName,"up_down_S3_To_S1_Condition");
#endif

	return! This->DirectionY();
};

bool up_down_S1_To_S3_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"up_down");
	strcpy(_UE.edgeName,"up_down_S1_To_S3_Condition");
#endif

	return! This->DirectionY();
};

void Illiminati_Al_right_Action(int bInitAction, void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Action");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Illiminati_Al");
	strcpy(_UE.stateName,"right");
#endif

	if (bInitAction == 1){
		This->VectorDirection(1,0);
		
		
		
	};

	
};

void Illiminati_Al_down_Action(int bInitAction, void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Action");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Illiminati_Al");
	strcpy(_UE.stateName,"down");
#endif

	if (bInitAction == 1){
		This->VectorDirection(0,1);
		
	};

	
};

void Illiminati_Al_left_Action(int bInitAction, void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Action");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Illiminati_Al");
	strcpy(_UE.stateName,"left");
#endif

	if (bInitAction == 1){
		This->VectorDirection(-1,0);
		
	};

	
};

void Illiminati_Al_up_Action(int bInitAction, void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Action");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Illiminati_Al");
	strcpy(_UE.stateName,"up");
#endif

	if (bInitAction == 1){
		This->VectorDirection(0,-1);
		
	};

	
};

bool Illiminati_Al_S1_To_S2_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Illiminati_Al");
	strcpy(_UE.edgeName,"Illiminati_Al_S1_To_S2_Condition");
#endif

	return (This->WorldPositionX()==660);
};

bool Illiminati_Al_S4_To_S1_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Illiminati_Al");
	strcpy(_UE.edgeName,"Illiminati_Al_S4_To_S1_Condition");
#endif

	return (This->WorldPositionY()==450);
};

bool Illiminati_Al_S2_To_S3_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Illiminati_Al");
	strcpy(_UE.edgeName,"Illiminati_Al_S2_To_S3_Condition");
#endif

	return (This->WorldPositionY()==540);
};

bool Illiminati_Al_S3_To_S4_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Illiminati_Al");
	strcpy(_UE.edgeName,"Illiminati_Al_S3_To_S4_Condition");
#endif

	return (This->WorldPositionX()==30);
};

void Fred_AL_right_Action(int bInitAction, void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Action");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Fred_AL");
	strcpy(_UE.stateName,"right");
#endif

	if (bInitAction == 1){
		This->VectorDirection(1,0);
		
		
		
	};

	
};

void Fred_AL_down_Action(int bInitAction, void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Action");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Fred_AL");
	strcpy(_UE.stateName,"down");
#endif

	if (bInitAction == 1){
		This->VectorDirection(0,1);
		
	};

	
};

void Fred_AL_left_Action(int bInitAction, void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Action");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Fred_AL");
	strcpy(_UE.stateName,"left");
#endif

	if (bInitAction == 1){
		This->VectorDirection(-1,0);
		
	};

	
};

void Fred_AL_up_Action(int bInitAction, void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Action");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Fred_AL");
	strcpy(_UE.stateName,"up");
#endif

	if (bInitAction == 1){
		This->VectorDirection(0,-1);
		
	};

	
};

bool Fred_AL_S1_To_S2_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Fred_AL");
	strcpy(_UE.edgeName,"Fred_AL_S1_To_S2_Condition");
#endif

	return (This->WorldPositionX()==480);
};

bool Fred_AL_S4_To_S1_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Fred_AL");
	strcpy(_UE.edgeName,"Fred_AL_S4_To_S1_Condition");
#endif

	return (This->WorldPositionY()==330);
};

bool Fred_AL_S2_To_S3_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Fred_AL");
	strcpy(_UE.edgeName,"Fred_AL_S2_To_S3_Condition");
#endif

	return (This->WorldPositionY()==390);
};

bool Fred_AL_S3_To_S4_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Fred_AL");
	strcpy(_UE.edgeName,"Fred_AL_S3_To_S4_Condition");
#endif

	return (This->WorldPositionX()==270);
};

void Drugs_AI_Left2_Action(int bInitAction, void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Action");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Drugs_AI");
	strcpy(_UE.stateName,"Left2");
#endif

	if (bInitAction == 1){
		This->VectorDirection(-1,0);
		
		
		
	};

	
};

void Drugs_AI_down_Action(int bInitAction, void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Action");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Drugs_AI");
	strcpy(_UE.stateName,"down");
#endif

	if (bInitAction == 1){
		This->VectorDirection(0,1);
		
	};

	
};

void Drugs_AI_left_Action(int bInitAction, void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Action");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Drugs_AI");
	strcpy(_UE.stateName,"left");
#endif

	if (bInitAction == 1){
		This->VectorDirection(-1,0);
		
	};

	
};

void Drugs_AI_Down2_Action(int bInitAction, void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Action");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Drugs_AI");
	strcpy(_UE.stateName,"Down2");
#endif

	if (bInitAction == 1){
		This->VectorDirection(0,1);
		
	};

	
};

void Drugs_AI_up_Action(int bInitAction, void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Action");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Drugs_AI");
	strcpy(_UE.stateName,"up");
#endif

	if (bInitAction == 1){
		This->VectorDirection(0,-1);
	};

	
};

void Drugs_AI_Right_Action(int bInitAction, void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Action");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Drugs_AI");
	strcpy(_UE.stateName,"Right");
#endif

	if (bInitAction == 1){
		This->VectorDirection(1,0);
	};

	
};

void Drugs_AI_up2_Action(int bInitAction, void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Action");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Drugs_AI");
	strcpy(_UE.stateName,"up2");
#endif

	if (bInitAction == 1){
		This->VectorDirection(0,-1);
	};

	
};

void Drugs_AI_Right2_Action(int bInitAction, void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Action");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Drugs_AI");
	strcpy(_UE.stateName,"Right2");
#endif

	if (bInitAction == 1){
		This->VectorDirection(1,0);
	};

	
};

void Drugs_AI_Up3_Action(int bInitAction, void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Action");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Drugs_AI");
	strcpy(_UE.stateName,"Up3");
#endif

	if (bInitAction == 1){
		This->VectorDirection(0,-1);
	};

	
};

void Drugs_AI_Right3_Action(int bInitAction, void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Action");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Drugs_AI");
	strcpy(_UE.stateName,"Right3");
#endif

	if (bInitAction == 1){
		This->VectorDirection(1,0);
	};

	
};

bool Drugs_AI_S10_To_S2_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Drugs_AI");
	strcpy(_UE.edgeName,"Drugs_AI_S10_To_S2_Condition");
#endif

	return (This->WorldPositionX()==660);
};

bool Drugs_AI_S4_To_S1_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Drugs_AI");
	strcpy(_UE.edgeName,"Drugs_AI_S4_To_S1_Condition");
#endif

	return (This->WorldPositionY()==480);
};

bool Drugs_AI_S9_To_S10_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Drugs_AI");
	strcpy(_UE.edgeName,"Drugs_AI_S9_To_S10_Condition");
#endif

	return (This->WorldPositionY()==30);
};

bool Drugs_AI_S2_To_S3_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Drugs_AI");
	strcpy(_UE.edgeName,"Drugs_AI_S2_To_S3_Condition");
#endif

	return (This->WorldPositionY()==300);
};

bool Drugs_AI_S1_To_S5_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Drugs_AI");
	strcpy(_UE.edgeName,"Drugs_AI_S1_To_S5_Condition");
#endif

	return (This->WorldPositionX()==180);
};

bool Drugs_AI_S3_To_S4_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Drugs_AI");
	strcpy(_UE.edgeName,"Drugs_AI_S3_To_S4_Condition");
#endif

	return (This->WorldPositionX()==600);
};

bool Drugs_AI_S5_To_S6_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Drugs_AI");
	strcpy(_UE.edgeName,"Drugs_AI_S5_To_S6_Condition");
#endif

	return (This->WorldPositionY()==270);
};

bool Drugs_AI_S6_To_S7_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Drugs_AI");
	strcpy(_UE.edgeName,"Drugs_AI_S6_To_S7_Condition");
#endif

	return (This->WorldPositionX()==300);
};

bool Drugs_AI_S7_To_S8_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Drugs_AI");
	strcpy(_UE.edgeName,"Drugs_AI_S7_To_S8_Condition");
#endif

	return (This->WorldPositionY()==90);
};

bool Drugs_AI_S8_To_S9_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Drugs_AI");
	strcpy(_UE.edgeName,"Drugs_AI_S8_To_S9_Condition");
#endif

	return (This->WorldPositionX()==570);
};

void Nate_AL_right_Action(int bInitAction, void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Action");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Nate_AL");
	strcpy(_UE.stateName,"right");
#endif

	if (bInitAction == 1){
		This->VectorDirection(1,0);
		
		
		
	};

	
};

void Nate_AL_down_Action(int bInitAction, void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Action");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Nate_AL");
	strcpy(_UE.stateName,"down");
#endif

	if (bInitAction == 1){
		This->VectorDirection(0,1);
		
	};

	
};

void Nate_AL_left_Action(int bInitAction, void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Action");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Nate_AL");
	strcpy(_UE.stateName,"left");
#endif

	if (bInitAction == 1){
		This->VectorDirection(-1,0);
		
	};

	
};

void Nate_AL_up_Action(int bInitAction, void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Action");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Nate_AL");
	strcpy(_UE.stateName,"up");
#endif

	if (bInitAction == 1){
		This->VectorDirection(0,-1);
		
	};

	
};

bool Nate_AL_S1_To_S2_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Nate_AL");
	strcpy(_UE.edgeName,"Nate_AL_S1_To_S2_Condition");
#endif

	return (This->WorldPositionX()==300);
};

bool Nate_AL_S4_To_S1_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Nate_AL");
	strcpy(_UE.edgeName,"Nate_AL_S4_To_S1_Condition");
#endif

	return (This->WorldPositionY()==240);
};

bool Nate_AL_S2_To_S3_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Nate_AL");
	strcpy(_UE.edgeName,"Nate_AL_S2_To_S3_Condition");
#endif

	return (This->WorldPositionY()==300);
};

bool Nate_AL_S3_To_S4_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Nate_AL");
	strcpy(_UE.edgeName,"Nate_AL_S3_To_S4_Condition");
#endif

	return (This->WorldPositionX()==240);
};

void Staci_AL_right_Action(int bInitAction, void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Action");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Staci_AL");
	strcpy(_UE.stateName,"right");
#endif

	if (bInitAction == 1){
		This->VectorDirection(1,0);
		
		
		
	};

	
};

void Staci_AL_down_Action(int bInitAction, void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Action");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Staci_AL");
	strcpy(_UE.stateName,"down");
#endif

	if (bInitAction == 1){
		This->VectorDirection(0,1);
		
	};

	
};

void Staci_AL_left_Action(int bInitAction, void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Action");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Staci_AL");
	strcpy(_UE.stateName,"left");
#endif

	if (bInitAction == 1){
		This->VectorDirection(-1,0);
		
	};

	
};

void Staci_AL_up_Action(int bInitAction, void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Action");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Staci_AL");
	strcpy(_UE.stateName,"up");
#endif

	if (bInitAction == 1){
		This->VectorDirection(0,-1);
		
	};

	
};

bool Staci_AL_S1_To_S2_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Staci_AL");
	strcpy(_UE.edgeName,"Staci_AL_S1_To_S2_Condition");
#endif

	return (This->WorldPositionX()==630);
};

bool Staci_AL_S4_To_S1_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Staci_AL");
	strcpy(_UE.edgeName,"Staci_AL_S4_To_S1_Condition");
#endif

	return (This->WorldPositionY()==390);
};

bool Staci_AL_S2_To_S3_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Staci_AL");
	strcpy(_UE.edgeName,"Staci_AL_S2_To_S3_Condition");
#endif

	return (This->WorldPositionY()==480);
};

bool Staci_AL_S3_To_S4_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"Staci_AL");
	strcpy(_UE.edgeName,"Staci_AL_S3_To_S4_Condition");
#endif

	return (This->WorldPositionX()==330);
};

void axe_AL_UP_Action(int bInitAction, void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Action");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"axe_AL");
	strcpy(_UE.stateName,"UP");
#endif

	if (bInitAction == 1){
		This->VectorDirection(0,-1);
		
		
		
	};

	
};

void axe_AL_Right5_Action(int bInitAction, void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Action");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"axe_AL");
	strcpy(_UE.stateName,"Right5");
#endif

	if (bInitAction == 1){
		This->VectorDirection(1,0);
	};

	
};

void axe_AL_down_Action(int bInitAction, void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Action");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"axe_AL");
	strcpy(_UE.stateName,"down");
#endif

	if (bInitAction == 1){
		This->VectorDirection(0,1);
		
	};

	
};

void axe_AL_Down3_Action(int bInitAction, void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Action");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"axe_AL");
	strcpy(_UE.stateName,"Down3");
#endif

	if (bInitAction == 1){
		This->VectorDirection(0,1);
		
	};

	
};

void axe_AL_left_Action(int bInitAction, void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Action");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"axe_AL");
	strcpy(_UE.stateName,"left");
#endif

	if (bInitAction == 1){
		This->VectorDirection(-1,0);
		
	};

	
};

void axe_AL_Right2_Action(int bInitAction, void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Action");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"axe_AL");
	strcpy(_UE.stateName,"Right2");
#endif

	if (bInitAction == 1){
		This->VectorDirection(1,0);
		
	};

	
};

void axe_AL_Left2_Action(int bInitAction, void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Action");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"axe_AL");
	strcpy(_UE.stateName,"Left2");
#endif

	if (bInitAction == 1){
		This->VectorDirection(-1,0);
	};

	
};

void axe_AL_left4_Action(int bInitAction, void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Action");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"axe_AL");
	strcpy(_UE.stateName,"left4");
#endif

	if (bInitAction == 1){
		This->VectorDirection(-1,0);
	};

	
};

void axe_AL_Right3_Action(int bInitAction, void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Action");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"axe_AL");
	strcpy(_UE.stateName,"Right3");
#endif

	if (bInitAction == 1){
		This->VectorDirection(1,0);
	};

	
};

void axe_AL_down4_Action(int bInitAction, void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Action");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"axe_AL");
	strcpy(_UE.stateName,"down4");
#endif

	if (bInitAction == 1){
		This->VectorDirection(0,1);
		
	};

	
};

void axe_AL_up3_Action(int bInitAction, void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Action");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"axe_AL");
	strcpy(_UE.stateName,"up3");
#endif

	if (bInitAction == 1){
		This->VectorDirection(0,-1);
		
	};

	
};

void axe_AL_Right4_Action(int bInitAction, void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Action");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"axe_AL");
	strcpy(_UE.stateName,"Right4");
#endif

	if (bInitAction == 1){
		This->VectorDirection(1,0);
	};

	
};

void axe_AL_up4_Action(int bInitAction, void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Action");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"axe_AL");
	strcpy(_UE.stateName,"up4");
#endif

	if (bInitAction == 1){
		This->VectorDirection(0,-1);
		
	};

	
};

void axe_AL_left3_Action(int bInitAction, void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Action");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"axe_AL");
	strcpy(_UE.stateName,"left3");
#endif

	if (bInitAction == 1){
		This->VectorDirection(-1,0);
	};

	
};

bool axe_AL_S5_To_S14_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"axe_AL");
	strcpy(_UE.edgeName,"axe_AL_S5_To_S14_Condition");
#endif

	return (This->WorldPositionX()==300);
};

bool axe_AL_S4_To_S1_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"axe_AL");
	strcpy(_UE.edgeName,"axe_AL_S4_To_S1_Condition");
#endif

	return (This->WorldPositionX()==630);
};

bool axe_AL_S13_To_S2_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"axe_AL");
	strcpy(_UE.edgeName,"axe_AL_S13_To_S2_Condition");
#endif

	return (This->WorldPositionX()==630);
};

bool axe_AL_S2_To_S3_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"axe_AL");
	strcpy(_UE.edgeName,"axe_AL_S2_To_S3_Condition");
#endif

	return (This->WorldPositionY()==510);
};

bool axe_AL_S1_To_S5_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"axe_AL");
	strcpy(_UE.edgeName,"axe_AL_S1_To_S5_Condition");
#endif

	return (This->WorldPositionY()==270);
};

bool axe_AL_S10_To_S11_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"axe_AL");
	strcpy(_UE.edgeName,"axe_AL_S10_To_S11_Condition");
#endif

	return (This->WorldPositionX()==330);
};

bool axe_AL_S3_To_S4_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"axe_AL");
	strcpy(_UE.edgeName,"axe_AL_S3_To_S4_Condition");
#endif

	return (This->WorldPositionX()==180);
};

bool axe_AL_S12_To_S9_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"axe_AL");
	strcpy(_UE.edgeName,"axe_AL_S12_To_S9_Condition");
#endif

	return (This->WorldPositionX()==240);
};

bool axe_AL_S7_To_S6_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"axe_AL");
	strcpy(_UE.edgeName,"axe_AL_S7_To_S6_Condition");
#endif

	return (This->WorldPositionX()==600);
};

bool axe_AL_S6_To_S8_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"axe_AL");
	strcpy(_UE.edgeName,"axe_AL_S6_To_S8_Condition");
#endif

	return (This->WorldPositionX()==210);
};

bool axe_AL_S9_To_S7_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"axe_AL");
	strcpy(_UE.edgeName,"axe_AL_S9_To_S7_Condition");
#endif

	return (This->WorldPositionY()==180);
};

bool axe_AL_S11_To_S13_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"axe_AL");
	strcpy(_UE.edgeName,"axe_AL_S11_To_S13_Condition");
#endif

	return (This->WorldPositionY()==270);
};

bool axe_AL_S14_To_S12_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"axe_AL");
	strcpy(_UE.edgeName,"axe_AL_S14_To_S12_Condition");
#endif

	return (This->WorldPositionY()==330);
};

bool axe_AL_S8_To_S10_Condition(void *pSMArgument)
{
	Sprite* This = (Sprite*) pSMArgument;
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Condition");
	strcpy(_UE.objectName,This->Name());
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.stateMachineName,"axe_AL");
	strcpy(_UE.edgeName,"axe_AL_S8_To_S10_Condition");
#endif

	return (This->WorldPositionY()==300);
};

