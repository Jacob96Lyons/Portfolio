#include "stdafx.h"
#include "Headers.h"
#include "GameFunctions.h"

void LoadAnimation_Alpha(GameNode* gn)
{
	SpriteList[4].TotalAnimations = 7;
	SpriteList[4].Animations = new AnimationElem[7];

	SpriteList[4].Animations[0].TotalFrames=1;
	SpriteList[4].Animations[0].ConnectTo = 0;
	SpriteList[4].Animations[0].Frames = new FrameElem[1];

	SpriteList[4].Animations[0].Frames[0].BitmapName = "Wall.bmp";
	SpriteList[4].Animations[0].Frames[0].TranslateX = 0.000;
	SpriteList[4].Animations[0].Frames[0].TranslateY = 0.000;
	SpriteList[4].Animations[0].Frames[0].Delay = 1;
	SpriteList[4].Animations[0].Frames[0].Width = 30;
	SpriteList[4].Animations[0].Frames[0].Height = 30;
	SpriteList[4].Animations[0].Frames[0].Transparency = RGB(240,240,240);
	SpriteList[4].Animations[0].Frames[0].hFlip = false;
	SpriteList[4].Animations[0].Frames[0].vFlip = false;
	SpriteList[4].Animations[0].Frames[0].zRotation = 0;
	SpriteList[4].Animations[0].Frames[0].HotSpot[0].x = 15;
	SpriteList[4].Animations[0].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[4].Animations[0].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[4].Animations[0].Frames[0].centerX = 15;
	SpriteList[4].Animations[0].Frames[0].centerY = 15;
	SpriteList[4].Animations[0].Frames[0].PegRegistered = false;
	SpriteList[4].Animations[0].Frames[0].useTransparency = false;


	SpriteList[4].Animations[1].TotalFrames=3;
	SpriteList[4].Animations[1].ConnectTo = 0;
	SpriteList[4].Animations[1].Frames = new FrameElem[3];

	SpriteList[4].Animations[1].Frames[0].BitmapName = "Server 1.bmp";
	SpriteList[4].Animations[1].Frames[0].TranslateX = 0.000;
	SpriteList[4].Animations[1].Frames[0].TranslateY = 0.000;
	SpriteList[4].Animations[1].Frames[0].Delay = 21;
	SpriteList[4].Animations[1].Frames[0].Width = 30;
	SpriteList[4].Animations[1].Frames[0].Height = 30;
	SpriteList[4].Animations[1].Frames[0].Transparency = RGB(240,240,240);
	SpriteList[4].Animations[1].Frames[0].hFlip = false;
	SpriteList[4].Animations[1].Frames[0].vFlip = false;
	SpriteList[4].Animations[1].Frames[0].zRotation = 0;
	SpriteList[4].Animations[1].Frames[0].HotSpot[0].x = 15;
	SpriteList[4].Animations[1].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[4].Animations[1].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[4].Animations[1].Frames[0].centerX = 15;
	SpriteList[4].Animations[1].Frames[0].centerY = 15;
	SpriteList[4].Animations[1].Frames[0].PegRegistered = false;
	SpriteList[4].Animations[1].Frames[0].useTransparency = false;

	SpriteList[4].Animations[1].Frames[1].BitmapName = "Server 2.bmp";
	SpriteList[4].Animations[1].Frames[1].TranslateX = 0.000;
	SpriteList[4].Animations[1].Frames[1].TranslateY = 0.000;
	SpriteList[4].Animations[1].Frames[1].Delay = 21;
	SpriteList[4].Animations[1].Frames[1].Width = 30;
	SpriteList[4].Animations[1].Frames[1].Height = 30;
	SpriteList[4].Animations[1].Frames[1].Transparency = RGB(240,240,240);
	SpriteList[4].Animations[1].Frames[1].hFlip = false;
	SpriteList[4].Animations[1].Frames[1].vFlip = false;
	SpriteList[4].Animations[1].Frames[1].zRotation = 0;
	SpriteList[4].Animations[1].Frames[1].HotSpot[0].x = 15;
	SpriteList[4].Animations[1].Frames[1].HotSpot[0].y = 15;
	::SetRect( &SpriteList[4].Animations[1].Frames[1].BBox, 0, 0, 29,29);
	SpriteList[4].Animations[1].Frames[1].centerX = 15;
	SpriteList[4].Animations[1].Frames[1].centerY = 15;
	SpriteList[4].Animations[1].Frames[1].PegRegistered = false;
	SpriteList[4].Animations[1].Frames[1].useTransparency = false;

	SpriteList[4].Animations[1].Frames[2].BitmapName = "Server 3.bmp";
	SpriteList[4].Animations[1].Frames[2].TranslateX = 0.000;
	SpriteList[4].Animations[1].Frames[2].TranslateY = 0.000;
	SpriteList[4].Animations[1].Frames[2].Delay = 21;
	SpriteList[4].Animations[1].Frames[2].Width = 30;
	SpriteList[4].Animations[1].Frames[2].Height = 30;
	SpriteList[4].Animations[1].Frames[2].Transparency = RGB(240,240,240);
	SpriteList[4].Animations[1].Frames[2].hFlip = false;
	SpriteList[4].Animations[1].Frames[2].vFlip = false;
	SpriteList[4].Animations[1].Frames[2].zRotation = 0;
	SpriteList[4].Animations[1].Frames[2].HotSpot[0].x = 15;
	SpriteList[4].Animations[1].Frames[2].HotSpot[0].y = 15;
	::SetRect( &SpriteList[4].Animations[1].Frames[2].BBox, 0, 0, 29,29);
	SpriteList[4].Animations[1].Frames[2].centerX = 15;
	SpriteList[4].Animations[1].Frames[2].centerY = 15;
	SpriteList[4].Animations[1].Frames[2].PegRegistered = false;
	SpriteList[4].Animations[1].Frames[2].useTransparency = false;


	SpriteList[4].Animations[2].TotalFrames=1;
	SpriteList[4].Animations[2].ConnectTo = 0;
	SpriteList[4].Animations[2].Frames = new FrameElem[1];

	SpriteList[4].Animations[2].Frames[0].BitmapName = "Door 1.bmp";
	SpriteList[4].Animations[2].Frames[0].TranslateX = 0.000;
	SpriteList[4].Animations[2].Frames[0].TranslateY = 0.000;
	SpriteList[4].Animations[2].Frames[0].Delay = 1;
	SpriteList[4].Animations[2].Frames[0].Width = 30;
	SpriteList[4].Animations[2].Frames[0].Height = 30;
	SpriteList[4].Animations[2].Frames[0].Transparency = RGB(240,240,240);
	SpriteList[4].Animations[2].Frames[0].hFlip = false;
	SpriteList[4].Animations[2].Frames[0].vFlip = false;
	SpriteList[4].Animations[2].Frames[0].zRotation = 0;
	SpriteList[4].Animations[2].Frames[0].HotSpot[0].x = 15;
	SpriteList[4].Animations[2].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[4].Animations[2].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[4].Animations[2].Frames[0].centerX = 15;
	SpriteList[4].Animations[2].Frames[0].centerY = 15;
	SpriteList[4].Animations[2].Frames[0].PegRegistered = false;
	SpriteList[4].Animations[2].Frames[0].useTransparency = false;


	SpriteList[4].Animations[3].TotalFrames=1;
	SpriteList[4].Animations[3].ConnectTo = 0;
	SpriteList[4].Animations[3].Frames = new FrameElem[1];

	SpriteList[4].Animations[3].Frames[0].BitmapName = "Door 2.bmp";
	SpriteList[4].Animations[3].Frames[0].TranslateX = 0.000;
	SpriteList[4].Animations[3].Frames[0].TranslateY = 0.000;
	SpriteList[4].Animations[3].Frames[0].Delay = 1;
	SpriteList[4].Animations[3].Frames[0].Width = 30;
	SpriteList[4].Animations[3].Frames[0].Height = 30;
	SpriteList[4].Animations[3].Frames[0].Transparency = RGB(240,240,240);
	SpriteList[4].Animations[3].Frames[0].hFlip = false;
	SpriteList[4].Animations[3].Frames[0].vFlip = false;
	SpriteList[4].Animations[3].Frames[0].zRotation = 0;
	SpriteList[4].Animations[3].Frames[0].HotSpot[0].x = 15;
	SpriteList[4].Animations[3].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[4].Animations[3].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[4].Animations[3].Frames[0].centerX = 15;
	SpriteList[4].Animations[3].Frames[0].centerY = 15;
	SpriteList[4].Animations[3].Frames[0].PegRegistered = false;
	SpriteList[4].Animations[3].Frames[0].useTransparency = false;


	SpriteList[4].Animations[4].TotalFrames=1;
	SpriteList[4].Animations[4].ConnectTo = 0;
	SpriteList[4].Animations[4].Frames = new FrameElem[1];

	SpriteList[4].Animations[4].Frames[0].BitmapName = "Bed 1.bmp";
	SpriteList[4].Animations[4].Frames[0].TranslateX = 0.000;
	SpriteList[4].Animations[4].Frames[0].TranslateY = 0.000;
	SpriteList[4].Animations[4].Frames[0].Delay = 1;
	SpriteList[4].Animations[4].Frames[0].Width = 30;
	SpriteList[4].Animations[4].Frames[0].Height = 30;
	SpriteList[4].Animations[4].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[4].Animations[4].Frames[0].hFlip = false;
	SpriteList[4].Animations[4].Frames[0].vFlip = false;
	SpriteList[4].Animations[4].Frames[0].zRotation = 0;
	SpriteList[4].Animations[4].Frames[0].HotSpot[0].x = 15;
	SpriteList[4].Animations[4].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[4].Animations[4].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[4].Animations[4].Frames[0].centerX = 15;
	SpriteList[4].Animations[4].Frames[0].centerY = 15;
	SpriteList[4].Animations[4].Frames[0].PegRegistered = false;
	SpriteList[4].Animations[4].Frames[0].useTransparency = true;


	SpriteList[4].Animations[5].TotalFrames=1;
	SpriteList[4].Animations[5].ConnectTo = 0;
	SpriteList[4].Animations[5].Frames = new FrameElem[1];

	SpriteList[4].Animations[5].Frames[0].BitmapName = "Bed 2.bmp";
	SpriteList[4].Animations[5].Frames[0].TranslateX = 0.000;
	SpriteList[4].Animations[5].Frames[0].TranslateY = 0.000;
	SpriteList[4].Animations[5].Frames[0].Delay = 1;
	SpriteList[4].Animations[5].Frames[0].Width = 30;
	SpriteList[4].Animations[5].Frames[0].Height = 30;
	SpriteList[4].Animations[5].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[4].Animations[5].Frames[0].hFlip = false;
	SpriteList[4].Animations[5].Frames[0].vFlip = false;
	SpriteList[4].Animations[5].Frames[0].zRotation = 0;
	SpriteList[4].Animations[5].Frames[0].HotSpot[0].x = 15;
	SpriteList[4].Animations[5].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[4].Animations[5].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[4].Animations[5].Frames[0].centerX = 15;
	SpriteList[4].Animations[5].Frames[0].centerY = 15;
	SpriteList[4].Animations[5].Frames[0].PegRegistered = false;
	SpriteList[4].Animations[5].Frames[0].useTransparency = true;


	SpriteList[4].Animations[6].TotalFrames=1;
	SpriteList[4].Animations[6].ConnectTo = 0;
	SpriteList[4].Animations[6].Frames = new FrameElem[1];

	SpriteList[4].Animations[6].Frames[0].BitmapName = "Bed 3.bmp";
	SpriteList[4].Animations[6].Frames[0].TranslateX = 0.000;
	SpriteList[4].Animations[6].Frames[0].TranslateY = 0.000;
	SpriteList[4].Animations[6].Frames[0].Delay = 1;
	SpriteList[4].Animations[6].Frames[0].Width = 30;
	SpriteList[4].Animations[6].Frames[0].Height = 30;
	SpriteList[4].Animations[6].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[4].Animations[6].Frames[0].hFlip = false;
	SpriteList[4].Animations[6].Frames[0].vFlip = false;
	SpriteList[4].Animations[6].Frames[0].zRotation = 0;
	SpriteList[4].Animations[6].Frames[0].HotSpot[0].x = 15;
	SpriteList[4].Animations[6].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[4].Animations[6].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[4].Animations[6].Frames[0].centerX = 15;
	SpriteList[4].Animations[6].Frames[0].centerY = 15;
	SpriteList[4].Animations[6].Frames[0].PegRegistered = false;
	SpriteList[4].Animations[6].Frames[0].useTransparency = true;



	SpriteList[0].TotalAnimations = 8;
	SpriteList[0].Animations = new AnimationElem[8];

	SpriteList[0].Animations[0].TotalFrames=4;
	SpriteList[0].Animations[0].ConnectTo = 0;
	SpriteList[0].Animations[0].Frames = new FrameElem[4];

	SpriteList[0].Animations[0].Frames[0].BitmapName = "SpaceMan Left 1.bmp";
	SpriteList[0].Animations[0].Frames[0].TranslateX = 0.000;
	SpriteList[0].Animations[0].Frames[0].TranslateY = 0.000;
	SpriteList[0].Animations[0].Frames[0].Delay = 7;
	SpriteList[0].Animations[0].Frames[0].Width = 30;
	SpriteList[0].Animations[0].Frames[0].Height = 30;
	SpriteList[0].Animations[0].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[0].Animations[0].Frames[0].hFlip = false;
	SpriteList[0].Animations[0].Frames[0].vFlip = false;
	SpriteList[0].Animations[0].Frames[0].zRotation = 0;
	SpriteList[0].Animations[0].Frames[0].HotSpot[0].x = 15;
	SpriteList[0].Animations[0].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[0].Animations[0].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[0].Animations[0].Frames[0].centerX = 15;
	SpriteList[0].Animations[0].Frames[0].centerY = 15;
	SpriteList[0].Animations[0].Frames[0].PegRegistered = false;
	SpriteList[0].Animations[0].Frames[0].useTransparency = true;

	SpriteList[0].Animations[0].Frames[1].BitmapName = "SpaceMan Left 2.bmp";
	SpriteList[0].Animations[0].Frames[1].TranslateX = 0.000;
	SpriteList[0].Animations[0].Frames[1].TranslateY = 0.000;
	SpriteList[0].Animations[0].Frames[1].Delay = 7;
	SpriteList[0].Animations[0].Frames[1].Width = 30;
	SpriteList[0].Animations[0].Frames[1].Height = 30;
	SpriteList[0].Animations[0].Frames[1].Transparency = RGB(255,255,255);
	SpriteList[0].Animations[0].Frames[1].hFlip = false;
	SpriteList[0].Animations[0].Frames[1].vFlip = false;
	SpriteList[0].Animations[0].Frames[1].zRotation = 0;
	SpriteList[0].Animations[0].Frames[1].HotSpot[0].x = 15;
	SpriteList[0].Animations[0].Frames[1].HotSpot[0].y = 15;
	::SetRect( &SpriteList[0].Animations[0].Frames[1].BBox, 0, 0, 29,29);
	SpriteList[0].Animations[0].Frames[1].centerX = 15;
	SpriteList[0].Animations[0].Frames[1].centerY = 15;
	SpriteList[0].Animations[0].Frames[1].PegRegistered = false;
	SpriteList[0].Animations[0].Frames[1].useTransparency = true;

	SpriteList[0].Animations[0].Frames[2].BitmapName = "SpaceMan Left 3.bmp";
	SpriteList[0].Animations[0].Frames[2].TranslateX = 0.000;
	SpriteList[0].Animations[0].Frames[2].TranslateY = 0.000;
	SpriteList[0].Animations[0].Frames[2].Delay = 7;
	SpriteList[0].Animations[0].Frames[2].Width = 30;
	SpriteList[0].Animations[0].Frames[2].Height = 30;
	SpriteList[0].Animations[0].Frames[2].Transparency = RGB(255,255,255);
	SpriteList[0].Animations[0].Frames[2].hFlip = false;
	SpriteList[0].Animations[0].Frames[2].vFlip = false;
	SpriteList[0].Animations[0].Frames[2].zRotation = 0;
	SpriteList[0].Animations[0].Frames[2].HotSpot[0].x = 15;
	SpriteList[0].Animations[0].Frames[2].HotSpot[0].y = 15;
	::SetRect( &SpriteList[0].Animations[0].Frames[2].BBox, 0, 0, 29,29);
	SpriteList[0].Animations[0].Frames[2].centerX = 15;
	SpriteList[0].Animations[0].Frames[2].centerY = 15;
	SpriteList[0].Animations[0].Frames[2].PegRegistered = false;
	SpriteList[0].Animations[0].Frames[2].useTransparency = true;

	SpriteList[0].Animations[0].Frames[3].BitmapName = "SpaceMan Left 2.bmp";
	SpriteList[0].Animations[0].Frames[3].TranslateX = 0.000;
	SpriteList[0].Animations[0].Frames[3].TranslateY = 0.000;
	SpriteList[0].Animations[0].Frames[3].Delay = 7;
	SpriteList[0].Animations[0].Frames[3].Width = 30;
	SpriteList[0].Animations[0].Frames[3].Height = 30;
	SpriteList[0].Animations[0].Frames[3].Transparency = RGB(255,255,255);
	SpriteList[0].Animations[0].Frames[3].hFlip = false;
	SpriteList[0].Animations[0].Frames[3].vFlip = false;
	SpriteList[0].Animations[0].Frames[3].zRotation = 0;
	SpriteList[0].Animations[0].Frames[3].HotSpot[0].x = 15;
	SpriteList[0].Animations[0].Frames[3].HotSpot[0].y = 15;
	::SetRect( &SpriteList[0].Animations[0].Frames[3].BBox, 0, 0, 29,29);
	SpriteList[0].Animations[0].Frames[3].centerX = 15;
	SpriteList[0].Animations[0].Frames[3].centerY = 15;
	SpriteList[0].Animations[0].Frames[3].PegRegistered = false;
	SpriteList[0].Animations[0].Frames[3].useTransparency = true;


	SpriteList[0].Animations[1].TotalFrames=4;
	SpriteList[0].Animations[1].ConnectTo = 0;
	SpriteList[0].Animations[1].Frames = new FrameElem[4];

	SpriteList[0].Animations[1].Frames[0].BitmapName = "SpaceMan Right 1.bmp";
	SpriteList[0].Animations[1].Frames[0].TranslateX = 0.000;
	SpriteList[0].Animations[1].Frames[0].TranslateY = 0.000;
	SpriteList[0].Animations[1].Frames[0].Delay = 7;
	SpriteList[0].Animations[1].Frames[0].Width = 30;
	SpriteList[0].Animations[1].Frames[0].Height = 30;
	SpriteList[0].Animations[1].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[0].Animations[1].Frames[0].hFlip = false;
	SpriteList[0].Animations[1].Frames[0].vFlip = false;
	SpriteList[0].Animations[1].Frames[0].zRotation = 0;
	SpriteList[0].Animations[1].Frames[0].HotSpot[0].x = 15;
	SpriteList[0].Animations[1].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[0].Animations[1].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[0].Animations[1].Frames[0].centerX = 15;
	SpriteList[0].Animations[1].Frames[0].centerY = 15;
	SpriteList[0].Animations[1].Frames[0].PegRegistered = false;
	SpriteList[0].Animations[1].Frames[0].useTransparency = true;

	SpriteList[0].Animations[1].Frames[1].BitmapName = "SpaceMan Right 2.bmp";
	SpriteList[0].Animations[1].Frames[1].TranslateX = 0.000;
	SpriteList[0].Animations[1].Frames[1].TranslateY = 0.000;
	SpriteList[0].Animations[1].Frames[1].Delay = 7;
	SpriteList[0].Animations[1].Frames[1].Width = 30;
	SpriteList[0].Animations[1].Frames[1].Height = 30;
	SpriteList[0].Animations[1].Frames[1].Transparency = RGB(255,255,255);
	SpriteList[0].Animations[1].Frames[1].hFlip = false;
	SpriteList[0].Animations[1].Frames[1].vFlip = false;
	SpriteList[0].Animations[1].Frames[1].zRotation = 0;
	SpriteList[0].Animations[1].Frames[1].HotSpot[0].x = 15;
	SpriteList[0].Animations[1].Frames[1].HotSpot[0].y = 15;
	::SetRect( &SpriteList[0].Animations[1].Frames[1].BBox, 0, 0, 29,29);
	SpriteList[0].Animations[1].Frames[1].centerX = 15;
	SpriteList[0].Animations[1].Frames[1].centerY = 15;
	SpriteList[0].Animations[1].Frames[1].PegRegistered = false;
	SpriteList[0].Animations[1].Frames[1].useTransparency = true;

	SpriteList[0].Animations[1].Frames[2].BitmapName = "SpaceMan Right 3.bmp";
	SpriteList[0].Animations[1].Frames[2].TranslateX = 0.000;
	SpriteList[0].Animations[1].Frames[2].TranslateY = 0.000;
	SpriteList[0].Animations[1].Frames[2].Delay = 7;
	SpriteList[0].Animations[1].Frames[2].Width = 30;
	SpriteList[0].Animations[1].Frames[2].Height = 30;
	SpriteList[0].Animations[1].Frames[2].Transparency = RGB(255,255,255);
	SpriteList[0].Animations[1].Frames[2].hFlip = false;
	SpriteList[0].Animations[1].Frames[2].vFlip = false;
	SpriteList[0].Animations[1].Frames[2].zRotation = 0;
	SpriteList[0].Animations[1].Frames[2].HotSpot[0].x = 15;
	SpriteList[0].Animations[1].Frames[2].HotSpot[0].y = 15;
	::SetRect( &SpriteList[0].Animations[1].Frames[2].BBox, 0, 0, 29,29);
	SpriteList[0].Animations[1].Frames[2].centerX = 15;
	SpriteList[0].Animations[1].Frames[2].centerY = 15;
	SpriteList[0].Animations[1].Frames[2].PegRegistered = false;
	SpriteList[0].Animations[1].Frames[2].useTransparency = true;

	SpriteList[0].Animations[1].Frames[3].BitmapName = "SpaceMan Right 2.bmp";
	SpriteList[0].Animations[1].Frames[3].TranslateX = 0.000;
	SpriteList[0].Animations[1].Frames[3].TranslateY = 0.000;
	SpriteList[0].Animations[1].Frames[3].Delay = 7;
	SpriteList[0].Animations[1].Frames[3].Width = 30;
	SpriteList[0].Animations[1].Frames[3].Height = 30;
	SpriteList[0].Animations[1].Frames[3].Transparency = RGB(255,255,255);
	SpriteList[0].Animations[1].Frames[3].hFlip = false;
	SpriteList[0].Animations[1].Frames[3].vFlip = false;
	SpriteList[0].Animations[1].Frames[3].zRotation = 0;
	SpriteList[0].Animations[1].Frames[3].HotSpot[0].x = 15;
	SpriteList[0].Animations[1].Frames[3].HotSpot[0].y = 15;
	::SetRect( &SpriteList[0].Animations[1].Frames[3].BBox, 0, 0, 29,29);
	SpriteList[0].Animations[1].Frames[3].centerX = 15;
	SpriteList[0].Animations[1].Frames[3].centerY = 15;
	SpriteList[0].Animations[1].Frames[3].PegRegistered = false;
	SpriteList[0].Animations[1].Frames[3].useTransparency = true;


	SpriteList[0].Animations[2].TotalFrames=4;
	SpriteList[0].Animations[2].ConnectTo = 0;
	SpriteList[0].Animations[2].Frames = new FrameElem[4];

	SpriteList[0].Animations[2].Frames[0].BitmapName = "SpaceMan Back 1.bmp";
	SpriteList[0].Animations[2].Frames[0].TranslateX = 0.000;
	SpriteList[0].Animations[2].Frames[0].TranslateY = 0.000;
	SpriteList[0].Animations[2].Frames[0].Delay = 7;
	SpriteList[0].Animations[2].Frames[0].Width = 30;
	SpriteList[0].Animations[2].Frames[0].Height = 30;
	SpriteList[0].Animations[2].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[0].Animations[2].Frames[0].hFlip = false;
	SpriteList[0].Animations[2].Frames[0].vFlip = false;
	SpriteList[0].Animations[2].Frames[0].zRotation = 0;
	SpriteList[0].Animations[2].Frames[0].HotSpot[0].x = 15;
	SpriteList[0].Animations[2].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[0].Animations[2].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[0].Animations[2].Frames[0].centerX = 15;
	SpriteList[0].Animations[2].Frames[0].centerY = 15;
	SpriteList[0].Animations[2].Frames[0].PegRegistered = false;
	SpriteList[0].Animations[2].Frames[0].useTransparency = true;

	SpriteList[0].Animations[2].Frames[1].BitmapName = "SpaceMan Back 2.bmp";
	SpriteList[0].Animations[2].Frames[1].TranslateX = 0.000;
	SpriteList[0].Animations[2].Frames[1].TranslateY = 0.000;
	SpriteList[0].Animations[2].Frames[1].Delay = 7;
	SpriteList[0].Animations[2].Frames[1].Width = 30;
	SpriteList[0].Animations[2].Frames[1].Height = 30;
	SpriteList[0].Animations[2].Frames[1].Transparency = RGB(255,255,255);
	SpriteList[0].Animations[2].Frames[1].hFlip = false;
	SpriteList[0].Animations[2].Frames[1].vFlip = false;
	SpriteList[0].Animations[2].Frames[1].zRotation = 0;
	SpriteList[0].Animations[2].Frames[1].HotSpot[0].x = 15;
	SpriteList[0].Animations[2].Frames[1].HotSpot[0].y = 15;
	::SetRect( &SpriteList[0].Animations[2].Frames[1].BBox, 0, 0, 29,29);
	SpriteList[0].Animations[2].Frames[1].centerX = 15;
	SpriteList[0].Animations[2].Frames[1].centerY = 15;
	SpriteList[0].Animations[2].Frames[1].PegRegistered = false;
	SpriteList[0].Animations[2].Frames[1].useTransparency = true;

	SpriteList[0].Animations[2].Frames[2].BitmapName = "SpaceMan Back 3.bmp";
	SpriteList[0].Animations[2].Frames[2].TranslateX = 0.000;
	SpriteList[0].Animations[2].Frames[2].TranslateY = 0.000;
	SpriteList[0].Animations[2].Frames[2].Delay = 7;
	SpriteList[0].Animations[2].Frames[2].Width = 30;
	SpriteList[0].Animations[2].Frames[2].Height = 30;
	SpriteList[0].Animations[2].Frames[2].Transparency = RGB(255,255,255);
	SpriteList[0].Animations[2].Frames[2].hFlip = false;
	SpriteList[0].Animations[2].Frames[2].vFlip = false;
	SpriteList[0].Animations[2].Frames[2].zRotation = 0;
	SpriteList[0].Animations[2].Frames[2].HotSpot[0].x = 15;
	SpriteList[0].Animations[2].Frames[2].HotSpot[0].y = 15;
	::SetRect( &SpriteList[0].Animations[2].Frames[2].BBox, 0, 0, 29,29);
	SpriteList[0].Animations[2].Frames[2].centerX = 15;
	SpriteList[0].Animations[2].Frames[2].centerY = 15;
	SpriteList[0].Animations[2].Frames[2].PegRegistered = false;
	SpriteList[0].Animations[2].Frames[2].useTransparency = true;

	SpriteList[0].Animations[2].Frames[3].BitmapName = "SpaceMan Back 2.bmp";
	SpriteList[0].Animations[2].Frames[3].TranslateX = 0.000;
	SpriteList[0].Animations[2].Frames[3].TranslateY = 0.000;
	SpriteList[0].Animations[2].Frames[3].Delay = 7;
	SpriteList[0].Animations[2].Frames[3].Width = 30;
	SpriteList[0].Animations[2].Frames[3].Height = 30;
	SpriteList[0].Animations[2].Frames[3].Transparency = RGB(255,255,255);
	SpriteList[0].Animations[2].Frames[3].hFlip = false;
	SpriteList[0].Animations[2].Frames[3].vFlip = false;
	SpriteList[0].Animations[2].Frames[3].zRotation = 0;
	SpriteList[0].Animations[2].Frames[3].HotSpot[0].x = 15;
	SpriteList[0].Animations[2].Frames[3].HotSpot[0].y = 15;
	::SetRect( &SpriteList[0].Animations[2].Frames[3].BBox, 0, 0, 29,29);
	SpriteList[0].Animations[2].Frames[3].centerX = 15;
	SpriteList[0].Animations[2].Frames[3].centerY = 15;
	SpriteList[0].Animations[2].Frames[3].PegRegistered = false;
	SpriteList[0].Animations[2].Frames[3].useTransparency = true;


	SpriteList[0].Animations[3].TotalFrames=4;
	SpriteList[0].Animations[3].ConnectTo = 0;
	SpriteList[0].Animations[3].Frames = new FrameElem[4];

	SpriteList[0].Animations[3].Frames[0].BitmapName = "SpaceMan 1.bmp";
	SpriteList[0].Animations[3].Frames[0].TranslateX = 0.000;
	SpriteList[0].Animations[3].Frames[0].TranslateY = 0.000;
	SpriteList[0].Animations[3].Frames[0].Delay = 7;
	SpriteList[0].Animations[3].Frames[0].Width = 30;
	SpriteList[0].Animations[3].Frames[0].Height = 30;
	SpriteList[0].Animations[3].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[0].Animations[3].Frames[0].hFlip = false;
	SpriteList[0].Animations[3].Frames[0].vFlip = false;
	SpriteList[0].Animations[3].Frames[0].zRotation = 0;
	SpriteList[0].Animations[3].Frames[0].HotSpot[0].x = 15;
	SpriteList[0].Animations[3].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[0].Animations[3].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[0].Animations[3].Frames[0].centerX = 15;
	SpriteList[0].Animations[3].Frames[0].centerY = 15;
	SpriteList[0].Animations[3].Frames[0].PegRegistered = false;
	SpriteList[0].Animations[3].Frames[0].useTransparency = true;

	SpriteList[0].Animations[3].Frames[1].BitmapName = "SpaceMan 2.bmp";
	SpriteList[0].Animations[3].Frames[1].TranslateX = 0.000;
	SpriteList[0].Animations[3].Frames[1].TranslateY = 0.000;
	SpriteList[0].Animations[3].Frames[1].Delay = 7;
	SpriteList[0].Animations[3].Frames[1].Width = 30;
	SpriteList[0].Animations[3].Frames[1].Height = 30;
	SpriteList[0].Animations[3].Frames[1].Transparency = RGB(255,255,255);
	SpriteList[0].Animations[3].Frames[1].hFlip = false;
	SpriteList[0].Animations[3].Frames[1].vFlip = false;
	SpriteList[0].Animations[3].Frames[1].zRotation = 0;
	SpriteList[0].Animations[3].Frames[1].HotSpot[0].x = 15;
	SpriteList[0].Animations[3].Frames[1].HotSpot[0].y = 15;
	::SetRect( &SpriteList[0].Animations[3].Frames[1].BBox, 0, 0, 29,29);
	SpriteList[0].Animations[3].Frames[1].centerX = 15;
	SpriteList[0].Animations[3].Frames[1].centerY = 15;
	SpriteList[0].Animations[3].Frames[1].PegRegistered = false;
	SpriteList[0].Animations[3].Frames[1].useTransparency = true;

	SpriteList[0].Animations[3].Frames[2].BitmapName = "SpaceMan 3.bmp";
	SpriteList[0].Animations[3].Frames[2].TranslateX = 0.000;
	SpriteList[0].Animations[3].Frames[2].TranslateY = 0.000;
	SpriteList[0].Animations[3].Frames[2].Delay = 7;
	SpriteList[0].Animations[3].Frames[2].Width = 30;
	SpriteList[0].Animations[3].Frames[2].Height = 30;
	SpriteList[0].Animations[3].Frames[2].Transparency = RGB(255,255,255);
	SpriteList[0].Animations[3].Frames[2].hFlip = false;
	SpriteList[0].Animations[3].Frames[2].vFlip = false;
	SpriteList[0].Animations[3].Frames[2].zRotation = 0;
	SpriteList[0].Animations[3].Frames[2].HotSpot[0].x = 15;
	SpriteList[0].Animations[3].Frames[2].HotSpot[0].y = 15;
	::SetRect( &SpriteList[0].Animations[3].Frames[2].BBox, 0, 0, 29,29);
	SpriteList[0].Animations[3].Frames[2].centerX = 15;
	SpriteList[0].Animations[3].Frames[2].centerY = 15;
	SpriteList[0].Animations[3].Frames[2].PegRegistered = false;
	SpriteList[0].Animations[3].Frames[2].useTransparency = true;

	SpriteList[0].Animations[3].Frames[3].BitmapName = "SpaceMan 2.bmp";
	SpriteList[0].Animations[3].Frames[3].TranslateX = 0.000;
	SpriteList[0].Animations[3].Frames[3].TranslateY = 0.000;
	SpriteList[0].Animations[3].Frames[3].Delay = 7;
	SpriteList[0].Animations[3].Frames[3].Width = 30;
	SpriteList[0].Animations[3].Frames[3].Height = 30;
	SpriteList[0].Animations[3].Frames[3].Transparency = RGB(255,255,255);
	SpriteList[0].Animations[3].Frames[3].hFlip = false;
	SpriteList[0].Animations[3].Frames[3].vFlip = false;
	SpriteList[0].Animations[3].Frames[3].zRotation = 0;
	SpriteList[0].Animations[3].Frames[3].HotSpot[0].x = 15;
	SpriteList[0].Animations[3].Frames[3].HotSpot[0].y = 15;
	::SetRect( &SpriteList[0].Animations[3].Frames[3].BBox, 0, 0, 29,29);
	SpriteList[0].Animations[3].Frames[3].centerX = 15;
	SpriteList[0].Animations[3].Frames[3].centerY = 15;
	SpriteList[0].Animations[3].Frames[3].PegRegistered = false;
	SpriteList[0].Animations[3].Frames[3].useTransparency = true;


	SpriteList[0].Animations[4].TotalFrames=2;
	SpriteList[0].Animations[4].ConnectTo = 0;
	SpriteList[0].Animations[4].Frames = new FrameElem[2];

	SpriteList[0].Animations[4].Frames[0].BitmapName = "SpaceMan 2.bmp";
	SpriteList[0].Animations[4].Frames[0].TranslateX = 0.000;
	SpriteList[0].Animations[4].Frames[0].TranslateY = 0.000;
	SpriteList[0].Animations[4].Frames[0].Delay = 20;
	SpriteList[0].Animations[4].Frames[0].Width = 30;
	SpriteList[0].Animations[4].Frames[0].Height = 30;
	SpriteList[0].Animations[4].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[0].Animations[4].Frames[0].hFlip = false;
	SpriteList[0].Animations[4].Frames[0].vFlip = false;
	SpriteList[0].Animations[4].Frames[0].zRotation = 0;
	SpriteList[0].Animations[4].Frames[0].HotSpot[0].x = 15;
	SpriteList[0].Animations[4].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[0].Animations[4].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[0].Animations[4].Frames[0].centerX = 15;
	SpriteList[0].Animations[4].Frames[0].centerY = 15;
	SpriteList[0].Animations[4].Frames[0].PegRegistered = false;
	SpriteList[0].Animations[4].Frames[0].useTransparency = true;

	SpriteList[0].Animations[4].Frames[1].BitmapName = "SpaceMan 4.bmp";
	SpriteList[0].Animations[4].Frames[1].TranslateX = 0.000;
	SpriteList[0].Animations[4].Frames[1].TranslateY = 0.000;
	SpriteList[0].Animations[4].Frames[1].Delay = 20;
	SpriteList[0].Animations[4].Frames[1].Width = 30;
	SpriteList[0].Animations[4].Frames[1].Height = 30;
	SpriteList[0].Animations[4].Frames[1].Transparency = RGB(255,255,255);
	SpriteList[0].Animations[4].Frames[1].hFlip = false;
	SpriteList[0].Animations[4].Frames[1].vFlip = false;
	SpriteList[0].Animations[4].Frames[1].zRotation = 0;
	SpriteList[0].Animations[4].Frames[1].HotSpot[0].x = 15;
	SpriteList[0].Animations[4].Frames[1].HotSpot[0].y = 15;
	::SetRect( &SpriteList[0].Animations[4].Frames[1].BBox, 0, 0, 29,29);
	SpriteList[0].Animations[4].Frames[1].centerX = 15;
	SpriteList[0].Animations[4].Frames[1].centerY = 15;
	SpriteList[0].Animations[4].Frames[1].PegRegistered = false;
	SpriteList[0].Animations[4].Frames[1].useTransparency = true;


	SpriteList[0].Animations[5].TotalFrames=2;
	SpriteList[0].Animations[5].ConnectTo = 0;
	SpriteList[0].Animations[5].Frames = new FrameElem[2];

	SpriteList[0].Animations[5].Frames[0].BitmapName = "SpaceMan Back 2.bmp";
	SpriteList[0].Animations[5].Frames[0].TranslateX = 0.000;
	SpriteList[0].Animations[5].Frames[0].TranslateY = 0.000;
	SpriteList[0].Animations[5].Frames[0].Delay = 30;
	SpriteList[0].Animations[5].Frames[0].Width = 30;
	SpriteList[0].Animations[5].Frames[0].Height = 30;
	SpriteList[0].Animations[5].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[0].Animations[5].Frames[0].hFlip = false;
	SpriteList[0].Animations[5].Frames[0].vFlip = false;
	SpriteList[0].Animations[5].Frames[0].zRotation = 0;
	SpriteList[0].Animations[5].Frames[0].HotSpot[0].x = 15;
	SpriteList[0].Animations[5].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[0].Animations[5].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[0].Animations[5].Frames[0].centerX = 15;
	SpriteList[0].Animations[5].Frames[0].centerY = 15;
	SpriteList[0].Animations[5].Frames[0].PegRegistered = false;
	SpriteList[0].Animations[5].Frames[0].useTransparency = true;

	SpriteList[0].Animations[5].Frames[1].BitmapName = "SpaceMan Back 4.bmp";
	SpriteList[0].Animations[5].Frames[1].TranslateX = 0.000;
	SpriteList[0].Animations[5].Frames[1].TranslateY = 0.000;
	SpriteList[0].Animations[5].Frames[1].Delay = 30;
	SpriteList[0].Animations[5].Frames[1].Width = 30;
	SpriteList[0].Animations[5].Frames[1].Height = 30;
	SpriteList[0].Animations[5].Frames[1].Transparency = RGB(255,255,255);
	SpriteList[0].Animations[5].Frames[1].hFlip = false;
	SpriteList[0].Animations[5].Frames[1].vFlip = false;
	SpriteList[0].Animations[5].Frames[1].zRotation = 0;
	SpriteList[0].Animations[5].Frames[1].HotSpot[0].x = 15;
	SpriteList[0].Animations[5].Frames[1].HotSpot[0].y = 15;
	::SetRect( &SpriteList[0].Animations[5].Frames[1].BBox, 0, 0, 29,29);
	SpriteList[0].Animations[5].Frames[1].centerX = 15;
	SpriteList[0].Animations[5].Frames[1].centerY = 15;
	SpriteList[0].Animations[5].Frames[1].PegRegistered = false;
	SpriteList[0].Animations[5].Frames[1].useTransparency = true;


	SpriteList[0].Animations[6].TotalFrames=2;
	SpriteList[0].Animations[6].ConnectTo = 0;
	SpriteList[0].Animations[6].Frames = new FrameElem[2];

	SpriteList[0].Animations[6].Frames[0].BitmapName = "SpaceMan Right 2.bmp";
	SpriteList[0].Animations[6].Frames[0].TranslateX = 0.000;
	SpriteList[0].Animations[6].Frames[0].TranslateY = 0.000;
	SpriteList[0].Animations[6].Frames[0].Delay = 20;
	SpriteList[0].Animations[6].Frames[0].Width = 30;
	SpriteList[0].Animations[6].Frames[0].Height = 30;
	SpriteList[0].Animations[6].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[0].Animations[6].Frames[0].hFlip = false;
	SpriteList[0].Animations[6].Frames[0].vFlip = false;
	SpriteList[0].Animations[6].Frames[0].zRotation = 0;
	SpriteList[0].Animations[6].Frames[0].HotSpot[0].x = 15;
	SpriteList[0].Animations[6].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[0].Animations[6].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[0].Animations[6].Frames[0].centerX = 15;
	SpriteList[0].Animations[6].Frames[0].centerY = 15;
	SpriteList[0].Animations[6].Frames[0].PegRegistered = false;
	SpriteList[0].Animations[6].Frames[0].useTransparency = true;

	SpriteList[0].Animations[6].Frames[1].BitmapName = "SpaceMan Right 4.bmp";
	SpriteList[0].Animations[6].Frames[1].TranslateX = 0.000;
	SpriteList[0].Animations[6].Frames[1].TranslateY = 0.000;
	SpriteList[0].Animations[6].Frames[1].Delay = 20;
	SpriteList[0].Animations[6].Frames[1].Width = 30;
	SpriteList[0].Animations[6].Frames[1].Height = 30;
	SpriteList[0].Animations[6].Frames[1].Transparency = RGB(255,255,255);
	SpriteList[0].Animations[6].Frames[1].hFlip = false;
	SpriteList[0].Animations[6].Frames[1].vFlip = false;
	SpriteList[0].Animations[6].Frames[1].zRotation = 0;
	SpriteList[0].Animations[6].Frames[1].HotSpot[0].x = 15;
	SpriteList[0].Animations[6].Frames[1].HotSpot[0].y = 15;
	::SetRect( &SpriteList[0].Animations[6].Frames[1].BBox, 0, 0, 29,29);
	SpriteList[0].Animations[6].Frames[1].centerX = 15;
	SpriteList[0].Animations[6].Frames[1].centerY = 15;
	SpriteList[0].Animations[6].Frames[1].PegRegistered = false;
	SpriteList[0].Animations[6].Frames[1].useTransparency = true;


	SpriteList[0].Animations[7].TotalFrames=2;
	SpriteList[0].Animations[7].ConnectTo = 0;
	SpriteList[0].Animations[7].Frames = new FrameElem[2];

	SpriteList[0].Animations[7].Frames[0].BitmapName = "SpaceMan Left 2.bmp";
	SpriteList[0].Animations[7].Frames[0].TranslateX = 0.000;
	SpriteList[0].Animations[7].Frames[0].TranslateY = 0.000;
	SpriteList[0].Animations[7].Frames[0].Delay = 20;
	SpriteList[0].Animations[7].Frames[0].Width = 30;
	SpriteList[0].Animations[7].Frames[0].Height = 30;
	SpriteList[0].Animations[7].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[0].Animations[7].Frames[0].hFlip = false;
	SpriteList[0].Animations[7].Frames[0].vFlip = false;
	SpriteList[0].Animations[7].Frames[0].zRotation = 0;
	SpriteList[0].Animations[7].Frames[0].HotSpot[0].x = 15;
	SpriteList[0].Animations[7].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[0].Animations[7].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[0].Animations[7].Frames[0].centerX = 15;
	SpriteList[0].Animations[7].Frames[0].centerY = 15;
	SpriteList[0].Animations[7].Frames[0].PegRegistered = false;
	SpriteList[0].Animations[7].Frames[0].useTransparency = true;

	SpriteList[0].Animations[7].Frames[1].BitmapName = "SpaceMan Left 4.bmp";
	SpriteList[0].Animations[7].Frames[1].TranslateX = 0.000;
	SpriteList[0].Animations[7].Frames[1].TranslateY = 0.000;
	SpriteList[0].Animations[7].Frames[1].Delay = 20;
	SpriteList[0].Animations[7].Frames[1].Width = 30;
	SpriteList[0].Animations[7].Frames[1].Height = 30;
	SpriteList[0].Animations[7].Frames[1].Transparency = RGB(255,255,255);
	SpriteList[0].Animations[7].Frames[1].hFlip = false;
	SpriteList[0].Animations[7].Frames[1].vFlip = false;
	SpriteList[0].Animations[7].Frames[1].zRotation = 0;
	SpriteList[0].Animations[7].Frames[1].HotSpot[0].x = 15;
	SpriteList[0].Animations[7].Frames[1].HotSpot[0].y = 15;
	::SetRect( &SpriteList[0].Animations[7].Frames[1].BBox, 0, 0, 29,29);
	SpriteList[0].Animations[7].Frames[1].centerX = 15;
	SpriteList[0].Animations[7].Frames[1].centerY = 15;
	SpriteList[0].Animations[7].Frames[1].PegRegistered = false;
	SpriteList[0].Animations[7].Frames[1].useTransparency = true;



	SpriteList[3].TotalAnimations = 8;
	SpriteList[3].Animations = new AnimationElem[8];

	SpriteList[3].Animations[0].TotalFrames=4;
	SpriteList[3].Animations[0].ConnectTo = 0;
	SpriteList[3].Animations[0].Frames = new FrameElem[4];

	SpriteList[3].Animations[0].Frames[0].BitmapName = "Space Alien 1.bmp";
	SpriteList[3].Animations[0].Frames[0].TranslateX = 0.000;
	SpriteList[3].Animations[0].Frames[0].TranslateY = 0.000;
	SpriteList[3].Animations[0].Frames[0].Delay = 10;
	SpriteList[3].Animations[0].Frames[0].Width = 30;
	SpriteList[3].Animations[0].Frames[0].Height = 30;
	SpriteList[3].Animations[0].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[3].Animations[0].Frames[0].hFlip = false;
	SpriteList[3].Animations[0].Frames[0].vFlip = false;
	SpriteList[3].Animations[0].Frames[0].zRotation = 0;
	SpriteList[3].Animations[0].Frames[0].HotSpot[0].x = 15;
	SpriteList[3].Animations[0].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[3].Animations[0].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[3].Animations[0].Frames[0].centerX = 15;
	SpriteList[3].Animations[0].Frames[0].centerY = 15;
	SpriteList[3].Animations[0].Frames[0].PegRegistered = false;
	SpriteList[3].Animations[0].Frames[0].useTransparency = true;

	SpriteList[3].Animations[0].Frames[1].BitmapName = "Space Alien 2.bmp";
	SpriteList[3].Animations[0].Frames[1].TranslateX = 0.000;
	SpriteList[3].Animations[0].Frames[1].TranslateY = 0.000;
	SpriteList[3].Animations[0].Frames[1].Delay = 10;
	SpriteList[3].Animations[0].Frames[1].Width = 30;
	SpriteList[3].Animations[0].Frames[1].Height = 30;
	SpriteList[3].Animations[0].Frames[1].Transparency = RGB(255,255,255);
	SpriteList[3].Animations[0].Frames[1].hFlip = false;
	SpriteList[3].Animations[0].Frames[1].vFlip = false;
	SpriteList[3].Animations[0].Frames[1].zRotation = 0;
	SpriteList[3].Animations[0].Frames[1].HotSpot[0].x = 15;
	SpriteList[3].Animations[0].Frames[1].HotSpot[0].y = 15;
	::SetRect( &SpriteList[3].Animations[0].Frames[1].BBox, 0, 0, 29,29);
	SpriteList[3].Animations[0].Frames[1].centerX = 15;
	SpriteList[3].Animations[0].Frames[1].centerY = 15;
	SpriteList[3].Animations[0].Frames[1].PegRegistered = false;
	SpriteList[3].Animations[0].Frames[1].useTransparency = true;

	SpriteList[3].Animations[0].Frames[2].BitmapName = "Space Alien 3.bmp";
	SpriteList[3].Animations[0].Frames[2].TranslateX = 0.000;
	SpriteList[3].Animations[0].Frames[2].TranslateY = 0.000;
	SpriteList[3].Animations[0].Frames[2].Delay = 10;
	SpriteList[3].Animations[0].Frames[2].Width = 30;
	SpriteList[3].Animations[0].Frames[2].Height = 30;
	SpriteList[3].Animations[0].Frames[2].Transparency = RGB(255,255,255);
	SpriteList[3].Animations[0].Frames[2].hFlip = false;
	SpriteList[3].Animations[0].Frames[2].vFlip = false;
	SpriteList[3].Animations[0].Frames[2].zRotation = 0;
	SpriteList[3].Animations[0].Frames[2].HotSpot[0].x = 15;
	SpriteList[3].Animations[0].Frames[2].HotSpot[0].y = 15;
	::SetRect( &SpriteList[3].Animations[0].Frames[2].BBox, 0, 0, 29,29);
	SpriteList[3].Animations[0].Frames[2].centerX = 15;
	SpriteList[3].Animations[0].Frames[2].centerY = 15;
	SpriteList[3].Animations[0].Frames[2].PegRegistered = false;
	SpriteList[3].Animations[0].Frames[2].useTransparency = true;

	SpriteList[3].Animations[0].Frames[3].BitmapName = "Space Alien 2.bmp";
	SpriteList[3].Animations[0].Frames[3].TranslateX = 0.000;
	SpriteList[3].Animations[0].Frames[3].TranslateY = 0.000;
	SpriteList[3].Animations[0].Frames[3].Delay = 10;
	SpriteList[3].Animations[0].Frames[3].Width = 30;
	SpriteList[3].Animations[0].Frames[3].Height = 30;
	SpriteList[3].Animations[0].Frames[3].Transparency = RGB(255,255,255);
	SpriteList[3].Animations[0].Frames[3].hFlip = false;
	SpriteList[3].Animations[0].Frames[3].vFlip = false;
	SpriteList[3].Animations[0].Frames[3].zRotation = 0;
	SpriteList[3].Animations[0].Frames[3].HotSpot[0].x = 15;
	SpriteList[3].Animations[0].Frames[3].HotSpot[0].y = 15;
	::SetRect( &SpriteList[3].Animations[0].Frames[3].BBox, 0, 0, 29,29);
	SpriteList[3].Animations[0].Frames[3].centerX = 15;
	SpriteList[3].Animations[0].Frames[3].centerY = 15;
	SpriteList[3].Animations[0].Frames[3].PegRegistered = false;
	SpriteList[3].Animations[0].Frames[3].useTransparency = true;


	SpriteList[3].Animations[1].TotalFrames=4;
	SpriteList[3].Animations[1].ConnectTo = 0;
	SpriteList[3].Animations[1].Frames = new FrameElem[4];

	SpriteList[3].Animations[1].Frames[0].BitmapName = "Space Alien Left 1.bmp";
	SpriteList[3].Animations[1].Frames[0].TranslateX = 0.000;
	SpriteList[3].Animations[1].Frames[0].TranslateY = 0.000;
	SpriteList[3].Animations[1].Frames[0].Delay = 10;
	SpriteList[3].Animations[1].Frames[0].Width = 30;
	SpriteList[3].Animations[1].Frames[0].Height = 30;
	SpriteList[3].Animations[1].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[3].Animations[1].Frames[0].hFlip = false;
	SpriteList[3].Animations[1].Frames[0].vFlip = false;
	SpriteList[3].Animations[1].Frames[0].zRotation = 0;
	SpriteList[3].Animations[1].Frames[0].HotSpot[0].x = 15;
	SpriteList[3].Animations[1].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[3].Animations[1].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[3].Animations[1].Frames[0].centerX = 15;
	SpriteList[3].Animations[1].Frames[0].centerY = 15;
	SpriteList[3].Animations[1].Frames[0].PegRegistered = false;
	SpriteList[3].Animations[1].Frames[0].useTransparency = true;

	SpriteList[3].Animations[1].Frames[1].BitmapName = "Space Alien Left 2.bmp";
	SpriteList[3].Animations[1].Frames[1].TranslateX = 0.000;
	SpriteList[3].Animations[1].Frames[1].TranslateY = 0.000;
	SpriteList[3].Animations[1].Frames[1].Delay = 10;
	SpriteList[3].Animations[1].Frames[1].Width = 30;
	SpriteList[3].Animations[1].Frames[1].Height = 30;
	SpriteList[3].Animations[1].Frames[1].Transparency = RGB(255,255,255);
	SpriteList[3].Animations[1].Frames[1].hFlip = false;
	SpriteList[3].Animations[1].Frames[1].vFlip = false;
	SpriteList[3].Animations[1].Frames[1].zRotation = 0;
	SpriteList[3].Animations[1].Frames[1].HotSpot[0].x = 15;
	SpriteList[3].Animations[1].Frames[1].HotSpot[0].y = 15;
	::SetRect( &SpriteList[3].Animations[1].Frames[1].BBox, 0, 0, 29,29);
	SpriteList[3].Animations[1].Frames[1].centerX = 15;
	SpriteList[3].Animations[1].Frames[1].centerY = 15;
	SpriteList[3].Animations[1].Frames[1].PegRegistered = false;
	SpriteList[3].Animations[1].Frames[1].useTransparency = true;

	SpriteList[3].Animations[1].Frames[2].BitmapName = "Space Alien Left 3.bmp";
	SpriteList[3].Animations[1].Frames[2].TranslateX = 0.000;
	SpriteList[3].Animations[1].Frames[2].TranslateY = 0.000;
	SpriteList[3].Animations[1].Frames[2].Delay = 10;
	SpriteList[3].Animations[1].Frames[2].Width = 30;
	SpriteList[3].Animations[1].Frames[2].Height = 30;
	SpriteList[3].Animations[1].Frames[2].Transparency = RGB(255,255,255);
	SpriteList[3].Animations[1].Frames[2].hFlip = false;
	SpriteList[3].Animations[1].Frames[2].vFlip = false;
	SpriteList[3].Animations[1].Frames[2].zRotation = 0;
	SpriteList[3].Animations[1].Frames[2].HotSpot[0].x = 15;
	SpriteList[3].Animations[1].Frames[2].HotSpot[0].y = 15;
	::SetRect( &SpriteList[3].Animations[1].Frames[2].BBox, 0, 0, 29,29);
	SpriteList[3].Animations[1].Frames[2].centerX = 15;
	SpriteList[3].Animations[1].Frames[2].centerY = 15;
	SpriteList[3].Animations[1].Frames[2].PegRegistered = false;
	SpriteList[3].Animations[1].Frames[2].useTransparency = true;

	SpriteList[3].Animations[1].Frames[3].BitmapName = "Space Alien Left 2.bmp";
	SpriteList[3].Animations[1].Frames[3].TranslateX = 0.000;
	SpriteList[3].Animations[1].Frames[3].TranslateY = 0.000;
	SpriteList[3].Animations[1].Frames[3].Delay = 10;
	SpriteList[3].Animations[1].Frames[3].Width = 30;
	SpriteList[3].Animations[1].Frames[3].Height = 30;
	SpriteList[3].Animations[1].Frames[3].Transparency = RGB(255,255,255);
	SpriteList[3].Animations[1].Frames[3].hFlip = false;
	SpriteList[3].Animations[1].Frames[3].vFlip = false;
	SpriteList[3].Animations[1].Frames[3].zRotation = 0;
	SpriteList[3].Animations[1].Frames[3].HotSpot[0].x = 15;
	SpriteList[3].Animations[1].Frames[3].HotSpot[0].y = 15;
	::SetRect( &SpriteList[3].Animations[1].Frames[3].BBox, 0, 0, 29,29);
	SpriteList[3].Animations[1].Frames[3].centerX = 15;
	SpriteList[3].Animations[1].Frames[3].centerY = 15;
	SpriteList[3].Animations[1].Frames[3].PegRegistered = false;
	SpriteList[3].Animations[1].Frames[3].useTransparency = true;


	SpriteList[3].Animations[2].TotalFrames=4;
	SpriteList[3].Animations[2].ConnectTo = 0;
	SpriteList[3].Animations[2].Frames = new FrameElem[4];

	SpriteList[3].Animations[2].Frames[0].BitmapName = "Space Alien Right 1.bmp";
	SpriteList[3].Animations[2].Frames[0].TranslateX = 0.000;
	SpriteList[3].Animations[2].Frames[0].TranslateY = 0.000;
	SpriteList[3].Animations[2].Frames[0].Delay = 10;
	SpriteList[3].Animations[2].Frames[0].Width = 30;
	SpriteList[3].Animations[2].Frames[0].Height = 30;
	SpriteList[3].Animations[2].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[3].Animations[2].Frames[0].hFlip = false;
	SpriteList[3].Animations[2].Frames[0].vFlip = false;
	SpriteList[3].Animations[2].Frames[0].zRotation = 0;
	SpriteList[3].Animations[2].Frames[0].HotSpot[0].x = 15;
	SpriteList[3].Animations[2].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[3].Animations[2].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[3].Animations[2].Frames[0].centerX = 15;
	SpriteList[3].Animations[2].Frames[0].centerY = 15;
	SpriteList[3].Animations[2].Frames[0].PegRegistered = false;
	SpriteList[3].Animations[2].Frames[0].useTransparency = true;

	SpriteList[3].Animations[2].Frames[1].BitmapName = "Space Alien Right 2.bmp";
	SpriteList[3].Animations[2].Frames[1].TranslateX = 0.000;
	SpriteList[3].Animations[2].Frames[1].TranslateY = 0.000;
	SpriteList[3].Animations[2].Frames[1].Delay = 10;
	SpriteList[3].Animations[2].Frames[1].Width = 30;
	SpriteList[3].Animations[2].Frames[1].Height = 30;
	SpriteList[3].Animations[2].Frames[1].Transparency = RGB(255,255,255);
	SpriteList[3].Animations[2].Frames[1].hFlip = false;
	SpriteList[3].Animations[2].Frames[1].vFlip = false;
	SpriteList[3].Animations[2].Frames[1].zRotation = 0;
	SpriteList[3].Animations[2].Frames[1].HotSpot[0].x = 15;
	SpriteList[3].Animations[2].Frames[1].HotSpot[0].y = 15;
	::SetRect( &SpriteList[3].Animations[2].Frames[1].BBox, 0, 0, 29,29);
	SpriteList[3].Animations[2].Frames[1].centerX = 15;
	SpriteList[3].Animations[2].Frames[1].centerY = 15;
	SpriteList[3].Animations[2].Frames[1].PegRegistered = false;
	SpriteList[3].Animations[2].Frames[1].useTransparency = true;

	SpriteList[3].Animations[2].Frames[2].BitmapName = "Space Alien Right 3.bmp";
	SpriteList[3].Animations[2].Frames[2].TranslateX = 0.000;
	SpriteList[3].Animations[2].Frames[2].TranslateY = 0.000;
	SpriteList[3].Animations[2].Frames[2].Delay = 10;
	SpriteList[3].Animations[2].Frames[2].Width = 30;
	SpriteList[3].Animations[2].Frames[2].Height = 30;
	SpriteList[3].Animations[2].Frames[2].Transparency = RGB(255,255,255);
	SpriteList[3].Animations[2].Frames[2].hFlip = false;
	SpriteList[3].Animations[2].Frames[2].vFlip = false;
	SpriteList[3].Animations[2].Frames[2].zRotation = 0;
	SpriteList[3].Animations[2].Frames[2].HotSpot[0].x = 15;
	SpriteList[3].Animations[2].Frames[2].HotSpot[0].y = 15;
	::SetRect( &SpriteList[3].Animations[2].Frames[2].BBox, 0, 0, 29,29);
	SpriteList[3].Animations[2].Frames[2].centerX = 15;
	SpriteList[3].Animations[2].Frames[2].centerY = 15;
	SpriteList[3].Animations[2].Frames[2].PegRegistered = false;
	SpriteList[3].Animations[2].Frames[2].useTransparency = true;

	SpriteList[3].Animations[2].Frames[3].BitmapName = "Space Alien Right 2.bmp";
	SpriteList[3].Animations[2].Frames[3].TranslateX = 0.000;
	SpriteList[3].Animations[2].Frames[3].TranslateY = 0.000;
	SpriteList[3].Animations[2].Frames[3].Delay = 10;
	SpriteList[3].Animations[2].Frames[3].Width = 30;
	SpriteList[3].Animations[2].Frames[3].Height = 30;
	SpriteList[3].Animations[2].Frames[3].Transparency = RGB(255,255,255);
	SpriteList[3].Animations[2].Frames[3].hFlip = false;
	SpriteList[3].Animations[2].Frames[3].vFlip = false;
	SpriteList[3].Animations[2].Frames[3].zRotation = 0;
	SpriteList[3].Animations[2].Frames[3].HotSpot[0].x = 15;
	SpriteList[3].Animations[2].Frames[3].HotSpot[0].y = 15;
	::SetRect( &SpriteList[3].Animations[2].Frames[3].BBox, 0, 0, 29,29);
	SpriteList[3].Animations[2].Frames[3].centerX = 15;
	SpriteList[3].Animations[2].Frames[3].centerY = 15;
	SpriteList[3].Animations[2].Frames[3].PegRegistered = false;
	SpriteList[3].Animations[2].Frames[3].useTransparency = true;


	SpriteList[3].Animations[3].TotalFrames=4;
	SpriteList[3].Animations[3].ConnectTo = 0;
	SpriteList[3].Animations[3].Frames = new FrameElem[4];

	SpriteList[3].Animations[3].Frames[0].BitmapName = "Space Alien Back 1.bmp";
	SpriteList[3].Animations[3].Frames[0].TranslateX = 0.000;
	SpriteList[3].Animations[3].Frames[0].TranslateY = 0.000;
	SpriteList[3].Animations[3].Frames[0].Delay = 10;
	SpriteList[3].Animations[3].Frames[0].Width = 30;
	SpriteList[3].Animations[3].Frames[0].Height = 30;
	SpriteList[3].Animations[3].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[3].Animations[3].Frames[0].hFlip = false;
	SpriteList[3].Animations[3].Frames[0].vFlip = false;
	SpriteList[3].Animations[3].Frames[0].zRotation = 0;
	SpriteList[3].Animations[3].Frames[0].HotSpot[0].x = 15;
	SpriteList[3].Animations[3].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[3].Animations[3].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[3].Animations[3].Frames[0].centerX = 15;
	SpriteList[3].Animations[3].Frames[0].centerY = 15;
	SpriteList[3].Animations[3].Frames[0].PegRegistered = false;
	SpriteList[3].Animations[3].Frames[0].useTransparency = true;

	SpriteList[3].Animations[3].Frames[1].BitmapName = "Space Alien Back 2.bmp";
	SpriteList[3].Animations[3].Frames[1].TranslateX = 0.000;
	SpriteList[3].Animations[3].Frames[1].TranslateY = 0.000;
	SpriteList[3].Animations[3].Frames[1].Delay = 10;
	SpriteList[3].Animations[3].Frames[1].Width = 30;
	SpriteList[3].Animations[3].Frames[1].Height = 30;
	SpriteList[3].Animations[3].Frames[1].Transparency = RGB(255,255,255);
	SpriteList[3].Animations[3].Frames[1].hFlip = false;
	SpriteList[3].Animations[3].Frames[1].vFlip = false;
	SpriteList[3].Animations[3].Frames[1].zRotation = 0;
	SpriteList[3].Animations[3].Frames[1].HotSpot[0].x = 15;
	SpriteList[3].Animations[3].Frames[1].HotSpot[0].y = 15;
	::SetRect( &SpriteList[3].Animations[3].Frames[1].BBox, 0, 0, 29,29);
	SpriteList[3].Animations[3].Frames[1].centerX = 15;
	SpriteList[3].Animations[3].Frames[1].centerY = 15;
	SpriteList[3].Animations[3].Frames[1].PegRegistered = false;
	SpriteList[3].Animations[3].Frames[1].useTransparency = true;

	SpriteList[3].Animations[3].Frames[2].BitmapName = "Space Alien Back 3.bmp";
	SpriteList[3].Animations[3].Frames[2].TranslateX = 0.000;
	SpriteList[3].Animations[3].Frames[2].TranslateY = 0.000;
	SpriteList[3].Animations[3].Frames[2].Delay = 10;
	SpriteList[3].Animations[3].Frames[2].Width = 30;
	SpriteList[3].Animations[3].Frames[2].Height = 30;
	SpriteList[3].Animations[3].Frames[2].Transparency = RGB(255,255,255);
	SpriteList[3].Animations[3].Frames[2].hFlip = false;
	SpriteList[3].Animations[3].Frames[2].vFlip = false;
	SpriteList[3].Animations[3].Frames[2].zRotation = 0;
	SpriteList[3].Animations[3].Frames[2].HotSpot[0].x = 15;
	SpriteList[3].Animations[3].Frames[2].HotSpot[0].y = 15;
	::SetRect( &SpriteList[3].Animations[3].Frames[2].BBox, 0, 0, 29,29);
	SpriteList[3].Animations[3].Frames[2].centerX = 15;
	SpriteList[3].Animations[3].Frames[2].centerY = 15;
	SpriteList[3].Animations[3].Frames[2].PegRegistered = false;
	SpriteList[3].Animations[3].Frames[2].useTransparency = true;

	SpriteList[3].Animations[3].Frames[3].BitmapName = "Space Alien Back 2.bmp";
	SpriteList[3].Animations[3].Frames[3].TranslateX = 0.000;
	SpriteList[3].Animations[3].Frames[3].TranslateY = 0.000;
	SpriteList[3].Animations[3].Frames[3].Delay = 10;
	SpriteList[3].Animations[3].Frames[3].Width = 30;
	SpriteList[3].Animations[3].Frames[3].Height = 30;
	SpriteList[3].Animations[3].Frames[3].Transparency = RGB(255,255,255);
	SpriteList[3].Animations[3].Frames[3].hFlip = false;
	SpriteList[3].Animations[3].Frames[3].vFlip = false;
	SpriteList[3].Animations[3].Frames[3].zRotation = 0;
	SpriteList[3].Animations[3].Frames[3].HotSpot[0].x = 15;
	SpriteList[3].Animations[3].Frames[3].HotSpot[0].y = 15;
	::SetRect( &SpriteList[3].Animations[3].Frames[3].BBox, 0, 0, 29,29);
	SpriteList[3].Animations[3].Frames[3].centerX = 15;
	SpriteList[3].Animations[3].Frames[3].centerY = 15;
	SpriteList[3].Animations[3].Frames[3].PegRegistered = false;
	SpriteList[3].Animations[3].Frames[3].useTransparency = true;


	SpriteList[3].Animations[4].TotalFrames=2;
	SpriteList[3].Animations[4].ConnectTo = 0;
	SpriteList[3].Animations[4].Frames = new FrameElem[2];

	SpriteList[3].Animations[4].Frames[0].BitmapName = "Space Alien 2.bmp";
	SpriteList[3].Animations[4].Frames[0].TranslateX = 0.000;
	SpriteList[3].Animations[4].Frames[0].TranslateY = 0.000;
	SpriteList[3].Animations[4].Frames[0].Delay = 20;
	SpriteList[3].Animations[4].Frames[0].Width = 30;
	SpriteList[3].Animations[4].Frames[0].Height = 30;
	SpriteList[3].Animations[4].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[3].Animations[4].Frames[0].hFlip = false;
	SpriteList[3].Animations[4].Frames[0].vFlip = false;
	SpriteList[3].Animations[4].Frames[0].zRotation = 0;
	SpriteList[3].Animations[4].Frames[0].HotSpot[0].x = 15;
	SpriteList[3].Animations[4].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[3].Animations[4].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[3].Animations[4].Frames[0].centerX = 15;
	SpriteList[3].Animations[4].Frames[0].centerY = 15;
	SpriteList[3].Animations[4].Frames[0].PegRegistered = false;
	SpriteList[3].Animations[4].Frames[0].useTransparency = true;

	SpriteList[3].Animations[4].Frames[1].BitmapName = "Space Alien 4.bmp";
	SpriteList[3].Animations[4].Frames[1].TranslateX = 0.000;
	SpriteList[3].Animations[4].Frames[1].TranslateY = 0.000;
	SpriteList[3].Animations[4].Frames[1].Delay = 20;
	SpriteList[3].Animations[4].Frames[1].Width = 30;
	SpriteList[3].Animations[4].Frames[1].Height = 30;
	SpriteList[3].Animations[4].Frames[1].Transparency = RGB(255,255,255);
	SpriteList[3].Animations[4].Frames[1].hFlip = false;
	SpriteList[3].Animations[4].Frames[1].vFlip = false;
	SpriteList[3].Animations[4].Frames[1].zRotation = 0;
	SpriteList[3].Animations[4].Frames[1].HotSpot[0].x = 15;
	SpriteList[3].Animations[4].Frames[1].HotSpot[0].y = 15;
	::SetRect( &SpriteList[3].Animations[4].Frames[1].BBox, 0, 0, 29,29);
	SpriteList[3].Animations[4].Frames[1].centerX = 15;
	SpriteList[3].Animations[4].Frames[1].centerY = 15;
	SpriteList[3].Animations[4].Frames[1].PegRegistered = false;
	SpriteList[3].Animations[4].Frames[1].useTransparency = true;


	SpriteList[3].Animations[5].TotalFrames=2;
	SpriteList[3].Animations[5].ConnectTo = 0;
	SpriteList[3].Animations[5].Frames = new FrameElem[2];

	SpriteList[3].Animations[5].Frames[0].BitmapName = "Space Alien Back 2.bmp";
	SpriteList[3].Animations[5].Frames[0].TranslateX = 0.000;
	SpriteList[3].Animations[5].Frames[0].TranslateY = 0.000;
	SpriteList[3].Animations[5].Frames[0].Delay = 20;
	SpriteList[3].Animations[5].Frames[0].Width = 30;
	SpriteList[3].Animations[5].Frames[0].Height = 30;
	SpriteList[3].Animations[5].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[3].Animations[5].Frames[0].hFlip = false;
	SpriteList[3].Animations[5].Frames[0].vFlip = false;
	SpriteList[3].Animations[5].Frames[0].zRotation = 0;
	SpriteList[3].Animations[5].Frames[0].HotSpot[0].x = 15;
	SpriteList[3].Animations[5].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[3].Animations[5].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[3].Animations[5].Frames[0].centerX = 15;
	SpriteList[3].Animations[5].Frames[0].centerY = 15;
	SpriteList[3].Animations[5].Frames[0].PegRegistered = false;
	SpriteList[3].Animations[5].Frames[0].useTransparency = true;

	SpriteList[3].Animations[5].Frames[1].BitmapName = "Space Alien Back 4.bmp";
	SpriteList[3].Animations[5].Frames[1].TranslateX = 0.000;
	SpriteList[3].Animations[5].Frames[1].TranslateY = 0.000;
	SpriteList[3].Animations[5].Frames[1].Delay = 20;
	SpriteList[3].Animations[5].Frames[1].Width = 30;
	SpriteList[3].Animations[5].Frames[1].Height = 30;
	SpriteList[3].Animations[5].Frames[1].Transparency = RGB(255,255,255);
	SpriteList[3].Animations[5].Frames[1].hFlip = false;
	SpriteList[3].Animations[5].Frames[1].vFlip = false;
	SpriteList[3].Animations[5].Frames[1].zRotation = 0;
	SpriteList[3].Animations[5].Frames[1].HotSpot[0].x = 15;
	SpriteList[3].Animations[5].Frames[1].HotSpot[0].y = 15;
	::SetRect( &SpriteList[3].Animations[5].Frames[1].BBox, 0, 0, 29,29);
	SpriteList[3].Animations[5].Frames[1].centerX = 15;
	SpriteList[3].Animations[5].Frames[1].centerY = 15;
	SpriteList[3].Animations[5].Frames[1].PegRegistered = false;
	SpriteList[3].Animations[5].Frames[1].useTransparency = true;


	SpriteList[3].Animations[6].TotalFrames=2;
	SpriteList[3].Animations[6].ConnectTo = 0;
	SpriteList[3].Animations[6].Frames = new FrameElem[2];

	SpriteList[3].Animations[6].Frames[0].BitmapName = "Space Alien Left 2.bmp";
	SpriteList[3].Animations[6].Frames[0].TranslateX = 0.000;
	SpriteList[3].Animations[6].Frames[0].TranslateY = 0.000;
	SpriteList[3].Animations[6].Frames[0].Delay = 20;
	SpriteList[3].Animations[6].Frames[0].Width = 30;
	SpriteList[3].Animations[6].Frames[0].Height = 30;
	SpriteList[3].Animations[6].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[3].Animations[6].Frames[0].hFlip = false;
	SpriteList[3].Animations[6].Frames[0].vFlip = false;
	SpriteList[3].Animations[6].Frames[0].zRotation = 0;
	SpriteList[3].Animations[6].Frames[0].HotSpot[0].x = 15;
	SpriteList[3].Animations[6].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[3].Animations[6].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[3].Animations[6].Frames[0].centerX = 15;
	SpriteList[3].Animations[6].Frames[0].centerY = 15;
	SpriteList[3].Animations[6].Frames[0].PegRegistered = false;
	SpriteList[3].Animations[6].Frames[0].useTransparency = true;

	SpriteList[3].Animations[6].Frames[1].BitmapName = "Space Alien Left 4.bmp";
	SpriteList[3].Animations[6].Frames[1].TranslateX = 0.000;
	SpriteList[3].Animations[6].Frames[1].TranslateY = 0.000;
	SpriteList[3].Animations[6].Frames[1].Delay = 20;
	SpriteList[3].Animations[6].Frames[1].Width = 30;
	SpriteList[3].Animations[6].Frames[1].Height = 30;
	SpriteList[3].Animations[6].Frames[1].Transparency = RGB(255,255,255);
	SpriteList[3].Animations[6].Frames[1].hFlip = false;
	SpriteList[3].Animations[6].Frames[1].vFlip = false;
	SpriteList[3].Animations[6].Frames[1].zRotation = 0;
	SpriteList[3].Animations[6].Frames[1].HotSpot[0].x = 15;
	SpriteList[3].Animations[6].Frames[1].HotSpot[0].y = 15;
	::SetRect( &SpriteList[3].Animations[6].Frames[1].BBox, 0, 0, 29,29);
	SpriteList[3].Animations[6].Frames[1].centerX = 15;
	SpriteList[3].Animations[6].Frames[1].centerY = 15;
	SpriteList[3].Animations[6].Frames[1].PegRegistered = false;
	SpriteList[3].Animations[6].Frames[1].useTransparency = true;


	SpriteList[3].Animations[7].TotalFrames=2;
	SpriteList[3].Animations[7].ConnectTo = 0;
	SpriteList[3].Animations[7].Frames = new FrameElem[2];

	SpriteList[3].Animations[7].Frames[0].BitmapName = "Space Alien Right 2.bmp";
	SpriteList[3].Animations[7].Frames[0].TranslateX = 0.000;
	SpriteList[3].Animations[7].Frames[0].TranslateY = 0.000;
	SpriteList[3].Animations[7].Frames[0].Delay = 20;
	SpriteList[3].Animations[7].Frames[0].Width = 30;
	SpriteList[3].Animations[7].Frames[0].Height = 30;
	SpriteList[3].Animations[7].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[3].Animations[7].Frames[0].hFlip = false;
	SpriteList[3].Animations[7].Frames[0].vFlip = false;
	SpriteList[3].Animations[7].Frames[0].zRotation = 0;
	SpriteList[3].Animations[7].Frames[0].HotSpot[0].x = 15;
	SpriteList[3].Animations[7].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[3].Animations[7].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[3].Animations[7].Frames[0].centerX = 15;
	SpriteList[3].Animations[7].Frames[0].centerY = 15;
	SpriteList[3].Animations[7].Frames[0].PegRegistered = false;
	SpriteList[3].Animations[7].Frames[0].useTransparency = true;

	SpriteList[3].Animations[7].Frames[1].BitmapName = "Space Alien Right 4.bmp";
	SpriteList[3].Animations[7].Frames[1].TranslateX = 0.000;
	SpriteList[3].Animations[7].Frames[1].TranslateY = 0.000;
	SpriteList[3].Animations[7].Frames[1].Delay = 20;
	SpriteList[3].Animations[7].Frames[1].Width = 30;
	SpriteList[3].Animations[7].Frames[1].Height = 30;
	SpriteList[3].Animations[7].Frames[1].Transparency = RGB(255,255,255);
	SpriteList[3].Animations[7].Frames[1].hFlip = false;
	SpriteList[3].Animations[7].Frames[1].vFlip = false;
	SpriteList[3].Animations[7].Frames[1].zRotation = 0;
	SpriteList[3].Animations[7].Frames[1].HotSpot[0].x = 15;
	SpriteList[3].Animations[7].Frames[1].HotSpot[0].y = 15;
	::SetRect( &SpriteList[3].Animations[7].Frames[1].BBox, 0, 0, 29,29);
	SpriteList[3].Animations[7].Frames[1].centerX = 15;
	SpriteList[3].Animations[7].Frames[1].centerY = 15;
	SpriteList[3].Animations[7].Frames[1].PegRegistered = false;
	SpriteList[3].Animations[7].Frames[1].useTransparency = true;



	SpriteList[2].TotalAnimations = 8;
	SpriteList[2].Animations = new AnimationElem[8];

	SpriteList[2].Animations[0].TotalFrames=4;
	SpriteList[2].Animations[0].ConnectTo = 0;
	SpriteList[2].Animations[0].Frames = new FrameElem[4];

	SpriteList[2].Animations[0].Frames[0].BitmapName = "Green Alien 1.bmp";
	SpriteList[2].Animations[0].Frames[0].TranslateX = 0.000;
	SpriteList[2].Animations[0].Frames[0].TranslateY = 0.000;
	SpriteList[2].Animations[0].Frames[0].Delay = 10;
	SpriteList[2].Animations[0].Frames[0].Width = 30;
	SpriteList[2].Animations[0].Frames[0].Height = 30;
	SpriteList[2].Animations[0].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[2].Animations[0].Frames[0].hFlip = false;
	SpriteList[2].Animations[0].Frames[0].vFlip = false;
	SpriteList[2].Animations[0].Frames[0].zRotation = 0;
	SpriteList[2].Animations[0].Frames[0].HotSpot[0].x = 15;
	SpriteList[2].Animations[0].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[2].Animations[0].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[2].Animations[0].Frames[0].centerX = 15;
	SpriteList[2].Animations[0].Frames[0].centerY = 15;
	SpriteList[2].Animations[0].Frames[0].PegRegistered = false;
	SpriteList[2].Animations[0].Frames[0].useTransparency = true;

	SpriteList[2].Animations[0].Frames[1].BitmapName = "Green Alien 2.bmp";
	SpriteList[2].Animations[0].Frames[1].TranslateX = 0.000;
	SpriteList[2].Animations[0].Frames[1].TranslateY = 0.000;
	SpriteList[2].Animations[0].Frames[1].Delay = 10;
	SpriteList[2].Animations[0].Frames[1].Width = 30;
	SpriteList[2].Animations[0].Frames[1].Height = 30;
	SpriteList[2].Animations[0].Frames[1].Transparency = RGB(255,255,255);
	SpriteList[2].Animations[0].Frames[1].hFlip = false;
	SpriteList[2].Animations[0].Frames[1].vFlip = false;
	SpriteList[2].Animations[0].Frames[1].zRotation = 0;
	SpriteList[2].Animations[0].Frames[1].HotSpot[0].x = 15;
	SpriteList[2].Animations[0].Frames[1].HotSpot[0].y = 15;
	::SetRect( &SpriteList[2].Animations[0].Frames[1].BBox, 0, 0, 29,29);
	SpriteList[2].Animations[0].Frames[1].centerX = 15;
	SpriteList[2].Animations[0].Frames[1].centerY = 15;
	SpriteList[2].Animations[0].Frames[1].PegRegistered = false;
	SpriteList[2].Animations[0].Frames[1].useTransparency = true;

	SpriteList[2].Animations[0].Frames[2].BitmapName = "Green Alien 3.bmp";
	SpriteList[2].Animations[0].Frames[2].TranslateX = 0.000;
	SpriteList[2].Animations[0].Frames[2].TranslateY = 0.000;
	SpriteList[2].Animations[0].Frames[2].Delay = 10;
	SpriteList[2].Animations[0].Frames[2].Width = 30;
	SpriteList[2].Animations[0].Frames[2].Height = 30;
	SpriteList[2].Animations[0].Frames[2].Transparency = RGB(255,255,255);
	SpriteList[2].Animations[0].Frames[2].hFlip = false;
	SpriteList[2].Animations[0].Frames[2].vFlip = false;
	SpriteList[2].Animations[0].Frames[2].zRotation = 0;
	SpriteList[2].Animations[0].Frames[2].HotSpot[0].x = 15;
	SpriteList[2].Animations[0].Frames[2].HotSpot[0].y = 15;
	::SetRect( &SpriteList[2].Animations[0].Frames[2].BBox, 0, 0, 29,29);
	SpriteList[2].Animations[0].Frames[2].centerX = 15;
	SpriteList[2].Animations[0].Frames[2].centerY = 15;
	SpriteList[2].Animations[0].Frames[2].PegRegistered = false;
	SpriteList[2].Animations[0].Frames[2].useTransparency = true;

	SpriteList[2].Animations[0].Frames[3].BitmapName = "Green Alien 2.bmp";
	SpriteList[2].Animations[0].Frames[3].TranslateX = 0.000;
	SpriteList[2].Animations[0].Frames[3].TranslateY = 0.000;
	SpriteList[2].Animations[0].Frames[3].Delay = 10;
	SpriteList[2].Animations[0].Frames[3].Width = 30;
	SpriteList[2].Animations[0].Frames[3].Height = 30;
	SpriteList[2].Animations[0].Frames[3].Transparency = RGB(255,255,255);
	SpriteList[2].Animations[0].Frames[3].hFlip = false;
	SpriteList[2].Animations[0].Frames[3].vFlip = false;
	SpriteList[2].Animations[0].Frames[3].zRotation = 0;
	SpriteList[2].Animations[0].Frames[3].HotSpot[0].x = 15;
	SpriteList[2].Animations[0].Frames[3].HotSpot[0].y = 15;
	::SetRect( &SpriteList[2].Animations[0].Frames[3].BBox, 0, 0, 29,29);
	SpriteList[2].Animations[0].Frames[3].centerX = 15;
	SpriteList[2].Animations[0].Frames[3].centerY = 15;
	SpriteList[2].Animations[0].Frames[3].PegRegistered = false;
	SpriteList[2].Animations[0].Frames[3].useTransparency = true;


	SpriteList[2].Animations[1].TotalFrames=4;
	SpriteList[2].Animations[1].ConnectTo = 0;
	SpriteList[2].Animations[1].Frames = new FrameElem[4];

	SpriteList[2].Animations[1].Frames[0].BitmapName = "Green Alien Left 1.bmp";
	SpriteList[2].Animations[1].Frames[0].TranslateX = 0.000;
	SpriteList[2].Animations[1].Frames[0].TranslateY = 0.000;
	SpriteList[2].Animations[1].Frames[0].Delay = 10;
	SpriteList[2].Animations[1].Frames[0].Width = 30;
	SpriteList[2].Animations[1].Frames[0].Height = 30;
	SpriteList[2].Animations[1].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[2].Animations[1].Frames[0].hFlip = false;
	SpriteList[2].Animations[1].Frames[0].vFlip = false;
	SpriteList[2].Animations[1].Frames[0].zRotation = 0;
	SpriteList[2].Animations[1].Frames[0].HotSpot[0].x = 15;
	SpriteList[2].Animations[1].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[2].Animations[1].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[2].Animations[1].Frames[0].centerX = 15;
	SpriteList[2].Animations[1].Frames[0].centerY = 15;
	SpriteList[2].Animations[1].Frames[0].PegRegistered = false;
	SpriteList[2].Animations[1].Frames[0].useTransparency = true;

	SpriteList[2].Animations[1].Frames[1].BitmapName = "Green Alien Left 2.bmp";
	SpriteList[2].Animations[1].Frames[1].TranslateX = 0.000;
	SpriteList[2].Animations[1].Frames[1].TranslateY = 0.000;
	SpriteList[2].Animations[1].Frames[1].Delay = 10;
	SpriteList[2].Animations[1].Frames[1].Width = 30;
	SpriteList[2].Animations[1].Frames[1].Height = 30;
	SpriteList[2].Animations[1].Frames[1].Transparency = RGB(255,255,255);
	SpriteList[2].Animations[1].Frames[1].hFlip = false;
	SpriteList[2].Animations[1].Frames[1].vFlip = false;
	SpriteList[2].Animations[1].Frames[1].zRotation = 0;
	SpriteList[2].Animations[1].Frames[1].HotSpot[0].x = 15;
	SpriteList[2].Animations[1].Frames[1].HotSpot[0].y = 15;
	::SetRect( &SpriteList[2].Animations[1].Frames[1].BBox, 0, 0, 29,29);
	SpriteList[2].Animations[1].Frames[1].centerX = 15;
	SpriteList[2].Animations[1].Frames[1].centerY = 15;
	SpriteList[2].Animations[1].Frames[1].PegRegistered = false;
	SpriteList[2].Animations[1].Frames[1].useTransparency = true;

	SpriteList[2].Animations[1].Frames[2].BitmapName = "Green Alien Left 3.bmp";
	SpriteList[2].Animations[1].Frames[2].TranslateX = 0.000;
	SpriteList[2].Animations[1].Frames[2].TranslateY = 0.000;
	SpriteList[2].Animations[1].Frames[2].Delay = 10;
	SpriteList[2].Animations[1].Frames[2].Width = 30;
	SpriteList[2].Animations[1].Frames[2].Height = 30;
	SpriteList[2].Animations[1].Frames[2].Transparency = RGB(255,255,255);
	SpriteList[2].Animations[1].Frames[2].hFlip = false;
	SpriteList[2].Animations[1].Frames[2].vFlip = false;
	SpriteList[2].Animations[1].Frames[2].zRotation = 0;
	SpriteList[2].Animations[1].Frames[2].HotSpot[0].x = 15;
	SpriteList[2].Animations[1].Frames[2].HotSpot[0].y = 15;
	::SetRect( &SpriteList[2].Animations[1].Frames[2].BBox, 0, 0, 29,29);
	SpriteList[2].Animations[1].Frames[2].centerX = 15;
	SpriteList[2].Animations[1].Frames[2].centerY = 15;
	SpriteList[2].Animations[1].Frames[2].PegRegistered = false;
	SpriteList[2].Animations[1].Frames[2].useTransparency = true;

	SpriteList[2].Animations[1].Frames[3].BitmapName = "Green Alien Left 2.bmp";
	SpriteList[2].Animations[1].Frames[3].TranslateX = 0.000;
	SpriteList[2].Animations[1].Frames[3].TranslateY = 0.000;
	SpriteList[2].Animations[1].Frames[3].Delay = 10;
	SpriteList[2].Animations[1].Frames[3].Width = 30;
	SpriteList[2].Animations[1].Frames[3].Height = 30;
	SpriteList[2].Animations[1].Frames[3].Transparency = RGB(255,255,255);
	SpriteList[2].Animations[1].Frames[3].hFlip = false;
	SpriteList[2].Animations[1].Frames[3].vFlip = false;
	SpriteList[2].Animations[1].Frames[3].zRotation = 0;
	SpriteList[2].Animations[1].Frames[3].HotSpot[0].x = 15;
	SpriteList[2].Animations[1].Frames[3].HotSpot[0].y = 15;
	::SetRect( &SpriteList[2].Animations[1].Frames[3].BBox, 0, 0, 29,29);
	SpriteList[2].Animations[1].Frames[3].centerX = 15;
	SpriteList[2].Animations[1].Frames[3].centerY = 15;
	SpriteList[2].Animations[1].Frames[3].PegRegistered = false;
	SpriteList[2].Animations[1].Frames[3].useTransparency = true;


	SpriteList[2].Animations[2].TotalFrames=4;
	SpriteList[2].Animations[2].ConnectTo = 0;
	SpriteList[2].Animations[2].Frames = new FrameElem[4];

	SpriteList[2].Animations[2].Frames[0].BitmapName = "Green Alien Right 1.bmp";
	SpriteList[2].Animations[2].Frames[0].TranslateX = 0.000;
	SpriteList[2].Animations[2].Frames[0].TranslateY = 0.000;
	SpriteList[2].Animations[2].Frames[0].Delay = 10;
	SpriteList[2].Animations[2].Frames[0].Width = 30;
	SpriteList[2].Animations[2].Frames[0].Height = 30;
	SpriteList[2].Animations[2].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[2].Animations[2].Frames[0].hFlip = false;
	SpriteList[2].Animations[2].Frames[0].vFlip = false;
	SpriteList[2].Animations[2].Frames[0].zRotation = 0;
	SpriteList[2].Animations[2].Frames[0].HotSpot[0].x = 15;
	SpriteList[2].Animations[2].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[2].Animations[2].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[2].Animations[2].Frames[0].centerX = 15;
	SpriteList[2].Animations[2].Frames[0].centerY = 15;
	SpriteList[2].Animations[2].Frames[0].PegRegistered = false;
	SpriteList[2].Animations[2].Frames[0].useTransparency = true;

	SpriteList[2].Animations[2].Frames[1].BitmapName = "Green Alien Right 2.bmp";
	SpriteList[2].Animations[2].Frames[1].TranslateX = 0.000;
	SpriteList[2].Animations[2].Frames[1].TranslateY = 0.000;
	SpriteList[2].Animations[2].Frames[1].Delay = 10;
	SpriteList[2].Animations[2].Frames[1].Width = 30;
	SpriteList[2].Animations[2].Frames[1].Height = 30;
	SpriteList[2].Animations[2].Frames[1].Transparency = RGB(255,255,255);
	SpriteList[2].Animations[2].Frames[1].hFlip = false;
	SpriteList[2].Animations[2].Frames[1].vFlip = false;
	SpriteList[2].Animations[2].Frames[1].zRotation = 0;
	SpriteList[2].Animations[2].Frames[1].HotSpot[0].x = 15;
	SpriteList[2].Animations[2].Frames[1].HotSpot[0].y = 15;
	::SetRect( &SpriteList[2].Animations[2].Frames[1].BBox, 0, 0, 29,29);
	SpriteList[2].Animations[2].Frames[1].centerX = 15;
	SpriteList[2].Animations[2].Frames[1].centerY = 15;
	SpriteList[2].Animations[2].Frames[1].PegRegistered = false;
	SpriteList[2].Animations[2].Frames[1].useTransparency = true;

	SpriteList[2].Animations[2].Frames[2].BitmapName = "Green Alien Right 3.bmp";
	SpriteList[2].Animations[2].Frames[2].TranslateX = 0.000;
	SpriteList[2].Animations[2].Frames[2].TranslateY = 0.000;
	SpriteList[2].Animations[2].Frames[2].Delay = 10;
	SpriteList[2].Animations[2].Frames[2].Width = 30;
	SpriteList[2].Animations[2].Frames[2].Height = 30;
	SpriteList[2].Animations[2].Frames[2].Transparency = RGB(255,255,255);
	SpriteList[2].Animations[2].Frames[2].hFlip = false;
	SpriteList[2].Animations[2].Frames[2].vFlip = false;
	SpriteList[2].Animations[2].Frames[2].zRotation = 0;
	SpriteList[2].Animations[2].Frames[2].HotSpot[0].x = 15;
	SpriteList[2].Animations[2].Frames[2].HotSpot[0].y = 15;
	::SetRect( &SpriteList[2].Animations[2].Frames[2].BBox, 0, 0, 29,29);
	SpriteList[2].Animations[2].Frames[2].centerX = 15;
	SpriteList[2].Animations[2].Frames[2].centerY = 15;
	SpriteList[2].Animations[2].Frames[2].PegRegistered = false;
	SpriteList[2].Animations[2].Frames[2].useTransparency = true;

	SpriteList[2].Animations[2].Frames[3].BitmapName = "Green Alien Right 2.bmp";
	SpriteList[2].Animations[2].Frames[3].TranslateX = 0.000;
	SpriteList[2].Animations[2].Frames[3].TranslateY = 0.000;
	SpriteList[2].Animations[2].Frames[3].Delay = 10;
	SpriteList[2].Animations[2].Frames[3].Width = 30;
	SpriteList[2].Animations[2].Frames[3].Height = 30;
	SpriteList[2].Animations[2].Frames[3].Transparency = RGB(255,255,255);
	SpriteList[2].Animations[2].Frames[3].hFlip = false;
	SpriteList[2].Animations[2].Frames[3].vFlip = false;
	SpriteList[2].Animations[2].Frames[3].zRotation = 0;
	SpriteList[2].Animations[2].Frames[3].HotSpot[0].x = 15;
	SpriteList[2].Animations[2].Frames[3].HotSpot[0].y = 15;
	::SetRect( &SpriteList[2].Animations[2].Frames[3].BBox, 0, 0, 29,29);
	SpriteList[2].Animations[2].Frames[3].centerX = 15;
	SpriteList[2].Animations[2].Frames[3].centerY = 15;
	SpriteList[2].Animations[2].Frames[3].PegRegistered = false;
	SpriteList[2].Animations[2].Frames[3].useTransparency = true;


	SpriteList[2].Animations[3].TotalFrames=4;
	SpriteList[2].Animations[3].ConnectTo = 0;
	SpriteList[2].Animations[3].Frames = new FrameElem[4];

	SpriteList[2].Animations[3].Frames[0].BitmapName = "Green Alien Back 1.bmp";
	SpriteList[2].Animations[3].Frames[0].TranslateX = 0.000;
	SpriteList[2].Animations[3].Frames[0].TranslateY = 0.000;
	SpriteList[2].Animations[3].Frames[0].Delay = 10;
	SpriteList[2].Animations[3].Frames[0].Width = 30;
	SpriteList[2].Animations[3].Frames[0].Height = 30;
	SpriteList[2].Animations[3].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[2].Animations[3].Frames[0].hFlip = false;
	SpriteList[2].Animations[3].Frames[0].vFlip = false;
	SpriteList[2].Animations[3].Frames[0].zRotation = 0;
	SpriteList[2].Animations[3].Frames[0].HotSpot[0].x = 15;
	SpriteList[2].Animations[3].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[2].Animations[3].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[2].Animations[3].Frames[0].centerX = 15;
	SpriteList[2].Animations[3].Frames[0].centerY = 15;
	SpriteList[2].Animations[3].Frames[0].PegRegistered = false;
	SpriteList[2].Animations[3].Frames[0].useTransparency = true;

	SpriteList[2].Animations[3].Frames[1].BitmapName = "Green Alien Back 2.bmp";
	SpriteList[2].Animations[3].Frames[1].TranslateX = 0.000;
	SpriteList[2].Animations[3].Frames[1].TranslateY = 0.000;
	SpriteList[2].Animations[3].Frames[1].Delay = 10;
	SpriteList[2].Animations[3].Frames[1].Width = 30;
	SpriteList[2].Animations[3].Frames[1].Height = 30;
	SpriteList[2].Animations[3].Frames[1].Transparency = RGB(255,255,255);
	SpriteList[2].Animations[3].Frames[1].hFlip = false;
	SpriteList[2].Animations[3].Frames[1].vFlip = false;
	SpriteList[2].Animations[3].Frames[1].zRotation = 0;
	SpriteList[2].Animations[3].Frames[1].HotSpot[0].x = 15;
	SpriteList[2].Animations[3].Frames[1].HotSpot[0].y = 15;
	::SetRect( &SpriteList[2].Animations[3].Frames[1].BBox, 0, 0, 29,29);
	SpriteList[2].Animations[3].Frames[1].centerX = 15;
	SpriteList[2].Animations[3].Frames[1].centerY = 15;
	SpriteList[2].Animations[3].Frames[1].PegRegistered = false;
	SpriteList[2].Animations[3].Frames[1].useTransparency = true;

	SpriteList[2].Animations[3].Frames[2].BitmapName = "Green Alien Back 3.bmp";
	SpriteList[2].Animations[3].Frames[2].TranslateX = 0.000;
	SpriteList[2].Animations[3].Frames[2].TranslateY = 0.000;
	SpriteList[2].Animations[3].Frames[2].Delay = 10;
	SpriteList[2].Animations[3].Frames[2].Width = 30;
	SpriteList[2].Animations[3].Frames[2].Height = 30;
	SpriteList[2].Animations[3].Frames[2].Transparency = RGB(255,255,255);
	SpriteList[2].Animations[3].Frames[2].hFlip = false;
	SpriteList[2].Animations[3].Frames[2].vFlip = false;
	SpriteList[2].Animations[3].Frames[2].zRotation = 0;
	SpriteList[2].Animations[3].Frames[2].HotSpot[0].x = 15;
	SpriteList[2].Animations[3].Frames[2].HotSpot[0].y = 15;
	::SetRect( &SpriteList[2].Animations[3].Frames[2].BBox, 0, 0, 29,29);
	SpriteList[2].Animations[3].Frames[2].centerX = 15;
	SpriteList[2].Animations[3].Frames[2].centerY = 15;
	SpriteList[2].Animations[3].Frames[2].PegRegistered = false;
	SpriteList[2].Animations[3].Frames[2].useTransparency = true;

	SpriteList[2].Animations[3].Frames[3].BitmapName = "Green Alien Back 2.bmp";
	SpriteList[2].Animations[3].Frames[3].TranslateX = 0.000;
	SpriteList[2].Animations[3].Frames[3].TranslateY = 0.000;
	SpriteList[2].Animations[3].Frames[3].Delay = 10;
	SpriteList[2].Animations[3].Frames[3].Width = 30;
	SpriteList[2].Animations[3].Frames[3].Height = 30;
	SpriteList[2].Animations[3].Frames[3].Transparency = RGB(255,255,255);
	SpriteList[2].Animations[3].Frames[3].hFlip = false;
	SpriteList[2].Animations[3].Frames[3].vFlip = false;
	SpriteList[2].Animations[3].Frames[3].zRotation = 0;
	SpriteList[2].Animations[3].Frames[3].HotSpot[0].x = 15;
	SpriteList[2].Animations[3].Frames[3].HotSpot[0].y = 15;
	::SetRect( &SpriteList[2].Animations[3].Frames[3].BBox, 0, 0, 29,29);
	SpriteList[2].Animations[3].Frames[3].centerX = 15;
	SpriteList[2].Animations[3].Frames[3].centerY = 15;
	SpriteList[2].Animations[3].Frames[3].PegRegistered = false;
	SpriteList[2].Animations[3].Frames[3].useTransparency = true;


	SpriteList[2].Animations[4].TotalFrames=2;
	SpriteList[2].Animations[4].ConnectTo = 0;
	SpriteList[2].Animations[4].Frames = new FrameElem[2];

	SpriteList[2].Animations[4].Frames[0].BitmapName = "Green Alien 2.bmp";
	SpriteList[2].Animations[4].Frames[0].TranslateX = 0.000;
	SpriteList[2].Animations[4].Frames[0].TranslateY = 0.000;
	SpriteList[2].Animations[4].Frames[0].Delay = 20;
	SpriteList[2].Animations[4].Frames[0].Width = 30;
	SpriteList[2].Animations[4].Frames[0].Height = 30;
	SpriteList[2].Animations[4].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[2].Animations[4].Frames[0].hFlip = false;
	SpriteList[2].Animations[4].Frames[0].vFlip = false;
	SpriteList[2].Animations[4].Frames[0].zRotation = 0;
	SpriteList[2].Animations[4].Frames[0].HotSpot[0].x = 15;
	SpriteList[2].Animations[4].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[2].Animations[4].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[2].Animations[4].Frames[0].centerX = 15;
	SpriteList[2].Animations[4].Frames[0].centerY = 15;
	SpriteList[2].Animations[4].Frames[0].PegRegistered = false;
	SpriteList[2].Animations[4].Frames[0].useTransparency = true;

	SpriteList[2].Animations[4].Frames[1].BitmapName = "Green Alien 4.bmp";
	SpriteList[2].Animations[4].Frames[1].TranslateX = 0.000;
	SpriteList[2].Animations[4].Frames[1].TranslateY = 0.000;
	SpriteList[2].Animations[4].Frames[1].Delay = 20;
	SpriteList[2].Animations[4].Frames[1].Width = 30;
	SpriteList[2].Animations[4].Frames[1].Height = 30;
	SpriteList[2].Animations[4].Frames[1].Transparency = RGB(255,255,255);
	SpriteList[2].Animations[4].Frames[1].hFlip = false;
	SpriteList[2].Animations[4].Frames[1].vFlip = false;
	SpriteList[2].Animations[4].Frames[1].zRotation = 0;
	SpriteList[2].Animations[4].Frames[1].HotSpot[0].x = 15;
	SpriteList[2].Animations[4].Frames[1].HotSpot[0].y = 15;
	::SetRect( &SpriteList[2].Animations[4].Frames[1].BBox, 0, 0, 29,29);
	SpriteList[2].Animations[4].Frames[1].centerX = 15;
	SpriteList[2].Animations[4].Frames[1].centerY = 15;
	SpriteList[2].Animations[4].Frames[1].PegRegistered = false;
	SpriteList[2].Animations[4].Frames[1].useTransparency = true;


	SpriteList[2].Animations[5].TotalFrames=2;
	SpriteList[2].Animations[5].ConnectTo = 0;
	SpriteList[2].Animations[5].Frames = new FrameElem[2];

	SpriteList[2].Animations[5].Frames[0].BitmapName = "Green Alien Back 2.bmp";
	SpriteList[2].Animations[5].Frames[0].TranslateX = 0.000;
	SpriteList[2].Animations[5].Frames[0].TranslateY = 0.000;
	SpriteList[2].Animations[5].Frames[0].Delay = 20;
	SpriteList[2].Animations[5].Frames[0].Width = 30;
	SpriteList[2].Animations[5].Frames[0].Height = 30;
	SpriteList[2].Animations[5].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[2].Animations[5].Frames[0].hFlip = false;
	SpriteList[2].Animations[5].Frames[0].vFlip = false;
	SpriteList[2].Animations[5].Frames[0].zRotation = 0;
	SpriteList[2].Animations[5].Frames[0].HotSpot[0].x = 15;
	SpriteList[2].Animations[5].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[2].Animations[5].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[2].Animations[5].Frames[0].centerX = 15;
	SpriteList[2].Animations[5].Frames[0].centerY = 15;
	SpriteList[2].Animations[5].Frames[0].PegRegistered = false;
	SpriteList[2].Animations[5].Frames[0].useTransparency = true;

	SpriteList[2].Animations[5].Frames[1].BitmapName = "Green Alien Back 4.bmp";
	SpriteList[2].Animations[5].Frames[1].TranslateX = 0.000;
	SpriteList[2].Animations[5].Frames[1].TranslateY = 0.000;
	SpriteList[2].Animations[5].Frames[1].Delay = 20;
	SpriteList[2].Animations[5].Frames[1].Width = 30;
	SpriteList[2].Animations[5].Frames[1].Height = 30;
	SpriteList[2].Animations[5].Frames[1].Transparency = RGB(255,255,255);
	SpriteList[2].Animations[5].Frames[1].hFlip = false;
	SpriteList[2].Animations[5].Frames[1].vFlip = false;
	SpriteList[2].Animations[5].Frames[1].zRotation = 0;
	SpriteList[2].Animations[5].Frames[1].HotSpot[0].x = 15;
	SpriteList[2].Animations[5].Frames[1].HotSpot[0].y = 15;
	::SetRect( &SpriteList[2].Animations[5].Frames[1].BBox, 0, 0, 29,29);
	SpriteList[2].Animations[5].Frames[1].centerX = 15;
	SpriteList[2].Animations[5].Frames[1].centerY = 15;
	SpriteList[2].Animations[5].Frames[1].PegRegistered = false;
	SpriteList[2].Animations[5].Frames[1].useTransparency = true;


	SpriteList[2].Animations[6].TotalFrames=2;
	SpriteList[2].Animations[6].ConnectTo = 0;
	SpriteList[2].Animations[6].Frames = new FrameElem[2];

	SpriteList[2].Animations[6].Frames[0].BitmapName = "Green Alien Right 2.bmp";
	SpriteList[2].Animations[6].Frames[0].TranslateX = 0.000;
	SpriteList[2].Animations[6].Frames[0].TranslateY = 0.000;
	SpriteList[2].Animations[6].Frames[0].Delay = 20;
	SpriteList[2].Animations[6].Frames[0].Width = 30;
	SpriteList[2].Animations[6].Frames[0].Height = 30;
	SpriteList[2].Animations[6].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[2].Animations[6].Frames[0].hFlip = false;
	SpriteList[2].Animations[6].Frames[0].vFlip = false;
	SpriteList[2].Animations[6].Frames[0].zRotation = 0;
	SpriteList[2].Animations[6].Frames[0].HotSpot[0].x = 15;
	SpriteList[2].Animations[6].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[2].Animations[6].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[2].Animations[6].Frames[0].centerX = 15;
	SpriteList[2].Animations[6].Frames[0].centerY = 15;
	SpriteList[2].Animations[6].Frames[0].PegRegistered = false;
	SpriteList[2].Animations[6].Frames[0].useTransparency = true;

	SpriteList[2].Animations[6].Frames[1].BitmapName = "Green Alien Right 4.bmp";
	SpriteList[2].Animations[6].Frames[1].TranslateX = 0.000;
	SpriteList[2].Animations[6].Frames[1].TranslateY = 0.000;
	SpriteList[2].Animations[6].Frames[1].Delay = 20;
	SpriteList[2].Animations[6].Frames[1].Width = 30;
	SpriteList[2].Animations[6].Frames[1].Height = 30;
	SpriteList[2].Animations[6].Frames[1].Transparency = RGB(255,255,255);
	SpriteList[2].Animations[6].Frames[1].hFlip = false;
	SpriteList[2].Animations[6].Frames[1].vFlip = false;
	SpriteList[2].Animations[6].Frames[1].zRotation = 0;
	SpriteList[2].Animations[6].Frames[1].HotSpot[0].x = 15;
	SpriteList[2].Animations[6].Frames[1].HotSpot[0].y = 15;
	::SetRect( &SpriteList[2].Animations[6].Frames[1].BBox, 0, 0, 29,29);
	SpriteList[2].Animations[6].Frames[1].centerX = 15;
	SpriteList[2].Animations[6].Frames[1].centerY = 15;
	SpriteList[2].Animations[6].Frames[1].PegRegistered = false;
	SpriteList[2].Animations[6].Frames[1].useTransparency = true;


	SpriteList[2].Animations[7].TotalFrames=2;
	SpriteList[2].Animations[7].ConnectTo = 0;
	SpriteList[2].Animations[7].Frames = new FrameElem[2];

	SpriteList[2].Animations[7].Frames[0].BitmapName = "Green Alien Left 2.bmp";
	SpriteList[2].Animations[7].Frames[0].TranslateX = 0.000;
	SpriteList[2].Animations[7].Frames[0].TranslateY = 0.000;
	SpriteList[2].Animations[7].Frames[0].Delay = 20;
	SpriteList[2].Animations[7].Frames[0].Width = 30;
	SpriteList[2].Animations[7].Frames[0].Height = 30;
	SpriteList[2].Animations[7].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[2].Animations[7].Frames[0].hFlip = false;
	SpriteList[2].Animations[7].Frames[0].vFlip = false;
	SpriteList[2].Animations[7].Frames[0].zRotation = 0;
	SpriteList[2].Animations[7].Frames[0].HotSpot[0].x = 15;
	SpriteList[2].Animations[7].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[2].Animations[7].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[2].Animations[7].Frames[0].centerX = 15;
	SpriteList[2].Animations[7].Frames[0].centerY = 15;
	SpriteList[2].Animations[7].Frames[0].PegRegistered = false;
	SpriteList[2].Animations[7].Frames[0].useTransparency = true;

	SpriteList[2].Animations[7].Frames[1].BitmapName = "Green Alien Left 4.bmp";
	SpriteList[2].Animations[7].Frames[1].TranslateX = 0.000;
	SpriteList[2].Animations[7].Frames[1].TranslateY = 0.000;
	SpriteList[2].Animations[7].Frames[1].Delay = 20;
	SpriteList[2].Animations[7].Frames[1].Width = 30;
	SpriteList[2].Animations[7].Frames[1].Height = 30;
	SpriteList[2].Animations[7].Frames[1].Transparency = RGB(255,255,255);
	SpriteList[2].Animations[7].Frames[1].hFlip = false;
	SpriteList[2].Animations[7].Frames[1].vFlip = false;
	SpriteList[2].Animations[7].Frames[1].zRotation = 0;
	SpriteList[2].Animations[7].Frames[1].HotSpot[0].x = 15;
	SpriteList[2].Animations[7].Frames[1].HotSpot[0].y = 15;
	::SetRect( &SpriteList[2].Animations[7].Frames[1].BBox, 0, 0, 29,29);
	SpriteList[2].Animations[7].Frames[1].centerX = 15;
	SpriteList[2].Animations[7].Frames[1].centerY = 15;
	SpriteList[2].Animations[7].Frames[1].PegRegistered = false;
	SpriteList[2].Animations[7].Frames[1].useTransparency = true;



	SpriteList[1].TotalAnimations = 8;
	SpriteList[1].Animations = new AnimationElem[8];

	SpriteList[1].Animations[0].TotalFrames=4;
	SpriteList[1].Animations[0].ConnectTo = 0;
	SpriteList[1].Animations[0].Frames = new FrameElem[4];

	SpriteList[1].Animations[0].Frames[0].BitmapName = "White Alien 1.bmp";
	SpriteList[1].Animations[0].Frames[0].TranslateX = 0.000;
	SpriteList[1].Animations[0].Frames[0].TranslateY = 0.000;
	SpriteList[1].Animations[0].Frames[0].Delay = 4;
	SpriteList[1].Animations[0].Frames[0].Width = 30;
	SpriteList[1].Animations[0].Frames[0].Height = 30;
	SpriteList[1].Animations[0].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[1].Animations[0].Frames[0].hFlip = false;
	SpriteList[1].Animations[0].Frames[0].vFlip = false;
	SpriteList[1].Animations[0].Frames[0].zRotation = 0;
	SpriteList[1].Animations[0].Frames[0].HotSpot[0].x = 15;
	SpriteList[1].Animations[0].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[1].Animations[0].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[1].Animations[0].Frames[0].centerX = 15;
	SpriteList[1].Animations[0].Frames[0].centerY = 15;
	SpriteList[1].Animations[0].Frames[0].PegRegistered = false;
	SpriteList[1].Animations[0].Frames[0].useTransparency = true;

	SpriteList[1].Animations[0].Frames[1].BitmapName = "White Alien 2.bmp";
	SpriteList[1].Animations[0].Frames[1].TranslateX = 0.000;
	SpriteList[1].Animations[0].Frames[1].TranslateY = 0.000;
	SpriteList[1].Animations[0].Frames[1].Delay = 4;
	SpriteList[1].Animations[0].Frames[1].Width = 30;
	SpriteList[1].Animations[0].Frames[1].Height = 30;
	SpriteList[1].Animations[0].Frames[1].Transparency = RGB(255,255,255);
	SpriteList[1].Animations[0].Frames[1].hFlip = false;
	SpriteList[1].Animations[0].Frames[1].vFlip = false;
	SpriteList[1].Animations[0].Frames[1].zRotation = 0;
	SpriteList[1].Animations[0].Frames[1].HotSpot[0].x = 15;
	SpriteList[1].Animations[0].Frames[1].HotSpot[0].y = 15;
	::SetRect( &SpriteList[1].Animations[0].Frames[1].BBox, 0, 0, 29,29);
	SpriteList[1].Animations[0].Frames[1].centerX = 15;
	SpriteList[1].Animations[0].Frames[1].centerY = 15;
	SpriteList[1].Animations[0].Frames[1].PegRegistered = false;
	SpriteList[1].Animations[0].Frames[1].useTransparency = true;

	SpriteList[1].Animations[0].Frames[2].BitmapName = "White Alien 3.bmp";
	SpriteList[1].Animations[0].Frames[2].TranslateX = 0.000;
	SpriteList[1].Animations[0].Frames[2].TranslateY = 0.000;
	SpriteList[1].Animations[0].Frames[2].Delay = 4;
	SpriteList[1].Animations[0].Frames[2].Width = 30;
	SpriteList[1].Animations[0].Frames[2].Height = 30;
	SpriteList[1].Animations[0].Frames[2].Transparency = RGB(255,255,255);
	SpriteList[1].Animations[0].Frames[2].hFlip = false;
	SpriteList[1].Animations[0].Frames[2].vFlip = false;
	SpriteList[1].Animations[0].Frames[2].zRotation = 0;
	SpriteList[1].Animations[0].Frames[2].HotSpot[0].x = 15;
	SpriteList[1].Animations[0].Frames[2].HotSpot[0].y = 15;
	::SetRect( &SpriteList[1].Animations[0].Frames[2].BBox, 0, 0, 29,29);
	SpriteList[1].Animations[0].Frames[2].centerX = 15;
	SpriteList[1].Animations[0].Frames[2].centerY = 15;
	SpriteList[1].Animations[0].Frames[2].PegRegistered = false;
	SpriteList[1].Animations[0].Frames[2].useTransparency = true;

	SpriteList[1].Animations[0].Frames[3].BitmapName = "White Alien 2.bmp";
	SpriteList[1].Animations[0].Frames[3].TranslateX = 0.000;
	SpriteList[1].Animations[0].Frames[3].TranslateY = 0.000;
	SpriteList[1].Animations[0].Frames[3].Delay = 4;
	SpriteList[1].Animations[0].Frames[3].Width = 30;
	SpriteList[1].Animations[0].Frames[3].Height = 30;
	SpriteList[1].Animations[0].Frames[3].Transparency = RGB(255,255,255);
	SpriteList[1].Animations[0].Frames[3].hFlip = false;
	SpriteList[1].Animations[0].Frames[3].vFlip = false;
	SpriteList[1].Animations[0].Frames[3].zRotation = 0;
	SpriteList[1].Animations[0].Frames[3].HotSpot[0].x = 15;
	SpriteList[1].Animations[0].Frames[3].HotSpot[0].y = 15;
	::SetRect( &SpriteList[1].Animations[0].Frames[3].BBox, 0, 0, 29,29);
	SpriteList[1].Animations[0].Frames[3].centerX = 15;
	SpriteList[1].Animations[0].Frames[3].centerY = 15;
	SpriteList[1].Animations[0].Frames[3].PegRegistered = false;
	SpriteList[1].Animations[0].Frames[3].useTransparency = true;


	SpriteList[1].Animations[1].TotalFrames=4;
	SpriteList[1].Animations[1].ConnectTo = 0;
	SpriteList[1].Animations[1].Frames = new FrameElem[4];

	SpriteList[1].Animations[1].Frames[0].BitmapName = "White Alien Left 1.bmp";
	SpriteList[1].Animations[1].Frames[0].TranslateX = 0.000;
	SpriteList[1].Animations[1].Frames[0].TranslateY = 0.000;
	SpriteList[1].Animations[1].Frames[0].Delay = 4;
	SpriteList[1].Animations[1].Frames[0].Width = 30;
	SpriteList[1].Animations[1].Frames[0].Height = 30;
	SpriteList[1].Animations[1].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[1].Animations[1].Frames[0].hFlip = false;
	SpriteList[1].Animations[1].Frames[0].vFlip = false;
	SpriteList[1].Animations[1].Frames[0].zRotation = 0;
	SpriteList[1].Animations[1].Frames[0].HotSpot[0].x = 15;
	SpriteList[1].Animations[1].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[1].Animations[1].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[1].Animations[1].Frames[0].centerX = 15;
	SpriteList[1].Animations[1].Frames[0].centerY = 15;
	SpriteList[1].Animations[1].Frames[0].PegRegistered = false;
	SpriteList[1].Animations[1].Frames[0].useTransparency = true;

	SpriteList[1].Animations[1].Frames[1].BitmapName = "White Alien Left 2.bmp";
	SpriteList[1].Animations[1].Frames[1].TranslateX = 0.000;
	SpriteList[1].Animations[1].Frames[1].TranslateY = 0.000;
	SpriteList[1].Animations[1].Frames[1].Delay = 4;
	SpriteList[1].Animations[1].Frames[1].Width = 30;
	SpriteList[1].Animations[1].Frames[1].Height = 30;
	SpriteList[1].Animations[1].Frames[1].Transparency = RGB(255,255,255);
	SpriteList[1].Animations[1].Frames[1].hFlip = false;
	SpriteList[1].Animations[1].Frames[1].vFlip = false;
	SpriteList[1].Animations[1].Frames[1].zRotation = 0;
	SpriteList[1].Animations[1].Frames[1].HotSpot[0].x = 15;
	SpriteList[1].Animations[1].Frames[1].HotSpot[0].y = 15;
	::SetRect( &SpriteList[1].Animations[1].Frames[1].BBox, 0, 0, 29,29);
	SpriteList[1].Animations[1].Frames[1].centerX = 15;
	SpriteList[1].Animations[1].Frames[1].centerY = 15;
	SpriteList[1].Animations[1].Frames[1].PegRegistered = false;
	SpriteList[1].Animations[1].Frames[1].useTransparency = true;

	SpriteList[1].Animations[1].Frames[2].BitmapName = "White Alien Left 3.bmp";
	SpriteList[1].Animations[1].Frames[2].TranslateX = 0.000;
	SpriteList[1].Animations[1].Frames[2].TranslateY = 0.000;
	SpriteList[1].Animations[1].Frames[2].Delay = 4;
	SpriteList[1].Animations[1].Frames[2].Width = 30;
	SpriteList[1].Animations[1].Frames[2].Height = 30;
	SpriteList[1].Animations[1].Frames[2].Transparency = RGB(255,255,255);
	SpriteList[1].Animations[1].Frames[2].hFlip = false;
	SpriteList[1].Animations[1].Frames[2].vFlip = false;
	SpriteList[1].Animations[1].Frames[2].zRotation = 0;
	SpriteList[1].Animations[1].Frames[2].HotSpot[0].x = 15;
	SpriteList[1].Animations[1].Frames[2].HotSpot[0].y = 15;
	::SetRect( &SpriteList[1].Animations[1].Frames[2].BBox, 0, 0, 29,29);
	SpriteList[1].Animations[1].Frames[2].centerX = 15;
	SpriteList[1].Animations[1].Frames[2].centerY = 15;
	SpriteList[1].Animations[1].Frames[2].PegRegistered = false;
	SpriteList[1].Animations[1].Frames[2].useTransparency = true;

	SpriteList[1].Animations[1].Frames[3].BitmapName = "White Alien Left 2.bmp";
	SpriteList[1].Animations[1].Frames[3].TranslateX = 0.000;
	SpriteList[1].Animations[1].Frames[3].TranslateY = 0.000;
	SpriteList[1].Animations[1].Frames[3].Delay = 4;
	SpriteList[1].Animations[1].Frames[3].Width = 30;
	SpriteList[1].Animations[1].Frames[3].Height = 30;
	SpriteList[1].Animations[1].Frames[3].Transparency = RGB(255,255,255);
	SpriteList[1].Animations[1].Frames[3].hFlip = false;
	SpriteList[1].Animations[1].Frames[3].vFlip = false;
	SpriteList[1].Animations[1].Frames[3].zRotation = 0;
	SpriteList[1].Animations[1].Frames[3].HotSpot[0].x = 15;
	SpriteList[1].Animations[1].Frames[3].HotSpot[0].y = 15;
	::SetRect( &SpriteList[1].Animations[1].Frames[3].BBox, 0, 0, 29,29);
	SpriteList[1].Animations[1].Frames[3].centerX = 15;
	SpriteList[1].Animations[1].Frames[3].centerY = 15;
	SpriteList[1].Animations[1].Frames[3].PegRegistered = false;
	SpriteList[1].Animations[1].Frames[3].useTransparency = true;


	SpriteList[1].Animations[2].TotalFrames=4;
	SpriteList[1].Animations[2].ConnectTo = 0;
	SpriteList[1].Animations[2].Frames = new FrameElem[4];

	SpriteList[1].Animations[2].Frames[0].BitmapName = "White Alien Right 1.bmp";
	SpriteList[1].Animations[2].Frames[0].TranslateX = 0.000;
	SpriteList[1].Animations[2].Frames[0].TranslateY = 0.000;
	SpriteList[1].Animations[2].Frames[0].Delay = 4;
	SpriteList[1].Animations[2].Frames[0].Width = 30;
	SpriteList[1].Animations[2].Frames[0].Height = 30;
	SpriteList[1].Animations[2].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[1].Animations[2].Frames[0].hFlip = false;
	SpriteList[1].Animations[2].Frames[0].vFlip = false;
	SpriteList[1].Animations[2].Frames[0].zRotation = 0;
	SpriteList[1].Animations[2].Frames[0].HotSpot[0].x = 15;
	SpriteList[1].Animations[2].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[1].Animations[2].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[1].Animations[2].Frames[0].centerX = 15;
	SpriteList[1].Animations[2].Frames[0].centerY = 15;
	SpriteList[1].Animations[2].Frames[0].PegRegistered = false;
	SpriteList[1].Animations[2].Frames[0].useTransparency = true;

	SpriteList[1].Animations[2].Frames[1].BitmapName = "White Alien Right 2.bmp";
	SpriteList[1].Animations[2].Frames[1].TranslateX = 0.000;
	SpriteList[1].Animations[2].Frames[1].TranslateY = 0.000;
	SpriteList[1].Animations[2].Frames[1].Delay = 4;
	SpriteList[1].Animations[2].Frames[1].Width = 30;
	SpriteList[1].Animations[2].Frames[1].Height = 30;
	SpriteList[1].Animations[2].Frames[1].Transparency = RGB(255,255,255);
	SpriteList[1].Animations[2].Frames[1].hFlip = false;
	SpriteList[1].Animations[2].Frames[1].vFlip = false;
	SpriteList[1].Animations[2].Frames[1].zRotation = 0;
	SpriteList[1].Animations[2].Frames[1].HotSpot[0].x = 15;
	SpriteList[1].Animations[2].Frames[1].HotSpot[0].y = 15;
	::SetRect( &SpriteList[1].Animations[2].Frames[1].BBox, 0, 0, 29,29);
	SpriteList[1].Animations[2].Frames[1].centerX = 15;
	SpriteList[1].Animations[2].Frames[1].centerY = 15;
	SpriteList[1].Animations[2].Frames[1].PegRegistered = false;
	SpriteList[1].Animations[2].Frames[1].useTransparency = true;

	SpriteList[1].Animations[2].Frames[2].BitmapName = "White Alien Right 3.bmp";
	SpriteList[1].Animations[2].Frames[2].TranslateX = 0.000;
	SpriteList[1].Animations[2].Frames[2].TranslateY = 0.000;
	SpriteList[1].Animations[2].Frames[2].Delay = 4;
	SpriteList[1].Animations[2].Frames[2].Width = 30;
	SpriteList[1].Animations[2].Frames[2].Height = 30;
	SpriteList[1].Animations[2].Frames[2].Transparency = RGB(255,255,255);
	SpriteList[1].Animations[2].Frames[2].hFlip = false;
	SpriteList[1].Animations[2].Frames[2].vFlip = false;
	SpriteList[1].Animations[2].Frames[2].zRotation = 0;
	SpriteList[1].Animations[2].Frames[2].HotSpot[0].x = 15;
	SpriteList[1].Animations[2].Frames[2].HotSpot[0].y = 15;
	::SetRect( &SpriteList[1].Animations[2].Frames[2].BBox, 0, 0, 29,29);
	SpriteList[1].Animations[2].Frames[2].centerX = 15;
	SpriteList[1].Animations[2].Frames[2].centerY = 15;
	SpriteList[1].Animations[2].Frames[2].PegRegistered = false;
	SpriteList[1].Animations[2].Frames[2].useTransparency = true;

	SpriteList[1].Animations[2].Frames[3].BitmapName = "White Alien Right 2.bmp";
	SpriteList[1].Animations[2].Frames[3].TranslateX = 0.000;
	SpriteList[1].Animations[2].Frames[3].TranslateY = 0.000;
	SpriteList[1].Animations[2].Frames[3].Delay = 4;
	SpriteList[1].Animations[2].Frames[3].Width = 30;
	SpriteList[1].Animations[2].Frames[3].Height = 30;
	SpriteList[1].Animations[2].Frames[3].Transparency = RGB(255,255,255);
	SpriteList[1].Animations[2].Frames[3].hFlip = false;
	SpriteList[1].Animations[2].Frames[3].vFlip = false;
	SpriteList[1].Animations[2].Frames[3].zRotation = 0;
	SpriteList[1].Animations[2].Frames[3].HotSpot[0].x = 15;
	SpriteList[1].Animations[2].Frames[3].HotSpot[0].y = 15;
	::SetRect( &SpriteList[1].Animations[2].Frames[3].BBox, 0, 0, 29,29);
	SpriteList[1].Animations[2].Frames[3].centerX = 15;
	SpriteList[1].Animations[2].Frames[3].centerY = 15;
	SpriteList[1].Animations[2].Frames[3].PegRegistered = false;
	SpriteList[1].Animations[2].Frames[3].useTransparency = true;


	SpriteList[1].Animations[3].TotalFrames=4;
	SpriteList[1].Animations[3].ConnectTo = 0;
	SpriteList[1].Animations[3].Frames = new FrameElem[4];

	SpriteList[1].Animations[3].Frames[0].BitmapName = "White Alien Back 1.bmp";
	SpriteList[1].Animations[3].Frames[0].TranslateX = 0.000;
	SpriteList[1].Animations[3].Frames[0].TranslateY = 0.000;
	SpriteList[1].Animations[3].Frames[0].Delay = 4;
	SpriteList[1].Animations[3].Frames[0].Width = 30;
	SpriteList[1].Animations[3].Frames[0].Height = 30;
	SpriteList[1].Animations[3].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[1].Animations[3].Frames[0].hFlip = false;
	SpriteList[1].Animations[3].Frames[0].vFlip = false;
	SpriteList[1].Animations[3].Frames[0].zRotation = 0;
	SpriteList[1].Animations[3].Frames[0].HotSpot[0].x = 15;
	SpriteList[1].Animations[3].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[1].Animations[3].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[1].Animations[3].Frames[0].centerX = 15;
	SpriteList[1].Animations[3].Frames[0].centerY = 15;
	SpriteList[1].Animations[3].Frames[0].PegRegistered = false;
	SpriteList[1].Animations[3].Frames[0].useTransparency = true;

	SpriteList[1].Animations[3].Frames[1].BitmapName = "White Alien Back 2.bmp";
	SpriteList[1].Animations[3].Frames[1].TranslateX = 0.000;
	SpriteList[1].Animations[3].Frames[1].TranslateY = 0.000;
	SpriteList[1].Animations[3].Frames[1].Delay = 4;
	SpriteList[1].Animations[3].Frames[1].Width = 30;
	SpriteList[1].Animations[3].Frames[1].Height = 30;
	SpriteList[1].Animations[3].Frames[1].Transparency = RGB(255,255,255);
	SpriteList[1].Animations[3].Frames[1].hFlip = false;
	SpriteList[1].Animations[3].Frames[1].vFlip = false;
	SpriteList[1].Animations[3].Frames[1].zRotation = 0;
	SpriteList[1].Animations[3].Frames[1].HotSpot[0].x = 15;
	SpriteList[1].Animations[3].Frames[1].HotSpot[0].y = 15;
	::SetRect( &SpriteList[1].Animations[3].Frames[1].BBox, 0, 0, 29,29);
	SpriteList[1].Animations[3].Frames[1].centerX = 15;
	SpriteList[1].Animations[3].Frames[1].centerY = 15;
	SpriteList[1].Animations[3].Frames[1].PegRegistered = false;
	SpriteList[1].Animations[3].Frames[1].useTransparency = true;

	SpriteList[1].Animations[3].Frames[2].BitmapName = "White Alien Back 3.bmp";
	SpriteList[1].Animations[3].Frames[2].TranslateX = 0.000;
	SpriteList[1].Animations[3].Frames[2].TranslateY = 0.000;
	SpriteList[1].Animations[3].Frames[2].Delay = 4;
	SpriteList[1].Animations[3].Frames[2].Width = 30;
	SpriteList[1].Animations[3].Frames[2].Height = 30;
	SpriteList[1].Animations[3].Frames[2].Transparency = RGB(255,255,255);
	SpriteList[1].Animations[3].Frames[2].hFlip = false;
	SpriteList[1].Animations[3].Frames[2].vFlip = false;
	SpriteList[1].Animations[3].Frames[2].zRotation = 0;
	SpriteList[1].Animations[3].Frames[2].HotSpot[0].x = 15;
	SpriteList[1].Animations[3].Frames[2].HotSpot[0].y = 15;
	::SetRect( &SpriteList[1].Animations[3].Frames[2].BBox, 0, 0, 29,29);
	SpriteList[1].Animations[3].Frames[2].centerX = 15;
	SpriteList[1].Animations[3].Frames[2].centerY = 15;
	SpriteList[1].Animations[3].Frames[2].PegRegistered = false;
	SpriteList[1].Animations[3].Frames[2].useTransparency = true;

	SpriteList[1].Animations[3].Frames[3].BitmapName = "White Alien Back 2.bmp";
	SpriteList[1].Animations[3].Frames[3].TranslateX = 0.000;
	SpriteList[1].Animations[3].Frames[3].TranslateY = 0.000;
	SpriteList[1].Animations[3].Frames[3].Delay = 4;
	SpriteList[1].Animations[3].Frames[3].Width = 30;
	SpriteList[1].Animations[3].Frames[3].Height = 30;
	SpriteList[1].Animations[3].Frames[3].Transparency = RGB(255,255,255);
	SpriteList[1].Animations[3].Frames[3].hFlip = false;
	SpriteList[1].Animations[3].Frames[3].vFlip = false;
	SpriteList[1].Animations[3].Frames[3].zRotation = 0;
	SpriteList[1].Animations[3].Frames[3].HotSpot[0].x = 15;
	SpriteList[1].Animations[3].Frames[3].HotSpot[0].y = 15;
	::SetRect( &SpriteList[1].Animations[3].Frames[3].BBox, 0, 0, 29,29);
	SpriteList[1].Animations[3].Frames[3].centerX = 15;
	SpriteList[1].Animations[3].Frames[3].centerY = 15;
	SpriteList[1].Animations[3].Frames[3].PegRegistered = false;
	SpriteList[1].Animations[3].Frames[3].useTransparency = true;


	SpriteList[1].Animations[4].TotalFrames=2;
	SpriteList[1].Animations[4].ConnectTo = 0;
	SpriteList[1].Animations[4].Frames = new FrameElem[2];

	SpriteList[1].Animations[4].Frames[0].BitmapName = "White Alien 2.bmp";
	SpriteList[1].Animations[4].Frames[0].TranslateX = 0.000;
	SpriteList[1].Animations[4].Frames[0].TranslateY = 0.000;
	SpriteList[1].Animations[4].Frames[0].Delay = 20;
	SpriteList[1].Animations[4].Frames[0].Width = 30;
	SpriteList[1].Animations[4].Frames[0].Height = 30;
	SpriteList[1].Animations[4].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[1].Animations[4].Frames[0].hFlip = false;
	SpriteList[1].Animations[4].Frames[0].vFlip = false;
	SpriteList[1].Animations[4].Frames[0].zRotation = 0;
	SpriteList[1].Animations[4].Frames[0].HotSpot[0].x = 15;
	SpriteList[1].Animations[4].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[1].Animations[4].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[1].Animations[4].Frames[0].centerX = 15;
	SpriteList[1].Animations[4].Frames[0].centerY = 15;
	SpriteList[1].Animations[4].Frames[0].PegRegistered = false;
	SpriteList[1].Animations[4].Frames[0].useTransparency = true;

	SpriteList[1].Animations[4].Frames[1].BitmapName = "White Alien 4.bmp";
	SpriteList[1].Animations[4].Frames[1].TranslateX = 0.000;
	SpriteList[1].Animations[4].Frames[1].TranslateY = 0.000;
	SpriteList[1].Animations[4].Frames[1].Delay = 20;
	SpriteList[1].Animations[4].Frames[1].Width = 30;
	SpriteList[1].Animations[4].Frames[1].Height = 30;
	SpriteList[1].Animations[4].Frames[1].Transparency = RGB(255,255,255);
	SpriteList[1].Animations[4].Frames[1].hFlip = false;
	SpriteList[1].Animations[4].Frames[1].vFlip = false;
	SpriteList[1].Animations[4].Frames[1].zRotation = 0;
	SpriteList[1].Animations[4].Frames[1].HotSpot[0].x = 15;
	SpriteList[1].Animations[4].Frames[1].HotSpot[0].y = 15;
	::SetRect( &SpriteList[1].Animations[4].Frames[1].BBox, 0, 0, 29,29);
	SpriteList[1].Animations[4].Frames[1].centerX = 15;
	SpriteList[1].Animations[4].Frames[1].centerY = 15;
	SpriteList[1].Animations[4].Frames[1].PegRegistered = false;
	SpriteList[1].Animations[4].Frames[1].useTransparency = true;


	SpriteList[1].Animations[5].TotalFrames=2;
	SpriteList[1].Animations[5].ConnectTo = 0;
	SpriteList[1].Animations[5].Frames = new FrameElem[2];

	SpriteList[1].Animations[5].Frames[0].BitmapName = "White Alien Back 2.bmp";
	SpriteList[1].Animations[5].Frames[0].TranslateX = 0.000;
	SpriteList[1].Animations[5].Frames[0].TranslateY = 0.000;
	SpriteList[1].Animations[5].Frames[0].Delay = 20;
	SpriteList[1].Animations[5].Frames[0].Width = 30;
	SpriteList[1].Animations[5].Frames[0].Height = 30;
	SpriteList[1].Animations[5].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[1].Animations[5].Frames[0].hFlip = false;
	SpriteList[1].Animations[5].Frames[0].vFlip = false;
	SpriteList[1].Animations[5].Frames[0].zRotation = 0;
	SpriteList[1].Animations[5].Frames[0].HotSpot[0].x = 15;
	SpriteList[1].Animations[5].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[1].Animations[5].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[1].Animations[5].Frames[0].centerX = 15;
	SpriteList[1].Animations[5].Frames[0].centerY = 15;
	SpriteList[1].Animations[5].Frames[0].PegRegistered = false;
	SpriteList[1].Animations[5].Frames[0].useTransparency = true;

	SpriteList[1].Animations[5].Frames[1].BitmapName = "White Alien Back 4.bmp";
	SpriteList[1].Animations[5].Frames[1].TranslateX = 0.000;
	SpriteList[1].Animations[5].Frames[1].TranslateY = 0.000;
	SpriteList[1].Animations[5].Frames[1].Delay = 20;
	SpriteList[1].Animations[5].Frames[1].Width = 30;
	SpriteList[1].Animations[5].Frames[1].Height = 30;
	SpriteList[1].Animations[5].Frames[1].Transparency = RGB(255,255,255);
	SpriteList[1].Animations[5].Frames[1].hFlip = false;
	SpriteList[1].Animations[5].Frames[1].vFlip = false;
	SpriteList[1].Animations[5].Frames[1].zRotation = 0;
	SpriteList[1].Animations[5].Frames[1].HotSpot[0].x = 15;
	SpriteList[1].Animations[5].Frames[1].HotSpot[0].y = 15;
	::SetRect( &SpriteList[1].Animations[5].Frames[1].BBox, 0, 0, 29,29);
	SpriteList[1].Animations[5].Frames[1].centerX = 15;
	SpriteList[1].Animations[5].Frames[1].centerY = 15;
	SpriteList[1].Animations[5].Frames[1].PegRegistered = false;
	SpriteList[1].Animations[5].Frames[1].useTransparency = true;


	SpriteList[1].Animations[6].TotalFrames=2;
	SpriteList[1].Animations[6].ConnectTo = 0;
	SpriteList[1].Animations[6].Frames = new FrameElem[2];

	SpriteList[1].Animations[6].Frames[0].BitmapName = "White Alien Right 2.bmp";
	SpriteList[1].Animations[6].Frames[0].TranslateX = 0.000;
	SpriteList[1].Animations[6].Frames[0].TranslateY = 0.000;
	SpriteList[1].Animations[6].Frames[0].Delay = 20;
	SpriteList[1].Animations[6].Frames[0].Width = 30;
	SpriteList[1].Animations[6].Frames[0].Height = 30;
	SpriteList[1].Animations[6].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[1].Animations[6].Frames[0].hFlip = false;
	SpriteList[1].Animations[6].Frames[0].vFlip = false;
	SpriteList[1].Animations[6].Frames[0].zRotation = 0;
	SpriteList[1].Animations[6].Frames[0].HotSpot[0].x = 15;
	SpriteList[1].Animations[6].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[1].Animations[6].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[1].Animations[6].Frames[0].centerX = 15;
	SpriteList[1].Animations[6].Frames[0].centerY = 15;
	SpriteList[1].Animations[6].Frames[0].PegRegistered = false;
	SpriteList[1].Animations[6].Frames[0].useTransparency = true;

	SpriteList[1].Animations[6].Frames[1].BitmapName = "White Alien Right 4.bmp";
	SpriteList[1].Animations[6].Frames[1].TranslateX = 0.000;
	SpriteList[1].Animations[6].Frames[1].TranslateY = 0.000;
	SpriteList[1].Animations[6].Frames[1].Delay = 20;
	SpriteList[1].Animations[6].Frames[1].Width = 30;
	SpriteList[1].Animations[6].Frames[1].Height = 30;
	SpriteList[1].Animations[6].Frames[1].Transparency = RGB(255,255,255);
	SpriteList[1].Animations[6].Frames[1].hFlip = false;
	SpriteList[1].Animations[6].Frames[1].vFlip = false;
	SpriteList[1].Animations[6].Frames[1].zRotation = 0;
	SpriteList[1].Animations[6].Frames[1].HotSpot[0].x = 15;
	SpriteList[1].Animations[6].Frames[1].HotSpot[0].y = 15;
	::SetRect( &SpriteList[1].Animations[6].Frames[1].BBox, 0, 0, 29,29);
	SpriteList[1].Animations[6].Frames[1].centerX = 15;
	SpriteList[1].Animations[6].Frames[1].centerY = 15;
	SpriteList[1].Animations[6].Frames[1].PegRegistered = false;
	SpriteList[1].Animations[6].Frames[1].useTransparency = true;


	SpriteList[1].Animations[7].TotalFrames=2;
	SpriteList[1].Animations[7].ConnectTo = 0;
	SpriteList[1].Animations[7].Frames = new FrameElem[2];

	SpriteList[1].Animations[7].Frames[0].BitmapName = "White Alien Left 2.bmp";
	SpriteList[1].Animations[7].Frames[0].TranslateX = 0.000;
	SpriteList[1].Animations[7].Frames[0].TranslateY = 0.000;
	SpriteList[1].Animations[7].Frames[0].Delay = 20;
	SpriteList[1].Animations[7].Frames[0].Width = 30;
	SpriteList[1].Animations[7].Frames[0].Height = 30;
	SpriteList[1].Animations[7].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[1].Animations[7].Frames[0].hFlip = false;
	SpriteList[1].Animations[7].Frames[0].vFlip = false;
	SpriteList[1].Animations[7].Frames[0].zRotation = 0;
	SpriteList[1].Animations[7].Frames[0].HotSpot[0].x = 15;
	SpriteList[1].Animations[7].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[1].Animations[7].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[1].Animations[7].Frames[0].centerX = 15;
	SpriteList[1].Animations[7].Frames[0].centerY = 15;
	SpriteList[1].Animations[7].Frames[0].PegRegistered = false;
	SpriteList[1].Animations[7].Frames[0].useTransparency = true;

	SpriteList[1].Animations[7].Frames[1].BitmapName = "White Alien Left 4.bmp";
	SpriteList[1].Animations[7].Frames[1].TranslateX = 0.000;
	SpriteList[1].Animations[7].Frames[1].TranslateY = 0.000;
	SpriteList[1].Animations[7].Frames[1].Delay = 20;
	SpriteList[1].Animations[7].Frames[1].Width = 30;
	SpriteList[1].Animations[7].Frames[1].Height = 30;
	SpriteList[1].Animations[7].Frames[1].Transparency = RGB(255,255,255);
	SpriteList[1].Animations[7].Frames[1].hFlip = false;
	SpriteList[1].Animations[7].Frames[1].vFlip = false;
	SpriteList[1].Animations[7].Frames[1].zRotation = 0;
	SpriteList[1].Animations[7].Frames[1].HotSpot[0].x = 15;
	SpriteList[1].Animations[7].Frames[1].HotSpot[0].y = 15;
	::SetRect( &SpriteList[1].Animations[7].Frames[1].BBox, 0, 0, 29,29);
	SpriteList[1].Animations[7].Frames[1].centerX = 15;
	SpriteList[1].Animations[7].Frames[1].centerY = 15;
	SpriteList[1].Animations[7].Frames[1].PegRegistered = false;
	SpriteList[1].Animations[7].Frames[1].useTransparency = true;



	SpriteList[5].TotalAnimations = 1;
	SpriteList[5].Animations = new AnimationElem[1];

	SpriteList[5].Animations[0].TotalFrames=1;
	SpriteList[5].Animations[0].ConnectTo = 0;
	SpriteList[5].Animations[0].Frames = new FrameElem[1];

	SpriteList[5].Animations[0].Frames[0].BitmapName = "Memory Chip.bmp";
	SpriteList[5].Animations[0].Frames[0].TranslateX = 0.000;
	SpriteList[5].Animations[0].Frames[0].TranslateY = 0.000;
	SpriteList[5].Animations[0].Frames[0].Delay = 1;
	SpriteList[5].Animations[0].Frames[0].Width = 30;
	SpriteList[5].Animations[0].Frames[0].Height = 30;
	SpriteList[5].Animations[0].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[5].Animations[0].Frames[0].hFlip = false;
	SpriteList[5].Animations[0].Frames[0].vFlip = false;
	SpriteList[5].Animations[0].Frames[0].zRotation = 0;
	SpriteList[5].Animations[0].Frames[0].HotSpot[0].x = 15;
	SpriteList[5].Animations[0].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[5].Animations[0].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[5].Animations[0].Frames[0].centerX = 15;
	SpriteList[5].Animations[0].Frames[0].centerY = 15;
	SpriteList[5].Animations[0].Frames[0].PegRegistered = false;
	SpriteList[5].Animations[0].Frames[0].useTransparency = true;



	SpriteList[6].TotalAnimations = 3;
	SpriteList[6].Animations = new AnimationElem[3];

	SpriteList[6].Animations[0].TotalFrames=1;
	SpriteList[6].Animations[0].ConnectTo = 0;
	SpriteList[6].Animations[0].Frames = new FrameElem[1];

	SpriteList[6].Animations[0].Frames[0].BitmapName = "Survivor Vision.bmp";
	SpriteList[6].Animations[0].Frames[0].TranslateX = 0.000;
	SpriteList[6].Animations[0].Frames[0].TranslateY = 0.000;
	SpriteList[6].Animations[0].Frames[0].Delay = 1;
	SpriteList[6].Animations[0].Frames[0].Width = 1553;
	SpriteList[6].Animations[0].Frames[0].Height = 1234;
	SpriteList[6].Animations[0].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[6].Animations[0].Frames[0].hFlip = false;
	SpriteList[6].Animations[0].Frames[0].vFlip = false;
	SpriteList[6].Animations[0].Frames[0].zRotation = 0;
	SpriteList[6].Animations[0].Frames[0].HotSpot[0].x = 776;
	SpriteList[6].Animations[0].Frames[0].HotSpot[0].y = 617;
	::SetRect( &SpriteList[6].Animations[0].Frames[0].BBox, 0, 0, 1552,1233);
	SpriteList[6].Animations[0].Frames[0].centerX = 776;
	SpriteList[6].Animations[0].Frames[0].centerY = 617;
	SpriteList[6].Animations[0].Frames[0].PegRegistered = false;
	SpriteList[6].Animations[0].Frames[0].useTransparency = true;


	SpriteList[6].Animations[1].TotalFrames=1;
	SpriteList[6].Animations[1].ConnectTo = 0;
	SpriteList[6].Animations[1].Frames = new FrameElem[1];

	SpriteList[6].Animations[1].Frames[0].BitmapName = "Moderate Vision.bmp";
	SpriteList[6].Animations[1].Frames[0].TranslateX = 0.000;
	SpriteList[6].Animations[1].Frames[0].TranslateY = 0.000;
	SpriteList[6].Animations[1].Frames[0].Delay = 1;
	SpriteList[6].Animations[1].Frames[0].Width = 1553;
	SpriteList[6].Animations[1].Frames[0].Height = 1234;
	SpriteList[6].Animations[1].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[6].Animations[1].Frames[0].hFlip = false;
	SpriteList[6].Animations[1].Frames[0].vFlip = false;
	SpriteList[6].Animations[1].Frames[0].zRotation = 0;
	SpriteList[6].Animations[1].Frames[0].HotSpot[0].x = 776;
	SpriteList[6].Animations[1].Frames[0].HotSpot[0].y = 617;
	::SetRect( &SpriteList[6].Animations[1].Frames[0].BBox, 0, 0, 1552,1233);
	SpriteList[6].Animations[1].Frames[0].centerX = 776;
	SpriteList[6].Animations[1].Frames[0].centerY = 617;
	SpriteList[6].Animations[1].Frames[0].PegRegistered = false;
	SpriteList[6].Animations[1].Frames[0].useTransparency = true;


	SpriteList[6].Animations[2].TotalFrames=1;
	SpriteList[6].Animations[2].ConnectTo = 0;
	SpriteList[6].Animations[2].Frames = new FrameElem[1];

	SpriteList[6].Animations[2].Frames[0].BitmapName = "Amateur Vision.bmp";
	SpriteList[6].Animations[2].Frames[0].TranslateX = 0.000;
	SpriteList[6].Animations[2].Frames[0].TranslateY = 0.000;
	SpriteList[6].Animations[2].Frames[0].Delay = 1;
	SpriteList[6].Animations[2].Frames[0].Width = 1553;
	SpriteList[6].Animations[2].Frames[0].Height = 1234;
	SpriteList[6].Animations[2].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[6].Animations[2].Frames[0].hFlip = false;
	SpriteList[6].Animations[2].Frames[0].vFlip = false;
	SpriteList[6].Animations[2].Frames[0].zRotation = 0;
	SpriteList[6].Animations[2].Frames[0].HotSpot[0].x = 776;
	SpriteList[6].Animations[2].Frames[0].HotSpot[0].y = 617;
	::SetRect( &SpriteList[6].Animations[2].Frames[0].BBox, 0, 0, 1552,1233);
	SpriteList[6].Animations[2].Frames[0].centerX = 776;
	SpriteList[6].Animations[2].Frames[0].centerY = 617;
	SpriteList[6].Animations[2].Frames[0].PegRegistered = false;
	SpriteList[6].Animations[2].Frames[0].useTransparency = true;



	SpriteList[9].TotalAnimations = 3;
	SpriteList[9].Animations = new AnimationElem[3];

	SpriteList[9].Animations[0].TotalFrames=1;
	SpriteList[9].Animations[0].ConnectTo = 0;
	SpriteList[9].Animations[0].Frames = new FrameElem[1];

	SpriteList[9].Animations[0].Frames[0].BitmapName = "Button.bmp";
	SpriteList[9].Animations[0].Frames[0].TranslateX = 0.000;
	SpriteList[9].Animations[0].Frames[0].TranslateY = 0.000;
	SpriteList[9].Animations[0].Frames[0].Delay = 1;
	SpriteList[9].Animations[0].Frames[0].Width = 300;
	SpriteList[9].Animations[0].Frames[0].Height = 60;
	SpriteList[9].Animations[0].Frames[0].Transparency = RGB(0,0,0);
	SpriteList[9].Animations[0].Frames[0].hFlip = false;
	SpriteList[9].Animations[0].Frames[0].vFlip = false;
	SpriteList[9].Animations[0].Frames[0].zRotation = 0;
	SpriteList[9].Animations[0].Frames[0].HotSpot[0].x = 50;
	SpriteList[9].Animations[0].Frames[0].HotSpot[0].y = 25;
	::SetRect( &SpriteList[9].Animations[0].Frames[0].BBox, 0, 0, 299,59);
	SpriteList[9].Animations[0].Frames[0].centerX = 50;
	SpriteList[9].Animations[0].Frames[0].centerY = 25;
	SpriteList[9].Animations[0].Frames[0].PegRegistered = false;
	SpriteList[9].Animations[0].Frames[0].useTransparency = true;
	SpriteList[9].Animations[0].Frames[0].AddCollisionData(CollisionSegment(298,1,1,1,0,0));
	SpriteList[9].Animations[0].Frames[0].AddCollisionData(CollisionSegment(298,58,298,1,0,0));
	SpriteList[9].Animations[0].Frames[0].AddCollisionData(CollisionSegment(1,58,298,58,0,0));
	SpriteList[9].Animations[0].Frames[0].AddCollisionData(CollisionSegment(1,1,1,58,0,0));


	SpriteList[9].Animations[1].TotalFrames=1;
	SpriteList[9].Animations[1].ConnectTo = 0;
	SpriteList[9].Animations[1].Frames = new FrameElem[1];

	SpriteList[9].Animations[1].Frames[0].BitmapName = "Life Bar.bmp";
	SpriteList[9].Animations[1].Frames[0].TranslateX = 0.000;
	SpriteList[9].Animations[1].Frames[0].TranslateY = 0.000;
	SpriteList[9].Animations[1].Frames[0].Delay = 1;
	SpriteList[9].Animations[1].Frames[0].Width = 80;
	SpriteList[9].Animations[1].Frames[0].Height = 100;
	SpriteList[9].Animations[1].Frames[0].Transparency = RGB(240,240,240);
	SpriteList[9].Animations[1].Frames[0].hFlip = false;
	SpriteList[9].Animations[1].Frames[0].vFlip = false;
	SpriteList[9].Animations[1].Frames[0].zRotation = 0;
	SpriteList[9].Animations[1].Frames[0].HotSpot[0].x = 40;
	SpriteList[9].Animations[1].Frames[0].HotSpot[0].y = 50;
	::SetRect( &SpriteList[9].Animations[1].Frames[0].BBox, 0, 0, 79,99);
	SpriteList[9].Animations[1].Frames[0].centerX = 40;
	SpriteList[9].Animations[1].Frames[0].centerY = 50;
	SpriteList[9].Animations[1].Frames[0].PegRegistered = false;
	SpriteList[9].Animations[1].Frames[0].useTransparency = false;


	SpriteList[9].Animations[2].TotalFrames=1;
	SpriteList[9].Animations[2].ConnectTo = 0;
	SpriteList[9].Animations[2].Frames = new FrameElem[1];

	SpriteList[9].Animations[2].Frames[0].BitmapName = "Lives.bmp";
	SpriteList[9].Animations[2].Frames[0].TranslateX = 0.000;
	SpriteList[9].Animations[2].Frames[0].TranslateY = 0.000;
	SpriteList[9].Animations[2].Frames[0].Delay = 1;
	SpriteList[9].Animations[2].Frames[0].Width = 80;
	SpriteList[9].Animations[2].Frames[0].Height = 600;
	SpriteList[9].Animations[2].Frames[0].Transparency = RGB(240,240,240);
	SpriteList[9].Animations[2].Frames[0].hFlip = false;
	SpriteList[9].Animations[2].Frames[0].vFlip = false;
	SpriteList[9].Animations[2].Frames[0].zRotation = 0;
	SpriteList[9].Animations[2].Frames[0].HotSpot[0].x = 40;
	SpriteList[9].Animations[2].Frames[0].HotSpot[0].y = 300;
	::SetRect( &SpriteList[9].Animations[2].Frames[0].BBox, 0, 0, 79,599);
	SpriteList[9].Animations[2].Frames[0].centerX = 40;
	SpriteList[9].Animations[2].Frames[0].centerY = 300;
	SpriteList[9].Animations[2].Frames[0].PegRegistered = false;
	SpriteList[9].Animations[2].Frames[0].useTransparency = false;



	SpriteList[7].TotalAnimations = 1;
	SpriteList[7].Animations = new AnimationElem[1];

	SpriteList[7].Animations[0].TotalFrames=6;
	SpriteList[7].Animations[0].ConnectTo = 0;
	SpriteList[7].Animations[0].Frames = new FrameElem[6];

	SpriteList[7].Animations[0].Frames[0].BitmapName = "Restart 1.bmp";
	SpriteList[7].Animations[0].Frames[0].TranslateX = 0.000;
	SpriteList[7].Animations[0].Frames[0].TranslateY = 0.000;
	SpriteList[7].Animations[0].Frames[0].Delay = 1;
	SpriteList[7].Animations[0].Frames[0].Width = 800;
	SpriteList[7].Animations[0].Frames[0].Height = 600;
	SpriteList[7].Animations[0].Frames[0].Transparency = RGB(240,240,240);
	SpriteList[7].Animations[0].Frames[0].hFlip = false;
	SpriteList[7].Animations[0].Frames[0].vFlip = false;
	SpriteList[7].Animations[0].Frames[0].zRotation = 0;
	SpriteList[7].Animations[0].Frames[0].HotSpot[0].x = 400;
	SpriteList[7].Animations[0].Frames[0].HotSpot[0].y = 300;
	::SetRect( &SpriteList[7].Animations[0].Frames[0].BBox, 0, 0, 799,599);
	SpriteList[7].Animations[0].Frames[0].centerX = 400;
	SpriteList[7].Animations[0].Frames[0].centerY = 300;
	SpriteList[7].Animations[0].Frames[0].PegRegistered = false;
	SpriteList[7].Animations[0].Frames[0].useTransparency = false;

	SpriteList[7].Animations[0].Frames[1].BitmapName = "Restart 2.bmp";
	SpriteList[7].Animations[0].Frames[1].TranslateX = 0.000;
	SpriteList[7].Animations[0].Frames[1].TranslateY = 0.000;
	SpriteList[7].Animations[0].Frames[1].Delay = 1;
	SpriteList[7].Animations[0].Frames[1].Width = 800;
	SpriteList[7].Animations[0].Frames[1].Height = 600;
	SpriteList[7].Animations[0].Frames[1].Transparency = RGB(240,240,240);
	SpriteList[7].Animations[0].Frames[1].hFlip = false;
	SpriteList[7].Animations[0].Frames[1].vFlip = false;
	SpriteList[7].Animations[0].Frames[1].zRotation = 0;
	SpriteList[7].Animations[0].Frames[1].HotSpot[0].x = 400;
	SpriteList[7].Animations[0].Frames[1].HotSpot[0].y = 300;
	::SetRect( &SpriteList[7].Animations[0].Frames[1].BBox, 0, 0, 799,599);
	SpriteList[7].Animations[0].Frames[1].centerX = 400;
	SpriteList[7].Animations[0].Frames[1].centerY = 300;
	SpriteList[7].Animations[0].Frames[1].PegRegistered = false;
	SpriteList[7].Animations[0].Frames[1].useTransparency = false;

	SpriteList[7].Animations[0].Frames[2].BitmapName = "Restart 3.bmp";
	SpriteList[7].Animations[0].Frames[2].TranslateX = 0.000;
	SpriteList[7].Animations[0].Frames[2].TranslateY = 0.000;
	SpriteList[7].Animations[0].Frames[2].Delay = 1;
	SpriteList[7].Animations[0].Frames[2].Width = 800;
	SpriteList[7].Animations[0].Frames[2].Height = 600;
	SpriteList[7].Animations[0].Frames[2].Transparency = RGB(240,240,240);
	SpriteList[7].Animations[0].Frames[2].hFlip = false;
	SpriteList[7].Animations[0].Frames[2].vFlip = false;
	SpriteList[7].Animations[0].Frames[2].zRotation = 0;
	SpriteList[7].Animations[0].Frames[2].HotSpot[0].x = 400;
	SpriteList[7].Animations[0].Frames[2].HotSpot[0].y = 300;
	::SetRect( &SpriteList[7].Animations[0].Frames[2].BBox, 0, 0, 799,599);
	SpriteList[7].Animations[0].Frames[2].centerX = 400;
	SpriteList[7].Animations[0].Frames[2].centerY = 300;
	SpriteList[7].Animations[0].Frames[2].PegRegistered = false;
	SpriteList[7].Animations[0].Frames[2].useTransparency = false;

	SpriteList[7].Animations[0].Frames[3].BitmapName = "Restart 2.bmp";
	SpriteList[7].Animations[0].Frames[3].TranslateX = 0.000;
	SpriteList[7].Animations[0].Frames[3].TranslateY = 0.000;
	SpriteList[7].Animations[0].Frames[3].Delay = 1;
	SpriteList[7].Animations[0].Frames[3].Width = 800;
	SpriteList[7].Animations[0].Frames[3].Height = 600;
	SpriteList[7].Animations[0].Frames[3].Transparency = RGB(240,240,240);
	SpriteList[7].Animations[0].Frames[3].hFlip = false;
	SpriteList[7].Animations[0].Frames[3].vFlip = false;
	SpriteList[7].Animations[0].Frames[3].zRotation = 0;
	SpriteList[7].Animations[0].Frames[3].HotSpot[0].x = 400;
	SpriteList[7].Animations[0].Frames[3].HotSpot[0].y = 300;
	::SetRect( &SpriteList[7].Animations[0].Frames[3].BBox, 0, 0, 799,599);
	SpriteList[7].Animations[0].Frames[3].centerX = 400;
	SpriteList[7].Animations[0].Frames[3].centerY = 300;
	SpriteList[7].Animations[0].Frames[3].PegRegistered = false;
	SpriteList[7].Animations[0].Frames[3].useTransparency = false;

	SpriteList[7].Animations[0].Frames[4].BitmapName = "Restart 1.bmp";
	SpriteList[7].Animations[0].Frames[4].TranslateX = 0.000;
	SpriteList[7].Animations[0].Frames[4].TranslateY = 0.000;
	SpriteList[7].Animations[0].Frames[4].Delay = 1;
	SpriteList[7].Animations[0].Frames[4].Width = 800;
	SpriteList[7].Animations[0].Frames[4].Height = 600;
	SpriteList[7].Animations[0].Frames[4].Transparency = RGB(240,240,240);
	SpriteList[7].Animations[0].Frames[4].hFlip = false;
	SpriteList[7].Animations[0].Frames[4].vFlip = false;
	SpriteList[7].Animations[0].Frames[4].zRotation = 0;
	SpriteList[7].Animations[0].Frames[4].HotSpot[0].x = 400;
	SpriteList[7].Animations[0].Frames[4].HotSpot[0].y = 300;
	::SetRect( &SpriteList[7].Animations[0].Frames[4].BBox, 0, 0, 799,599);
	SpriteList[7].Animations[0].Frames[4].centerX = 400;
	SpriteList[7].Animations[0].Frames[4].centerY = 300;
	SpriteList[7].Animations[0].Frames[4].PegRegistered = false;
	SpriteList[7].Animations[0].Frames[4].useTransparency = false;

	SpriteList[7].Animations[0].Frames[5].BitmapName = "Restart 3.bmp";
	SpriteList[7].Animations[0].Frames[5].TranslateX = 0.000;
	SpriteList[7].Animations[0].Frames[5].TranslateY = 0.000;
	SpriteList[7].Animations[0].Frames[5].Delay = 1;
	SpriteList[7].Animations[0].Frames[5].Width = 800;
	SpriteList[7].Animations[0].Frames[5].Height = 600;
	SpriteList[7].Animations[0].Frames[5].Transparency = RGB(240,240,240);
	SpriteList[7].Animations[0].Frames[5].hFlip = false;
	SpriteList[7].Animations[0].Frames[5].vFlip = false;
	SpriteList[7].Animations[0].Frames[5].zRotation = 0;
	SpriteList[7].Animations[0].Frames[5].HotSpot[0].x = 400;
	SpriteList[7].Animations[0].Frames[5].HotSpot[0].y = 300;
	::SetRect( &SpriteList[7].Animations[0].Frames[5].BBox, 0, 0, 799,599);
	SpriteList[7].Animations[0].Frames[5].centerX = 400;
	SpriteList[7].Animations[0].Frames[5].centerY = 300;
	SpriteList[7].Animations[0].Frames[5].PegRegistered = false;
	SpriteList[7].Animations[0].Frames[5].useTransparency = false;



}

void LoadAnimation_Level_1(GameNode* gn)
{
	SpriteList[4].TotalAnimations = 7;
	SpriteList[4].Animations = new AnimationElem[7];

	SpriteList[4].Animations[0].TotalFrames=1;
	SpriteList[4].Animations[0].ConnectTo = 0;
	SpriteList[4].Animations[0].Frames = new FrameElem[1];

	SpriteList[4].Animations[0].Frames[0].BitmapName = "Wall.bmp";
	SpriteList[4].Animations[0].Frames[0].TranslateX = 0.000;
	SpriteList[4].Animations[0].Frames[0].TranslateY = 0.000;
	SpriteList[4].Animations[0].Frames[0].Delay = 1;
	SpriteList[4].Animations[0].Frames[0].Width = 30;
	SpriteList[4].Animations[0].Frames[0].Height = 30;
	SpriteList[4].Animations[0].Frames[0].Transparency = RGB(240,240,240);
	SpriteList[4].Animations[0].Frames[0].hFlip = false;
	SpriteList[4].Animations[0].Frames[0].vFlip = false;
	SpriteList[4].Animations[0].Frames[0].zRotation = 0;
	SpriteList[4].Animations[0].Frames[0].HotSpot[0].x = 15;
	SpriteList[4].Animations[0].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[4].Animations[0].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[4].Animations[0].Frames[0].centerX = 15;
	SpriteList[4].Animations[0].Frames[0].centerY = 15;
	SpriteList[4].Animations[0].Frames[0].PegRegistered = false;
	SpriteList[4].Animations[0].Frames[0].useTransparency = false;


	SpriteList[4].Animations[1].TotalFrames=3;
	SpriteList[4].Animations[1].ConnectTo = 0;
	SpriteList[4].Animations[1].Frames = new FrameElem[3];

	SpriteList[4].Animations[1].Frames[0].BitmapName = "Server 1.bmp";
	SpriteList[4].Animations[1].Frames[0].TranslateX = 0.000;
	SpriteList[4].Animations[1].Frames[0].TranslateY = 0.000;
	SpriteList[4].Animations[1].Frames[0].Delay = 21;
	SpriteList[4].Animations[1].Frames[0].Width = 30;
	SpriteList[4].Animations[1].Frames[0].Height = 30;
	SpriteList[4].Animations[1].Frames[0].Transparency = RGB(240,240,240);
	SpriteList[4].Animations[1].Frames[0].hFlip = false;
	SpriteList[4].Animations[1].Frames[0].vFlip = false;
	SpriteList[4].Animations[1].Frames[0].zRotation = 0;
	SpriteList[4].Animations[1].Frames[0].HotSpot[0].x = 15;
	SpriteList[4].Animations[1].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[4].Animations[1].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[4].Animations[1].Frames[0].centerX = 15;
	SpriteList[4].Animations[1].Frames[0].centerY = 15;
	SpriteList[4].Animations[1].Frames[0].PegRegistered = false;
	SpriteList[4].Animations[1].Frames[0].useTransparency = false;

	SpriteList[4].Animations[1].Frames[1].BitmapName = "Server 2.bmp";
	SpriteList[4].Animations[1].Frames[1].TranslateX = 0.000;
	SpriteList[4].Animations[1].Frames[1].TranslateY = 0.000;
	SpriteList[4].Animations[1].Frames[1].Delay = 21;
	SpriteList[4].Animations[1].Frames[1].Width = 30;
	SpriteList[4].Animations[1].Frames[1].Height = 30;
	SpriteList[4].Animations[1].Frames[1].Transparency = RGB(240,240,240);
	SpriteList[4].Animations[1].Frames[1].hFlip = false;
	SpriteList[4].Animations[1].Frames[1].vFlip = false;
	SpriteList[4].Animations[1].Frames[1].zRotation = 0;
	SpriteList[4].Animations[1].Frames[1].HotSpot[0].x = 15;
	SpriteList[4].Animations[1].Frames[1].HotSpot[0].y = 15;
	::SetRect( &SpriteList[4].Animations[1].Frames[1].BBox, 0, 0, 29,29);
	SpriteList[4].Animations[1].Frames[1].centerX = 15;
	SpriteList[4].Animations[1].Frames[1].centerY = 15;
	SpriteList[4].Animations[1].Frames[1].PegRegistered = false;
	SpriteList[4].Animations[1].Frames[1].useTransparency = false;

	SpriteList[4].Animations[1].Frames[2].BitmapName = "Server 3.bmp";
	SpriteList[4].Animations[1].Frames[2].TranslateX = 0.000;
	SpriteList[4].Animations[1].Frames[2].TranslateY = 0.000;
	SpriteList[4].Animations[1].Frames[2].Delay = 21;
	SpriteList[4].Animations[1].Frames[2].Width = 30;
	SpriteList[4].Animations[1].Frames[2].Height = 30;
	SpriteList[4].Animations[1].Frames[2].Transparency = RGB(240,240,240);
	SpriteList[4].Animations[1].Frames[2].hFlip = false;
	SpriteList[4].Animations[1].Frames[2].vFlip = false;
	SpriteList[4].Animations[1].Frames[2].zRotation = 0;
	SpriteList[4].Animations[1].Frames[2].HotSpot[0].x = 15;
	SpriteList[4].Animations[1].Frames[2].HotSpot[0].y = 15;
	::SetRect( &SpriteList[4].Animations[1].Frames[2].BBox, 0, 0, 29,29);
	SpriteList[4].Animations[1].Frames[2].centerX = 15;
	SpriteList[4].Animations[1].Frames[2].centerY = 15;
	SpriteList[4].Animations[1].Frames[2].PegRegistered = false;
	SpriteList[4].Animations[1].Frames[2].useTransparency = false;


	SpriteList[4].Animations[2].TotalFrames=1;
	SpriteList[4].Animations[2].ConnectTo = 0;
	SpriteList[4].Animations[2].Frames = new FrameElem[1];

	SpriteList[4].Animations[2].Frames[0].BitmapName = "Door 1.bmp";
	SpriteList[4].Animations[2].Frames[0].TranslateX = 0.000;
	SpriteList[4].Animations[2].Frames[0].TranslateY = 0.000;
	SpriteList[4].Animations[2].Frames[0].Delay = 1;
	SpriteList[4].Animations[2].Frames[0].Width = 30;
	SpriteList[4].Animations[2].Frames[0].Height = 30;
	SpriteList[4].Animations[2].Frames[0].Transparency = RGB(240,240,240);
	SpriteList[4].Animations[2].Frames[0].hFlip = false;
	SpriteList[4].Animations[2].Frames[0].vFlip = false;
	SpriteList[4].Animations[2].Frames[0].zRotation = 0;
	SpriteList[4].Animations[2].Frames[0].HotSpot[0].x = 15;
	SpriteList[4].Animations[2].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[4].Animations[2].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[4].Animations[2].Frames[0].centerX = 15;
	SpriteList[4].Animations[2].Frames[0].centerY = 15;
	SpriteList[4].Animations[2].Frames[0].PegRegistered = false;
	SpriteList[4].Animations[2].Frames[0].useTransparency = false;


	SpriteList[4].Animations[3].TotalFrames=1;
	SpriteList[4].Animations[3].ConnectTo = 0;
	SpriteList[4].Animations[3].Frames = new FrameElem[1];

	SpriteList[4].Animations[3].Frames[0].BitmapName = "Door 2.bmp";
	SpriteList[4].Animations[3].Frames[0].TranslateX = 0.000;
	SpriteList[4].Animations[3].Frames[0].TranslateY = 0.000;
	SpriteList[4].Animations[3].Frames[0].Delay = 1;
	SpriteList[4].Animations[3].Frames[0].Width = 30;
	SpriteList[4].Animations[3].Frames[0].Height = 30;
	SpriteList[4].Animations[3].Frames[0].Transparency = RGB(240,240,240);
	SpriteList[4].Animations[3].Frames[0].hFlip = false;
	SpriteList[4].Animations[3].Frames[0].vFlip = false;
	SpriteList[4].Animations[3].Frames[0].zRotation = 0;
	SpriteList[4].Animations[3].Frames[0].HotSpot[0].x = 15;
	SpriteList[4].Animations[3].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[4].Animations[3].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[4].Animations[3].Frames[0].centerX = 15;
	SpriteList[4].Animations[3].Frames[0].centerY = 15;
	SpriteList[4].Animations[3].Frames[0].PegRegistered = false;
	SpriteList[4].Animations[3].Frames[0].useTransparency = false;


	SpriteList[4].Animations[4].TotalFrames=1;
	SpriteList[4].Animations[4].ConnectTo = 0;
	SpriteList[4].Animations[4].Frames = new FrameElem[1];

	SpriteList[4].Animations[4].Frames[0].BitmapName = "Bed 1.bmp";
	SpriteList[4].Animations[4].Frames[0].TranslateX = 0.000;
	SpriteList[4].Animations[4].Frames[0].TranslateY = 0.000;
	SpriteList[4].Animations[4].Frames[0].Delay = 1;
	SpriteList[4].Animations[4].Frames[0].Width = 30;
	SpriteList[4].Animations[4].Frames[0].Height = 30;
	SpriteList[4].Animations[4].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[4].Animations[4].Frames[0].hFlip = false;
	SpriteList[4].Animations[4].Frames[0].vFlip = false;
	SpriteList[4].Animations[4].Frames[0].zRotation = 0;
	SpriteList[4].Animations[4].Frames[0].HotSpot[0].x = 15;
	SpriteList[4].Animations[4].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[4].Animations[4].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[4].Animations[4].Frames[0].centerX = 15;
	SpriteList[4].Animations[4].Frames[0].centerY = 15;
	SpriteList[4].Animations[4].Frames[0].PegRegistered = false;
	SpriteList[4].Animations[4].Frames[0].useTransparency = true;


	SpriteList[4].Animations[5].TotalFrames=1;
	SpriteList[4].Animations[5].ConnectTo = 0;
	SpriteList[4].Animations[5].Frames = new FrameElem[1];

	SpriteList[4].Animations[5].Frames[0].BitmapName = "Bed 2.bmp";
	SpriteList[4].Animations[5].Frames[0].TranslateX = 0.000;
	SpriteList[4].Animations[5].Frames[0].TranslateY = 0.000;
	SpriteList[4].Animations[5].Frames[0].Delay = 1;
	SpriteList[4].Animations[5].Frames[0].Width = 30;
	SpriteList[4].Animations[5].Frames[0].Height = 30;
	SpriteList[4].Animations[5].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[4].Animations[5].Frames[0].hFlip = false;
	SpriteList[4].Animations[5].Frames[0].vFlip = false;
	SpriteList[4].Animations[5].Frames[0].zRotation = 0;
	SpriteList[4].Animations[5].Frames[0].HotSpot[0].x = 15;
	SpriteList[4].Animations[5].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[4].Animations[5].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[4].Animations[5].Frames[0].centerX = 15;
	SpriteList[4].Animations[5].Frames[0].centerY = 15;
	SpriteList[4].Animations[5].Frames[0].PegRegistered = false;
	SpriteList[4].Animations[5].Frames[0].useTransparency = true;


	SpriteList[4].Animations[6].TotalFrames=1;
	SpriteList[4].Animations[6].ConnectTo = 0;
	SpriteList[4].Animations[6].Frames = new FrameElem[1];

	SpriteList[4].Animations[6].Frames[0].BitmapName = "Bed 3.bmp";
	SpriteList[4].Animations[6].Frames[0].TranslateX = 0.000;
	SpriteList[4].Animations[6].Frames[0].TranslateY = 0.000;
	SpriteList[4].Animations[6].Frames[0].Delay = 1;
	SpriteList[4].Animations[6].Frames[0].Width = 30;
	SpriteList[4].Animations[6].Frames[0].Height = 30;
	SpriteList[4].Animations[6].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[4].Animations[6].Frames[0].hFlip = false;
	SpriteList[4].Animations[6].Frames[0].vFlip = false;
	SpriteList[4].Animations[6].Frames[0].zRotation = 0;
	SpriteList[4].Animations[6].Frames[0].HotSpot[0].x = 15;
	SpriteList[4].Animations[6].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[4].Animations[6].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[4].Animations[6].Frames[0].centerX = 15;
	SpriteList[4].Animations[6].Frames[0].centerY = 15;
	SpriteList[4].Animations[6].Frames[0].PegRegistered = false;
	SpriteList[4].Animations[6].Frames[0].useTransparency = true;



	SpriteList[0].TotalAnimations = 8;
	SpriteList[0].Animations = new AnimationElem[8];

	SpriteList[0].Animations[0].TotalFrames=4;
	SpriteList[0].Animations[0].ConnectTo = 0;
	SpriteList[0].Animations[0].Frames = new FrameElem[4];

	SpriteList[0].Animations[0].Frames[0].BitmapName = "SpaceMan Left 1.bmp";
	SpriteList[0].Animations[0].Frames[0].TranslateX = 0.000;
	SpriteList[0].Animations[0].Frames[0].TranslateY = 0.000;
	SpriteList[0].Animations[0].Frames[0].Delay = 7;
	SpriteList[0].Animations[0].Frames[0].Width = 30;
	SpriteList[0].Animations[0].Frames[0].Height = 30;
	SpriteList[0].Animations[0].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[0].Animations[0].Frames[0].hFlip = false;
	SpriteList[0].Animations[0].Frames[0].vFlip = false;
	SpriteList[0].Animations[0].Frames[0].zRotation = 0;
	SpriteList[0].Animations[0].Frames[0].HotSpot[0].x = 15;
	SpriteList[0].Animations[0].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[0].Animations[0].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[0].Animations[0].Frames[0].centerX = 15;
	SpriteList[0].Animations[0].Frames[0].centerY = 15;
	SpriteList[0].Animations[0].Frames[0].PegRegistered = false;
	SpriteList[0].Animations[0].Frames[0].useTransparency = true;

	SpriteList[0].Animations[0].Frames[1].BitmapName = "SpaceMan Left 2.bmp";
	SpriteList[0].Animations[0].Frames[1].TranslateX = 0.000;
	SpriteList[0].Animations[0].Frames[1].TranslateY = 0.000;
	SpriteList[0].Animations[0].Frames[1].Delay = 7;
	SpriteList[0].Animations[0].Frames[1].Width = 30;
	SpriteList[0].Animations[0].Frames[1].Height = 30;
	SpriteList[0].Animations[0].Frames[1].Transparency = RGB(255,255,255);
	SpriteList[0].Animations[0].Frames[1].hFlip = false;
	SpriteList[0].Animations[0].Frames[1].vFlip = false;
	SpriteList[0].Animations[0].Frames[1].zRotation = 0;
	SpriteList[0].Animations[0].Frames[1].HotSpot[0].x = 15;
	SpriteList[0].Animations[0].Frames[1].HotSpot[0].y = 15;
	::SetRect( &SpriteList[0].Animations[0].Frames[1].BBox, 0, 0, 29,29);
	SpriteList[0].Animations[0].Frames[1].centerX = 15;
	SpriteList[0].Animations[0].Frames[1].centerY = 15;
	SpriteList[0].Animations[0].Frames[1].PegRegistered = false;
	SpriteList[0].Animations[0].Frames[1].useTransparency = true;

	SpriteList[0].Animations[0].Frames[2].BitmapName = "SpaceMan Left 3.bmp";
	SpriteList[0].Animations[0].Frames[2].TranslateX = 0.000;
	SpriteList[0].Animations[0].Frames[2].TranslateY = 0.000;
	SpriteList[0].Animations[0].Frames[2].Delay = 7;
	SpriteList[0].Animations[0].Frames[2].Width = 30;
	SpriteList[0].Animations[0].Frames[2].Height = 30;
	SpriteList[0].Animations[0].Frames[2].Transparency = RGB(255,255,255);
	SpriteList[0].Animations[0].Frames[2].hFlip = false;
	SpriteList[0].Animations[0].Frames[2].vFlip = false;
	SpriteList[0].Animations[0].Frames[2].zRotation = 0;
	SpriteList[0].Animations[0].Frames[2].HotSpot[0].x = 15;
	SpriteList[0].Animations[0].Frames[2].HotSpot[0].y = 15;
	::SetRect( &SpriteList[0].Animations[0].Frames[2].BBox, 0, 0, 29,29);
	SpriteList[0].Animations[0].Frames[2].centerX = 15;
	SpriteList[0].Animations[0].Frames[2].centerY = 15;
	SpriteList[0].Animations[0].Frames[2].PegRegistered = false;
	SpriteList[0].Animations[0].Frames[2].useTransparency = true;

	SpriteList[0].Animations[0].Frames[3].BitmapName = "SpaceMan Left 2.bmp";
	SpriteList[0].Animations[0].Frames[3].TranslateX = 0.000;
	SpriteList[0].Animations[0].Frames[3].TranslateY = 0.000;
	SpriteList[0].Animations[0].Frames[3].Delay = 7;
	SpriteList[0].Animations[0].Frames[3].Width = 30;
	SpriteList[0].Animations[0].Frames[3].Height = 30;
	SpriteList[0].Animations[0].Frames[3].Transparency = RGB(255,255,255);
	SpriteList[0].Animations[0].Frames[3].hFlip = false;
	SpriteList[0].Animations[0].Frames[3].vFlip = false;
	SpriteList[0].Animations[0].Frames[3].zRotation = 0;
	SpriteList[0].Animations[0].Frames[3].HotSpot[0].x = 15;
	SpriteList[0].Animations[0].Frames[3].HotSpot[0].y = 15;
	::SetRect( &SpriteList[0].Animations[0].Frames[3].BBox, 0, 0, 29,29);
	SpriteList[0].Animations[0].Frames[3].centerX = 15;
	SpriteList[0].Animations[0].Frames[3].centerY = 15;
	SpriteList[0].Animations[0].Frames[3].PegRegistered = false;
	SpriteList[0].Animations[0].Frames[3].useTransparency = true;


	SpriteList[0].Animations[1].TotalFrames=4;
	SpriteList[0].Animations[1].ConnectTo = 0;
	SpriteList[0].Animations[1].Frames = new FrameElem[4];

	SpriteList[0].Animations[1].Frames[0].BitmapName = "SpaceMan Right 1.bmp";
	SpriteList[0].Animations[1].Frames[0].TranslateX = 0.000;
	SpriteList[0].Animations[1].Frames[0].TranslateY = 0.000;
	SpriteList[0].Animations[1].Frames[0].Delay = 7;
	SpriteList[0].Animations[1].Frames[0].Width = 30;
	SpriteList[0].Animations[1].Frames[0].Height = 30;
	SpriteList[0].Animations[1].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[0].Animations[1].Frames[0].hFlip = false;
	SpriteList[0].Animations[1].Frames[0].vFlip = false;
	SpriteList[0].Animations[1].Frames[0].zRotation = 0;
	SpriteList[0].Animations[1].Frames[0].HotSpot[0].x = 15;
	SpriteList[0].Animations[1].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[0].Animations[1].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[0].Animations[1].Frames[0].centerX = 15;
	SpriteList[0].Animations[1].Frames[0].centerY = 15;
	SpriteList[0].Animations[1].Frames[0].PegRegistered = false;
	SpriteList[0].Animations[1].Frames[0].useTransparency = true;

	SpriteList[0].Animations[1].Frames[1].BitmapName = "SpaceMan Right 2.bmp";
	SpriteList[0].Animations[1].Frames[1].TranslateX = 0.000;
	SpriteList[0].Animations[1].Frames[1].TranslateY = 0.000;
	SpriteList[0].Animations[1].Frames[1].Delay = 7;
	SpriteList[0].Animations[1].Frames[1].Width = 30;
	SpriteList[0].Animations[1].Frames[1].Height = 30;
	SpriteList[0].Animations[1].Frames[1].Transparency = RGB(255,255,255);
	SpriteList[0].Animations[1].Frames[1].hFlip = false;
	SpriteList[0].Animations[1].Frames[1].vFlip = false;
	SpriteList[0].Animations[1].Frames[1].zRotation = 0;
	SpriteList[0].Animations[1].Frames[1].HotSpot[0].x = 15;
	SpriteList[0].Animations[1].Frames[1].HotSpot[0].y = 15;
	::SetRect( &SpriteList[0].Animations[1].Frames[1].BBox, 0, 0, 29,29);
	SpriteList[0].Animations[1].Frames[1].centerX = 15;
	SpriteList[0].Animations[1].Frames[1].centerY = 15;
	SpriteList[0].Animations[1].Frames[1].PegRegistered = false;
	SpriteList[0].Animations[1].Frames[1].useTransparency = true;

	SpriteList[0].Animations[1].Frames[2].BitmapName = "SpaceMan Right 3.bmp";
	SpriteList[0].Animations[1].Frames[2].TranslateX = 0.000;
	SpriteList[0].Animations[1].Frames[2].TranslateY = 0.000;
	SpriteList[0].Animations[1].Frames[2].Delay = 7;
	SpriteList[0].Animations[1].Frames[2].Width = 30;
	SpriteList[0].Animations[1].Frames[2].Height = 30;
	SpriteList[0].Animations[1].Frames[2].Transparency = RGB(255,255,255);
	SpriteList[0].Animations[1].Frames[2].hFlip = false;
	SpriteList[0].Animations[1].Frames[2].vFlip = false;
	SpriteList[0].Animations[1].Frames[2].zRotation = 0;
	SpriteList[0].Animations[1].Frames[2].HotSpot[0].x = 15;
	SpriteList[0].Animations[1].Frames[2].HotSpot[0].y = 15;
	::SetRect( &SpriteList[0].Animations[1].Frames[2].BBox, 0, 0, 29,29);
	SpriteList[0].Animations[1].Frames[2].centerX = 15;
	SpriteList[0].Animations[1].Frames[2].centerY = 15;
	SpriteList[0].Animations[1].Frames[2].PegRegistered = false;
	SpriteList[0].Animations[1].Frames[2].useTransparency = true;

	SpriteList[0].Animations[1].Frames[3].BitmapName = "SpaceMan Right 2.bmp";
	SpriteList[0].Animations[1].Frames[3].TranslateX = 0.000;
	SpriteList[0].Animations[1].Frames[3].TranslateY = 0.000;
	SpriteList[0].Animations[1].Frames[3].Delay = 7;
	SpriteList[0].Animations[1].Frames[3].Width = 30;
	SpriteList[0].Animations[1].Frames[3].Height = 30;
	SpriteList[0].Animations[1].Frames[3].Transparency = RGB(255,255,255);
	SpriteList[0].Animations[1].Frames[3].hFlip = false;
	SpriteList[0].Animations[1].Frames[3].vFlip = false;
	SpriteList[0].Animations[1].Frames[3].zRotation = 0;
	SpriteList[0].Animations[1].Frames[3].HotSpot[0].x = 15;
	SpriteList[0].Animations[1].Frames[3].HotSpot[0].y = 15;
	::SetRect( &SpriteList[0].Animations[1].Frames[3].BBox, 0, 0, 29,29);
	SpriteList[0].Animations[1].Frames[3].centerX = 15;
	SpriteList[0].Animations[1].Frames[3].centerY = 15;
	SpriteList[0].Animations[1].Frames[3].PegRegistered = false;
	SpriteList[0].Animations[1].Frames[3].useTransparency = true;


	SpriteList[0].Animations[2].TotalFrames=4;
	SpriteList[0].Animations[2].ConnectTo = 0;
	SpriteList[0].Animations[2].Frames = new FrameElem[4];

	SpriteList[0].Animations[2].Frames[0].BitmapName = "SpaceMan Back 1.bmp";
	SpriteList[0].Animations[2].Frames[0].TranslateX = 0.000;
	SpriteList[0].Animations[2].Frames[0].TranslateY = 0.000;
	SpriteList[0].Animations[2].Frames[0].Delay = 7;
	SpriteList[0].Animations[2].Frames[0].Width = 30;
	SpriteList[0].Animations[2].Frames[0].Height = 30;
	SpriteList[0].Animations[2].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[0].Animations[2].Frames[0].hFlip = false;
	SpriteList[0].Animations[2].Frames[0].vFlip = false;
	SpriteList[0].Animations[2].Frames[0].zRotation = 0;
	SpriteList[0].Animations[2].Frames[0].HotSpot[0].x = 15;
	SpriteList[0].Animations[2].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[0].Animations[2].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[0].Animations[2].Frames[0].centerX = 15;
	SpriteList[0].Animations[2].Frames[0].centerY = 15;
	SpriteList[0].Animations[2].Frames[0].PegRegistered = false;
	SpriteList[0].Animations[2].Frames[0].useTransparency = true;

	SpriteList[0].Animations[2].Frames[1].BitmapName = "SpaceMan Back 2.bmp";
	SpriteList[0].Animations[2].Frames[1].TranslateX = 0.000;
	SpriteList[0].Animations[2].Frames[1].TranslateY = 0.000;
	SpriteList[0].Animations[2].Frames[1].Delay = 7;
	SpriteList[0].Animations[2].Frames[1].Width = 30;
	SpriteList[0].Animations[2].Frames[1].Height = 30;
	SpriteList[0].Animations[2].Frames[1].Transparency = RGB(255,255,255);
	SpriteList[0].Animations[2].Frames[1].hFlip = false;
	SpriteList[0].Animations[2].Frames[1].vFlip = false;
	SpriteList[0].Animations[2].Frames[1].zRotation = 0;
	SpriteList[0].Animations[2].Frames[1].HotSpot[0].x = 15;
	SpriteList[0].Animations[2].Frames[1].HotSpot[0].y = 15;
	::SetRect( &SpriteList[0].Animations[2].Frames[1].BBox, 0, 0, 29,29);
	SpriteList[0].Animations[2].Frames[1].centerX = 15;
	SpriteList[0].Animations[2].Frames[1].centerY = 15;
	SpriteList[0].Animations[2].Frames[1].PegRegistered = false;
	SpriteList[0].Animations[2].Frames[1].useTransparency = true;

	SpriteList[0].Animations[2].Frames[2].BitmapName = "SpaceMan Back 3.bmp";
	SpriteList[0].Animations[2].Frames[2].TranslateX = 0.000;
	SpriteList[0].Animations[2].Frames[2].TranslateY = 0.000;
	SpriteList[0].Animations[2].Frames[2].Delay = 7;
	SpriteList[0].Animations[2].Frames[2].Width = 30;
	SpriteList[0].Animations[2].Frames[2].Height = 30;
	SpriteList[0].Animations[2].Frames[2].Transparency = RGB(255,255,255);
	SpriteList[0].Animations[2].Frames[2].hFlip = false;
	SpriteList[0].Animations[2].Frames[2].vFlip = false;
	SpriteList[0].Animations[2].Frames[2].zRotation = 0;
	SpriteList[0].Animations[2].Frames[2].HotSpot[0].x = 15;
	SpriteList[0].Animations[2].Frames[2].HotSpot[0].y = 15;
	::SetRect( &SpriteList[0].Animations[2].Frames[2].BBox, 0, 0, 29,29);
	SpriteList[0].Animations[2].Frames[2].centerX = 15;
	SpriteList[0].Animations[2].Frames[2].centerY = 15;
	SpriteList[0].Animations[2].Frames[2].PegRegistered = false;
	SpriteList[0].Animations[2].Frames[2].useTransparency = true;

	SpriteList[0].Animations[2].Frames[3].BitmapName = "SpaceMan Back 2.bmp";
	SpriteList[0].Animations[2].Frames[3].TranslateX = 0.000;
	SpriteList[0].Animations[2].Frames[3].TranslateY = 0.000;
	SpriteList[0].Animations[2].Frames[3].Delay = 7;
	SpriteList[0].Animations[2].Frames[3].Width = 30;
	SpriteList[0].Animations[2].Frames[3].Height = 30;
	SpriteList[0].Animations[2].Frames[3].Transparency = RGB(255,255,255);
	SpriteList[0].Animations[2].Frames[3].hFlip = false;
	SpriteList[0].Animations[2].Frames[3].vFlip = false;
	SpriteList[0].Animations[2].Frames[3].zRotation = 0;
	SpriteList[0].Animations[2].Frames[3].HotSpot[0].x = 15;
	SpriteList[0].Animations[2].Frames[3].HotSpot[0].y = 15;
	::SetRect( &SpriteList[0].Animations[2].Frames[3].BBox, 0, 0, 29,29);
	SpriteList[0].Animations[2].Frames[3].centerX = 15;
	SpriteList[0].Animations[2].Frames[3].centerY = 15;
	SpriteList[0].Animations[2].Frames[3].PegRegistered = false;
	SpriteList[0].Animations[2].Frames[3].useTransparency = true;


	SpriteList[0].Animations[3].TotalFrames=4;
	SpriteList[0].Animations[3].ConnectTo = 0;
	SpriteList[0].Animations[3].Frames = new FrameElem[4];

	SpriteList[0].Animations[3].Frames[0].BitmapName = "SpaceMan 1.bmp";
	SpriteList[0].Animations[3].Frames[0].TranslateX = 0.000;
	SpriteList[0].Animations[3].Frames[0].TranslateY = 0.000;
	SpriteList[0].Animations[3].Frames[0].Delay = 7;
	SpriteList[0].Animations[3].Frames[0].Width = 30;
	SpriteList[0].Animations[3].Frames[0].Height = 30;
	SpriteList[0].Animations[3].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[0].Animations[3].Frames[0].hFlip = false;
	SpriteList[0].Animations[3].Frames[0].vFlip = false;
	SpriteList[0].Animations[3].Frames[0].zRotation = 0;
	SpriteList[0].Animations[3].Frames[0].HotSpot[0].x = 15;
	SpriteList[0].Animations[3].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[0].Animations[3].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[0].Animations[3].Frames[0].centerX = 15;
	SpriteList[0].Animations[3].Frames[0].centerY = 15;
	SpriteList[0].Animations[3].Frames[0].PegRegistered = false;
	SpriteList[0].Animations[3].Frames[0].useTransparency = true;

	SpriteList[0].Animations[3].Frames[1].BitmapName = "SpaceMan 2.bmp";
	SpriteList[0].Animations[3].Frames[1].TranslateX = 0.000;
	SpriteList[0].Animations[3].Frames[1].TranslateY = 0.000;
	SpriteList[0].Animations[3].Frames[1].Delay = 7;
	SpriteList[0].Animations[3].Frames[1].Width = 30;
	SpriteList[0].Animations[3].Frames[1].Height = 30;
	SpriteList[0].Animations[3].Frames[1].Transparency = RGB(255,255,255);
	SpriteList[0].Animations[3].Frames[1].hFlip = false;
	SpriteList[0].Animations[3].Frames[1].vFlip = false;
	SpriteList[0].Animations[3].Frames[1].zRotation = 0;
	SpriteList[0].Animations[3].Frames[1].HotSpot[0].x = 15;
	SpriteList[0].Animations[3].Frames[1].HotSpot[0].y = 15;
	::SetRect( &SpriteList[0].Animations[3].Frames[1].BBox, 0, 0, 29,29);
	SpriteList[0].Animations[3].Frames[1].centerX = 15;
	SpriteList[0].Animations[3].Frames[1].centerY = 15;
	SpriteList[0].Animations[3].Frames[1].PegRegistered = false;
	SpriteList[0].Animations[3].Frames[1].useTransparency = true;

	SpriteList[0].Animations[3].Frames[2].BitmapName = "SpaceMan 3.bmp";
	SpriteList[0].Animations[3].Frames[2].TranslateX = 0.000;
	SpriteList[0].Animations[3].Frames[2].TranslateY = 0.000;
	SpriteList[0].Animations[3].Frames[2].Delay = 7;
	SpriteList[0].Animations[3].Frames[2].Width = 30;
	SpriteList[0].Animations[3].Frames[2].Height = 30;
	SpriteList[0].Animations[3].Frames[2].Transparency = RGB(255,255,255);
	SpriteList[0].Animations[3].Frames[2].hFlip = false;
	SpriteList[0].Animations[3].Frames[2].vFlip = false;
	SpriteList[0].Animations[3].Frames[2].zRotation = 0;
	SpriteList[0].Animations[3].Frames[2].HotSpot[0].x = 15;
	SpriteList[0].Animations[3].Frames[2].HotSpot[0].y = 15;
	::SetRect( &SpriteList[0].Animations[3].Frames[2].BBox, 0, 0, 29,29);
	SpriteList[0].Animations[3].Frames[2].centerX = 15;
	SpriteList[0].Animations[3].Frames[2].centerY = 15;
	SpriteList[0].Animations[3].Frames[2].PegRegistered = false;
	SpriteList[0].Animations[3].Frames[2].useTransparency = true;

	SpriteList[0].Animations[3].Frames[3].BitmapName = "SpaceMan 2.bmp";
	SpriteList[0].Animations[3].Frames[3].TranslateX = 0.000;
	SpriteList[0].Animations[3].Frames[3].TranslateY = 0.000;
	SpriteList[0].Animations[3].Frames[3].Delay = 7;
	SpriteList[0].Animations[3].Frames[3].Width = 30;
	SpriteList[0].Animations[3].Frames[3].Height = 30;
	SpriteList[0].Animations[3].Frames[3].Transparency = RGB(255,255,255);
	SpriteList[0].Animations[3].Frames[3].hFlip = false;
	SpriteList[0].Animations[3].Frames[3].vFlip = false;
	SpriteList[0].Animations[3].Frames[3].zRotation = 0;
	SpriteList[0].Animations[3].Frames[3].HotSpot[0].x = 15;
	SpriteList[0].Animations[3].Frames[3].HotSpot[0].y = 15;
	::SetRect( &SpriteList[0].Animations[3].Frames[3].BBox, 0, 0, 29,29);
	SpriteList[0].Animations[3].Frames[3].centerX = 15;
	SpriteList[0].Animations[3].Frames[3].centerY = 15;
	SpriteList[0].Animations[3].Frames[3].PegRegistered = false;
	SpriteList[0].Animations[3].Frames[3].useTransparency = true;


	SpriteList[0].Animations[4].TotalFrames=2;
	SpriteList[0].Animations[4].ConnectTo = 0;
	SpriteList[0].Animations[4].Frames = new FrameElem[2];

	SpriteList[0].Animations[4].Frames[0].BitmapName = "SpaceMan 2.bmp";
	SpriteList[0].Animations[4].Frames[0].TranslateX = 0.000;
	SpriteList[0].Animations[4].Frames[0].TranslateY = 0.000;
	SpriteList[0].Animations[4].Frames[0].Delay = 20;
	SpriteList[0].Animations[4].Frames[0].Width = 30;
	SpriteList[0].Animations[4].Frames[0].Height = 30;
	SpriteList[0].Animations[4].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[0].Animations[4].Frames[0].hFlip = false;
	SpriteList[0].Animations[4].Frames[0].vFlip = false;
	SpriteList[0].Animations[4].Frames[0].zRotation = 0;
	SpriteList[0].Animations[4].Frames[0].HotSpot[0].x = 15;
	SpriteList[0].Animations[4].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[0].Animations[4].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[0].Animations[4].Frames[0].centerX = 15;
	SpriteList[0].Animations[4].Frames[0].centerY = 15;
	SpriteList[0].Animations[4].Frames[0].PegRegistered = false;
	SpriteList[0].Animations[4].Frames[0].useTransparency = true;

	SpriteList[0].Animations[4].Frames[1].BitmapName = "SpaceMan 4.bmp";
	SpriteList[0].Animations[4].Frames[1].TranslateX = 0.000;
	SpriteList[0].Animations[4].Frames[1].TranslateY = 0.000;
	SpriteList[0].Animations[4].Frames[1].Delay = 20;
	SpriteList[0].Animations[4].Frames[1].Width = 30;
	SpriteList[0].Animations[4].Frames[1].Height = 30;
	SpriteList[0].Animations[4].Frames[1].Transparency = RGB(255,255,255);
	SpriteList[0].Animations[4].Frames[1].hFlip = false;
	SpriteList[0].Animations[4].Frames[1].vFlip = false;
	SpriteList[0].Animations[4].Frames[1].zRotation = 0;
	SpriteList[0].Animations[4].Frames[1].HotSpot[0].x = 15;
	SpriteList[0].Animations[4].Frames[1].HotSpot[0].y = 15;
	::SetRect( &SpriteList[0].Animations[4].Frames[1].BBox, 0, 0, 29,29);
	SpriteList[0].Animations[4].Frames[1].centerX = 15;
	SpriteList[0].Animations[4].Frames[1].centerY = 15;
	SpriteList[0].Animations[4].Frames[1].PegRegistered = false;
	SpriteList[0].Animations[4].Frames[1].useTransparency = true;


	SpriteList[0].Animations[5].TotalFrames=2;
	SpriteList[0].Animations[5].ConnectTo = 0;
	SpriteList[0].Animations[5].Frames = new FrameElem[2];

	SpriteList[0].Animations[5].Frames[0].BitmapName = "SpaceMan Back 2.bmp";
	SpriteList[0].Animations[5].Frames[0].TranslateX = 0.000;
	SpriteList[0].Animations[5].Frames[0].TranslateY = 0.000;
	SpriteList[0].Animations[5].Frames[0].Delay = 30;
	SpriteList[0].Animations[5].Frames[0].Width = 30;
	SpriteList[0].Animations[5].Frames[0].Height = 30;
	SpriteList[0].Animations[5].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[0].Animations[5].Frames[0].hFlip = false;
	SpriteList[0].Animations[5].Frames[0].vFlip = false;
	SpriteList[0].Animations[5].Frames[0].zRotation = 0;
	SpriteList[0].Animations[5].Frames[0].HotSpot[0].x = 15;
	SpriteList[0].Animations[5].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[0].Animations[5].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[0].Animations[5].Frames[0].centerX = 15;
	SpriteList[0].Animations[5].Frames[0].centerY = 15;
	SpriteList[0].Animations[5].Frames[0].PegRegistered = false;
	SpriteList[0].Animations[5].Frames[0].useTransparency = true;

	SpriteList[0].Animations[5].Frames[1].BitmapName = "SpaceMan Back 4.bmp";
	SpriteList[0].Animations[5].Frames[1].TranslateX = 0.000;
	SpriteList[0].Animations[5].Frames[1].TranslateY = 0.000;
	SpriteList[0].Animations[5].Frames[1].Delay = 30;
	SpriteList[0].Animations[5].Frames[1].Width = 30;
	SpriteList[0].Animations[5].Frames[1].Height = 30;
	SpriteList[0].Animations[5].Frames[1].Transparency = RGB(255,255,255);
	SpriteList[0].Animations[5].Frames[1].hFlip = false;
	SpriteList[0].Animations[5].Frames[1].vFlip = false;
	SpriteList[0].Animations[5].Frames[1].zRotation = 0;
	SpriteList[0].Animations[5].Frames[1].HotSpot[0].x = 15;
	SpriteList[0].Animations[5].Frames[1].HotSpot[0].y = 15;
	::SetRect( &SpriteList[0].Animations[5].Frames[1].BBox, 0, 0, 29,29);
	SpriteList[0].Animations[5].Frames[1].centerX = 15;
	SpriteList[0].Animations[5].Frames[1].centerY = 15;
	SpriteList[0].Animations[5].Frames[1].PegRegistered = false;
	SpriteList[0].Animations[5].Frames[1].useTransparency = true;


	SpriteList[0].Animations[6].TotalFrames=2;
	SpriteList[0].Animations[6].ConnectTo = 0;
	SpriteList[0].Animations[6].Frames = new FrameElem[2];

	SpriteList[0].Animations[6].Frames[0].BitmapName = "SpaceMan Right 2.bmp";
	SpriteList[0].Animations[6].Frames[0].TranslateX = 0.000;
	SpriteList[0].Animations[6].Frames[0].TranslateY = 0.000;
	SpriteList[0].Animations[6].Frames[0].Delay = 20;
	SpriteList[0].Animations[6].Frames[0].Width = 30;
	SpriteList[0].Animations[6].Frames[0].Height = 30;
	SpriteList[0].Animations[6].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[0].Animations[6].Frames[0].hFlip = false;
	SpriteList[0].Animations[6].Frames[0].vFlip = false;
	SpriteList[0].Animations[6].Frames[0].zRotation = 0;
	SpriteList[0].Animations[6].Frames[0].HotSpot[0].x = 15;
	SpriteList[0].Animations[6].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[0].Animations[6].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[0].Animations[6].Frames[0].centerX = 15;
	SpriteList[0].Animations[6].Frames[0].centerY = 15;
	SpriteList[0].Animations[6].Frames[0].PegRegistered = false;
	SpriteList[0].Animations[6].Frames[0].useTransparency = true;

	SpriteList[0].Animations[6].Frames[1].BitmapName = "SpaceMan Right 4.bmp";
	SpriteList[0].Animations[6].Frames[1].TranslateX = 0.000;
	SpriteList[0].Animations[6].Frames[1].TranslateY = 0.000;
	SpriteList[0].Animations[6].Frames[1].Delay = 20;
	SpriteList[0].Animations[6].Frames[1].Width = 30;
	SpriteList[0].Animations[6].Frames[1].Height = 30;
	SpriteList[0].Animations[6].Frames[1].Transparency = RGB(255,255,255);
	SpriteList[0].Animations[6].Frames[1].hFlip = false;
	SpriteList[0].Animations[6].Frames[1].vFlip = false;
	SpriteList[0].Animations[6].Frames[1].zRotation = 0;
	SpriteList[0].Animations[6].Frames[1].HotSpot[0].x = 15;
	SpriteList[0].Animations[6].Frames[1].HotSpot[0].y = 15;
	::SetRect( &SpriteList[0].Animations[6].Frames[1].BBox, 0, 0, 29,29);
	SpriteList[0].Animations[6].Frames[1].centerX = 15;
	SpriteList[0].Animations[6].Frames[1].centerY = 15;
	SpriteList[0].Animations[6].Frames[1].PegRegistered = false;
	SpriteList[0].Animations[6].Frames[1].useTransparency = true;


	SpriteList[0].Animations[7].TotalFrames=2;
	SpriteList[0].Animations[7].ConnectTo = 0;
	SpriteList[0].Animations[7].Frames = new FrameElem[2];

	SpriteList[0].Animations[7].Frames[0].BitmapName = "SpaceMan Left 2.bmp";
	SpriteList[0].Animations[7].Frames[0].TranslateX = 0.000;
	SpriteList[0].Animations[7].Frames[0].TranslateY = 0.000;
	SpriteList[0].Animations[7].Frames[0].Delay = 20;
	SpriteList[0].Animations[7].Frames[0].Width = 30;
	SpriteList[0].Animations[7].Frames[0].Height = 30;
	SpriteList[0].Animations[7].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[0].Animations[7].Frames[0].hFlip = false;
	SpriteList[0].Animations[7].Frames[0].vFlip = false;
	SpriteList[0].Animations[7].Frames[0].zRotation = 0;
	SpriteList[0].Animations[7].Frames[0].HotSpot[0].x = 15;
	SpriteList[0].Animations[7].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[0].Animations[7].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[0].Animations[7].Frames[0].centerX = 15;
	SpriteList[0].Animations[7].Frames[0].centerY = 15;
	SpriteList[0].Animations[7].Frames[0].PegRegistered = false;
	SpriteList[0].Animations[7].Frames[0].useTransparency = true;

	SpriteList[0].Animations[7].Frames[1].BitmapName = "SpaceMan Left 4.bmp";
	SpriteList[0].Animations[7].Frames[1].TranslateX = 0.000;
	SpriteList[0].Animations[7].Frames[1].TranslateY = 0.000;
	SpriteList[0].Animations[7].Frames[1].Delay = 20;
	SpriteList[0].Animations[7].Frames[1].Width = 30;
	SpriteList[0].Animations[7].Frames[1].Height = 30;
	SpriteList[0].Animations[7].Frames[1].Transparency = RGB(255,255,255);
	SpriteList[0].Animations[7].Frames[1].hFlip = false;
	SpriteList[0].Animations[7].Frames[1].vFlip = false;
	SpriteList[0].Animations[7].Frames[1].zRotation = 0;
	SpriteList[0].Animations[7].Frames[1].HotSpot[0].x = 15;
	SpriteList[0].Animations[7].Frames[1].HotSpot[0].y = 15;
	::SetRect( &SpriteList[0].Animations[7].Frames[1].BBox, 0, 0, 29,29);
	SpriteList[0].Animations[7].Frames[1].centerX = 15;
	SpriteList[0].Animations[7].Frames[1].centerY = 15;
	SpriteList[0].Animations[7].Frames[1].PegRegistered = false;
	SpriteList[0].Animations[7].Frames[1].useTransparency = true;



	SpriteList[5].TotalAnimations = 1;
	SpriteList[5].Animations = new AnimationElem[1];

	SpriteList[5].Animations[0].TotalFrames=1;
	SpriteList[5].Animations[0].ConnectTo = 0;
	SpriteList[5].Animations[0].Frames = new FrameElem[1];

	SpriteList[5].Animations[0].Frames[0].BitmapName = "Memory Chip.bmp";
	SpriteList[5].Animations[0].Frames[0].TranslateX = 0.000;
	SpriteList[5].Animations[0].Frames[0].TranslateY = 0.000;
	SpriteList[5].Animations[0].Frames[0].Delay = 1;
	SpriteList[5].Animations[0].Frames[0].Width = 30;
	SpriteList[5].Animations[0].Frames[0].Height = 30;
	SpriteList[5].Animations[0].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[5].Animations[0].Frames[0].hFlip = false;
	SpriteList[5].Animations[0].Frames[0].vFlip = false;
	SpriteList[5].Animations[0].Frames[0].zRotation = 0;
	SpriteList[5].Animations[0].Frames[0].HotSpot[0].x = 15;
	SpriteList[5].Animations[0].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[5].Animations[0].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[5].Animations[0].Frames[0].centerX = 15;
	SpriteList[5].Animations[0].Frames[0].centerY = 15;
	SpriteList[5].Animations[0].Frames[0].PegRegistered = false;
	SpriteList[5].Animations[0].Frames[0].useTransparency = true;



	SpriteList[6].TotalAnimations = 3;
	SpriteList[6].Animations = new AnimationElem[3];

	SpriteList[6].Animations[0].TotalFrames=1;
	SpriteList[6].Animations[0].ConnectTo = 0;
	SpriteList[6].Animations[0].Frames = new FrameElem[1];

	SpriteList[6].Animations[0].Frames[0].BitmapName = "Survivor Vision.bmp";
	SpriteList[6].Animations[0].Frames[0].TranslateX = 0.000;
	SpriteList[6].Animations[0].Frames[0].TranslateY = 0.000;
	SpriteList[6].Animations[0].Frames[0].Delay = 1;
	SpriteList[6].Animations[0].Frames[0].Width = 1553;
	SpriteList[6].Animations[0].Frames[0].Height = 1234;
	SpriteList[6].Animations[0].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[6].Animations[0].Frames[0].hFlip = false;
	SpriteList[6].Animations[0].Frames[0].vFlip = false;
	SpriteList[6].Animations[0].Frames[0].zRotation = 0;
	SpriteList[6].Animations[0].Frames[0].HotSpot[0].x = 776;
	SpriteList[6].Animations[0].Frames[0].HotSpot[0].y = 617;
	::SetRect( &SpriteList[6].Animations[0].Frames[0].BBox, 0, 0, 1552,1233);
	SpriteList[6].Animations[0].Frames[0].centerX = 776;
	SpriteList[6].Animations[0].Frames[0].centerY = 617;
	SpriteList[6].Animations[0].Frames[0].PegRegistered = false;
	SpriteList[6].Animations[0].Frames[0].useTransparency = true;


	SpriteList[6].Animations[1].TotalFrames=1;
	SpriteList[6].Animations[1].ConnectTo = 0;
	SpriteList[6].Animations[1].Frames = new FrameElem[1];

	SpriteList[6].Animations[1].Frames[0].BitmapName = "Moderate Vision.bmp";
	SpriteList[6].Animations[1].Frames[0].TranslateX = 0.000;
	SpriteList[6].Animations[1].Frames[0].TranslateY = 0.000;
	SpriteList[6].Animations[1].Frames[0].Delay = 1;
	SpriteList[6].Animations[1].Frames[0].Width = 1553;
	SpriteList[6].Animations[1].Frames[0].Height = 1234;
	SpriteList[6].Animations[1].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[6].Animations[1].Frames[0].hFlip = false;
	SpriteList[6].Animations[1].Frames[0].vFlip = false;
	SpriteList[6].Animations[1].Frames[0].zRotation = 0;
	SpriteList[6].Animations[1].Frames[0].HotSpot[0].x = 776;
	SpriteList[6].Animations[1].Frames[0].HotSpot[0].y = 617;
	::SetRect( &SpriteList[6].Animations[1].Frames[0].BBox, 0, 0, 1552,1233);
	SpriteList[6].Animations[1].Frames[0].centerX = 776;
	SpriteList[6].Animations[1].Frames[0].centerY = 617;
	SpriteList[6].Animations[1].Frames[0].PegRegistered = false;
	SpriteList[6].Animations[1].Frames[0].useTransparency = true;


	SpriteList[6].Animations[2].TotalFrames=1;
	SpriteList[6].Animations[2].ConnectTo = 0;
	SpriteList[6].Animations[2].Frames = new FrameElem[1];

	SpriteList[6].Animations[2].Frames[0].BitmapName = "Amateur Vision.bmp";
	SpriteList[6].Animations[2].Frames[0].TranslateX = 0.000;
	SpriteList[6].Animations[2].Frames[0].TranslateY = 0.000;
	SpriteList[6].Animations[2].Frames[0].Delay = 1;
	SpriteList[6].Animations[2].Frames[0].Width = 1553;
	SpriteList[6].Animations[2].Frames[0].Height = 1234;
	SpriteList[6].Animations[2].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[6].Animations[2].Frames[0].hFlip = false;
	SpriteList[6].Animations[2].Frames[0].vFlip = false;
	SpriteList[6].Animations[2].Frames[0].zRotation = 0;
	SpriteList[6].Animations[2].Frames[0].HotSpot[0].x = 776;
	SpriteList[6].Animations[2].Frames[0].HotSpot[0].y = 617;
	::SetRect( &SpriteList[6].Animations[2].Frames[0].BBox, 0, 0, 1552,1233);
	SpriteList[6].Animations[2].Frames[0].centerX = 776;
	SpriteList[6].Animations[2].Frames[0].centerY = 617;
	SpriteList[6].Animations[2].Frames[0].PegRegistered = false;
	SpriteList[6].Animations[2].Frames[0].useTransparency = true;



	SpriteList[9].TotalAnimations = 3;
	SpriteList[9].Animations = new AnimationElem[3];

	SpriteList[9].Animations[0].TotalFrames=1;
	SpriteList[9].Animations[0].ConnectTo = 0;
	SpriteList[9].Animations[0].Frames = new FrameElem[1];

	SpriteList[9].Animations[0].Frames[0].BitmapName = "Button.bmp";
	SpriteList[9].Animations[0].Frames[0].TranslateX = 0.000;
	SpriteList[9].Animations[0].Frames[0].TranslateY = 0.000;
	SpriteList[9].Animations[0].Frames[0].Delay = 1;
	SpriteList[9].Animations[0].Frames[0].Width = 300;
	SpriteList[9].Animations[0].Frames[0].Height = 60;
	SpriteList[9].Animations[0].Frames[0].Transparency = RGB(0,0,0);
	SpriteList[9].Animations[0].Frames[0].hFlip = false;
	SpriteList[9].Animations[0].Frames[0].vFlip = false;
	SpriteList[9].Animations[0].Frames[0].zRotation = 0;
	SpriteList[9].Animations[0].Frames[0].HotSpot[0].x = 50;
	SpriteList[9].Animations[0].Frames[0].HotSpot[0].y = 25;
	::SetRect( &SpriteList[9].Animations[0].Frames[0].BBox, 0, 0, 299,59);
	SpriteList[9].Animations[0].Frames[0].centerX = 50;
	SpriteList[9].Animations[0].Frames[0].centerY = 25;
	SpriteList[9].Animations[0].Frames[0].PegRegistered = false;
	SpriteList[9].Animations[0].Frames[0].useTransparency = true;
	SpriteList[9].Animations[0].Frames[0].AddCollisionData(CollisionSegment(298,1,1,1,0,0));
	SpriteList[9].Animations[0].Frames[0].AddCollisionData(CollisionSegment(298,58,298,1,0,0));
	SpriteList[9].Animations[0].Frames[0].AddCollisionData(CollisionSegment(1,58,298,58,0,0));
	SpriteList[9].Animations[0].Frames[0].AddCollisionData(CollisionSegment(1,1,1,58,0,0));


	SpriteList[9].Animations[1].TotalFrames=1;
	SpriteList[9].Animations[1].ConnectTo = 0;
	SpriteList[9].Animations[1].Frames = new FrameElem[1];

	SpriteList[9].Animations[1].Frames[0].BitmapName = "Life Bar.bmp";
	SpriteList[9].Animations[1].Frames[0].TranslateX = 0.000;
	SpriteList[9].Animations[1].Frames[0].TranslateY = 0.000;
	SpriteList[9].Animations[1].Frames[0].Delay = 1;
	SpriteList[9].Animations[1].Frames[0].Width = 80;
	SpriteList[9].Animations[1].Frames[0].Height = 100;
	SpriteList[9].Animations[1].Frames[0].Transparency = RGB(240,240,240);
	SpriteList[9].Animations[1].Frames[0].hFlip = false;
	SpriteList[9].Animations[1].Frames[0].vFlip = false;
	SpriteList[9].Animations[1].Frames[0].zRotation = 0;
	SpriteList[9].Animations[1].Frames[0].HotSpot[0].x = 40;
	SpriteList[9].Animations[1].Frames[0].HotSpot[0].y = 50;
	::SetRect( &SpriteList[9].Animations[1].Frames[0].BBox, 0, 0, 79,99);
	SpriteList[9].Animations[1].Frames[0].centerX = 40;
	SpriteList[9].Animations[1].Frames[0].centerY = 50;
	SpriteList[9].Animations[1].Frames[0].PegRegistered = false;
	SpriteList[9].Animations[1].Frames[0].useTransparency = false;


	SpriteList[9].Animations[2].TotalFrames=1;
	SpriteList[9].Animations[2].ConnectTo = 0;
	SpriteList[9].Animations[2].Frames = new FrameElem[1];

	SpriteList[9].Animations[2].Frames[0].BitmapName = "Lives.bmp";
	SpriteList[9].Animations[2].Frames[0].TranslateX = 0.000;
	SpriteList[9].Animations[2].Frames[0].TranslateY = 0.000;
	SpriteList[9].Animations[2].Frames[0].Delay = 1;
	SpriteList[9].Animations[2].Frames[0].Width = 80;
	SpriteList[9].Animations[2].Frames[0].Height = 600;
	SpriteList[9].Animations[2].Frames[0].Transparency = RGB(240,240,240);
	SpriteList[9].Animations[2].Frames[0].hFlip = false;
	SpriteList[9].Animations[2].Frames[0].vFlip = false;
	SpriteList[9].Animations[2].Frames[0].zRotation = 0;
	SpriteList[9].Animations[2].Frames[0].HotSpot[0].x = 40;
	SpriteList[9].Animations[2].Frames[0].HotSpot[0].y = 300;
	::SetRect( &SpriteList[9].Animations[2].Frames[0].BBox, 0, 0, 79,599);
	SpriteList[9].Animations[2].Frames[0].centerX = 40;
	SpriteList[9].Animations[2].Frames[0].centerY = 300;
	SpriteList[9].Animations[2].Frames[0].PegRegistered = false;
	SpriteList[9].Animations[2].Frames[0].useTransparency = false;



	SpriteList[7].TotalAnimations = 1;
	SpriteList[7].Animations = new AnimationElem[1];

	SpriteList[7].Animations[0].TotalFrames=6;
	SpriteList[7].Animations[0].ConnectTo = 0;
	SpriteList[7].Animations[0].Frames = new FrameElem[6];

	SpriteList[7].Animations[0].Frames[0].BitmapName = "Restart 1.bmp";
	SpriteList[7].Animations[0].Frames[0].TranslateX = 0.000;
	SpriteList[7].Animations[0].Frames[0].TranslateY = 0.000;
	SpriteList[7].Animations[0].Frames[0].Delay = 1;
	SpriteList[7].Animations[0].Frames[0].Width = 800;
	SpriteList[7].Animations[0].Frames[0].Height = 600;
	SpriteList[7].Animations[0].Frames[0].Transparency = RGB(240,240,240);
	SpriteList[7].Animations[0].Frames[0].hFlip = false;
	SpriteList[7].Animations[0].Frames[0].vFlip = false;
	SpriteList[7].Animations[0].Frames[0].zRotation = 0;
	SpriteList[7].Animations[0].Frames[0].HotSpot[0].x = 400;
	SpriteList[7].Animations[0].Frames[0].HotSpot[0].y = 300;
	::SetRect( &SpriteList[7].Animations[0].Frames[0].BBox, 0, 0, 799,599);
	SpriteList[7].Animations[0].Frames[0].centerX = 400;
	SpriteList[7].Animations[0].Frames[0].centerY = 300;
	SpriteList[7].Animations[0].Frames[0].PegRegistered = false;
	SpriteList[7].Animations[0].Frames[0].useTransparency = false;

	SpriteList[7].Animations[0].Frames[1].BitmapName = "Restart 2.bmp";
	SpriteList[7].Animations[0].Frames[1].TranslateX = 0.000;
	SpriteList[7].Animations[0].Frames[1].TranslateY = 0.000;
	SpriteList[7].Animations[0].Frames[1].Delay = 1;
	SpriteList[7].Animations[0].Frames[1].Width = 800;
	SpriteList[7].Animations[0].Frames[1].Height = 600;
	SpriteList[7].Animations[0].Frames[1].Transparency = RGB(240,240,240);
	SpriteList[7].Animations[0].Frames[1].hFlip = false;
	SpriteList[7].Animations[0].Frames[1].vFlip = false;
	SpriteList[7].Animations[0].Frames[1].zRotation = 0;
	SpriteList[7].Animations[0].Frames[1].HotSpot[0].x = 400;
	SpriteList[7].Animations[0].Frames[1].HotSpot[0].y = 300;
	::SetRect( &SpriteList[7].Animations[0].Frames[1].BBox, 0, 0, 799,599);
	SpriteList[7].Animations[0].Frames[1].centerX = 400;
	SpriteList[7].Animations[0].Frames[1].centerY = 300;
	SpriteList[7].Animations[0].Frames[1].PegRegistered = false;
	SpriteList[7].Animations[0].Frames[1].useTransparency = false;

	SpriteList[7].Animations[0].Frames[2].BitmapName = "Restart 3.bmp";
	SpriteList[7].Animations[0].Frames[2].TranslateX = 0.000;
	SpriteList[7].Animations[0].Frames[2].TranslateY = 0.000;
	SpriteList[7].Animations[0].Frames[2].Delay = 1;
	SpriteList[7].Animations[0].Frames[2].Width = 800;
	SpriteList[7].Animations[0].Frames[2].Height = 600;
	SpriteList[7].Animations[0].Frames[2].Transparency = RGB(240,240,240);
	SpriteList[7].Animations[0].Frames[2].hFlip = false;
	SpriteList[7].Animations[0].Frames[2].vFlip = false;
	SpriteList[7].Animations[0].Frames[2].zRotation = 0;
	SpriteList[7].Animations[0].Frames[2].HotSpot[0].x = 400;
	SpriteList[7].Animations[0].Frames[2].HotSpot[0].y = 300;
	::SetRect( &SpriteList[7].Animations[0].Frames[2].BBox, 0, 0, 799,599);
	SpriteList[7].Animations[0].Frames[2].centerX = 400;
	SpriteList[7].Animations[0].Frames[2].centerY = 300;
	SpriteList[7].Animations[0].Frames[2].PegRegistered = false;
	SpriteList[7].Animations[0].Frames[2].useTransparency = false;

	SpriteList[7].Animations[0].Frames[3].BitmapName = "Restart 2.bmp";
	SpriteList[7].Animations[0].Frames[3].TranslateX = 0.000;
	SpriteList[7].Animations[0].Frames[3].TranslateY = 0.000;
	SpriteList[7].Animations[0].Frames[3].Delay = 1;
	SpriteList[7].Animations[0].Frames[3].Width = 800;
	SpriteList[7].Animations[0].Frames[3].Height = 600;
	SpriteList[7].Animations[0].Frames[3].Transparency = RGB(240,240,240);
	SpriteList[7].Animations[0].Frames[3].hFlip = false;
	SpriteList[7].Animations[0].Frames[3].vFlip = false;
	SpriteList[7].Animations[0].Frames[3].zRotation = 0;
	SpriteList[7].Animations[0].Frames[3].HotSpot[0].x = 400;
	SpriteList[7].Animations[0].Frames[3].HotSpot[0].y = 300;
	::SetRect( &SpriteList[7].Animations[0].Frames[3].BBox, 0, 0, 799,599);
	SpriteList[7].Animations[0].Frames[3].centerX = 400;
	SpriteList[7].Animations[0].Frames[3].centerY = 300;
	SpriteList[7].Animations[0].Frames[3].PegRegistered = false;
	SpriteList[7].Animations[0].Frames[3].useTransparency = false;

	SpriteList[7].Animations[0].Frames[4].BitmapName = "Restart 1.bmp";
	SpriteList[7].Animations[0].Frames[4].TranslateX = 0.000;
	SpriteList[7].Animations[0].Frames[4].TranslateY = 0.000;
	SpriteList[7].Animations[0].Frames[4].Delay = 1;
	SpriteList[7].Animations[0].Frames[4].Width = 800;
	SpriteList[7].Animations[0].Frames[4].Height = 600;
	SpriteList[7].Animations[0].Frames[4].Transparency = RGB(240,240,240);
	SpriteList[7].Animations[0].Frames[4].hFlip = false;
	SpriteList[7].Animations[0].Frames[4].vFlip = false;
	SpriteList[7].Animations[0].Frames[4].zRotation = 0;
	SpriteList[7].Animations[0].Frames[4].HotSpot[0].x = 400;
	SpriteList[7].Animations[0].Frames[4].HotSpot[0].y = 300;
	::SetRect( &SpriteList[7].Animations[0].Frames[4].BBox, 0, 0, 799,599);
	SpriteList[7].Animations[0].Frames[4].centerX = 400;
	SpriteList[7].Animations[0].Frames[4].centerY = 300;
	SpriteList[7].Animations[0].Frames[4].PegRegistered = false;
	SpriteList[7].Animations[0].Frames[4].useTransparency = false;

	SpriteList[7].Animations[0].Frames[5].BitmapName = "Restart 3.bmp";
	SpriteList[7].Animations[0].Frames[5].TranslateX = 0.000;
	SpriteList[7].Animations[0].Frames[5].TranslateY = 0.000;
	SpriteList[7].Animations[0].Frames[5].Delay = 1;
	SpriteList[7].Animations[0].Frames[5].Width = 800;
	SpriteList[7].Animations[0].Frames[5].Height = 600;
	SpriteList[7].Animations[0].Frames[5].Transparency = RGB(240,240,240);
	SpriteList[7].Animations[0].Frames[5].hFlip = false;
	SpriteList[7].Animations[0].Frames[5].vFlip = false;
	SpriteList[7].Animations[0].Frames[5].zRotation = 0;
	SpriteList[7].Animations[0].Frames[5].HotSpot[0].x = 400;
	SpriteList[7].Animations[0].Frames[5].HotSpot[0].y = 300;
	::SetRect( &SpriteList[7].Animations[0].Frames[5].BBox, 0, 0, 799,599);
	SpriteList[7].Animations[0].Frames[5].centerX = 400;
	SpriteList[7].Animations[0].Frames[5].centerY = 300;
	SpriteList[7].Animations[0].Frames[5].PegRegistered = false;
	SpriteList[7].Animations[0].Frames[5].useTransparency = false;



	SpriteList[2].TotalAnimations = 8;
	SpriteList[2].Animations = new AnimationElem[8];

	SpriteList[2].Animations[0].TotalFrames=4;
	SpriteList[2].Animations[0].ConnectTo = 0;
	SpriteList[2].Animations[0].Frames = new FrameElem[4];

	SpriteList[2].Animations[0].Frames[0].BitmapName = "Green Alien 1.bmp";
	SpriteList[2].Animations[0].Frames[0].TranslateX = 0.000;
	SpriteList[2].Animations[0].Frames[0].TranslateY = 0.000;
	SpriteList[2].Animations[0].Frames[0].Delay = 10;
	SpriteList[2].Animations[0].Frames[0].Width = 30;
	SpriteList[2].Animations[0].Frames[0].Height = 30;
	SpriteList[2].Animations[0].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[2].Animations[0].Frames[0].hFlip = false;
	SpriteList[2].Animations[0].Frames[0].vFlip = false;
	SpriteList[2].Animations[0].Frames[0].zRotation = 0;
	SpriteList[2].Animations[0].Frames[0].HotSpot[0].x = 15;
	SpriteList[2].Animations[0].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[2].Animations[0].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[2].Animations[0].Frames[0].centerX = 15;
	SpriteList[2].Animations[0].Frames[0].centerY = 15;
	SpriteList[2].Animations[0].Frames[0].PegRegistered = false;
	SpriteList[2].Animations[0].Frames[0].useTransparency = true;

	SpriteList[2].Animations[0].Frames[1].BitmapName = "Green Alien 2.bmp";
	SpriteList[2].Animations[0].Frames[1].TranslateX = 0.000;
	SpriteList[2].Animations[0].Frames[1].TranslateY = 0.000;
	SpriteList[2].Animations[0].Frames[1].Delay = 10;
	SpriteList[2].Animations[0].Frames[1].Width = 30;
	SpriteList[2].Animations[0].Frames[1].Height = 30;
	SpriteList[2].Animations[0].Frames[1].Transparency = RGB(255,255,255);
	SpriteList[2].Animations[0].Frames[1].hFlip = false;
	SpriteList[2].Animations[0].Frames[1].vFlip = false;
	SpriteList[2].Animations[0].Frames[1].zRotation = 0;
	SpriteList[2].Animations[0].Frames[1].HotSpot[0].x = 15;
	SpriteList[2].Animations[0].Frames[1].HotSpot[0].y = 15;
	::SetRect( &SpriteList[2].Animations[0].Frames[1].BBox, 0, 0, 29,29);
	SpriteList[2].Animations[0].Frames[1].centerX = 15;
	SpriteList[2].Animations[0].Frames[1].centerY = 15;
	SpriteList[2].Animations[0].Frames[1].PegRegistered = false;
	SpriteList[2].Animations[0].Frames[1].useTransparency = true;

	SpriteList[2].Animations[0].Frames[2].BitmapName = "Green Alien 3.bmp";
	SpriteList[2].Animations[0].Frames[2].TranslateX = 0.000;
	SpriteList[2].Animations[0].Frames[2].TranslateY = 0.000;
	SpriteList[2].Animations[0].Frames[2].Delay = 10;
	SpriteList[2].Animations[0].Frames[2].Width = 30;
	SpriteList[2].Animations[0].Frames[2].Height = 30;
	SpriteList[2].Animations[0].Frames[2].Transparency = RGB(255,255,255);
	SpriteList[2].Animations[0].Frames[2].hFlip = false;
	SpriteList[2].Animations[0].Frames[2].vFlip = false;
	SpriteList[2].Animations[0].Frames[2].zRotation = 0;
	SpriteList[2].Animations[0].Frames[2].HotSpot[0].x = 15;
	SpriteList[2].Animations[0].Frames[2].HotSpot[0].y = 15;
	::SetRect( &SpriteList[2].Animations[0].Frames[2].BBox, 0, 0, 29,29);
	SpriteList[2].Animations[0].Frames[2].centerX = 15;
	SpriteList[2].Animations[0].Frames[2].centerY = 15;
	SpriteList[2].Animations[0].Frames[2].PegRegistered = false;
	SpriteList[2].Animations[0].Frames[2].useTransparency = true;

	SpriteList[2].Animations[0].Frames[3].BitmapName = "Green Alien 2.bmp";
	SpriteList[2].Animations[0].Frames[3].TranslateX = 0.000;
	SpriteList[2].Animations[0].Frames[3].TranslateY = 0.000;
	SpriteList[2].Animations[0].Frames[3].Delay = 10;
	SpriteList[2].Animations[0].Frames[3].Width = 30;
	SpriteList[2].Animations[0].Frames[3].Height = 30;
	SpriteList[2].Animations[0].Frames[3].Transparency = RGB(255,255,255);
	SpriteList[2].Animations[0].Frames[3].hFlip = false;
	SpriteList[2].Animations[0].Frames[3].vFlip = false;
	SpriteList[2].Animations[0].Frames[3].zRotation = 0;
	SpriteList[2].Animations[0].Frames[3].HotSpot[0].x = 15;
	SpriteList[2].Animations[0].Frames[3].HotSpot[0].y = 15;
	::SetRect( &SpriteList[2].Animations[0].Frames[3].BBox, 0, 0, 29,29);
	SpriteList[2].Animations[0].Frames[3].centerX = 15;
	SpriteList[2].Animations[0].Frames[3].centerY = 15;
	SpriteList[2].Animations[0].Frames[3].PegRegistered = false;
	SpriteList[2].Animations[0].Frames[3].useTransparency = true;


	SpriteList[2].Animations[1].TotalFrames=4;
	SpriteList[2].Animations[1].ConnectTo = 0;
	SpriteList[2].Animations[1].Frames = new FrameElem[4];

	SpriteList[2].Animations[1].Frames[0].BitmapName = "Green Alien Left 1.bmp";
	SpriteList[2].Animations[1].Frames[0].TranslateX = 0.000;
	SpriteList[2].Animations[1].Frames[0].TranslateY = 0.000;
	SpriteList[2].Animations[1].Frames[0].Delay = 10;
	SpriteList[2].Animations[1].Frames[0].Width = 30;
	SpriteList[2].Animations[1].Frames[0].Height = 30;
	SpriteList[2].Animations[1].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[2].Animations[1].Frames[0].hFlip = false;
	SpriteList[2].Animations[1].Frames[0].vFlip = false;
	SpriteList[2].Animations[1].Frames[0].zRotation = 0;
	SpriteList[2].Animations[1].Frames[0].HotSpot[0].x = 15;
	SpriteList[2].Animations[1].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[2].Animations[1].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[2].Animations[1].Frames[0].centerX = 15;
	SpriteList[2].Animations[1].Frames[0].centerY = 15;
	SpriteList[2].Animations[1].Frames[0].PegRegistered = false;
	SpriteList[2].Animations[1].Frames[0].useTransparency = true;

	SpriteList[2].Animations[1].Frames[1].BitmapName = "Green Alien Left 2.bmp";
	SpriteList[2].Animations[1].Frames[1].TranslateX = 0.000;
	SpriteList[2].Animations[1].Frames[1].TranslateY = 0.000;
	SpriteList[2].Animations[1].Frames[1].Delay = 10;
	SpriteList[2].Animations[1].Frames[1].Width = 30;
	SpriteList[2].Animations[1].Frames[1].Height = 30;
	SpriteList[2].Animations[1].Frames[1].Transparency = RGB(255,255,255);
	SpriteList[2].Animations[1].Frames[1].hFlip = false;
	SpriteList[2].Animations[1].Frames[1].vFlip = false;
	SpriteList[2].Animations[1].Frames[1].zRotation = 0;
	SpriteList[2].Animations[1].Frames[1].HotSpot[0].x = 15;
	SpriteList[2].Animations[1].Frames[1].HotSpot[0].y = 15;
	::SetRect( &SpriteList[2].Animations[1].Frames[1].BBox, 0, 0, 29,29);
	SpriteList[2].Animations[1].Frames[1].centerX = 15;
	SpriteList[2].Animations[1].Frames[1].centerY = 15;
	SpriteList[2].Animations[1].Frames[1].PegRegistered = false;
	SpriteList[2].Animations[1].Frames[1].useTransparency = true;

	SpriteList[2].Animations[1].Frames[2].BitmapName = "Green Alien Left 3.bmp";
	SpriteList[2].Animations[1].Frames[2].TranslateX = 0.000;
	SpriteList[2].Animations[1].Frames[2].TranslateY = 0.000;
	SpriteList[2].Animations[1].Frames[2].Delay = 10;
	SpriteList[2].Animations[1].Frames[2].Width = 30;
	SpriteList[2].Animations[1].Frames[2].Height = 30;
	SpriteList[2].Animations[1].Frames[2].Transparency = RGB(255,255,255);
	SpriteList[2].Animations[1].Frames[2].hFlip = false;
	SpriteList[2].Animations[1].Frames[2].vFlip = false;
	SpriteList[2].Animations[1].Frames[2].zRotation = 0;
	SpriteList[2].Animations[1].Frames[2].HotSpot[0].x = 15;
	SpriteList[2].Animations[1].Frames[2].HotSpot[0].y = 15;
	::SetRect( &SpriteList[2].Animations[1].Frames[2].BBox, 0, 0, 29,29);
	SpriteList[2].Animations[1].Frames[2].centerX = 15;
	SpriteList[2].Animations[1].Frames[2].centerY = 15;
	SpriteList[2].Animations[1].Frames[2].PegRegistered = false;
	SpriteList[2].Animations[1].Frames[2].useTransparency = true;

	SpriteList[2].Animations[1].Frames[3].BitmapName = "Green Alien Left 2.bmp";
	SpriteList[2].Animations[1].Frames[3].TranslateX = 0.000;
	SpriteList[2].Animations[1].Frames[3].TranslateY = 0.000;
	SpriteList[2].Animations[1].Frames[3].Delay = 10;
	SpriteList[2].Animations[1].Frames[3].Width = 30;
	SpriteList[2].Animations[1].Frames[3].Height = 30;
	SpriteList[2].Animations[1].Frames[3].Transparency = RGB(255,255,255);
	SpriteList[2].Animations[1].Frames[3].hFlip = false;
	SpriteList[2].Animations[1].Frames[3].vFlip = false;
	SpriteList[2].Animations[1].Frames[3].zRotation = 0;
	SpriteList[2].Animations[1].Frames[3].HotSpot[0].x = 15;
	SpriteList[2].Animations[1].Frames[3].HotSpot[0].y = 15;
	::SetRect( &SpriteList[2].Animations[1].Frames[3].BBox, 0, 0, 29,29);
	SpriteList[2].Animations[1].Frames[3].centerX = 15;
	SpriteList[2].Animations[1].Frames[3].centerY = 15;
	SpriteList[2].Animations[1].Frames[3].PegRegistered = false;
	SpriteList[2].Animations[1].Frames[3].useTransparency = true;


	SpriteList[2].Animations[2].TotalFrames=4;
	SpriteList[2].Animations[2].ConnectTo = 0;
	SpriteList[2].Animations[2].Frames = new FrameElem[4];

	SpriteList[2].Animations[2].Frames[0].BitmapName = "Green Alien Right 1.bmp";
	SpriteList[2].Animations[2].Frames[0].TranslateX = 0.000;
	SpriteList[2].Animations[2].Frames[0].TranslateY = 0.000;
	SpriteList[2].Animations[2].Frames[0].Delay = 10;
	SpriteList[2].Animations[2].Frames[0].Width = 30;
	SpriteList[2].Animations[2].Frames[0].Height = 30;
	SpriteList[2].Animations[2].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[2].Animations[2].Frames[0].hFlip = false;
	SpriteList[2].Animations[2].Frames[0].vFlip = false;
	SpriteList[2].Animations[2].Frames[0].zRotation = 0;
	SpriteList[2].Animations[2].Frames[0].HotSpot[0].x = 15;
	SpriteList[2].Animations[2].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[2].Animations[2].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[2].Animations[2].Frames[0].centerX = 15;
	SpriteList[2].Animations[2].Frames[0].centerY = 15;
	SpriteList[2].Animations[2].Frames[0].PegRegistered = false;
	SpriteList[2].Animations[2].Frames[0].useTransparency = true;

	SpriteList[2].Animations[2].Frames[1].BitmapName = "Green Alien Right 2.bmp";
	SpriteList[2].Animations[2].Frames[1].TranslateX = 0.000;
	SpriteList[2].Animations[2].Frames[1].TranslateY = 0.000;
	SpriteList[2].Animations[2].Frames[1].Delay = 10;
	SpriteList[2].Animations[2].Frames[1].Width = 30;
	SpriteList[2].Animations[2].Frames[1].Height = 30;
	SpriteList[2].Animations[2].Frames[1].Transparency = RGB(255,255,255);
	SpriteList[2].Animations[2].Frames[1].hFlip = false;
	SpriteList[2].Animations[2].Frames[1].vFlip = false;
	SpriteList[2].Animations[2].Frames[1].zRotation = 0;
	SpriteList[2].Animations[2].Frames[1].HotSpot[0].x = 15;
	SpriteList[2].Animations[2].Frames[1].HotSpot[0].y = 15;
	::SetRect( &SpriteList[2].Animations[2].Frames[1].BBox, 0, 0, 29,29);
	SpriteList[2].Animations[2].Frames[1].centerX = 15;
	SpriteList[2].Animations[2].Frames[1].centerY = 15;
	SpriteList[2].Animations[2].Frames[1].PegRegistered = false;
	SpriteList[2].Animations[2].Frames[1].useTransparency = true;

	SpriteList[2].Animations[2].Frames[2].BitmapName = "Green Alien Right 3.bmp";
	SpriteList[2].Animations[2].Frames[2].TranslateX = 0.000;
	SpriteList[2].Animations[2].Frames[2].TranslateY = 0.000;
	SpriteList[2].Animations[2].Frames[2].Delay = 10;
	SpriteList[2].Animations[2].Frames[2].Width = 30;
	SpriteList[2].Animations[2].Frames[2].Height = 30;
	SpriteList[2].Animations[2].Frames[2].Transparency = RGB(255,255,255);
	SpriteList[2].Animations[2].Frames[2].hFlip = false;
	SpriteList[2].Animations[2].Frames[2].vFlip = false;
	SpriteList[2].Animations[2].Frames[2].zRotation = 0;
	SpriteList[2].Animations[2].Frames[2].HotSpot[0].x = 15;
	SpriteList[2].Animations[2].Frames[2].HotSpot[0].y = 15;
	::SetRect( &SpriteList[2].Animations[2].Frames[2].BBox, 0, 0, 29,29);
	SpriteList[2].Animations[2].Frames[2].centerX = 15;
	SpriteList[2].Animations[2].Frames[2].centerY = 15;
	SpriteList[2].Animations[2].Frames[2].PegRegistered = false;
	SpriteList[2].Animations[2].Frames[2].useTransparency = true;

	SpriteList[2].Animations[2].Frames[3].BitmapName = "Green Alien Right 2.bmp";
	SpriteList[2].Animations[2].Frames[3].TranslateX = 0.000;
	SpriteList[2].Animations[2].Frames[3].TranslateY = 0.000;
	SpriteList[2].Animations[2].Frames[3].Delay = 10;
	SpriteList[2].Animations[2].Frames[3].Width = 30;
	SpriteList[2].Animations[2].Frames[3].Height = 30;
	SpriteList[2].Animations[2].Frames[3].Transparency = RGB(255,255,255);
	SpriteList[2].Animations[2].Frames[3].hFlip = false;
	SpriteList[2].Animations[2].Frames[3].vFlip = false;
	SpriteList[2].Animations[2].Frames[3].zRotation = 0;
	SpriteList[2].Animations[2].Frames[3].HotSpot[0].x = 15;
	SpriteList[2].Animations[2].Frames[3].HotSpot[0].y = 15;
	::SetRect( &SpriteList[2].Animations[2].Frames[3].BBox, 0, 0, 29,29);
	SpriteList[2].Animations[2].Frames[3].centerX = 15;
	SpriteList[2].Animations[2].Frames[3].centerY = 15;
	SpriteList[2].Animations[2].Frames[3].PegRegistered = false;
	SpriteList[2].Animations[2].Frames[3].useTransparency = true;


	SpriteList[2].Animations[3].TotalFrames=4;
	SpriteList[2].Animations[3].ConnectTo = 0;
	SpriteList[2].Animations[3].Frames = new FrameElem[4];

	SpriteList[2].Animations[3].Frames[0].BitmapName = "Green Alien Back 1.bmp";
	SpriteList[2].Animations[3].Frames[0].TranslateX = 0.000;
	SpriteList[2].Animations[3].Frames[0].TranslateY = 0.000;
	SpriteList[2].Animations[3].Frames[0].Delay = 10;
	SpriteList[2].Animations[3].Frames[0].Width = 30;
	SpriteList[2].Animations[3].Frames[0].Height = 30;
	SpriteList[2].Animations[3].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[2].Animations[3].Frames[0].hFlip = false;
	SpriteList[2].Animations[3].Frames[0].vFlip = false;
	SpriteList[2].Animations[3].Frames[0].zRotation = 0;
	SpriteList[2].Animations[3].Frames[0].HotSpot[0].x = 15;
	SpriteList[2].Animations[3].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[2].Animations[3].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[2].Animations[3].Frames[0].centerX = 15;
	SpriteList[2].Animations[3].Frames[0].centerY = 15;
	SpriteList[2].Animations[3].Frames[0].PegRegistered = false;
	SpriteList[2].Animations[3].Frames[0].useTransparency = true;

	SpriteList[2].Animations[3].Frames[1].BitmapName = "Green Alien Back 2.bmp";
	SpriteList[2].Animations[3].Frames[1].TranslateX = 0.000;
	SpriteList[2].Animations[3].Frames[1].TranslateY = 0.000;
	SpriteList[2].Animations[3].Frames[1].Delay = 10;
	SpriteList[2].Animations[3].Frames[1].Width = 30;
	SpriteList[2].Animations[3].Frames[1].Height = 30;
	SpriteList[2].Animations[3].Frames[1].Transparency = RGB(255,255,255);
	SpriteList[2].Animations[3].Frames[1].hFlip = false;
	SpriteList[2].Animations[3].Frames[1].vFlip = false;
	SpriteList[2].Animations[3].Frames[1].zRotation = 0;
	SpriteList[2].Animations[3].Frames[1].HotSpot[0].x = 15;
	SpriteList[2].Animations[3].Frames[1].HotSpot[0].y = 15;
	::SetRect( &SpriteList[2].Animations[3].Frames[1].BBox, 0, 0, 29,29);
	SpriteList[2].Animations[3].Frames[1].centerX = 15;
	SpriteList[2].Animations[3].Frames[1].centerY = 15;
	SpriteList[2].Animations[3].Frames[1].PegRegistered = false;
	SpriteList[2].Animations[3].Frames[1].useTransparency = true;

	SpriteList[2].Animations[3].Frames[2].BitmapName = "Green Alien Back 3.bmp";
	SpriteList[2].Animations[3].Frames[2].TranslateX = 0.000;
	SpriteList[2].Animations[3].Frames[2].TranslateY = 0.000;
	SpriteList[2].Animations[3].Frames[2].Delay = 10;
	SpriteList[2].Animations[3].Frames[2].Width = 30;
	SpriteList[2].Animations[3].Frames[2].Height = 30;
	SpriteList[2].Animations[3].Frames[2].Transparency = RGB(255,255,255);
	SpriteList[2].Animations[3].Frames[2].hFlip = false;
	SpriteList[2].Animations[3].Frames[2].vFlip = false;
	SpriteList[2].Animations[3].Frames[2].zRotation = 0;
	SpriteList[2].Animations[3].Frames[2].HotSpot[0].x = 15;
	SpriteList[2].Animations[3].Frames[2].HotSpot[0].y = 15;
	::SetRect( &SpriteList[2].Animations[3].Frames[2].BBox, 0, 0, 29,29);
	SpriteList[2].Animations[3].Frames[2].centerX = 15;
	SpriteList[2].Animations[3].Frames[2].centerY = 15;
	SpriteList[2].Animations[3].Frames[2].PegRegistered = false;
	SpriteList[2].Animations[3].Frames[2].useTransparency = true;

	SpriteList[2].Animations[3].Frames[3].BitmapName = "Green Alien Back 2.bmp";
	SpriteList[2].Animations[3].Frames[3].TranslateX = 0.000;
	SpriteList[2].Animations[3].Frames[3].TranslateY = 0.000;
	SpriteList[2].Animations[3].Frames[3].Delay = 10;
	SpriteList[2].Animations[3].Frames[3].Width = 30;
	SpriteList[2].Animations[3].Frames[3].Height = 30;
	SpriteList[2].Animations[3].Frames[3].Transparency = RGB(255,255,255);
	SpriteList[2].Animations[3].Frames[3].hFlip = false;
	SpriteList[2].Animations[3].Frames[3].vFlip = false;
	SpriteList[2].Animations[3].Frames[3].zRotation = 0;
	SpriteList[2].Animations[3].Frames[3].HotSpot[0].x = 15;
	SpriteList[2].Animations[3].Frames[3].HotSpot[0].y = 15;
	::SetRect( &SpriteList[2].Animations[3].Frames[3].BBox, 0, 0, 29,29);
	SpriteList[2].Animations[3].Frames[3].centerX = 15;
	SpriteList[2].Animations[3].Frames[3].centerY = 15;
	SpriteList[2].Animations[3].Frames[3].PegRegistered = false;
	SpriteList[2].Animations[3].Frames[3].useTransparency = true;


	SpriteList[2].Animations[4].TotalFrames=2;
	SpriteList[2].Animations[4].ConnectTo = 0;
	SpriteList[2].Animations[4].Frames = new FrameElem[2];

	SpriteList[2].Animations[4].Frames[0].BitmapName = "Green Alien 2.bmp";
	SpriteList[2].Animations[4].Frames[0].TranslateX = 0.000;
	SpriteList[2].Animations[4].Frames[0].TranslateY = 0.000;
	SpriteList[2].Animations[4].Frames[0].Delay = 20;
	SpriteList[2].Animations[4].Frames[0].Width = 30;
	SpriteList[2].Animations[4].Frames[0].Height = 30;
	SpriteList[2].Animations[4].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[2].Animations[4].Frames[0].hFlip = false;
	SpriteList[2].Animations[4].Frames[0].vFlip = false;
	SpriteList[2].Animations[4].Frames[0].zRotation = 0;
	SpriteList[2].Animations[4].Frames[0].HotSpot[0].x = 15;
	SpriteList[2].Animations[4].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[2].Animations[4].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[2].Animations[4].Frames[0].centerX = 15;
	SpriteList[2].Animations[4].Frames[0].centerY = 15;
	SpriteList[2].Animations[4].Frames[0].PegRegistered = false;
	SpriteList[2].Animations[4].Frames[0].useTransparency = true;

	SpriteList[2].Animations[4].Frames[1].BitmapName = "Green Alien 4.bmp";
	SpriteList[2].Animations[4].Frames[1].TranslateX = 0.000;
	SpriteList[2].Animations[4].Frames[1].TranslateY = 0.000;
	SpriteList[2].Animations[4].Frames[1].Delay = 20;
	SpriteList[2].Animations[4].Frames[1].Width = 30;
	SpriteList[2].Animations[4].Frames[1].Height = 30;
	SpriteList[2].Animations[4].Frames[1].Transparency = RGB(255,255,255);
	SpriteList[2].Animations[4].Frames[1].hFlip = false;
	SpriteList[2].Animations[4].Frames[1].vFlip = false;
	SpriteList[2].Animations[4].Frames[1].zRotation = 0;
	SpriteList[2].Animations[4].Frames[1].HotSpot[0].x = 15;
	SpriteList[2].Animations[4].Frames[1].HotSpot[0].y = 15;
	::SetRect( &SpriteList[2].Animations[4].Frames[1].BBox, 0, 0, 29,29);
	SpriteList[2].Animations[4].Frames[1].centerX = 15;
	SpriteList[2].Animations[4].Frames[1].centerY = 15;
	SpriteList[2].Animations[4].Frames[1].PegRegistered = false;
	SpriteList[2].Animations[4].Frames[1].useTransparency = true;


	SpriteList[2].Animations[5].TotalFrames=2;
	SpriteList[2].Animations[5].ConnectTo = 0;
	SpriteList[2].Animations[5].Frames = new FrameElem[2];

	SpriteList[2].Animations[5].Frames[0].BitmapName = "Green Alien Back 2.bmp";
	SpriteList[2].Animations[5].Frames[0].TranslateX = 0.000;
	SpriteList[2].Animations[5].Frames[0].TranslateY = 0.000;
	SpriteList[2].Animations[5].Frames[0].Delay = 20;
	SpriteList[2].Animations[5].Frames[0].Width = 30;
	SpriteList[2].Animations[5].Frames[0].Height = 30;
	SpriteList[2].Animations[5].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[2].Animations[5].Frames[0].hFlip = false;
	SpriteList[2].Animations[5].Frames[0].vFlip = false;
	SpriteList[2].Animations[5].Frames[0].zRotation = 0;
	SpriteList[2].Animations[5].Frames[0].HotSpot[0].x = 15;
	SpriteList[2].Animations[5].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[2].Animations[5].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[2].Animations[5].Frames[0].centerX = 15;
	SpriteList[2].Animations[5].Frames[0].centerY = 15;
	SpriteList[2].Animations[5].Frames[0].PegRegistered = false;
	SpriteList[2].Animations[5].Frames[0].useTransparency = true;

	SpriteList[2].Animations[5].Frames[1].BitmapName = "Green Alien Back 4.bmp";
	SpriteList[2].Animations[5].Frames[1].TranslateX = 0.000;
	SpriteList[2].Animations[5].Frames[1].TranslateY = 0.000;
	SpriteList[2].Animations[5].Frames[1].Delay = 20;
	SpriteList[2].Animations[5].Frames[1].Width = 30;
	SpriteList[2].Animations[5].Frames[1].Height = 30;
	SpriteList[2].Animations[5].Frames[1].Transparency = RGB(255,255,255);
	SpriteList[2].Animations[5].Frames[1].hFlip = false;
	SpriteList[2].Animations[5].Frames[1].vFlip = false;
	SpriteList[2].Animations[5].Frames[1].zRotation = 0;
	SpriteList[2].Animations[5].Frames[1].HotSpot[0].x = 15;
	SpriteList[2].Animations[5].Frames[1].HotSpot[0].y = 15;
	::SetRect( &SpriteList[2].Animations[5].Frames[1].BBox, 0, 0, 29,29);
	SpriteList[2].Animations[5].Frames[1].centerX = 15;
	SpriteList[2].Animations[5].Frames[1].centerY = 15;
	SpriteList[2].Animations[5].Frames[1].PegRegistered = false;
	SpriteList[2].Animations[5].Frames[1].useTransparency = true;


	SpriteList[2].Animations[6].TotalFrames=2;
	SpriteList[2].Animations[6].ConnectTo = 0;
	SpriteList[2].Animations[6].Frames = new FrameElem[2];

	SpriteList[2].Animations[6].Frames[0].BitmapName = "Green Alien Right 2.bmp";
	SpriteList[2].Animations[6].Frames[0].TranslateX = 0.000;
	SpriteList[2].Animations[6].Frames[0].TranslateY = 0.000;
	SpriteList[2].Animations[6].Frames[0].Delay = 20;
	SpriteList[2].Animations[6].Frames[0].Width = 30;
	SpriteList[2].Animations[6].Frames[0].Height = 30;
	SpriteList[2].Animations[6].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[2].Animations[6].Frames[0].hFlip = false;
	SpriteList[2].Animations[6].Frames[0].vFlip = false;
	SpriteList[2].Animations[6].Frames[0].zRotation = 0;
	SpriteList[2].Animations[6].Frames[0].HotSpot[0].x = 15;
	SpriteList[2].Animations[6].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[2].Animations[6].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[2].Animations[6].Frames[0].centerX = 15;
	SpriteList[2].Animations[6].Frames[0].centerY = 15;
	SpriteList[2].Animations[6].Frames[0].PegRegistered = false;
	SpriteList[2].Animations[6].Frames[0].useTransparency = true;

	SpriteList[2].Animations[6].Frames[1].BitmapName = "Green Alien Right 4.bmp";
	SpriteList[2].Animations[6].Frames[1].TranslateX = 0.000;
	SpriteList[2].Animations[6].Frames[1].TranslateY = 0.000;
	SpriteList[2].Animations[6].Frames[1].Delay = 20;
	SpriteList[2].Animations[6].Frames[1].Width = 30;
	SpriteList[2].Animations[6].Frames[1].Height = 30;
	SpriteList[2].Animations[6].Frames[1].Transparency = RGB(255,255,255);
	SpriteList[2].Animations[6].Frames[1].hFlip = false;
	SpriteList[2].Animations[6].Frames[1].vFlip = false;
	SpriteList[2].Animations[6].Frames[1].zRotation = 0;
	SpriteList[2].Animations[6].Frames[1].HotSpot[0].x = 15;
	SpriteList[2].Animations[6].Frames[1].HotSpot[0].y = 15;
	::SetRect( &SpriteList[2].Animations[6].Frames[1].BBox, 0, 0, 29,29);
	SpriteList[2].Animations[6].Frames[1].centerX = 15;
	SpriteList[2].Animations[6].Frames[1].centerY = 15;
	SpriteList[2].Animations[6].Frames[1].PegRegistered = false;
	SpriteList[2].Animations[6].Frames[1].useTransparency = true;


	SpriteList[2].Animations[7].TotalFrames=2;
	SpriteList[2].Animations[7].ConnectTo = 0;
	SpriteList[2].Animations[7].Frames = new FrameElem[2];

	SpriteList[2].Animations[7].Frames[0].BitmapName = "Green Alien Left 2.bmp";
	SpriteList[2].Animations[7].Frames[0].TranslateX = 0.000;
	SpriteList[2].Animations[7].Frames[0].TranslateY = 0.000;
	SpriteList[2].Animations[7].Frames[0].Delay = 20;
	SpriteList[2].Animations[7].Frames[0].Width = 30;
	SpriteList[2].Animations[7].Frames[0].Height = 30;
	SpriteList[2].Animations[7].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[2].Animations[7].Frames[0].hFlip = false;
	SpriteList[2].Animations[7].Frames[0].vFlip = false;
	SpriteList[2].Animations[7].Frames[0].zRotation = 0;
	SpriteList[2].Animations[7].Frames[0].HotSpot[0].x = 15;
	SpriteList[2].Animations[7].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[2].Animations[7].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[2].Animations[7].Frames[0].centerX = 15;
	SpriteList[2].Animations[7].Frames[0].centerY = 15;
	SpriteList[2].Animations[7].Frames[0].PegRegistered = false;
	SpriteList[2].Animations[7].Frames[0].useTransparency = true;

	SpriteList[2].Animations[7].Frames[1].BitmapName = "Green Alien Left 4.bmp";
	SpriteList[2].Animations[7].Frames[1].TranslateX = 0.000;
	SpriteList[2].Animations[7].Frames[1].TranslateY = 0.000;
	SpriteList[2].Animations[7].Frames[1].Delay = 20;
	SpriteList[2].Animations[7].Frames[1].Width = 30;
	SpriteList[2].Animations[7].Frames[1].Height = 30;
	SpriteList[2].Animations[7].Frames[1].Transparency = RGB(255,255,255);
	SpriteList[2].Animations[7].Frames[1].hFlip = false;
	SpriteList[2].Animations[7].Frames[1].vFlip = false;
	SpriteList[2].Animations[7].Frames[1].zRotation = 0;
	SpriteList[2].Animations[7].Frames[1].HotSpot[0].x = 15;
	SpriteList[2].Animations[7].Frames[1].HotSpot[0].y = 15;
	::SetRect( &SpriteList[2].Animations[7].Frames[1].BBox, 0, 0, 29,29);
	SpriteList[2].Animations[7].Frames[1].centerX = 15;
	SpriteList[2].Animations[7].Frames[1].centerY = 15;
	SpriteList[2].Animations[7].Frames[1].PegRegistered = false;
	SpriteList[2].Animations[7].Frames[1].useTransparency = true;



	SpriteList[1].TotalAnimations = 8;
	SpriteList[1].Animations = new AnimationElem[8];

	SpriteList[1].Animations[0].TotalFrames=4;
	SpriteList[1].Animations[0].ConnectTo = 0;
	SpriteList[1].Animations[0].Frames = new FrameElem[4];

	SpriteList[1].Animations[0].Frames[0].BitmapName = "White Alien 1.bmp";
	SpriteList[1].Animations[0].Frames[0].TranslateX = 0.000;
	SpriteList[1].Animations[0].Frames[0].TranslateY = 0.000;
	SpriteList[1].Animations[0].Frames[0].Delay = 4;
	SpriteList[1].Animations[0].Frames[0].Width = 30;
	SpriteList[1].Animations[0].Frames[0].Height = 30;
	SpriteList[1].Animations[0].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[1].Animations[0].Frames[0].hFlip = false;
	SpriteList[1].Animations[0].Frames[0].vFlip = false;
	SpriteList[1].Animations[0].Frames[0].zRotation = 0;
	SpriteList[1].Animations[0].Frames[0].HotSpot[0].x = 15;
	SpriteList[1].Animations[0].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[1].Animations[0].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[1].Animations[0].Frames[0].centerX = 15;
	SpriteList[1].Animations[0].Frames[0].centerY = 15;
	SpriteList[1].Animations[0].Frames[0].PegRegistered = false;
	SpriteList[1].Animations[0].Frames[0].useTransparency = true;

	SpriteList[1].Animations[0].Frames[1].BitmapName = "White Alien 2.bmp";
	SpriteList[1].Animations[0].Frames[1].TranslateX = 0.000;
	SpriteList[1].Animations[0].Frames[1].TranslateY = 0.000;
	SpriteList[1].Animations[0].Frames[1].Delay = 4;
	SpriteList[1].Animations[0].Frames[1].Width = 30;
	SpriteList[1].Animations[0].Frames[1].Height = 30;
	SpriteList[1].Animations[0].Frames[1].Transparency = RGB(255,255,255);
	SpriteList[1].Animations[0].Frames[1].hFlip = false;
	SpriteList[1].Animations[0].Frames[1].vFlip = false;
	SpriteList[1].Animations[0].Frames[1].zRotation = 0;
	SpriteList[1].Animations[0].Frames[1].HotSpot[0].x = 15;
	SpriteList[1].Animations[0].Frames[1].HotSpot[0].y = 15;
	::SetRect( &SpriteList[1].Animations[0].Frames[1].BBox, 0, 0, 29,29);
	SpriteList[1].Animations[0].Frames[1].centerX = 15;
	SpriteList[1].Animations[0].Frames[1].centerY = 15;
	SpriteList[1].Animations[0].Frames[1].PegRegistered = false;
	SpriteList[1].Animations[0].Frames[1].useTransparency = true;

	SpriteList[1].Animations[0].Frames[2].BitmapName = "White Alien 3.bmp";
	SpriteList[1].Animations[0].Frames[2].TranslateX = 0.000;
	SpriteList[1].Animations[0].Frames[2].TranslateY = 0.000;
	SpriteList[1].Animations[0].Frames[2].Delay = 4;
	SpriteList[1].Animations[0].Frames[2].Width = 30;
	SpriteList[1].Animations[0].Frames[2].Height = 30;
	SpriteList[1].Animations[0].Frames[2].Transparency = RGB(255,255,255);
	SpriteList[1].Animations[0].Frames[2].hFlip = false;
	SpriteList[1].Animations[0].Frames[2].vFlip = false;
	SpriteList[1].Animations[0].Frames[2].zRotation = 0;
	SpriteList[1].Animations[0].Frames[2].HotSpot[0].x = 15;
	SpriteList[1].Animations[0].Frames[2].HotSpot[0].y = 15;
	::SetRect( &SpriteList[1].Animations[0].Frames[2].BBox, 0, 0, 29,29);
	SpriteList[1].Animations[0].Frames[2].centerX = 15;
	SpriteList[1].Animations[0].Frames[2].centerY = 15;
	SpriteList[1].Animations[0].Frames[2].PegRegistered = false;
	SpriteList[1].Animations[0].Frames[2].useTransparency = true;

	SpriteList[1].Animations[0].Frames[3].BitmapName = "White Alien 2.bmp";
	SpriteList[1].Animations[0].Frames[3].TranslateX = 0.000;
	SpriteList[1].Animations[0].Frames[3].TranslateY = 0.000;
	SpriteList[1].Animations[0].Frames[3].Delay = 4;
	SpriteList[1].Animations[0].Frames[3].Width = 30;
	SpriteList[1].Animations[0].Frames[3].Height = 30;
	SpriteList[1].Animations[0].Frames[3].Transparency = RGB(255,255,255);
	SpriteList[1].Animations[0].Frames[3].hFlip = false;
	SpriteList[1].Animations[0].Frames[3].vFlip = false;
	SpriteList[1].Animations[0].Frames[3].zRotation = 0;
	SpriteList[1].Animations[0].Frames[3].HotSpot[0].x = 15;
	SpriteList[1].Animations[0].Frames[3].HotSpot[0].y = 15;
	::SetRect( &SpriteList[1].Animations[0].Frames[3].BBox, 0, 0, 29,29);
	SpriteList[1].Animations[0].Frames[3].centerX = 15;
	SpriteList[1].Animations[0].Frames[3].centerY = 15;
	SpriteList[1].Animations[0].Frames[3].PegRegistered = false;
	SpriteList[1].Animations[0].Frames[3].useTransparency = true;


	SpriteList[1].Animations[1].TotalFrames=4;
	SpriteList[1].Animations[1].ConnectTo = 0;
	SpriteList[1].Animations[1].Frames = new FrameElem[4];

	SpriteList[1].Animations[1].Frames[0].BitmapName = "White Alien Left 1.bmp";
	SpriteList[1].Animations[1].Frames[0].TranslateX = 0.000;
	SpriteList[1].Animations[1].Frames[0].TranslateY = 0.000;
	SpriteList[1].Animations[1].Frames[0].Delay = 4;
	SpriteList[1].Animations[1].Frames[0].Width = 30;
	SpriteList[1].Animations[1].Frames[0].Height = 30;
	SpriteList[1].Animations[1].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[1].Animations[1].Frames[0].hFlip = false;
	SpriteList[1].Animations[1].Frames[0].vFlip = false;
	SpriteList[1].Animations[1].Frames[0].zRotation = 0;
	SpriteList[1].Animations[1].Frames[0].HotSpot[0].x = 15;
	SpriteList[1].Animations[1].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[1].Animations[1].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[1].Animations[1].Frames[0].centerX = 15;
	SpriteList[1].Animations[1].Frames[0].centerY = 15;
	SpriteList[1].Animations[1].Frames[0].PegRegistered = false;
	SpriteList[1].Animations[1].Frames[0].useTransparency = true;

	SpriteList[1].Animations[1].Frames[1].BitmapName = "White Alien Left 2.bmp";
	SpriteList[1].Animations[1].Frames[1].TranslateX = 0.000;
	SpriteList[1].Animations[1].Frames[1].TranslateY = 0.000;
	SpriteList[1].Animations[1].Frames[1].Delay = 4;
	SpriteList[1].Animations[1].Frames[1].Width = 30;
	SpriteList[1].Animations[1].Frames[1].Height = 30;
	SpriteList[1].Animations[1].Frames[1].Transparency = RGB(255,255,255);
	SpriteList[1].Animations[1].Frames[1].hFlip = false;
	SpriteList[1].Animations[1].Frames[1].vFlip = false;
	SpriteList[1].Animations[1].Frames[1].zRotation = 0;
	SpriteList[1].Animations[1].Frames[1].HotSpot[0].x = 15;
	SpriteList[1].Animations[1].Frames[1].HotSpot[0].y = 15;
	::SetRect( &SpriteList[1].Animations[1].Frames[1].BBox, 0, 0, 29,29);
	SpriteList[1].Animations[1].Frames[1].centerX = 15;
	SpriteList[1].Animations[1].Frames[1].centerY = 15;
	SpriteList[1].Animations[1].Frames[1].PegRegistered = false;
	SpriteList[1].Animations[1].Frames[1].useTransparency = true;

	SpriteList[1].Animations[1].Frames[2].BitmapName = "White Alien Left 3.bmp";
	SpriteList[1].Animations[1].Frames[2].TranslateX = 0.000;
	SpriteList[1].Animations[1].Frames[2].TranslateY = 0.000;
	SpriteList[1].Animations[1].Frames[2].Delay = 4;
	SpriteList[1].Animations[1].Frames[2].Width = 30;
	SpriteList[1].Animations[1].Frames[2].Height = 30;
	SpriteList[1].Animations[1].Frames[2].Transparency = RGB(255,255,255);
	SpriteList[1].Animations[1].Frames[2].hFlip = false;
	SpriteList[1].Animations[1].Frames[2].vFlip = false;
	SpriteList[1].Animations[1].Frames[2].zRotation = 0;
	SpriteList[1].Animations[1].Frames[2].HotSpot[0].x = 15;
	SpriteList[1].Animations[1].Frames[2].HotSpot[0].y = 15;
	::SetRect( &SpriteList[1].Animations[1].Frames[2].BBox, 0, 0, 29,29);
	SpriteList[1].Animations[1].Frames[2].centerX = 15;
	SpriteList[1].Animations[1].Frames[2].centerY = 15;
	SpriteList[1].Animations[1].Frames[2].PegRegistered = false;
	SpriteList[1].Animations[1].Frames[2].useTransparency = true;

	SpriteList[1].Animations[1].Frames[3].BitmapName = "White Alien Left 2.bmp";
	SpriteList[1].Animations[1].Frames[3].TranslateX = 0.000;
	SpriteList[1].Animations[1].Frames[3].TranslateY = 0.000;
	SpriteList[1].Animations[1].Frames[3].Delay = 4;
	SpriteList[1].Animations[1].Frames[3].Width = 30;
	SpriteList[1].Animations[1].Frames[3].Height = 30;
	SpriteList[1].Animations[1].Frames[3].Transparency = RGB(255,255,255);
	SpriteList[1].Animations[1].Frames[3].hFlip = false;
	SpriteList[1].Animations[1].Frames[3].vFlip = false;
	SpriteList[1].Animations[1].Frames[3].zRotation = 0;
	SpriteList[1].Animations[1].Frames[3].HotSpot[0].x = 15;
	SpriteList[1].Animations[1].Frames[3].HotSpot[0].y = 15;
	::SetRect( &SpriteList[1].Animations[1].Frames[3].BBox, 0, 0, 29,29);
	SpriteList[1].Animations[1].Frames[3].centerX = 15;
	SpriteList[1].Animations[1].Frames[3].centerY = 15;
	SpriteList[1].Animations[1].Frames[3].PegRegistered = false;
	SpriteList[1].Animations[1].Frames[3].useTransparency = true;


	SpriteList[1].Animations[2].TotalFrames=4;
	SpriteList[1].Animations[2].ConnectTo = 0;
	SpriteList[1].Animations[2].Frames = new FrameElem[4];

	SpriteList[1].Animations[2].Frames[0].BitmapName = "White Alien Right 1.bmp";
	SpriteList[1].Animations[2].Frames[0].TranslateX = 0.000;
	SpriteList[1].Animations[2].Frames[0].TranslateY = 0.000;
	SpriteList[1].Animations[2].Frames[0].Delay = 4;
	SpriteList[1].Animations[2].Frames[0].Width = 30;
	SpriteList[1].Animations[2].Frames[0].Height = 30;
	SpriteList[1].Animations[2].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[1].Animations[2].Frames[0].hFlip = false;
	SpriteList[1].Animations[2].Frames[0].vFlip = false;
	SpriteList[1].Animations[2].Frames[0].zRotation = 0;
	SpriteList[1].Animations[2].Frames[0].HotSpot[0].x = 15;
	SpriteList[1].Animations[2].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[1].Animations[2].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[1].Animations[2].Frames[0].centerX = 15;
	SpriteList[1].Animations[2].Frames[0].centerY = 15;
	SpriteList[1].Animations[2].Frames[0].PegRegistered = false;
	SpriteList[1].Animations[2].Frames[0].useTransparency = true;

	SpriteList[1].Animations[2].Frames[1].BitmapName = "White Alien Right 2.bmp";
	SpriteList[1].Animations[2].Frames[1].TranslateX = 0.000;
	SpriteList[1].Animations[2].Frames[1].TranslateY = 0.000;
	SpriteList[1].Animations[2].Frames[1].Delay = 4;
	SpriteList[1].Animations[2].Frames[1].Width = 30;
	SpriteList[1].Animations[2].Frames[1].Height = 30;
	SpriteList[1].Animations[2].Frames[1].Transparency = RGB(255,255,255);
	SpriteList[1].Animations[2].Frames[1].hFlip = false;
	SpriteList[1].Animations[2].Frames[1].vFlip = false;
	SpriteList[1].Animations[2].Frames[1].zRotation = 0;
	SpriteList[1].Animations[2].Frames[1].HotSpot[0].x = 15;
	SpriteList[1].Animations[2].Frames[1].HotSpot[0].y = 15;
	::SetRect( &SpriteList[1].Animations[2].Frames[1].BBox, 0, 0, 29,29);
	SpriteList[1].Animations[2].Frames[1].centerX = 15;
	SpriteList[1].Animations[2].Frames[1].centerY = 15;
	SpriteList[1].Animations[2].Frames[1].PegRegistered = false;
	SpriteList[1].Animations[2].Frames[1].useTransparency = true;

	SpriteList[1].Animations[2].Frames[2].BitmapName = "White Alien Right 3.bmp";
	SpriteList[1].Animations[2].Frames[2].TranslateX = 0.000;
	SpriteList[1].Animations[2].Frames[2].TranslateY = 0.000;
	SpriteList[1].Animations[2].Frames[2].Delay = 4;
	SpriteList[1].Animations[2].Frames[2].Width = 30;
	SpriteList[1].Animations[2].Frames[2].Height = 30;
	SpriteList[1].Animations[2].Frames[2].Transparency = RGB(255,255,255);
	SpriteList[1].Animations[2].Frames[2].hFlip = false;
	SpriteList[1].Animations[2].Frames[2].vFlip = false;
	SpriteList[1].Animations[2].Frames[2].zRotation = 0;
	SpriteList[1].Animations[2].Frames[2].HotSpot[0].x = 15;
	SpriteList[1].Animations[2].Frames[2].HotSpot[0].y = 15;
	::SetRect( &SpriteList[1].Animations[2].Frames[2].BBox, 0, 0, 29,29);
	SpriteList[1].Animations[2].Frames[2].centerX = 15;
	SpriteList[1].Animations[2].Frames[2].centerY = 15;
	SpriteList[1].Animations[2].Frames[2].PegRegistered = false;
	SpriteList[1].Animations[2].Frames[2].useTransparency = true;

	SpriteList[1].Animations[2].Frames[3].BitmapName = "White Alien Right 2.bmp";
	SpriteList[1].Animations[2].Frames[3].TranslateX = 0.000;
	SpriteList[1].Animations[2].Frames[3].TranslateY = 0.000;
	SpriteList[1].Animations[2].Frames[3].Delay = 4;
	SpriteList[1].Animations[2].Frames[3].Width = 30;
	SpriteList[1].Animations[2].Frames[3].Height = 30;
	SpriteList[1].Animations[2].Frames[3].Transparency = RGB(255,255,255);
	SpriteList[1].Animations[2].Frames[3].hFlip = false;
	SpriteList[1].Animations[2].Frames[3].vFlip = false;
	SpriteList[1].Animations[2].Frames[3].zRotation = 0;
	SpriteList[1].Animations[2].Frames[3].HotSpot[0].x = 15;
	SpriteList[1].Animations[2].Frames[3].HotSpot[0].y = 15;
	::SetRect( &SpriteList[1].Animations[2].Frames[3].BBox, 0, 0, 29,29);
	SpriteList[1].Animations[2].Frames[3].centerX = 15;
	SpriteList[1].Animations[2].Frames[3].centerY = 15;
	SpriteList[1].Animations[2].Frames[3].PegRegistered = false;
	SpriteList[1].Animations[2].Frames[3].useTransparency = true;


	SpriteList[1].Animations[3].TotalFrames=4;
	SpriteList[1].Animations[3].ConnectTo = 0;
	SpriteList[1].Animations[3].Frames = new FrameElem[4];

	SpriteList[1].Animations[3].Frames[0].BitmapName = "White Alien Back 1.bmp";
	SpriteList[1].Animations[3].Frames[0].TranslateX = 0.000;
	SpriteList[1].Animations[3].Frames[0].TranslateY = 0.000;
	SpriteList[1].Animations[3].Frames[0].Delay = 4;
	SpriteList[1].Animations[3].Frames[0].Width = 30;
	SpriteList[1].Animations[3].Frames[0].Height = 30;
	SpriteList[1].Animations[3].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[1].Animations[3].Frames[0].hFlip = false;
	SpriteList[1].Animations[3].Frames[0].vFlip = false;
	SpriteList[1].Animations[3].Frames[0].zRotation = 0;
	SpriteList[1].Animations[3].Frames[0].HotSpot[0].x = 15;
	SpriteList[1].Animations[3].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[1].Animations[3].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[1].Animations[3].Frames[0].centerX = 15;
	SpriteList[1].Animations[3].Frames[0].centerY = 15;
	SpriteList[1].Animations[3].Frames[0].PegRegistered = false;
	SpriteList[1].Animations[3].Frames[0].useTransparency = true;

	SpriteList[1].Animations[3].Frames[1].BitmapName = "White Alien Back 2.bmp";
	SpriteList[1].Animations[3].Frames[1].TranslateX = 0.000;
	SpriteList[1].Animations[3].Frames[1].TranslateY = 0.000;
	SpriteList[1].Animations[3].Frames[1].Delay = 4;
	SpriteList[1].Animations[3].Frames[1].Width = 30;
	SpriteList[1].Animations[3].Frames[1].Height = 30;
	SpriteList[1].Animations[3].Frames[1].Transparency = RGB(255,255,255);
	SpriteList[1].Animations[3].Frames[1].hFlip = false;
	SpriteList[1].Animations[3].Frames[1].vFlip = false;
	SpriteList[1].Animations[3].Frames[1].zRotation = 0;
	SpriteList[1].Animations[3].Frames[1].HotSpot[0].x = 15;
	SpriteList[1].Animations[3].Frames[1].HotSpot[0].y = 15;
	::SetRect( &SpriteList[1].Animations[3].Frames[1].BBox, 0, 0, 29,29);
	SpriteList[1].Animations[3].Frames[1].centerX = 15;
	SpriteList[1].Animations[3].Frames[1].centerY = 15;
	SpriteList[1].Animations[3].Frames[1].PegRegistered = false;
	SpriteList[1].Animations[3].Frames[1].useTransparency = true;

	SpriteList[1].Animations[3].Frames[2].BitmapName = "White Alien Back 3.bmp";
	SpriteList[1].Animations[3].Frames[2].TranslateX = 0.000;
	SpriteList[1].Animations[3].Frames[2].TranslateY = 0.000;
	SpriteList[1].Animations[3].Frames[2].Delay = 4;
	SpriteList[1].Animations[3].Frames[2].Width = 30;
	SpriteList[1].Animations[3].Frames[2].Height = 30;
	SpriteList[1].Animations[3].Frames[2].Transparency = RGB(255,255,255);
	SpriteList[1].Animations[3].Frames[2].hFlip = false;
	SpriteList[1].Animations[3].Frames[2].vFlip = false;
	SpriteList[1].Animations[3].Frames[2].zRotation = 0;
	SpriteList[1].Animations[3].Frames[2].HotSpot[0].x = 15;
	SpriteList[1].Animations[3].Frames[2].HotSpot[0].y = 15;
	::SetRect( &SpriteList[1].Animations[3].Frames[2].BBox, 0, 0, 29,29);
	SpriteList[1].Animations[3].Frames[2].centerX = 15;
	SpriteList[1].Animations[3].Frames[2].centerY = 15;
	SpriteList[1].Animations[3].Frames[2].PegRegistered = false;
	SpriteList[1].Animations[3].Frames[2].useTransparency = true;

	SpriteList[1].Animations[3].Frames[3].BitmapName = "White Alien Back 2.bmp";
	SpriteList[1].Animations[3].Frames[3].TranslateX = 0.000;
	SpriteList[1].Animations[3].Frames[3].TranslateY = 0.000;
	SpriteList[1].Animations[3].Frames[3].Delay = 4;
	SpriteList[1].Animations[3].Frames[3].Width = 30;
	SpriteList[1].Animations[3].Frames[3].Height = 30;
	SpriteList[1].Animations[3].Frames[3].Transparency = RGB(255,255,255);
	SpriteList[1].Animations[3].Frames[3].hFlip = false;
	SpriteList[1].Animations[3].Frames[3].vFlip = false;
	SpriteList[1].Animations[3].Frames[3].zRotation = 0;
	SpriteList[1].Animations[3].Frames[3].HotSpot[0].x = 15;
	SpriteList[1].Animations[3].Frames[3].HotSpot[0].y = 15;
	::SetRect( &SpriteList[1].Animations[3].Frames[3].BBox, 0, 0, 29,29);
	SpriteList[1].Animations[3].Frames[3].centerX = 15;
	SpriteList[1].Animations[3].Frames[3].centerY = 15;
	SpriteList[1].Animations[3].Frames[3].PegRegistered = false;
	SpriteList[1].Animations[3].Frames[3].useTransparency = true;


	SpriteList[1].Animations[4].TotalFrames=2;
	SpriteList[1].Animations[4].ConnectTo = 0;
	SpriteList[1].Animations[4].Frames = new FrameElem[2];

	SpriteList[1].Animations[4].Frames[0].BitmapName = "White Alien 2.bmp";
	SpriteList[1].Animations[4].Frames[0].TranslateX = 0.000;
	SpriteList[1].Animations[4].Frames[0].TranslateY = 0.000;
	SpriteList[1].Animations[4].Frames[0].Delay = 20;
	SpriteList[1].Animations[4].Frames[0].Width = 30;
	SpriteList[1].Animations[4].Frames[0].Height = 30;
	SpriteList[1].Animations[4].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[1].Animations[4].Frames[0].hFlip = false;
	SpriteList[1].Animations[4].Frames[0].vFlip = false;
	SpriteList[1].Animations[4].Frames[0].zRotation = 0;
	SpriteList[1].Animations[4].Frames[0].HotSpot[0].x = 15;
	SpriteList[1].Animations[4].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[1].Animations[4].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[1].Animations[4].Frames[0].centerX = 15;
	SpriteList[1].Animations[4].Frames[0].centerY = 15;
	SpriteList[1].Animations[4].Frames[0].PegRegistered = false;
	SpriteList[1].Animations[4].Frames[0].useTransparency = true;

	SpriteList[1].Animations[4].Frames[1].BitmapName = "White Alien 4.bmp";
	SpriteList[1].Animations[4].Frames[1].TranslateX = 0.000;
	SpriteList[1].Animations[4].Frames[1].TranslateY = 0.000;
	SpriteList[1].Animations[4].Frames[1].Delay = 20;
	SpriteList[1].Animations[4].Frames[1].Width = 30;
	SpriteList[1].Animations[4].Frames[1].Height = 30;
	SpriteList[1].Animations[4].Frames[1].Transparency = RGB(255,255,255);
	SpriteList[1].Animations[4].Frames[1].hFlip = false;
	SpriteList[1].Animations[4].Frames[1].vFlip = false;
	SpriteList[1].Animations[4].Frames[1].zRotation = 0;
	SpriteList[1].Animations[4].Frames[1].HotSpot[0].x = 15;
	SpriteList[1].Animations[4].Frames[1].HotSpot[0].y = 15;
	::SetRect( &SpriteList[1].Animations[4].Frames[1].BBox, 0, 0, 29,29);
	SpriteList[1].Animations[4].Frames[1].centerX = 15;
	SpriteList[1].Animations[4].Frames[1].centerY = 15;
	SpriteList[1].Animations[4].Frames[1].PegRegistered = false;
	SpriteList[1].Animations[4].Frames[1].useTransparency = true;


	SpriteList[1].Animations[5].TotalFrames=2;
	SpriteList[1].Animations[5].ConnectTo = 0;
	SpriteList[1].Animations[5].Frames = new FrameElem[2];

	SpriteList[1].Animations[5].Frames[0].BitmapName = "White Alien Back 2.bmp";
	SpriteList[1].Animations[5].Frames[0].TranslateX = 0.000;
	SpriteList[1].Animations[5].Frames[0].TranslateY = 0.000;
	SpriteList[1].Animations[5].Frames[0].Delay = 20;
	SpriteList[1].Animations[5].Frames[0].Width = 30;
	SpriteList[1].Animations[5].Frames[0].Height = 30;
	SpriteList[1].Animations[5].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[1].Animations[5].Frames[0].hFlip = false;
	SpriteList[1].Animations[5].Frames[0].vFlip = false;
	SpriteList[1].Animations[5].Frames[0].zRotation = 0;
	SpriteList[1].Animations[5].Frames[0].HotSpot[0].x = 15;
	SpriteList[1].Animations[5].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[1].Animations[5].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[1].Animations[5].Frames[0].centerX = 15;
	SpriteList[1].Animations[5].Frames[0].centerY = 15;
	SpriteList[1].Animations[5].Frames[0].PegRegistered = false;
	SpriteList[1].Animations[5].Frames[0].useTransparency = true;

	SpriteList[1].Animations[5].Frames[1].BitmapName = "White Alien Back 4.bmp";
	SpriteList[1].Animations[5].Frames[1].TranslateX = 0.000;
	SpriteList[1].Animations[5].Frames[1].TranslateY = 0.000;
	SpriteList[1].Animations[5].Frames[1].Delay = 20;
	SpriteList[1].Animations[5].Frames[1].Width = 30;
	SpriteList[1].Animations[5].Frames[1].Height = 30;
	SpriteList[1].Animations[5].Frames[1].Transparency = RGB(255,255,255);
	SpriteList[1].Animations[5].Frames[1].hFlip = false;
	SpriteList[1].Animations[5].Frames[1].vFlip = false;
	SpriteList[1].Animations[5].Frames[1].zRotation = 0;
	SpriteList[1].Animations[5].Frames[1].HotSpot[0].x = 15;
	SpriteList[1].Animations[5].Frames[1].HotSpot[0].y = 15;
	::SetRect( &SpriteList[1].Animations[5].Frames[1].BBox, 0, 0, 29,29);
	SpriteList[1].Animations[5].Frames[1].centerX = 15;
	SpriteList[1].Animations[5].Frames[1].centerY = 15;
	SpriteList[1].Animations[5].Frames[1].PegRegistered = false;
	SpriteList[1].Animations[5].Frames[1].useTransparency = true;


	SpriteList[1].Animations[6].TotalFrames=2;
	SpriteList[1].Animations[6].ConnectTo = 0;
	SpriteList[1].Animations[6].Frames = new FrameElem[2];

	SpriteList[1].Animations[6].Frames[0].BitmapName = "White Alien Right 2.bmp";
	SpriteList[1].Animations[6].Frames[0].TranslateX = 0.000;
	SpriteList[1].Animations[6].Frames[0].TranslateY = 0.000;
	SpriteList[1].Animations[6].Frames[0].Delay = 20;
	SpriteList[1].Animations[6].Frames[0].Width = 30;
	SpriteList[1].Animations[6].Frames[0].Height = 30;
	SpriteList[1].Animations[6].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[1].Animations[6].Frames[0].hFlip = false;
	SpriteList[1].Animations[6].Frames[0].vFlip = false;
	SpriteList[1].Animations[6].Frames[0].zRotation = 0;
	SpriteList[1].Animations[6].Frames[0].HotSpot[0].x = 15;
	SpriteList[1].Animations[6].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[1].Animations[6].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[1].Animations[6].Frames[0].centerX = 15;
	SpriteList[1].Animations[6].Frames[0].centerY = 15;
	SpriteList[1].Animations[6].Frames[0].PegRegistered = false;
	SpriteList[1].Animations[6].Frames[0].useTransparency = true;

	SpriteList[1].Animations[6].Frames[1].BitmapName = "White Alien Right 4.bmp";
	SpriteList[1].Animations[6].Frames[1].TranslateX = 0.000;
	SpriteList[1].Animations[6].Frames[1].TranslateY = 0.000;
	SpriteList[1].Animations[6].Frames[1].Delay = 20;
	SpriteList[1].Animations[6].Frames[1].Width = 30;
	SpriteList[1].Animations[6].Frames[1].Height = 30;
	SpriteList[1].Animations[6].Frames[1].Transparency = RGB(255,255,255);
	SpriteList[1].Animations[6].Frames[1].hFlip = false;
	SpriteList[1].Animations[6].Frames[1].vFlip = false;
	SpriteList[1].Animations[6].Frames[1].zRotation = 0;
	SpriteList[1].Animations[6].Frames[1].HotSpot[0].x = 15;
	SpriteList[1].Animations[6].Frames[1].HotSpot[0].y = 15;
	::SetRect( &SpriteList[1].Animations[6].Frames[1].BBox, 0, 0, 29,29);
	SpriteList[1].Animations[6].Frames[1].centerX = 15;
	SpriteList[1].Animations[6].Frames[1].centerY = 15;
	SpriteList[1].Animations[6].Frames[1].PegRegistered = false;
	SpriteList[1].Animations[6].Frames[1].useTransparency = true;


	SpriteList[1].Animations[7].TotalFrames=2;
	SpriteList[1].Animations[7].ConnectTo = 0;
	SpriteList[1].Animations[7].Frames = new FrameElem[2];

	SpriteList[1].Animations[7].Frames[0].BitmapName = "White Alien Left 2.bmp";
	SpriteList[1].Animations[7].Frames[0].TranslateX = 0.000;
	SpriteList[1].Animations[7].Frames[0].TranslateY = 0.000;
	SpriteList[1].Animations[7].Frames[0].Delay = 20;
	SpriteList[1].Animations[7].Frames[0].Width = 30;
	SpriteList[1].Animations[7].Frames[0].Height = 30;
	SpriteList[1].Animations[7].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[1].Animations[7].Frames[0].hFlip = false;
	SpriteList[1].Animations[7].Frames[0].vFlip = false;
	SpriteList[1].Animations[7].Frames[0].zRotation = 0;
	SpriteList[1].Animations[7].Frames[0].HotSpot[0].x = 15;
	SpriteList[1].Animations[7].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[1].Animations[7].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[1].Animations[7].Frames[0].centerX = 15;
	SpriteList[1].Animations[7].Frames[0].centerY = 15;
	SpriteList[1].Animations[7].Frames[0].PegRegistered = false;
	SpriteList[1].Animations[7].Frames[0].useTransparency = true;

	SpriteList[1].Animations[7].Frames[1].BitmapName = "White Alien Left 4.bmp";
	SpriteList[1].Animations[7].Frames[1].TranslateX = 0.000;
	SpriteList[1].Animations[7].Frames[1].TranslateY = 0.000;
	SpriteList[1].Animations[7].Frames[1].Delay = 20;
	SpriteList[1].Animations[7].Frames[1].Width = 30;
	SpriteList[1].Animations[7].Frames[1].Height = 30;
	SpriteList[1].Animations[7].Frames[1].Transparency = RGB(255,255,255);
	SpriteList[1].Animations[7].Frames[1].hFlip = false;
	SpriteList[1].Animations[7].Frames[1].vFlip = false;
	SpriteList[1].Animations[7].Frames[1].zRotation = 0;
	SpriteList[1].Animations[7].Frames[1].HotSpot[0].x = 15;
	SpriteList[1].Animations[7].Frames[1].HotSpot[0].y = 15;
	::SetRect( &SpriteList[1].Animations[7].Frames[1].BBox, 0, 0, 29,29);
	SpriteList[1].Animations[7].Frames[1].centerX = 15;
	SpriteList[1].Animations[7].Frames[1].centerY = 15;
	SpriteList[1].Animations[7].Frames[1].PegRegistered = false;
	SpriteList[1].Animations[7].Frames[1].useTransparency = true;



}

void LoadAnimation_Level_2(GameNode* gn)
{
	SpriteList[4].TotalAnimations = 7;
	SpriteList[4].Animations = new AnimationElem[7];

	SpriteList[4].Animations[0].TotalFrames=1;
	SpriteList[4].Animations[0].ConnectTo = 0;
	SpriteList[4].Animations[0].Frames = new FrameElem[1];

	SpriteList[4].Animations[0].Frames[0].BitmapName = "Wall.bmp";
	SpriteList[4].Animations[0].Frames[0].TranslateX = 0.000;
	SpriteList[4].Animations[0].Frames[0].TranslateY = 0.000;
	SpriteList[4].Animations[0].Frames[0].Delay = 1;
	SpriteList[4].Animations[0].Frames[0].Width = 30;
	SpriteList[4].Animations[0].Frames[0].Height = 30;
	SpriteList[4].Animations[0].Frames[0].Transparency = RGB(240,240,240);
	SpriteList[4].Animations[0].Frames[0].hFlip = false;
	SpriteList[4].Animations[0].Frames[0].vFlip = false;
	SpriteList[4].Animations[0].Frames[0].zRotation = 0;
	SpriteList[4].Animations[0].Frames[0].HotSpot[0].x = 15;
	SpriteList[4].Animations[0].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[4].Animations[0].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[4].Animations[0].Frames[0].centerX = 15;
	SpriteList[4].Animations[0].Frames[0].centerY = 15;
	SpriteList[4].Animations[0].Frames[0].PegRegistered = false;
	SpriteList[4].Animations[0].Frames[0].useTransparency = false;


	SpriteList[4].Animations[1].TotalFrames=3;
	SpriteList[4].Animations[1].ConnectTo = 0;
	SpriteList[4].Animations[1].Frames = new FrameElem[3];

	SpriteList[4].Animations[1].Frames[0].BitmapName = "Server 1.bmp";
	SpriteList[4].Animations[1].Frames[0].TranslateX = 0.000;
	SpriteList[4].Animations[1].Frames[0].TranslateY = 0.000;
	SpriteList[4].Animations[1].Frames[0].Delay = 21;
	SpriteList[4].Animations[1].Frames[0].Width = 30;
	SpriteList[4].Animations[1].Frames[0].Height = 30;
	SpriteList[4].Animations[1].Frames[0].Transparency = RGB(240,240,240);
	SpriteList[4].Animations[1].Frames[0].hFlip = false;
	SpriteList[4].Animations[1].Frames[0].vFlip = false;
	SpriteList[4].Animations[1].Frames[0].zRotation = 0;
	SpriteList[4].Animations[1].Frames[0].HotSpot[0].x = 15;
	SpriteList[4].Animations[1].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[4].Animations[1].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[4].Animations[1].Frames[0].centerX = 15;
	SpriteList[4].Animations[1].Frames[0].centerY = 15;
	SpriteList[4].Animations[1].Frames[0].PegRegistered = false;
	SpriteList[4].Animations[1].Frames[0].useTransparency = false;

	SpriteList[4].Animations[1].Frames[1].BitmapName = "Server 2.bmp";
	SpriteList[4].Animations[1].Frames[1].TranslateX = 0.000;
	SpriteList[4].Animations[1].Frames[1].TranslateY = 0.000;
	SpriteList[4].Animations[1].Frames[1].Delay = 21;
	SpriteList[4].Animations[1].Frames[1].Width = 30;
	SpriteList[4].Animations[1].Frames[1].Height = 30;
	SpriteList[4].Animations[1].Frames[1].Transparency = RGB(240,240,240);
	SpriteList[4].Animations[1].Frames[1].hFlip = false;
	SpriteList[4].Animations[1].Frames[1].vFlip = false;
	SpriteList[4].Animations[1].Frames[1].zRotation = 0;
	SpriteList[4].Animations[1].Frames[1].HotSpot[0].x = 15;
	SpriteList[4].Animations[1].Frames[1].HotSpot[0].y = 15;
	::SetRect( &SpriteList[4].Animations[1].Frames[1].BBox, 0, 0, 29,29);
	SpriteList[4].Animations[1].Frames[1].centerX = 15;
	SpriteList[4].Animations[1].Frames[1].centerY = 15;
	SpriteList[4].Animations[1].Frames[1].PegRegistered = false;
	SpriteList[4].Animations[1].Frames[1].useTransparency = false;

	SpriteList[4].Animations[1].Frames[2].BitmapName = "Server 3.bmp";
	SpriteList[4].Animations[1].Frames[2].TranslateX = 0.000;
	SpriteList[4].Animations[1].Frames[2].TranslateY = 0.000;
	SpriteList[4].Animations[1].Frames[2].Delay = 21;
	SpriteList[4].Animations[1].Frames[2].Width = 30;
	SpriteList[4].Animations[1].Frames[2].Height = 30;
	SpriteList[4].Animations[1].Frames[2].Transparency = RGB(240,240,240);
	SpriteList[4].Animations[1].Frames[2].hFlip = false;
	SpriteList[4].Animations[1].Frames[2].vFlip = false;
	SpriteList[4].Animations[1].Frames[2].zRotation = 0;
	SpriteList[4].Animations[1].Frames[2].HotSpot[0].x = 15;
	SpriteList[4].Animations[1].Frames[2].HotSpot[0].y = 15;
	::SetRect( &SpriteList[4].Animations[1].Frames[2].BBox, 0, 0, 29,29);
	SpriteList[4].Animations[1].Frames[2].centerX = 15;
	SpriteList[4].Animations[1].Frames[2].centerY = 15;
	SpriteList[4].Animations[1].Frames[2].PegRegistered = false;
	SpriteList[4].Animations[1].Frames[2].useTransparency = false;


	SpriteList[4].Animations[2].TotalFrames=1;
	SpriteList[4].Animations[2].ConnectTo = 0;
	SpriteList[4].Animations[2].Frames = new FrameElem[1];

	SpriteList[4].Animations[2].Frames[0].BitmapName = "Door 1.bmp";
	SpriteList[4].Animations[2].Frames[0].TranslateX = 0.000;
	SpriteList[4].Animations[2].Frames[0].TranslateY = 0.000;
	SpriteList[4].Animations[2].Frames[0].Delay = 1;
	SpriteList[4].Animations[2].Frames[0].Width = 30;
	SpriteList[4].Animations[2].Frames[0].Height = 30;
	SpriteList[4].Animations[2].Frames[0].Transparency = RGB(240,240,240);
	SpriteList[4].Animations[2].Frames[0].hFlip = false;
	SpriteList[4].Animations[2].Frames[0].vFlip = false;
	SpriteList[4].Animations[2].Frames[0].zRotation = 0;
	SpriteList[4].Animations[2].Frames[0].HotSpot[0].x = 15;
	SpriteList[4].Animations[2].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[4].Animations[2].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[4].Animations[2].Frames[0].centerX = 15;
	SpriteList[4].Animations[2].Frames[0].centerY = 15;
	SpriteList[4].Animations[2].Frames[0].PegRegistered = false;
	SpriteList[4].Animations[2].Frames[0].useTransparency = false;


	SpriteList[4].Animations[3].TotalFrames=1;
	SpriteList[4].Animations[3].ConnectTo = 0;
	SpriteList[4].Animations[3].Frames = new FrameElem[1];

	SpriteList[4].Animations[3].Frames[0].BitmapName = "Door 2.bmp";
	SpriteList[4].Animations[3].Frames[0].TranslateX = 0.000;
	SpriteList[4].Animations[3].Frames[0].TranslateY = 0.000;
	SpriteList[4].Animations[3].Frames[0].Delay = 1;
	SpriteList[4].Animations[3].Frames[0].Width = 30;
	SpriteList[4].Animations[3].Frames[0].Height = 30;
	SpriteList[4].Animations[3].Frames[0].Transparency = RGB(240,240,240);
	SpriteList[4].Animations[3].Frames[0].hFlip = false;
	SpriteList[4].Animations[3].Frames[0].vFlip = false;
	SpriteList[4].Animations[3].Frames[0].zRotation = 0;
	SpriteList[4].Animations[3].Frames[0].HotSpot[0].x = 15;
	SpriteList[4].Animations[3].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[4].Animations[3].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[4].Animations[3].Frames[0].centerX = 15;
	SpriteList[4].Animations[3].Frames[0].centerY = 15;
	SpriteList[4].Animations[3].Frames[0].PegRegistered = false;
	SpriteList[4].Animations[3].Frames[0].useTransparency = false;


	SpriteList[4].Animations[4].TotalFrames=1;
	SpriteList[4].Animations[4].ConnectTo = 0;
	SpriteList[4].Animations[4].Frames = new FrameElem[1];

	SpriteList[4].Animations[4].Frames[0].BitmapName = "Bed 1.bmp";
	SpriteList[4].Animations[4].Frames[0].TranslateX = 0.000;
	SpriteList[4].Animations[4].Frames[0].TranslateY = 0.000;
	SpriteList[4].Animations[4].Frames[0].Delay = 1;
	SpriteList[4].Animations[4].Frames[0].Width = 30;
	SpriteList[4].Animations[4].Frames[0].Height = 30;
	SpriteList[4].Animations[4].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[4].Animations[4].Frames[0].hFlip = false;
	SpriteList[4].Animations[4].Frames[0].vFlip = false;
	SpriteList[4].Animations[4].Frames[0].zRotation = 0;
	SpriteList[4].Animations[4].Frames[0].HotSpot[0].x = 15;
	SpriteList[4].Animations[4].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[4].Animations[4].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[4].Animations[4].Frames[0].centerX = 15;
	SpriteList[4].Animations[4].Frames[0].centerY = 15;
	SpriteList[4].Animations[4].Frames[0].PegRegistered = false;
	SpriteList[4].Animations[4].Frames[0].useTransparency = true;


	SpriteList[4].Animations[5].TotalFrames=1;
	SpriteList[4].Animations[5].ConnectTo = 0;
	SpriteList[4].Animations[5].Frames = new FrameElem[1];

	SpriteList[4].Animations[5].Frames[0].BitmapName = "Bed 2.bmp";
	SpriteList[4].Animations[5].Frames[0].TranslateX = 0.000;
	SpriteList[4].Animations[5].Frames[0].TranslateY = 0.000;
	SpriteList[4].Animations[5].Frames[0].Delay = 1;
	SpriteList[4].Animations[5].Frames[0].Width = 30;
	SpriteList[4].Animations[5].Frames[0].Height = 30;
	SpriteList[4].Animations[5].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[4].Animations[5].Frames[0].hFlip = false;
	SpriteList[4].Animations[5].Frames[0].vFlip = false;
	SpriteList[4].Animations[5].Frames[0].zRotation = 0;
	SpriteList[4].Animations[5].Frames[0].HotSpot[0].x = 15;
	SpriteList[4].Animations[5].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[4].Animations[5].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[4].Animations[5].Frames[0].centerX = 15;
	SpriteList[4].Animations[5].Frames[0].centerY = 15;
	SpriteList[4].Animations[5].Frames[0].PegRegistered = false;
	SpriteList[4].Animations[5].Frames[0].useTransparency = true;


	SpriteList[4].Animations[6].TotalFrames=1;
	SpriteList[4].Animations[6].ConnectTo = 0;
	SpriteList[4].Animations[6].Frames = new FrameElem[1];

	SpriteList[4].Animations[6].Frames[0].BitmapName = "Bed 3.bmp";
	SpriteList[4].Animations[6].Frames[0].TranslateX = 0.000;
	SpriteList[4].Animations[6].Frames[0].TranslateY = 0.000;
	SpriteList[4].Animations[6].Frames[0].Delay = 1;
	SpriteList[4].Animations[6].Frames[0].Width = 30;
	SpriteList[4].Animations[6].Frames[0].Height = 30;
	SpriteList[4].Animations[6].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[4].Animations[6].Frames[0].hFlip = false;
	SpriteList[4].Animations[6].Frames[0].vFlip = false;
	SpriteList[4].Animations[6].Frames[0].zRotation = 0;
	SpriteList[4].Animations[6].Frames[0].HotSpot[0].x = 15;
	SpriteList[4].Animations[6].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[4].Animations[6].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[4].Animations[6].Frames[0].centerX = 15;
	SpriteList[4].Animations[6].Frames[0].centerY = 15;
	SpriteList[4].Animations[6].Frames[0].PegRegistered = false;
	SpriteList[4].Animations[6].Frames[0].useTransparency = true;



	SpriteList[0].TotalAnimations = 8;
	SpriteList[0].Animations = new AnimationElem[8];

	SpriteList[0].Animations[0].TotalFrames=4;
	SpriteList[0].Animations[0].ConnectTo = 0;
	SpriteList[0].Animations[0].Frames = new FrameElem[4];

	SpriteList[0].Animations[0].Frames[0].BitmapName = "SpaceMan Left 1.bmp";
	SpriteList[0].Animations[0].Frames[0].TranslateX = 0.000;
	SpriteList[0].Animations[0].Frames[0].TranslateY = 0.000;
	SpriteList[0].Animations[0].Frames[0].Delay = 7;
	SpriteList[0].Animations[0].Frames[0].Width = 30;
	SpriteList[0].Animations[0].Frames[0].Height = 30;
	SpriteList[0].Animations[0].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[0].Animations[0].Frames[0].hFlip = false;
	SpriteList[0].Animations[0].Frames[0].vFlip = false;
	SpriteList[0].Animations[0].Frames[0].zRotation = 0;
	SpriteList[0].Animations[0].Frames[0].HotSpot[0].x = 15;
	SpriteList[0].Animations[0].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[0].Animations[0].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[0].Animations[0].Frames[0].centerX = 15;
	SpriteList[0].Animations[0].Frames[0].centerY = 15;
	SpriteList[0].Animations[0].Frames[0].PegRegistered = false;
	SpriteList[0].Animations[0].Frames[0].useTransparency = true;

	SpriteList[0].Animations[0].Frames[1].BitmapName = "SpaceMan Left 2.bmp";
	SpriteList[0].Animations[0].Frames[1].TranslateX = 0.000;
	SpriteList[0].Animations[0].Frames[1].TranslateY = 0.000;
	SpriteList[0].Animations[0].Frames[1].Delay = 7;
	SpriteList[0].Animations[0].Frames[1].Width = 30;
	SpriteList[0].Animations[0].Frames[1].Height = 30;
	SpriteList[0].Animations[0].Frames[1].Transparency = RGB(255,255,255);
	SpriteList[0].Animations[0].Frames[1].hFlip = false;
	SpriteList[0].Animations[0].Frames[1].vFlip = false;
	SpriteList[0].Animations[0].Frames[1].zRotation = 0;
	SpriteList[0].Animations[0].Frames[1].HotSpot[0].x = 15;
	SpriteList[0].Animations[0].Frames[1].HotSpot[0].y = 15;
	::SetRect( &SpriteList[0].Animations[0].Frames[1].BBox, 0, 0, 29,29);
	SpriteList[0].Animations[0].Frames[1].centerX = 15;
	SpriteList[0].Animations[0].Frames[1].centerY = 15;
	SpriteList[0].Animations[0].Frames[1].PegRegistered = false;
	SpriteList[0].Animations[0].Frames[1].useTransparency = true;

	SpriteList[0].Animations[0].Frames[2].BitmapName = "SpaceMan Left 3.bmp";
	SpriteList[0].Animations[0].Frames[2].TranslateX = 0.000;
	SpriteList[0].Animations[0].Frames[2].TranslateY = 0.000;
	SpriteList[0].Animations[0].Frames[2].Delay = 7;
	SpriteList[0].Animations[0].Frames[2].Width = 30;
	SpriteList[0].Animations[0].Frames[2].Height = 30;
	SpriteList[0].Animations[0].Frames[2].Transparency = RGB(255,255,255);
	SpriteList[0].Animations[0].Frames[2].hFlip = false;
	SpriteList[0].Animations[0].Frames[2].vFlip = false;
	SpriteList[0].Animations[0].Frames[2].zRotation = 0;
	SpriteList[0].Animations[0].Frames[2].HotSpot[0].x = 15;
	SpriteList[0].Animations[0].Frames[2].HotSpot[0].y = 15;
	::SetRect( &SpriteList[0].Animations[0].Frames[2].BBox, 0, 0, 29,29);
	SpriteList[0].Animations[0].Frames[2].centerX = 15;
	SpriteList[0].Animations[0].Frames[2].centerY = 15;
	SpriteList[0].Animations[0].Frames[2].PegRegistered = false;
	SpriteList[0].Animations[0].Frames[2].useTransparency = true;

	SpriteList[0].Animations[0].Frames[3].BitmapName = "SpaceMan Left 2.bmp";
	SpriteList[0].Animations[0].Frames[3].TranslateX = 0.000;
	SpriteList[0].Animations[0].Frames[3].TranslateY = 0.000;
	SpriteList[0].Animations[0].Frames[3].Delay = 7;
	SpriteList[0].Animations[0].Frames[3].Width = 30;
	SpriteList[0].Animations[0].Frames[3].Height = 30;
	SpriteList[0].Animations[0].Frames[3].Transparency = RGB(255,255,255);
	SpriteList[0].Animations[0].Frames[3].hFlip = false;
	SpriteList[0].Animations[0].Frames[3].vFlip = false;
	SpriteList[0].Animations[0].Frames[3].zRotation = 0;
	SpriteList[0].Animations[0].Frames[3].HotSpot[0].x = 15;
	SpriteList[0].Animations[0].Frames[3].HotSpot[0].y = 15;
	::SetRect( &SpriteList[0].Animations[0].Frames[3].BBox, 0, 0, 29,29);
	SpriteList[0].Animations[0].Frames[3].centerX = 15;
	SpriteList[0].Animations[0].Frames[3].centerY = 15;
	SpriteList[0].Animations[0].Frames[3].PegRegistered = false;
	SpriteList[0].Animations[0].Frames[3].useTransparency = true;


	SpriteList[0].Animations[1].TotalFrames=4;
	SpriteList[0].Animations[1].ConnectTo = 0;
	SpriteList[0].Animations[1].Frames = new FrameElem[4];

	SpriteList[0].Animations[1].Frames[0].BitmapName = "SpaceMan Right 1.bmp";
	SpriteList[0].Animations[1].Frames[0].TranslateX = 0.000;
	SpriteList[0].Animations[1].Frames[0].TranslateY = 0.000;
	SpriteList[0].Animations[1].Frames[0].Delay = 7;
	SpriteList[0].Animations[1].Frames[0].Width = 30;
	SpriteList[0].Animations[1].Frames[0].Height = 30;
	SpriteList[0].Animations[1].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[0].Animations[1].Frames[0].hFlip = false;
	SpriteList[0].Animations[1].Frames[0].vFlip = false;
	SpriteList[0].Animations[1].Frames[0].zRotation = 0;
	SpriteList[0].Animations[1].Frames[0].HotSpot[0].x = 15;
	SpriteList[0].Animations[1].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[0].Animations[1].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[0].Animations[1].Frames[0].centerX = 15;
	SpriteList[0].Animations[1].Frames[0].centerY = 15;
	SpriteList[0].Animations[1].Frames[0].PegRegistered = false;
	SpriteList[0].Animations[1].Frames[0].useTransparency = true;

	SpriteList[0].Animations[1].Frames[1].BitmapName = "SpaceMan Right 2.bmp";
	SpriteList[0].Animations[1].Frames[1].TranslateX = 0.000;
	SpriteList[0].Animations[1].Frames[1].TranslateY = 0.000;
	SpriteList[0].Animations[1].Frames[1].Delay = 7;
	SpriteList[0].Animations[1].Frames[1].Width = 30;
	SpriteList[0].Animations[1].Frames[1].Height = 30;
	SpriteList[0].Animations[1].Frames[1].Transparency = RGB(255,255,255);
	SpriteList[0].Animations[1].Frames[1].hFlip = false;
	SpriteList[0].Animations[1].Frames[1].vFlip = false;
	SpriteList[0].Animations[1].Frames[1].zRotation = 0;
	SpriteList[0].Animations[1].Frames[1].HotSpot[0].x = 15;
	SpriteList[0].Animations[1].Frames[1].HotSpot[0].y = 15;
	::SetRect( &SpriteList[0].Animations[1].Frames[1].BBox, 0, 0, 29,29);
	SpriteList[0].Animations[1].Frames[1].centerX = 15;
	SpriteList[0].Animations[1].Frames[1].centerY = 15;
	SpriteList[0].Animations[1].Frames[1].PegRegistered = false;
	SpriteList[0].Animations[1].Frames[1].useTransparency = true;

	SpriteList[0].Animations[1].Frames[2].BitmapName = "SpaceMan Right 3.bmp";
	SpriteList[0].Animations[1].Frames[2].TranslateX = 0.000;
	SpriteList[0].Animations[1].Frames[2].TranslateY = 0.000;
	SpriteList[0].Animations[1].Frames[2].Delay = 7;
	SpriteList[0].Animations[1].Frames[2].Width = 30;
	SpriteList[0].Animations[1].Frames[2].Height = 30;
	SpriteList[0].Animations[1].Frames[2].Transparency = RGB(255,255,255);
	SpriteList[0].Animations[1].Frames[2].hFlip = false;
	SpriteList[0].Animations[1].Frames[2].vFlip = false;
	SpriteList[0].Animations[1].Frames[2].zRotation = 0;
	SpriteList[0].Animations[1].Frames[2].HotSpot[0].x = 15;
	SpriteList[0].Animations[1].Frames[2].HotSpot[0].y = 15;
	::SetRect( &SpriteList[0].Animations[1].Frames[2].BBox, 0, 0, 29,29);
	SpriteList[0].Animations[1].Frames[2].centerX = 15;
	SpriteList[0].Animations[1].Frames[2].centerY = 15;
	SpriteList[0].Animations[1].Frames[2].PegRegistered = false;
	SpriteList[0].Animations[1].Frames[2].useTransparency = true;

	SpriteList[0].Animations[1].Frames[3].BitmapName = "SpaceMan Right 2.bmp";
	SpriteList[0].Animations[1].Frames[3].TranslateX = 0.000;
	SpriteList[0].Animations[1].Frames[3].TranslateY = 0.000;
	SpriteList[0].Animations[1].Frames[3].Delay = 7;
	SpriteList[0].Animations[1].Frames[3].Width = 30;
	SpriteList[0].Animations[1].Frames[3].Height = 30;
	SpriteList[0].Animations[1].Frames[3].Transparency = RGB(255,255,255);
	SpriteList[0].Animations[1].Frames[3].hFlip = false;
	SpriteList[0].Animations[1].Frames[3].vFlip = false;
	SpriteList[0].Animations[1].Frames[3].zRotation = 0;
	SpriteList[0].Animations[1].Frames[3].HotSpot[0].x = 15;
	SpriteList[0].Animations[1].Frames[3].HotSpot[0].y = 15;
	::SetRect( &SpriteList[0].Animations[1].Frames[3].BBox, 0, 0, 29,29);
	SpriteList[0].Animations[1].Frames[3].centerX = 15;
	SpriteList[0].Animations[1].Frames[3].centerY = 15;
	SpriteList[0].Animations[1].Frames[3].PegRegistered = false;
	SpriteList[0].Animations[1].Frames[3].useTransparency = true;


	SpriteList[0].Animations[2].TotalFrames=4;
	SpriteList[0].Animations[2].ConnectTo = 0;
	SpriteList[0].Animations[2].Frames = new FrameElem[4];

	SpriteList[0].Animations[2].Frames[0].BitmapName = "SpaceMan Back 1.bmp";
	SpriteList[0].Animations[2].Frames[0].TranslateX = 0.000;
	SpriteList[0].Animations[2].Frames[0].TranslateY = 0.000;
	SpriteList[0].Animations[2].Frames[0].Delay = 7;
	SpriteList[0].Animations[2].Frames[0].Width = 30;
	SpriteList[0].Animations[2].Frames[0].Height = 30;
	SpriteList[0].Animations[2].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[0].Animations[2].Frames[0].hFlip = false;
	SpriteList[0].Animations[2].Frames[0].vFlip = false;
	SpriteList[0].Animations[2].Frames[0].zRotation = 0;
	SpriteList[0].Animations[2].Frames[0].HotSpot[0].x = 15;
	SpriteList[0].Animations[2].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[0].Animations[2].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[0].Animations[2].Frames[0].centerX = 15;
	SpriteList[0].Animations[2].Frames[0].centerY = 15;
	SpriteList[0].Animations[2].Frames[0].PegRegistered = false;
	SpriteList[0].Animations[2].Frames[0].useTransparency = true;

	SpriteList[0].Animations[2].Frames[1].BitmapName = "SpaceMan Back 2.bmp";
	SpriteList[0].Animations[2].Frames[1].TranslateX = 0.000;
	SpriteList[0].Animations[2].Frames[1].TranslateY = 0.000;
	SpriteList[0].Animations[2].Frames[1].Delay = 7;
	SpriteList[0].Animations[2].Frames[1].Width = 30;
	SpriteList[0].Animations[2].Frames[1].Height = 30;
	SpriteList[0].Animations[2].Frames[1].Transparency = RGB(255,255,255);
	SpriteList[0].Animations[2].Frames[1].hFlip = false;
	SpriteList[0].Animations[2].Frames[1].vFlip = false;
	SpriteList[0].Animations[2].Frames[1].zRotation = 0;
	SpriteList[0].Animations[2].Frames[1].HotSpot[0].x = 15;
	SpriteList[0].Animations[2].Frames[1].HotSpot[0].y = 15;
	::SetRect( &SpriteList[0].Animations[2].Frames[1].BBox, 0, 0, 29,29);
	SpriteList[0].Animations[2].Frames[1].centerX = 15;
	SpriteList[0].Animations[2].Frames[1].centerY = 15;
	SpriteList[0].Animations[2].Frames[1].PegRegistered = false;
	SpriteList[0].Animations[2].Frames[1].useTransparency = true;

	SpriteList[0].Animations[2].Frames[2].BitmapName = "SpaceMan Back 3.bmp";
	SpriteList[0].Animations[2].Frames[2].TranslateX = 0.000;
	SpriteList[0].Animations[2].Frames[2].TranslateY = 0.000;
	SpriteList[0].Animations[2].Frames[2].Delay = 7;
	SpriteList[0].Animations[2].Frames[2].Width = 30;
	SpriteList[0].Animations[2].Frames[2].Height = 30;
	SpriteList[0].Animations[2].Frames[2].Transparency = RGB(255,255,255);
	SpriteList[0].Animations[2].Frames[2].hFlip = false;
	SpriteList[0].Animations[2].Frames[2].vFlip = false;
	SpriteList[0].Animations[2].Frames[2].zRotation = 0;
	SpriteList[0].Animations[2].Frames[2].HotSpot[0].x = 15;
	SpriteList[0].Animations[2].Frames[2].HotSpot[0].y = 15;
	::SetRect( &SpriteList[0].Animations[2].Frames[2].BBox, 0, 0, 29,29);
	SpriteList[0].Animations[2].Frames[2].centerX = 15;
	SpriteList[0].Animations[2].Frames[2].centerY = 15;
	SpriteList[0].Animations[2].Frames[2].PegRegistered = false;
	SpriteList[0].Animations[2].Frames[2].useTransparency = true;

	SpriteList[0].Animations[2].Frames[3].BitmapName = "SpaceMan Back 2.bmp";
	SpriteList[0].Animations[2].Frames[3].TranslateX = 0.000;
	SpriteList[0].Animations[2].Frames[3].TranslateY = 0.000;
	SpriteList[0].Animations[2].Frames[3].Delay = 7;
	SpriteList[0].Animations[2].Frames[3].Width = 30;
	SpriteList[0].Animations[2].Frames[3].Height = 30;
	SpriteList[0].Animations[2].Frames[3].Transparency = RGB(255,255,255);
	SpriteList[0].Animations[2].Frames[3].hFlip = false;
	SpriteList[0].Animations[2].Frames[3].vFlip = false;
	SpriteList[0].Animations[2].Frames[3].zRotation = 0;
	SpriteList[0].Animations[2].Frames[3].HotSpot[0].x = 15;
	SpriteList[0].Animations[2].Frames[3].HotSpot[0].y = 15;
	::SetRect( &SpriteList[0].Animations[2].Frames[3].BBox, 0, 0, 29,29);
	SpriteList[0].Animations[2].Frames[3].centerX = 15;
	SpriteList[0].Animations[2].Frames[3].centerY = 15;
	SpriteList[0].Animations[2].Frames[3].PegRegistered = false;
	SpriteList[0].Animations[2].Frames[3].useTransparency = true;


	SpriteList[0].Animations[3].TotalFrames=4;
	SpriteList[0].Animations[3].ConnectTo = 0;
	SpriteList[0].Animations[3].Frames = new FrameElem[4];

	SpriteList[0].Animations[3].Frames[0].BitmapName = "SpaceMan 1.bmp";
	SpriteList[0].Animations[3].Frames[0].TranslateX = 0.000;
	SpriteList[0].Animations[3].Frames[0].TranslateY = 0.000;
	SpriteList[0].Animations[3].Frames[0].Delay = 7;
	SpriteList[0].Animations[3].Frames[0].Width = 30;
	SpriteList[0].Animations[3].Frames[0].Height = 30;
	SpriteList[0].Animations[3].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[0].Animations[3].Frames[0].hFlip = false;
	SpriteList[0].Animations[3].Frames[0].vFlip = false;
	SpriteList[0].Animations[3].Frames[0].zRotation = 0;
	SpriteList[0].Animations[3].Frames[0].HotSpot[0].x = 15;
	SpriteList[0].Animations[3].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[0].Animations[3].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[0].Animations[3].Frames[0].centerX = 15;
	SpriteList[0].Animations[3].Frames[0].centerY = 15;
	SpriteList[0].Animations[3].Frames[0].PegRegistered = false;
	SpriteList[0].Animations[3].Frames[0].useTransparency = true;

	SpriteList[0].Animations[3].Frames[1].BitmapName = "SpaceMan 2.bmp";
	SpriteList[0].Animations[3].Frames[1].TranslateX = 0.000;
	SpriteList[0].Animations[3].Frames[1].TranslateY = 0.000;
	SpriteList[0].Animations[3].Frames[1].Delay = 7;
	SpriteList[0].Animations[3].Frames[1].Width = 30;
	SpriteList[0].Animations[3].Frames[1].Height = 30;
	SpriteList[0].Animations[3].Frames[1].Transparency = RGB(255,255,255);
	SpriteList[0].Animations[3].Frames[1].hFlip = false;
	SpriteList[0].Animations[3].Frames[1].vFlip = false;
	SpriteList[0].Animations[3].Frames[1].zRotation = 0;
	SpriteList[0].Animations[3].Frames[1].HotSpot[0].x = 15;
	SpriteList[0].Animations[3].Frames[1].HotSpot[0].y = 15;
	::SetRect( &SpriteList[0].Animations[3].Frames[1].BBox, 0, 0, 29,29);
	SpriteList[0].Animations[3].Frames[1].centerX = 15;
	SpriteList[0].Animations[3].Frames[1].centerY = 15;
	SpriteList[0].Animations[3].Frames[1].PegRegistered = false;
	SpriteList[0].Animations[3].Frames[1].useTransparency = true;

	SpriteList[0].Animations[3].Frames[2].BitmapName = "SpaceMan 3.bmp";
	SpriteList[0].Animations[3].Frames[2].TranslateX = 0.000;
	SpriteList[0].Animations[3].Frames[2].TranslateY = 0.000;
	SpriteList[0].Animations[3].Frames[2].Delay = 7;
	SpriteList[0].Animations[3].Frames[2].Width = 30;
	SpriteList[0].Animations[3].Frames[2].Height = 30;
	SpriteList[0].Animations[3].Frames[2].Transparency = RGB(255,255,255);
	SpriteList[0].Animations[3].Frames[2].hFlip = false;
	SpriteList[0].Animations[3].Frames[2].vFlip = false;
	SpriteList[0].Animations[3].Frames[2].zRotation = 0;
	SpriteList[0].Animations[3].Frames[2].HotSpot[0].x = 15;
	SpriteList[0].Animations[3].Frames[2].HotSpot[0].y = 15;
	::SetRect( &SpriteList[0].Animations[3].Frames[2].BBox, 0, 0, 29,29);
	SpriteList[0].Animations[3].Frames[2].centerX = 15;
	SpriteList[0].Animations[3].Frames[2].centerY = 15;
	SpriteList[0].Animations[3].Frames[2].PegRegistered = false;
	SpriteList[0].Animations[3].Frames[2].useTransparency = true;

	SpriteList[0].Animations[3].Frames[3].BitmapName = "SpaceMan 2.bmp";
	SpriteList[0].Animations[3].Frames[3].TranslateX = 0.000;
	SpriteList[0].Animations[3].Frames[3].TranslateY = 0.000;
	SpriteList[0].Animations[3].Frames[3].Delay = 7;
	SpriteList[0].Animations[3].Frames[3].Width = 30;
	SpriteList[0].Animations[3].Frames[3].Height = 30;
	SpriteList[0].Animations[3].Frames[3].Transparency = RGB(255,255,255);
	SpriteList[0].Animations[3].Frames[3].hFlip = false;
	SpriteList[0].Animations[3].Frames[3].vFlip = false;
	SpriteList[0].Animations[3].Frames[3].zRotation = 0;
	SpriteList[0].Animations[3].Frames[3].HotSpot[0].x = 15;
	SpriteList[0].Animations[3].Frames[3].HotSpot[0].y = 15;
	::SetRect( &SpriteList[0].Animations[3].Frames[3].BBox, 0, 0, 29,29);
	SpriteList[0].Animations[3].Frames[3].centerX = 15;
	SpriteList[0].Animations[3].Frames[3].centerY = 15;
	SpriteList[0].Animations[3].Frames[3].PegRegistered = false;
	SpriteList[0].Animations[3].Frames[3].useTransparency = true;


	SpriteList[0].Animations[4].TotalFrames=2;
	SpriteList[0].Animations[4].ConnectTo = 0;
	SpriteList[0].Animations[4].Frames = new FrameElem[2];

	SpriteList[0].Animations[4].Frames[0].BitmapName = "SpaceMan 2.bmp";
	SpriteList[0].Animations[4].Frames[0].TranslateX = 0.000;
	SpriteList[0].Animations[4].Frames[0].TranslateY = 0.000;
	SpriteList[0].Animations[4].Frames[0].Delay = 20;
	SpriteList[0].Animations[4].Frames[0].Width = 30;
	SpriteList[0].Animations[4].Frames[0].Height = 30;
	SpriteList[0].Animations[4].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[0].Animations[4].Frames[0].hFlip = false;
	SpriteList[0].Animations[4].Frames[0].vFlip = false;
	SpriteList[0].Animations[4].Frames[0].zRotation = 0;
	SpriteList[0].Animations[4].Frames[0].HotSpot[0].x = 15;
	SpriteList[0].Animations[4].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[0].Animations[4].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[0].Animations[4].Frames[0].centerX = 15;
	SpriteList[0].Animations[4].Frames[0].centerY = 15;
	SpriteList[0].Animations[4].Frames[0].PegRegistered = false;
	SpriteList[0].Animations[4].Frames[0].useTransparency = true;

	SpriteList[0].Animations[4].Frames[1].BitmapName = "SpaceMan 4.bmp";
	SpriteList[0].Animations[4].Frames[1].TranslateX = 0.000;
	SpriteList[0].Animations[4].Frames[1].TranslateY = 0.000;
	SpriteList[0].Animations[4].Frames[1].Delay = 20;
	SpriteList[0].Animations[4].Frames[1].Width = 30;
	SpriteList[0].Animations[4].Frames[1].Height = 30;
	SpriteList[0].Animations[4].Frames[1].Transparency = RGB(255,255,255);
	SpriteList[0].Animations[4].Frames[1].hFlip = false;
	SpriteList[0].Animations[4].Frames[1].vFlip = false;
	SpriteList[0].Animations[4].Frames[1].zRotation = 0;
	SpriteList[0].Animations[4].Frames[1].HotSpot[0].x = 15;
	SpriteList[0].Animations[4].Frames[1].HotSpot[0].y = 15;
	::SetRect( &SpriteList[0].Animations[4].Frames[1].BBox, 0, 0, 29,29);
	SpriteList[0].Animations[4].Frames[1].centerX = 15;
	SpriteList[0].Animations[4].Frames[1].centerY = 15;
	SpriteList[0].Animations[4].Frames[1].PegRegistered = false;
	SpriteList[0].Animations[4].Frames[1].useTransparency = true;


	SpriteList[0].Animations[5].TotalFrames=2;
	SpriteList[0].Animations[5].ConnectTo = 0;
	SpriteList[0].Animations[5].Frames = new FrameElem[2];

	SpriteList[0].Animations[5].Frames[0].BitmapName = "SpaceMan Back 2.bmp";
	SpriteList[0].Animations[5].Frames[0].TranslateX = 0.000;
	SpriteList[0].Animations[5].Frames[0].TranslateY = 0.000;
	SpriteList[0].Animations[5].Frames[0].Delay = 30;
	SpriteList[0].Animations[5].Frames[0].Width = 30;
	SpriteList[0].Animations[5].Frames[0].Height = 30;
	SpriteList[0].Animations[5].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[0].Animations[5].Frames[0].hFlip = false;
	SpriteList[0].Animations[5].Frames[0].vFlip = false;
	SpriteList[0].Animations[5].Frames[0].zRotation = 0;
	SpriteList[0].Animations[5].Frames[0].HotSpot[0].x = 15;
	SpriteList[0].Animations[5].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[0].Animations[5].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[0].Animations[5].Frames[0].centerX = 15;
	SpriteList[0].Animations[5].Frames[0].centerY = 15;
	SpriteList[0].Animations[5].Frames[0].PegRegistered = false;
	SpriteList[0].Animations[5].Frames[0].useTransparency = true;

	SpriteList[0].Animations[5].Frames[1].BitmapName = "SpaceMan Back 4.bmp";
	SpriteList[0].Animations[5].Frames[1].TranslateX = 0.000;
	SpriteList[0].Animations[5].Frames[1].TranslateY = 0.000;
	SpriteList[0].Animations[5].Frames[1].Delay = 30;
	SpriteList[0].Animations[5].Frames[1].Width = 30;
	SpriteList[0].Animations[5].Frames[1].Height = 30;
	SpriteList[0].Animations[5].Frames[1].Transparency = RGB(255,255,255);
	SpriteList[0].Animations[5].Frames[1].hFlip = false;
	SpriteList[0].Animations[5].Frames[1].vFlip = false;
	SpriteList[0].Animations[5].Frames[1].zRotation = 0;
	SpriteList[0].Animations[5].Frames[1].HotSpot[0].x = 15;
	SpriteList[0].Animations[5].Frames[1].HotSpot[0].y = 15;
	::SetRect( &SpriteList[0].Animations[5].Frames[1].BBox, 0, 0, 29,29);
	SpriteList[0].Animations[5].Frames[1].centerX = 15;
	SpriteList[0].Animations[5].Frames[1].centerY = 15;
	SpriteList[0].Animations[5].Frames[1].PegRegistered = false;
	SpriteList[0].Animations[5].Frames[1].useTransparency = true;


	SpriteList[0].Animations[6].TotalFrames=2;
	SpriteList[0].Animations[6].ConnectTo = 0;
	SpriteList[0].Animations[6].Frames = new FrameElem[2];

	SpriteList[0].Animations[6].Frames[0].BitmapName = "SpaceMan Right 2.bmp";
	SpriteList[0].Animations[6].Frames[0].TranslateX = 0.000;
	SpriteList[0].Animations[6].Frames[0].TranslateY = 0.000;
	SpriteList[0].Animations[6].Frames[0].Delay = 20;
	SpriteList[0].Animations[6].Frames[0].Width = 30;
	SpriteList[0].Animations[6].Frames[0].Height = 30;
	SpriteList[0].Animations[6].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[0].Animations[6].Frames[0].hFlip = false;
	SpriteList[0].Animations[6].Frames[0].vFlip = false;
	SpriteList[0].Animations[6].Frames[0].zRotation = 0;
	SpriteList[0].Animations[6].Frames[0].HotSpot[0].x = 15;
	SpriteList[0].Animations[6].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[0].Animations[6].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[0].Animations[6].Frames[0].centerX = 15;
	SpriteList[0].Animations[6].Frames[0].centerY = 15;
	SpriteList[0].Animations[6].Frames[0].PegRegistered = false;
	SpriteList[0].Animations[6].Frames[0].useTransparency = true;

	SpriteList[0].Animations[6].Frames[1].BitmapName = "SpaceMan Right 4.bmp";
	SpriteList[0].Animations[6].Frames[1].TranslateX = 0.000;
	SpriteList[0].Animations[6].Frames[1].TranslateY = 0.000;
	SpriteList[0].Animations[6].Frames[1].Delay = 20;
	SpriteList[0].Animations[6].Frames[1].Width = 30;
	SpriteList[0].Animations[6].Frames[1].Height = 30;
	SpriteList[0].Animations[6].Frames[1].Transparency = RGB(255,255,255);
	SpriteList[0].Animations[6].Frames[1].hFlip = false;
	SpriteList[0].Animations[6].Frames[1].vFlip = false;
	SpriteList[0].Animations[6].Frames[1].zRotation = 0;
	SpriteList[0].Animations[6].Frames[1].HotSpot[0].x = 15;
	SpriteList[0].Animations[6].Frames[1].HotSpot[0].y = 15;
	::SetRect( &SpriteList[0].Animations[6].Frames[1].BBox, 0, 0, 29,29);
	SpriteList[0].Animations[6].Frames[1].centerX = 15;
	SpriteList[0].Animations[6].Frames[1].centerY = 15;
	SpriteList[0].Animations[6].Frames[1].PegRegistered = false;
	SpriteList[0].Animations[6].Frames[1].useTransparency = true;


	SpriteList[0].Animations[7].TotalFrames=2;
	SpriteList[0].Animations[7].ConnectTo = 0;
	SpriteList[0].Animations[7].Frames = new FrameElem[2];

	SpriteList[0].Animations[7].Frames[0].BitmapName = "SpaceMan Left 2.bmp";
	SpriteList[0].Animations[7].Frames[0].TranslateX = 0.000;
	SpriteList[0].Animations[7].Frames[0].TranslateY = 0.000;
	SpriteList[0].Animations[7].Frames[0].Delay = 20;
	SpriteList[0].Animations[7].Frames[0].Width = 30;
	SpriteList[0].Animations[7].Frames[0].Height = 30;
	SpriteList[0].Animations[7].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[0].Animations[7].Frames[0].hFlip = false;
	SpriteList[0].Animations[7].Frames[0].vFlip = false;
	SpriteList[0].Animations[7].Frames[0].zRotation = 0;
	SpriteList[0].Animations[7].Frames[0].HotSpot[0].x = 15;
	SpriteList[0].Animations[7].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[0].Animations[7].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[0].Animations[7].Frames[0].centerX = 15;
	SpriteList[0].Animations[7].Frames[0].centerY = 15;
	SpriteList[0].Animations[7].Frames[0].PegRegistered = false;
	SpriteList[0].Animations[7].Frames[0].useTransparency = true;

	SpriteList[0].Animations[7].Frames[1].BitmapName = "SpaceMan Left 4.bmp";
	SpriteList[0].Animations[7].Frames[1].TranslateX = 0.000;
	SpriteList[0].Animations[7].Frames[1].TranslateY = 0.000;
	SpriteList[0].Animations[7].Frames[1].Delay = 20;
	SpriteList[0].Animations[7].Frames[1].Width = 30;
	SpriteList[0].Animations[7].Frames[1].Height = 30;
	SpriteList[0].Animations[7].Frames[1].Transparency = RGB(255,255,255);
	SpriteList[0].Animations[7].Frames[1].hFlip = false;
	SpriteList[0].Animations[7].Frames[1].vFlip = false;
	SpriteList[0].Animations[7].Frames[1].zRotation = 0;
	SpriteList[0].Animations[7].Frames[1].HotSpot[0].x = 15;
	SpriteList[0].Animations[7].Frames[1].HotSpot[0].y = 15;
	::SetRect( &SpriteList[0].Animations[7].Frames[1].BBox, 0, 0, 29,29);
	SpriteList[0].Animations[7].Frames[1].centerX = 15;
	SpriteList[0].Animations[7].Frames[1].centerY = 15;
	SpriteList[0].Animations[7].Frames[1].PegRegistered = false;
	SpriteList[0].Animations[7].Frames[1].useTransparency = true;



	SpriteList[5].TotalAnimations = 1;
	SpriteList[5].Animations = new AnimationElem[1];

	SpriteList[5].Animations[0].TotalFrames=1;
	SpriteList[5].Animations[0].ConnectTo = 0;
	SpriteList[5].Animations[0].Frames = new FrameElem[1];

	SpriteList[5].Animations[0].Frames[0].BitmapName = "Memory Chip.bmp";
	SpriteList[5].Animations[0].Frames[0].TranslateX = 0.000;
	SpriteList[5].Animations[0].Frames[0].TranslateY = 0.000;
	SpriteList[5].Animations[0].Frames[0].Delay = 1;
	SpriteList[5].Animations[0].Frames[0].Width = 30;
	SpriteList[5].Animations[0].Frames[0].Height = 30;
	SpriteList[5].Animations[0].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[5].Animations[0].Frames[0].hFlip = false;
	SpriteList[5].Animations[0].Frames[0].vFlip = false;
	SpriteList[5].Animations[0].Frames[0].zRotation = 0;
	SpriteList[5].Animations[0].Frames[0].HotSpot[0].x = 15;
	SpriteList[5].Animations[0].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[5].Animations[0].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[5].Animations[0].Frames[0].centerX = 15;
	SpriteList[5].Animations[0].Frames[0].centerY = 15;
	SpriteList[5].Animations[0].Frames[0].PegRegistered = false;
	SpriteList[5].Animations[0].Frames[0].useTransparency = true;



	SpriteList[6].TotalAnimations = 3;
	SpriteList[6].Animations = new AnimationElem[3];

	SpriteList[6].Animations[0].TotalFrames=1;
	SpriteList[6].Animations[0].ConnectTo = 0;
	SpriteList[6].Animations[0].Frames = new FrameElem[1];

	SpriteList[6].Animations[0].Frames[0].BitmapName = "Survivor Vision.bmp";
	SpriteList[6].Animations[0].Frames[0].TranslateX = 0.000;
	SpriteList[6].Animations[0].Frames[0].TranslateY = 0.000;
	SpriteList[6].Animations[0].Frames[0].Delay = 1;
	SpriteList[6].Animations[0].Frames[0].Width = 1553;
	SpriteList[6].Animations[0].Frames[0].Height = 1234;
	SpriteList[6].Animations[0].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[6].Animations[0].Frames[0].hFlip = false;
	SpriteList[6].Animations[0].Frames[0].vFlip = false;
	SpriteList[6].Animations[0].Frames[0].zRotation = 0;
	SpriteList[6].Animations[0].Frames[0].HotSpot[0].x = 776;
	SpriteList[6].Animations[0].Frames[0].HotSpot[0].y = 617;
	::SetRect( &SpriteList[6].Animations[0].Frames[0].BBox, 0, 0, 1552,1233);
	SpriteList[6].Animations[0].Frames[0].centerX = 776;
	SpriteList[6].Animations[0].Frames[0].centerY = 617;
	SpriteList[6].Animations[0].Frames[0].PegRegistered = false;
	SpriteList[6].Animations[0].Frames[0].useTransparency = true;


	SpriteList[6].Animations[1].TotalFrames=1;
	SpriteList[6].Animations[1].ConnectTo = 0;
	SpriteList[6].Animations[1].Frames = new FrameElem[1];

	SpriteList[6].Animations[1].Frames[0].BitmapName = "Moderate Vision.bmp";
	SpriteList[6].Animations[1].Frames[0].TranslateX = 0.000;
	SpriteList[6].Animations[1].Frames[0].TranslateY = 0.000;
	SpriteList[6].Animations[1].Frames[0].Delay = 1;
	SpriteList[6].Animations[1].Frames[0].Width = 1553;
	SpriteList[6].Animations[1].Frames[0].Height = 1234;
	SpriteList[6].Animations[1].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[6].Animations[1].Frames[0].hFlip = false;
	SpriteList[6].Animations[1].Frames[0].vFlip = false;
	SpriteList[6].Animations[1].Frames[0].zRotation = 0;
	SpriteList[6].Animations[1].Frames[0].HotSpot[0].x = 776;
	SpriteList[6].Animations[1].Frames[0].HotSpot[0].y = 617;
	::SetRect( &SpriteList[6].Animations[1].Frames[0].BBox, 0, 0, 1552,1233);
	SpriteList[6].Animations[1].Frames[0].centerX = 776;
	SpriteList[6].Animations[1].Frames[0].centerY = 617;
	SpriteList[6].Animations[1].Frames[0].PegRegistered = false;
	SpriteList[6].Animations[1].Frames[0].useTransparency = true;


	SpriteList[6].Animations[2].TotalFrames=1;
	SpriteList[6].Animations[2].ConnectTo = 0;
	SpriteList[6].Animations[2].Frames = new FrameElem[1];

	SpriteList[6].Animations[2].Frames[0].BitmapName = "Amateur Vision.bmp";
	SpriteList[6].Animations[2].Frames[0].TranslateX = 0.000;
	SpriteList[6].Animations[2].Frames[0].TranslateY = 0.000;
	SpriteList[6].Animations[2].Frames[0].Delay = 1;
	SpriteList[6].Animations[2].Frames[0].Width = 1553;
	SpriteList[6].Animations[2].Frames[0].Height = 1234;
	SpriteList[6].Animations[2].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[6].Animations[2].Frames[0].hFlip = false;
	SpriteList[6].Animations[2].Frames[0].vFlip = false;
	SpriteList[6].Animations[2].Frames[0].zRotation = 0;
	SpriteList[6].Animations[2].Frames[0].HotSpot[0].x = 776;
	SpriteList[6].Animations[2].Frames[0].HotSpot[0].y = 617;
	::SetRect( &SpriteList[6].Animations[2].Frames[0].BBox, 0, 0, 1552,1233);
	SpriteList[6].Animations[2].Frames[0].centerX = 776;
	SpriteList[6].Animations[2].Frames[0].centerY = 617;
	SpriteList[6].Animations[2].Frames[0].PegRegistered = false;
	SpriteList[6].Animations[2].Frames[0].useTransparency = true;



	SpriteList[9].TotalAnimations = 3;
	SpriteList[9].Animations = new AnimationElem[3];

	SpriteList[9].Animations[0].TotalFrames=1;
	SpriteList[9].Animations[0].ConnectTo = 0;
	SpriteList[9].Animations[0].Frames = new FrameElem[1];

	SpriteList[9].Animations[0].Frames[0].BitmapName = "Button.bmp";
	SpriteList[9].Animations[0].Frames[0].TranslateX = 0.000;
	SpriteList[9].Animations[0].Frames[0].TranslateY = 0.000;
	SpriteList[9].Animations[0].Frames[0].Delay = 1;
	SpriteList[9].Animations[0].Frames[0].Width = 300;
	SpriteList[9].Animations[0].Frames[0].Height = 60;
	SpriteList[9].Animations[0].Frames[0].Transparency = RGB(0,0,0);
	SpriteList[9].Animations[0].Frames[0].hFlip = false;
	SpriteList[9].Animations[0].Frames[0].vFlip = false;
	SpriteList[9].Animations[0].Frames[0].zRotation = 0;
	SpriteList[9].Animations[0].Frames[0].HotSpot[0].x = 50;
	SpriteList[9].Animations[0].Frames[0].HotSpot[0].y = 25;
	::SetRect( &SpriteList[9].Animations[0].Frames[0].BBox, 0, 0, 299,59);
	SpriteList[9].Animations[0].Frames[0].centerX = 50;
	SpriteList[9].Animations[0].Frames[0].centerY = 25;
	SpriteList[9].Animations[0].Frames[0].PegRegistered = false;
	SpriteList[9].Animations[0].Frames[0].useTransparency = true;
	SpriteList[9].Animations[0].Frames[0].AddCollisionData(CollisionSegment(298,1,1,1,0,0));
	SpriteList[9].Animations[0].Frames[0].AddCollisionData(CollisionSegment(298,58,298,1,0,0));
	SpriteList[9].Animations[0].Frames[0].AddCollisionData(CollisionSegment(1,58,298,58,0,0));
	SpriteList[9].Animations[0].Frames[0].AddCollisionData(CollisionSegment(1,1,1,58,0,0));


	SpriteList[9].Animations[1].TotalFrames=1;
	SpriteList[9].Animations[1].ConnectTo = 0;
	SpriteList[9].Animations[1].Frames = new FrameElem[1];

	SpriteList[9].Animations[1].Frames[0].BitmapName = "Life Bar.bmp";
	SpriteList[9].Animations[1].Frames[0].TranslateX = 0.000;
	SpriteList[9].Animations[1].Frames[0].TranslateY = 0.000;
	SpriteList[9].Animations[1].Frames[0].Delay = 1;
	SpriteList[9].Animations[1].Frames[0].Width = 80;
	SpriteList[9].Animations[1].Frames[0].Height = 100;
	SpriteList[9].Animations[1].Frames[0].Transparency = RGB(240,240,240);
	SpriteList[9].Animations[1].Frames[0].hFlip = false;
	SpriteList[9].Animations[1].Frames[0].vFlip = false;
	SpriteList[9].Animations[1].Frames[0].zRotation = 0;
	SpriteList[9].Animations[1].Frames[0].HotSpot[0].x = 40;
	SpriteList[9].Animations[1].Frames[0].HotSpot[0].y = 50;
	::SetRect( &SpriteList[9].Animations[1].Frames[0].BBox, 0, 0, 79,99);
	SpriteList[9].Animations[1].Frames[0].centerX = 40;
	SpriteList[9].Animations[1].Frames[0].centerY = 50;
	SpriteList[9].Animations[1].Frames[0].PegRegistered = false;
	SpriteList[9].Animations[1].Frames[0].useTransparency = false;


	SpriteList[9].Animations[2].TotalFrames=1;
	SpriteList[9].Animations[2].ConnectTo = 0;
	SpriteList[9].Animations[2].Frames = new FrameElem[1];

	SpriteList[9].Animations[2].Frames[0].BitmapName = "Lives.bmp";
	SpriteList[9].Animations[2].Frames[0].TranslateX = 0.000;
	SpriteList[9].Animations[2].Frames[0].TranslateY = 0.000;
	SpriteList[9].Animations[2].Frames[0].Delay = 1;
	SpriteList[9].Animations[2].Frames[0].Width = 80;
	SpriteList[9].Animations[2].Frames[0].Height = 600;
	SpriteList[9].Animations[2].Frames[0].Transparency = RGB(240,240,240);
	SpriteList[9].Animations[2].Frames[0].hFlip = false;
	SpriteList[9].Animations[2].Frames[0].vFlip = false;
	SpriteList[9].Animations[2].Frames[0].zRotation = 0;
	SpriteList[9].Animations[2].Frames[0].HotSpot[0].x = 40;
	SpriteList[9].Animations[2].Frames[0].HotSpot[0].y = 300;
	::SetRect( &SpriteList[9].Animations[2].Frames[0].BBox, 0, 0, 79,599);
	SpriteList[9].Animations[2].Frames[0].centerX = 40;
	SpriteList[9].Animations[2].Frames[0].centerY = 300;
	SpriteList[9].Animations[2].Frames[0].PegRegistered = false;
	SpriteList[9].Animations[2].Frames[0].useTransparency = false;



	SpriteList[7].TotalAnimations = 1;
	SpriteList[7].Animations = new AnimationElem[1];

	SpriteList[7].Animations[0].TotalFrames=6;
	SpriteList[7].Animations[0].ConnectTo = 0;
	SpriteList[7].Animations[0].Frames = new FrameElem[6];

	SpriteList[7].Animations[0].Frames[0].BitmapName = "Restart 1.bmp";
	SpriteList[7].Animations[0].Frames[0].TranslateX = 0.000;
	SpriteList[7].Animations[0].Frames[0].TranslateY = 0.000;
	SpriteList[7].Animations[0].Frames[0].Delay = 1;
	SpriteList[7].Animations[0].Frames[0].Width = 800;
	SpriteList[7].Animations[0].Frames[0].Height = 600;
	SpriteList[7].Animations[0].Frames[0].Transparency = RGB(240,240,240);
	SpriteList[7].Animations[0].Frames[0].hFlip = false;
	SpriteList[7].Animations[0].Frames[0].vFlip = false;
	SpriteList[7].Animations[0].Frames[0].zRotation = 0;
	SpriteList[7].Animations[0].Frames[0].HotSpot[0].x = 400;
	SpriteList[7].Animations[0].Frames[0].HotSpot[0].y = 300;
	::SetRect( &SpriteList[7].Animations[0].Frames[0].BBox, 0, 0, 799,599);
	SpriteList[7].Animations[0].Frames[0].centerX = 400;
	SpriteList[7].Animations[0].Frames[0].centerY = 300;
	SpriteList[7].Animations[0].Frames[0].PegRegistered = false;
	SpriteList[7].Animations[0].Frames[0].useTransparency = false;

	SpriteList[7].Animations[0].Frames[1].BitmapName = "Restart 2.bmp";
	SpriteList[7].Animations[0].Frames[1].TranslateX = 0.000;
	SpriteList[7].Animations[0].Frames[1].TranslateY = 0.000;
	SpriteList[7].Animations[0].Frames[1].Delay = 1;
	SpriteList[7].Animations[0].Frames[1].Width = 800;
	SpriteList[7].Animations[0].Frames[1].Height = 600;
	SpriteList[7].Animations[0].Frames[1].Transparency = RGB(240,240,240);
	SpriteList[7].Animations[0].Frames[1].hFlip = false;
	SpriteList[7].Animations[0].Frames[1].vFlip = false;
	SpriteList[7].Animations[0].Frames[1].zRotation = 0;
	SpriteList[7].Animations[0].Frames[1].HotSpot[0].x = 400;
	SpriteList[7].Animations[0].Frames[1].HotSpot[0].y = 300;
	::SetRect( &SpriteList[7].Animations[0].Frames[1].BBox, 0, 0, 799,599);
	SpriteList[7].Animations[0].Frames[1].centerX = 400;
	SpriteList[7].Animations[0].Frames[1].centerY = 300;
	SpriteList[7].Animations[0].Frames[1].PegRegistered = false;
	SpriteList[7].Animations[0].Frames[1].useTransparency = false;

	SpriteList[7].Animations[0].Frames[2].BitmapName = "Restart 3.bmp";
	SpriteList[7].Animations[0].Frames[2].TranslateX = 0.000;
	SpriteList[7].Animations[0].Frames[2].TranslateY = 0.000;
	SpriteList[7].Animations[0].Frames[2].Delay = 1;
	SpriteList[7].Animations[0].Frames[2].Width = 800;
	SpriteList[7].Animations[0].Frames[2].Height = 600;
	SpriteList[7].Animations[0].Frames[2].Transparency = RGB(240,240,240);
	SpriteList[7].Animations[0].Frames[2].hFlip = false;
	SpriteList[7].Animations[0].Frames[2].vFlip = false;
	SpriteList[7].Animations[0].Frames[2].zRotation = 0;
	SpriteList[7].Animations[0].Frames[2].HotSpot[0].x = 400;
	SpriteList[7].Animations[0].Frames[2].HotSpot[0].y = 300;
	::SetRect( &SpriteList[7].Animations[0].Frames[2].BBox, 0, 0, 799,599);
	SpriteList[7].Animations[0].Frames[2].centerX = 400;
	SpriteList[7].Animations[0].Frames[2].centerY = 300;
	SpriteList[7].Animations[0].Frames[2].PegRegistered = false;
	SpriteList[7].Animations[0].Frames[2].useTransparency = false;

	SpriteList[7].Animations[0].Frames[3].BitmapName = "Restart 2.bmp";
	SpriteList[7].Animations[0].Frames[3].TranslateX = 0.000;
	SpriteList[7].Animations[0].Frames[3].TranslateY = 0.000;
	SpriteList[7].Animations[0].Frames[3].Delay = 1;
	SpriteList[7].Animations[0].Frames[3].Width = 800;
	SpriteList[7].Animations[0].Frames[3].Height = 600;
	SpriteList[7].Animations[0].Frames[3].Transparency = RGB(240,240,240);
	SpriteList[7].Animations[0].Frames[3].hFlip = false;
	SpriteList[7].Animations[0].Frames[3].vFlip = false;
	SpriteList[7].Animations[0].Frames[3].zRotation = 0;
	SpriteList[7].Animations[0].Frames[3].HotSpot[0].x = 400;
	SpriteList[7].Animations[0].Frames[3].HotSpot[0].y = 300;
	::SetRect( &SpriteList[7].Animations[0].Frames[3].BBox, 0, 0, 799,599);
	SpriteList[7].Animations[0].Frames[3].centerX = 400;
	SpriteList[7].Animations[0].Frames[3].centerY = 300;
	SpriteList[7].Animations[0].Frames[3].PegRegistered = false;
	SpriteList[7].Animations[0].Frames[3].useTransparency = false;

	SpriteList[7].Animations[0].Frames[4].BitmapName = "Restart 1.bmp";
	SpriteList[7].Animations[0].Frames[4].TranslateX = 0.000;
	SpriteList[7].Animations[0].Frames[4].TranslateY = 0.000;
	SpriteList[7].Animations[0].Frames[4].Delay = 1;
	SpriteList[7].Animations[0].Frames[4].Width = 800;
	SpriteList[7].Animations[0].Frames[4].Height = 600;
	SpriteList[7].Animations[0].Frames[4].Transparency = RGB(240,240,240);
	SpriteList[7].Animations[0].Frames[4].hFlip = false;
	SpriteList[7].Animations[0].Frames[4].vFlip = false;
	SpriteList[7].Animations[0].Frames[4].zRotation = 0;
	SpriteList[7].Animations[0].Frames[4].HotSpot[0].x = 400;
	SpriteList[7].Animations[0].Frames[4].HotSpot[0].y = 300;
	::SetRect( &SpriteList[7].Animations[0].Frames[4].BBox, 0, 0, 799,599);
	SpriteList[7].Animations[0].Frames[4].centerX = 400;
	SpriteList[7].Animations[0].Frames[4].centerY = 300;
	SpriteList[7].Animations[0].Frames[4].PegRegistered = false;
	SpriteList[7].Animations[0].Frames[4].useTransparency = false;

	SpriteList[7].Animations[0].Frames[5].BitmapName = "Restart 3.bmp";
	SpriteList[7].Animations[0].Frames[5].TranslateX = 0.000;
	SpriteList[7].Animations[0].Frames[5].TranslateY = 0.000;
	SpriteList[7].Animations[0].Frames[5].Delay = 1;
	SpriteList[7].Animations[0].Frames[5].Width = 800;
	SpriteList[7].Animations[0].Frames[5].Height = 600;
	SpriteList[7].Animations[0].Frames[5].Transparency = RGB(240,240,240);
	SpriteList[7].Animations[0].Frames[5].hFlip = false;
	SpriteList[7].Animations[0].Frames[5].vFlip = false;
	SpriteList[7].Animations[0].Frames[5].zRotation = 0;
	SpriteList[7].Animations[0].Frames[5].HotSpot[0].x = 400;
	SpriteList[7].Animations[0].Frames[5].HotSpot[0].y = 300;
	::SetRect( &SpriteList[7].Animations[0].Frames[5].BBox, 0, 0, 799,599);
	SpriteList[7].Animations[0].Frames[5].centerX = 400;
	SpriteList[7].Animations[0].Frames[5].centerY = 300;
	SpriteList[7].Animations[0].Frames[5].PegRegistered = false;
	SpriteList[7].Animations[0].Frames[5].useTransparency = false;



	SpriteList[2].TotalAnimations = 8;
	SpriteList[2].Animations = new AnimationElem[8];

	SpriteList[2].Animations[0].TotalFrames=4;
	SpriteList[2].Animations[0].ConnectTo = 0;
	SpriteList[2].Animations[0].Frames = new FrameElem[4];

	SpriteList[2].Animations[0].Frames[0].BitmapName = "Green Alien 1.bmp";
	SpriteList[2].Animations[0].Frames[0].TranslateX = 0.000;
	SpriteList[2].Animations[0].Frames[0].TranslateY = 0.000;
	SpriteList[2].Animations[0].Frames[0].Delay = 10;
	SpriteList[2].Animations[0].Frames[0].Width = 30;
	SpriteList[2].Animations[0].Frames[0].Height = 30;
	SpriteList[2].Animations[0].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[2].Animations[0].Frames[0].hFlip = false;
	SpriteList[2].Animations[0].Frames[0].vFlip = false;
	SpriteList[2].Animations[0].Frames[0].zRotation = 0;
	SpriteList[2].Animations[0].Frames[0].HotSpot[0].x = 15;
	SpriteList[2].Animations[0].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[2].Animations[0].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[2].Animations[0].Frames[0].centerX = 15;
	SpriteList[2].Animations[0].Frames[0].centerY = 15;
	SpriteList[2].Animations[0].Frames[0].PegRegistered = false;
	SpriteList[2].Animations[0].Frames[0].useTransparency = true;

	SpriteList[2].Animations[0].Frames[1].BitmapName = "Green Alien 2.bmp";
	SpriteList[2].Animations[0].Frames[1].TranslateX = 0.000;
	SpriteList[2].Animations[0].Frames[1].TranslateY = 0.000;
	SpriteList[2].Animations[0].Frames[1].Delay = 10;
	SpriteList[2].Animations[0].Frames[1].Width = 30;
	SpriteList[2].Animations[0].Frames[1].Height = 30;
	SpriteList[2].Animations[0].Frames[1].Transparency = RGB(255,255,255);
	SpriteList[2].Animations[0].Frames[1].hFlip = false;
	SpriteList[2].Animations[0].Frames[1].vFlip = false;
	SpriteList[2].Animations[0].Frames[1].zRotation = 0;
	SpriteList[2].Animations[0].Frames[1].HotSpot[0].x = 15;
	SpriteList[2].Animations[0].Frames[1].HotSpot[0].y = 15;
	::SetRect( &SpriteList[2].Animations[0].Frames[1].BBox, 0, 0, 29,29);
	SpriteList[2].Animations[0].Frames[1].centerX = 15;
	SpriteList[2].Animations[0].Frames[1].centerY = 15;
	SpriteList[2].Animations[0].Frames[1].PegRegistered = false;
	SpriteList[2].Animations[0].Frames[1].useTransparency = true;

	SpriteList[2].Animations[0].Frames[2].BitmapName = "Green Alien 3.bmp";
	SpriteList[2].Animations[0].Frames[2].TranslateX = 0.000;
	SpriteList[2].Animations[0].Frames[2].TranslateY = 0.000;
	SpriteList[2].Animations[0].Frames[2].Delay = 10;
	SpriteList[2].Animations[0].Frames[2].Width = 30;
	SpriteList[2].Animations[0].Frames[2].Height = 30;
	SpriteList[2].Animations[0].Frames[2].Transparency = RGB(255,255,255);
	SpriteList[2].Animations[0].Frames[2].hFlip = false;
	SpriteList[2].Animations[0].Frames[2].vFlip = false;
	SpriteList[2].Animations[0].Frames[2].zRotation = 0;
	SpriteList[2].Animations[0].Frames[2].HotSpot[0].x = 15;
	SpriteList[2].Animations[0].Frames[2].HotSpot[0].y = 15;
	::SetRect( &SpriteList[2].Animations[0].Frames[2].BBox, 0, 0, 29,29);
	SpriteList[2].Animations[0].Frames[2].centerX = 15;
	SpriteList[2].Animations[0].Frames[2].centerY = 15;
	SpriteList[2].Animations[0].Frames[2].PegRegistered = false;
	SpriteList[2].Animations[0].Frames[2].useTransparency = true;

	SpriteList[2].Animations[0].Frames[3].BitmapName = "Green Alien 2.bmp";
	SpriteList[2].Animations[0].Frames[3].TranslateX = 0.000;
	SpriteList[2].Animations[0].Frames[3].TranslateY = 0.000;
	SpriteList[2].Animations[0].Frames[3].Delay = 10;
	SpriteList[2].Animations[0].Frames[3].Width = 30;
	SpriteList[2].Animations[0].Frames[3].Height = 30;
	SpriteList[2].Animations[0].Frames[3].Transparency = RGB(255,255,255);
	SpriteList[2].Animations[0].Frames[3].hFlip = false;
	SpriteList[2].Animations[0].Frames[3].vFlip = false;
	SpriteList[2].Animations[0].Frames[3].zRotation = 0;
	SpriteList[2].Animations[0].Frames[3].HotSpot[0].x = 15;
	SpriteList[2].Animations[0].Frames[3].HotSpot[0].y = 15;
	::SetRect( &SpriteList[2].Animations[0].Frames[3].BBox, 0, 0, 29,29);
	SpriteList[2].Animations[0].Frames[3].centerX = 15;
	SpriteList[2].Animations[0].Frames[3].centerY = 15;
	SpriteList[2].Animations[0].Frames[3].PegRegistered = false;
	SpriteList[2].Animations[0].Frames[3].useTransparency = true;


	SpriteList[2].Animations[1].TotalFrames=4;
	SpriteList[2].Animations[1].ConnectTo = 0;
	SpriteList[2].Animations[1].Frames = new FrameElem[4];

	SpriteList[2].Animations[1].Frames[0].BitmapName = "Green Alien Left 1.bmp";
	SpriteList[2].Animations[1].Frames[0].TranslateX = 0.000;
	SpriteList[2].Animations[1].Frames[0].TranslateY = 0.000;
	SpriteList[2].Animations[1].Frames[0].Delay = 10;
	SpriteList[2].Animations[1].Frames[0].Width = 30;
	SpriteList[2].Animations[1].Frames[0].Height = 30;
	SpriteList[2].Animations[1].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[2].Animations[1].Frames[0].hFlip = false;
	SpriteList[2].Animations[1].Frames[0].vFlip = false;
	SpriteList[2].Animations[1].Frames[0].zRotation = 0;
	SpriteList[2].Animations[1].Frames[0].HotSpot[0].x = 15;
	SpriteList[2].Animations[1].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[2].Animations[1].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[2].Animations[1].Frames[0].centerX = 15;
	SpriteList[2].Animations[1].Frames[0].centerY = 15;
	SpriteList[2].Animations[1].Frames[0].PegRegistered = false;
	SpriteList[2].Animations[1].Frames[0].useTransparency = true;

	SpriteList[2].Animations[1].Frames[1].BitmapName = "Green Alien Left 2.bmp";
	SpriteList[2].Animations[1].Frames[1].TranslateX = 0.000;
	SpriteList[2].Animations[1].Frames[1].TranslateY = 0.000;
	SpriteList[2].Animations[1].Frames[1].Delay = 10;
	SpriteList[2].Animations[1].Frames[1].Width = 30;
	SpriteList[2].Animations[1].Frames[1].Height = 30;
	SpriteList[2].Animations[1].Frames[1].Transparency = RGB(255,255,255);
	SpriteList[2].Animations[1].Frames[1].hFlip = false;
	SpriteList[2].Animations[1].Frames[1].vFlip = false;
	SpriteList[2].Animations[1].Frames[1].zRotation = 0;
	SpriteList[2].Animations[1].Frames[1].HotSpot[0].x = 15;
	SpriteList[2].Animations[1].Frames[1].HotSpot[0].y = 15;
	::SetRect( &SpriteList[2].Animations[1].Frames[1].BBox, 0, 0, 29,29);
	SpriteList[2].Animations[1].Frames[1].centerX = 15;
	SpriteList[2].Animations[1].Frames[1].centerY = 15;
	SpriteList[2].Animations[1].Frames[1].PegRegistered = false;
	SpriteList[2].Animations[1].Frames[1].useTransparency = true;

	SpriteList[2].Animations[1].Frames[2].BitmapName = "Green Alien Left 3.bmp";
	SpriteList[2].Animations[1].Frames[2].TranslateX = 0.000;
	SpriteList[2].Animations[1].Frames[2].TranslateY = 0.000;
	SpriteList[2].Animations[1].Frames[2].Delay = 10;
	SpriteList[2].Animations[1].Frames[2].Width = 30;
	SpriteList[2].Animations[1].Frames[2].Height = 30;
	SpriteList[2].Animations[1].Frames[2].Transparency = RGB(255,255,255);
	SpriteList[2].Animations[1].Frames[2].hFlip = false;
	SpriteList[2].Animations[1].Frames[2].vFlip = false;
	SpriteList[2].Animations[1].Frames[2].zRotation = 0;
	SpriteList[2].Animations[1].Frames[2].HotSpot[0].x = 15;
	SpriteList[2].Animations[1].Frames[2].HotSpot[0].y = 15;
	::SetRect( &SpriteList[2].Animations[1].Frames[2].BBox, 0, 0, 29,29);
	SpriteList[2].Animations[1].Frames[2].centerX = 15;
	SpriteList[2].Animations[1].Frames[2].centerY = 15;
	SpriteList[2].Animations[1].Frames[2].PegRegistered = false;
	SpriteList[2].Animations[1].Frames[2].useTransparency = true;

	SpriteList[2].Animations[1].Frames[3].BitmapName = "Green Alien Left 2.bmp";
	SpriteList[2].Animations[1].Frames[3].TranslateX = 0.000;
	SpriteList[2].Animations[1].Frames[3].TranslateY = 0.000;
	SpriteList[2].Animations[1].Frames[3].Delay = 10;
	SpriteList[2].Animations[1].Frames[3].Width = 30;
	SpriteList[2].Animations[1].Frames[3].Height = 30;
	SpriteList[2].Animations[1].Frames[3].Transparency = RGB(255,255,255);
	SpriteList[2].Animations[1].Frames[3].hFlip = false;
	SpriteList[2].Animations[1].Frames[3].vFlip = false;
	SpriteList[2].Animations[1].Frames[3].zRotation = 0;
	SpriteList[2].Animations[1].Frames[3].HotSpot[0].x = 15;
	SpriteList[2].Animations[1].Frames[3].HotSpot[0].y = 15;
	::SetRect( &SpriteList[2].Animations[1].Frames[3].BBox, 0, 0, 29,29);
	SpriteList[2].Animations[1].Frames[3].centerX = 15;
	SpriteList[2].Animations[1].Frames[3].centerY = 15;
	SpriteList[2].Animations[1].Frames[3].PegRegistered = false;
	SpriteList[2].Animations[1].Frames[3].useTransparency = true;


	SpriteList[2].Animations[2].TotalFrames=4;
	SpriteList[2].Animations[2].ConnectTo = 0;
	SpriteList[2].Animations[2].Frames = new FrameElem[4];

	SpriteList[2].Animations[2].Frames[0].BitmapName = "Green Alien Right 1.bmp";
	SpriteList[2].Animations[2].Frames[0].TranslateX = 0.000;
	SpriteList[2].Animations[2].Frames[0].TranslateY = 0.000;
	SpriteList[2].Animations[2].Frames[0].Delay = 10;
	SpriteList[2].Animations[2].Frames[0].Width = 30;
	SpriteList[2].Animations[2].Frames[0].Height = 30;
	SpriteList[2].Animations[2].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[2].Animations[2].Frames[0].hFlip = false;
	SpriteList[2].Animations[2].Frames[0].vFlip = false;
	SpriteList[2].Animations[2].Frames[0].zRotation = 0;
	SpriteList[2].Animations[2].Frames[0].HotSpot[0].x = 15;
	SpriteList[2].Animations[2].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[2].Animations[2].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[2].Animations[2].Frames[0].centerX = 15;
	SpriteList[2].Animations[2].Frames[0].centerY = 15;
	SpriteList[2].Animations[2].Frames[0].PegRegistered = false;
	SpriteList[2].Animations[2].Frames[0].useTransparency = true;

	SpriteList[2].Animations[2].Frames[1].BitmapName = "Green Alien Right 2.bmp";
	SpriteList[2].Animations[2].Frames[1].TranslateX = 0.000;
	SpriteList[2].Animations[2].Frames[1].TranslateY = 0.000;
	SpriteList[2].Animations[2].Frames[1].Delay = 10;
	SpriteList[2].Animations[2].Frames[1].Width = 30;
	SpriteList[2].Animations[2].Frames[1].Height = 30;
	SpriteList[2].Animations[2].Frames[1].Transparency = RGB(255,255,255);
	SpriteList[2].Animations[2].Frames[1].hFlip = false;
	SpriteList[2].Animations[2].Frames[1].vFlip = false;
	SpriteList[2].Animations[2].Frames[1].zRotation = 0;
	SpriteList[2].Animations[2].Frames[1].HotSpot[0].x = 15;
	SpriteList[2].Animations[2].Frames[1].HotSpot[0].y = 15;
	::SetRect( &SpriteList[2].Animations[2].Frames[1].BBox, 0, 0, 29,29);
	SpriteList[2].Animations[2].Frames[1].centerX = 15;
	SpriteList[2].Animations[2].Frames[1].centerY = 15;
	SpriteList[2].Animations[2].Frames[1].PegRegistered = false;
	SpriteList[2].Animations[2].Frames[1].useTransparency = true;

	SpriteList[2].Animations[2].Frames[2].BitmapName = "Green Alien Right 3.bmp";
	SpriteList[2].Animations[2].Frames[2].TranslateX = 0.000;
	SpriteList[2].Animations[2].Frames[2].TranslateY = 0.000;
	SpriteList[2].Animations[2].Frames[2].Delay = 10;
	SpriteList[2].Animations[2].Frames[2].Width = 30;
	SpriteList[2].Animations[2].Frames[2].Height = 30;
	SpriteList[2].Animations[2].Frames[2].Transparency = RGB(255,255,255);
	SpriteList[2].Animations[2].Frames[2].hFlip = false;
	SpriteList[2].Animations[2].Frames[2].vFlip = false;
	SpriteList[2].Animations[2].Frames[2].zRotation = 0;
	SpriteList[2].Animations[2].Frames[2].HotSpot[0].x = 15;
	SpriteList[2].Animations[2].Frames[2].HotSpot[0].y = 15;
	::SetRect( &SpriteList[2].Animations[2].Frames[2].BBox, 0, 0, 29,29);
	SpriteList[2].Animations[2].Frames[2].centerX = 15;
	SpriteList[2].Animations[2].Frames[2].centerY = 15;
	SpriteList[2].Animations[2].Frames[2].PegRegistered = false;
	SpriteList[2].Animations[2].Frames[2].useTransparency = true;

	SpriteList[2].Animations[2].Frames[3].BitmapName = "Green Alien Right 2.bmp";
	SpriteList[2].Animations[2].Frames[3].TranslateX = 0.000;
	SpriteList[2].Animations[2].Frames[3].TranslateY = 0.000;
	SpriteList[2].Animations[2].Frames[3].Delay = 10;
	SpriteList[2].Animations[2].Frames[3].Width = 30;
	SpriteList[2].Animations[2].Frames[3].Height = 30;
	SpriteList[2].Animations[2].Frames[3].Transparency = RGB(255,255,255);
	SpriteList[2].Animations[2].Frames[3].hFlip = false;
	SpriteList[2].Animations[2].Frames[3].vFlip = false;
	SpriteList[2].Animations[2].Frames[3].zRotation = 0;
	SpriteList[2].Animations[2].Frames[3].HotSpot[0].x = 15;
	SpriteList[2].Animations[2].Frames[3].HotSpot[0].y = 15;
	::SetRect( &SpriteList[2].Animations[2].Frames[3].BBox, 0, 0, 29,29);
	SpriteList[2].Animations[2].Frames[3].centerX = 15;
	SpriteList[2].Animations[2].Frames[3].centerY = 15;
	SpriteList[2].Animations[2].Frames[3].PegRegistered = false;
	SpriteList[2].Animations[2].Frames[3].useTransparency = true;


	SpriteList[2].Animations[3].TotalFrames=4;
	SpriteList[2].Animations[3].ConnectTo = 0;
	SpriteList[2].Animations[3].Frames = new FrameElem[4];

	SpriteList[2].Animations[3].Frames[0].BitmapName = "Green Alien Back 1.bmp";
	SpriteList[2].Animations[3].Frames[0].TranslateX = 0.000;
	SpriteList[2].Animations[3].Frames[0].TranslateY = 0.000;
	SpriteList[2].Animations[3].Frames[0].Delay = 10;
	SpriteList[2].Animations[3].Frames[0].Width = 30;
	SpriteList[2].Animations[3].Frames[0].Height = 30;
	SpriteList[2].Animations[3].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[2].Animations[3].Frames[0].hFlip = false;
	SpriteList[2].Animations[3].Frames[0].vFlip = false;
	SpriteList[2].Animations[3].Frames[0].zRotation = 0;
	SpriteList[2].Animations[3].Frames[0].HotSpot[0].x = 15;
	SpriteList[2].Animations[3].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[2].Animations[3].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[2].Animations[3].Frames[0].centerX = 15;
	SpriteList[2].Animations[3].Frames[0].centerY = 15;
	SpriteList[2].Animations[3].Frames[0].PegRegistered = false;
	SpriteList[2].Animations[3].Frames[0].useTransparency = true;

	SpriteList[2].Animations[3].Frames[1].BitmapName = "Green Alien Back 2.bmp";
	SpriteList[2].Animations[3].Frames[1].TranslateX = 0.000;
	SpriteList[2].Animations[3].Frames[1].TranslateY = 0.000;
	SpriteList[2].Animations[3].Frames[1].Delay = 10;
	SpriteList[2].Animations[3].Frames[1].Width = 30;
	SpriteList[2].Animations[3].Frames[1].Height = 30;
	SpriteList[2].Animations[3].Frames[1].Transparency = RGB(255,255,255);
	SpriteList[2].Animations[3].Frames[1].hFlip = false;
	SpriteList[2].Animations[3].Frames[1].vFlip = false;
	SpriteList[2].Animations[3].Frames[1].zRotation = 0;
	SpriteList[2].Animations[3].Frames[1].HotSpot[0].x = 15;
	SpriteList[2].Animations[3].Frames[1].HotSpot[0].y = 15;
	::SetRect( &SpriteList[2].Animations[3].Frames[1].BBox, 0, 0, 29,29);
	SpriteList[2].Animations[3].Frames[1].centerX = 15;
	SpriteList[2].Animations[3].Frames[1].centerY = 15;
	SpriteList[2].Animations[3].Frames[1].PegRegistered = false;
	SpriteList[2].Animations[3].Frames[1].useTransparency = true;

	SpriteList[2].Animations[3].Frames[2].BitmapName = "Green Alien Back 3.bmp";
	SpriteList[2].Animations[3].Frames[2].TranslateX = 0.000;
	SpriteList[2].Animations[3].Frames[2].TranslateY = 0.000;
	SpriteList[2].Animations[3].Frames[2].Delay = 10;
	SpriteList[2].Animations[3].Frames[2].Width = 30;
	SpriteList[2].Animations[3].Frames[2].Height = 30;
	SpriteList[2].Animations[3].Frames[2].Transparency = RGB(255,255,255);
	SpriteList[2].Animations[3].Frames[2].hFlip = false;
	SpriteList[2].Animations[3].Frames[2].vFlip = false;
	SpriteList[2].Animations[3].Frames[2].zRotation = 0;
	SpriteList[2].Animations[3].Frames[2].HotSpot[0].x = 15;
	SpriteList[2].Animations[3].Frames[2].HotSpot[0].y = 15;
	::SetRect( &SpriteList[2].Animations[3].Frames[2].BBox, 0, 0, 29,29);
	SpriteList[2].Animations[3].Frames[2].centerX = 15;
	SpriteList[2].Animations[3].Frames[2].centerY = 15;
	SpriteList[2].Animations[3].Frames[2].PegRegistered = false;
	SpriteList[2].Animations[3].Frames[2].useTransparency = true;

	SpriteList[2].Animations[3].Frames[3].BitmapName = "Green Alien Back 2.bmp";
	SpriteList[2].Animations[3].Frames[3].TranslateX = 0.000;
	SpriteList[2].Animations[3].Frames[3].TranslateY = 0.000;
	SpriteList[2].Animations[3].Frames[3].Delay = 10;
	SpriteList[2].Animations[3].Frames[3].Width = 30;
	SpriteList[2].Animations[3].Frames[3].Height = 30;
	SpriteList[2].Animations[3].Frames[3].Transparency = RGB(255,255,255);
	SpriteList[2].Animations[3].Frames[3].hFlip = false;
	SpriteList[2].Animations[3].Frames[3].vFlip = false;
	SpriteList[2].Animations[3].Frames[3].zRotation = 0;
	SpriteList[2].Animations[3].Frames[3].HotSpot[0].x = 15;
	SpriteList[2].Animations[3].Frames[3].HotSpot[0].y = 15;
	::SetRect( &SpriteList[2].Animations[3].Frames[3].BBox, 0, 0, 29,29);
	SpriteList[2].Animations[3].Frames[3].centerX = 15;
	SpriteList[2].Animations[3].Frames[3].centerY = 15;
	SpriteList[2].Animations[3].Frames[3].PegRegistered = false;
	SpriteList[2].Animations[3].Frames[3].useTransparency = true;


	SpriteList[2].Animations[4].TotalFrames=2;
	SpriteList[2].Animations[4].ConnectTo = 0;
	SpriteList[2].Animations[4].Frames = new FrameElem[2];

	SpriteList[2].Animations[4].Frames[0].BitmapName = "Green Alien 2.bmp";
	SpriteList[2].Animations[4].Frames[0].TranslateX = 0.000;
	SpriteList[2].Animations[4].Frames[0].TranslateY = 0.000;
	SpriteList[2].Animations[4].Frames[0].Delay = 20;
	SpriteList[2].Animations[4].Frames[0].Width = 30;
	SpriteList[2].Animations[4].Frames[0].Height = 30;
	SpriteList[2].Animations[4].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[2].Animations[4].Frames[0].hFlip = false;
	SpriteList[2].Animations[4].Frames[0].vFlip = false;
	SpriteList[2].Animations[4].Frames[0].zRotation = 0;
	SpriteList[2].Animations[4].Frames[0].HotSpot[0].x = 15;
	SpriteList[2].Animations[4].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[2].Animations[4].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[2].Animations[4].Frames[0].centerX = 15;
	SpriteList[2].Animations[4].Frames[0].centerY = 15;
	SpriteList[2].Animations[4].Frames[0].PegRegistered = false;
	SpriteList[2].Animations[4].Frames[0].useTransparency = true;

	SpriteList[2].Animations[4].Frames[1].BitmapName = "Green Alien 4.bmp";
	SpriteList[2].Animations[4].Frames[1].TranslateX = 0.000;
	SpriteList[2].Animations[4].Frames[1].TranslateY = 0.000;
	SpriteList[2].Animations[4].Frames[1].Delay = 20;
	SpriteList[2].Animations[4].Frames[1].Width = 30;
	SpriteList[2].Animations[4].Frames[1].Height = 30;
	SpriteList[2].Animations[4].Frames[1].Transparency = RGB(255,255,255);
	SpriteList[2].Animations[4].Frames[1].hFlip = false;
	SpriteList[2].Animations[4].Frames[1].vFlip = false;
	SpriteList[2].Animations[4].Frames[1].zRotation = 0;
	SpriteList[2].Animations[4].Frames[1].HotSpot[0].x = 15;
	SpriteList[2].Animations[4].Frames[1].HotSpot[0].y = 15;
	::SetRect( &SpriteList[2].Animations[4].Frames[1].BBox, 0, 0, 29,29);
	SpriteList[2].Animations[4].Frames[1].centerX = 15;
	SpriteList[2].Animations[4].Frames[1].centerY = 15;
	SpriteList[2].Animations[4].Frames[1].PegRegistered = false;
	SpriteList[2].Animations[4].Frames[1].useTransparency = true;


	SpriteList[2].Animations[5].TotalFrames=2;
	SpriteList[2].Animations[5].ConnectTo = 0;
	SpriteList[2].Animations[5].Frames = new FrameElem[2];

	SpriteList[2].Animations[5].Frames[0].BitmapName = "Green Alien Back 2.bmp";
	SpriteList[2].Animations[5].Frames[0].TranslateX = 0.000;
	SpriteList[2].Animations[5].Frames[0].TranslateY = 0.000;
	SpriteList[2].Animations[5].Frames[0].Delay = 20;
	SpriteList[2].Animations[5].Frames[0].Width = 30;
	SpriteList[2].Animations[5].Frames[0].Height = 30;
	SpriteList[2].Animations[5].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[2].Animations[5].Frames[0].hFlip = false;
	SpriteList[2].Animations[5].Frames[0].vFlip = false;
	SpriteList[2].Animations[5].Frames[0].zRotation = 0;
	SpriteList[2].Animations[5].Frames[0].HotSpot[0].x = 15;
	SpriteList[2].Animations[5].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[2].Animations[5].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[2].Animations[5].Frames[0].centerX = 15;
	SpriteList[2].Animations[5].Frames[0].centerY = 15;
	SpriteList[2].Animations[5].Frames[0].PegRegistered = false;
	SpriteList[2].Animations[5].Frames[0].useTransparency = true;

	SpriteList[2].Animations[5].Frames[1].BitmapName = "Green Alien Back 4.bmp";
	SpriteList[2].Animations[5].Frames[1].TranslateX = 0.000;
	SpriteList[2].Animations[5].Frames[1].TranslateY = 0.000;
	SpriteList[2].Animations[5].Frames[1].Delay = 20;
	SpriteList[2].Animations[5].Frames[1].Width = 30;
	SpriteList[2].Animations[5].Frames[1].Height = 30;
	SpriteList[2].Animations[5].Frames[1].Transparency = RGB(255,255,255);
	SpriteList[2].Animations[5].Frames[1].hFlip = false;
	SpriteList[2].Animations[5].Frames[1].vFlip = false;
	SpriteList[2].Animations[5].Frames[1].zRotation = 0;
	SpriteList[2].Animations[5].Frames[1].HotSpot[0].x = 15;
	SpriteList[2].Animations[5].Frames[1].HotSpot[0].y = 15;
	::SetRect( &SpriteList[2].Animations[5].Frames[1].BBox, 0, 0, 29,29);
	SpriteList[2].Animations[5].Frames[1].centerX = 15;
	SpriteList[2].Animations[5].Frames[1].centerY = 15;
	SpriteList[2].Animations[5].Frames[1].PegRegistered = false;
	SpriteList[2].Animations[5].Frames[1].useTransparency = true;


	SpriteList[2].Animations[6].TotalFrames=2;
	SpriteList[2].Animations[6].ConnectTo = 0;
	SpriteList[2].Animations[6].Frames = new FrameElem[2];

	SpriteList[2].Animations[6].Frames[0].BitmapName = "Green Alien Right 2.bmp";
	SpriteList[2].Animations[6].Frames[0].TranslateX = 0.000;
	SpriteList[2].Animations[6].Frames[0].TranslateY = 0.000;
	SpriteList[2].Animations[6].Frames[0].Delay = 20;
	SpriteList[2].Animations[6].Frames[0].Width = 30;
	SpriteList[2].Animations[6].Frames[0].Height = 30;
	SpriteList[2].Animations[6].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[2].Animations[6].Frames[0].hFlip = false;
	SpriteList[2].Animations[6].Frames[0].vFlip = false;
	SpriteList[2].Animations[6].Frames[0].zRotation = 0;
	SpriteList[2].Animations[6].Frames[0].HotSpot[0].x = 15;
	SpriteList[2].Animations[6].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[2].Animations[6].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[2].Animations[6].Frames[0].centerX = 15;
	SpriteList[2].Animations[6].Frames[0].centerY = 15;
	SpriteList[2].Animations[6].Frames[0].PegRegistered = false;
	SpriteList[2].Animations[6].Frames[0].useTransparency = true;

	SpriteList[2].Animations[6].Frames[1].BitmapName = "Green Alien Right 4.bmp";
	SpriteList[2].Animations[6].Frames[1].TranslateX = 0.000;
	SpriteList[2].Animations[6].Frames[1].TranslateY = 0.000;
	SpriteList[2].Animations[6].Frames[1].Delay = 20;
	SpriteList[2].Animations[6].Frames[1].Width = 30;
	SpriteList[2].Animations[6].Frames[1].Height = 30;
	SpriteList[2].Animations[6].Frames[1].Transparency = RGB(255,255,255);
	SpriteList[2].Animations[6].Frames[1].hFlip = false;
	SpriteList[2].Animations[6].Frames[1].vFlip = false;
	SpriteList[2].Animations[6].Frames[1].zRotation = 0;
	SpriteList[2].Animations[6].Frames[1].HotSpot[0].x = 15;
	SpriteList[2].Animations[6].Frames[1].HotSpot[0].y = 15;
	::SetRect( &SpriteList[2].Animations[6].Frames[1].BBox, 0, 0, 29,29);
	SpriteList[2].Animations[6].Frames[1].centerX = 15;
	SpriteList[2].Animations[6].Frames[1].centerY = 15;
	SpriteList[2].Animations[6].Frames[1].PegRegistered = false;
	SpriteList[2].Animations[6].Frames[1].useTransparency = true;


	SpriteList[2].Animations[7].TotalFrames=2;
	SpriteList[2].Animations[7].ConnectTo = 0;
	SpriteList[2].Animations[7].Frames = new FrameElem[2];

	SpriteList[2].Animations[7].Frames[0].BitmapName = "Green Alien Left 2.bmp";
	SpriteList[2].Animations[7].Frames[0].TranslateX = 0.000;
	SpriteList[2].Animations[7].Frames[0].TranslateY = 0.000;
	SpriteList[2].Animations[7].Frames[0].Delay = 20;
	SpriteList[2].Animations[7].Frames[0].Width = 30;
	SpriteList[2].Animations[7].Frames[0].Height = 30;
	SpriteList[2].Animations[7].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[2].Animations[7].Frames[0].hFlip = false;
	SpriteList[2].Animations[7].Frames[0].vFlip = false;
	SpriteList[2].Animations[7].Frames[0].zRotation = 0;
	SpriteList[2].Animations[7].Frames[0].HotSpot[0].x = 15;
	SpriteList[2].Animations[7].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[2].Animations[7].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[2].Animations[7].Frames[0].centerX = 15;
	SpriteList[2].Animations[7].Frames[0].centerY = 15;
	SpriteList[2].Animations[7].Frames[0].PegRegistered = false;
	SpriteList[2].Animations[7].Frames[0].useTransparency = true;

	SpriteList[2].Animations[7].Frames[1].BitmapName = "Green Alien Left 4.bmp";
	SpriteList[2].Animations[7].Frames[1].TranslateX = 0.000;
	SpriteList[2].Animations[7].Frames[1].TranslateY = 0.000;
	SpriteList[2].Animations[7].Frames[1].Delay = 20;
	SpriteList[2].Animations[7].Frames[1].Width = 30;
	SpriteList[2].Animations[7].Frames[1].Height = 30;
	SpriteList[2].Animations[7].Frames[1].Transparency = RGB(255,255,255);
	SpriteList[2].Animations[7].Frames[1].hFlip = false;
	SpriteList[2].Animations[7].Frames[1].vFlip = false;
	SpriteList[2].Animations[7].Frames[1].zRotation = 0;
	SpriteList[2].Animations[7].Frames[1].HotSpot[0].x = 15;
	SpriteList[2].Animations[7].Frames[1].HotSpot[0].y = 15;
	::SetRect( &SpriteList[2].Animations[7].Frames[1].BBox, 0, 0, 29,29);
	SpriteList[2].Animations[7].Frames[1].centerX = 15;
	SpriteList[2].Animations[7].Frames[1].centerY = 15;
	SpriteList[2].Animations[7].Frames[1].PegRegistered = false;
	SpriteList[2].Animations[7].Frames[1].useTransparency = true;



	SpriteList[1].TotalAnimations = 8;
	SpriteList[1].Animations = new AnimationElem[8];

	SpriteList[1].Animations[0].TotalFrames=4;
	SpriteList[1].Animations[0].ConnectTo = 0;
	SpriteList[1].Animations[0].Frames = new FrameElem[4];

	SpriteList[1].Animations[0].Frames[0].BitmapName = "White Alien 1.bmp";
	SpriteList[1].Animations[0].Frames[0].TranslateX = 0.000;
	SpriteList[1].Animations[0].Frames[0].TranslateY = 0.000;
	SpriteList[1].Animations[0].Frames[0].Delay = 4;
	SpriteList[1].Animations[0].Frames[0].Width = 30;
	SpriteList[1].Animations[0].Frames[0].Height = 30;
	SpriteList[1].Animations[0].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[1].Animations[0].Frames[0].hFlip = false;
	SpriteList[1].Animations[0].Frames[0].vFlip = false;
	SpriteList[1].Animations[0].Frames[0].zRotation = 0;
	SpriteList[1].Animations[0].Frames[0].HotSpot[0].x = 15;
	SpriteList[1].Animations[0].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[1].Animations[0].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[1].Animations[0].Frames[0].centerX = 15;
	SpriteList[1].Animations[0].Frames[0].centerY = 15;
	SpriteList[1].Animations[0].Frames[0].PegRegistered = false;
	SpriteList[1].Animations[0].Frames[0].useTransparency = true;

	SpriteList[1].Animations[0].Frames[1].BitmapName = "White Alien 2.bmp";
	SpriteList[1].Animations[0].Frames[1].TranslateX = 0.000;
	SpriteList[1].Animations[0].Frames[1].TranslateY = 0.000;
	SpriteList[1].Animations[0].Frames[1].Delay = 4;
	SpriteList[1].Animations[0].Frames[1].Width = 30;
	SpriteList[1].Animations[0].Frames[1].Height = 30;
	SpriteList[1].Animations[0].Frames[1].Transparency = RGB(255,255,255);
	SpriteList[1].Animations[0].Frames[1].hFlip = false;
	SpriteList[1].Animations[0].Frames[1].vFlip = false;
	SpriteList[1].Animations[0].Frames[1].zRotation = 0;
	SpriteList[1].Animations[0].Frames[1].HotSpot[0].x = 15;
	SpriteList[1].Animations[0].Frames[1].HotSpot[0].y = 15;
	::SetRect( &SpriteList[1].Animations[0].Frames[1].BBox, 0, 0, 29,29);
	SpriteList[1].Animations[0].Frames[1].centerX = 15;
	SpriteList[1].Animations[0].Frames[1].centerY = 15;
	SpriteList[1].Animations[0].Frames[1].PegRegistered = false;
	SpriteList[1].Animations[0].Frames[1].useTransparency = true;

	SpriteList[1].Animations[0].Frames[2].BitmapName = "White Alien 3.bmp";
	SpriteList[1].Animations[0].Frames[2].TranslateX = 0.000;
	SpriteList[1].Animations[0].Frames[2].TranslateY = 0.000;
	SpriteList[1].Animations[0].Frames[2].Delay = 4;
	SpriteList[1].Animations[0].Frames[2].Width = 30;
	SpriteList[1].Animations[0].Frames[2].Height = 30;
	SpriteList[1].Animations[0].Frames[2].Transparency = RGB(255,255,255);
	SpriteList[1].Animations[0].Frames[2].hFlip = false;
	SpriteList[1].Animations[0].Frames[2].vFlip = false;
	SpriteList[1].Animations[0].Frames[2].zRotation = 0;
	SpriteList[1].Animations[0].Frames[2].HotSpot[0].x = 15;
	SpriteList[1].Animations[0].Frames[2].HotSpot[0].y = 15;
	::SetRect( &SpriteList[1].Animations[0].Frames[2].BBox, 0, 0, 29,29);
	SpriteList[1].Animations[0].Frames[2].centerX = 15;
	SpriteList[1].Animations[0].Frames[2].centerY = 15;
	SpriteList[1].Animations[0].Frames[2].PegRegistered = false;
	SpriteList[1].Animations[0].Frames[2].useTransparency = true;

	SpriteList[1].Animations[0].Frames[3].BitmapName = "White Alien 2.bmp";
	SpriteList[1].Animations[0].Frames[3].TranslateX = 0.000;
	SpriteList[1].Animations[0].Frames[3].TranslateY = 0.000;
	SpriteList[1].Animations[0].Frames[3].Delay = 4;
	SpriteList[1].Animations[0].Frames[3].Width = 30;
	SpriteList[1].Animations[0].Frames[3].Height = 30;
	SpriteList[1].Animations[0].Frames[3].Transparency = RGB(255,255,255);
	SpriteList[1].Animations[0].Frames[3].hFlip = false;
	SpriteList[1].Animations[0].Frames[3].vFlip = false;
	SpriteList[1].Animations[0].Frames[3].zRotation = 0;
	SpriteList[1].Animations[0].Frames[3].HotSpot[0].x = 15;
	SpriteList[1].Animations[0].Frames[3].HotSpot[0].y = 15;
	::SetRect( &SpriteList[1].Animations[0].Frames[3].BBox, 0, 0, 29,29);
	SpriteList[1].Animations[0].Frames[3].centerX = 15;
	SpriteList[1].Animations[0].Frames[3].centerY = 15;
	SpriteList[1].Animations[0].Frames[3].PegRegistered = false;
	SpriteList[1].Animations[0].Frames[3].useTransparency = true;


	SpriteList[1].Animations[1].TotalFrames=4;
	SpriteList[1].Animations[1].ConnectTo = 0;
	SpriteList[1].Animations[1].Frames = new FrameElem[4];

	SpriteList[1].Animations[1].Frames[0].BitmapName = "White Alien Left 1.bmp";
	SpriteList[1].Animations[1].Frames[0].TranslateX = 0.000;
	SpriteList[1].Animations[1].Frames[0].TranslateY = 0.000;
	SpriteList[1].Animations[1].Frames[0].Delay = 4;
	SpriteList[1].Animations[1].Frames[0].Width = 30;
	SpriteList[1].Animations[1].Frames[0].Height = 30;
	SpriteList[1].Animations[1].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[1].Animations[1].Frames[0].hFlip = false;
	SpriteList[1].Animations[1].Frames[0].vFlip = false;
	SpriteList[1].Animations[1].Frames[0].zRotation = 0;
	SpriteList[1].Animations[1].Frames[0].HotSpot[0].x = 15;
	SpriteList[1].Animations[1].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[1].Animations[1].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[1].Animations[1].Frames[0].centerX = 15;
	SpriteList[1].Animations[1].Frames[0].centerY = 15;
	SpriteList[1].Animations[1].Frames[0].PegRegistered = false;
	SpriteList[1].Animations[1].Frames[0].useTransparency = true;

	SpriteList[1].Animations[1].Frames[1].BitmapName = "White Alien Left 2.bmp";
	SpriteList[1].Animations[1].Frames[1].TranslateX = 0.000;
	SpriteList[1].Animations[1].Frames[1].TranslateY = 0.000;
	SpriteList[1].Animations[1].Frames[1].Delay = 4;
	SpriteList[1].Animations[1].Frames[1].Width = 30;
	SpriteList[1].Animations[1].Frames[1].Height = 30;
	SpriteList[1].Animations[1].Frames[1].Transparency = RGB(255,255,255);
	SpriteList[1].Animations[1].Frames[1].hFlip = false;
	SpriteList[1].Animations[1].Frames[1].vFlip = false;
	SpriteList[1].Animations[1].Frames[1].zRotation = 0;
	SpriteList[1].Animations[1].Frames[1].HotSpot[0].x = 15;
	SpriteList[1].Animations[1].Frames[1].HotSpot[0].y = 15;
	::SetRect( &SpriteList[1].Animations[1].Frames[1].BBox, 0, 0, 29,29);
	SpriteList[1].Animations[1].Frames[1].centerX = 15;
	SpriteList[1].Animations[1].Frames[1].centerY = 15;
	SpriteList[1].Animations[1].Frames[1].PegRegistered = false;
	SpriteList[1].Animations[1].Frames[1].useTransparency = true;

	SpriteList[1].Animations[1].Frames[2].BitmapName = "White Alien Left 3.bmp";
	SpriteList[1].Animations[1].Frames[2].TranslateX = 0.000;
	SpriteList[1].Animations[1].Frames[2].TranslateY = 0.000;
	SpriteList[1].Animations[1].Frames[2].Delay = 4;
	SpriteList[1].Animations[1].Frames[2].Width = 30;
	SpriteList[1].Animations[1].Frames[2].Height = 30;
	SpriteList[1].Animations[1].Frames[2].Transparency = RGB(255,255,255);
	SpriteList[1].Animations[1].Frames[2].hFlip = false;
	SpriteList[1].Animations[1].Frames[2].vFlip = false;
	SpriteList[1].Animations[1].Frames[2].zRotation = 0;
	SpriteList[1].Animations[1].Frames[2].HotSpot[0].x = 15;
	SpriteList[1].Animations[1].Frames[2].HotSpot[0].y = 15;
	::SetRect( &SpriteList[1].Animations[1].Frames[2].BBox, 0, 0, 29,29);
	SpriteList[1].Animations[1].Frames[2].centerX = 15;
	SpriteList[1].Animations[1].Frames[2].centerY = 15;
	SpriteList[1].Animations[1].Frames[2].PegRegistered = false;
	SpriteList[1].Animations[1].Frames[2].useTransparency = true;

	SpriteList[1].Animations[1].Frames[3].BitmapName = "White Alien Left 2.bmp";
	SpriteList[1].Animations[1].Frames[3].TranslateX = 0.000;
	SpriteList[1].Animations[1].Frames[3].TranslateY = 0.000;
	SpriteList[1].Animations[1].Frames[3].Delay = 4;
	SpriteList[1].Animations[1].Frames[3].Width = 30;
	SpriteList[1].Animations[1].Frames[3].Height = 30;
	SpriteList[1].Animations[1].Frames[3].Transparency = RGB(255,255,255);
	SpriteList[1].Animations[1].Frames[3].hFlip = false;
	SpriteList[1].Animations[1].Frames[3].vFlip = false;
	SpriteList[1].Animations[1].Frames[3].zRotation = 0;
	SpriteList[1].Animations[1].Frames[3].HotSpot[0].x = 15;
	SpriteList[1].Animations[1].Frames[3].HotSpot[0].y = 15;
	::SetRect( &SpriteList[1].Animations[1].Frames[3].BBox, 0, 0, 29,29);
	SpriteList[1].Animations[1].Frames[3].centerX = 15;
	SpriteList[1].Animations[1].Frames[3].centerY = 15;
	SpriteList[1].Animations[1].Frames[3].PegRegistered = false;
	SpriteList[1].Animations[1].Frames[3].useTransparency = true;


	SpriteList[1].Animations[2].TotalFrames=4;
	SpriteList[1].Animations[2].ConnectTo = 0;
	SpriteList[1].Animations[2].Frames = new FrameElem[4];

	SpriteList[1].Animations[2].Frames[0].BitmapName = "White Alien Right 1.bmp";
	SpriteList[1].Animations[2].Frames[0].TranslateX = 0.000;
	SpriteList[1].Animations[2].Frames[0].TranslateY = 0.000;
	SpriteList[1].Animations[2].Frames[0].Delay = 4;
	SpriteList[1].Animations[2].Frames[0].Width = 30;
	SpriteList[1].Animations[2].Frames[0].Height = 30;
	SpriteList[1].Animations[2].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[1].Animations[2].Frames[0].hFlip = false;
	SpriteList[1].Animations[2].Frames[0].vFlip = false;
	SpriteList[1].Animations[2].Frames[0].zRotation = 0;
	SpriteList[1].Animations[2].Frames[0].HotSpot[0].x = 15;
	SpriteList[1].Animations[2].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[1].Animations[2].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[1].Animations[2].Frames[0].centerX = 15;
	SpriteList[1].Animations[2].Frames[0].centerY = 15;
	SpriteList[1].Animations[2].Frames[0].PegRegistered = false;
	SpriteList[1].Animations[2].Frames[0].useTransparency = true;

	SpriteList[1].Animations[2].Frames[1].BitmapName = "White Alien Right 2.bmp";
	SpriteList[1].Animations[2].Frames[1].TranslateX = 0.000;
	SpriteList[1].Animations[2].Frames[1].TranslateY = 0.000;
	SpriteList[1].Animations[2].Frames[1].Delay = 4;
	SpriteList[1].Animations[2].Frames[1].Width = 30;
	SpriteList[1].Animations[2].Frames[1].Height = 30;
	SpriteList[1].Animations[2].Frames[1].Transparency = RGB(255,255,255);
	SpriteList[1].Animations[2].Frames[1].hFlip = false;
	SpriteList[1].Animations[2].Frames[1].vFlip = false;
	SpriteList[1].Animations[2].Frames[1].zRotation = 0;
	SpriteList[1].Animations[2].Frames[1].HotSpot[0].x = 15;
	SpriteList[1].Animations[2].Frames[1].HotSpot[0].y = 15;
	::SetRect( &SpriteList[1].Animations[2].Frames[1].BBox, 0, 0, 29,29);
	SpriteList[1].Animations[2].Frames[1].centerX = 15;
	SpriteList[1].Animations[2].Frames[1].centerY = 15;
	SpriteList[1].Animations[2].Frames[1].PegRegistered = false;
	SpriteList[1].Animations[2].Frames[1].useTransparency = true;

	SpriteList[1].Animations[2].Frames[2].BitmapName = "White Alien Right 3.bmp";
	SpriteList[1].Animations[2].Frames[2].TranslateX = 0.000;
	SpriteList[1].Animations[2].Frames[2].TranslateY = 0.000;
	SpriteList[1].Animations[2].Frames[2].Delay = 4;
	SpriteList[1].Animations[2].Frames[2].Width = 30;
	SpriteList[1].Animations[2].Frames[2].Height = 30;
	SpriteList[1].Animations[2].Frames[2].Transparency = RGB(255,255,255);
	SpriteList[1].Animations[2].Frames[2].hFlip = false;
	SpriteList[1].Animations[2].Frames[2].vFlip = false;
	SpriteList[1].Animations[2].Frames[2].zRotation = 0;
	SpriteList[1].Animations[2].Frames[2].HotSpot[0].x = 15;
	SpriteList[1].Animations[2].Frames[2].HotSpot[0].y = 15;
	::SetRect( &SpriteList[1].Animations[2].Frames[2].BBox, 0, 0, 29,29);
	SpriteList[1].Animations[2].Frames[2].centerX = 15;
	SpriteList[1].Animations[2].Frames[2].centerY = 15;
	SpriteList[1].Animations[2].Frames[2].PegRegistered = false;
	SpriteList[1].Animations[2].Frames[2].useTransparency = true;

	SpriteList[1].Animations[2].Frames[3].BitmapName = "White Alien Right 2.bmp";
	SpriteList[1].Animations[2].Frames[3].TranslateX = 0.000;
	SpriteList[1].Animations[2].Frames[3].TranslateY = 0.000;
	SpriteList[1].Animations[2].Frames[3].Delay = 4;
	SpriteList[1].Animations[2].Frames[3].Width = 30;
	SpriteList[1].Animations[2].Frames[3].Height = 30;
	SpriteList[1].Animations[2].Frames[3].Transparency = RGB(255,255,255);
	SpriteList[1].Animations[2].Frames[3].hFlip = false;
	SpriteList[1].Animations[2].Frames[3].vFlip = false;
	SpriteList[1].Animations[2].Frames[3].zRotation = 0;
	SpriteList[1].Animations[2].Frames[3].HotSpot[0].x = 15;
	SpriteList[1].Animations[2].Frames[3].HotSpot[0].y = 15;
	::SetRect( &SpriteList[1].Animations[2].Frames[3].BBox, 0, 0, 29,29);
	SpriteList[1].Animations[2].Frames[3].centerX = 15;
	SpriteList[1].Animations[2].Frames[3].centerY = 15;
	SpriteList[1].Animations[2].Frames[3].PegRegistered = false;
	SpriteList[1].Animations[2].Frames[3].useTransparency = true;


	SpriteList[1].Animations[3].TotalFrames=4;
	SpriteList[1].Animations[3].ConnectTo = 0;
	SpriteList[1].Animations[3].Frames = new FrameElem[4];

	SpriteList[1].Animations[3].Frames[0].BitmapName = "White Alien Back 1.bmp";
	SpriteList[1].Animations[3].Frames[0].TranslateX = 0.000;
	SpriteList[1].Animations[3].Frames[0].TranslateY = 0.000;
	SpriteList[1].Animations[3].Frames[0].Delay = 4;
	SpriteList[1].Animations[3].Frames[0].Width = 30;
	SpriteList[1].Animations[3].Frames[0].Height = 30;
	SpriteList[1].Animations[3].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[1].Animations[3].Frames[0].hFlip = false;
	SpriteList[1].Animations[3].Frames[0].vFlip = false;
	SpriteList[1].Animations[3].Frames[0].zRotation = 0;
	SpriteList[1].Animations[3].Frames[0].HotSpot[0].x = 15;
	SpriteList[1].Animations[3].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[1].Animations[3].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[1].Animations[3].Frames[0].centerX = 15;
	SpriteList[1].Animations[3].Frames[0].centerY = 15;
	SpriteList[1].Animations[3].Frames[0].PegRegistered = false;
	SpriteList[1].Animations[3].Frames[0].useTransparency = true;

	SpriteList[1].Animations[3].Frames[1].BitmapName = "White Alien Back 2.bmp";
	SpriteList[1].Animations[3].Frames[1].TranslateX = 0.000;
	SpriteList[1].Animations[3].Frames[1].TranslateY = 0.000;
	SpriteList[1].Animations[3].Frames[1].Delay = 4;
	SpriteList[1].Animations[3].Frames[1].Width = 30;
	SpriteList[1].Animations[3].Frames[1].Height = 30;
	SpriteList[1].Animations[3].Frames[1].Transparency = RGB(255,255,255);
	SpriteList[1].Animations[3].Frames[1].hFlip = false;
	SpriteList[1].Animations[3].Frames[1].vFlip = false;
	SpriteList[1].Animations[3].Frames[1].zRotation = 0;
	SpriteList[1].Animations[3].Frames[1].HotSpot[0].x = 15;
	SpriteList[1].Animations[3].Frames[1].HotSpot[0].y = 15;
	::SetRect( &SpriteList[1].Animations[3].Frames[1].BBox, 0, 0, 29,29);
	SpriteList[1].Animations[3].Frames[1].centerX = 15;
	SpriteList[1].Animations[3].Frames[1].centerY = 15;
	SpriteList[1].Animations[3].Frames[1].PegRegistered = false;
	SpriteList[1].Animations[3].Frames[1].useTransparency = true;

	SpriteList[1].Animations[3].Frames[2].BitmapName = "White Alien Back 3.bmp";
	SpriteList[1].Animations[3].Frames[2].TranslateX = 0.000;
	SpriteList[1].Animations[3].Frames[2].TranslateY = 0.000;
	SpriteList[1].Animations[3].Frames[2].Delay = 4;
	SpriteList[1].Animations[3].Frames[2].Width = 30;
	SpriteList[1].Animations[3].Frames[2].Height = 30;
	SpriteList[1].Animations[3].Frames[2].Transparency = RGB(255,255,255);
	SpriteList[1].Animations[3].Frames[2].hFlip = false;
	SpriteList[1].Animations[3].Frames[2].vFlip = false;
	SpriteList[1].Animations[3].Frames[2].zRotation = 0;
	SpriteList[1].Animations[3].Frames[2].HotSpot[0].x = 15;
	SpriteList[1].Animations[3].Frames[2].HotSpot[0].y = 15;
	::SetRect( &SpriteList[1].Animations[3].Frames[2].BBox, 0, 0, 29,29);
	SpriteList[1].Animations[3].Frames[2].centerX = 15;
	SpriteList[1].Animations[3].Frames[2].centerY = 15;
	SpriteList[1].Animations[3].Frames[2].PegRegistered = false;
	SpriteList[1].Animations[3].Frames[2].useTransparency = true;

	SpriteList[1].Animations[3].Frames[3].BitmapName = "White Alien Back 2.bmp";
	SpriteList[1].Animations[3].Frames[3].TranslateX = 0.000;
	SpriteList[1].Animations[3].Frames[3].TranslateY = 0.000;
	SpriteList[1].Animations[3].Frames[3].Delay = 4;
	SpriteList[1].Animations[3].Frames[3].Width = 30;
	SpriteList[1].Animations[3].Frames[3].Height = 30;
	SpriteList[1].Animations[3].Frames[3].Transparency = RGB(255,255,255);
	SpriteList[1].Animations[3].Frames[3].hFlip = false;
	SpriteList[1].Animations[3].Frames[3].vFlip = false;
	SpriteList[1].Animations[3].Frames[3].zRotation = 0;
	SpriteList[1].Animations[3].Frames[3].HotSpot[0].x = 15;
	SpriteList[1].Animations[3].Frames[3].HotSpot[0].y = 15;
	::SetRect( &SpriteList[1].Animations[3].Frames[3].BBox, 0, 0, 29,29);
	SpriteList[1].Animations[3].Frames[3].centerX = 15;
	SpriteList[1].Animations[3].Frames[3].centerY = 15;
	SpriteList[1].Animations[3].Frames[3].PegRegistered = false;
	SpriteList[1].Animations[3].Frames[3].useTransparency = true;


	SpriteList[1].Animations[4].TotalFrames=2;
	SpriteList[1].Animations[4].ConnectTo = 0;
	SpriteList[1].Animations[4].Frames = new FrameElem[2];

	SpriteList[1].Animations[4].Frames[0].BitmapName = "White Alien 2.bmp";
	SpriteList[1].Animations[4].Frames[0].TranslateX = 0.000;
	SpriteList[1].Animations[4].Frames[0].TranslateY = 0.000;
	SpriteList[1].Animations[4].Frames[0].Delay = 20;
	SpriteList[1].Animations[4].Frames[0].Width = 30;
	SpriteList[1].Animations[4].Frames[0].Height = 30;
	SpriteList[1].Animations[4].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[1].Animations[4].Frames[0].hFlip = false;
	SpriteList[1].Animations[4].Frames[0].vFlip = false;
	SpriteList[1].Animations[4].Frames[0].zRotation = 0;
	SpriteList[1].Animations[4].Frames[0].HotSpot[0].x = 15;
	SpriteList[1].Animations[4].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[1].Animations[4].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[1].Animations[4].Frames[0].centerX = 15;
	SpriteList[1].Animations[4].Frames[0].centerY = 15;
	SpriteList[1].Animations[4].Frames[0].PegRegistered = false;
	SpriteList[1].Animations[4].Frames[0].useTransparency = true;

	SpriteList[1].Animations[4].Frames[1].BitmapName = "White Alien 4.bmp";
	SpriteList[1].Animations[4].Frames[1].TranslateX = 0.000;
	SpriteList[1].Animations[4].Frames[1].TranslateY = 0.000;
	SpriteList[1].Animations[4].Frames[1].Delay = 20;
	SpriteList[1].Animations[4].Frames[1].Width = 30;
	SpriteList[1].Animations[4].Frames[1].Height = 30;
	SpriteList[1].Animations[4].Frames[1].Transparency = RGB(255,255,255);
	SpriteList[1].Animations[4].Frames[1].hFlip = false;
	SpriteList[1].Animations[4].Frames[1].vFlip = false;
	SpriteList[1].Animations[4].Frames[1].zRotation = 0;
	SpriteList[1].Animations[4].Frames[1].HotSpot[0].x = 15;
	SpriteList[1].Animations[4].Frames[1].HotSpot[0].y = 15;
	::SetRect( &SpriteList[1].Animations[4].Frames[1].BBox, 0, 0, 29,29);
	SpriteList[1].Animations[4].Frames[1].centerX = 15;
	SpriteList[1].Animations[4].Frames[1].centerY = 15;
	SpriteList[1].Animations[4].Frames[1].PegRegistered = false;
	SpriteList[1].Animations[4].Frames[1].useTransparency = true;


	SpriteList[1].Animations[5].TotalFrames=2;
	SpriteList[1].Animations[5].ConnectTo = 0;
	SpriteList[1].Animations[5].Frames = new FrameElem[2];

	SpriteList[1].Animations[5].Frames[0].BitmapName = "White Alien Back 2.bmp";
	SpriteList[1].Animations[5].Frames[0].TranslateX = 0.000;
	SpriteList[1].Animations[5].Frames[0].TranslateY = 0.000;
	SpriteList[1].Animations[5].Frames[0].Delay = 20;
	SpriteList[1].Animations[5].Frames[0].Width = 30;
	SpriteList[1].Animations[5].Frames[0].Height = 30;
	SpriteList[1].Animations[5].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[1].Animations[5].Frames[0].hFlip = false;
	SpriteList[1].Animations[5].Frames[0].vFlip = false;
	SpriteList[1].Animations[5].Frames[0].zRotation = 0;
	SpriteList[1].Animations[5].Frames[0].HotSpot[0].x = 15;
	SpriteList[1].Animations[5].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[1].Animations[5].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[1].Animations[5].Frames[0].centerX = 15;
	SpriteList[1].Animations[5].Frames[0].centerY = 15;
	SpriteList[1].Animations[5].Frames[0].PegRegistered = false;
	SpriteList[1].Animations[5].Frames[0].useTransparency = true;

	SpriteList[1].Animations[5].Frames[1].BitmapName = "White Alien Back 4.bmp";
	SpriteList[1].Animations[5].Frames[1].TranslateX = 0.000;
	SpriteList[1].Animations[5].Frames[1].TranslateY = 0.000;
	SpriteList[1].Animations[5].Frames[1].Delay = 20;
	SpriteList[1].Animations[5].Frames[1].Width = 30;
	SpriteList[1].Animations[5].Frames[1].Height = 30;
	SpriteList[1].Animations[5].Frames[1].Transparency = RGB(255,255,255);
	SpriteList[1].Animations[5].Frames[1].hFlip = false;
	SpriteList[1].Animations[5].Frames[1].vFlip = false;
	SpriteList[1].Animations[5].Frames[1].zRotation = 0;
	SpriteList[1].Animations[5].Frames[1].HotSpot[0].x = 15;
	SpriteList[1].Animations[5].Frames[1].HotSpot[0].y = 15;
	::SetRect( &SpriteList[1].Animations[5].Frames[1].BBox, 0, 0, 29,29);
	SpriteList[1].Animations[5].Frames[1].centerX = 15;
	SpriteList[1].Animations[5].Frames[1].centerY = 15;
	SpriteList[1].Animations[5].Frames[1].PegRegistered = false;
	SpriteList[1].Animations[5].Frames[1].useTransparency = true;


	SpriteList[1].Animations[6].TotalFrames=2;
	SpriteList[1].Animations[6].ConnectTo = 0;
	SpriteList[1].Animations[6].Frames = new FrameElem[2];

	SpriteList[1].Animations[6].Frames[0].BitmapName = "White Alien Right 2.bmp";
	SpriteList[1].Animations[6].Frames[0].TranslateX = 0.000;
	SpriteList[1].Animations[6].Frames[0].TranslateY = 0.000;
	SpriteList[1].Animations[6].Frames[0].Delay = 20;
	SpriteList[1].Animations[6].Frames[0].Width = 30;
	SpriteList[1].Animations[6].Frames[0].Height = 30;
	SpriteList[1].Animations[6].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[1].Animations[6].Frames[0].hFlip = false;
	SpriteList[1].Animations[6].Frames[0].vFlip = false;
	SpriteList[1].Animations[6].Frames[0].zRotation = 0;
	SpriteList[1].Animations[6].Frames[0].HotSpot[0].x = 15;
	SpriteList[1].Animations[6].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[1].Animations[6].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[1].Animations[6].Frames[0].centerX = 15;
	SpriteList[1].Animations[6].Frames[0].centerY = 15;
	SpriteList[1].Animations[6].Frames[0].PegRegistered = false;
	SpriteList[1].Animations[6].Frames[0].useTransparency = true;

	SpriteList[1].Animations[6].Frames[1].BitmapName = "White Alien Right 4.bmp";
	SpriteList[1].Animations[6].Frames[1].TranslateX = 0.000;
	SpriteList[1].Animations[6].Frames[1].TranslateY = 0.000;
	SpriteList[1].Animations[6].Frames[1].Delay = 20;
	SpriteList[1].Animations[6].Frames[1].Width = 30;
	SpriteList[1].Animations[6].Frames[1].Height = 30;
	SpriteList[1].Animations[6].Frames[1].Transparency = RGB(255,255,255);
	SpriteList[1].Animations[6].Frames[1].hFlip = false;
	SpriteList[1].Animations[6].Frames[1].vFlip = false;
	SpriteList[1].Animations[6].Frames[1].zRotation = 0;
	SpriteList[1].Animations[6].Frames[1].HotSpot[0].x = 15;
	SpriteList[1].Animations[6].Frames[1].HotSpot[0].y = 15;
	::SetRect( &SpriteList[1].Animations[6].Frames[1].BBox, 0, 0, 29,29);
	SpriteList[1].Animations[6].Frames[1].centerX = 15;
	SpriteList[1].Animations[6].Frames[1].centerY = 15;
	SpriteList[1].Animations[6].Frames[1].PegRegistered = false;
	SpriteList[1].Animations[6].Frames[1].useTransparency = true;


	SpriteList[1].Animations[7].TotalFrames=2;
	SpriteList[1].Animations[7].ConnectTo = 0;
	SpriteList[1].Animations[7].Frames = new FrameElem[2];

	SpriteList[1].Animations[7].Frames[0].BitmapName = "White Alien Left 2.bmp";
	SpriteList[1].Animations[7].Frames[0].TranslateX = 0.000;
	SpriteList[1].Animations[7].Frames[0].TranslateY = 0.000;
	SpriteList[1].Animations[7].Frames[0].Delay = 20;
	SpriteList[1].Animations[7].Frames[0].Width = 30;
	SpriteList[1].Animations[7].Frames[0].Height = 30;
	SpriteList[1].Animations[7].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[1].Animations[7].Frames[0].hFlip = false;
	SpriteList[1].Animations[7].Frames[0].vFlip = false;
	SpriteList[1].Animations[7].Frames[0].zRotation = 0;
	SpriteList[1].Animations[7].Frames[0].HotSpot[0].x = 15;
	SpriteList[1].Animations[7].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[1].Animations[7].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[1].Animations[7].Frames[0].centerX = 15;
	SpriteList[1].Animations[7].Frames[0].centerY = 15;
	SpriteList[1].Animations[7].Frames[0].PegRegistered = false;
	SpriteList[1].Animations[7].Frames[0].useTransparency = true;

	SpriteList[1].Animations[7].Frames[1].BitmapName = "White Alien Left 4.bmp";
	SpriteList[1].Animations[7].Frames[1].TranslateX = 0.000;
	SpriteList[1].Animations[7].Frames[1].TranslateY = 0.000;
	SpriteList[1].Animations[7].Frames[1].Delay = 20;
	SpriteList[1].Animations[7].Frames[1].Width = 30;
	SpriteList[1].Animations[7].Frames[1].Height = 30;
	SpriteList[1].Animations[7].Frames[1].Transparency = RGB(255,255,255);
	SpriteList[1].Animations[7].Frames[1].hFlip = false;
	SpriteList[1].Animations[7].Frames[1].vFlip = false;
	SpriteList[1].Animations[7].Frames[1].zRotation = 0;
	SpriteList[1].Animations[7].Frames[1].HotSpot[0].x = 15;
	SpriteList[1].Animations[7].Frames[1].HotSpot[0].y = 15;
	::SetRect( &SpriteList[1].Animations[7].Frames[1].BBox, 0, 0, 29,29);
	SpriteList[1].Animations[7].Frames[1].centerX = 15;
	SpriteList[1].Animations[7].Frames[1].centerY = 15;
	SpriteList[1].Animations[7].Frames[1].PegRegistered = false;
	SpriteList[1].Animations[7].Frames[1].useTransparency = true;



}

void LoadAnimation_Level_3(GameNode* gn)
{
	SpriteList[4].TotalAnimations = 7;
	SpriteList[4].Animations = new AnimationElem[7];

	SpriteList[4].Animations[0].TotalFrames=1;
	SpriteList[4].Animations[0].ConnectTo = 0;
	SpriteList[4].Animations[0].Frames = new FrameElem[1];

	SpriteList[4].Animations[0].Frames[0].BitmapName = "Wall.bmp";
	SpriteList[4].Animations[0].Frames[0].TranslateX = 0.000;
	SpriteList[4].Animations[0].Frames[0].TranslateY = 0.000;
	SpriteList[4].Animations[0].Frames[0].Delay = 1;
	SpriteList[4].Animations[0].Frames[0].Width = 30;
	SpriteList[4].Animations[0].Frames[0].Height = 30;
	SpriteList[4].Animations[0].Frames[0].Transparency = RGB(240,240,240);
	SpriteList[4].Animations[0].Frames[0].hFlip = false;
	SpriteList[4].Animations[0].Frames[0].vFlip = false;
	SpriteList[4].Animations[0].Frames[0].zRotation = 0;
	SpriteList[4].Animations[0].Frames[0].HotSpot[0].x = 15;
	SpriteList[4].Animations[0].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[4].Animations[0].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[4].Animations[0].Frames[0].centerX = 15;
	SpriteList[4].Animations[0].Frames[0].centerY = 15;
	SpriteList[4].Animations[0].Frames[0].PegRegistered = false;
	SpriteList[4].Animations[0].Frames[0].useTransparency = false;


	SpriteList[4].Animations[1].TotalFrames=3;
	SpriteList[4].Animations[1].ConnectTo = 0;
	SpriteList[4].Animations[1].Frames = new FrameElem[3];

	SpriteList[4].Animations[1].Frames[0].BitmapName = "Server 1.bmp";
	SpriteList[4].Animations[1].Frames[0].TranslateX = 0.000;
	SpriteList[4].Animations[1].Frames[0].TranslateY = 0.000;
	SpriteList[4].Animations[1].Frames[0].Delay = 21;
	SpriteList[4].Animations[1].Frames[0].Width = 30;
	SpriteList[4].Animations[1].Frames[0].Height = 30;
	SpriteList[4].Animations[1].Frames[0].Transparency = RGB(240,240,240);
	SpriteList[4].Animations[1].Frames[0].hFlip = false;
	SpriteList[4].Animations[1].Frames[0].vFlip = false;
	SpriteList[4].Animations[1].Frames[0].zRotation = 0;
	SpriteList[4].Animations[1].Frames[0].HotSpot[0].x = 15;
	SpriteList[4].Animations[1].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[4].Animations[1].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[4].Animations[1].Frames[0].centerX = 15;
	SpriteList[4].Animations[1].Frames[0].centerY = 15;
	SpriteList[4].Animations[1].Frames[0].PegRegistered = false;
	SpriteList[4].Animations[1].Frames[0].useTransparency = false;

	SpriteList[4].Animations[1].Frames[1].BitmapName = "Server 2.bmp";
	SpriteList[4].Animations[1].Frames[1].TranslateX = 0.000;
	SpriteList[4].Animations[1].Frames[1].TranslateY = 0.000;
	SpriteList[4].Animations[1].Frames[1].Delay = 21;
	SpriteList[4].Animations[1].Frames[1].Width = 30;
	SpriteList[4].Animations[1].Frames[1].Height = 30;
	SpriteList[4].Animations[1].Frames[1].Transparency = RGB(240,240,240);
	SpriteList[4].Animations[1].Frames[1].hFlip = false;
	SpriteList[4].Animations[1].Frames[1].vFlip = false;
	SpriteList[4].Animations[1].Frames[1].zRotation = 0;
	SpriteList[4].Animations[1].Frames[1].HotSpot[0].x = 15;
	SpriteList[4].Animations[1].Frames[1].HotSpot[0].y = 15;
	::SetRect( &SpriteList[4].Animations[1].Frames[1].BBox, 0, 0, 29,29);
	SpriteList[4].Animations[1].Frames[1].centerX = 15;
	SpriteList[4].Animations[1].Frames[1].centerY = 15;
	SpriteList[4].Animations[1].Frames[1].PegRegistered = false;
	SpriteList[4].Animations[1].Frames[1].useTransparency = false;

	SpriteList[4].Animations[1].Frames[2].BitmapName = "Server 3.bmp";
	SpriteList[4].Animations[1].Frames[2].TranslateX = 0.000;
	SpriteList[4].Animations[1].Frames[2].TranslateY = 0.000;
	SpriteList[4].Animations[1].Frames[2].Delay = 21;
	SpriteList[4].Animations[1].Frames[2].Width = 30;
	SpriteList[4].Animations[1].Frames[2].Height = 30;
	SpriteList[4].Animations[1].Frames[2].Transparency = RGB(240,240,240);
	SpriteList[4].Animations[1].Frames[2].hFlip = false;
	SpriteList[4].Animations[1].Frames[2].vFlip = false;
	SpriteList[4].Animations[1].Frames[2].zRotation = 0;
	SpriteList[4].Animations[1].Frames[2].HotSpot[0].x = 15;
	SpriteList[4].Animations[1].Frames[2].HotSpot[0].y = 15;
	::SetRect( &SpriteList[4].Animations[1].Frames[2].BBox, 0, 0, 29,29);
	SpriteList[4].Animations[1].Frames[2].centerX = 15;
	SpriteList[4].Animations[1].Frames[2].centerY = 15;
	SpriteList[4].Animations[1].Frames[2].PegRegistered = false;
	SpriteList[4].Animations[1].Frames[2].useTransparency = false;


	SpriteList[4].Animations[2].TotalFrames=1;
	SpriteList[4].Animations[2].ConnectTo = 0;
	SpriteList[4].Animations[2].Frames = new FrameElem[1];

	SpriteList[4].Animations[2].Frames[0].BitmapName = "Door 1.bmp";
	SpriteList[4].Animations[2].Frames[0].TranslateX = 0.000;
	SpriteList[4].Animations[2].Frames[0].TranslateY = 0.000;
	SpriteList[4].Animations[2].Frames[0].Delay = 1;
	SpriteList[4].Animations[2].Frames[0].Width = 30;
	SpriteList[4].Animations[2].Frames[0].Height = 30;
	SpriteList[4].Animations[2].Frames[0].Transparency = RGB(240,240,240);
	SpriteList[4].Animations[2].Frames[0].hFlip = false;
	SpriteList[4].Animations[2].Frames[0].vFlip = false;
	SpriteList[4].Animations[2].Frames[0].zRotation = 0;
	SpriteList[4].Animations[2].Frames[0].HotSpot[0].x = 15;
	SpriteList[4].Animations[2].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[4].Animations[2].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[4].Animations[2].Frames[0].centerX = 15;
	SpriteList[4].Animations[2].Frames[0].centerY = 15;
	SpriteList[4].Animations[2].Frames[0].PegRegistered = false;
	SpriteList[4].Animations[2].Frames[0].useTransparency = false;


	SpriteList[4].Animations[3].TotalFrames=1;
	SpriteList[4].Animations[3].ConnectTo = 0;
	SpriteList[4].Animations[3].Frames = new FrameElem[1];

	SpriteList[4].Animations[3].Frames[0].BitmapName = "Door 2.bmp";
	SpriteList[4].Animations[3].Frames[0].TranslateX = 0.000;
	SpriteList[4].Animations[3].Frames[0].TranslateY = 0.000;
	SpriteList[4].Animations[3].Frames[0].Delay = 1;
	SpriteList[4].Animations[3].Frames[0].Width = 30;
	SpriteList[4].Animations[3].Frames[0].Height = 30;
	SpriteList[4].Animations[3].Frames[0].Transparency = RGB(240,240,240);
	SpriteList[4].Animations[3].Frames[0].hFlip = false;
	SpriteList[4].Animations[3].Frames[0].vFlip = false;
	SpriteList[4].Animations[3].Frames[0].zRotation = 0;
	SpriteList[4].Animations[3].Frames[0].HotSpot[0].x = 15;
	SpriteList[4].Animations[3].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[4].Animations[3].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[4].Animations[3].Frames[0].centerX = 15;
	SpriteList[4].Animations[3].Frames[0].centerY = 15;
	SpriteList[4].Animations[3].Frames[0].PegRegistered = false;
	SpriteList[4].Animations[3].Frames[0].useTransparency = false;


	SpriteList[4].Animations[4].TotalFrames=1;
	SpriteList[4].Animations[4].ConnectTo = 0;
	SpriteList[4].Animations[4].Frames = new FrameElem[1];

	SpriteList[4].Animations[4].Frames[0].BitmapName = "Bed 1.bmp";
	SpriteList[4].Animations[4].Frames[0].TranslateX = 0.000;
	SpriteList[4].Animations[4].Frames[0].TranslateY = 0.000;
	SpriteList[4].Animations[4].Frames[0].Delay = 1;
	SpriteList[4].Animations[4].Frames[0].Width = 30;
	SpriteList[4].Animations[4].Frames[0].Height = 30;
	SpriteList[4].Animations[4].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[4].Animations[4].Frames[0].hFlip = false;
	SpriteList[4].Animations[4].Frames[0].vFlip = false;
	SpriteList[4].Animations[4].Frames[0].zRotation = 0;
	SpriteList[4].Animations[4].Frames[0].HotSpot[0].x = 15;
	SpriteList[4].Animations[4].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[4].Animations[4].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[4].Animations[4].Frames[0].centerX = 15;
	SpriteList[4].Animations[4].Frames[0].centerY = 15;
	SpriteList[4].Animations[4].Frames[0].PegRegistered = false;
	SpriteList[4].Animations[4].Frames[0].useTransparency = true;


	SpriteList[4].Animations[5].TotalFrames=1;
	SpriteList[4].Animations[5].ConnectTo = 0;
	SpriteList[4].Animations[5].Frames = new FrameElem[1];

	SpriteList[4].Animations[5].Frames[0].BitmapName = "Bed 2.bmp";
	SpriteList[4].Animations[5].Frames[0].TranslateX = 0.000;
	SpriteList[4].Animations[5].Frames[0].TranslateY = 0.000;
	SpriteList[4].Animations[5].Frames[0].Delay = 1;
	SpriteList[4].Animations[5].Frames[0].Width = 30;
	SpriteList[4].Animations[5].Frames[0].Height = 30;
	SpriteList[4].Animations[5].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[4].Animations[5].Frames[0].hFlip = false;
	SpriteList[4].Animations[5].Frames[0].vFlip = false;
	SpriteList[4].Animations[5].Frames[0].zRotation = 0;
	SpriteList[4].Animations[5].Frames[0].HotSpot[0].x = 15;
	SpriteList[4].Animations[5].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[4].Animations[5].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[4].Animations[5].Frames[0].centerX = 15;
	SpriteList[4].Animations[5].Frames[0].centerY = 15;
	SpriteList[4].Animations[5].Frames[0].PegRegistered = false;
	SpriteList[4].Animations[5].Frames[0].useTransparency = true;


	SpriteList[4].Animations[6].TotalFrames=1;
	SpriteList[4].Animations[6].ConnectTo = 0;
	SpriteList[4].Animations[6].Frames = new FrameElem[1];

	SpriteList[4].Animations[6].Frames[0].BitmapName = "Bed 3.bmp";
	SpriteList[4].Animations[6].Frames[0].TranslateX = 0.000;
	SpriteList[4].Animations[6].Frames[0].TranslateY = 0.000;
	SpriteList[4].Animations[6].Frames[0].Delay = 1;
	SpriteList[4].Animations[6].Frames[0].Width = 30;
	SpriteList[4].Animations[6].Frames[0].Height = 30;
	SpriteList[4].Animations[6].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[4].Animations[6].Frames[0].hFlip = false;
	SpriteList[4].Animations[6].Frames[0].vFlip = false;
	SpriteList[4].Animations[6].Frames[0].zRotation = 0;
	SpriteList[4].Animations[6].Frames[0].HotSpot[0].x = 15;
	SpriteList[4].Animations[6].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[4].Animations[6].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[4].Animations[6].Frames[0].centerX = 15;
	SpriteList[4].Animations[6].Frames[0].centerY = 15;
	SpriteList[4].Animations[6].Frames[0].PegRegistered = false;
	SpriteList[4].Animations[6].Frames[0].useTransparency = true;



	SpriteList[0].TotalAnimations = 8;
	SpriteList[0].Animations = new AnimationElem[8];

	SpriteList[0].Animations[0].TotalFrames=4;
	SpriteList[0].Animations[0].ConnectTo = 0;
	SpriteList[0].Animations[0].Frames = new FrameElem[4];

	SpriteList[0].Animations[0].Frames[0].BitmapName = "SpaceMan Left 1.bmp";
	SpriteList[0].Animations[0].Frames[0].TranslateX = 0.000;
	SpriteList[0].Animations[0].Frames[0].TranslateY = 0.000;
	SpriteList[0].Animations[0].Frames[0].Delay = 7;
	SpriteList[0].Animations[0].Frames[0].Width = 30;
	SpriteList[0].Animations[0].Frames[0].Height = 30;
	SpriteList[0].Animations[0].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[0].Animations[0].Frames[0].hFlip = false;
	SpriteList[0].Animations[0].Frames[0].vFlip = false;
	SpriteList[0].Animations[0].Frames[0].zRotation = 0;
	SpriteList[0].Animations[0].Frames[0].HotSpot[0].x = 15;
	SpriteList[0].Animations[0].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[0].Animations[0].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[0].Animations[0].Frames[0].centerX = 15;
	SpriteList[0].Animations[0].Frames[0].centerY = 15;
	SpriteList[0].Animations[0].Frames[0].PegRegistered = false;
	SpriteList[0].Animations[0].Frames[0].useTransparency = true;

	SpriteList[0].Animations[0].Frames[1].BitmapName = "SpaceMan Left 2.bmp";
	SpriteList[0].Animations[0].Frames[1].TranslateX = 0.000;
	SpriteList[0].Animations[0].Frames[1].TranslateY = 0.000;
	SpriteList[0].Animations[0].Frames[1].Delay = 7;
	SpriteList[0].Animations[0].Frames[1].Width = 30;
	SpriteList[0].Animations[0].Frames[1].Height = 30;
	SpriteList[0].Animations[0].Frames[1].Transparency = RGB(255,255,255);
	SpriteList[0].Animations[0].Frames[1].hFlip = false;
	SpriteList[0].Animations[0].Frames[1].vFlip = false;
	SpriteList[0].Animations[0].Frames[1].zRotation = 0;
	SpriteList[0].Animations[0].Frames[1].HotSpot[0].x = 15;
	SpriteList[0].Animations[0].Frames[1].HotSpot[0].y = 15;
	::SetRect( &SpriteList[0].Animations[0].Frames[1].BBox, 0, 0, 29,29);
	SpriteList[0].Animations[0].Frames[1].centerX = 15;
	SpriteList[0].Animations[0].Frames[1].centerY = 15;
	SpriteList[0].Animations[0].Frames[1].PegRegistered = false;
	SpriteList[0].Animations[0].Frames[1].useTransparency = true;

	SpriteList[0].Animations[0].Frames[2].BitmapName = "SpaceMan Left 3.bmp";
	SpriteList[0].Animations[0].Frames[2].TranslateX = 0.000;
	SpriteList[0].Animations[0].Frames[2].TranslateY = 0.000;
	SpriteList[0].Animations[0].Frames[2].Delay = 7;
	SpriteList[0].Animations[0].Frames[2].Width = 30;
	SpriteList[0].Animations[0].Frames[2].Height = 30;
	SpriteList[0].Animations[0].Frames[2].Transparency = RGB(255,255,255);
	SpriteList[0].Animations[0].Frames[2].hFlip = false;
	SpriteList[0].Animations[0].Frames[2].vFlip = false;
	SpriteList[0].Animations[0].Frames[2].zRotation = 0;
	SpriteList[0].Animations[0].Frames[2].HotSpot[0].x = 15;
	SpriteList[0].Animations[0].Frames[2].HotSpot[0].y = 15;
	::SetRect( &SpriteList[0].Animations[0].Frames[2].BBox, 0, 0, 29,29);
	SpriteList[0].Animations[0].Frames[2].centerX = 15;
	SpriteList[0].Animations[0].Frames[2].centerY = 15;
	SpriteList[0].Animations[0].Frames[2].PegRegistered = false;
	SpriteList[0].Animations[0].Frames[2].useTransparency = true;

	SpriteList[0].Animations[0].Frames[3].BitmapName = "SpaceMan Left 2.bmp";
	SpriteList[0].Animations[0].Frames[3].TranslateX = 0.000;
	SpriteList[0].Animations[0].Frames[3].TranslateY = 0.000;
	SpriteList[0].Animations[0].Frames[3].Delay = 7;
	SpriteList[0].Animations[0].Frames[3].Width = 30;
	SpriteList[0].Animations[0].Frames[3].Height = 30;
	SpriteList[0].Animations[0].Frames[3].Transparency = RGB(255,255,255);
	SpriteList[0].Animations[0].Frames[3].hFlip = false;
	SpriteList[0].Animations[0].Frames[3].vFlip = false;
	SpriteList[0].Animations[0].Frames[3].zRotation = 0;
	SpriteList[0].Animations[0].Frames[3].HotSpot[0].x = 15;
	SpriteList[0].Animations[0].Frames[3].HotSpot[0].y = 15;
	::SetRect( &SpriteList[0].Animations[0].Frames[3].BBox, 0, 0, 29,29);
	SpriteList[0].Animations[0].Frames[3].centerX = 15;
	SpriteList[0].Animations[0].Frames[3].centerY = 15;
	SpriteList[0].Animations[0].Frames[3].PegRegistered = false;
	SpriteList[0].Animations[0].Frames[3].useTransparency = true;


	SpriteList[0].Animations[1].TotalFrames=4;
	SpriteList[0].Animations[1].ConnectTo = 0;
	SpriteList[0].Animations[1].Frames = new FrameElem[4];

	SpriteList[0].Animations[1].Frames[0].BitmapName = "SpaceMan Right 1.bmp";
	SpriteList[0].Animations[1].Frames[0].TranslateX = 0.000;
	SpriteList[0].Animations[1].Frames[0].TranslateY = 0.000;
	SpriteList[0].Animations[1].Frames[0].Delay = 7;
	SpriteList[0].Animations[1].Frames[0].Width = 30;
	SpriteList[0].Animations[1].Frames[0].Height = 30;
	SpriteList[0].Animations[1].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[0].Animations[1].Frames[0].hFlip = false;
	SpriteList[0].Animations[1].Frames[0].vFlip = false;
	SpriteList[0].Animations[1].Frames[0].zRotation = 0;
	SpriteList[0].Animations[1].Frames[0].HotSpot[0].x = 15;
	SpriteList[0].Animations[1].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[0].Animations[1].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[0].Animations[1].Frames[0].centerX = 15;
	SpriteList[0].Animations[1].Frames[0].centerY = 15;
	SpriteList[0].Animations[1].Frames[0].PegRegistered = false;
	SpriteList[0].Animations[1].Frames[0].useTransparency = true;

	SpriteList[0].Animations[1].Frames[1].BitmapName = "SpaceMan Right 2.bmp";
	SpriteList[0].Animations[1].Frames[1].TranslateX = 0.000;
	SpriteList[0].Animations[1].Frames[1].TranslateY = 0.000;
	SpriteList[0].Animations[1].Frames[1].Delay = 7;
	SpriteList[0].Animations[1].Frames[1].Width = 30;
	SpriteList[0].Animations[1].Frames[1].Height = 30;
	SpriteList[0].Animations[1].Frames[1].Transparency = RGB(255,255,255);
	SpriteList[0].Animations[1].Frames[1].hFlip = false;
	SpriteList[0].Animations[1].Frames[1].vFlip = false;
	SpriteList[0].Animations[1].Frames[1].zRotation = 0;
	SpriteList[0].Animations[1].Frames[1].HotSpot[0].x = 15;
	SpriteList[0].Animations[1].Frames[1].HotSpot[0].y = 15;
	::SetRect( &SpriteList[0].Animations[1].Frames[1].BBox, 0, 0, 29,29);
	SpriteList[0].Animations[1].Frames[1].centerX = 15;
	SpriteList[0].Animations[1].Frames[1].centerY = 15;
	SpriteList[0].Animations[1].Frames[1].PegRegistered = false;
	SpriteList[0].Animations[1].Frames[1].useTransparency = true;

	SpriteList[0].Animations[1].Frames[2].BitmapName = "SpaceMan Right 3.bmp";
	SpriteList[0].Animations[1].Frames[2].TranslateX = 0.000;
	SpriteList[0].Animations[1].Frames[2].TranslateY = 0.000;
	SpriteList[0].Animations[1].Frames[2].Delay = 7;
	SpriteList[0].Animations[1].Frames[2].Width = 30;
	SpriteList[0].Animations[1].Frames[2].Height = 30;
	SpriteList[0].Animations[1].Frames[2].Transparency = RGB(255,255,255);
	SpriteList[0].Animations[1].Frames[2].hFlip = false;
	SpriteList[0].Animations[1].Frames[2].vFlip = false;
	SpriteList[0].Animations[1].Frames[2].zRotation = 0;
	SpriteList[0].Animations[1].Frames[2].HotSpot[0].x = 15;
	SpriteList[0].Animations[1].Frames[2].HotSpot[0].y = 15;
	::SetRect( &SpriteList[0].Animations[1].Frames[2].BBox, 0, 0, 29,29);
	SpriteList[0].Animations[1].Frames[2].centerX = 15;
	SpriteList[0].Animations[1].Frames[2].centerY = 15;
	SpriteList[0].Animations[1].Frames[2].PegRegistered = false;
	SpriteList[0].Animations[1].Frames[2].useTransparency = true;

	SpriteList[0].Animations[1].Frames[3].BitmapName = "SpaceMan Right 2.bmp";
	SpriteList[0].Animations[1].Frames[3].TranslateX = 0.000;
	SpriteList[0].Animations[1].Frames[3].TranslateY = 0.000;
	SpriteList[0].Animations[1].Frames[3].Delay = 7;
	SpriteList[0].Animations[1].Frames[3].Width = 30;
	SpriteList[0].Animations[1].Frames[3].Height = 30;
	SpriteList[0].Animations[1].Frames[3].Transparency = RGB(255,255,255);
	SpriteList[0].Animations[1].Frames[3].hFlip = false;
	SpriteList[0].Animations[1].Frames[3].vFlip = false;
	SpriteList[0].Animations[1].Frames[3].zRotation = 0;
	SpriteList[0].Animations[1].Frames[3].HotSpot[0].x = 15;
	SpriteList[0].Animations[1].Frames[3].HotSpot[0].y = 15;
	::SetRect( &SpriteList[0].Animations[1].Frames[3].BBox, 0, 0, 29,29);
	SpriteList[0].Animations[1].Frames[3].centerX = 15;
	SpriteList[0].Animations[1].Frames[3].centerY = 15;
	SpriteList[0].Animations[1].Frames[3].PegRegistered = false;
	SpriteList[0].Animations[1].Frames[3].useTransparency = true;


	SpriteList[0].Animations[2].TotalFrames=4;
	SpriteList[0].Animations[2].ConnectTo = 0;
	SpriteList[0].Animations[2].Frames = new FrameElem[4];

	SpriteList[0].Animations[2].Frames[0].BitmapName = "SpaceMan Back 1.bmp";
	SpriteList[0].Animations[2].Frames[0].TranslateX = 0.000;
	SpriteList[0].Animations[2].Frames[0].TranslateY = 0.000;
	SpriteList[0].Animations[2].Frames[0].Delay = 7;
	SpriteList[0].Animations[2].Frames[0].Width = 30;
	SpriteList[0].Animations[2].Frames[0].Height = 30;
	SpriteList[0].Animations[2].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[0].Animations[2].Frames[0].hFlip = false;
	SpriteList[0].Animations[2].Frames[0].vFlip = false;
	SpriteList[0].Animations[2].Frames[0].zRotation = 0;
	SpriteList[0].Animations[2].Frames[0].HotSpot[0].x = 15;
	SpriteList[0].Animations[2].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[0].Animations[2].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[0].Animations[2].Frames[0].centerX = 15;
	SpriteList[0].Animations[2].Frames[0].centerY = 15;
	SpriteList[0].Animations[2].Frames[0].PegRegistered = false;
	SpriteList[0].Animations[2].Frames[0].useTransparency = true;

	SpriteList[0].Animations[2].Frames[1].BitmapName = "SpaceMan Back 2.bmp";
	SpriteList[0].Animations[2].Frames[1].TranslateX = 0.000;
	SpriteList[0].Animations[2].Frames[1].TranslateY = 0.000;
	SpriteList[0].Animations[2].Frames[1].Delay = 7;
	SpriteList[0].Animations[2].Frames[1].Width = 30;
	SpriteList[0].Animations[2].Frames[1].Height = 30;
	SpriteList[0].Animations[2].Frames[1].Transparency = RGB(255,255,255);
	SpriteList[0].Animations[2].Frames[1].hFlip = false;
	SpriteList[0].Animations[2].Frames[1].vFlip = false;
	SpriteList[0].Animations[2].Frames[1].zRotation = 0;
	SpriteList[0].Animations[2].Frames[1].HotSpot[0].x = 15;
	SpriteList[0].Animations[2].Frames[1].HotSpot[0].y = 15;
	::SetRect( &SpriteList[0].Animations[2].Frames[1].BBox, 0, 0, 29,29);
	SpriteList[0].Animations[2].Frames[1].centerX = 15;
	SpriteList[0].Animations[2].Frames[1].centerY = 15;
	SpriteList[0].Animations[2].Frames[1].PegRegistered = false;
	SpriteList[0].Animations[2].Frames[1].useTransparency = true;

	SpriteList[0].Animations[2].Frames[2].BitmapName = "SpaceMan Back 3.bmp";
	SpriteList[0].Animations[2].Frames[2].TranslateX = 0.000;
	SpriteList[0].Animations[2].Frames[2].TranslateY = 0.000;
	SpriteList[0].Animations[2].Frames[2].Delay = 7;
	SpriteList[0].Animations[2].Frames[2].Width = 30;
	SpriteList[0].Animations[2].Frames[2].Height = 30;
	SpriteList[0].Animations[2].Frames[2].Transparency = RGB(255,255,255);
	SpriteList[0].Animations[2].Frames[2].hFlip = false;
	SpriteList[0].Animations[2].Frames[2].vFlip = false;
	SpriteList[0].Animations[2].Frames[2].zRotation = 0;
	SpriteList[0].Animations[2].Frames[2].HotSpot[0].x = 15;
	SpriteList[0].Animations[2].Frames[2].HotSpot[0].y = 15;
	::SetRect( &SpriteList[0].Animations[2].Frames[2].BBox, 0, 0, 29,29);
	SpriteList[0].Animations[2].Frames[2].centerX = 15;
	SpriteList[0].Animations[2].Frames[2].centerY = 15;
	SpriteList[0].Animations[2].Frames[2].PegRegistered = false;
	SpriteList[0].Animations[2].Frames[2].useTransparency = true;

	SpriteList[0].Animations[2].Frames[3].BitmapName = "SpaceMan Back 2.bmp";
	SpriteList[0].Animations[2].Frames[3].TranslateX = 0.000;
	SpriteList[0].Animations[2].Frames[3].TranslateY = 0.000;
	SpriteList[0].Animations[2].Frames[3].Delay = 7;
	SpriteList[0].Animations[2].Frames[3].Width = 30;
	SpriteList[0].Animations[2].Frames[3].Height = 30;
	SpriteList[0].Animations[2].Frames[3].Transparency = RGB(255,255,255);
	SpriteList[0].Animations[2].Frames[3].hFlip = false;
	SpriteList[0].Animations[2].Frames[3].vFlip = false;
	SpriteList[0].Animations[2].Frames[3].zRotation = 0;
	SpriteList[0].Animations[2].Frames[3].HotSpot[0].x = 15;
	SpriteList[0].Animations[2].Frames[3].HotSpot[0].y = 15;
	::SetRect( &SpriteList[0].Animations[2].Frames[3].BBox, 0, 0, 29,29);
	SpriteList[0].Animations[2].Frames[3].centerX = 15;
	SpriteList[0].Animations[2].Frames[3].centerY = 15;
	SpriteList[0].Animations[2].Frames[3].PegRegistered = false;
	SpriteList[0].Animations[2].Frames[3].useTransparency = true;


	SpriteList[0].Animations[3].TotalFrames=4;
	SpriteList[0].Animations[3].ConnectTo = 0;
	SpriteList[0].Animations[3].Frames = new FrameElem[4];

	SpriteList[0].Animations[3].Frames[0].BitmapName = "SpaceMan 1.bmp";
	SpriteList[0].Animations[3].Frames[0].TranslateX = 0.000;
	SpriteList[0].Animations[3].Frames[0].TranslateY = 0.000;
	SpriteList[0].Animations[3].Frames[0].Delay = 7;
	SpriteList[0].Animations[3].Frames[0].Width = 30;
	SpriteList[0].Animations[3].Frames[0].Height = 30;
	SpriteList[0].Animations[3].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[0].Animations[3].Frames[0].hFlip = false;
	SpriteList[0].Animations[3].Frames[0].vFlip = false;
	SpriteList[0].Animations[3].Frames[0].zRotation = 0;
	SpriteList[0].Animations[3].Frames[0].HotSpot[0].x = 15;
	SpriteList[0].Animations[3].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[0].Animations[3].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[0].Animations[3].Frames[0].centerX = 15;
	SpriteList[0].Animations[3].Frames[0].centerY = 15;
	SpriteList[0].Animations[3].Frames[0].PegRegistered = false;
	SpriteList[0].Animations[3].Frames[0].useTransparency = true;

	SpriteList[0].Animations[3].Frames[1].BitmapName = "SpaceMan 2.bmp";
	SpriteList[0].Animations[3].Frames[1].TranslateX = 0.000;
	SpriteList[0].Animations[3].Frames[1].TranslateY = 0.000;
	SpriteList[0].Animations[3].Frames[1].Delay = 7;
	SpriteList[0].Animations[3].Frames[1].Width = 30;
	SpriteList[0].Animations[3].Frames[1].Height = 30;
	SpriteList[0].Animations[3].Frames[1].Transparency = RGB(255,255,255);
	SpriteList[0].Animations[3].Frames[1].hFlip = false;
	SpriteList[0].Animations[3].Frames[1].vFlip = false;
	SpriteList[0].Animations[3].Frames[1].zRotation = 0;
	SpriteList[0].Animations[3].Frames[1].HotSpot[0].x = 15;
	SpriteList[0].Animations[3].Frames[1].HotSpot[0].y = 15;
	::SetRect( &SpriteList[0].Animations[3].Frames[1].BBox, 0, 0, 29,29);
	SpriteList[0].Animations[3].Frames[1].centerX = 15;
	SpriteList[0].Animations[3].Frames[1].centerY = 15;
	SpriteList[0].Animations[3].Frames[1].PegRegistered = false;
	SpriteList[0].Animations[3].Frames[1].useTransparency = true;

	SpriteList[0].Animations[3].Frames[2].BitmapName = "SpaceMan 3.bmp";
	SpriteList[0].Animations[3].Frames[2].TranslateX = 0.000;
	SpriteList[0].Animations[3].Frames[2].TranslateY = 0.000;
	SpriteList[0].Animations[3].Frames[2].Delay = 7;
	SpriteList[0].Animations[3].Frames[2].Width = 30;
	SpriteList[0].Animations[3].Frames[2].Height = 30;
	SpriteList[0].Animations[3].Frames[2].Transparency = RGB(255,255,255);
	SpriteList[0].Animations[3].Frames[2].hFlip = false;
	SpriteList[0].Animations[3].Frames[2].vFlip = false;
	SpriteList[0].Animations[3].Frames[2].zRotation = 0;
	SpriteList[0].Animations[3].Frames[2].HotSpot[0].x = 15;
	SpriteList[0].Animations[3].Frames[2].HotSpot[0].y = 15;
	::SetRect( &SpriteList[0].Animations[3].Frames[2].BBox, 0, 0, 29,29);
	SpriteList[0].Animations[3].Frames[2].centerX = 15;
	SpriteList[0].Animations[3].Frames[2].centerY = 15;
	SpriteList[0].Animations[3].Frames[2].PegRegistered = false;
	SpriteList[0].Animations[3].Frames[2].useTransparency = true;

	SpriteList[0].Animations[3].Frames[3].BitmapName = "SpaceMan 2.bmp";
	SpriteList[0].Animations[3].Frames[3].TranslateX = 0.000;
	SpriteList[0].Animations[3].Frames[3].TranslateY = 0.000;
	SpriteList[0].Animations[3].Frames[3].Delay = 7;
	SpriteList[0].Animations[3].Frames[3].Width = 30;
	SpriteList[0].Animations[3].Frames[3].Height = 30;
	SpriteList[0].Animations[3].Frames[3].Transparency = RGB(255,255,255);
	SpriteList[0].Animations[3].Frames[3].hFlip = false;
	SpriteList[0].Animations[3].Frames[3].vFlip = false;
	SpriteList[0].Animations[3].Frames[3].zRotation = 0;
	SpriteList[0].Animations[3].Frames[3].HotSpot[0].x = 15;
	SpriteList[0].Animations[3].Frames[3].HotSpot[0].y = 15;
	::SetRect( &SpriteList[0].Animations[3].Frames[3].BBox, 0, 0, 29,29);
	SpriteList[0].Animations[3].Frames[3].centerX = 15;
	SpriteList[0].Animations[3].Frames[3].centerY = 15;
	SpriteList[0].Animations[3].Frames[3].PegRegistered = false;
	SpriteList[0].Animations[3].Frames[3].useTransparency = true;


	SpriteList[0].Animations[4].TotalFrames=2;
	SpriteList[0].Animations[4].ConnectTo = 0;
	SpriteList[0].Animations[4].Frames = new FrameElem[2];

	SpriteList[0].Animations[4].Frames[0].BitmapName = "SpaceMan 2.bmp";
	SpriteList[0].Animations[4].Frames[0].TranslateX = 0.000;
	SpriteList[0].Animations[4].Frames[0].TranslateY = 0.000;
	SpriteList[0].Animations[4].Frames[0].Delay = 20;
	SpriteList[0].Animations[4].Frames[0].Width = 30;
	SpriteList[0].Animations[4].Frames[0].Height = 30;
	SpriteList[0].Animations[4].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[0].Animations[4].Frames[0].hFlip = false;
	SpriteList[0].Animations[4].Frames[0].vFlip = false;
	SpriteList[0].Animations[4].Frames[0].zRotation = 0;
	SpriteList[0].Animations[4].Frames[0].HotSpot[0].x = 15;
	SpriteList[0].Animations[4].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[0].Animations[4].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[0].Animations[4].Frames[0].centerX = 15;
	SpriteList[0].Animations[4].Frames[0].centerY = 15;
	SpriteList[0].Animations[4].Frames[0].PegRegistered = false;
	SpriteList[0].Animations[4].Frames[0].useTransparency = true;

	SpriteList[0].Animations[4].Frames[1].BitmapName = "SpaceMan 4.bmp";
	SpriteList[0].Animations[4].Frames[1].TranslateX = 0.000;
	SpriteList[0].Animations[4].Frames[1].TranslateY = 0.000;
	SpriteList[0].Animations[4].Frames[1].Delay = 20;
	SpriteList[0].Animations[4].Frames[1].Width = 30;
	SpriteList[0].Animations[4].Frames[1].Height = 30;
	SpriteList[0].Animations[4].Frames[1].Transparency = RGB(255,255,255);
	SpriteList[0].Animations[4].Frames[1].hFlip = false;
	SpriteList[0].Animations[4].Frames[1].vFlip = false;
	SpriteList[0].Animations[4].Frames[1].zRotation = 0;
	SpriteList[0].Animations[4].Frames[1].HotSpot[0].x = 15;
	SpriteList[0].Animations[4].Frames[1].HotSpot[0].y = 15;
	::SetRect( &SpriteList[0].Animations[4].Frames[1].BBox, 0, 0, 29,29);
	SpriteList[0].Animations[4].Frames[1].centerX = 15;
	SpriteList[0].Animations[4].Frames[1].centerY = 15;
	SpriteList[0].Animations[4].Frames[1].PegRegistered = false;
	SpriteList[0].Animations[4].Frames[1].useTransparency = true;


	SpriteList[0].Animations[5].TotalFrames=2;
	SpriteList[0].Animations[5].ConnectTo = 0;
	SpriteList[0].Animations[5].Frames = new FrameElem[2];

	SpriteList[0].Animations[5].Frames[0].BitmapName = "SpaceMan Back 2.bmp";
	SpriteList[0].Animations[5].Frames[0].TranslateX = 0.000;
	SpriteList[0].Animations[5].Frames[0].TranslateY = 0.000;
	SpriteList[0].Animations[5].Frames[0].Delay = 30;
	SpriteList[0].Animations[5].Frames[0].Width = 30;
	SpriteList[0].Animations[5].Frames[0].Height = 30;
	SpriteList[0].Animations[5].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[0].Animations[5].Frames[0].hFlip = false;
	SpriteList[0].Animations[5].Frames[0].vFlip = false;
	SpriteList[0].Animations[5].Frames[0].zRotation = 0;
	SpriteList[0].Animations[5].Frames[0].HotSpot[0].x = 15;
	SpriteList[0].Animations[5].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[0].Animations[5].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[0].Animations[5].Frames[0].centerX = 15;
	SpriteList[0].Animations[5].Frames[0].centerY = 15;
	SpriteList[0].Animations[5].Frames[0].PegRegistered = false;
	SpriteList[0].Animations[5].Frames[0].useTransparency = true;

	SpriteList[0].Animations[5].Frames[1].BitmapName = "SpaceMan Back 4.bmp";
	SpriteList[0].Animations[5].Frames[1].TranslateX = 0.000;
	SpriteList[0].Animations[5].Frames[1].TranslateY = 0.000;
	SpriteList[0].Animations[5].Frames[1].Delay = 30;
	SpriteList[0].Animations[5].Frames[1].Width = 30;
	SpriteList[0].Animations[5].Frames[1].Height = 30;
	SpriteList[0].Animations[5].Frames[1].Transparency = RGB(255,255,255);
	SpriteList[0].Animations[5].Frames[1].hFlip = false;
	SpriteList[0].Animations[5].Frames[1].vFlip = false;
	SpriteList[0].Animations[5].Frames[1].zRotation = 0;
	SpriteList[0].Animations[5].Frames[1].HotSpot[0].x = 15;
	SpriteList[0].Animations[5].Frames[1].HotSpot[0].y = 15;
	::SetRect( &SpriteList[0].Animations[5].Frames[1].BBox, 0, 0, 29,29);
	SpriteList[0].Animations[5].Frames[1].centerX = 15;
	SpriteList[0].Animations[5].Frames[1].centerY = 15;
	SpriteList[0].Animations[5].Frames[1].PegRegistered = false;
	SpriteList[0].Animations[5].Frames[1].useTransparency = true;


	SpriteList[0].Animations[6].TotalFrames=2;
	SpriteList[0].Animations[6].ConnectTo = 0;
	SpriteList[0].Animations[6].Frames = new FrameElem[2];

	SpriteList[0].Animations[6].Frames[0].BitmapName = "SpaceMan Right 2.bmp";
	SpriteList[0].Animations[6].Frames[0].TranslateX = 0.000;
	SpriteList[0].Animations[6].Frames[0].TranslateY = 0.000;
	SpriteList[0].Animations[6].Frames[0].Delay = 20;
	SpriteList[0].Animations[6].Frames[0].Width = 30;
	SpriteList[0].Animations[6].Frames[0].Height = 30;
	SpriteList[0].Animations[6].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[0].Animations[6].Frames[0].hFlip = false;
	SpriteList[0].Animations[6].Frames[0].vFlip = false;
	SpriteList[0].Animations[6].Frames[0].zRotation = 0;
	SpriteList[0].Animations[6].Frames[0].HotSpot[0].x = 15;
	SpriteList[0].Animations[6].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[0].Animations[6].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[0].Animations[6].Frames[0].centerX = 15;
	SpriteList[0].Animations[6].Frames[0].centerY = 15;
	SpriteList[0].Animations[6].Frames[0].PegRegistered = false;
	SpriteList[0].Animations[6].Frames[0].useTransparency = true;

	SpriteList[0].Animations[6].Frames[1].BitmapName = "SpaceMan Right 4.bmp";
	SpriteList[0].Animations[6].Frames[1].TranslateX = 0.000;
	SpriteList[0].Animations[6].Frames[1].TranslateY = 0.000;
	SpriteList[0].Animations[6].Frames[1].Delay = 20;
	SpriteList[0].Animations[6].Frames[1].Width = 30;
	SpriteList[0].Animations[6].Frames[1].Height = 30;
	SpriteList[0].Animations[6].Frames[1].Transparency = RGB(255,255,255);
	SpriteList[0].Animations[6].Frames[1].hFlip = false;
	SpriteList[0].Animations[6].Frames[1].vFlip = false;
	SpriteList[0].Animations[6].Frames[1].zRotation = 0;
	SpriteList[0].Animations[6].Frames[1].HotSpot[0].x = 15;
	SpriteList[0].Animations[6].Frames[1].HotSpot[0].y = 15;
	::SetRect( &SpriteList[0].Animations[6].Frames[1].BBox, 0, 0, 29,29);
	SpriteList[0].Animations[6].Frames[1].centerX = 15;
	SpriteList[0].Animations[6].Frames[1].centerY = 15;
	SpriteList[0].Animations[6].Frames[1].PegRegistered = false;
	SpriteList[0].Animations[6].Frames[1].useTransparency = true;


	SpriteList[0].Animations[7].TotalFrames=2;
	SpriteList[0].Animations[7].ConnectTo = 0;
	SpriteList[0].Animations[7].Frames = new FrameElem[2];

	SpriteList[0].Animations[7].Frames[0].BitmapName = "SpaceMan Left 2.bmp";
	SpriteList[0].Animations[7].Frames[0].TranslateX = 0.000;
	SpriteList[0].Animations[7].Frames[0].TranslateY = 0.000;
	SpriteList[0].Animations[7].Frames[0].Delay = 20;
	SpriteList[0].Animations[7].Frames[0].Width = 30;
	SpriteList[0].Animations[7].Frames[0].Height = 30;
	SpriteList[0].Animations[7].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[0].Animations[7].Frames[0].hFlip = false;
	SpriteList[0].Animations[7].Frames[0].vFlip = false;
	SpriteList[0].Animations[7].Frames[0].zRotation = 0;
	SpriteList[0].Animations[7].Frames[0].HotSpot[0].x = 15;
	SpriteList[0].Animations[7].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[0].Animations[7].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[0].Animations[7].Frames[0].centerX = 15;
	SpriteList[0].Animations[7].Frames[0].centerY = 15;
	SpriteList[0].Animations[7].Frames[0].PegRegistered = false;
	SpriteList[0].Animations[7].Frames[0].useTransparency = true;

	SpriteList[0].Animations[7].Frames[1].BitmapName = "SpaceMan Left 4.bmp";
	SpriteList[0].Animations[7].Frames[1].TranslateX = 0.000;
	SpriteList[0].Animations[7].Frames[1].TranslateY = 0.000;
	SpriteList[0].Animations[7].Frames[1].Delay = 20;
	SpriteList[0].Animations[7].Frames[1].Width = 30;
	SpriteList[0].Animations[7].Frames[1].Height = 30;
	SpriteList[0].Animations[7].Frames[1].Transparency = RGB(255,255,255);
	SpriteList[0].Animations[7].Frames[1].hFlip = false;
	SpriteList[0].Animations[7].Frames[1].vFlip = false;
	SpriteList[0].Animations[7].Frames[1].zRotation = 0;
	SpriteList[0].Animations[7].Frames[1].HotSpot[0].x = 15;
	SpriteList[0].Animations[7].Frames[1].HotSpot[0].y = 15;
	::SetRect( &SpriteList[0].Animations[7].Frames[1].BBox, 0, 0, 29,29);
	SpriteList[0].Animations[7].Frames[1].centerX = 15;
	SpriteList[0].Animations[7].Frames[1].centerY = 15;
	SpriteList[0].Animations[7].Frames[1].PegRegistered = false;
	SpriteList[0].Animations[7].Frames[1].useTransparency = true;



	SpriteList[5].TotalAnimations = 1;
	SpriteList[5].Animations = new AnimationElem[1];

	SpriteList[5].Animations[0].TotalFrames=1;
	SpriteList[5].Animations[0].ConnectTo = 0;
	SpriteList[5].Animations[0].Frames = new FrameElem[1];

	SpriteList[5].Animations[0].Frames[0].BitmapName = "Memory Chip.bmp";
	SpriteList[5].Animations[0].Frames[0].TranslateX = 0.000;
	SpriteList[5].Animations[0].Frames[0].TranslateY = 0.000;
	SpriteList[5].Animations[0].Frames[0].Delay = 1;
	SpriteList[5].Animations[0].Frames[0].Width = 30;
	SpriteList[5].Animations[0].Frames[0].Height = 30;
	SpriteList[5].Animations[0].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[5].Animations[0].Frames[0].hFlip = false;
	SpriteList[5].Animations[0].Frames[0].vFlip = false;
	SpriteList[5].Animations[0].Frames[0].zRotation = 0;
	SpriteList[5].Animations[0].Frames[0].HotSpot[0].x = 15;
	SpriteList[5].Animations[0].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[5].Animations[0].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[5].Animations[0].Frames[0].centerX = 15;
	SpriteList[5].Animations[0].Frames[0].centerY = 15;
	SpriteList[5].Animations[0].Frames[0].PegRegistered = false;
	SpriteList[5].Animations[0].Frames[0].useTransparency = true;



	SpriteList[6].TotalAnimations = 3;
	SpriteList[6].Animations = new AnimationElem[3];

	SpriteList[6].Animations[0].TotalFrames=1;
	SpriteList[6].Animations[0].ConnectTo = 0;
	SpriteList[6].Animations[0].Frames = new FrameElem[1];

	SpriteList[6].Animations[0].Frames[0].BitmapName = "Survivor Vision.bmp";
	SpriteList[6].Animations[0].Frames[0].TranslateX = 0.000;
	SpriteList[6].Animations[0].Frames[0].TranslateY = 0.000;
	SpriteList[6].Animations[0].Frames[0].Delay = 1;
	SpriteList[6].Animations[0].Frames[0].Width = 1553;
	SpriteList[6].Animations[0].Frames[0].Height = 1234;
	SpriteList[6].Animations[0].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[6].Animations[0].Frames[0].hFlip = false;
	SpriteList[6].Animations[0].Frames[0].vFlip = false;
	SpriteList[6].Animations[0].Frames[0].zRotation = 0;
	SpriteList[6].Animations[0].Frames[0].HotSpot[0].x = 776;
	SpriteList[6].Animations[0].Frames[0].HotSpot[0].y = 617;
	::SetRect( &SpriteList[6].Animations[0].Frames[0].BBox, 0, 0, 1552,1233);
	SpriteList[6].Animations[0].Frames[0].centerX = 776;
	SpriteList[6].Animations[0].Frames[0].centerY = 617;
	SpriteList[6].Animations[0].Frames[0].PegRegistered = false;
	SpriteList[6].Animations[0].Frames[0].useTransparency = true;


	SpriteList[6].Animations[1].TotalFrames=1;
	SpriteList[6].Animations[1].ConnectTo = 0;
	SpriteList[6].Animations[1].Frames = new FrameElem[1];

	SpriteList[6].Animations[1].Frames[0].BitmapName = "Moderate Vision.bmp";
	SpriteList[6].Animations[1].Frames[0].TranslateX = 0.000;
	SpriteList[6].Animations[1].Frames[0].TranslateY = 0.000;
	SpriteList[6].Animations[1].Frames[0].Delay = 1;
	SpriteList[6].Animations[1].Frames[0].Width = 1553;
	SpriteList[6].Animations[1].Frames[0].Height = 1234;
	SpriteList[6].Animations[1].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[6].Animations[1].Frames[0].hFlip = false;
	SpriteList[6].Animations[1].Frames[0].vFlip = false;
	SpriteList[6].Animations[1].Frames[0].zRotation = 0;
	SpriteList[6].Animations[1].Frames[0].HotSpot[0].x = 776;
	SpriteList[6].Animations[1].Frames[0].HotSpot[0].y = 617;
	::SetRect( &SpriteList[6].Animations[1].Frames[0].BBox, 0, 0, 1552,1233);
	SpriteList[6].Animations[1].Frames[0].centerX = 776;
	SpriteList[6].Animations[1].Frames[0].centerY = 617;
	SpriteList[6].Animations[1].Frames[0].PegRegistered = false;
	SpriteList[6].Animations[1].Frames[0].useTransparency = true;


	SpriteList[6].Animations[2].TotalFrames=1;
	SpriteList[6].Animations[2].ConnectTo = 0;
	SpriteList[6].Animations[2].Frames = new FrameElem[1];

	SpriteList[6].Animations[2].Frames[0].BitmapName = "Amateur Vision.bmp";
	SpriteList[6].Animations[2].Frames[0].TranslateX = 0.000;
	SpriteList[6].Animations[2].Frames[0].TranslateY = 0.000;
	SpriteList[6].Animations[2].Frames[0].Delay = 1;
	SpriteList[6].Animations[2].Frames[0].Width = 1553;
	SpriteList[6].Animations[2].Frames[0].Height = 1234;
	SpriteList[6].Animations[2].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[6].Animations[2].Frames[0].hFlip = false;
	SpriteList[6].Animations[2].Frames[0].vFlip = false;
	SpriteList[6].Animations[2].Frames[0].zRotation = 0;
	SpriteList[6].Animations[2].Frames[0].HotSpot[0].x = 776;
	SpriteList[6].Animations[2].Frames[0].HotSpot[0].y = 617;
	::SetRect( &SpriteList[6].Animations[2].Frames[0].BBox, 0, 0, 1552,1233);
	SpriteList[6].Animations[2].Frames[0].centerX = 776;
	SpriteList[6].Animations[2].Frames[0].centerY = 617;
	SpriteList[6].Animations[2].Frames[0].PegRegistered = false;
	SpriteList[6].Animations[2].Frames[0].useTransparency = true;



	SpriteList[9].TotalAnimations = 3;
	SpriteList[9].Animations = new AnimationElem[3];

	SpriteList[9].Animations[0].TotalFrames=1;
	SpriteList[9].Animations[0].ConnectTo = 0;
	SpriteList[9].Animations[0].Frames = new FrameElem[1];

	SpriteList[9].Animations[0].Frames[0].BitmapName = "Button.bmp";
	SpriteList[9].Animations[0].Frames[0].TranslateX = 0.000;
	SpriteList[9].Animations[0].Frames[0].TranslateY = 0.000;
	SpriteList[9].Animations[0].Frames[0].Delay = 1;
	SpriteList[9].Animations[0].Frames[0].Width = 300;
	SpriteList[9].Animations[0].Frames[0].Height = 60;
	SpriteList[9].Animations[0].Frames[0].Transparency = RGB(0,0,0);
	SpriteList[9].Animations[0].Frames[0].hFlip = false;
	SpriteList[9].Animations[0].Frames[0].vFlip = false;
	SpriteList[9].Animations[0].Frames[0].zRotation = 0;
	SpriteList[9].Animations[0].Frames[0].HotSpot[0].x = 50;
	SpriteList[9].Animations[0].Frames[0].HotSpot[0].y = 25;
	::SetRect( &SpriteList[9].Animations[0].Frames[0].BBox, 0, 0, 299,59);
	SpriteList[9].Animations[0].Frames[0].centerX = 50;
	SpriteList[9].Animations[0].Frames[0].centerY = 25;
	SpriteList[9].Animations[0].Frames[0].PegRegistered = false;
	SpriteList[9].Animations[0].Frames[0].useTransparency = true;
	SpriteList[9].Animations[0].Frames[0].AddCollisionData(CollisionSegment(298,1,1,1,0,0));
	SpriteList[9].Animations[0].Frames[0].AddCollisionData(CollisionSegment(298,58,298,1,0,0));
	SpriteList[9].Animations[0].Frames[0].AddCollisionData(CollisionSegment(1,58,298,58,0,0));
	SpriteList[9].Animations[0].Frames[0].AddCollisionData(CollisionSegment(1,1,1,58,0,0));


	SpriteList[9].Animations[1].TotalFrames=1;
	SpriteList[9].Animations[1].ConnectTo = 0;
	SpriteList[9].Animations[1].Frames = new FrameElem[1];

	SpriteList[9].Animations[1].Frames[0].BitmapName = "Life Bar.bmp";
	SpriteList[9].Animations[1].Frames[0].TranslateX = 0.000;
	SpriteList[9].Animations[1].Frames[0].TranslateY = 0.000;
	SpriteList[9].Animations[1].Frames[0].Delay = 1;
	SpriteList[9].Animations[1].Frames[0].Width = 80;
	SpriteList[9].Animations[1].Frames[0].Height = 100;
	SpriteList[9].Animations[1].Frames[0].Transparency = RGB(240,240,240);
	SpriteList[9].Animations[1].Frames[0].hFlip = false;
	SpriteList[9].Animations[1].Frames[0].vFlip = false;
	SpriteList[9].Animations[1].Frames[0].zRotation = 0;
	SpriteList[9].Animations[1].Frames[0].HotSpot[0].x = 40;
	SpriteList[9].Animations[1].Frames[0].HotSpot[0].y = 50;
	::SetRect( &SpriteList[9].Animations[1].Frames[0].BBox, 0, 0, 79,99);
	SpriteList[9].Animations[1].Frames[0].centerX = 40;
	SpriteList[9].Animations[1].Frames[0].centerY = 50;
	SpriteList[9].Animations[1].Frames[0].PegRegistered = false;
	SpriteList[9].Animations[1].Frames[0].useTransparency = false;


	SpriteList[9].Animations[2].TotalFrames=1;
	SpriteList[9].Animations[2].ConnectTo = 0;
	SpriteList[9].Animations[2].Frames = new FrameElem[1];

	SpriteList[9].Animations[2].Frames[0].BitmapName = "Lives.bmp";
	SpriteList[9].Animations[2].Frames[0].TranslateX = 0.000;
	SpriteList[9].Animations[2].Frames[0].TranslateY = 0.000;
	SpriteList[9].Animations[2].Frames[0].Delay = 1;
	SpriteList[9].Animations[2].Frames[0].Width = 80;
	SpriteList[9].Animations[2].Frames[0].Height = 600;
	SpriteList[9].Animations[2].Frames[0].Transparency = RGB(240,240,240);
	SpriteList[9].Animations[2].Frames[0].hFlip = false;
	SpriteList[9].Animations[2].Frames[0].vFlip = false;
	SpriteList[9].Animations[2].Frames[0].zRotation = 0;
	SpriteList[9].Animations[2].Frames[0].HotSpot[0].x = 40;
	SpriteList[9].Animations[2].Frames[0].HotSpot[0].y = 300;
	::SetRect( &SpriteList[9].Animations[2].Frames[0].BBox, 0, 0, 79,599);
	SpriteList[9].Animations[2].Frames[0].centerX = 40;
	SpriteList[9].Animations[2].Frames[0].centerY = 300;
	SpriteList[9].Animations[2].Frames[0].PegRegistered = false;
	SpriteList[9].Animations[2].Frames[0].useTransparency = false;



	SpriteList[7].TotalAnimations = 1;
	SpriteList[7].Animations = new AnimationElem[1];

	SpriteList[7].Animations[0].TotalFrames=6;
	SpriteList[7].Animations[0].ConnectTo = 0;
	SpriteList[7].Animations[0].Frames = new FrameElem[6];

	SpriteList[7].Animations[0].Frames[0].BitmapName = "Restart 1.bmp";
	SpriteList[7].Animations[0].Frames[0].TranslateX = 0.000;
	SpriteList[7].Animations[0].Frames[0].TranslateY = 0.000;
	SpriteList[7].Animations[0].Frames[0].Delay = 1;
	SpriteList[7].Animations[0].Frames[0].Width = 800;
	SpriteList[7].Animations[0].Frames[0].Height = 600;
	SpriteList[7].Animations[0].Frames[0].Transparency = RGB(240,240,240);
	SpriteList[7].Animations[0].Frames[0].hFlip = false;
	SpriteList[7].Animations[0].Frames[0].vFlip = false;
	SpriteList[7].Animations[0].Frames[0].zRotation = 0;
	SpriteList[7].Animations[0].Frames[0].HotSpot[0].x = 400;
	SpriteList[7].Animations[0].Frames[0].HotSpot[0].y = 300;
	::SetRect( &SpriteList[7].Animations[0].Frames[0].BBox, 0, 0, 799,599);
	SpriteList[7].Animations[0].Frames[0].centerX = 400;
	SpriteList[7].Animations[0].Frames[0].centerY = 300;
	SpriteList[7].Animations[0].Frames[0].PegRegistered = false;
	SpriteList[7].Animations[0].Frames[0].useTransparency = false;

	SpriteList[7].Animations[0].Frames[1].BitmapName = "Restart 2.bmp";
	SpriteList[7].Animations[0].Frames[1].TranslateX = 0.000;
	SpriteList[7].Animations[0].Frames[1].TranslateY = 0.000;
	SpriteList[7].Animations[0].Frames[1].Delay = 1;
	SpriteList[7].Animations[0].Frames[1].Width = 800;
	SpriteList[7].Animations[0].Frames[1].Height = 600;
	SpriteList[7].Animations[0].Frames[1].Transparency = RGB(240,240,240);
	SpriteList[7].Animations[0].Frames[1].hFlip = false;
	SpriteList[7].Animations[0].Frames[1].vFlip = false;
	SpriteList[7].Animations[0].Frames[1].zRotation = 0;
	SpriteList[7].Animations[0].Frames[1].HotSpot[0].x = 400;
	SpriteList[7].Animations[0].Frames[1].HotSpot[0].y = 300;
	::SetRect( &SpriteList[7].Animations[0].Frames[1].BBox, 0, 0, 799,599);
	SpriteList[7].Animations[0].Frames[1].centerX = 400;
	SpriteList[7].Animations[0].Frames[1].centerY = 300;
	SpriteList[7].Animations[0].Frames[1].PegRegistered = false;
	SpriteList[7].Animations[0].Frames[1].useTransparency = false;

	SpriteList[7].Animations[0].Frames[2].BitmapName = "Restart 3.bmp";
	SpriteList[7].Animations[0].Frames[2].TranslateX = 0.000;
	SpriteList[7].Animations[0].Frames[2].TranslateY = 0.000;
	SpriteList[7].Animations[0].Frames[2].Delay = 1;
	SpriteList[7].Animations[0].Frames[2].Width = 800;
	SpriteList[7].Animations[0].Frames[2].Height = 600;
	SpriteList[7].Animations[0].Frames[2].Transparency = RGB(240,240,240);
	SpriteList[7].Animations[0].Frames[2].hFlip = false;
	SpriteList[7].Animations[0].Frames[2].vFlip = false;
	SpriteList[7].Animations[0].Frames[2].zRotation = 0;
	SpriteList[7].Animations[0].Frames[2].HotSpot[0].x = 400;
	SpriteList[7].Animations[0].Frames[2].HotSpot[0].y = 300;
	::SetRect( &SpriteList[7].Animations[0].Frames[2].BBox, 0, 0, 799,599);
	SpriteList[7].Animations[0].Frames[2].centerX = 400;
	SpriteList[7].Animations[0].Frames[2].centerY = 300;
	SpriteList[7].Animations[0].Frames[2].PegRegistered = false;
	SpriteList[7].Animations[0].Frames[2].useTransparency = false;

	SpriteList[7].Animations[0].Frames[3].BitmapName = "Restart 2.bmp";
	SpriteList[7].Animations[0].Frames[3].TranslateX = 0.000;
	SpriteList[7].Animations[0].Frames[3].TranslateY = 0.000;
	SpriteList[7].Animations[0].Frames[3].Delay = 1;
	SpriteList[7].Animations[0].Frames[3].Width = 800;
	SpriteList[7].Animations[0].Frames[3].Height = 600;
	SpriteList[7].Animations[0].Frames[3].Transparency = RGB(240,240,240);
	SpriteList[7].Animations[0].Frames[3].hFlip = false;
	SpriteList[7].Animations[0].Frames[3].vFlip = false;
	SpriteList[7].Animations[0].Frames[3].zRotation = 0;
	SpriteList[7].Animations[0].Frames[3].HotSpot[0].x = 400;
	SpriteList[7].Animations[0].Frames[3].HotSpot[0].y = 300;
	::SetRect( &SpriteList[7].Animations[0].Frames[3].BBox, 0, 0, 799,599);
	SpriteList[7].Animations[0].Frames[3].centerX = 400;
	SpriteList[7].Animations[0].Frames[3].centerY = 300;
	SpriteList[7].Animations[0].Frames[3].PegRegistered = false;
	SpriteList[7].Animations[0].Frames[3].useTransparency = false;

	SpriteList[7].Animations[0].Frames[4].BitmapName = "Restart 1.bmp";
	SpriteList[7].Animations[0].Frames[4].TranslateX = 0.000;
	SpriteList[7].Animations[0].Frames[4].TranslateY = 0.000;
	SpriteList[7].Animations[0].Frames[4].Delay = 1;
	SpriteList[7].Animations[0].Frames[4].Width = 800;
	SpriteList[7].Animations[0].Frames[4].Height = 600;
	SpriteList[7].Animations[0].Frames[4].Transparency = RGB(240,240,240);
	SpriteList[7].Animations[0].Frames[4].hFlip = false;
	SpriteList[7].Animations[0].Frames[4].vFlip = false;
	SpriteList[7].Animations[0].Frames[4].zRotation = 0;
	SpriteList[7].Animations[0].Frames[4].HotSpot[0].x = 400;
	SpriteList[7].Animations[0].Frames[4].HotSpot[0].y = 300;
	::SetRect( &SpriteList[7].Animations[0].Frames[4].BBox, 0, 0, 799,599);
	SpriteList[7].Animations[0].Frames[4].centerX = 400;
	SpriteList[7].Animations[0].Frames[4].centerY = 300;
	SpriteList[7].Animations[0].Frames[4].PegRegistered = false;
	SpriteList[7].Animations[0].Frames[4].useTransparency = false;

	SpriteList[7].Animations[0].Frames[5].BitmapName = "Restart 3.bmp";
	SpriteList[7].Animations[0].Frames[5].TranslateX = 0.000;
	SpriteList[7].Animations[0].Frames[5].TranslateY = 0.000;
	SpriteList[7].Animations[0].Frames[5].Delay = 1;
	SpriteList[7].Animations[0].Frames[5].Width = 800;
	SpriteList[7].Animations[0].Frames[5].Height = 600;
	SpriteList[7].Animations[0].Frames[5].Transparency = RGB(240,240,240);
	SpriteList[7].Animations[0].Frames[5].hFlip = false;
	SpriteList[7].Animations[0].Frames[5].vFlip = false;
	SpriteList[7].Animations[0].Frames[5].zRotation = 0;
	SpriteList[7].Animations[0].Frames[5].HotSpot[0].x = 400;
	SpriteList[7].Animations[0].Frames[5].HotSpot[0].y = 300;
	::SetRect( &SpriteList[7].Animations[0].Frames[5].BBox, 0, 0, 799,599);
	SpriteList[7].Animations[0].Frames[5].centerX = 400;
	SpriteList[7].Animations[0].Frames[5].centerY = 300;
	SpriteList[7].Animations[0].Frames[5].PegRegistered = false;
	SpriteList[7].Animations[0].Frames[5].useTransparency = false;



	SpriteList[2].TotalAnimations = 8;
	SpriteList[2].Animations = new AnimationElem[8];

	SpriteList[2].Animations[0].TotalFrames=4;
	SpriteList[2].Animations[0].ConnectTo = 0;
	SpriteList[2].Animations[0].Frames = new FrameElem[4];

	SpriteList[2].Animations[0].Frames[0].BitmapName = "Green Alien 1.bmp";
	SpriteList[2].Animations[0].Frames[0].TranslateX = 0.000;
	SpriteList[2].Animations[0].Frames[0].TranslateY = 0.000;
	SpriteList[2].Animations[0].Frames[0].Delay = 10;
	SpriteList[2].Animations[0].Frames[0].Width = 30;
	SpriteList[2].Animations[0].Frames[0].Height = 30;
	SpriteList[2].Animations[0].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[2].Animations[0].Frames[0].hFlip = false;
	SpriteList[2].Animations[0].Frames[0].vFlip = false;
	SpriteList[2].Animations[0].Frames[0].zRotation = 0;
	SpriteList[2].Animations[0].Frames[0].HotSpot[0].x = 15;
	SpriteList[2].Animations[0].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[2].Animations[0].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[2].Animations[0].Frames[0].centerX = 15;
	SpriteList[2].Animations[0].Frames[0].centerY = 15;
	SpriteList[2].Animations[0].Frames[0].PegRegistered = false;
	SpriteList[2].Animations[0].Frames[0].useTransparency = true;

	SpriteList[2].Animations[0].Frames[1].BitmapName = "Green Alien 2.bmp";
	SpriteList[2].Animations[0].Frames[1].TranslateX = 0.000;
	SpriteList[2].Animations[0].Frames[1].TranslateY = 0.000;
	SpriteList[2].Animations[0].Frames[1].Delay = 10;
	SpriteList[2].Animations[0].Frames[1].Width = 30;
	SpriteList[2].Animations[0].Frames[1].Height = 30;
	SpriteList[2].Animations[0].Frames[1].Transparency = RGB(255,255,255);
	SpriteList[2].Animations[0].Frames[1].hFlip = false;
	SpriteList[2].Animations[0].Frames[1].vFlip = false;
	SpriteList[2].Animations[0].Frames[1].zRotation = 0;
	SpriteList[2].Animations[0].Frames[1].HotSpot[0].x = 15;
	SpriteList[2].Animations[0].Frames[1].HotSpot[0].y = 15;
	::SetRect( &SpriteList[2].Animations[0].Frames[1].BBox, 0, 0, 29,29);
	SpriteList[2].Animations[0].Frames[1].centerX = 15;
	SpriteList[2].Animations[0].Frames[1].centerY = 15;
	SpriteList[2].Animations[0].Frames[1].PegRegistered = false;
	SpriteList[2].Animations[0].Frames[1].useTransparency = true;

	SpriteList[2].Animations[0].Frames[2].BitmapName = "Green Alien 3.bmp";
	SpriteList[2].Animations[0].Frames[2].TranslateX = 0.000;
	SpriteList[2].Animations[0].Frames[2].TranslateY = 0.000;
	SpriteList[2].Animations[0].Frames[2].Delay = 10;
	SpriteList[2].Animations[0].Frames[2].Width = 30;
	SpriteList[2].Animations[0].Frames[2].Height = 30;
	SpriteList[2].Animations[0].Frames[2].Transparency = RGB(255,255,255);
	SpriteList[2].Animations[0].Frames[2].hFlip = false;
	SpriteList[2].Animations[0].Frames[2].vFlip = false;
	SpriteList[2].Animations[0].Frames[2].zRotation = 0;
	SpriteList[2].Animations[0].Frames[2].HotSpot[0].x = 15;
	SpriteList[2].Animations[0].Frames[2].HotSpot[0].y = 15;
	::SetRect( &SpriteList[2].Animations[0].Frames[2].BBox, 0, 0, 29,29);
	SpriteList[2].Animations[0].Frames[2].centerX = 15;
	SpriteList[2].Animations[0].Frames[2].centerY = 15;
	SpriteList[2].Animations[0].Frames[2].PegRegistered = false;
	SpriteList[2].Animations[0].Frames[2].useTransparency = true;

	SpriteList[2].Animations[0].Frames[3].BitmapName = "Green Alien 2.bmp";
	SpriteList[2].Animations[0].Frames[3].TranslateX = 0.000;
	SpriteList[2].Animations[0].Frames[3].TranslateY = 0.000;
	SpriteList[2].Animations[0].Frames[3].Delay = 10;
	SpriteList[2].Animations[0].Frames[3].Width = 30;
	SpriteList[2].Animations[0].Frames[3].Height = 30;
	SpriteList[2].Animations[0].Frames[3].Transparency = RGB(255,255,255);
	SpriteList[2].Animations[0].Frames[3].hFlip = false;
	SpriteList[2].Animations[0].Frames[3].vFlip = false;
	SpriteList[2].Animations[0].Frames[3].zRotation = 0;
	SpriteList[2].Animations[0].Frames[3].HotSpot[0].x = 15;
	SpriteList[2].Animations[0].Frames[3].HotSpot[0].y = 15;
	::SetRect( &SpriteList[2].Animations[0].Frames[3].BBox, 0, 0, 29,29);
	SpriteList[2].Animations[0].Frames[3].centerX = 15;
	SpriteList[2].Animations[0].Frames[3].centerY = 15;
	SpriteList[2].Animations[0].Frames[3].PegRegistered = false;
	SpriteList[2].Animations[0].Frames[3].useTransparency = true;


	SpriteList[2].Animations[1].TotalFrames=4;
	SpriteList[2].Animations[1].ConnectTo = 0;
	SpriteList[2].Animations[1].Frames = new FrameElem[4];

	SpriteList[2].Animations[1].Frames[0].BitmapName = "Green Alien Left 1.bmp";
	SpriteList[2].Animations[1].Frames[0].TranslateX = 0.000;
	SpriteList[2].Animations[1].Frames[0].TranslateY = 0.000;
	SpriteList[2].Animations[1].Frames[0].Delay = 10;
	SpriteList[2].Animations[1].Frames[0].Width = 30;
	SpriteList[2].Animations[1].Frames[0].Height = 30;
	SpriteList[2].Animations[1].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[2].Animations[1].Frames[0].hFlip = false;
	SpriteList[2].Animations[1].Frames[0].vFlip = false;
	SpriteList[2].Animations[1].Frames[0].zRotation = 0;
	SpriteList[2].Animations[1].Frames[0].HotSpot[0].x = 15;
	SpriteList[2].Animations[1].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[2].Animations[1].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[2].Animations[1].Frames[0].centerX = 15;
	SpriteList[2].Animations[1].Frames[0].centerY = 15;
	SpriteList[2].Animations[1].Frames[0].PegRegistered = false;
	SpriteList[2].Animations[1].Frames[0].useTransparency = true;

	SpriteList[2].Animations[1].Frames[1].BitmapName = "Green Alien Left 2.bmp";
	SpriteList[2].Animations[1].Frames[1].TranslateX = 0.000;
	SpriteList[2].Animations[1].Frames[1].TranslateY = 0.000;
	SpriteList[2].Animations[1].Frames[1].Delay = 10;
	SpriteList[2].Animations[1].Frames[1].Width = 30;
	SpriteList[2].Animations[1].Frames[1].Height = 30;
	SpriteList[2].Animations[1].Frames[1].Transparency = RGB(255,255,255);
	SpriteList[2].Animations[1].Frames[1].hFlip = false;
	SpriteList[2].Animations[1].Frames[1].vFlip = false;
	SpriteList[2].Animations[1].Frames[1].zRotation = 0;
	SpriteList[2].Animations[1].Frames[1].HotSpot[0].x = 15;
	SpriteList[2].Animations[1].Frames[1].HotSpot[0].y = 15;
	::SetRect( &SpriteList[2].Animations[1].Frames[1].BBox, 0, 0, 29,29);
	SpriteList[2].Animations[1].Frames[1].centerX = 15;
	SpriteList[2].Animations[1].Frames[1].centerY = 15;
	SpriteList[2].Animations[1].Frames[1].PegRegistered = false;
	SpriteList[2].Animations[1].Frames[1].useTransparency = true;

	SpriteList[2].Animations[1].Frames[2].BitmapName = "Green Alien Left 3.bmp";
	SpriteList[2].Animations[1].Frames[2].TranslateX = 0.000;
	SpriteList[2].Animations[1].Frames[2].TranslateY = 0.000;
	SpriteList[2].Animations[1].Frames[2].Delay = 10;
	SpriteList[2].Animations[1].Frames[2].Width = 30;
	SpriteList[2].Animations[1].Frames[2].Height = 30;
	SpriteList[2].Animations[1].Frames[2].Transparency = RGB(255,255,255);
	SpriteList[2].Animations[1].Frames[2].hFlip = false;
	SpriteList[2].Animations[1].Frames[2].vFlip = false;
	SpriteList[2].Animations[1].Frames[2].zRotation = 0;
	SpriteList[2].Animations[1].Frames[2].HotSpot[0].x = 15;
	SpriteList[2].Animations[1].Frames[2].HotSpot[0].y = 15;
	::SetRect( &SpriteList[2].Animations[1].Frames[2].BBox, 0, 0, 29,29);
	SpriteList[2].Animations[1].Frames[2].centerX = 15;
	SpriteList[2].Animations[1].Frames[2].centerY = 15;
	SpriteList[2].Animations[1].Frames[2].PegRegistered = false;
	SpriteList[2].Animations[1].Frames[2].useTransparency = true;

	SpriteList[2].Animations[1].Frames[3].BitmapName = "Green Alien Left 2.bmp";
	SpriteList[2].Animations[1].Frames[3].TranslateX = 0.000;
	SpriteList[2].Animations[1].Frames[3].TranslateY = 0.000;
	SpriteList[2].Animations[1].Frames[3].Delay = 10;
	SpriteList[2].Animations[1].Frames[3].Width = 30;
	SpriteList[2].Animations[1].Frames[3].Height = 30;
	SpriteList[2].Animations[1].Frames[3].Transparency = RGB(255,255,255);
	SpriteList[2].Animations[1].Frames[3].hFlip = false;
	SpriteList[2].Animations[1].Frames[3].vFlip = false;
	SpriteList[2].Animations[1].Frames[3].zRotation = 0;
	SpriteList[2].Animations[1].Frames[3].HotSpot[0].x = 15;
	SpriteList[2].Animations[1].Frames[3].HotSpot[0].y = 15;
	::SetRect( &SpriteList[2].Animations[1].Frames[3].BBox, 0, 0, 29,29);
	SpriteList[2].Animations[1].Frames[3].centerX = 15;
	SpriteList[2].Animations[1].Frames[3].centerY = 15;
	SpriteList[2].Animations[1].Frames[3].PegRegistered = false;
	SpriteList[2].Animations[1].Frames[3].useTransparency = true;


	SpriteList[2].Animations[2].TotalFrames=4;
	SpriteList[2].Animations[2].ConnectTo = 0;
	SpriteList[2].Animations[2].Frames = new FrameElem[4];

	SpriteList[2].Animations[2].Frames[0].BitmapName = "Green Alien Right 1.bmp";
	SpriteList[2].Animations[2].Frames[0].TranslateX = 0.000;
	SpriteList[2].Animations[2].Frames[0].TranslateY = 0.000;
	SpriteList[2].Animations[2].Frames[0].Delay = 10;
	SpriteList[2].Animations[2].Frames[0].Width = 30;
	SpriteList[2].Animations[2].Frames[0].Height = 30;
	SpriteList[2].Animations[2].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[2].Animations[2].Frames[0].hFlip = false;
	SpriteList[2].Animations[2].Frames[0].vFlip = false;
	SpriteList[2].Animations[2].Frames[0].zRotation = 0;
	SpriteList[2].Animations[2].Frames[0].HotSpot[0].x = 15;
	SpriteList[2].Animations[2].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[2].Animations[2].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[2].Animations[2].Frames[0].centerX = 15;
	SpriteList[2].Animations[2].Frames[0].centerY = 15;
	SpriteList[2].Animations[2].Frames[0].PegRegistered = false;
	SpriteList[2].Animations[2].Frames[0].useTransparency = true;

	SpriteList[2].Animations[2].Frames[1].BitmapName = "Green Alien Right 2.bmp";
	SpriteList[2].Animations[2].Frames[1].TranslateX = 0.000;
	SpriteList[2].Animations[2].Frames[1].TranslateY = 0.000;
	SpriteList[2].Animations[2].Frames[1].Delay = 10;
	SpriteList[2].Animations[2].Frames[1].Width = 30;
	SpriteList[2].Animations[2].Frames[1].Height = 30;
	SpriteList[2].Animations[2].Frames[1].Transparency = RGB(255,255,255);
	SpriteList[2].Animations[2].Frames[1].hFlip = false;
	SpriteList[2].Animations[2].Frames[1].vFlip = false;
	SpriteList[2].Animations[2].Frames[1].zRotation = 0;
	SpriteList[2].Animations[2].Frames[1].HotSpot[0].x = 15;
	SpriteList[2].Animations[2].Frames[1].HotSpot[0].y = 15;
	::SetRect( &SpriteList[2].Animations[2].Frames[1].BBox, 0, 0, 29,29);
	SpriteList[2].Animations[2].Frames[1].centerX = 15;
	SpriteList[2].Animations[2].Frames[1].centerY = 15;
	SpriteList[2].Animations[2].Frames[1].PegRegistered = false;
	SpriteList[2].Animations[2].Frames[1].useTransparency = true;

	SpriteList[2].Animations[2].Frames[2].BitmapName = "Green Alien Right 3.bmp";
	SpriteList[2].Animations[2].Frames[2].TranslateX = 0.000;
	SpriteList[2].Animations[2].Frames[2].TranslateY = 0.000;
	SpriteList[2].Animations[2].Frames[2].Delay = 10;
	SpriteList[2].Animations[2].Frames[2].Width = 30;
	SpriteList[2].Animations[2].Frames[2].Height = 30;
	SpriteList[2].Animations[2].Frames[2].Transparency = RGB(255,255,255);
	SpriteList[2].Animations[2].Frames[2].hFlip = false;
	SpriteList[2].Animations[2].Frames[2].vFlip = false;
	SpriteList[2].Animations[2].Frames[2].zRotation = 0;
	SpriteList[2].Animations[2].Frames[2].HotSpot[0].x = 15;
	SpriteList[2].Animations[2].Frames[2].HotSpot[0].y = 15;
	::SetRect( &SpriteList[2].Animations[2].Frames[2].BBox, 0, 0, 29,29);
	SpriteList[2].Animations[2].Frames[2].centerX = 15;
	SpriteList[2].Animations[2].Frames[2].centerY = 15;
	SpriteList[2].Animations[2].Frames[2].PegRegistered = false;
	SpriteList[2].Animations[2].Frames[2].useTransparency = true;

	SpriteList[2].Animations[2].Frames[3].BitmapName = "Green Alien Right 2.bmp";
	SpriteList[2].Animations[2].Frames[3].TranslateX = 0.000;
	SpriteList[2].Animations[2].Frames[3].TranslateY = 0.000;
	SpriteList[2].Animations[2].Frames[3].Delay = 10;
	SpriteList[2].Animations[2].Frames[3].Width = 30;
	SpriteList[2].Animations[2].Frames[3].Height = 30;
	SpriteList[2].Animations[2].Frames[3].Transparency = RGB(255,255,255);
	SpriteList[2].Animations[2].Frames[3].hFlip = false;
	SpriteList[2].Animations[2].Frames[3].vFlip = false;
	SpriteList[2].Animations[2].Frames[3].zRotation = 0;
	SpriteList[2].Animations[2].Frames[3].HotSpot[0].x = 15;
	SpriteList[2].Animations[2].Frames[3].HotSpot[0].y = 15;
	::SetRect( &SpriteList[2].Animations[2].Frames[3].BBox, 0, 0, 29,29);
	SpriteList[2].Animations[2].Frames[3].centerX = 15;
	SpriteList[2].Animations[2].Frames[3].centerY = 15;
	SpriteList[2].Animations[2].Frames[3].PegRegistered = false;
	SpriteList[2].Animations[2].Frames[3].useTransparency = true;


	SpriteList[2].Animations[3].TotalFrames=4;
	SpriteList[2].Animations[3].ConnectTo = 0;
	SpriteList[2].Animations[3].Frames = new FrameElem[4];

	SpriteList[2].Animations[3].Frames[0].BitmapName = "Green Alien Back 1.bmp";
	SpriteList[2].Animations[3].Frames[0].TranslateX = 0.000;
	SpriteList[2].Animations[3].Frames[0].TranslateY = 0.000;
	SpriteList[2].Animations[3].Frames[0].Delay = 10;
	SpriteList[2].Animations[3].Frames[0].Width = 30;
	SpriteList[2].Animations[3].Frames[0].Height = 30;
	SpriteList[2].Animations[3].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[2].Animations[3].Frames[0].hFlip = false;
	SpriteList[2].Animations[3].Frames[0].vFlip = false;
	SpriteList[2].Animations[3].Frames[0].zRotation = 0;
	SpriteList[2].Animations[3].Frames[0].HotSpot[0].x = 15;
	SpriteList[2].Animations[3].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[2].Animations[3].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[2].Animations[3].Frames[0].centerX = 15;
	SpriteList[2].Animations[3].Frames[0].centerY = 15;
	SpriteList[2].Animations[3].Frames[0].PegRegistered = false;
	SpriteList[2].Animations[3].Frames[0].useTransparency = true;

	SpriteList[2].Animations[3].Frames[1].BitmapName = "Green Alien Back 2.bmp";
	SpriteList[2].Animations[3].Frames[1].TranslateX = 0.000;
	SpriteList[2].Animations[3].Frames[1].TranslateY = 0.000;
	SpriteList[2].Animations[3].Frames[1].Delay = 10;
	SpriteList[2].Animations[3].Frames[1].Width = 30;
	SpriteList[2].Animations[3].Frames[1].Height = 30;
	SpriteList[2].Animations[3].Frames[1].Transparency = RGB(255,255,255);
	SpriteList[2].Animations[3].Frames[1].hFlip = false;
	SpriteList[2].Animations[3].Frames[1].vFlip = false;
	SpriteList[2].Animations[3].Frames[1].zRotation = 0;
	SpriteList[2].Animations[3].Frames[1].HotSpot[0].x = 15;
	SpriteList[2].Animations[3].Frames[1].HotSpot[0].y = 15;
	::SetRect( &SpriteList[2].Animations[3].Frames[1].BBox, 0, 0, 29,29);
	SpriteList[2].Animations[3].Frames[1].centerX = 15;
	SpriteList[2].Animations[3].Frames[1].centerY = 15;
	SpriteList[2].Animations[3].Frames[1].PegRegistered = false;
	SpriteList[2].Animations[3].Frames[1].useTransparency = true;

	SpriteList[2].Animations[3].Frames[2].BitmapName = "Green Alien Back 3.bmp";
	SpriteList[2].Animations[3].Frames[2].TranslateX = 0.000;
	SpriteList[2].Animations[3].Frames[2].TranslateY = 0.000;
	SpriteList[2].Animations[3].Frames[2].Delay = 10;
	SpriteList[2].Animations[3].Frames[2].Width = 30;
	SpriteList[2].Animations[3].Frames[2].Height = 30;
	SpriteList[2].Animations[3].Frames[2].Transparency = RGB(255,255,255);
	SpriteList[2].Animations[3].Frames[2].hFlip = false;
	SpriteList[2].Animations[3].Frames[2].vFlip = false;
	SpriteList[2].Animations[3].Frames[2].zRotation = 0;
	SpriteList[2].Animations[3].Frames[2].HotSpot[0].x = 15;
	SpriteList[2].Animations[3].Frames[2].HotSpot[0].y = 15;
	::SetRect( &SpriteList[2].Animations[3].Frames[2].BBox, 0, 0, 29,29);
	SpriteList[2].Animations[3].Frames[2].centerX = 15;
	SpriteList[2].Animations[3].Frames[2].centerY = 15;
	SpriteList[2].Animations[3].Frames[2].PegRegistered = false;
	SpriteList[2].Animations[3].Frames[2].useTransparency = true;

	SpriteList[2].Animations[3].Frames[3].BitmapName = "Green Alien Back 2.bmp";
	SpriteList[2].Animations[3].Frames[3].TranslateX = 0.000;
	SpriteList[2].Animations[3].Frames[3].TranslateY = 0.000;
	SpriteList[2].Animations[3].Frames[3].Delay = 10;
	SpriteList[2].Animations[3].Frames[3].Width = 30;
	SpriteList[2].Animations[3].Frames[3].Height = 30;
	SpriteList[2].Animations[3].Frames[3].Transparency = RGB(255,255,255);
	SpriteList[2].Animations[3].Frames[3].hFlip = false;
	SpriteList[2].Animations[3].Frames[3].vFlip = false;
	SpriteList[2].Animations[3].Frames[3].zRotation = 0;
	SpriteList[2].Animations[3].Frames[3].HotSpot[0].x = 15;
	SpriteList[2].Animations[3].Frames[3].HotSpot[0].y = 15;
	::SetRect( &SpriteList[2].Animations[3].Frames[3].BBox, 0, 0, 29,29);
	SpriteList[2].Animations[3].Frames[3].centerX = 15;
	SpriteList[2].Animations[3].Frames[3].centerY = 15;
	SpriteList[2].Animations[3].Frames[3].PegRegistered = false;
	SpriteList[2].Animations[3].Frames[3].useTransparency = true;


	SpriteList[2].Animations[4].TotalFrames=2;
	SpriteList[2].Animations[4].ConnectTo = 0;
	SpriteList[2].Animations[4].Frames = new FrameElem[2];

	SpriteList[2].Animations[4].Frames[0].BitmapName = "Green Alien 2.bmp";
	SpriteList[2].Animations[4].Frames[0].TranslateX = 0.000;
	SpriteList[2].Animations[4].Frames[0].TranslateY = 0.000;
	SpriteList[2].Animations[4].Frames[0].Delay = 20;
	SpriteList[2].Animations[4].Frames[0].Width = 30;
	SpriteList[2].Animations[4].Frames[0].Height = 30;
	SpriteList[2].Animations[4].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[2].Animations[4].Frames[0].hFlip = false;
	SpriteList[2].Animations[4].Frames[0].vFlip = false;
	SpriteList[2].Animations[4].Frames[0].zRotation = 0;
	SpriteList[2].Animations[4].Frames[0].HotSpot[0].x = 15;
	SpriteList[2].Animations[4].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[2].Animations[4].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[2].Animations[4].Frames[0].centerX = 15;
	SpriteList[2].Animations[4].Frames[0].centerY = 15;
	SpriteList[2].Animations[4].Frames[0].PegRegistered = false;
	SpriteList[2].Animations[4].Frames[0].useTransparency = true;

	SpriteList[2].Animations[4].Frames[1].BitmapName = "Green Alien 4.bmp";
	SpriteList[2].Animations[4].Frames[1].TranslateX = 0.000;
	SpriteList[2].Animations[4].Frames[1].TranslateY = 0.000;
	SpriteList[2].Animations[4].Frames[1].Delay = 20;
	SpriteList[2].Animations[4].Frames[1].Width = 30;
	SpriteList[2].Animations[4].Frames[1].Height = 30;
	SpriteList[2].Animations[4].Frames[1].Transparency = RGB(255,255,255);
	SpriteList[2].Animations[4].Frames[1].hFlip = false;
	SpriteList[2].Animations[4].Frames[1].vFlip = false;
	SpriteList[2].Animations[4].Frames[1].zRotation = 0;
	SpriteList[2].Animations[4].Frames[1].HotSpot[0].x = 15;
	SpriteList[2].Animations[4].Frames[1].HotSpot[0].y = 15;
	::SetRect( &SpriteList[2].Animations[4].Frames[1].BBox, 0, 0, 29,29);
	SpriteList[2].Animations[4].Frames[1].centerX = 15;
	SpriteList[2].Animations[4].Frames[1].centerY = 15;
	SpriteList[2].Animations[4].Frames[1].PegRegistered = false;
	SpriteList[2].Animations[4].Frames[1].useTransparency = true;


	SpriteList[2].Animations[5].TotalFrames=2;
	SpriteList[2].Animations[5].ConnectTo = 0;
	SpriteList[2].Animations[5].Frames = new FrameElem[2];

	SpriteList[2].Animations[5].Frames[0].BitmapName = "Green Alien Back 2.bmp";
	SpriteList[2].Animations[5].Frames[0].TranslateX = 0.000;
	SpriteList[2].Animations[5].Frames[0].TranslateY = 0.000;
	SpriteList[2].Animations[5].Frames[0].Delay = 20;
	SpriteList[2].Animations[5].Frames[0].Width = 30;
	SpriteList[2].Animations[5].Frames[0].Height = 30;
	SpriteList[2].Animations[5].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[2].Animations[5].Frames[0].hFlip = false;
	SpriteList[2].Animations[5].Frames[0].vFlip = false;
	SpriteList[2].Animations[5].Frames[0].zRotation = 0;
	SpriteList[2].Animations[5].Frames[0].HotSpot[0].x = 15;
	SpriteList[2].Animations[5].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[2].Animations[5].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[2].Animations[5].Frames[0].centerX = 15;
	SpriteList[2].Animations[5].Frames[0].centerY = 15;
	SpriteList[2].Animations[5].Frames[0].PegRegistered = false;
	SpriteList[2].Animations[5].Frames[0].useTransparency = true;

	SpriteList[2].Animations[5].Frames[1].BitmapName = "Green Alien Back 4.bmp";
	SpriteList[2].Animations[5].Frames[1].TranslateX = 0.000;
	SpriteList[2].Animations[5].Frames[1].TranslateY = 0.000;
	SpriteList[2].Animations[5].Frames[1].Delay = 20;
	SpriteList[2].Animations[5].Frames[1].Width = 30;
	SpriteList[2].Animations[5].Frames[1].Height = 30;
	SpriteList[2].Animations[5].Frames[1].Transparency = RGB(255,255,255);
	SpriteList[2].Animations[5].Frames[1].hFlip = false;
	SpriteList[2].Animations[5].Frames[1].vFlip = false;
	SpriteList[2].Animations[5].Frames[1].zRotation = 0;
	SpriteList[2].Animations[5].Frames[1].HotSpot[0].x = 15;
	SpriteList[2].Animations[5].Frames[1].HotSpot[0].y = 15;
	::SetRect( &SpriteList[2].Animations[5].Frames[1].BBox, 0, 0, 29,29);
	SpriteList[2].Animations[5].Frames[1].centerX = 15;
	SpriteList[2].Animations[5].Frames[1].centerY = 15;
	SpriteList[2].Animations[5].Frames[1].PegRegistered = false;
	SpriteList[2].Animations[5].Frames[1].useTransparency = true;


	SpriteList[2].Animations[6].TotalFrames=2;
	SpriteList[2].Animations[6].ConnectTo = 0;
	SpriteList[2].Animations[6].Frames = new FrameElem[2];

	SpriteList[2].Animations[6].Frames[0].BitmapName = "Green Alien Right 2.bmp";
	SpriteList[2].Animations[6].Frames[0].TranslateX = 0.000;
	SpriteList[2].Animations[6].Frames[0].TranslateY = 0.000;
	SpriteList[2].Animations[6].Frames[0].Delay = 20;
	SpriteList[2].Animations[6].Frames[0].Width = 30;
	SpriteList[2].Animations[6].Frames[0].Height = 30;
	SpriteList[2].Animations[6].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[2].Animations[6].Frames[0].hFlip = false;
	SpriteList[2].Animations[6].Frames[0].vFlip = false;
	SpriteList[2].Animations[6].Frames[0].zRotation = 0;
	SpriteList[2].Animations[6].Frames[0].HotSpot[0].x = 15;
	SpriteList[2].Animations[6].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[2].Animations[6].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[2].Animations[6].Frames[0].centerX = 15;
	SpriteList[2].Animations[6].Frames[0].centerY = 15;
	SpriteList[2].Animations[6].Frames[0].PegRegistered = false;
	SpriteList[2].Animations[6].Frames[0].useTransparency = true;

	SpriteList[2].Animations[6].Frames[1].BitmapName = "Green Alien Right 4.bmp";
	SpriteList[2].Animations[6].Frames[1].TranslateX = 0.000;
	SpriteList[2].Animations[6].Frames[1].TranslateY = 0.000;
	SpriteList[2].Animations[6].Frames[1].Delay = 20;
	SpriteList[2].Animations[6].Frames[1].Width = 30;
	SpriteList[2].Animations[6].Frames[1].Height = 30;
	SpriteList[2].Animations[6].Frames[1].Transparency = RGB(255,255,255);
	SpriteList[2].Animations[6].Frames[1].hFlip = false;
	SpriteList[2].Animations[6].Frames[1].vFlip = false;
	SpriteList[2].Animations[6].Frames[1].zRotation = 0;
	SpriteList[2].Animations[6].Frames[1].HotSpot[0].x = 15;
	SpriteList[2].Animations[6].Frames[1].HotSpot[0].y = 15;
	::SetRect( &SpriteList[2].Animations[6].Frames[1].BBox, 0, 0, 29,29);
	SpriteList[2].Animations[6].Frames[1].centerX = 15;
	SpriteList[2].Animations[6].Frames[1].centerY = 15;
	SpriteList[2].Animations[6].Frames[1].PegRegistered = false;
	SpriteList[2].Animations[6].Frames[1].useTransparency = true;


	SpriteList[2].Animations[7].TotalFrames=2;
	SpriteList[2].Animations[7].ConnectTo = 0;
	SpriteList[2].Animations[7].Frames = new FrameElem[2];

	SpriteList[2].Animations[7].Frames[0].BitmapName = "Green Alien Left 2.bmp";
	SpriteList[2].Animations[7].Frames[0].TranslateX = 0.000;
	SpriteList[2].Animations[7].Frames[0].TranslateY = 0.000;
	SpriteList[2].Animations[7].Frames[0].Delay = 20;
	SpriteList[2].Animations[7].Frames[0].Width = 30;
	SpriteList[2].Animations[7].Frames[0].Height = 30;
	SpriteList[2].Animations[7].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[2].Animations[7].Frames[0].hFlip = false;
	SpriteList[2].Animations[7].Frames[0].vFlip = false;
	SpriteList[2].Animations[7].Frames[0].zRotation = 0;
	SpriteList[2].Animations[7].Frames[0].HotSpot[0].x = 15;
	SpriteList[2].Animations[7].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[2].Animations[7].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[2].Animations[7].Frames[0].centerX = 15;
	SpriteList[2].Animations[7].Frames[0].centerY = 15;
	SpriteList[2].Animations[7].Frames[0].PegRegistered = false;
	SpriteList[2].Animations[7].Frames[0].useTransparency = true;

	SpriteList[2].Animations[7].Frames[1].BitmapName = "Green Alien Left 4.bmp";
	SpriteList[2].Animations[7].Frames[1].TranslateX = 0.000;
	SpriteList[2].Animations[7].Frames[1].TranslateY = 0.000;
	SpriteList[2].Animations[7].Frames[1].Delay = 20;
	SpriteList[2].Animations[7].Frames[1].Width = 30;
	SpriteList[2].Animations[7].Frames[1].Height = 30;
	SpriteList[2].Animations[7].Frames[1].Transparency = RGB(255,255,255);
	SpriteList[2].Animations[7].Frames[1].hFlip = false;
	SpriteList[2].Animations[7].Frames[1].vFlip = false;
	SpriteList[2].Animations[7].Frames[1].zRotation = 0;
	SpriteList[2].Animations[7].Frames[1].HotSpot[0].x = 15;
	SpriteList[2].Animations[7].Frames[1].HotSpot[0].y = 15;
	::SetRect( &SpriteList[2].Animations[7].Frames[1].BBox, 0, 0, 29,29);
	SpriteList[2].Animations[7].Frames[1].centerX = 15;
	SpriteList[2].Animations[7].Frames[1].centerY = 15;
	SpriteList[2].Animations[7].Frames[1].PegRegistered = false;
	SpriteList[2].Animations[7].Frames[1].useTransparency = true;



	SpriteList[1].TotalAnimations = 8;
	SpriteList[1].Animations = new AnimationElem[8];

	SpriteList[1].Animations[0].TotalFrames=4;
	SpriteList[1].Animations[0].ConnectTo = 0;
	SpriteList[1].Animations[0].Frames = new FrameElem[4];

	SpriteList[1].Animations[0].Frames[0].BitmapName = "White Alien 1.bmp";
	SpriteList[1].Animations[0].Frames[0].TranslateX = 0.000;
	SpriteList[1].Animations[0].Frames[0].TranslateY = 0.000;
	SpriteList[1].Animations[0].Frames[0].Delay = 4;
	SpriteList[1].Animations[0].Frames[0].Width = 30;
	SpriteList[1].Animations[0].Frames[0].Height = 30;
	SpriteList[1].Animations[0].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[1].Animations[0].Frames[0].hFlip = false;
	SpriteList[1].Animations[0].Frames[0].vFlip = false;
	SpriteList[1].Animations[0].Frames[0].zRotation = 0;
	SpriteList[1].Animations[0].Frames[0].HotSpot[0].x = 15;
	SpriteList[1].Animations[0].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[1].Animations[0].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[1].Animations[0].Frames[0].centerX = 15;
	SpriteList[1].Animations[0].Frames[0].centerY = 15;
	SpriteList[1].Animations[0].Frames[0].PegRegistered = false;
	SpriteList[1].Animations[0].Frames[0].useTransparency = true;

	SpriteList[1].Animations[0].Frames[1].BitmapName = "White Alien 2.bmp";
	SpriteList[1].Animations[0].Frames[1].TranslateX = 0.000;
	SpriteList[1].Animations[0].Frames[1].TranslateY = 0.000;
	SpriteList[1].Animations[0].Frames[1].Delay = 4;
	SpriteList[1].Animations[0].Frames[1].Width = 30;
	SpriteList[1].Animations[0].Frames[1].Height = 30;
	SpriteList[1].Animations[0].Frames[1].Transparency = RGB(255,255,255);
	SpriteList[1].Animations[0].Frames[1].hFlip = false;
	SpriteList[1].Animations[0].Frames[1].vFlip = false;
	SpriteList[1].Animations[0].Frames[1].zRotation = 0;
	SpriteList[1].Animations[0].Frames[1].HotSpot[0].x = 15;
	SpriteList[1].Animations[0].Frames[1].HotSpot[0].y = 15;
	::SetRect( &SpriteList[1].Animations[0].Frames[1].BBox, 0, 0, 29,29);
	SpriteList[1].Animations[0].Frames[1].centerX = 15;
	SpriteList[1].Animations[0].Frames[1].centerY = 15;
	SpriteList[1].Animations[0].Frames[1].PegRegistered = false;
	SpriteList[1].Animations[0].Frames[1].useTransparency = true;

	SpriteList[1].Animations[0].Frames[2].BitmapName = "White Alien 3.bmp";
	SpriteList[1].Animations[0].Frames[2].TranslateX = 0.000;
	SpriteList[1].Animations[0].Frames[2].TranslateY = 0.000;
	SpriteList[1].Animations[0].Frames[2].Delay = 4;
	SpriteList[1].Animations[0].Frames[2].Width = 30;
	SpriteList[1].Animations[0].Frames[2].Height = 30;
	SpriteList[1].Animations[0].Frames[2].Transparency = RGB(255,255,255);
	SpriteList[1].Animations[0].Frames[2].hFlip = false;
	SpriteList[1].Animations[0].Frames[2].vFlip = false;
	SpriteList[1].Animations[0].Frames[2].zRotation = 0;
	SpriteList[1].Animations[0].Frames[2].HotSpot[0].x = 15;
	SpriteList[1].Animations[0].Frames[2].HotSpot[0].y = 15;
	::SetRect( &SpriteList[1].Animations[0].Frames[2].BBox, 0, 0, 29,29);
	SpriteList[1].Animations[0].Frames[2].centerX = 15;
	SpriteList[1].Animations[0].Frames[2].centerY = 15;
	SpriteList[1].Animations[0].Frames[2].PegRegistered = false;
	SpriteList[1].Animations[0].Frames[2].useTransparency = true;

	SpriteList[1].Animations[0].Frames[3].BitmapName = "White Alien 2.bmp";
	SpriteList[1].Animations[0].Frames[3].TranslateX = 0.000;
	SpriteList[1].Animations[0].Frames[3].TranslateY = 0.000;
	SpriteList[1].Animations[0].Frames[3].Delay = 4;
	SpriteList[1].Animations[0].Frames[3].Width = 30;
	SpriteList[1].Animations[0].Frames[3].Height = 30;
	SpriteList[1].Animations[0].Frames[3].Transparency = RGB(255,255,255);
	SpriteList[1].Animations[0].Frames[3].hFlip = false;
	SpriteList[1].Animations[0].Frames[3].vFlip = false;
	SpriteList[1].Animations[0].Frames[3].zRotation = 0;
	SpriteList[1].Animations[0].Frames[3].HotSpot[0].x = 15;
	SpriteList[1].Animations[0].Frames[3].HotSpot[0].y = 15;
	::SetRect( &SpriteList[1].Animations[0].Frames[3].BBox, 0, 0, 29,29);
	SpriteList[1].Animations[0].Frames[3].centerX = 15;
	SpriteList[1].Animations[0].Frames[3].centerY = 15;
	SpriteList[1].Animations[0].Frames[3].PegRegistered = false;
	SpriteList[1].Animations[0].Frames[3].useTransparency = true;


	SpriteList[1].Animations[1].TotalFrames=4;
	SpriteList[1].Animations[1].ConnectTo = 0;
	SpriteList[1].Animations[1].Frames = new FrameElem[4];

	SpriteList[1].Animations[1].Frames[0].BitmapName = "White Alien Left 1.bmp";
	SpriteList[1].Animations[1].Frames[0].TranslateX = 0.000;
	SpriteList[1].Animations[1].Frames[0].TranslateY = 0.000;
	SpriteList[1].Animations[1].Frames[0].Delay = 4;
	SpriteList[1].Animations[1].Frames[0].Width = 30;
	SpriteList[1].Animations[1].Frames[0].Height = 30;
	SpriteList[1].Animations[1].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[1].Animations[1].Frames[0].hFlip = false;
	SpriteList[1].Animations[1].Frames[0].vFlip = false;
	SpriteList[1].Animations[1].Frames[0].zRotation = 0;
	SpriteList[1].Animations[1].Frames[0].HotSpot[0].x = 15;
	SpriteList[1].Animations[1].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[1].Animations[1].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[1].Animations[1].Frames[0].centerX = 15;
	SpriteList[1].Animations[1].Frames[0].centerY = 15;
	SpriteList[1].Animations[1].Frames[0].PegRegistered = false;
	SpriteList[1].Animations[1].Frames[0].useTransparency = true;

	SpriteList[1].Animations[1].Frames[1].BitmapName = "White Alien Left 2.bmp";
	SpriteList[1].Animations[1].Frames[1].TranslateX = 0.000;
	SpriteList[1].Animations[1].Frames[1].TranslateY = 0.000;
	SpriteList[1].Animations[1].Frames[1].Delay = 4;
	SpriteList[1].Animations[1].Frames[1].Width = 30;
	SpriteList[1].Animations[1].Frames[1].Height = 30;
	SpriteList[1].Animations[1].Frames[1].Transparency = RGB(255,255,255);
	SpriteList[1].Animations[1].Frames[1].hFlip = false;
	SpriteList[1].Animations[1].Frames[1].vFlip = false;
	SpriteList[1].Animations[1].Frames[1].zRotation = 0;
	SpriteList[1].Animations[1].Frames[1].HotSpot[0].x = 15;
	SpriteList[1].Animations[1].Frames[1].HotSpot[0].y = 15;
	::SetRect( &SpriteList[1].Animations[1].Frames[1].BBox, 0, 0, 29,29);
	SpriteList[1].Animations[1].Frames[1].centerX = 15;
	SpriteList[1].Animations[1].Frames[1].centerY = 15;
	SpriteList[1].Animations[1].Frames[1].PegRegistered = false;
	SpriteList[1].Animations[1].Frames[1].useTransparency = true;

	SpriteList[1].Animations[1].Frames[2].BitmapName = "White Alien Left 3.bmp";
	SpriteList[1].Animations[1].Frames[2].TranslateX = 0.000;
	SpriteList[1].Animations[1].Frames[2].TranslateY = 0.000;
	SpriteList[1].Animations[1].Frames[2].Delay = 4;
	SpriteList[1].Animations[1].Frames[2].Width = 30;
	SpriteList[1].Animations[1].Frames[2].Height = 30;
	SpriteList[1].Animations[1].Frames[2].Transparency = RGB(255,255,255);
	SpriteList[1].Animations[1].Frames[2].hFlip = false;
	SpriteList[1].Animations[1].Frames[2].vFlip = false;
	SpriteList[1].Animations[1].Frames[2].zRotation = 0;
	SpriteList[1].Animations[1].Frames[2].HotSpot[0].x = 15;
	SpriteList[1].Animations[1].Frames[2].HotSpot[0].y = 15;
	::SetRect( &SpriteList[1].Animations[1].Frames[2].BBox, 0, 0, 29,29);
	SpriteList[1].Animations[1].Frames[2].centerX = 15;
	SpriteList[1].Animations[1].Frames[2].centerY = 15;
	SpriteList[1].Animations[1].Frames[2].PegRegistered = false;
	SpriteList[1].Animations[1].Frames[2].useTransparency = true;

	SpriteList[1].Animations[1].Frames[3].BitmapName = "White Alien Left 2.bmp";
	SpriteList[1].Animations[1].Frames[3].TranslateX = 0.000;
	SpriteList[1].Animations[1].Frames[3].TranslateY = 0.000;
	SpriteList[1].Animations[1].Frames[3].Delay = 4;
	SpriteList[1].Animations[1].Frames[3].Width = 30;
	SpriteList[1].Animations[1].Frames[3].Height = 30;
	SpriteList[1].Animations[1].Frames[3].Transparency = RGB(255,255,255);
	SpriteList[1].Animations[1].Frames[3].hFlip = false;
	SpriteList[1].Animations[1].Frames[3].vFlip = false;
	SpriteList[1].Animations[1].Frames[3].zRotation = 0;
	SpriteList[1].Animations[1].Frames[3].HotSpot[0].x = 15;
	SpriteList[1].Animations[1].Frames[3].HotSpot[0].y = 15;
	::SetRect( &SpriteList[1].Animations[1].Frames[3].BBox, 0, 0, 29,29);
	SpriteList[1].Animations[1].Frames[3].centerX = 15;
	SpriteList[1].Animations[1].Frames[3].centerY = 15;
	SpriteList[1].Animations[1].Frames[3].PegRegistered = false;
	SpriteList[1].Animations[1].Frames[3].useTransparency = true;


	SpriteList[1].Animations[2].TotalFrames=4;
	SpriteList[1].Animations[2].ConnectTo = 0;
	SpriteList[1].Animations[2].Frames = new FrameElem[4];

	SpriteList[1].Animations[2].Frames[0].BitmapName = "White Alien Right 1.bmp";
	SpriteList[1].Animations[2].Frames[0].TranslateX = 0.000;
	SpriteList[1].Animations[2].Frames[0].TranslateY = 0.000;
	SpriteList[1].Animations[2].Frames[0].Delay = 4;
	SpriteList[1].Animations[2].Frames[0].Width = 30;
	SpriteList[1].Animations[2].Frames[0].Height = 30;
	SpriteList[1].Animations[2].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[1].Animations[2].Frames[0].hFlip = false;
	SpriteList[1].Animations[2].Frames[0].vFlip = false;
	SpriteList[1].Animations[2].Frames[0].zRotation = 0;
	SpriteList[1].Animations[2].Frames[0].HotSpot[0].x = 15;
	SpriteList[1].Animations[2].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[1].Animations[2].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[1].Animations[2].Frames[0].centerX = 15;
	SpriteList[1].Animations[2].Frames[0].centerY = 15;
	SpriteList[1].Animations[2].Frames[0].PegRegistered = false;
	SpriteList[1].Animations[2].Frames[0].useTransparency = true;

	SpriteList[1].Animations[2].Frames[1].BitmapName = "White Alien Right 2.bmp";
	SpriteList[1].Animations[2].Frames[1].TranslateX = 0.000;
	SpriteList[1].Animations[2].Frames[1].TranslateY = 0.000;
	SpriteList[1].Animations[2].Frames[1].Delay = 4;
	SpriteList[1].Animations[2].Frames[1].Width = 30;
	SpriteList[1].Animations[2].Frames[1].Height = 30;
	SpriteList[1].Animations[2].Frames[1].Transparency = RGB(255,255,255);
	SpriteList[1].Animations[2].Frames[1].hFlip = false;
	SpriteList[1].Animations[2].Frames[1].vFlip = false;
	SpriteList[1].Animations[2].Frames[1].zRotation = 0;
	SpriteList[1].Animations[2].Frames[1].HotSpot[0].x = 15;
	SpriteList[1].Animations[2].Frames[1].HotSpot[0].y = 15;
	::SetRect( &SpriteList[1].Animations[2].Frames[1].BBox, 0, 0, 29,29);
	SpriteList[1].Animations[2].Frames[1].centerX = 15;
	SpriteList[1].Animations[2].Frames[1].centerY = 15;
	SpriteList[1].Animations[2].Frames[1].PegRegistered = false;
	SpriteList[1].Animations[2].Frames[1].useTransparency = true;

	SpriteList[1].Animations[2].Frames[2].BitmapName = "White Alien Right 3.bmp";
	SpriteList[1].Animations[2].Frames[2].TranslateX = 0.000;
	SpriteList[1].Animations[2].Frames[2].TranslateY = 0.000;
	SpriteList[1].Animations[2].Frames[2].Delay = 4;
	SpriteList[1].Animations[2].Frames[2].Width = 30;
	SpriteList[1].Animations[2].Frames[2].Height = 30;
	SpriteList[1].Animations[2].Frames[2].Transparency = RGB(255,255,255);
	SpriteList[1].Animations[2].Frames[2].hFlip = false;
	SpriteList[1].Animations[2].Frames[2].vFlip = false;
	SpriteList[1].Animations[2].Frames[2].zRotation = 0;
	SpriteList[1].Animations[2].Frames[2].HotSpot[0].x = 15;
	SpriteList[1].Animations[2].Frames[2].HotSpot[0].y = 15;
	::SetRect( &SpriteList[1].Animations[2].Frames[2].BBox, 0, 0, 29,29);
	SpriteList[1].Animations[2].Frames[2].centerX = 15;
	SpriteList[1].Animations[2].Frames[2].centerY = 15;
	SpriteList[1].Animations[2].Frames[2].PegRegistered = false;
	SpriteList[1].Animations[2].Frames[2].useTransparency = true;

	SpriteList[1].Animations[2].Frames[3].BitmapName = "White Alien Right 2.bmp";
	SpriteList[1].Animations[2].Frames[3].TranslateX = 0.000;
	SpriteList[1].Animations[2].Frames[3].TranslateY = 0.000;
	SpriteList[1].Animations[2].Frames[3].Delay = 4;
	SpriteList[1].Animations[2].Frames[3].Width = 30;
	SpriteList[1].Animations[2].Frames[3].Height = 30;
	SpriteList[1].Animations[2].Frames[3].Transparency = RGB(255,255,255);
	SpriteList[1].Animations[2].Frames[3].hFlip = false;
	SpriteList[1].Animations[2].Frames[3].vFlip = false;
	SpriteList[1].Animations[2].Frames[3].zRotation = 0;
	SpriteList[1].Animations[2].Frames[3].HotSpot[0].x = 15;
	SpriteList[1].Animations[2].Frames[3].HotSpot[0].y = 15;
	::SetRect( &SpriteList[1].Animations[2].Frames[3].BBox, 0, 0, 29,29);
	SpriteList[1].Animations[2].Frames[3].centerX = 15;
	SpriteList[1].Animations[2].Frames[3].centerY = 15;
	SpriteList[1].Animations[2].Frames[3].PegRegistered = false;
	SpriteList[1].Animations[2].Frames[3].useTransparency = true;


	SpriteList[1].Animations[3].TotalFrames=4;
	SpriteList[1].Animations[3].ConnectTo = 0;
	SpriteList[1].Animations[3].Frames = new FrameElem[4];

	SpriteList[1].Animations[3].Frames[0].BitmapName = "White Alien Back 1.bmp";
	SpriteList[1].Animations[3].Frames[0].TranslateX = 0.000;
	SpriteList[1].Animations[3].Frames[0].TranslateY = 0.000;
	SpriteList[1].Animations[3].Frames[0].Delay = 4;
	SpriteList[1].Animations[3].Frames[0].Width = 30;
	SpriteList[1].Animations[3].Frames[0].Height = 30;
	SpriteList[1].Animations[3].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[1].Animations[3].Frames[0].hFlip = false;
	SpriteList[1].Animations[3].Frames[0].vFlip = false;
	SpriteList[1].Animations[3].Frames[0].zRotation = 0;
	SpriteList[1].Animations[3].Frames[0].HotSpot[0].x = 15;
	SpriteList[1].Animations[3].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[1].Animations[3].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[1].Animations[3].Frames[0].centerX = 15;
	SpriteList[1].Animations[3].Frames[0].centerY = 15;
	SpriteList[1].Animations[3].Frames[0].PegRegistered = false;
	SpriteList[1].Animations[3].Frames[0].useTransparency = true;

	SpriteList[1].Animations[3].Frames[1].BitmapName = "White Alien Back 2.bmp";
	SpriteList[1].Animations[3].Frames[1].TranslateX = 0.000;
	SpriteList[1].Animations[3].Frames[1].TranslateY = 0.000;
	SpriteList[1].Animations[3].Frames[1].Delay = 4;
	SpriteList[1].Animations[3].Frames[1].Width = 30;
	SpriteList[1].Animations[3].Frames[1].Height = 30;
	SpriteList[1].Animations[3].Frames[1].Transparency = RGB(255,255,255);
	SpriteList[1].Animations[3].Frames[1].hFlip = false;
	SpriteList[1].Animations[3].Frames[1].vFlip = false;
	SpriteList[1].Animations[3].Frames[1].zRotation = 0;
	SpriteList[1].Animations[3].Frames[1].HotSpot[0].x = 15;
	SpriteList[1].Animations[3].Frames[1].HotSpot[0].y = 15;
	::SetRect( &SpriteList[1].Animations[3].Frames[1].BBox, 0, 0, 29,29);
	SpriteList[1].Animations[3].Frames[1].centerX = 15;
	SpriteList[1].Animations[3].Frames[1].centerY = 15;
	SpriteList[1].Animations[3].Frames[1].PegRegistered = false;
	SpriteList[1].Animations[3].Frames[1].useTransparency = true;

	SpriteList[1].Animations[3].Frames[2].BitmapName = "White Alien Back 3.bmp";
	SpriteList[1].Animations[3].Frames[2].TranslateX = 0.000;
	SpriteList[1].Animations[3].Frames[2].TranslateY = 0.000;
	SpriteList[1].Animations[3].Frames[2].Delay = 4;
	SpriteList[1].Animations[3].Frames[2].Width = 30;
	SpriteList[1].Animations[3].Frames[2].Height = 30;
	SpriteList[1].Animations[3].Frames[2].Transparency = RGB(255,255,255);
	SpriteList[1].Animations[3].Frames[2].hFlip = false;
	SpriteList[1].Animations[3].Frames[2].vFlip = false;
	SpriteList[1].Animations[3].Frames[2].zRotation = 0;
	SpriteList[1].Animations[3].Frames[2].HotSpot[0].x = 15;
	SpriteList[1].Animations[3].Frames[2].HotSpot[0].y = 15;
	::SetRect( &SpriteList[1].Animations[3].Frames[2].BBox, 0, 0, 29,29);
	SpriteList[1].Animations[3].Frames[2].centerX = 15;
	SpriteList[1].Animations[3].Frames[2].centerY = 15;
	SpriteList[1].Animations[3].Frames[2].PegRegistered = false;
	SpriteList[1].Animations[3].Frames[2].useTransparency = true;

	SpriteList[1].Animations[3].Frames[3].BitmapName = "White Alien Back 2.bmp";
	SpriteList[1].Animations[3].Frames[3].TranslateX = 0.000;
	SpriteList[1].Animations[3].Frames[3].TranslateY = 0.000;
	SpriteList[1].Animations[3].Frames[3].Delay = 4;
	SpriteList[1].Animations[3].Frames[3].Width = 30;
	SpriteList[1].Animations[3].Frames[3].Height = 30;
	SpriteList[1].Animations[3].Frames[3].Transparency = RGB(255,255,255);
	SpriteList[1].Animations[3].Frames[3].hFlip = false;
	SpriteList[1].Animations[3].Frames[3].vFlip = false;
	SpriteList[1].Animations[3].Frames[3].zRotation = 0;
	SpriteList[1].Animations[3].Frames[3].HotSpot[0].x = 15;
	SpriteList[1].Animations[3].Frames[3].HotSpot[0].y = 15;
	::SetRect( &SpriteList[1].Animations[3].Frames[3].BBox, 0, 0, 29,29);
	SpriteList[1].Animations[3].Frames[3].centerX = 15;
	SpriteList[1].Animations[3].Frames[3].centerY = 15;
	SpriteList[1].Animations[3].Frames[3].PegRegistered = false;
	SpriteList[1].Animations[3].Frames[3].useTransparency = true;


	SpriteList[1].Animations[4].TotalFrames=2;
	SpriteList[1].Animations[4].ConnectTo = 0;
	SpriteList[1].Animations[4].Frames = new FrameElem[2];

	SpriteList[1].Animations[4].Frames[0].BitmapName = "White Alien 2.bmp";
	SpriteList[1].Animations[4].Frames[0].TranslateX = 0.000;
	SpriteList[1].Animations[4].Frames[0].TranslateY = 0.000;
	SpriteList[1].Animations[4].Frames[0].Delay = 20;
	SpriteList[1].Animations[4].Frames[0].Width = 30;
	SpriteList[1].Animations[4].Frames[0].Height = 30;
	SpriteList[1].Animations[4].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[1].Animations[4].Frames[0].hFlip = false;
	SpriteList[1].Animations[4].Frames[0].vFlip = false;
	SpriteList[1].Animations[4].Frames[0].zRotation = 0;
	SpriteList[1].Animations[4].Frames[0].HotSpot[0].x = 15;
	SpriteList[1].Animations[4].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[1].Animations[4].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[1].Animations[4].Frames[0].centerX = 15;
	SpriteList[1].Animations[4].Frames[0].centerY = 15;
	SpriteList[1].Animations[4].Frames[0].PegRegistered = false;
	SpriteList[1].Animations[4].Frames[0].useTransparency = true;

	SpriteList[1].Animations[4].Frames[1].BitmapName = "White Alien 4.bmp";
	SpriteList[1].Animations[4].Frames[1].TranslateX = 0.000;
	SpriteList[1].Animations[4].Frames[1].TranslateY = 0.000;
	SpriteList[1].Animations[4].Frames[1].Delay = 20;
	SpriteList[1].Animations[4].Frames[1].Width = 30;
	SpriteList[1].Animations[4].Frames[1].Height = 30;
	SpriteList[1].Animations[4].Frames[1].Transparency = RGB(255,255,255);
	SpriteList[1].Animations[4].Frames[1].hFlip = false;
	SpriteList[1].Animations[4].Frames[1].vFlip = false;
	SpriteList[1].Animations[4].Frames[1].zRotation = 0;
	SpriteList[1].Animations[4].Frames[1].HotSpot[0].x = 15;
	SpriteList[1].Animations[4].Frames[1].HotSpot[0].y = 15;
	::SetRect( &SpriteList[1].Animations[4].Frames[1].BBox, 0, 0, 29,29);
	SpriteList[1].Animations[4].Frames[1].centerX = 15;
	SpriteList[1].Animations[4].Frames[1].centerY = 15;
	SpriteList[1].Animations[4].Frames[1].PegRegistered = false;
	SpriteList[1].Animations[4].Frames[1].useTransparency = true;


	SpriteList[1].Animations[5].TotalFrames=2;
	SpriteList[1].Animations[5].ConnectTo = 0;
	SpriteList[1].Animations[5].Frames = new FrameElem[2];

	SpriteList[1].Animations[5].Frames[0].BitmapName = "White Alien Back 2.bmp";
	SpriteList[1].Animations[5].Frames[0].TranslateX = 0.000;
	SpriteList[1].Animations[5].Frames[0].TranslateY = 0.000;
	SpriteList[1].Animations[5].Frames[0].Delay = 20;
	SpriteList[1].Animations[5].Frames[0].Width = 30;
	SpriteList[1].Animations[5].Frames[0].Height = 30;
	SpriteList[1].Animations[5].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[1].Animations[5].Frames[0].hFlip = false;
	SpriteList[1].Animations[5].Frames[0].vFlip = false;
	SpriteList[1].Animations[5].Frames[0].zRotation = 0;
	SpriteList[1].Animations[5].Frames[0].HotSpot[0].x = 15;
	SpriteList[1].Animations[5].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[1].Animations[5].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[1].Animations[5].Frames[0].centerX = 15;
	SpriteList[1].Animations[5].Frames[0].centerY = 15;
	SpriteList[1].Animations[5].Frames[0].PegRegistered = false;
	SpriteList[1].Animations[5].Frames[0].useTransparency = true;

	SpriteList[1].Animations[5].Frames[1].BitmapName = "White Alien Back 4.bmp";
	SpriteList[1].Animations[5].Frames[1].TranslateX = 0.000;
	SpriteList[1].Animations[5].Frames[1].TranslateY = 0.000;
	SpriteList[1].Animations[5].Frames[1].Delay = 20;
	SpriteList[1].Animations[5].Frames[1].Width = 30;
	SpriteList[1].Animations[5].Frames[1].Height = 30;
	SpriteList[1].Animations[5].Frames[1].Transparency = RGB(255,255,255);
	SpriteList[1].Animations[5].Frames[1].hFlip = false;
	SpriteList[1].Animations[5].Frames[1].vFlip = false;
	SpriteList[1].Animations[5].Frames[1].zRotation = 0;
	SpriteList[1].Animations[5].Frames[1].HotSpot[0].x = 15;
	SpriteList[1].Animations[5].Frames[1].HotSpot[0].y = 15;
	::SetRect( &SpriteList[1].Animations[5].Frames[1].BBox, 0, 0, 29,29);
	SpriteList[1].Animations[5].Frames[1].centerX = 15;
	SpriteList[1].Animations[5].Frames[1].centerY = 15;
	SpriteList[1].Animations[5].Frames[1].PegRegistered = false;
	SpriteList[1].Animations[5].Frames[1].useTransparency = true;


	SpriteList[1].Animations[6].TotalFrames=2;
	SpriteList[1].Animations[6].ConnectTo = 0;
	SpriteList[1].Animations[6].Frames = new FrameElem[2];

	SpriteList[1].Animations[6].Frames[0].BitmapName = "White Alien Right 2.bmp";
	SpriteList[1].Animations[6].Frames[0].TranslateX = 0.000;
	SpriteList[1].Animations[6].Frames[0].TranslateY = 0.000;
	SpriteList[1].Animations[6].Frames[0].Delay = 20;
	SpriteList[1].Animations[6].Frames[0].Width = 30;
	SpriteList[1].Animations[6].Frames[0].Height = 30;
	SpriteList[1].Animations[6].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[1].Animations[6].Frames[0].hFlip = false;
	SpriteList[1].Animations[6].Frames[0].vFlip = false;
	SpriteList[1].Animations[6].Frames[0].zRotation = 0;
	SpriteList[1].Animations[6].Frames[0].HotSpot[0].x = 15;
	SpriteList[1].Animations[6].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[1].Animations[6].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[1].Animations[6].Frames[0].centerX = 15;
	SpriteList[1].Animations[6].Frames[0].centerY = 15;
	SpriteList[1].Animations[6].Frames[0].PegRegistered = false;
	SpriteList[1].Animations[6].Frames[0].useTransparency = true;

	SpriteList[1].Animations[6].Frames[1].BitmapName = "White Alien Right 4.bmp";
	SpriteList[1].Animations[6].Frames[1].TranslateX = 0.000;
	SpriteList[1].Animations[6].Frames[1].TranslateY = 0.000;
	SpriteList[1].Animations[6].Frames[1].Delay = 20;
	SpriteList[1].Animations[6].Frames[1].Width = 30;
	SpriteList[1].Animations[6].Frames[1].Height = 30;
	SpriteList[1].Animations[6].Frames[1].Transparency = RGB(255,255,255);
	SpriteList[1].Animations[6].Frames[1].hFlip = false;
	SpriteList[1].Animations[6].Frames[1].vFlip = false;
	SpriteList[1].Animations[6].Frames[1].zRotation = 0;
	SpriteList[1].Animations[6].Frames[1].HotSpot[0].x = 15;
	SpriteList[1].Animations[6].Frames[1].HotSpot[0].y = 15;
	::SetRect( &SpriteList[1].Animations[6].Frames[1].BBox, 0, 0, 29,29);
	SpriteList[1].Animations[6].Frames[1].centerX = 15;
	SpriteList[1].Animations[6].Frames[1].centerY = 15;
	SpriteList[1].Animations[6].Frames[1].PegRegistered = false;
	SpriteList[1].Animations[6].Frames[1].useTransparency = true;


	SpriteList[1].Animations[7].TotalFrames=2;
	SpriteList[1].Animations[7].ConnectTo = 0;
	SpriteList[1].Animations[7].Frames = new FrameElem[2];

	SpriteList[1].Animations[7].Frames[0].BitmapName = "White Alien Left 2.bmp";
	SpriteList[1].Animations[7].Frames[0].TranslateX = 0.000;
	SpriteList[1].Animations[7].Frames[0].TranslateY = 0.000;
	SpriteList[1].Animations[7].Frames[0].Delay = 20;
	SpriteList[1].Animations[7].Frames[0].Width = 30;
	SpriteList[1].Animations[7].Frames[0].Height = 30;
	SpriteList[1].Animations[7].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[1].Animations[7].Frames[0].hFlip = false;
	SpriteList[1].Animations[7].Frames[0].vFlip = false;
	SpriteList[1].Animations[7].Frames[0].zRotation = 0;
	SpriteList[1].Animations[7].Frames[0].HotSpot[0].x = 15;
	SpriteList[1].Animations[7].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[1].Animations[7].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[1].Animations[7].Frames[0].centerX = 15;
	SpriteList[1].Animations[7].Frames[0].centerY = 15;
	SpriteList[1].Animations[7].Frames[0].PegRegistered = false;
	SpriteList[1].Animations[7].Frames[0].useTransparency = true;

	SpriteList[1].Animations[7].Frames[1].BitmapName = "White Alien Left 4.bmp";
	SpriteList[1].Animations[7].Frames[1].TranslateX = 0.000;
	SpriteList[1].Animations[7].Frames[1].TranslateY = 0.000;
	SpriteList[1].Animations[7].Frames[1].Delay = 20;
	SpriteList[1].Animations[7].Frames[1].Width = 30;
	SpriteList[1].Animations[7].Frames[1].Height = 30;
	SpriteList[1].Animations[7].Frames[1].Transparency = RGB(255,255,255);
	SpriteList[1].Animations[7].Frames[1].hFlip = false;
	SpriteList[1].Animations[7].Frames[1].vFlip = false;
	SpriteList[1].Animations[7].Frames[1].zRotation = 0;
	SpriteList[1].Animations[7].Frames[1].HotSpot[0].x = 15;
	SpriteList[1].Animations[7].Frames[1].HotSpot[0].y = 15;
	::SetRect( &SpriteList[1].Animations[7].Frames[1].BBox, 0, 0, 29,29);
	SpriteList[1].Animations[7].Frames[1].centerX = 15;
	SpriteList[1].Animations[7].Frames[1].centerY = 15;
	SpriteList[1].Animations[7].Frames[1].PegRegistered = false;
	SpriteList[1].Animations[7].Frames[1].useTransparency = true;



}

void LoadAnimation_Level_4(GameNode* gn)
{
	SpriteList[4].TotalAnimations = 7;
	SpriteList[4].Animations = new AnimationElem[7];

	SpriteList[4].Animations[0].TotalFrames=1;
	SpriteList[4].Animations[0].ConnectTo = 0;
	SpriteList[4].Animations[0].Frames = new FrameElem[1];

	SpriteList[4].Animations[0].Frames[0].BitmapName = "Wall.bmp";
	SpriteList[4].Animations[0].Frames[0].TranslateX = 0.000;
	SpriteList[4].Animations[0].Frames[0].TranslateY = 0.000;
	SpriteList[4].Animations[0].Frames[0].Delay = 1;
	SpriteList[4].Animations[0].Frames[0].Width = 30;
	SpriteList[4].Animations[0].Frames[0].Height = 30;
	SpriteList[4].Animations[0].Frames[0].Transparency = RGB(240,240,240);
	SpriteList[4].Animations[0].Frames[0].hFlip = false;
	SpriteList[4].Animations[0].Frames[0].vFlip = false;
	SpriteList[4].Animations[0].Frames[0].zRotation = 0;
	SpriteList[4].Animations[0].Frames[0].HotSpot[0].x = 15;
	SpriteList[4].Animations[0].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[4].Animations[0].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[4].Animations[0].Frames[0].centerX = 15;
	SpriteList[4].Animations[0].Frames[0].centerY = 15;
	SpriteList[4].Animations[0].Frames[0].PegRegistered = false;
	SpriteList[4].Animations[0].Frames[0].useTransparency = false;


	SpriteList[4].Animations[1].TotalFrames=3;
	SpriteList[4].Animations[1].ConnectTo = 0;
	SpriteList[4].Animations[1].Frames = new FrameElem[3];

	SpriteList[4].Animations[1].Frames[0].BitmapName = "Server 1.bmp";
	SpriteList[4].Animations[1].Frames[0].TranslateX = 0.000;
	SpriteList[4].Animations[1].Frames[0].TranslateY = 0.000;
	SpriteList[4].Animations[1].Frames[0].Delay = 21;
	SpriteList[4].Animations[1].Frames[0].Width = 30;
	SpriteList[4].Animations[1].Frames[0].Height = 30;
	SpriteList[4].Animations[1].Frames[0].Transparency = RGB(240,240,240);
	SpriteList[4].Animations[1].Frames[0].hFlip = false;
	SpriteList[4].Animations[1].Frames[0].vFlip = false;
	SpriteList[4].Animations[1].Frames[0].zRotation = 0;
	SpriteList[4].Animations[1].Frames[0].HotSpot[0].x = 15;
	SpriteList[4].Animations[1].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[4].Animations[1].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[4].Animations[1].Frames[0].centerX = 15;
	SpriteList[4].Animations[1].Frames[0].centerY = 15;
	SpriteList[4].Animations[1].Frames[0].PegRegistered = false;
	SpriteList[4].Animations[1].Frames[0].useTransparency = false;

	SpriteList[4].Animations[1].Frames[1].BitmapName = "Server 2.bmp";
	SpriteList[4].Animations[1].Frames[1].TranslateX = 0.000;
	SpriteList[4].Animations[1].Frames[1].TranslateY = 0.000;
	SpriteList[4].Animations[1].Frames[1].Delay = 21;
	SpriteList[4].Animations[1].Frames[1].Width = 30;
	SpriteList[4].Animations[1].Frames[1].Height = 30;
	SpriteList[4].Animations[1].Frames[1].Transparency = RGB(240,240,240);
	SpriteList[4].Animations[1].Frames[1].hFlip = false;
	SpriteList[4].Animations[1].Frames[1].vFlip = false;
	SpriteList[4].Animations[1].Frames[1].zRotation = 0;
	SpriteList[4].Animations[1].Frames[1].HotSpot[0].x = 15;
	SpriteList[4].Animations[1].Frames[1].HotSpot[0].y = 15;
	::SetRect( &SpriteList[4].Animations[1].Frames[1].BBox, 0, 0, 29,29);
	SpriteList[4].Animations[1].Frames[1].centerX = 15;
	SpriteList[4].Animations[1].Frames[1].centerY = 15;
	SpriteList[4].Animations[1].Frames[1].PegRegistered = false;
	SpriteList[4].Animations[1].Frames[1].useTransparency = false;

	SpriteList[4].Animations[1].Frames[2].BitmapName = "Server 3.bmp";
	SpriteList[4].Animations[1].Frames[2].TranslateX = 0.000;
	SpriteList[4].Animations[1].Frames[2].TranslateY = 0.000;
	SpriteList[4].Animations[1].Frames[2].Delay = 21;
	SpriteList[4].Animations[1].Frames[2].Width = 30;
	SpriteList[4].Animations[1].Frames[2].Height = 30;
	SpriteList[4].Animations[1].Frames[2].Transparency = RGB(240,240,240);
	SpriteList[4].Animations[1].Frames[2].hFlip = false;
	SpriteList[4].Animations[1].Frames[2].vFlip = false;
	SpriteList[4].Animations[1].Frames[2].zRotation = 0;
	SpriteList[4].Animations[1].Frames[2].HotSpot[0].x = 15;
	SpriteList[4].Animations[1].Frames[2].HotSpot[0].y = 15;
	::SetRect( &SpriteList[4].Animations[1].Frames[2].BBox, 0, 0, 29,29);
	SpriteList[4].Animations[1].Frames[2].centerX = 15;
	SpriteList[4].Animations[1].Frames[2].centerY = 15;
	SpriteList[4].Animations[1].Frames[2].PegRegistered = false;
	SpriteList[4].Animations[1].Frames[2].useTransparency = false;


	SpriteList[4].Animations[2].TotalFrames=1;
	SpriteList[4].Animations[2].ConnectTo = 0;
	SpriteList[4].Animations[2].Frames = new FrameElem[1];

	SpriteList[4].Animations[2].Frames[0].BitmapName = "Door 1.bmp";
	SpriteList[4].Animations[2].Frames[0].TranslateX = 0.000;
	SpriteList[4].Animations[2].Frames[0].TranslateY = 0.000;
	SpriteList[4].Animations[2].Frames[0].Delay = 1;
	SpriteList[4].Animations[2].Frames[0].Width = 30;
	SpriteList[4].Animations[2].Frames[0].Height = 30;
	SpriteList[4].Animations[2].Frames[0].Transparency = RGB(240,240,240);
	SpriteList[4].Animations[2].Frames[0].hFlip = false;
	SpriteList[4].Animations[2].Frames[0].vFlip = false;
	SpriteList[4].Animations[2].Frames[0].zRotation = 0;
	SpriteList[4].Animations[2].Frames[0].HotSpot[0].x = 15;
	SpriteList[4].Animations[2].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[4].Animations[2].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[4].Animations[2].Frames[0].centerX = 15;
	SpriteList[4].Animations[2].Frames[0].centerY = 15;
	SpriteList[4].Animations[2].Frames[0].PegRegistered = false;
	SpriteList[4].Animations[2].Frames[0].useTransparency = false;


	SpriteList[4].Animations[3].TotalFrames=1;
	SpriteList[4].Animations[3].ConnectTo = 0;
	SpriteList[4].Animations[3].Frames = new FrameElem[1];

	SpriteList[4].Animations[3].Frames[0].BitmapName = "Door 2.bmp";
	SpriteList[4].Animations[3].Frames[0].TranslateX = 0.000;
	SpriteList[4].Animations[3].Frames[0].TranslateY = 0.000;
	SpriteList[4].Animations[3].Frames[0].Delay = 1;
	SpriteList[4].Animations[3].Frames[0].Width = 30;
	SpriteList[4].Animations[3].Frames[0].Height = 30;
	SpriteList[4].Animations[3].Frames[0].Transparency = RGB(240,240,240);
	SpriteList[4].Animations[3].Frames[0].hFlip = false;
	SpriteList[4].Animations[3].Frames[0].vFlip = false;
	SpriteList[4].Animations[3].Frames[0].zRotation = 0;
	SpriteList[4].Animations[3].Frames[0].HotSpot[0].x = 15;
	SpriteList[4].Animations[3].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[4].Animations[3].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[4].Animations[3].Frames[0].centerX = 15;
	SpriteList[4].Animations[3].Frames[0].centerY = 15;
	SpriteList[4].Animations[3].Frames[0].PegRegistered = false;
	SpriteList[4].Animations[3].Frames[0].useTransparency = false;


	SpriteList[4].Animations[4].TotalFrames=1;
	SpriteList[4].Animations[4].ConnectTo = 0;
	SpriteList[4].Animations[4].Frames = new FrameElem[1];

	SpriteList[4].Animations[4].Frames[0].BitmapName = "Bed 1.bmp";
	SpriteList[4].Animations[4].Frames[0].TranslateX = 0.000;
	SpriteList[4].Animations[4].Frames[0].TranslateY = 0.000;
	SpriteList[4].Animations[4].Frames[0].Delay = 1;
	SpriteList[4].Animations[4].Frames[0].Width = 30;
	SpriteList[4].Animations[4].Frames[0].Height = 30;
	SpriteList[4].Animations[4].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[4].Animations[4].Frames[0].hFlip = false;
	SpriteList[4].Animations[4].Frames[0].vFlip = false;
	SpriteList[4].Animations[4].Frames[0].zRotation = 0;
	SpriteList[4].Animations[4].Frames[0].HotSpot[0].x = 15;
	SpriteList[4].Animations[4].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[4].Animations[4].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[4].Animations[4].Frames[0].centerX = 15;
	SpriteList[4].Animations[4].Frames[0].centerY = 15;
	SpriteList[4].Animations[4].Frames[0].PegRegistered = false;
	SpriteList[4].Animations[4].Frames[0].useTransparency = true;


	SpriteList[4].Animations[5].TotalFrames=1;
	SpriteList[4].Animations[5].ConnectTo = 0;
	SpriteList[4].Animations[5].Frames = new FrameElem[1];

	SpriteList[4].Animations[5].Frames[0].BitmapName = "Bed 2.bmp";
	SpriteList[4].Animations[5].Frames[0].TranslateX = 0.000;
	SpriteList[4].Animations[5].Frames[0].TranslateY = 0.000;
	SpriteList[4].Animations[5].Frames[0].Delay = 1;
	SpriteList[4].Animations[5].Frames[0].Width = 30;
	SpriteList[4].Animations[5].Frames[0].Height = 30;
	SpriteList[4].Animations[5].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[4].Animations[5].Frames[0].hFlip = false;
	SpriteList[4].Animations[5].Frames[0].vFlip = false;
	SpriteList[4].Animations[5].Frames[0].zRotation = 0;
	SpriteList[4].Animations[5].Frames[0].HotSpot[0].x = 15;
	SpriteList[4].Animations[5].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[4].Animations[5].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[4].Animations[5].Frames[0].centerX = 15;
	SpriteList[4].Animations[5].Frames[0].centerY = 15;
	SpriteList[4].Animations[5].Frames[0].PegRegistered = false;
	SpriteList[4].Animations[5].Frames[0].useTransparency = true;


	SpriteList[4].Animations[6].TotalFrames=1;
	SpriteList[4].Animations[6].ConnectTo = 0;
	SpriteList[4].Animations[6].Frames = new FrameElem[1];

	SpriteList[4].Animations[6].Frames[0].BitmapName = "Bed 3.bmp";
	SpriteList[4].Animations[6].Frames[0].TranslateX = 0.000;
	SpriteList[4].Animations[6].Frames[0].TranslateY = 0.000;
	SpriteList[4].Animations[6].Frames[0].Delay = 1;
	SpriteList[4].Animations[6].Frames[0].Width = 30;
	SpriteList[4].Animations[6].Frames[0].Height = 30;
	SpriteList[4].Animations[6].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[4].Animations[6].Frames[0].hFlip = false;
	SpriteList[4].Animations[6].Frames[0].vFlip = false;
	SpriteList[4].Animations[6].Frames[0].zRotation = 0;
	SpriteList[4].Animations[6].Frames[0].HotSpot[0].x = 15;
	SpriteList[4].Animations[6].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[4].Animations[6].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[4].Animations[6].Frames[0].centerX = 15;
	SpriteList[4].Animations[6].Frames[0].centerY = 15;
	SpriteList[4].Animations[6].Frames[0].PegRegistered = false;
	SpriteList[4].Animations[6].Frames[0].useTransparency = true;



	SpriteList[0].TotalAnimations = 8;
	SpriteList[0].Animations = new AnimationElem[8];

	SpriteList[0].Animations[0].TotalFrames=4;
	SpriteList[0].Animations[0].ConnectTo = 0;
	SpriteList[0].Animations[0].Frames = new FrameElem[4];

	SpriteList[0].Animations[0].Frames[0].BitmapName = "SpaceMan Left 1.bmp";
	SpriteList[0].Animations[0].Frames[0].TranslateX = 0.000;
	SpriteList[0].Animations[0].Frames[0].TranslateY = 0.000;
	SpriteList[0].Animations[0].Frames[0].Delay = 7;
	SpriteList[0].Animations[0].Frames[0].Width = 30;
	SpriteList[0].Animations[0].Frames[0].Height = 30;
	SpriteList[0].Animations[0].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[0].Animations[0].Frames[0].hFlip = false;
	SpriteList[0].Animations[0].Frames[0].vFlip = false;
	SpriteList[0].Animations[0].Frames[0].zRotation = 0;
	SpriteList[0].Animations[0].Frames[0].HotSpot[0].x = 15;
	SpriteList[0].Animations[0].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[0].Animations[0].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[0].Animations[0].Frames[0].centerX = 15;
	SpriteList[0].Animations[0].Frames[0].centerY = 15;
	SpriteList[0].Animations[0].Frames[0].PegRegistered = false;
	SpriteList[0].Animations[0].Frames[0].useTransparency = true;

	SpriteList[0].Animations[0].Frames[1].BitmapName = "SpaceMan Left 2.bmp";
	SpriteList[0].Animations[0].Frames[1].TranslateX = 0.000;
	SpriteList[0].Animations[0].Frames[1].TranslateY = 0.000;
	SpriteList[0].Animations[0].Frames[1].Delay = 7;
	SpriteList[0].Animations[0].Frames[1].Width = 30;
	SpriteList[0].Animations[0].Frames[1].Height = 30;
	SpriteList[0].Animations[0].Frames[1].Transparency = RGB(255,255,255);
	SpriteList[0].Animations[0].Frames[1].hFlip = false;
	SpriteList[0].Animations[0].Frames[1].vFlip = false;
	SpriteList[0].Animations[0].Frames[1].zRotation = 0;
	SpriteList[0].Animations[0].Frames[1].HotSpot[0].x = 15;
	SpriteList[0].Animations[0].Frames[1].HotSpot[0].y = 15;
	::SetRect( &SpriteList[0].Animations[0].Frames[1].BBox, 0, 0, 29,29);
	SpriteList[0].Animations[0].Frames[1].centerX = 15;
	SpriteList[0].Animations[0].Frames[1].centerY = 15;
	SpriteList[0].Animations[0].Frames[1].PegRegistered = false;
	SpriteList[0].Animations[0].Frames[1].useTransparency = true;

	SpriteList[0].Animations[0].Frames[2].BitmapName = "SpaceMan Left 3.bmp";
	SpriteList[0].Animations[0].Frames[2].TranslateX = 0.000;
	SpriteList[0].Animations[0].Frames[2].TranslateY = 0.000;
	SpriteList[0].Animations[0].Frames[2].Delay = 7;
	SpriteList[0].Animations[0].Frames[2].Width = 30;
	SpriteList[0].Animations[0].Frames[2].Height = 30;
	SpriteList[0].Animations[0].Frames[2].Transparency = RGB(255,255,255);
	SpriteList[0].Animations[0].Frames[2].hFlip = false;
	SpriteList[0].Animations[0].Frames[2].vFlip = false;
	SpriteList[0].Animations[0].Frames[2].zRotation = 0;
	SpriteList[0].Animations[0].Frames[2].HotSpot[0].x = 15;
	SpriteList[0].Animations[0].Frames[2].HotSpot[0].y = 15;
	::SetRect( &SpriteList[0].Animations[0].Frames[2].BBox, 0, 0, 29,29);
	SpriteList[0].Animations[0].Frames[2].centerX = 15;
	SpriteList[0].Animations[0].Frames[2].centerY = 15;
	SpriteList[0].Animations[0].Frames[2].PegRegistered = false;
	SpriteList[0].Animations[0].Frames[2].useTransparency = true;

	SpriteList[0].Animations[0].Frames[3].BitmapName = "SpaceMan Left 2.bmp";
	SpriteList[0].Animations[0].Frames[3].TranslateX = 0.000;
	SpriteList[0].Animations[0].Frames[3].TranslateY = 0.000;
	SpriteList[0].Animations[0].Frames[3].Delay = 7;
	SpriteList[0].Animations[0].Frames[3].Width = 30;
	SpriteList[0].Animations[0].Frames[3].Height = 30;
	SpriteList[0].Animations[0].Frames[3].Transparency = RGB(255,255,255);
	SpriteList[0].Animations[0].Frames[3].hFlip = false;
	SpriteList[0].Animations[0].Frames[3].vFlip = false;
	SpriteList[0].Animations[0].Frames[3].zRotation = 0;
	SpriteList[0].Animations[0].Frames[3].HotSpot[0].x = 15;
	SpriteList[0].Animations[0].Frames[3].HotSpot[0].y = 15;
	::SetRect( &SpriteList[0].Animations[0].Frames[3].BBox, 0, 0, 29,29);
	SpriteList[0].Animations[0].Frames[3].centerX = 15;
	SpriteList[0].Animations[0].Frames[3].centerY = 15;
	SpriteList[0].Animations[0].Frames[3].PegRegistered = false;
	SpriteList[0].Animations[0].Frames[3].useTransparency = true;


	SpriteList[0].Animations[1].TotalFrames=4;
	SpriteList[0].Animations[1].ConnectTo = 0;
	SpriteList[0].Animations[1].Frames = new FrameElem[4];

	SpriteList[0].Animations[1].Frames[0].BitmapName = "SpaceMan Right 1.bmp";
	SpriteList[0].Animations[1].Frames[0].TranslateX = 0.000;
	SpriteList[0].Animations[1].Frames[0].TranslateY = 0.000;
	SpriteList[0].Animations[1].Frames[0].Delay = 7;
	SpriteList[0].Animations[1].Frames[0].Width = 30;
	SpriteList[0].Animations[1].Frames[0].Height = 30;
	SpriteList[0].Animations[1].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[0].Animations[1].Frames[0].hFlip = false;
	SpriteList[0].Animations[1].Frames[0].vFlip = false;
	SpriteList[0].Animations[1].Frames[0].zRotation = 0;
	SpriteList[0].Animations[1].Frames[0].HotSpot[0].x = 15;
	SpriteList[0].Animations[1].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[0].Animations[1].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[0].Animations[1].Frames[0].centerX = 15;
	SpriteList[0].Animations[1].Frames[0].centerY = 15;
	SpriteList[0].Animations[1].Frames[0].PegRegistered = false;
	SpriteList[0].Animations[1].Frames[0].useTransparency = true;

	SpriteList[0].Animations[1].Frames[1].BitmapName = "SpaceMan Right 2.bmp";
	SpriteList[0].Animations[1].Frames[1].TranslateX = 0.000;
	SpriteList[0].Animations[1].Frames[1].TranslateY = 0.000;
	SpriteList[0].Animations[1].Frames[1].Delay = 7;
	SpriteList[0].Animations[1].Frames[1].Width = 30;
	SpriteList[0].Animations[1].Frames[1].Height = 30;
	SpriteList[0].Animations[1].Frames[1].Transparency = RGB(255,255,255);
	SpriteList[0].Animations[1].Frames[1].hFlip = false;
	SpriteList[0].Animations[1].Frames[1].vFlip = false;
	SpriteList[0].Animations[1].Frames[1].zRotation = 0;
	SpriteList[0].Animations[1].Frames[1].HotSpot[0].x = 15;
	SpriteList[0].Animations[1].Frames[1].HotSpot[0].y = 15;
	::SetRect( &SpriteList[0].Animations[1].Frames[1].BBox, 0, 0, 29,29);
	SpriteList[0].Animations[1].Frames[1].centerX = 15;
	SpriteList[0].Animations[1].Frames[1].centerY = 15;
	SpriteList[0].Animations[1].Frames[1].PegRegistered = false;
	SpriteList[0].Animations[1].Frames[1].useTransparency = true;

	SpriteList[0].Animations[1].Frames[2].BitmapName = "SpaceMan Right 3.bmp";
	SpriteList[0].Animations[1].Frames[2].TranslateX = 0.000;
	SpriteList[0].Animations[1].Frames[2].TranslateY = 0.000;
	SpriteList[0].Animations[1].Frames[2].Delay = 7;
	SpriteList[0].Animations[1].Frames[2].Width = 30;
	SpriteList[0].Animations[1].Frames[2].Height = 30;
	SpriteList[0].Animations[1].Frames[2].Transparency = RGB(255,255,255);
	SpriteList[0].Animations[1].Frames[2].hFlip = false;
	SpriteList[0].Animations[1].Frames[2].vFlip = false;
	SpriteList[0].Animations[1].Frames[2].zRotation = 0;
	SpriteList[0].Animations[1].Frames[2].HotSpot[0].x = 15;
	SpriteList[0].Animations[1].Frames[2].HotSpot[0].y = 15;
	::SetRect( &SpriteList[0].Animations[1].Frames[2].BBox, 0, 0, 29,29);
	SpriteList[0].Animations[1].Frames[2].centerX = 15;
	SpriteList[0].Animations[1].Frames[2].centerY = 15;
	SpriteList[0].Animations[1].Frames[2].PegRegistered = false;
	SpriteList[0].Animations[1].Frames[2].useTransparency = true;

	SpriteList[0].Animations[1].Frames[3].BitmapName = "SpaceMan Right 2.bmp";
	SpriteList[0].Animations[1].Frames[3].TranslateX = 0.000;
	SpriteList[0].Animations[1].Frames[3].TranslateY = 0.000;
	SpriteList[0].Animations[1].Frames[3].Delay = 7;
	SpriteList[0].Animations[1].Frames[3].Width = 30;
	SpriteList[0].Animations[1].Frames[3].Height = 30;
	SpriteList[0].Animations[1].Frames[3].Transparency = RGB(255,255,255);
	SpriteList[0].Animations[1].Frames[3].hFlip = false;
	SpriteList[0].Animations[1].Frames[3].vFlip = false;
	SpriteList[0].Animations[1].Frames[3].zRotation = 0;
	SpriteList[0].Animations[1].Frames[3].HotSpot[0].x = 15;
	SpriteList[0].Animations[1].Frames[3].HotSpot[0].y = 15;
	::SetRect( &SpriteList[0].Animations[1].Frames[3].BBox, 0, 0, 29,29);
	SpriteList[0].Animations[1].Frames[3].centerX = 15;
	SpriteList[0].Animations[1].Frames[3].centerY = 15;
	SpriteList[0].Animations[1].Frames[3].PegRegistered = false;
	SpriteList[0].Animations[1].Frames[3].useTransparency = true;


	SpriteList[0].Animations[2].TotalFrames=4;
	SpriteList[0].Animations[2].ConnectTo = 0;
	SpriteList[0].Animations[2].Frames = new FrameElem[4];

	SpriteList[0].Animations[2].Frames[0].BitmapName = "SpaceMan Back 1.bmp";
	SpriteList[0].Animations[2].Frames[0].TranslateX = 0.000;
	SpriteList[0].Animations[2].Frames[0].TranslateY = 0.000;
	SpriteList[0].Animations[2].Frames[0].Delay = 7;
	SpriteList[0].Animations[2].Frames[0].Width = 30;
	SpriteList[0].Animations[2].Frames[0].Height = 30;
	SpriteList[0].Animations[2].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[0].Animations[2].Frames[0].hFlip = false;
	SpriteList[0].Animations[2].Frames[0].vFlip = false;
	SpriteList[0].Animations[2].Frames[0].zRotation = 0;
	SpriteList[0].Animations[2].Frames[0].HotSpot[0].x = 15;
	SpriteList[0].Animations[2].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[0].Animations[2].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[0].Animations[2].Frames[0].centerX = 15;
	SpriteList[0].Animations[2].Frames[0].centerY = 15;
	SpriteList[0].Animations[2].Frames[0].PegRegistered = false;
	SpriteList[0].Animations[2].Frames[0].useTransparency = true;

	SpriteList[0].Animations[2].Frames[1].BitmapName = "SpaceMan Back 2.bmp";
	SpriteList[0].Animations[2].Frames[1].TranslateX = 0.000;
	SpriteList[0].Animations[2].Frames[1].TranslateY = 0.000;
	SpriteList[0].Animations[2].Frames[1].Delay = 7;
	SpriteList[0].Animations[2].Frames[1].Width = 30;
	SpriteList[0].Animations[2].Frames[1].Height = 30;
	SpriteList[0].Animations[2].Frames[1].Transparency = RGB(255,255,255);
	SpriteList[0].Animations[2].Frames[1].hFlip = false;
	SpriteList[0].Animations[2].Frames[1].vFlip = false;
	SpriteList[0].Animations[2].Frames[1].zRotation = 0;
	SpriteList[0].Animations[2].Frames[1].HotSpot[0].x = 15;
	SpriteList[0].Animations[2].Frames[1].HotSpot[0].y = 15;
	::SetRect( &SpriteList[0].Animations[2].Frames[1].BBox, 0, 0, 29,29);
	SpriteList[0].Animations[2].Frames[1].centerX = 15;
	SpriteList[0].Animations[2].Frames[1].centerY = 15;
	SpriteList[0].Animations[2].Frames[1].PegRegistered = false;
	SpriteList[0].Animations[2].Frames[1].useTransparency = true;

	SpriteList[0].Animations[2].Frames[2].BitmapName = "SpaceMan Back 3.bmp";
	SpriteList[0].Animations[2].Frames[2].TranslateX = 0.000;
	SpriteList[0].Animations[2].Frames[2].TranslateY = 0.000;
	SpriteList[0].Animations[2].Frames[2].Delay = 7;
	SpriteList[0].Animations[2].Frames[2].Width = 30;
	SpriteList[0].Animations[2].Frames[2].Height = 30;
	SpriteList[0].Animations[2].Frames[2].Transparency = RGB(255,255,255);
	SpriteList[0].Animations[2].Frames[2].hFlip = false;
	SpriteList[0].Animations[2].Frames[2].vFlip = false;
	SpriteList[0].Animations[2].Frames[2].zRotation = 0;
	SpriteList[0].Animations[2].Frames[2].HotSpot[0].x = 15;
	SpriteList[0].Animations[2].Frames[2].HotSpot[0].y = 15;
	::SetRect( &SpriteList[0].Animations[2].Frames[2].BBox, 0, 0, 29,29);
	SpriteList[0].Animations[2].Frames[2].centerX = 15;
	SpriteList[0].Animations[2].Frames[2].centerY = 15;
	SpriteList[0].Animations[2].Frames[2].PegRegistered = false;
	SpriteList[0].Animations[2].Frames[2].useTransparency = true;

	SpriteList[0].Animations[2].Frames[3].BitmapName = "SpaceMan Back 2.bmp";
	SpriteList[0].Animations[2].Frames[3].TranslateX = 0.000;
	SpriteList[0].Animations[2].Frames[3].TranslateY = 0.000;
	SpriteList[0].Animations[2].Frames[3].Delay = 7;
	SpriteList[0].Animations[2].Frames[3].Width = 30;
	SpriteList[0].Animations[2].Frames[3].Height = 30;
	SpriteList[0].Animations[2].Frames[3].Transparency = RGB(255,255,255);
	SpriteList[0].Animations[2].Frames[3].hFlip = false;
	SpriteList[0].Animations[2].Frames[3].vFlip = false;
	SpriteList[0].Animations[2].Frames[3].zRotation = 0;
	SpriteList[0].Animations[2].Frames[3].HotSpot[0].x = 15;
	SpriteList[0].Animations[2].Frames[3].HotSpot[0].y = 15;
	::SetRect( &SpriteList[0].Animations[2].Frames[3].BBox, 0, 0, 29,29);
	SpriteList[0].Animations[2].Frames[3].centerX = 15;
	SpriteList[0].Animations[2].Frames[3].centerY = 15;
	SpriteList[0].Animations[2].Frames[3].PegRegistered = false;
	SpriteList[0].Animations[2].Frames[3].useTransparency = true;


	SpriteList[0].Animations[3].TotalFrames=4;
	SpriteList[0].Animations[3].ConnectTo = 0;
	SpriteList[0].Animations[3].Frames = new FrameElem[4];

	SpriteList[0].Animations[3].Frames[0].BitmapName = "SpaceMan 1.bmp";
	SpriteList[0].Animations[3].Frames[0].TranslateX = 0.000;
	SpriteList[0].Animations[3].Frames[0].TranslateY = 0.000;
	SpriteList[0].Animations[3].Frames[0].Delay = 7;
	SpriteList[0].Animations[3].Frames[0].Width = 30;
	SpriteList[0].Animations[3].Frames[0].Height = 30;
	SpriteList[0].Animations[3].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[0].Animations[3].Frames[0].hFlip = false;
	SpriteList[0].Animations[3].Frames[0].vFlip = false;
	SpriteList[0].Animations[3].Frames[0].zRotation = 0;
	SpriteList[0].Animations[3].Frames[0].HotSpot[0].x = 15;
	SpriteList[0].Animations[3].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[0].Animations[3].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[0].Animations[3].Frames[0].centerX = 15;
	SpriteList[0].Animations[3].Frames[0].centerY = 15;
	SpriteList[0].Animations[3].Frames[0].PegRegistered = false;
	SpriteList[0].Animations[3].Frames[0].useTransparency = true;

	SpriteList[0].Animations[3].Frames[1].BitmapName = "SpaceMan 2.bmp";
	SpriteList[0].Animations[3].Frames[1].TranslateX = 0.000;
	SpriteList[0].Animations[3].Frames[1].TranslateY = 0.000;
	SpriteList[0].Animations[3].Frames[1].Delay = 7;
	SpriteList[0].Animations[3].Frames[1].Width = 30;
	SpriteList[0].Animations[3].Frames[1].Height = 30;
	SpriteList[0].Animations[3].Frames[1].Transparency = RGB(255,255,255);
	SpriteList[0].Animations[3].Frames[1].hFlip = false;
	SpriteList[0].Animations[3].Frames[1].vFlip = false;
	SpriteList[0].Animations[3].Frames[1].zRotation = 0;
	SpriteList[0].Animations[3].Frames[1].HotSpot[0].x = 15;
	SpriteList[0].Animations[3].Frames[1].HotSpot[0].y = 15;
	::SetRect( &SpriteList[0].Animations[3].Frames[1].BBox, 0, 0, 29,29);
	SpriteList[0].Animations[3].Frames[1].centerX = 15;
	SpriteList[0].Animations[3].Frames[1].centerY = 15;
	SpriteList[0].Animations[3].Frames[1].PegRegistered = false;
	SpriteList[0].Animations[3].Frames[1].useTransparency = true;

	SpriteList[0].Animations[3].Frames[2].BitmapName = "SpaceMan 3.bmp";
	SpriteList[0].Animations[3].Frames[2].TranslateX = 0.000;
	SpriteList[0].Animations[3].Frames[2].TranslateY = 0.000;
	SpriteList[0].Animations[3].Frames[2].Delay = 7;
	SpriteList[0].Animations[3].Frames[2].Width = 30;
	SpriteList[0].Animations[3].Frames[2].Height = 30;
	SpriteList[0].Animations[3].Frames[2].Transparency = RGB(255,255,255);
	SpriteList[0].Animations[3].Frames[2].hFlip = false;
	SpriteList[0].Animations[3].Frames[2].vFlip = false;
	SpriteList[0].Animations[3].Frames[2].zRotation = 0;
	SpriteList[0].Animations[3].Frames[2].HotSpot[0].x = 15;
	SpriteList[0].Animations[3].Frames[2].HotSpot[0].y = 15;
	::SetRect( &SpriteList[0].Animations[3].Frames[2].BBox, 0, 0, 29,29);
	SpriteList[0].Animations[3].Frames[2].centerX = 15;
	SpriteList[0].Animations[3].Frames[2].centerY = 15;
	SpriteList[0].Animations[3].Frames[2].PegRegistered = false;
	SpriteList[0].Animations[3].Frames[2].useTransparency = true;

	SpriteList[0].Animations[3].Frames[3].BitmapName = "SpaceMan 2.bmp";
	SpriteList[0].Animations[3].Frames[3].TranslateX = 0.000;
	SpriteList[0].Animations[3].Frames[3].TranslateY = 0.000;
	SpriteList[0].Animations[3].Frames[3].Delay = 7;
	SpriteList[0].Animations[3].Frames[3].Width = 30;
	SpriteList[0].Animations[3].Frames[3].Height = 30;
	SpriteList[0].Animations[3].Frames[3].Transparency = RGB(255,255,255);
	SpriteList[0].Animations[3].Frames[3].hFlip = false;
	SpriteList[0].Animations[3].Frames[3].vFlip = false;
	SpriteList[0].Animations[3].Frames[3].zRotation = 0;
	SpriteList[0].Animations[3].Frames[3].HotSpot[0].x = 15;
	SpriteList[0].Animations[3].Frames[3].HotSpot[0].y = 15;
	::SetRect( &SpriteList[0].Animations[3].Frames[3].BBox, 0, 0, 29,29);
	SpriteList[0].Animations[3].Frames[3].centerX = 15;
	SpriteList[0].Animations[3].Frames[3].centerY = 15;
	SpriteList[0].Animations[3].Frames[3].PegRegistered = false;
	SpriteList[0].Animations[3].Frames[3].useTransparency = true;


	SpriteList[0].Animations[4].TotalFrames=2;
	SpriteList[0].Animations[4].ConnectTo = 0;
	SpriteList[0].Animations[4].Frames = new FrameElem[2];

	SpriteList[0].Animations[4].Frames[0].BitmapName = "SpaceMan 2.bmp";
	SpriteList[0].Animations[4].Frames[0].TranslateX = 0.000;
	SpriteList[0].Animations[4].Frames[0].TranslateY = 0.000;
	SpriteList[0].Animations[4].Frames[0].Delay = 20;
	SpriteList[0].Animations[4].Frames[0].Width = 30;
	SpriteList[0].Animations[4].Frames[0].Height = 30;
	SpriteList[0].Animations[4].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[0].Animations[4].Frames[0].hFlip = false;
	SpriteList[0].Animations[4].Frames[0].vFlip = false;
	SpriteList[0].Animations[4].Frames[0].zRotation = 0;
	SpriteList[0].Animations[4].Frames[0].HotSpot[0].x = 15;
	SpriteList[0].Animations[4].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[0].Animations[4].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[0].Animations[4].Frames[0].centerX = 15;
	SpriteList[0].Animations[4].Frames[0].centerY = 15;
	SpriteList[0].Animations[4].Frames[0].PegRegistered = false;
	SpriteList[0].Animations[4].Frames[0].useTransparency = true;

	SpriteList[0].Animations[4].Frames[1].BitmapName = "SpaceMan 4.bmp";
	SpriteList[0].Animations[4].Frames[1].TranslateX = 0.000;
	SpriteList[0].Animations[4].Frames[1].TranslateY = 0.000;
	SpriteList[0].Animations[4].Frames[1].Delay = 20;
	SpriteList[0].Animations[4].Frames[1].Width = 30;
	SpriteList[0].Animations[4].Frames[1].Height = 30;
	SpriteList[0].Animations[4].Frames[1].Transparency = RGB(255,255,255);
	SpriteList[0].Animations[4].Frames[1].hFlip = false;
	SpriteList[0].Animations[4].Frames[1].vFlip = false;
	SpriteList[0].Animations[4].Frames[1].zRotation = 0;
	SpriteList[0].Animations[4].Frames[1].HotSpot[0].x = 15;
	SpriteList[0].Animations[4].Frames[1].HotSpot[0].y = 15;
	::SetRect( &SpriteList[0].Animations[4].Frames[1].BBox, 0, 0, 29,29);
	SpriteList[0].Animations[4].Frames[1].centerX = 15;
	SpriteList[0].Animations[4].Frames[1].centerY = 15;
	SpriteList[0].Animations[4].Frames[1].PegRegistered = false;
	SpriteList[0].Animations[4].Frames[1].useTransparency = true;


	SpriteList[0].Animations[5].TotalFrames=2;
	SpriteList[0].Animations[5].ConnectTo = 0;
	SpriteList[0].Animations[5].Frames = new FrameElem[2];

	SpriteList[0].Animations[5].Frames[0].BitmapName = "SpaceMan Back 2.bmp";
	SpriteList[0].Animations[5].Frames[0].TranslateX = 0.000;
	SpriteList[0].Animations[5].Frames[0].TranslateY = 0.000;
	SpriteList[0].Animations[5].Frames[0].Delay = 30;
	SpriteList[0].Animations[5].Frames[0].Width = 30;
	SpriteList[0].Animations[5].Frames[0].Height = 30;
	SpriteList[0].Animations[5].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[0].Animations[5].Frames[0].hFlip = false;
	SpriteList[0].Animations[5].Frames[0].vFlip = false;
	SpriteList[0].Animations[5].Frames[0].zRotation = 0;
	SpriteList[0].Animations[5].Frames[0].HotSpot[0].x = 15;
	SpriteList[0].Animations[5].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[0].Animations[5].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[0].Animations[5].Frames[0].centerX = 15;
	SpriteList[0].Animations[5].Frames[0].centerY = 15;
	SpriteList[0].Animations[5].Frames[0].PegRegistered = false;
	SpriteList[0].Animations[5].Frames[0].useTransparency = true;

	SpriteList[0].Animations[5].Frames[1].BitmapName = "SpaceMan Back 4.bmp";
	SpriteList[0].Animations[5].Frames[1].TranslateX = 0.000;
	SpriteList[0].Animations[5].Frames[1].TranslateY = 0.000;
	SpriteList[0].Animations[5].Frames[1].Delay = 30;
	SpriteList[0].Animations[5].Frames[1].Width = 30;
	SpriteList[0].Animations[5].Frames[1].Height = 30;
	SpriteList[0].Animations[5].Frames[1].Transparency = RGB(255,255,255);
	SpriteList[0].Animations[5].Frames[1].hFlip = false;
	SpriteList[0].Animations[5].Frames[1].vFlip = false;
	SpriteList[0].Animations[5].Frames[1].zRotation = 0;
	SpriteList[0].Animations[5].Frames[1].HotSpot[0].x = 15;
	SpriteList[0].Animations[5].Frames[1].HotSpot[0].y = 15;
	::SetRect( &SpriteList[0].Animations[5].Frames[1].BBox, 0, 0, 29,29);
	SpriteList[0].Animations[5].Frames[1].centerX = 15;
	SpriteList[0].Animations[5].Frames[1].centerY = 15;
	SpriteList[0].Animations[5].Frames[1].PegRegistered = false;
	SpriteList[0].Animations[5].Frames[1].useTransparency = true;


	SpriteList[0].Animations[6].TotalFrames=2;
	SpriteList[0].Animations[6].ConnectTo = 0;
	SpriteList[0].Animations[6].Frames = new FrameElem[2];

	SpriteList[0].Animations[6].Frames[0].BitmapName = "SpaceMan Right 2.bmp";
	SpriteList[0].Animations[6].Frames[0].TranslateX = 0.000;
	SpriteList[0].Animations[6].Frames[0].TranslateY = 0.000;
	SpriteList[0].Animations[6].Frames[0].Delay = 20;
	SpriteList[0].Animations[6].Frames[0].Width = 30;
	SpriteList[0].Animations[6].Frames[0].Height = 30;
	SpriteList[0].Animations[6].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[0].Animations[6].Frames[0].hFlip = false;
	SpriteList[0].Animations[6].Frames[0].vFlip = false;
	SpriteList[0].Animations[6].Frames[0].zRotation = 0;
	SpriteList[0].Animations[6].Frames[0].HotSpot[0].x = 15;
	SpriteList[0].Animations[6].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[0].Animations[6].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[0].Animations[6].Frames[0].centerX = 15;
	SpriteList[0].Animations[6].Frames[0].centerY = 15;
	SpriteList[0].Animations[6].Frames[0].PegRegistered = false;
	SpriteList[0].Animations[6].Frames[0].useTransparency = true;

	SpriteList[0].Animations[6].Frames[1].BitmapName = "SpaceMan Right 4.bmp";
	SpriteList[0].Animations[6].Frames[1].TranslateX = 0.000;
	SpriteList[0].Animations[6].Frames[1].TranslateY = 0.000;
	SpriteList[0].Animations[6].Frames[1].Delay = 20;
	SpriteList[0].Animations[6].Frames[1].Width = 30;
	SpriteList[0].Animations[6].Frames[1].Height = 30;
	SpriteList[0].Animations[6].Frames[1].Transparency = RGB(255,255,255);
	SpriteList[0].Animations[6].Frames[1].hFlip = false;
	SpriteList[0].Animations[6].Frames[1].vFlip = false;
	SpriteList[0].Animations[6].Frames[1].zRotation = 0;
	SpriteList[0].Animations[6].Frames[1].HotSpot[0].x = 15;
	SpriteList[0].Animations[6].Frames[1].HotSpot[0].y = 15;
	::SetRect( &SpriteList[0].Animations[6].Frames[1].BBox, 0, 0, 29,29);
	SpriteList[0].Animations[6].Frames[1].centerX = 15;
	SpriteList[0].Animations[6].Frames[1].centerY = 15;
	SpriteList[0].Animations[6].Frames[1].PegRegistered = false;
	SpriteList[0].Animations[6].Frames[1].useTransparency = true;


	SpriteList[0].Animations[7].TotalFrames=2;
	SpriteList[0].Animations[7].ConnectTo = 0;
	SpriteList[0].Animations[7].Frames = new FrameElem[2];

	SpriteList[0].Animations[7].Frames[0].BitmapName = "SpaceMan Left 2.bmp";
	SpriteList[0].Animations[7].Frames[0].TranslateX = 0.000;
	SpriteList[0].Animations[7].Frames[0].TranslateY = 0.000;
	SpriteList[0].Animations[7].Frames[0].Delay = 20;
	SpriteList[0].Animations[7].Frames[0].Width = 30;
	SpriteList[0].Animations[7].Frames[0].Height = 30;
	SpriteList[0].Animations[7].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[0].Animations[7].Frames[0].hFlip = false;
	SpriteList[0].Animations[7].Frames[0].vFlip = false;
	SpriteList[0].Animations[7].Frames[0].zRotation = 0;
	SpriteList[0].Animations[7].Frames[0].HotSpot[0].x = 15;
	SpriteList[0].Animations[7].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[0].Animations[7].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[0].Animations[7].Frames[0].centerX = 15;
	SpriteList[0].Animations[7].Frames[0].centerY = 15;
	SpriteList[0].Animations[7].Frames[0].PegRegistered = false;
	SpriteList[0].Animations[7].Frames[0].useTransparency = true;

	SpriteList[0].Animations[7].Frames[1].BitmapName = "SpaceMan Left 4.bmp";
	SpriteList[0].Animations[7].Frames[1].TranslateX = 0.000;
	SpriteList[0].Animations[7].Frames[1].TranslateY = 0.000;
	SpriteList[0].Animations[7].Frames[1].Delay = 20;
	SpriteList[0].Animations[7].Frames[1].Width = 30;
	SpriteList[0].Animations[7].Frames[1].Height = 30;
	SpriteList[0].Animations[7].Frames[1].Transparency = RGB(255,255,255);
	SpriteList[0].Animations[7].Frames[1].hFlip = false;
	SpriteList[0].Animations[7].Frames[1].vFlip = false;
	SpriteList[0].Animations[7].Frames[1].zRotation = 0;
	SpriteList[0].Animations[7].Frames[1].HotSpot[0].x = 15;
	SpriteList[0].Animations[7].Frames[1].HotSpot[0].y = 15;
	::SetRect( &SpriteList[0].Animations[7].Frames[1].BBox, 0, 0, 29,29);
	SpriteList[0].Animations[7].Frames[1].centerX = 15;
	SpriteList[0].Animations[7].Frames[1].centerY = 15;
	SpriteList[0].Animations[7].Frames[1].PegRegistered = false;
	SpriteList[0].Animations[7].Frames[1].useTransparency = true;



	SpriteList[5].TotalAnimations = 1;
	SpriteList[5].Animations = new AnimationElem[1];

	SpriteList[5].Animations[0].TotalFrames=1;
	SpriteList[5].Animations[0].ConnectTo = 0;
	SpriteList[5].Animations[0].Frames = new FrameElem[1];

	SpriteList[5].Animations[0].Frames[0].BitmapName = "Memory Chip.bmp";
	SpriteList[5].Animations[0].Frames[0].TranslateX = 0.000;
	SpriteList[5].Animations[0].Frames[0].TranslateY = 0.000;
	SpriteList[5].Animations[0].Frames[0].Delay = 1;
	SpriteList[5].Animations[0].Frames[0].Width = 30;
	SpriteList[5].Animations[0].Frames[0].Height = 30;
	SpriteList[5].Animations[0].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[5].Animations[0].Frames[0].hFlip = false;
	SpriteList[5].Animations[0].Frames[0].vFlip = false;
	SpriteList[5].Animations[0].Frames[0].zRotation = 0;
	SpriteList[5].Animations[0].Frames[0].HotSpot[0].x = 15;
	SpriteList[5].Animations[0].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[5].Animations[0].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[5].Animations[0].Frames[0].centerX = 15;
	SpriteList[5].Animations[0].Frames[0].centerY = 15;
	SpriteList[5].Animations[0].Frames[0].PegRegistered = false;
	SpriteList[5].Animations[0].Frames[0].useTransparency = true;



	SpriteList[6].TotalAnimations = 3;
	SpriteList[6].Animations = new AnimationElem[3];

	SpriteList[6].Animations[0].TotalFrames=1;
	SpriteList[6].Animations[0].ConnectTo = 0;
	SpriteList[6].Animations[0].Frames = new FrameElem[1];

	SpriteList[6].Animations[0].Frames[0].BitmapName = "Survivor Vision.bmp";
	SpriteList[6].Animations[0].Frames[0].TranslateX = 0.000;
	SpriteList[6].Animations[0].Frames[0].TranslateY = 0.000;
	SpriteList[6].Animations[0].Frames[0].Delay = 1;
	SpriteList[6].Animations[0].Frames[0].Width = 1553;
	SpriteList[6].Animations[0].Frames[0].Height = 1234;
	SpriteList[6].Animations[0].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[6].Animations[0].Frames[0].hFlip = false;
	SpriteList[6].Animations[0].Frames[0].vFlip = false;
	SpriteList[6].Animations[0].Frames[0].zRotation = 0;
	SpriteList[6].Animations[0].Frames[0].HotSpot[0].x = 776;
	SpriteList[6].Animations[0].Frames[0].HotSpot[0].y = 617;
	::SetRect( &SpriteList[6].Animations[0].Frames[0].BBox, 0, 0, 1552,1233);
	SpriteList[6].Animations[0].Frames[0].centerX = 776;
	SpriteList[6].Animations[0].Frames[0].centerY = 617;
	SpriteList[6].Animations[0].Frames[0].PegRegistered = false;
	SpriteList[6].Animations[0].Frames[0].useTransparency = true;


	SpriteList[6].Animations[1].TotalFrames=1;
	SpriteList[6].Animations[1].ConnectTo = 0;
	SpriteList[6].Animations[1].Frames = new FrameElem[1];

	SpriteList[6].Animations[1].Frames[0].BitmapName = "Moderate Vision.bmp";
	SpriteList[6].Animations[1].Frames[0].TranslateX = 0.000;
	SpriteList[6].Animations[1].Frames[0].TranslateY = 0.000;
	SpriteList[6].Animations[1].Frames[0].Delay = 1;
	SpriteList[6].Animations[1].Frames[0].Width = 1553;
	SpriteList[6].Animations[1].Frames[0].Height = 1234;
	SpriteList[6].Animations[1].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[6].Animations[1].Frames[0].hFlip = false;
	SpriteList[6].Animations[1].Frames[0].vFlip = false;
	SpriteList[6].Animations[1].Frames[0].zRotation = 0;
	SpriteList[6].Animations[1].Frames[0].HotSpot[0].x = 776;
	SpriteList[6].Animations[1].Frames[0].HotSpot[0].y = 617;
	::SetRect( &SpriteList[6].Animations[1].Frames[0].BBox, 0, 0, 1552,1233);
	SpriteList[6].Animations[1].Frames[0].centerX = 776;
	SpriteList[6].Animations[1].Frames[0].centerY = 617;
	SpriteList[6].Animations[1].Frames[0].PegRegistered = false;
	SpriteList[6].Animations[1].Frames[0].useTransparency = true;


	SpriteList[6].Animations[2].TotalFrames=1;
	SpriteList[6].Animations[2].ConnectTo = 0;
	SpriteList[6].Animations[2].Frames = new FrameElem[1];

	SpriteList[6].Animations[2].Frames[0].BitmapName = "Amateur Vision.bmp";
	SpriteList[6].Animations[2].Frames[0].TranslateX = 0.000;
	SpriteList[6].Animations[2].Frames[0].TranslateY = 0.000;
	SpriteList[6].Animations[2].Frames[0].Delay = 1;
	SpriteList[6].Animations[2].Frames[0].Width = 1553;
	SpriteList[6].Animations[2].Frames[0].Height = 1234;
	SpriteList[6].Animations[2].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[6].Animations[2].Frames[0].hFlip = false;
	SpriteList[6].Animations[2].Frames[0].vFlip = false;
	SpriteList[6].Animations[2].Frames[0].zRotation = 0;
	SpriteList[6].Animations[2].Frames[0].HotSpot[0].x = 776;
	SpriteList[6].Animations[2].Frames[0].HotSpot[0].y = 617;
	::SetRect( &SpriteList[6].Animations[2].Frames[0].BBox, 0, 0, 1552,1233);
	SpriteList[6].Animations[2].Frames[0].centerX = 776;
	SpriteList[6].Animations[2].Frames[0].centerY = 617;
	SpriteList[6].Animations[2].Frames[0].PegRegistered = false;
	SpriteList[6].Animations[2].Frames[0].useTransparency = true;



	SpriteList[9].TotalAnimations = 3;
	SpriteList[9].Animations = new AnimationElem[3];

	SpriteList[9].Animations[0].TotalFrames=1;
	SpriteList[9].Animations[0].ConnectTo = 0;
	SpriteList[9].Animations[0].Frames = new FrameElem[1];

	SpriteList[9].Animations[0].Frames[0].BitmapName = "Button.bmp";
	SpriteList[9].Animations[0].Frames[0].TranslateX = 0.000;
	SpriteList[9].Animations[0].Frames[0].TranslateY = 0.000;
	SpriteList[9].Animations[0].Frames[0].Delay = 1;
	SpriteList[9].Animations[0].Frames[0].Width = 300;
	SpriteList[9].Animations[0].Frames[0].Height = 60;
	SpriteList[9].Animations[0].Frames[0].Transparency = RGB(0,0,0);
	SpriteList[9].Animations[0].Frames[0].hFlip = false;
	SpriteList[9].Animations[0].Frames[0].vFlip = false;
	SpriteList[9].Animations[0].Frames[0].zRotation = 0;
	SpriteList[9].Animations[0].Frames[0].HotSpot[0].x = 50;
	SpriteList[9].Animations[0].Frames[0].HotSpot[0].y = 25;
	::SetRect( &SpriteList[9].Animations[0].Frames[0].BBox, 0, 0, 299,59);
	SpriteList[9].Animations[0].Frames[0].centerX = 50;
	SpriteList[9].Animations[0].Frames[0].centerY = 25;
	SpriteList[9].Animations[0].Frames[0].PegRegistered = false;
	SpriteList[9].Animations[0].Frames[0].useTransparency = true;
	SpriteList[9].Animations[0].Frames[0].AddCollisionData(CollisionSegment(298,1,1,1,0,0));
	SpriteList[9].Animations[0].Frames[0].AddCollisionData(CollisionSegment(298,58,298,1,0,0));
	SpriteList[9].Animations[0].Frames[0].AddCollisionData(CollisionSegment(1,58,298,58,0,0));
	SpriteList[9].Animations[0].Frames[0].AddCollisionData(CollisionSegment(1,1,1,58,0,0));


	SpriteList[9].Animations[1].TotalFrames=1;
	SpriteList[9].Animations[1].ConnectTo = 0;
	SpriteList[9].Animations[1].Frames = new FrameElem[1];

	SpriteList[9].Animations[1].Frames[0].BitmapName = "Life Bar.bmp";
	SpriteList[9].Animations[1].Frames[0].TranslateX = 0.000;
	SpriteList[9].Animations[1].Frames[0].TranslateY = 0.000;
	SpriteList[9].Animations[1].Frames[0].Delay = 1;
	SpriteList[9].Animations[1].Frames[0].Width = 80;
	SpriteList[9].Animations[1].Frames[0].Height = 100;
	SpriteList[9].Animations[1].Frames[0].Transparency = RGB(240,240,240);
	SpriteList[9].Animations[1].Frames[0].hFlip = false;
	SpriteList[9].Animations[1].Frames[0].vFlip = false;
	SpriteList[9].Animations[1].Frames[0].zRotation = 0;
	SpriteList[9].Animations[1].Frames[0].HotSpot[0].x = 40;
	SpriteList[9].Animations[1].Frames[0].HotSpot[0].y = 50;
	::SetRect( &SpriteList[9].Animations[1].Frames[0].BBox, 0, 0, 79,99);
	SpriteList[9].Animations[1].Frames[0].centerX = 40;
	SpriteList[9].Animations[1].Frames[0].centerY = 50;
	SpriteList[9].Animations[1].Frames[0].PegRegistered = false;
	SpriteList[9].Animations[1].Frames[0].useTransparency = false;


	SpriteList[9].Animations[2].TotalFrames=1;
	SpriteList[9].Animations[2].ConnectTo = 0;
	SpriteList[9].Animations[2].Frames = new FrameElem[1];

	SpriteList[9].Animations[2].Frames[0].BitmapName = "Lives.bmp";
	SpriteList[9].Animations[2].Frames[0].TranslateX = 0.000;
	SpriteList[9].Animations[2].Frames[0].TranslateY = 0.000;
	SpriteList[9].Animations[2].Frames[0].Delay = 1;
	SpriteList[9].Animations[2].Frames[0].Width = 80;
	SpriteList[9].Animations[2].Frames[0].Height = 600;
	SpriteList[9].Animations[2].Frames[0].Transparency = RGB(240,240,240);
	SpriteList[9].Animations[2].Frames[0].hFlip = false;
	SpriteList[9].Animations[2].Frames[0].vFlip = false;
	SpriteList[9].Animations[2].Frames[0].zRotation = 0;
	SpriteList[9].Animations[2].Frames[0].HotSpot[0].x = 40;
	SpriteList[9].Animations[2].Frames[0].HotSpot[0].y = 300;
	::SetRect( &SpriteList[9].Animations[2].Frames[0].BBox, 0, 0, 79,599);
	SpriteList[9].Animations[2].Frames[0].centerX = 40;
	SpriteList[9].Animations[2].Frames[0].centerY = 300;
	SpriteList[9].Animations[2].Frames[0].PegRegistered = false;
	SpriteList[9].Animations[2].Frames[0].useTransparency = false;



	SpriteList[7].TotalAnimations = 1;
	SpriteList[7].Animations = new AnimationElem[1];

	SpriteList[7].Animations[0].TotalFrames=6;
	SpriteList[7].Animations[0].ConnectTo = 0;
	SpriteList[7].Animations[0].Frames = new FrameElem[6];

	SpriteList[7].Animations[0].Frames[0].BitmapName = "Restart 1.bmp";
	SpriteList[7].Animations[0].Frames[0].TranslateX = 0.000;
	SpriteList[7].Animations[0].Frames[0].TranslateY = 0.000;
	SpriteList[7].Animations[0].Frames[0].Delay = 1;
	SpriteList[7].Animations[0].Frames[0].Width = 800;
	SpriteList[7].Animations[0].Frames[0].Height = 600;
	SpriteList[7].Animations[0].Frames[0].Transparency = RGB(240,240,240);
	SpriteList[7].Animations[0].Frames[0].hFlip = false;
	SpriteList[7].Animations[0].Frames[0].vFlip = false;
	SpriteList[7].Animations[0].Frames[0].zRotation = 0;
	SpriteList[7].Animations[0].Frames[0].HotSpot[0].x = 400;
	SpriteList[7].Animations[0].Frames[0].HotSpot[0].y = 300;
	::SetRect( &SpriteList[7].Animations[0].Frames[0].BBox, 0, 0, 799,599);
	SpriteList[7].Animations[0].Frames[0].centerX = 400;
	SpriteList[7].Animations[0].Frames[0].centerY = 300;
	SpriteList[7].Animations[0].Frames[0].PegRegistered = false;
	SpriteList[7].Animations[0].Frames[0].useTransparency = false;

	SpriteList[7].Animations[0].Frames[1].BitmapName = "Restart 2.bmp";
	SpriteList[7].Animations[0].Frames[1].TranslateX = 0.000;
	SpriteList[7].Animations[0].Frames[1].TranslateY = 0.000;
	SpriteList[7].Animations[0].Frames[1].Delay = 1;
	SpriteList[7].Animations[0].Frames[1].Width = 800;
	SpriteList[7].Animations[0].Frames[1].Height = 600;
	SpriteList[7].Animations[0].Frames[1].Transparency = RGB(240,240,240);
	SpriteList[7].Animations[0].Frames[1].hFlip = false;
	SpriteList[7].Animations[0].Frames[1].vFlip = false;
	SpriteList[7].Animations[0].Frames[1].zRotation = 0;
	SpriteList[7].Animations[0].Frames[1].HotSpot[0].x = 400;
	SpriteList[7].Animations[0].Frames[1].HotSpot[0].y = 300;
	::SetRect( &SpriteList[7].Animations[0].Frames[1].BBox, 0, 0, 799,599);
	SpriteList[7].Animations[0].Frames[1].centerX = 400;
	SpriteList[7].Animations[0].Frames[1].centerY = 300;
	SpriteList[7].Animations[0].Frames[1].PegRegistered = false;
	SpriteList[7].Animations[0].Frames[1].useTransparency = false;

	SpriteList[7].Animations[0].Frames[2].BitmapName = "Restart 3.bmp";
	SpriteList[7].Animations[0].Frames[2].TranslateX = 0.000;
	SpriteList[7].Animations[0].Frames[2].TranslateY = 0.000;
	SpriteList[7].Animations[0].Frames[2].Delay = 1;
	SpriteList[7].Animations[0].Frames[2].Width = 800;
	SpriteList[7].Animations[0].Frames[2].Height = 600;
	SpriteList[7].Animations[0].Frames[2].Transparency = RGB(240,240,240);
	SpriteList[7].Animations[0].Frames[2].hFlip = false;
	SpriteList[7].Animations[0].Frames[2].vFlip = false;
	SpriteList[7].Animations[0].Frames[2].zRotation = 0;
	SpriteList[7].Animations[0].Frames[2].HotSpot[0].x = 400;
	SpriteList[7].Animations[0].Frames[2].HotSpot[0].y = 300;
	::SetRect( &SpriteList[7].Animations[0].Frames[2].BBox, 0, 0, 799,599);
	SpriteList[7].Animations[0].Frames[2].centerX = 400;
	SpriteList[7].Animations[0].Frames[2].centerY = 300;
	SpriteList[7].Animations[0].Frames[2].PegRegistered = false;
	SpriteList[7].Animations[0].Frames[2].useTransparency = false;

	SpriteList[7].Animations[0].Frames[3].BitmapName = "Restart 2.bmp";
	SpriteList[7].Animations[0].Frames[3].TranslateX = 0.000;
	SpriteList[7].Animations[0].Frames[3].TranslateY = 0.000;
	SpriteList[7].Animations[0].Frames[3].Delay = 1;
	SpriteList[7].Animations[0].Frames[3].Width = 800;
	SpriteList[7].Animations[0].Frames[3].Height = 600;
	SpriteList[7].Animations[0].Frames[3].Transparency = RGB(240,240,240);
	SpriteList[7].Animations[0].Frames[3].hFlip = false;
	SpriteList[7].Animations[0].Frames[3].vFlip = false;
	SpriteList[7].Animations[0].Frames[3].zRotation = 0;
	SpriteList[7].Animations[0].Frames[3].HotSpot[0].x = 400;
	SpriteList[7].Animations[0].Frames[3].HotSpot[0].y = 300;
	::SetRect( &SpriteList[7].Animations[0].Frames[3].BBox, 0, 0, 799,599);
	SpriteList[7].Animations[0].Frames[3].centerX = 400;
	SpriteList[7].Animations[0].Frames[3].centerY = 300;
	SpriteList[7].Animations[0].Frames[3].PegRegistered = false;
	SpriteList[7].Animations[0].Frames[3].useTransparency = false;

	SpriteList[7].Animations[0].Frames[4].BitmapName = "Restart 1.bmp";
	SpriteList[7].Animations[0].Frames[4].TranslateX = 0.000;
	SpriteList[7].Animations[0].Frames[4].TranslateY = 0.000;
	SpriteList[7].Animations[0].Frames[4].Delay = 1;
	SpriteList[7].Animations[0].Frames[4].Width = 800;
	SpriteList[7].Animations[0].Frames[4].Height = 600;
	SpriteList[7].Animations[0].Frames[4].Transparency = RGB(240,240,240);
	SpriteList[7].Animations[0].Frames[4].hFlip = false;
	SpriteList[7].Animations[0].Frames[4].vFlip = false;
	SpriteList[7].Animations[0].Frames[4].zRotation = 0;
	SpriteList[7].Animations[0].Frames[4].HotSpot[0].x = 400;
	SpriteList[7].Animations[0].Frames[4].HotSpot[0].y = 300;
	::SetRect( &SpriteList[7].Animations[0].Frames[4].BBox, 0, 0, 799,599);
	SpriteList[7].Animations[0].Frames[4].centerX = 400;
	SpriteList[7].Animations[0].Frames[4].centerY = 300;
	SpriteList[7].Animations[0].Frames[4].PegRegistered = false;
	SpriteList[7].Animations[0].Frames[4].useTransparency = false;

	SpriteList[7].Animations[0].Frames[5].BitmapName = "Restart 3.bmp";
	SpriteList[7].Animations[0].Frames[5].TranslateX = 0.000;
	SpriteList[7].Animations[0].Frames[5].TranslateY = 0.000;
	SpriteList[7].Animations[0].Frames[5].Delay = 1;
	SpriteList[7].Animations[0].Frames[5].Width = 800;
	SpriteList[7].Animations[0].Frames[5].Height = 600;
	SpriteList[7].Animations[0].Frames[5].Transparency = RGB(240,240,240);
	SpriteList[7].Animations[0].Frames[5].hFlip = false;
	SpriteList[7].Animations[0].Frames[5].vFlip = false;
	SpriteList[7].Animations[0].Frames[5].zRotation = 0;
	SpriteList[7].Animations[0].Frames[5].HotSpot[0].x = 400;
	SpriteList[7].Animations[0].Frames[5].HotSpot[0].y = 300;
	::SetRect( &SpriteList[7].Animations[0].Frames[5].BBox, 0, 0, 799,599);
	SpriteList[7].Animations[0].Frames[5].centerX = 400;
	SpriteList[7].Animations[0].Frames[5].centerY = 300;
	SpriteList[7].Animations[0].Frames[5].PegRegistered = false;
	SpriteList[7].Animations[0].Frames[5].useTransparency = false;



	SpriteList[2].TotalAnimations = 8;
	SpriteList[2].Animations = new AnimationElem[8];

	SpriteList[2].Animations[0].TotalFrames=4;
	SpriteList[2].Animations[0].ConnectTo = 0;
	SpriteList[2].Animations[0].Frames = new FrameElem[4];

	SpriteList[2].Animations[0].Frames[0].BitmapName = "Green Alien 1.bmp";
	SpriteList[2].Animations[0].Frames[0].TranslateX = 0.000;
	SpriteList[2].Animations[0].Frames[0].TranslateY = 0.000;
	SpriteList[2].Animations[0].Frames[0].Delay = 10;
	SpriteList[2].Animations[0].Frames[0].Width = 30;
	SpriteList[2].Animations[0].Frames[0].Height = 30;
	SpriteList[2].Animations[0].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[2].Animations[0].Frames[0].hFlip = false;
	SpriteList[2].Animations[0].Frames[0].vFlip = false;
	SpriteList[2].Animations[0].Frames[0].zRotation = 0;
	SpriteList[2].Animations[0].Frames[0].HotSpot[0].x = 15;
	SpriteList[2].Animations[0].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[2].Animations[0].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[2].Animations[0].Frames[0].centerX = 15;
	SpriteList[2].Animations[0].Frames[0].centerY = 15;
	SpriteList[2].Animations[0].Frames[0].PegRegistered = false;
	SpriteList[2].Animations[0].Frames[0].useTransparency = true;

	SpriteList[2].Animations[0].Frames[1].BitmapName = "Green Alien 2.bmp";
	SpriteList[2].Animations[0].Frames[1].TranslateX = 0.000;
	SpriteList[2].Animations[0].Frames[1].TranslateY = 0.000;
	SpriteList[2].Animations[0].Frames[1].Delay = 10;
	SpriteList[2].Animations[0].Frames[1].Width = 30;
	SpriteList[2].Animations[0].Frames[1].Height = 30;
	SpriteList[2].Animations[0].Frames[1].Transparency = RGB(255,255,255);
	SpriteList[2].Animations[0].Frames[1].hFlip = false;
	SpriteList[2].Animations[0].Frames[1].vFlip = false;
	SpriteList[2].Animations[0].Frames[1].zRotation = 0;
	SpriteList[2].Animations[0].Frames[1].HotSpot[0].x = 15;
	SpriteList[2].Animations[0].Frames[1].HotSpot[0].y = 15;
	::SetRect( &SpriteList[2].Animations[0].Frames[1].BBox, 0, 0, 29,29);
	SpriteList[2].Animations[0].Frames[1].centerX = 15;
	SpriteList[2].Animations[0].Frames[1].centerY = 15;
	SpriteList[2].Animations[0].Frames[1].PegRegistered = false;
	SpriteList[2].Animations[0].Frames[1].useTransparency = true;

	SpriteList[2].Animations[0].Frames[2].BitmapName = "Green Alien 3.bmp";
	SpriteList[2].Animations[0].Frames[2].TranslateX = 0.000;
	SpriteList[2].Animations[0].Frames[2].TranslateY = 0.000;
	SpriteList[2].Animations[0].Frames[2].Delay = 10;
	SpriteList[2].Animations[0].Frames[2].Width = 30;
	SpriteList[2].Animations[0].Frames[2].Height = 30;
	SpriteList[2].Animations[0].Frames[2].Transparency = RGB(255,255,255);
	SpriteList[2].Animations[0].Frames[2].hFlip = false;
	SpriteList[2].Animations[0].Frames[2].vFlip = false;
	SpriteList[2].Animations[0].Frames[2].zRotation = 0;
	SpriteList[2].Animations[0].Frames[2].HotSpot[0].x = 15;
	SpriteList[2].Animations[0].Frames[2].HotSpot[0].y = 15;
	::SetRect( &SpriteList[2].Animations[0].Frames[2].BBox, 0, 0, 29,29);
	SpriteList[2].Animations[0].Frames[2].centerX = 15;
	SpriteList[2].Animations[0].Frames[2].centerY = 15;
	SpriteList[2].Animations[0].Frames[2].PegRegistered = false;
	SpriteList[2].Animations[0].Frames[2].useTransparency = true;

	SpriteList[2].Animations[0].Frames[3].BitmapName = "Green Alien 2.bmp";
	SpriteList[2].Animations[0].Frames[3].TranslateX = 0.000;
	SpriteList[2].Animations[0].Frames[3].TranslateY = 0.000;
	SpriteList[2].Animations[0].Frames[3].Delay = 10;
	SpriteList[2].Animations[0].Frames[3].Width = 30;
	SpriteList[2].Animations[0].Frames[3].Height = 30;
	SpriteList[2].Animations[0].Frames[3].Transparency = RGB(255,255,255);
	SpriteList[2].Animations[0].Frames[3].hFlip = false;
	SpriteList[2].Animations[0].Frames[3].vFlip = false;
	SpriteList[2].Animations[0].Frames[3].zRotation = 0;
	SpriteList[2].Animations[0].Frames[3].HotSpot[0].x = 15;
	SpriteList[2].Animations[0].Frames[3].HotSpot[0].y = 15;
	::SetRect( &SpriteList[2].Animations[0].Frames[3].BBox, 0, 0, 29,29);
	SpriteList[2].Animations[0].Frames[3].centerX = 15;
	SpriteList[2].Animations[0].Frames[3].centerY = 15;
	SpriteList[2].Animations[0].Frames[3].PegRegistered = false;
	SpriteList[2].Animations[0].Frames[3].useTransparency = true;


	SpriteList[2].Animations[1].TotalFrames=4;
	SpriteList[2].Animations[1].ConnectTo = 0;
	SpriteList[2].Animations[1].Frames = new FrameElem[4];

	SpriteList[2].Animations[1].Frames[0].BitmapName = "Green Alien Left 1.bmp";
	SpriteList[2].Animations[1].Frames[0].TranslateX = 0.000;
	SpriteList[2].Animations[1].Frames[0].TranslateY = 0.000;
	SpriteList[2].Animations[1].Frames[0].Delay = 10;
	SpriteList[2].Animations[1].Frames[0].Width = 30;
	SpriteList[2].Animations[1].Frames[0].Height = 30;
	SpriteList[2].Animations[1].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[2].Animations[1].Frames[0].hFlip = false;
	SpriteList[2].Animations[1].Frames[0].vFlip = false;
	SpriteList[2].Animations[1].Frames[0].zRotation = 0;
	SpriteList[2].Animations[1].Frames[0].HotSpot[0].x = 15;
	SpriteList[2].Animations[1].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[2].Animations[1].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[2].Animations[1].Frames[0].centerX = 15;
	SpriteList[2].Animations[1].Frames[0].centerY = 15;
	SpriteList[2].Animations[1].Frames[0].PegRegistered = false;
	SpriteList[2].Animations[1].Frames[0].useTransparency = true;

	SpriteList[2].Animations[1].Frames[1].BitmapName = "Green Alien Left 2.bmp";
	SpriteList[2].Animations[1].Frames[1].TranslateX = 0.000;
	SpriteList[2].Animations[1].Frames[1].TranslateY = 0.000;
	SpriteList[2].Animations[1].Frames[1].Delay = 10;
	SpriteList[2].Animations[1].Frames[1].Width = 30;
	SpriteList[2].Animations[1].Frames[1].Height = 30;
	SpriteList[2].Animations[1].Frames[1].Transparency = RGB(255,255,255);
	SpriteList[2].Animations[1].Frames[1].hFlip = false;
	SpriteList[2].Animations[1].Frames[1].vFlip = false;
	SpriteList[2].Animations[1].Frames[1].zRotation = 0;
	SpriteList[2].Animations[1].Frames[1].HotSpot[0].x = 15;
	SpriteList[2].Animations[1].Frames[1].HotSpot[0].y = 15;
	::SetRect( &SpriteList[2].Animations[1].Frames[1].BBox, 0, 0, 29,29);
	SpriteList[2].Animations[1].Frames[1].centerX = 15;
	SpriteList[2].Animations[1].Frames[1].centerY = 15;
	SpriteList[2].Animations[1].Frames[1].PegRegistered = false;
	SpriteList[2].Animations[1].Frames[1].useTransparency = true;

	SpriteList[2].Animations[1].Frames[2].BitmapName = "Green Alien Left 3.bmp";
	SpriteList[2].Animations[1].Frames[2].TranslateX = 0.000;
	SpriteList[2].Animations[1].Frames[2].TranslateY = 0.000;
	SpriteList[2].Animations[1].Frames[2].Delay = 10;
	SpriteList[2].Animations[1].Frames[2].Width = 30;
	SpriteList[2].Animations[1].Frames[2].Height = 30;
	SpriteList[2].Animations[1].Frames[2].Transparency = RGB(255,255,255);
	SpriteList[2].Animations[1].Frames[2].hFlip = false;
	SpriteList[2].Animations[1].Frames[2].vFlip = false;
	SpriteList[2].Animations[1].Frames[2].zRotation = 0;
	SpriteList[2].Animations[1].Frames[2].HotSpot[0].x = 15;
	SpriteList[2].Animations[1].Frames[2].HotSpot[0].y = 15;
	::SetRect( &SpriteList[2].Animations[1].Frames[2].BBox, 0, 0, 29,29);
	SpriteList[2].Animations[1].Frames[2].centerX = 15;
	SpriteList[2].Animations[1].Frames[2].centerY = 15;
	SpriteList[2].Animations[1].Frames[2].PegRegistered = false;
	SpriteList[2].Animations[1].Frames[2].useTransparency = true;

	SpriteList[2].Animations[1].Frames[3].BitmapName = "Green Alien Left 2.bmp";
	SpriteList[2].Animations[1].Frames[3].TranslateX = 0.000;
	SpriteList[2].Animations[1].Frames[3].TranslateY = 0.000;
	SpriteList[2].Animations[1].Frames[3].Delay = 10;
	SpriteList[2].Animations[1].Frames[3].Width = 30;
	SpriteList[2].Animations[1].Frames[3].Height = 30;
	SpriteList[2].Animations[1].Frames[3].Transparency = RGB(255,255,255);
	SpriteList[2].Animations[1].Frames[3].hFlip = false;
	SpriteList[2].Animations[1].Frames[3].vFlip = false;
	SpriteList[2].Animations[1].Frames[3].zRotation = 0;
	SpriteList[2].Animations[1].Frames[3].HotSpot[0].x = 15;
	SpriteList[2].Animations[1].Frames[3].HotSpot[0].y = 15;
	::SetRect( &SpriteList[2].Animations[1].Frames[3].BBox, 0, 0, 29,29);
	SpriteList[2].Animations[1].Frames[3].centerX = 15;
	SpriteList[2].Animations[1].Frames[3].centerY = 15;
	SpriteList[2].Animations[1].Frames[3].PegRegistered = false;
	SpriteList[2].Animations[1].Frames[3].useTransparency = true;


	SpriteList[2].Animations[2].TotalFrames=4;
	SpriteList[2].Animations[2].ConnectTo = 0;
	SpriteList[2].Animations[2].Frames = new FrameElem[4];

	SpriteList[2].Animations[2].Frames[0].BitmapName = "Green Alien Right 1.bmp";
	SpriteList[2].Animations[2].Frames[0].TranslateX = 0.000;
	SpriteList[2].Animations[2].Frames[0].TranslateY = 0.000;
	SpriteList[2].Animations[2].Frames[0].Delay = 10;
	SpriteList[2].Animations[2].Frames[0].Width = 30;
	SpriteList[2].Animations[2].Frames[0].Height = 30;
	SpriteList[2].Animations[2].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[2].Animations[2].Frames[0].hFlip = false;
	SpriteList[2].Animations[2].Frames[0].vFlip = false;
	SpriteList[2].Animations[2].Frames[0].zRotation = 0;
	SpriteList[2].Animations[2].Frames[0].HotSpot[0].x = 15;
	SpriteList[2].Animations[2].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[2].Animations[2].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[2].Animations[2].Frames[0].centerX = 15;
	SpriteList[2].Animations[2].Frames[0].centerY = 15;
	SpriteList[2].Animations[2].Frames[0].PegRegistered = false;
	SpriteList[2].Animations[2].Frames[0].useTransparency = true;

	SpriteList[2].Animations[2].Frames[1].BitmapName = "Green Alien Right 2.bmp";
	SpriteList[2].Animations[2].Frames[1].TranslateX = 0.000;
	SpriteList[2].Animations[2].Frames[1].TranslateY = 0.000;
	SpriteList[2].Animations[2].Frames[1].Delay = 10;
	SpriteList[2].Animations[2].Frames[1].Width = 30;
	SpriteList[2].Animations[2].Frames[1].Height = 30;
	SpriteList[2].Animations[2].Frames[1].Transparency = RGB(255,255,255);
	SpriteList[2].Animations[2].Frames[1].hFlip = false;
	SpriteList[2].Animations[2].Frames[1].vFlip = false;
	SpriteList[2].Animations[2].Frames[1].zRotation = 0;
	SpriteList[2].Animations[2].Frames[1].HotSpot[0].x = 15;
	SpriteList[2].Animations[2].Frames[1].HotSpot[0].y = 15;
	::SetRect( &SpriteList[2].Animations[2].Frames[1].BBox, 0, 0, 29,29);
	SpriteList[2].Animations[2].Frames[1].centerX = 15;
	SpriteList[2].Animations[2].Frames[1].centerY = 15;
	SpriteList[2].Animations[2].Frames[1].PegRegistered = false;
	SpriteList[2].Animations[2].Frames[1].useTransparency = true;

	SpriteList[2].Animations[2].Frames[2].BitmapName = "Green Alien Right 3.bmp";
	SpriteList[2].Animations[2].Frames[2].TranslateX = 0.000;
	SpriteList[2].Animations[2].Frames[2].TranslateY = 0.000;
	SpriteList[2].Animations[2].Frames[2].Delay = 10;
	SpriteList[2].Animations[2].Frames[2].Width = 30;
	SpriteList[2].Animations[2].Frames[2].Height = 30;
	SpriteList[2].Animations[2].Frames[2].Transparency = RGB(255,255,255);
	SpriteList[2].Animations[2].Frames[2].hFlip = false;
	SpriteList[2].Animations[2].Frames[2].vFlip = false;
	SpriteList[2].Animations[2].Frames[2].zRotation = 0;
	SpriteList[2].Animations[2].Frames[2].HotSpot[0].x = 15;
	SpriteList[2].Animations[2].Frames[2].HotSpot[0].y = 15;
	::SetRect( &SpriteList[2].Animations[2].Frames[2].BBox, 0, 0, 29,29);
	SpriteList[2].Animations[2].Frames[2].centerX = 15;
	SpriteList[2].Animations[2].Frames[2].centerY = 15;
	SpriteList[2].Animations[2].Frames[2].PegRegistered = false;
	SpriteList[2].Animations[2].Frames[2].useTransparency = true;

	SpriteList[2].Animations[2].Frames[3].BitmapName = "Green Alien Right 2.bmp";
	SpriteList[2].Animations[2].Frames[3].TranslateX = 0.000;
	SpriteList[2].Animations[2].Frames[3].TranslateY = 0.000;
	SpriteList[2].Animations[2].Frames[3].Delay = 10;
	SpriteList[2].Animations[2].Frames[3].Width = 30;
	SpriteList[2].Animations[2].Frames[3].Height = 30;
	SpriteList[2].Animations[2].Frames[3].Transparency = RGB(255,255,255);
	SpriteList[2].Animations[2].Frames[3].hFlip = false;
	SpriteList[2].Animations[2].Frames[3].vFlip = false;
	SpriteList[2].Animations[2].Frames[3].zRotation = 0;
	SpriteList[2].Animations[2].Frames[3].HotSpot[0].x = 15;
	SpriteList[2].Animations[2].Frames[3].HotSpot[0].y = 15;
	::SetRect( &SpriteList[2].Animations[2].Frames[3].BBox, 0, 0, 29,29);
	SpriteList[2].Animations[2].Frames[3].centerX = 15;
	SpriteList[2].Animations[2].Frames[3].centerY = 15;
	SpriteList[2].Animations[2].Frames[3].PegRegistered = false;
	SpriteList[2].Animations[2].Frames[3].useTransparency = true;


	SpriteList[2].Animations[3].TotalFrames=4;
	SpriteList[2].Animations[3].ConnectTo = 0;
	SpriteList[2].Animations[3].Frames = new FrameElem[4];

	SpriteList[2].Animations[3].Frames[0].BitmapName = "Green Alien Back 1.bmp";
	SpriteList[2].Animations[3].Frames[0].TranslateX = 0.000;
	SpriteList[2].Animations[3].Frames[0].TranslateY = 0.000;
	SpriteList[2].Animations[3].Frames[0].Delay = 10;
	SpriteList[2].Animations[3].Frames[0].Width = 30;
	SpriteList[2].Animations[3].Frames[0].Height = 30;
	SpriteList[2].Animations[3].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[2].Animations[3].Frames[0].hFlip = false;
	SpriteList[2].Animations[3].Frames[0].vFlip = false;
	SpriteList[2].Animations[3].Frames[0].zRotation = 0;
	SpriteList[2].Animations[3].Frames[0].HotSpot[0].x = 15;
	SpriteList[2].Animations[3].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[2].Animations[3].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[2].Animations[3].Frames[0].centerX = 15;
	SpriteList[2].Animations[3].Frames[0].centerY = 15;
	SpriteList[2].Animations[3].Frames[0].PegRegistered = false;
	SpriteList[2].Animations[3].Frames[0].useTransparency = true;

	SpriteList[2].Animations[3].Frames[1].BitmapName = "Green Alien Back 2.bmp";
	SpriteList[2].Animations[3].Frames[1].TranslateX = 0.000;
	SpriteList[2].Animations[3].Frames[1].TranslateY = 0.000;
	SpriteList[2].Animations[3].Frames[1].Delay = 10;
	SpriteList[2].Animations[3].Frames[1].Width = 30;
	SpriteList[2].Animations[3].Frames[1].Height = 30;
	SpriteList[2].Animations[3].Frames[1].Transparency = RGB(255,255,255);
	SpriteList[2].Animations[3].Frames[1].hFlip = false;
	SpriteList[2].Animations[3].Frames[1].vFlip = false;
	SpriteList[2].Animations[3].Frames[1].zRotation = 0;
	SpriteList[2].Animations[3].Frames[1].HotSpot[0].x = 15;
	SpriteList[2].Animations[3].Frames[1].HotSpot[0].y = 15;
	::SetRect( &SpriteList[2].Animations[3].Frames[1].BBox, 0, 0, 29,29);
	SpriteList[2].Animations[3].Frames[1].centerX = 15;
	SpriteList[2].Animations[3].Frames[1].centerY = 15;
	SpriteList[2].Animations[3].Frames[1].PegRegistered = false;
	SpriteList[2].Animations[3].Frames[1].useTransparency = true;

	SpriteList[2].Animations[3].Frames[2].BitmapName = "Green Alien Back 3.bmp";
	SpriteList[2].Animations[3].Frames[2].TranslateX = 0.000;
	SpriteList[2].Animations[3].Frames[2].TranslateY = 0.000;
	SpriteList[2].Animations[3].Frames[2].Delay = 10;
	SpriteList[2].Animations[3].Frames[2].Width = 30;
	SpriteList[2].Animations[3].Frames[2].Height = 30;
	SpriteList[2].Animations[3].Frames[2].Transparency = RGB(255,255,255);
	SpriteList[2].Animations[3].Frames[2].hFlip = false;
	SpriteList[2].Animations[3].Frames[2].vFlip = false;
	SpriteList[2].Animations[3].Frames[2].zRotation = 0;
	SpriteList[2].Animations[3].Frames[2].HotSpot[0].x = 15;
	SpriteList[2].Animations[3].Frames[2].HotSpot[0].y = 15;
	::SetRect( &SpriteList[2].Animations[3].Frames[2].BBox, 0, 0, 29,29);
	SpriteList[2].Animations[3].Frames[2].centerX = 15;
	SpriteList[2].Animations[3].Frames[2].centerY = 15;
	SpriteList[2].Animations[3].Frames[2].PegRegistered = false;
	SpriteList[2].Animations[3].Frames[2].useTransparency = true;

	SpriteList[2].Animations[3].Frames[3].BitmapName = "Green Alien Back 2.bmp";
	SpriteList[2].Animations[3].Frames[3].TranslateX = 0.000;
	SpriteList[2].Animations[3].Frames[3].TranslateY = 0.000;
	SpriteList[2].Animations[3].Frames[3].Delay = 10;
	SpriteList[2].Animations[3].Frames[3].Width = 30;
	SpriteList[2].Animations[3].Frames[3].Height = 30;
	SpriteList[2].Animations[3].Frames[3].Transparency = RGB(255,255,255);
	SpriteList[2].Animations[3].Frames[3].hFlip = false;
	SpriteList[2].Animations[3].Frames[3].vFlip = false;
	SpriteList[2].Animations[3].Frames[3].zRotation = 0;
	SpriteList[2].Animations[3].Frames[3].HotSpot[0].x = 15;
	SpriteList[2].Animations[3].Frames[3].HotSpot[0].y = 15;
	::SetRect( &SpriteList[2].Animations[3].Frames[3].BBox, 0, 0, 29,29);
	SpriteList[2].Animations[3].Frames[3].centerX = 15;
	SpriteList[2].Animations[3].Frames[3].centerY = 15;
	SpriteList[2].Animations[3].Frames[3].PegRegistered = false;
	SpriteList[2].Animations[3].Frames[3].useTransparency = true;


	SpriteList[2].Animations[4].TotalFrames=2;
	SpriteList[2].Animations[4].ConnectTo = 0;
	SpriteList[2].Animations[4].Frames = new FrameElem[2];

	SpriteList[2].Animations[4].Frames[0].BitmapName = "Green Alien 2.bmp";
	SpriteList[2].Animations[4].Frames[0].TranslateX = 0.000;
	SpriteList[2].Animations[4].Frames[0].TranslateY = 0.000;
	SpriteList[2].Animations[4].Frames[0].Delay = 20;
	SpriteList[2].Animations[4].Frames[0].Width = 30;
	SpriteList[2].Animations[4].Frames[0].Height = 30;
	SpriteList[2].Animations[4].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[2].Animations[4].Frames[0].hFlip = false;
	SpriteList[2].Animations[4].Frames[0].vFlip = false;
	SpriteList[2].Animations[4].Frames[0].zRotation = 0;
	SpriteList[2].Animations[4].Frames[0].HotSpot[0].x = 15;
	SpriteList[2].Animations[4].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[2].Animations[4].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[2].Animations[4].Frames[0].centerX = 15;
	SpriteList[2].Animations[4].Frames[0].centerY = 15;
	SpriteList[2].Animations[4].Frames[0].PegRegistered = false;
	SpriteList[2].Animations[4].Frames[0].useTransparency = true;

	SpriteList[2].Animations[4].Frames[1].BitmapName = "Green Alien 4.bmp";
	SpriteList[2].Animations[4].Frames[1].TranslateX = 0.000;
	SpriteList[2].Animations[4].Frames[1].TranslateY = 0.000;
	SpriteList[2].Animations[4].Frames[1].Delay = 20;
	SpriteList[2].Animations[4].Frames[1].Width = 30;
	SpriteList[2].Animations[4].Frames[1].Height = 30;
	SpriteList[2].Animations[4].Frames[1].Transparency = RGB(255,255,255);
	SpriteList[2].Animations[4].Frames[1].hFlip = false;
	SpriteList[2].Animations[4].Frames[1].vFlip = false;
	SpriteList[2].Animations[4].Frames[1].zRotation = 0;
	SpriteList[2].Animations[4].Frames[1].HotSpot[0].x = 15;
	SpriteList[2].Animations[4].Frames[1].HotSpot[0].y = 15;
	::SetRect( &SpriteList[2].Animations[4].Frames[1].BBox, 0, 0, 29,29);
	SpriteList[2].Animations[4].Frames[1].centerX = 15;
	SpriteList[2].Animations[4].Frames[1].centerY = 15;
	SpriteList[2].Animations[4].Frames[1].PegRegistered = false;
	SpriteList[2].Animations[4].Frames[1].useTransparency = true;


	SpriteList[2].Animations[5].TotalFrames=2;
	SpriteList[2].Animations[5].ConnectTo = 0;
	SpriteList[2].Animations[5].Frames = new FrameElem[2];

	SpriteList[2].Animations[5].Frames[0].BitmapName = "Green Alien Back 2.bmp";
	SpriteList[2].Animations[5].Frames[0].TranslateX = 0.000;
	SpriteList[2].Animations[5].Frames[0].TranslateY = 0.000;
	SpriteList[2].Animations[5].Frames[0].Delay = 20;
	SpriteList[2].Animations[5].Frames[0].Width = 30;
	SpriteList[2].Animations[5].Frames[0].Height = 30;
	SpriteList[2].Animations[5].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[2].Animations[5].Frames[0].hFlip = false;
	SpriteList[2].Animations[5].Frames[0].vFlip = false;
	SpriteList[2].Animations[5].Frames[0].zRotation = 0;
	SpriteList[2].Animations[5].Frames[0].HotSpot[0].x = 15;
	SpriteList[2].Animations[5].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[2].Animations[5].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[2].Animations[5].Frames[0].centerX = 15;
	SpriteList[2].Animations[5].Frames[0].centerY = 15;
	SpriteList[2].Animations[5].Frames[0].PegRegistered = false;
	SpriteList[2].Animations[5].Frames[0].useTransparency = true;

	SpriteList[2].Animations[5].Frames[1].BitmapName = "Green Alien Back 4.bmp";
	SpriteList[2].Animations[5].Frames[1].TranslateX = 0.000;
	SpriteList[2].Animations[5].Frames[1].TranslateY = 0.000;
	SpriteList[2].Animations[5].Frames[1].Delay = 20;
	SpriteList[2].Animations[5].Frames[1].Width = 30;
	SpriteList[2].Animations[5].Frames[1].Height = 30;
	SpriteList[2].Animations[5].Frames[1].Transparency = RGB(255,255,255);
	SpriteList[2].Animations[5].Frames[1].hFlip = false;
	SpriteList[2].Animations[5].Frames[1].vFlip = false;
	SpriteList[2].Animations[5].Frames[1].zRotation = 0;
	SpriteList[2].Animations[5].Frames[1].HotSpot[0].x = 15;
	SpriteList[2].Animations[5].Frames[1].HotSpot[0].y = 15;
	::SetRect( &SpriteList[2].Animations[5].Frames[1].BBox, 0, 0, 29,29);
	SpriteList[2].Animations[5].Frames[1].centerX = 15;
	SpriteList[2].Animations[5].Frames[1].centerY = 15;
	SpriteList[2].Animations[5].Frames[1].PegRegistered = false;
	SpriteList[2].Animations[5].Frames[1].useTransparency = true;


	SpriteList[2].Animations[6].TotalFrames=2;
	SpriteList[2].Animations[6].ConnectTo = 0;
	SpriteList[2].Animations[6].Frames = new FrameElem[2];

	SpriteList[2].Animations[6].Frames[0].BitmapName = "Green Alien Right 2.bmp";
	SpriteList[2].Animations[6].Frames[0].TranslateX = 0.000;
	SpriteList[2].Animations[6].Frames[0].TranslateY = 0.000;
	SpriteList[2].Animations[6].Frames[0].Delay = 20;
	SpriteList[2].Animations[6].Frames[0].Width = 30;
	SpriteList[2].Animations[6].Frames[0].Height = 30;
	SpriteList[2].Animations[6].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[2].Animations[6].Frames[0].hFlip = false;
	SpriteList[2].Animations[6].Frames[0].vFlip = false;
	SpriteList[2].Animations[6].Frames[0].zRotation = 0;
	SpriteList[2].Animations[6].Frames[0].HotSpot[0].x = 15;
	SpriteList[2].Animations[6].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[2].Animations[6].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[2].Animations[6].Frames[0].centerX = 15;
	SpriteList[2].Animations[6].Frames[0].centerY = 15;
	SpriteList[2].Animations[6].Frames[0].PegRegistered = false;
	SpriteList[2].Animations[6].Frames[0].useTransparency = true;

	SpriteList[2].Animations[6].Frames[1].BitmapName = "Green Alien Right 4.bmp";
	SpriteList[2].Animations[6].Frames[1].TranslateX = 0.000;
	SpriteList[2].Animations[6].Frames[1].TranslateY = 0.000;
	SpriteList[2].Animations[6].Frames[1].Delay = 20;
	SpriteList[2].Animations[6].Frames[1].Width = 30;
	SpriteList[2].Animations[6].Frames[1].Height = 30;
	SpriteList[2].Animations[6].Frames[1].Transparency = RGB(255,255,255);
	SpriteList[2].Animations[6].Frames[1].hFlip = false;
	SpriteList[2].Animations[6].Frames[1].vFlip = false;
	SpriteList[2].Animations[6].Frames[1].zRotation = 0;
	SpriteList[2].Animations[6].Frames[1].HotSpot[0].x = 15;
	SpriteList[2].Animations[6].Frames[1].HotSpot[0].y = 15;
	::SetRect( &SpriteList[2].Animations[6].Frames[1].BBox, 0, 0, 29,29);
	SpriteList[2].Animations[6].Frames[1].centerX = 15;
	SpriteList[2].Animations[6].Frames[1].centerY = 15;
	SpriteList[2].Animations[6].Frames[1].PegRegistered = false;
	SpriteList[2].Animations[6].Frames[1].useTransparency = true;


	SpriteList[2].Animations[7].TotalFrames=2;
	SpriteList[2].Animations[7].ConnectTo = 0;
	SpriteList[2].Animations[7].Frames = new FrameElem[2];

	SpriteList[2].Animations[7].Frames[0].BitmapName = "Green Alien Left 2.bmp";
	SpriteList[2].Animations[7].Frames[0].TranslateX = 0.000;
	SpriteList[2].Animations[7].Frames[0].TranslateY = 0.000;
	SpriteList[2].Animations[7].Frames[0].Delay = 20;
	SpriteList[2].Animations[7].Frames[0].Width = 30;
	SpriteList[2].Animations[7].Frames[0].Height = 30;
	SpriteList[2].Animations[7].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[2].Animations[7].Frames[0].hFlip = false;
	SpriteList[2].Animations[7].Frames[0].vFlip = false;
	SpriteList[2].Animations[7].Frames[0].zRotation = 0;
	SpriteList[2].Animations[7].Frames[0].HotSpot[0].x = 15;
	SpriteList[2].Animations[7].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[2].Animations[7].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[2].Animations[7].Frames[0].centerX = 15;
	SpriteList[2].Animations[7].Frames[0].centerY = 15;
	SpriteList[2].Animations[7].Frames[0].PegRegistered = false;
	SpriteList[2].Animations[7].Frames[0].useTransparency = true;

	SpriteList[2].Animations[7].Frames[1].BitmapName = "Green Alien Left 4.bmp";
	SpriteList[2].Animations[7].Frames[1].TranslateX = 0.000;
	SpriteList[2].Animations[7].Frames[1].TranslateY = 0.000;
	SpriteList[2].Animations[7].Frames[1].Delay = 20;
	SpriteList[2].Animations[7].Frames[1].Width = 30;
	SpriteList[2].Animations[7].Frames[1].Height = 30;
	SpriteList[2].Animations[7].Frames[1].Transparency = RGB(255,255,255);
	SpriteList[2].Animations[7].Frames[1].hFlip = false;
	SpriteList[2].Animations[7].Frames[1].vFlip = false;
	SpriteList[2].Animations[7].Frames[1].zRotation = 0;
	SpriteList[2].Animations[7].Frames[1].HotSpot[0].x = 15;
	SpriteList[2].Animations[7].Frames[1].HotSpot[0].y = 15;
	::SetRect( &SpriteList[2].Animations[7].Frames[1].BBox, 0, 0, 29,29);
	SpriteList[2].Animations[7].Frames[1].centerX = 15;
	SpriteList[2].Animations[7].Frames[1].centerY = 15;
	SpriteList[2].Animations[7].Frames[1].PegRegistered = false;
	SpriteList[2].Animations[7].Frames[1].useTransparency = true;



	SpriteList[1].TotalAnimations = 8;
	SpriteList[1].Animations = new AnimationElem[8];

	SpriteList[1].Animations[0].TotalFrames=4;
	SpriteList[1].Animations[0].ConnectTo = 0;
	SpriteList[1].Animations[0].Frames = new FrameElem[4];

	SpriteList[1].Animations[0].Frames[0].BitmapName = "White Alien 1.bmp";
	SpriteList[1].Animations[0].Frames[0].TranslateX = 0.000;
	SpriteList[1].Animations[0].Frames[0].TranslateY = 0.000;
	SpriteList[1].Animations[0].Frames[0].Delay = 4;
	SpriteList[1].Animations[0].Frames[0].Width = 30;
	SpriteList[1].Animations[0].Frames[0].Height = 30;
	SpriteList[1].Animations[0].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[1].Animations[0].Frames[0].hFlip = false;
	SpriteList[1].Animations[0].Frames[0].vFlip = false;
	SpriteList[1].Animations[0].Frames[0].zRotation = 0;
	SpriteList[1].Animations[0].Frames[0].HotSpot[0].x = 15;
	SpriteList[1].Animations[0].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[1].Animations[0].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[1].Animations[0].Frames[0].centerX = 15;
	SpriteList[1].Animations[0].Frames[0].centerY = 15;
	SpriteList[1].Animations[0].Frames[0].PegRegistered = false;
	SpriteList[1].Animations[0].Frames[0].useTransparency = true;

	SpriteList[1].Animations[0].Frames[1].BitmapName = "White Alien 2.bmp";
	SpriteList[1].Animations[0].Frames[1].TranslateX = 0.000;
	SpriteList[1].Animations[0].Frames[1].TranslateY = 0.000;
	SpriteList[1].Animations[0].Frames[1].Delay = 4;
	SpriteList[1].Animations[0].Frames[1].Width = 30;
	SpriteList[1].Animations[0].Frames[1].Height = 30;
	SpriteList[1].Animations[0].Frames[1].Transparency = RGB(255,255,255);
	SpriteList[1].Animations[0].Frames[1].hFlip = false;
	SpriteList[1].Animations[0].Frames[1].vFlip = false;
	SpriteList[1].Animations[0].Frames[1].zRotation = 0;
	SpriteList[1].Animations[0].Frames[1].HotSpot[0].x = 15;
	SpriteList[1].Animations[0].Frames[1].HotSpot[0].y = 15;
	::SetRect( &SpriteList[1].Animations[0].Frames[1].BBox, 0, 0, 29,29);
	SpriteList[1].Animations[0].Frames[1].centerX = 15;
	SpriteList[1].Animations[0].Frames[1].centerY = 15;
	SpriteList[1].Animations[0].Frames[1].PegRegistered = false;
	SpriteList[1].Animations[0].Frames[1].useTransparency = true;

	SpriteList[1].Animations[0].Frames[2].BitmapName = "White Alien 3.bmp";
	SpriteList[1].Animations[0].Frames[2].TranslateX = 0.000;
	SpriteList[1].Animations[0].Frames[2].TranslateY = 0.000;
	SpriteList[1].Animations[0].Frames[2].Delay = 4;
	SpriteList[1].Animations[0].Frames[2].Width = 30;
	SpriteList[1].Animations[0].Frames[2].Height = 30;
	SpriteList[1].Animations[0].Frames[2].Transparency = RGB(255,255,255);
	SpriteList[1].Animations[0].Frames[2].hFlip = false;
	SpriteList[1].Animations[0].Frames[2].vFlip = false;
	SpriteList[1].Animations[0].Frames[2].zRotation = 0;
	SpriteList[1].Animations[0].Frames[2].HotSpot[0].x = 15;
	SpriteList[1].Animations[0].Frames[2].HotSpot[0].y = 15;
	::SetRect( &SpriteList[1].Animations[0].Frames[2].BBox, 0, 0, 29,29);
	SpriteList[1].Animations[0].Frames[2].centerX = 15;
	SpriteList[1].Animations[0].Frames[2].centerY = 15;
	SpriteList[1].Animations[0].Frames[2].PegRegistered = false;
	SpriteList[1].Animations[0].Frames[2].useTransparency = true;

	SpriteList[1].Animations[0].Frames[3].BitmapName = "White Alien 2.bmp";
	SpriteList[1].Animations[0].Frames[3].TranslateX = 0.000;
	SpriteList[1].Animations[0].Frames[3].TranslateY = 0.000;
	SpriteList[1].Animations[0].Frames[3].Delay = 4;
	SpriteList[1].Animations[0].Frames[3].Width = 30;
	SpriteList[1].Animations[0].Frames[3].Height = 30;
	SpriteList[1].Animations[0].Frames[3].Transparency = RGB(255,255,255);
	SpriteList[1].Animations[0].Frames[3].hFlip = false;
	SpriteList[1].Animations[0].Frames[3].vFlip = false;
	SpriteList[1].Animations[0].Frames[3].zRotation = 0;
	SpriteList[1].Animations[0].Frames[3].HotSpot[0].x = 15;
	SpriteList[1].Animations[0].Frames[3].HotSpot[0].y = 15;
	::SetRect( &SpriteList[1].Animations[0].Frames[3].BBox, 0, 0, 29,29);
	SpriteList[1].Animations[0].Frames[3].centerX = 15;
	SpriteList[1].Animations[0].Frames[3].centerY = 15;
	SpriteList[1].Animations[0].Frames[3].PegRegistered = false;
	SpriteList[1].Animations[0].Frames[3].useTransparency = true;


	SpriteList[1].Animations[1].TotalFrames=4;
	SpriteList[1].Animations[1].ConnectTo = 0;
	SpriteList[1].Animations[1].Frames = new FrameElem[4];

	SpriteList[1].Animations[1].Frames[0].BitmapName = "White Alien Left 1.bmp";
	SpriteList[1].Animations[1].Frames[0].TranslateX = 0.000;
	SpriteList[1].Animations[1].Frames[0].TranslateY = 0.000;
	SpriteList[1].Animations[1].Frames[0].Delay = 4;
	SpriteList[1].Animations[1].Frames[0].Width = 30;
	SpriteList[1].Animations[1].Frames[0].Height = 30;
	SpriteList[1].Animations[1].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[1].Animations[1].Frames[0].hFlip = false;
	SpriteList[1].Animations[1].Frames[0].vFlip = false;
	SpriteList[1].Animations[1].Frames[0].zRotation = 0;
	SpriteList[1].Animations[1].Frames[0].HotSpot[0].x = 15;
	SpriteList[1].Animations[1].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[1].Animations[1].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[1].Animations[1].Frames[0].centerX = 15;
	SpriteList[1].Animations[1].Frames[0].centerY = 15;
	SpriteList[1].Animations[1].Frames[0].PegRegistered = false;
	SpriteList[1].Animations[1].Frames[0].useTransparency = true;

	SpriteList[1].Animations[1].Frames[1].BitmapName = "White Alien Left 2.bmp";
	SpriteList[1].Animations[1].Frames[1].TranslateX = 0.000;
	SpriteList[1].Animations[1].Frames[1].TranslateY = 0.000;
	SpriteList[1].Animations[1].Frames[1].Delay = 4;
	SpriteList[1].Animations[1].Frames[1].Width = 30;
	SpriteList[1].Animations[1].Frames[1].Height = 30;
	SpriteList[1].Animations[1].Frames[1].Transparency = RGB(255,255,255);
	SpriteList[1].Animations[1].Frames[1].hFlip = false;
	SpriteList[1].Animations[1].Frames[1].vFlip = false;
	SpriteList[1].Animations[1].Frames[1].zRotation = 0;
	SpriteList[1].Animations[1].Frames[1].HotSpot[0].x = 15;
	SpriteList[1].Animations[1].Frames[1].HotSpot[0].y = 15;
	::SetRect( &SpriteList[1].Animations[1].Frames[1].BBox, 0, 0, 29,29);
	SpriteList[1].Animations[1].Frames[1].centerX = 15;
	SpriteList[1].Animations[1].Frames[1].centerY = 15;
	SpriteList[1].Animations[1].Frames[1].PegRegistered = false;
	SpriteList[1].Animations[1].Frames[1].useTransparency = true;

	SpriteList[1].Animations[1].Frames[2].BitmapName = "White Alien Left 3.bmp";
	SpriteList[1].Animations[1].Frames[2].TranslateX = 0.000;
	SpriteList[1].Animations[1].Frames[2].TranslateY = 0.000;
	SpriteList[1].Animations[1].Frames[2].Delay = 4;
	SpriteList[1].Animations[1].Frames[2].Width = 30;
	SpriteList[1].Animations[1].Frames[2].Height = 30;
	SpriteList[1].Animations[1].Frames[2].Transparency = RGB(255,255,255);
	SpriteList[1].Animations[1].Frames[2].hFlip = false;
	SpriteList[1].Animations[1].Frames[2].vFlip = false;
	SpriteList[1].Animations[1].Frames[2].zRotation = 0;
	SpriteList[1].Animations[1].Frames[2].HotSpot[0].x = 15;
	SpriteList[1].Animations[1].Frames[2].HotSpot[0].y = 15;
	::SetRect( &SpriteList[1].Animations[1].Frames[2].BBox, 0, 0, 29,29);
	SpriteList[1].Animations[1].Frames[2].centerX = 15;
	SpriteList[1].Animations[1].Frames[2].centerY = 15;
	SpriteList[1].Animations[1].Frames[2].PegRegistered = false;
	SpriteList[1].Animations[1].Frames[2].useTransparency = true;

	SpriteList[1].Animations[1].Frames[3].BitmapName = "White Alien Left 2.bmp";
	SpriteList[1].Animations[1].Frames[3].TranslateX = 0.000;
	SpriteList[1].Animations[1].Frames[3].TranslateY = 0.000;
	SpriteList[1].Animations[1].Frames[3].Delay = 4;
	SpriteList[1].Animations[1].Frames[3].Width = 30;
	SpriteList[1].Animations[1].Frames[3].Height = 30;
	SpriteList[1].Animations[1].Frames[3].Transparency = RGB(255,255,255);
	SpriteList[1].Animations[1].Frames[3].hFlip = false;
	SpriteList[1].Animations[1].Frames[3].vFlip = false;
	SpriteList[1].Animations[1].Frames[3].zRotation = 0;
	SpriteList[1].Animations[1].Frames[3].HotSpot[0].x = 15;
	SpriteList[1].Animations[1].Frames[3].HotSpot[0].y = 15;
	::SetRect( &SpriteList[1].Animations[1].Frames[3].BBox, 0, 0, 29,29);
	SpriteList[1].Animations[1].Frames[3].centerX = 15;
	SpriteList[1].Animations[1].Frames[3].centerY = 15;
	SpriteList[1].Animations[1].Frames[3].PegRegistered = false;
	SpriteList[1].Animations[1].Frames[3].useTransparency = true;


	SpriteList[1].Animations[2].TotalFrames=4;
	SpriteList[1].Animations[2].ConnectTo = 0;
	SpriteList[1].Animations[2].Frames = new FrameElem[4];

	SpriteList[1].Animations[2].Frames[0].BitmapName = "White Alien Right 1.bmp";
	SpriteList[1].Animations[2].Frames[0].TranslateX = 0.000;
	SpriteList[1].Animations[2].Frames[0].TranslateY = 0.000;
	SpriteList[1].Animations[2].Frames[0].Delay = 4;
	SpriteList[1].Animations[2].Frames[0].Width = 30;
	SpriteList[1].Animations[2].Frames[0].Height = 30;
	SpriteList[1].Animations[2].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[1].Animations[2].Frames[0].hFlip = false;
	SpriteList[1].Animations[2].Frames[0].vFlip = false;
	SpriteList[1].Animations[2].Frames[0].zRotation = 0;
	SpriteList[1].Animations[2].Frames[0].HotSpot[0].x = 15;
	SpriteList[1].Animations[2].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[1].Animations[2].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[1].Animations[2].Frames[0].centerX = 15;
	SpriteList[1].Animations[2].Frames[0].centerY = 15;
	SpriteList[1].Animations[2].Frames[0].PegRegistered = false;
	SpriteList[1].Animations[2].Frames[0].useTransparency = true;

	SpriteList[1].Animations[2].Frames[1].BitmapName = "White Alien Right 2.bmp";
	SpriteList[1].Animations[2].Frames[1].TranslateX = 0.000;
	SpriteList[1].Animations[2].Frames[1].TranslateY = 0.000;
	SpriteList[1].Animations[2].Frames[1].Delay = 4;
	SpriteList[1].Animations[2].Frames[1].Width = 30;
	SpriteList[1].Animations[2].Frames[1].Height = 30;
	SpriteList[1].Animations[2].Frames[1].Transparency = RGB(255,255,255);
	SpriteList[1].Animations[2].Frames[1].hFlip = false;
	SpriteList[1].Animations[2].Frames[1].vFlip = false;
	SpriteList[1].Animations[2].Frames[1].zRotation = 0;
	SpriteList[1].Animations[2].Frames[1].HotSpot[0].x = 15;
	SpriteList[1].Animations[2].Frames[1].HotSpot[0].y = 15;
	::SetRect( &SpriteList[1].Animations[2].Frames[1].BBox, 0, 0, 29,29);
	SpriteList[1].Animations[2].Frames[1].centerX = 15;
	SpriteList[1].Animations[2].Frames[1].centerY = 15;
	SpriteList[1].Animations[2].Frames[1].PegRegistered = false;
	SpriteList[1].Animations[2].Frames[1].useTransparency = true;

	SpriteList[1].Animations[2].Frames[2].BitmapName = "White Alien Right 3.bmp";
	SpriteList[1].Animations[2].Frames[2].TranslateX = 0.000;
	SpriteList[1].Animations[2].Frames[2].TranslateY = 0.000;
	SpriteList[1].Animations[2].Frames[2].Delay = 4;
	SpriteList[1].Animations[2].Frames[2].Width = 30;
	SpriteList[1].Animations[2].Frames[2].Height = 30;
	SpriteList[1].Animations[2].Frames[2].Transparency = RGB(255,255,255);
	SpriteList[1].Animations[2].Frames[2].hFlip = false;
	SpriteList[1].Animations[2].Frames[2].vFlip = false;
	SpriteList[1].Animations[2].Frames[2].zRotation = 0;
	SpriteList[1].Animations[2].Frames[2].HotSpot[0].x = 15;
	SpriteList[1].Animations[2].Frames[2].HotSpot[0].y = 15;
	::SetRect( &SpriteList[1].Animations[2].Frames[2].BBox, 0, 0, 29,29);
	SpriteList[1].Animations[2].Frames[2].centerX = 15;
	SpriteList[1].Animations[2].Frames[2].centerY = 15;
	SpriteList[1].Animations[2].Frames[2].PegRegistered = false;
	SpriteList[1].Animations[2].Frames[2].useTransparency = true;

	SpriteList[1].Animations[2].Frames[3].BitmapName = "White Alien Right 2.bmp";
	SpriteList[1].Animations[2].Frames[3].TranslateX = 0.000;
	SpriteList[1].Animations[2].Frames[3].TranslateY = 0.000;
	SpriteList[1].Animations[2].Frames[3].Delay = 4;
	SpriteList[1].Animations[2].Frames[3].Width = 30;
	SpriteList[1].Animations[2].Frames[3].Height = 30;
	SpriteList[1].Animations[2].Frames[3].Transparency = RGB(255,255,255);
	SpriteList[1].Animations[2].Frames[3].hFlip = false;
	SpriteList[1].Animations[2].Frames[3].vFlip = false;
	SpriteList[1].Animations[2].Frames[3].zRotation = 0;
	SpriteList[1].Animations[2].Frames[3].HotSpot[0].x = 15;
	SpriteList[1].Animations[2].Frames[3].HotSpot[0].y = 15;
	::SetRect( &SpriteList[1].Animations[2].Frames[3].BBox, 0, 0, 29,29);
	SpriteList[1].Animations[2].Frames[3].centerX = 15;
	SpriteList[1].Animations[2].Frames[3].centerY = 15;
	SpriteList[1].Animations[2].Frames[3].PegRegistered = false;
	SpriteList[1].Animations[2].Frames[3].useTransparency = true;


	SpriteList[1].Animations[3].TotalFrames=4;
	SpriteList[1].Animations[3].ConnectTo = 0;
	SpriteList[1].Animations[3].Frames = new FrameElem[4];

	SpriteList[1].Animations[3].Frames[0].BitmapName = "White Alien Back 1.bmp";
	SpriteList[1].Animations[3].Frames[0].TranslateX = 0.000;
	SpriteList[1].Animations[3].Frames[0].TranslateY = 0.000;
	SpriteList[1].Animations[3].Frames[0].Delay = 4;
	SpriteList[1].Animations[3].Frames[0].Width = 30;
	SpriteList[1].Animations[3].Frames[0].Height = 30;
	SpriteList[1].Animations[3].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[1].Animations[3].Frames[0].hFlip = false;
	SpriteList[1].Animations[3].Frames[0].vFlip = false;
	SpriteList[1].Animations[3].Frames[0].zRotation = 0;
	SpriteList[1].Animations[3].Frames[0].HotSpot[0].x = 15;
	SpriteList[1].Animations[3].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[1].Animations[3].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[1].Animations[3].Frames[0].centerX = 15;
	SpriteList[1].Animations[3].Frames[0].centerY = 15;
	SpriteList[1].Animations[3].Frames[0].PegRegistered = false;
	SpriteList[1].Animations[3].Frames[0].useTransparency = true;

	SpriteList[1].Animations[3].Frames[1].BitmapName = "White Alien Back 2.bmp";
	SpriteList[1].Animations[3].Frames[1].TranslateX = 0.000;
	SpriteList[1].Animations[3].Frames[1].TranslateY = 0.000;
	SpriteList[1].Animations[3].Frames[1].Delay = 4;
	SpriteList[1].Animations[3].Frames[1].Width = 30;
	SpriteList[1].Animations[3].Frames[1].Height = 30;
	SpriteList[1].Animations[3].Frames[1].Transparency = RGB(255,255,255);
	SpriteList[1].Animations[3].Frames[1].hFlip = false;
	SpriteList[1].Animations[3].Frames[1].vFlip = false;
	SpriteList[1].Animations[3].Frames[1].zRotation = 0;
	SpriteList[1].Animations[3].Frames[1].HotSpot[0].x = 15;
	SpriteList[1].Animations[3].Frames[1].HotSpot[0].y = 15;
	::SetRect( &SpriteList[1].Animations[3].Frames[1].BBox, 0, 0, 29,29);
	SpriteList[1].Animations[3].Frames[1].centerX = 15;
	SpriteList[1].Animations[3].Frames[1].centerY = 15;
	SpriteList[1].Animations[3].Frames[1].PegRegistered = false;
	SpriteList[1].Animations[3].Frames[1].useTransparency = true;

	SpriteList[1].Animations[3].Frames[2].BitmapName = "White Alien Back 3.bmp";
	SpriteList[1].Animations[3].Frames[2].TranslateX = 0.000;
	SpriteList[1].Animations[3].Frames[2].TranslateY = 0.000;
	SpriteList[1].Animations[3].Frames[2].Delay = 4;
	SpriteList[1].Animations[3].Frames[2].Width = 30;
	SpriteList[1].Animations[3].Frames[2].Height = 30;
	SpriteList[1].Animations[3].Frames[2].Transparency = RGB(255,255,255);
	SpriteList[1].Animations[3].Frames[2].hFlip = false;
	SpriteList[1].Animations[3].Frames[2].vFlip = false;
	SpriteList[1].Animations[3].Frames[2].zRotation = 0;
	SpriteList[1].Animations[3].Frames[2].HotSpot[0].x = 15;
	SpriteList[1].Animations[3].Frames[2].HotSpot[0].y = 15;
	::SetRect( &SpriteList[1].Animations[3].Frames[2].BBox, 0, 0, 29,29);
	SpriteList[1].Animations[3].Frames[2].centerX = 15;
	SpriteList[1].Animations[3].Frames[2].centerY = 15;
	SpriteList[1].Animations[3].Frames[2].PegRegistered = false;
	SpriteList[1].Animations[3].Frames[2].useTransparency = true;

	SpriteList[1].Animations[3].Frames[3].BitmapName = "White Alien Back 2.bmp";
	SpriteList[1].Animations[3].Frames[3].TranslateX = 0.000;
	SpriteList[1].Animations[3].Frames[3].TranslateY = 0.000;
	SpriteList[1].Animations[3].Frames[3].Delay = 4;
	SpriteList[1].Animations[3].Frames[3].Width = 30;
	SpriteList[1].Animations[3].Frames[3].Height = 30;
	SpriteList[1].Animations[3].Frames[3].Transparency = RGB(255,255,255);
	SpriteList[1].Animations[3].Frames[3].hFlip = false;
	SpriteList[1].Animations[3].Frames[3].vFlip = false;
	SpriteList[1].Animations[3].Frames[3].zRotation = 0;
	SpriteList[1].Animations[3].Frames[3].HotSpot[0].x = 15;
	SpriteList[1].Animations[3].Frames[3].HotSpot[0].y = 15;
	::SetRect( &SpriteList[1].Animations[3].Frames[3].BBox, 0, 0, 29,29);
	SpriteList[1].Animations[3].Frames[3].centerX = 15;
	SpriteList[1].Animations[3].Frames[3].centerY = 15;
	SpriteList[1].Animations[3].Frames[3].PegRegistered = false;
	SpriteList[1].Animations[3].Frames[3].useTransparency = true;


	SpriteList[1].Animations[4].TotalFrames=2;
	SpriteList[1].Animations[4].ConnectTo = 0;
	SpriteList[1].Animations[4].Frames = new FrameElem[2];

	SpriteList[1].Animations[4].Frames[0].BitmapName = "White Alien 2.bmp";
	SpriteList[1].Animations[4].Frames[0].TranslateX = 0.000;
	SpriteList[1].Animations[4].Frames[0].TranslateY = 0.000;
	SpriteList[1].Animations[4].Frames[0].Delay = 20;
	SpriteList[1].Animations[4].Frames[0].Width = 30;
	SpriteList[1].Animations[4].Frames[0].Height = 30;
	SpriteList[1].Animations[4].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[1].Animations[4].Frames[0].hFlip = false;
	SpriteList[1].Animations[4].Frames[0].vFlip = false;
	SpriteList[1].Animations[4].Frames[0].zRotation = 0;
	SpriteList[1].Animations[4].Frames[0].HotSpot[0].x = 15;
	SpriteList[1].Animations[4].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[1].Animations[4].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[1].Animations[4].Frames[0].centerX = 15;
	SpriteList[1].Animations[4].Frames[0].centerY = 15;
	SpriteList[1].Animations[4].Frames[0].PegRegistered = false;
	SpriteList[1].Animations[4].Frames[0].useTransparency = true;

	SpriteList[1].Animations[4].Frames[1].BitmapName = "White Alien 4.bmp";
	SpriteList[1].Animations[4].Frames[1].TranslateX = 0.000;
	SpriteList[1].Animations[4].Frames[1].TranslateY = 0.000;
	SpriteList[1].Animations[4].Frames[1].Delay = 20;
	SpriteList[1].Animations[4].Frames[1].Width = 30;
	SpriteList[1].Animations[4].Frames[1].Height = 30;
	SpriteList[1].Animations[4].Frames[1].Transparency = RGB(255,255,255);
	SpriteList[1].Animations[4].Frames[1].hFlip = false;
	SpriteList[1].Animations[4].Frames[1].vFlip = false;
	SpriteList[1].Animations[4].Frames[1].zRotation = 0;
	SpriteList[1].Animations[4].Frames[1].HotSpot[0].x = 15;
	SpriteList[1].Animations[4].Frames[1].HotSpot[0].y = 15;
	::SetRect( &SpriteList[1].Animations[4].Frames[1].BBox, 0, 0, 29,29);
	SpriteList[1].Animations[4].Frames[1].centerX = 15;
	SpriteList[1].Animations[4].Frames[1].centerY = 15;
	SpriteList[1].Animations[4].Frames[1].PegRegistered = false;
	SpriteList[1].Animations[4].Frames[1].useTransparency = true;


	SpriteList[1].Animations[5].TotalFrames=2;
	SpriteList[1].Animations[5].ConnectTo = 0;
	SpriteList[1].Animations[5].Frames = new FrameElem[2];

	SpriteList[1].Animations[5].Frames[0].BitmapName = "White Alien Back 2.bmp";
	SpriteList[1].Animations[5].Frames[0].TranslateX = 0.000;
	SpriteList[1].Animations[5].Frames[0].TranslateY = 0.000;
	SpriteList[1].Animations[5].Frames[0].Delay = 20;
	SpriteList[1].Animations[5].Frames[0].Width = 30;
	SpriteList[1].Animations[5].Frames[0].Height = 30;
	SpriteList[1].Animations[5].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[1].Animations[5].Frames[0].hFlip = false;
	SpriteList[1].Animations[5].Frames[0].vFlip = false;
	SpriteList[1].Animations[5].Frames[0].zRotation = 0;
	SpriteList[1].Animations[5].Frames[0].HotSpot[0].x = 15;
	SpriteList[1].Animations[5].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[1].Animations[5].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[1].Animations[5].Frames[0].centerX = 15;
	SpriteList[1].Animations[5].Frames[0].centerY = 15;
	SpriteList[1].Animations[5].Frames[0].PegRegistered = false;
	SpriteList[1].Animations[5].Frames[0].useTransparency = true;

	SpriteList[1].Animations[5].Frames[1].BitmapName = "White Alien Back 4.bmp";
	SpriteList[1].Animations[5].Frames[1].TranslateX = 0.000;
	SpriteList[1].Animations[5].Frames[1].TranslateY = 0.000;
	SpriteList[1].Animations[5].Frames[1].Delay = 20;
	SpriteList[1].Animations[5].Frames[1].Width = 30;
	SpriteList[1].Animations[5].Frames[1].Height = 30;
	SpriteList[1].Animations[5].Frames[1].Transparency = RGB(255,255,255);
	SpriteList[1].Animations[5].Frames[1].hFlip = false;
	SpriteList[1].Animations[5].Frames[1].vFlip = false;
	SpriteList[1].Animations[5].Frames[1].zRotation = 0;
	SpriteList[1].Animations[5].Frames[1].HotSpot[0].x = 15;
	SpriteList[1].Animations[5].Frames[1].HotSpot[0].y = 15;
	::SetRect( &SpriteList[1].Animations[5].Frames[1].BBox, 0, 0, 29,29);
	SpriteList[1].Animations[5].Frames[1].centerX = 15;
	SpriteList[1].Animations[5].Frames[1].centerY = 15;
	SpriteList[1].Animations[5].Frames[1].PegRegistered = false;
	SpriteList[1].Animations[5].Frames[1].useTransparency = true;


	SpriteList[1].Animations[6].TotalFrames=2;
	SpriteList[1].Animations[6].ConnectTo = 0;
	SpriteList[1].Animations[6].Frames = new FrameElem[2];

	SpriteList[1].Animations[6].Frames[0].BitmapName = "White Alien Right 2.bmp";
	SpriteList[1].Animations[6].Frames[0].TranslateX = 0.000;
	SpriteList[1].Animations[6].Frames[0].TranslateY = 0.000;
	SpriteList[1].Animations[6].Frames[0].Delay = 20;
	SpriteList[1].Animations[6].Frames[0].Width = 30;
	SpriteList[1].Animations[6].Frames[0].Height = 30;
	SpriteList[1].Animations[6].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[1].Animations[6].Frames[0].hFlip = false;
	SpriteList[1].Animations[6].Frames[0].vFlip = false;
	SpriteList[1].Animations[6].Frames[0].zRotation = 0;
	SpriteList[1].Animations[6].Frames[0].HotSpot[0].x = 15;
	SpriteList[1].Animations[6].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[1].Animations[6].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[1].Animations[6].Frames[0].centerX = 15;
	SpriteList[1].Animations[6].Frames[0].centerY = 15;
	SpriteList[1].Animations[6].Frames[0].PegRegistered = false;
	SpriteList[1].Animations[6].Frames[0].useTransparency = true;

	SpriteList[1].Animations[6].Frames[1].BitmapName = "White Alien Right 4.bmp";
	SpriteList[1].Animations[6].Frames[1].TranslateX = 0.000;
	SpriteList[1].Animations[6].Frames[1].TranslateY = 0.000;
	SpriteList[1].Animations[6].Frames[1].Delay = 20;
	SpriteList[1].Animations[6].Frames[1].Width = 30;
	SpriteList[1].Animations[6].Frames[1].Height = 30;
	SpriteList[1].Animations[6].Frames[1].Transparency = RGB(255,255,255);
	SpriteList[1].Animations[6].Frames[1].hFlip = false;
	SpriteList[1].Animations[6].Frames[1].vFlip = false;
	SpriteList[1].Animations[6].Frames[1].zRotation = 0;
	SpriteList[1].Animations[6].Frames[1].HotSpot[0].x = 15;
	SpriteList[1].Animations[6].Frames[1].HotSpot[0].y = 15;
	::SetRect( &SpriteList[1].Animations[6].Frames[1].BBox, 0, 0, 29,29);
	SpriteList[1].Animations[6].Frames[1].centerX = 15;
	SpriteList[1].Animations[6].Frames[1].centerY = 15;
	SpriteList[1].Animations[6].Frames[1].PegRegistered = false;
	SpriteList[1].Animations[6].Frames[1].useTransparency = true;


	SpriteList[1].Animations[7].TotalFrames=2;
	SpriteList[1].Animations[7].ConnectTo = 0;
	SpriteList[1].Animations[7].Frames = new FrameElem[2];

	SpriteList[1].Animations[7].Frames[0].BitmapName = "White Alien Left 2.bmp";
	SpriteList[1].Animations[7].Frames[0].TranslateX = 0.000;
	SpriteList[1].Animations[7].Frames[0].TranslateY = 0.000;
	SpriteList[1].Animations[7].Frames[0].Delay = 20;
	SpriteList[1].Animations[7].Frames[0].Width = 30;
	SpriteList[1].Animations[7].Frames[0].Height = 30;
	SpriteList[1].Animations[7].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[1].Animations[7].Frames[0].hFlip = false;
	SpriteList[1].Animations[7].Frames[0].vFlip = false;
	SpriteList[1].Animations[7].Frames[0].zRotation = 0;
	SpriteList[1].Animations[7].Frames[0].HotSpot[0].x = 15;
	SpriteList[1].Animations[7].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[1].Animations[7].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[1].Animations[7].Frames[0].centerX = 15;
	SpriteList[1].Animations[7].Frames[0].centerY = 15;
	SpriteList[1].Animations[7].Frames[0].PegRegistered = false;
	SpriteList[1].Animations[7].Frames[0].useTransparency = true;

	SpriteList[1].Animations[7].Frames[1].BitmapName = "White Alien Left 4.bmp";
	SpriteList[1].Animations[7].Frames[1].TranslateX = 0.000;
	SpriteList[1].Animations[7].Frames[1].TranslateY = 0.000;
	SpriteList[1].Animations[7].Frames[1].Delay = 20;
	SpriteList[1].Animations[7].Frames[1].Width = 30;
	SpriteList[1].Animations[7].Frames[1].Height = 30;
	SpriteList[1].Animations[7].Frames[1].Transparency = RGB(255,255,255);
	SpriteList[1].Animations[7].Frames[1].hFlip = false;
	SpriteList[1].Animations[7].Frames[1].vFlip = false;
	SpriteList[1].Animations[7].Frames[1].zRotation = 0;
	SpriteList[1].Animations[7].Frames[1].HotSpot[0].x = 15;
	SpriteList[1].Animations[7].Frames[1].HotSpot[0].y = 15;
	::SetRect( &SpriteList[1].Animations[7].Frames[1].BBox, 0, 0, 29,29);
	SpriteList[1].Animations[7].Frames[1].centerX = 15;
	SpriteList[1].Animations[7].Frames[1].centerY = 15;
	SpriteList[1].Animations[7].Frames[1].PegRegistered = false;
	SpriteList[1].Animations[7].Frames[1].useTransparency = true;



}

void LoadAnimation_Level_5(GameNode* gn)
{
	SpriteList[4].TotalAnimations = 7;
	SpriteList[4].Animations = new AnimationElem[7];

	SpriteList[4].Animations[0].TotalFrames=1;
	SpriteList[4].Animations[0].ConnectTo = 0;
	SpriteList[4].Animations[0].Frames = new FrameElem[1];

	SpriteList[4].Animations[0].Frames[0].BitmapName = "Wall.bmp";
	SpriteList[4].Animations[0].Frames[0].TranslateX = 0.000;
	SpriteList[4].Animations[0].Frames[0].TranslateY = 0.000;
	SpriteList[4].Animations[0].Frames[0].Delay = 1;
	SpriteList[4].Animations[0].Frames[0].Width = 30;
	SpriteList[4].Animations[0].Frames[0].Height = 30;
	SpriteList[4].Animations[0].Frames[0].Transparency = RGB(240,240,240);
	SpriteList[4].Animations[0].Frames[0].hFlip = false;
	SpriteList[4].Animations[0].Frames[0].vFlip = false;
	SpriteList[4].Animations[0].Frames[0].zRotation = 0;
	SpriteList[4].Animations[0].Frames[0].HotSpot[0].x = 15;
	SpriteList[4].Animations[0].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[4].Animations[0].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[4].Animations[0].Frames[0].centerX = 15;
	SpriteList[4].Animations[0].Frames[0].centerY = 15;
	SpriteList[4].Animations[0].Frames[0].PegRegistered = false;
	SpriteList[4].Animations[0].Frames[0].useTransparency = false;


	SpriteList[4].Animations[1].TotalFrames=3;
	SpriteList[4].Animations[1].ConnectTo = 0;
	SpriteList[4].Animations[1].Frames = new FrameElem[3];

	SpriteList[4].Animations[1].Frames[0].BitmapName = "Server 1.bmp";
	SpriteList[4].Animations[1].Frames[0].TranslateX = 0.000;
	SpriteList[4].Animations[1].Frames[0].TranslateY = 0.000;
	SpriteList[4].Animations[1].Frames[0].Delay = 21;
	SpriteList[4].Animations[1].Frames[0].Width = 30;
	SpriteList[4].Animations[1].Frames[0].Height = 30;
	SpriteList[4].Animations[1].Frames[0].Transparency = RGB(240,240,240);
	SpriteList[4].Animations[1].Frames[0].hFlip = false;
	SpriteList[4].Animations[1].Frames[0].vFlip = false;
	SpriteList[4].Animations[1].Frames[0].zRotation = 0;
	SpriteList[4].Animations[1].Frames[0].HotSpot[0].x = 15;
	SpriteList[4].Animations[1].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[4].Animations[1].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[4].Animations[1].Frames[0].centerX = 15;
	SpriteList[4].Animations[1].Frames[0].centerY = 15;
	SpriteList[4].Animations[1].Frames[0].PegRegistered = false;
	SpriteList[4].Animations[1].Frames[0].useTransparency = false;

	SpriteList[4].Animations[1].Frames[1].BitmapName = "Server 2.bmp";
	SpriteList[4].Animations[1].Frames[1].TranslateX = 0.000;
	SpriteList[4].Animations[1].Frames[1].TranslateY = 0.000;
	SpriteList[4].Animations[1].Frames[1].Delay = 21;
	SpriteList[4].Animations[1].Frames[1].Width = 30;
	SpriteList[4].Animations[1].Frames[1].Height = 30;
	SpriteList[4].Animations[1].Frames[1].Transparency = RGB(240,240,240);
	SpriteList[4].Animations[1].Frames[1].hFlip = false;
	SpriteList[4].Animations[1].Frames[1].vFlip = false;
	SpriteList[4].Animations[1].Frames[1].zRotation = 0;
	SpriteList[4].Animations[1].Frames[1].HotSpot[0].x = 15;
	SpriteList[4].Animations[1].Frames[1].HotSpot[0].y = 15;
	::SetRect( &SpriteList[4].Animations[1].Frames[1].BBox, 0, 0, 29,29);
	SpriteList[4].Animations[1].Frames[1].centerX = 15;
	SpriteList[4].Animations[1].Frames[1].centerY = 15;
	SpriteList[4].Animations[1].Frames[1].PegRegistered = false;
	SpriteList[4].Animations[1].Frames[1].useTransparency = false;

	SpriteList[4].Animations[1].Frames[2].BitmapName = "Server 3.bmp";
	SpriteList[4].Animations[1].Frames[2].TranslateX = 0.000;
	SpriteList[4].Animations[1].Frames[2].TranslateY = 0.000;
	SpriteList[4].Animations[1].Frames[2].Delay = 21;
	SpriteList[4].Animations[1].Frames[2].Width = 30;
	SpriteList[4].Animations[1].Frames[2].Height = 30;
	SpriteList[4].Animations[1].Frames[2].Transparency = RGB(240,240,240);
	SpriteList[4].Animations[1].Frames[2].hFlip = false;
	SpriteList[4].Animations[1].Frames[2].vFlip = false;
	SpriteList[4].Animations[1].Frames[2].zRotation = 0;
	SpriteList[4].Animations[1].Frames[2].HotSpot[0].x = 15;
	SpriteList[4].Animations[1].Frames[2].HotSpot[0].y = 15;
	::SetRect( &SpriteList[4].Animations[1].Frames[2].BBox, 0, 0, 29,29);
	SpriteList[4].Animations[1].Frames[2].centerX = 15;
	SpriteList[4].Animations[1].Frames[2].centerY = 15;
	SpriteList[4].Animations[1].Frames[2].PegRegistered = false;
	SpriteList[4].Animations[1].Frames[2].useTransparency = false;


	SpriteList[4].Animations[2].TotalFrames=1;
	SpriteList[4].Animations[2].ConnectTo = 0;
	SpriteList[4].Animations[2].Frames = new FrameElem[1];

	SpriteList[4].Animations[2].Frames[0].BitmapName = "Door 1.bmp";
	SpriteList[4].Animations[2].Frames[0].TranslateX = 0.000;
	SpriteList[4].Animations[2].Frames[0].TranslateY = 0.000;
	SpriteList[4].Animations[2].Frames[0].Delay = 1;
	SpriteList[4].Animations[2].Frames[0].Width = 30;
	SpriteList[4].Animations[2].Frames[0].Height = 30;
	SpriteList[4].Animations[2].Frames[0].Transparency = RGB(240,240,240);
	SpriteList[4].Animations[2].Frames[0].hFlip = false;
	SpriteList[4].Animations[2].Frames[0].vFlip = false;
	SpriteList[4].Animations[2].Frames[0].zRotation = 0;
	SpriteList[4].Animations[2].Frames[0].HotSpot[0].x = 15;
	SpriteList[4].Animations[2].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[4].Animations[2].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[4].Animations[2].Frames[0].centerX = 15;
	SpriteList[4].Animations[2].Frames[0].centerY = 15;
	SpriteList[4].Animations[2].Frames[0].PegRegistered = false;
	SpriteList[4].Animations[2].Frames[0].useTransparency = false;


	SpriteList[4].Animations[3].TotalFrames=1;
	SpriteList[4].Animations[3].ConnectTo = 0;
	SpriteList[4].Animations[3].Frames = new FrameElem[1];

	SpriteList[4].Animations[3].Frames[0].BitmapName = "Door 2.bmp";
	SpriteList[4].Animations[3].Frames[0].TranslateX = 0.000;
	SpriteList[4].Animations[3].Frames[0].TranslateY = 0.000;
	SpriteList[4].Animations[3].Frames[0].Delay = 1;
	SpriteList[4].Animations[3].Frames[0].Width = 30;
	SpriteList[4].Animations[3].Frames[0].Height = 30;
	SpriteList[4].Animations[3].Frames[0].Transparency = RGB(240,240,240);
	SpriteList[4].Animations[3].Frames[0].hFlip = false;
	SpriteList[4].Animations[3].Frames[0].vFlip = false;
	SpriteList[4].Animations[3].Frames[0].zRotation = 0;
	SpriteList[4].Animations[3].Frames[0].HotSpot[0].x = 15;
	SpriteList[4].Animations[3].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[4].Animations[3].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[4].Animations[3].Frames[0].centerX = 15;
	SpriteList[4].Animations[3].Frames[0].centerY = 15;
	SpriteList[4].Animations[3].Frames[0].PegRegistered = false;
	SpriteList[4].Animations[3].Frames[0].useTransparency = false;


	SpriteList[4].Animations[4].TotalFrames=1;
	SpriteList[4].Animations[4].ConnectTo = 0;
	SpriteList[4].Animations[4].Frames = new FrameElem[1];

	SpriteList[4].Animations[4].Frames[0].BitmapName = "Bed 1.bmp";
	SpriteList[4].Animations[4].Frames[0].TranslateX = 0.000;
	SpriteList[4].Animations[4].Frames[0].TranslateY = 0.000;
	SpriteList[4].Animations[4].Frames[0].Delay = 1;
	SpriteList[4].Animations[4].Frames[0].Width = 30;
	SpriteList[4].Animations[4].Frames[0].Height = 30;
	SpriteList[4].Animations[4].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[4].Animations[4].Frames[0].hFlip = false;
	SpriteList[4].Animations[4].Frames[0].vFlip = false;
	SpriteList[4].Animations[4].Frames[0].zRotation = 0;
	SpriteList[4].Animations[4].Frames[0].HotSpot[0].x = 15;
	SpriteList[4].Animations[4].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[4].Animations[4].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[4].Animations[4].Frames[0].centerX = 15;
	SpriteList[4].Animations[4].Frames[0].centerY = 15;
	SpriteList[4].Animations[4].Frames[0].PegRegistered = false;
	SpriteList[4].Animations[4].Frames[0].useTransparency = true;


	SpriteList[4].Animations[5].TotalFrames=1;
	SpriteList[4].Animations[5].ConnectTo = 0;
	SpriteList[4].Animations[5].Frames = new FrameElem[1];

	SpriteList[4].Animations[5].Frames[0].BitmapName = "Bed 2.bmp";
	SpriteList[4].Animations[5].Frames[0].TranslateX = 0.000;
	SpriteList[4].Animations[5].Frames[0].TranslateY = 0.000;
	SpriteList[4].Animations[5].Frames[0].Delay = 1;
	SpriteList[4].Animations[5].Frames[0].Width = 30;
	SpriteList[4].Animations[5].Frames[0].Height = 30;
	SpriteList[4].Animations[5].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[4].Animations[5].Frames[0].hFlip = false;
	SpriteList[4].Animations[5].Frames[0].vFlip = false;
	SpriteList[4].Animations[5].Frames[0].zRotation = 0;
	SpriteList[4].Animations[5].Frames[0].HotSpot[0].x = 15;
	SpriteList[4].Animations[5].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[4].Animations[5].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[4].Animations[5].Frames[0].centerX = 15;
	SpriteList[4].Animations[5].Frames[0].centerY = 15;
	SpriteList[4].Animations[5].Frames[0].PegRegistered = false;
	SpriteList[4].Animations[5].Frames[0].useTransparency = true;


	SpriteList[4].Animations[6].TotalFrames=1;
	SpriteList[4].Animations[6].ConnectTo = 0;
	SpriteList[4].Animations[6].Frames = new FrameElem[1];

	SpriteList[4].Animations[6].Frames[0].BitmapName = "Bed 3.bmp";
	SpriteList[4].Animations[6].Frames[0].TranslateX = 0.000;
	SpriteList[4].Animations[6].Frames[0].TranslateY = 0.000;
	SpriteList[4].Animations[6].Frames[0].Delay = 1;
	SpriteList[4].Animations[6].Frames[0].Width = 30;
	SpriteList[4].Animations[6].Frames[0].Height = 30;
	SpriteList[4].Animations[6].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[4].Animations[6].Frames[0].hFlip = false;
	SpriteList[4].Animations[6].Frames[0].vFlip = false;
	SpriteList[4].Animations[6].Frames[0].zRotation = 0;
	SpriteList[4].Animations[6].Frames[0].HotSpot[0].x = 15;
	SpriteList[4].Animations[6].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[4].Animations[6].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[4].Animations[6].Frames[0].centerX = 15;
	SpriteList[4].Animations[6].Frames[0].centerY = 15;
	SpriteList[4].Animations[6].Frames[0].PegRegistered = false;
	SpriteList[4].Animations[6].Frames[0].useTransparency = true;



	SpriteList[0].TotalAnimations = 8;
	SpriteList[0].Animations = new AnimationElem[8];

	SpriteList[0].Animations[0].TotalFrames=4;
	SpriteList[0].Animations[0].ConnectTo = 0;
	SpriteList[0].Animations[0].Frames = new FrameElem[4];

	SpriteList[0].Animations[0].Frames[0].BitmapName = "SpaceMan Left 1.bmp";
	SpriteList[0].Animations[0].Frames[0].TranslateX = 0.000;
	SpriteList[0].Animations[0].Frames[0].TranslateY = 0.000;
	SpriteList[0].Animations[0].Frames[0].Delay = 7;
	SpriteList[0].Animations[0].Frames[0].Width = 30;
	SpriteList[0].Animations[0].Frames[0].Height = 30;
	SpriteList[0].Animations[0].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[0].Animations[0].Frames[0].hFlip = false;
	SpriteList[0].Animations[0].Frames[0].vFlip = false;
	SpriteList[0].Animations[0].Frames[0].zRotation = 0;
	SpriteList[0].Animations[0].Frames[0].HotSpot[0].x = 15;
	SpriteList[0].Animations[0].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[0].Animations[0].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[0].Animations[0].Frames[0].centerX = 15;
	SpriteList[0].Animations[0].Frames[0].centerY = 15;
	SpriteList[0].Animations[0].Frames[0].PegRegistered = false;
	SpriteList[0].Animations[0].Frames[0].useTransparency = true;

	SpriteList[0].Animations[0].Frames[1].BitmapName = "SpaceMan Left 2.bmp";
	SpriteList[0].Animations[0].Frames[1].TranslateX = 0.000;
	SpriteList[0].Animations[0].Frames[1].TranslateY = 0.000;
	SpriteList[0].Animations[0].Frames[1].Delay = 7;
	SpriteList[0].Animations[0].Frames[1].Width = 30;
	SpriteList[0].Animations[0].Frames[1].Height = 30;
	SpriteList[0].Animations[0].Frames[1].Transparency = RGB(255,255,255);
	SpriteList[0].Animations[0].Frames[1].hFlip = false;
	SpriteList[0].Animations[0].Frames[1].vFlip = false;
	SpriteList[0].Animations[0].Frames[1].zRotation = 0;
	SpriteList[0].Animations[0].Frames[1].HotSpot[0].x = 15;
	SpriteList[0].Animations[0].Frames[1].HotSpot[0].y = 15;
	::SetRect( &SpriteList[0].Animations[0].Frames[1].BBox, 0, 0, 29,29);
	SpriteList[0].Animations[0].Frames[1].centerX = 15;
	SpriteList[0].Animations[0].Frames[1].centerY = 15;
	SpriteList[0].Animations[0].Frames[1].PegRegistered = false;
	SpriteList[0].Animations[0].Frames[1].useTransparency = true;

	SpriteList[0].Animations[0].Frames[2].BitmapName = "SpaceMan Left 3.bmp";
	SpriteList[0].Animations[0].Frames[2].TranslateX = 0.000;
	SpriteList[0].Animations[0].Frames[2].TranslateY = 0.000;
	SpriteList[0].Animations[0].Frames[2].Delay = 7;
	SpriteList[0].Animations[0].Frames[2].Width = 30;
	SpriteList[0].Animations[0].Frames[2].Height = 30;
	SpriteList[0].Animations[0].Frames[2].Transparency = RGB(255,255,255);
	SpriteList[0].Animations[0].Frames[2].hFlip = false;
	SpriteList[0].Animations[0].Frames[2].vFlip = false;
	SpriteList[0].Animations[0].Frames[2].zRotation = 0;
	SpriteList[0].Animations[0].Frames[2].HotSpot[0].x = 15;
	SpriteList[0].Animations[0].Frames[2].HotSpot[0].y = 15;
	::SetRect( &SpriteList[0].Animations[0].Frames[2].BBox, 0, 0, 29,29);
	SpriteList[0].Animations[0].Frames[2].centerX = 15;
	SpriteList[0].Animations[0].Frames[2].centerY = 15;
	SpriteList[0].Animations[0].Frames[2].PegRegistered = false;
	SpriteList[0].Animations[0].Frames[2].useTransparency = true;

	SpriteList[0].Animations[0].Frames[3].BitmapName = "SpaceMan Left 2.bmp";
	SpriteList[0].Animations[0].Frames[3].TranslateX = 0.000;
	SpriteList[0].Animations[0].Frames[3].TranslateY = 0.000;
	SpriteList[0].Animations[0].Frames[3].Delay = 7;
	SpriteList[0].Animations[0].Frames[3].Width = 30;
	SpriteList[0].Animations[0].Frames[3].Height = 30;
	SpriteList[0].Animations[0].Frames[3].Transparency = RGB(255,255,255);
	SpriteList[0].Animations[0].Frames[3].hFlip = false;
	SpriteList[0].Animations[0].Frames[3].vFlip = false;
	SpriteList[0].Animations[0].Frames[3].zRotation = 0;
	SpriteList[0].Animations[0].Frames[3].HotSpot[0].x = 15;
	SpriteList[0].Animations[0].Frames[3].HotSpot[0].y = 15;
	::SetRect( &SpriteList[0].Animations[0].Frames[3].BBox, 0, 0, 29,29);
	SpriteList[0].Animations[0].Frames[3].centerX = 15;
	SpriteList[0].Animations[0].Frames[3].centerY = 15;
	SpriteList[0].Animations[0].Frames[3].PegRegistered = false;
	SpriteList[0].Animations[0].Frames[3].useTransparency = true;


	SpriteList[0].Animations[1].TotalFrames=4;
	SpriteList[0].Animations[1].ConnectTo = 0;
	SpriteList[0].Animations[1].Frames = new FrameElem[4];

	SpriteList[0].Animations[1].Frames[0].BitmapName = "SpaceMan Right 1.bmp";
	SpriteList[0].Animations[1].Frames[0].TranslateX = 0.000;
	SpriteList[0].Animations[1].Frames[0].TranslateY = 0.000;
	SpriteList[0].Animations[1].Frames[0].Delay = 7;
	SpriteList[0].Animations[1].Frames[0].Width = 30;
	SpriteList[0].Animations[1].Frames[0].Height = 30;
	SpriteList[0].Animations[1].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[0].Animations[1].Frames[0].hFlip = false;
	SpriteList[0].Animations[1].Frames[0].vFlip = false;
	SpriteList[0].Animations[1].Frames[0].zRotation = 0;
	SpriteList[0].Animations[1].Frames[0].HotSpot[0].x = 15;
	SpriteList[0].Animations[1].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[0].Animations[1].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[0].Animations[1].Frames[0].centerX = 15;
	SpriteList[0].Animations[1].Frames[0].centerY = 15;
	SpriteList[0].Animations[1].Frames[0].PegRegistered = false;
	SpriteList[0].Animations[1].Frames[0].useTransparency = true;

	SpriteList[0].Animations[1].Frames[1].BitmapName = "SpaceMan Right 2.bmp";
	SpriteList[0].Animations[1].Frames[1].TranslateX = 0.000;
	SpriteList[0].Animations[1].Frames[1].TranslateY = 0.000;
	SpriteList[0].Animations[1].Frames[1].Delay = 7;
	SpriteList[0].Animations[1].Frames[1].Width = 30;
	SpriteList[0].Animations[1].Frames[1].Height = 30;
	SpriteList[0].Animations[1].Frames[1].Transparency = RGB(255,255,255);
	SpriteList[0].Animations[1].Frames[1].hFlip = false;
	SpriteList[0].Animations[1].Frames[1].vFlip = false;
	SpriteList[0].Animations[1].Frames[1].zRotation = 0;
	SpriteList[0].Animations[1].Frames[1].HotSpot[0].x = 15;
	SpriteList[0].Animations[1].Frames[1].HotSpot[0].y = 15;
	::SetRect( &SpriteList[0].Animations[1].Frames[1].BBox, 0, 0, 29,29);
	SpriteList[0].Animations[1].Frames[1].centerX = 15;
	SpriteList[0].Animations[1].Frames[1].centerY = 15;
	SpriteList[0].Animations[1].Frames[1].PegRegistered = false;
	SpriteList[0].Animations[1].Frames[1].useTransparency = true;

	SpriteList[0].Animations[1].Frames[2].BitmapName = "SpaceMan Right 3.bmp";
	SpriteList[0].Animations[1].Frames[2].TranslateX = 0.000;
	SpriteList[0].Animations[1].Frames[2].TranslateY = 0.000;
	SpriteList[0].Animations[1].Frames[2].Delay = 7;
	SpriteList[0].Animations[1].Frames[2].Width = 30;
	SpriteList[0].Animations[1].Frames[2].Height = 30;
	SpriteList[0].Animations[1].Frames[2].Transparency = RGB(255,255,255);
	SpriteList[0].Animations[1].Frames[2].hFlip = false;
	SpriteList[0].Animations[1].Frames[2].vFlip = false;
	SpriteList[0].Animations[1].Frames[2].zRotation = 0;
	SpriteList[0].Animations[1].Frames[2].HotSpot[0].x = 15;
	SpriteList[0].Animations[1].Frames[2].HotSpot[0].y = 15;
	::SetRect( &SpriteList[0].Animations[1].Frames[2].BBox, 0, 0, 29,29);
	SpriteList[0].Animations[1].Frames[2].centerX = 15;
	SpriteList[0].Animations[1].Frames[2].centerY = 15;
	SpriteList[0].Animations[1].Frames[2].PegRegistered = false;
	SpriteList[0].Animations[1].Frames[2].useTransparency = true;

	SpriteList[0].Animations[1].Frames[3].BitmapName = "SpaceMan Right 2.bmp";
	SpriteList[0].Animations[1].Frames[3].TranslateX = 0.000;
	SpriteList[0].Animations[1].Frames[3].TranslateY = 0.000;
	SpriteList[0].Animations[1].Frames[3].Delay = 7;
	SpriteList[0].Animations[1].Frames[3].Width = 30;
	SpriteList[0].Animations[1].Frames[3].Height = 30;
	SpriteList[0].Animations[1].Frames[3].Transparency = RGB(255,255,255);
	SpriteList[0].Animations[1].Frames[3].hFlip = false;
	SpriteList[0].Animations[1].Frames[3].vFlip = false;
	SpriteList[0].Animations[1].Frames[3].zRotation = 0;
	SpriteList[0].Animations[1].Frames[3].HotSpot[0].x = 15;
	SpriteList[0].Animations[1].Frames[3].HotSpot[0].y = 15;
	::SetRect( &SpriteList[0].Animations[1].Frames[3].BBox, 0, 0, 29,29);
	SpriteList[0].Animations[1].Frames[3].centerX = 15;
	SpriteList[0].Animations[1].Frames[3].centerY = 15;
	SpriteList[0].Animations[1].Frames[3].PegRegistered = false;
	SpriteList[0].Animations[1].Frames[3].useTransparency = true;


	SpriteList[0].Animations[2].TotalFrames=4;
	SpriteList[0].Animations[2].ConnectTo = 0;
	SpriteList[0].Animations[2].Frames = new FrameElem[4];

	SpriteList[0].Animations[2].Frames[0].BitmapName = "SpaceMan Back 1.bmp";
	SpriteList[0].Animations[2].Frames[0].TranslateX = 0.000;
	SpriteList[0].Animations[2].Frames[0].TranslateY = 0.000;
	SpriteList[0].Animations[2].Frames[0].Delay = 7;
	SpriteList[0].Animations[2].Frames[0].Width = 30;
	SpriteList[0].Animations[2].Frames[0].Height = 30;
	SpriteList[0].Animations[2].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[0].Animations[2].Frames[0].hFlip = false;
	SpriteList[0].Animations[2].Frames[0].vFlip = false;
	SpriteList[0].Animations[2].Frames[0].zRotation = 0;
	SpriteList[0].Animations[2].Frames[0].HotSpot[0].x = 15;
	SpriteList[0].Animations[2].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[0].Animations[2].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[0].Animations[2].Frames[0].centerX = 15;
	SpriteList[0].Animations[2].Frames[0].centerY = 15;
	SpriteList[0].Animations[2].Frames[0].PegRegistered = false;
	SpriteList[0].Animations[2].Frames[0].useTransparency = true;

	SpriteList[0].Animations[2].Frames[1].BitmapName = "SpaceMan Back 2.bmp";
	SpriteList[0].Animations[2].Frames[1].TranslateX = 0.000;
	SpriteList[0].Animations[2].Frames[1].TranslateY = 0.000;
	SpriteList[0].Animations[2].Frames[1].Delay = 7;
	SpriteList[0].Animations[2].Frames[1].Width = 30;
	SpriteList[0].Animations[2].Frames[1].Height = 30;
	SpriteList[0].Animations[2].Frames[1].Transparency = RGB(255,255,255);
	SpriteList[0].Animations[2].Frames[1].hFlip = false;
	SpriteList[0].Animations[2].Frames[1].vFlip = false;
	SpriteList[0].Animations[2].Frames[1].zRotation = 0;
	SpriteList[0].Animations[2].Frames[1].HotSpot[0].x = 15;
	SpriteList[0].Animations[2].Frames[1].HotSpot[0].y = 15;
	::SetRect( &SpriteList[0].Animations[2].Frames[1].BBox, 0, 0, 29,29);
	SpriteList[0].Animations[2].Frames[1].centerX = 15;
	SpriteList[0].Animations[2].Frames[1].centerY = 15;
	SpriteList[0].Animations[2].Frames[1].PegRegistered = false;
	SpriteList[0].Animations[2].Frames[1].useTransparency = true;

	SpriteList[0].Animations[2].Frames[2].BitmapName = "SpaceMan Back 3.bmp";
	SpriteList[0].Animations[2].Frames[2].TranslateX = 0.000;
	SpriteList[0].Animations[2].Frames[2].TranslateY = 0.000;
	SpriteList[0].Animations[2].Frames[2].Delay = 7;
	SpriteList[0].Animations[2].Frames[2].Width = 30;
	SpriteList[0].Animations[2].Frames[2].Height = 30;
	SpriteList[0].Animations[2].Frames[2].Transparency = RGB(255,255,255);
	SpriteList[0].Animations[2].Frames[2].hFlip = false;
	SpriteList[0].Animations[2].Frames[2].vFlip = false;
	SpriteList[0].Animations[2].Frames[2].zRotation = 0;
	SpriteList[0].Animations[2].Frames[2].HotSpot[0].x = 15;
	SpriteList[0].Animations[2].Frames[2].HotSpot[0].y = 15;
	::SetRect( &SpriteList[0].Animations[2].Frames[2].BBox, 0, 0, 29,29);
	SpriteList[0].Animations[2].Frames[2].centerX = 15;
	SpriteList[0].Animations[2].Frames[2].centerY = 15;
	SpriteList[0].Animations[2].Frames[2].PegRegistered = false;
	SpriteList[0].Animations[2].Frames[2].useTransparency = true;

	SpriteList[0].Animations[2].Frames[3].BitmapName = "SpaceMan Back 2.bmp";
	SpriteList[0].Animations[2].Frames[3].TranslateX = 0.000;
	SpriteList[0].Animations[2].Frames[3].TranslateY = 0.000;
	SpriteList[0].Animations[2].Frames[3].Delay = 7;
	SpriteList[0].Animations[2].Frames[3].Width = 30;
	SpriteList[0].Animations[2].Frames[3].Height = 30;
	SpriteList[0].Animations[2].Frames[3].Transparency = RGB(255,255,255);
	SpriteList[0].Animations[2].Frames[3].hFlip = false;
	SpriteList[0].Animations[2].Frames[3].vFlip = false;
	SpriteList[0].Animations[2].Frames[3].zRotation = 0;
	SpriteList[0].Animations[2].Frames[3].HotSpot[0].x = 15;
	SpriteList[0].Animations[2].Frames[3].HotSpot[0].y = 15;
	::SetRect( &SpriteList[0].Animations[2].Frames[3].BBox, 0, 0, 29,29);
	SpriteList[0].Animations[2].Frames[3].centerX = 15;
	SpriteList[0].Animations[2].Frames[3].centerY = 15;
	SpriteList[0].Animations[2].Frames[3].PegRegistered = false;
	SpriteList[0].Animations[2].Frames[3].useTransparency = true;


	SpriteList[0].Animations[3].TotalFrames=4;
	SpriteList[0].Animations[3].ConnectTo = 0;
	SpriteList[0].Animations[3].Frames = new FrameElem[4];

	SpriteList[0].Animations[3].Frames[0].BitmapName = "SpaceMan 1.bmp";
	SpriteList[0].Animations[3].Frames[0].TranslateX = 0.000;
	SpriteList[0].Animations[3].Frames[0].TranslateY = 0.000;
	SpriteList[0].Animations[3].Frames[0].Delay = 7;
	SpriteList[0].Animations[3].Frames[0].Width = 30;
	SpriteList[0].Animations[3].Frames[0].Height = 30;
	SpriteList[0].Animations[3].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[0].Animations[3].Frames[0].hFlip = false;
	SpriteList[0].Animations[3].Frames[0].vFlip = false;
	SpriteList[0].Animations[3].Frames[0].zRotation = 0;
	SpriteList[0].Animations[3].Frames[0].HotSpot[0].x = 15;
	SpriteList[0].Animations[3].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[0].Animations[3].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[0].Animations[3].Frames[0].centerX = 15;
	SpriteList[0].Animations[3].Frames[0].centerY = 15;
	SpriteList[0].Animations[3].Frames[0].PegRegistered = false;
	SpriteList[0].Animations[3].Frames[0].useTransparency = true;

	SpriteList[0].Animations[3].Frames[1].BitmapName = "SpaceMan 2.bmp";
	SpriteList[0].Animations[3].Frames[1].TranslateX = 0.000;
	SpriteList[0].Animations[3].Frames[1].TranslateY = 0.000;
	SpriteList[0].Animations[3].Frames[1].Delay = 7;
	SpriteList[0].Animations[3].Frames[1].Width = 30;
	SpriteList[0].Animations[3].Frames[1].Height = 30;
	SpriteList[0].Animations[3].Frames[1].Transparency = RGB(255,255,255);
	SpriteList[0].Animations[3].Frames[1].hFlip = false;
	SpriteList[0].Animations[3].Frames[1].vFlip = false;
	SpriteList[0].Animations[3].Frames[1].zRotation = 0;
	SpriteList[0].Animations[3].Frames[1].HotSpot[0].x = 15;
	SpriteList[0].Animations[3].Frames[1].HotSpot[0].y = 15;
	::SetRect( &SpriteList[0].Animations[3].Frames[1].BBox, 0, 0, 29,29);
	SpriteList[0].Animations[3].Frames[1].centerX = 15;
	SpriteList[0].Animations[3].Frames[1].centerY = 15;
	SpriteList[0].Animations[3].Frames[1].PegRegistered = false;
	SpriteList[0].Animations[3].Frames[1].useTransparency = true;

	SpriteList[0].Animations[3].Frames[2].BitmapName = "SpaceMan 3.bmp";
	SpriteList[0].Animations[3].Frames[2].TranslateX = 0.000;
	SpriteList[0].Animations[3].Frames[2].TranslateY = 0.000;
	SpriteList[0].Animations[3].Frames[2].Delay = 7;
	SpriteList[0].Animations[3].Frames[2].Width = 30;
	SpriteList[0].Animations[3].Frames[2].Height = 30;
	SpriteList[0].Animations[3].Frames[2].Transparency = RGB(255,255,255);
	SpriteList[0].Animations[3].Frames[2].hFlip = false;
	SpriteList[0].Animations[3].Frames[2].vFlip = false;
	SpriteList[0].Animations[3].Frames[2].zRotation = 0;
	SpriteList[0].Animations[3].Frames[2].HotSpot[0].x = 15;
	SpriteList[0].Animations[3].Frames[2].HotSpot[0].y = 15;
	::SetRect( &SpriteList[0].Animations[3].Frames[2].BBox, 0, 0, 29,29);
	SpriteList[0].Animations[3].Frames[2].centerX = 15;
	SpriteList[0].Animations[3].Frames[2].centerY = 15;
	SpriteList[0].Animations[3].Frames[2].PegRegistered = false;
	SpriteList[0].Animations[3].Frames[2].useTransparency = true;

	SpriteList[0].Animations[3].Frames[3].BitmapName = "SpaceMan 2.bmp";
	SpriteList[0].Animations[3].Frames[3].TranslateX = 0.000;
	SpriteList[0].Animations[3].Frames[3].TranslateY = 0.000;
	SpriteList[0].Animations[3].Frames[3].Delay = 7;
	SpriteList[0].Animations[3].Frames[3].Width = 30;
	SpriteList[0].Animations[3].Frames[3].Height = 30;
	SpriteList[0].Animations[3].Frames[3].Transparency = RGB(255,255,255);
	SpriteList[0].Animations[3].Frames[3].hFlip = false;
	SpriteList[0].Animations[3].Frames[3].vFlip = false;
	SpriteList[0].Animations[3].Frames[3].zRotation = 0;
	SpriteList[0].Animations[3].Frames[3].HotSpot[0].x = 15;
	SpriteList[0].Animations[3].Frames[3].HotSpot[0].y = 15;
	::SetRect( &SpriteList[0].Animations[3].Frames[3].BBox, 0, 0, 29,29);
	SpriteList[0].Animations[3].Frames[3].centerX = 15;
	SpriteList[0].Animations[3].Frames[3].centerY = 15;
	SpriteList[0].Animations[3].Frames[3].PegRegistered = false;
	SpriteList[0].Animations[3].Frames[3].useTransparency = true;


	SpriteList[0].Animations[4].TotalFrames=2;
	SpriteList[0].Animations[4].ConnectTo = 0;
	SpriteList[0].Animations[4].Frames = new FrameElem[2];

	SpriteList[0].Animations[4].Frames[0].BitmapName = "SpaceMan 2.bmp";
	SpriteList[0].Animations[4].Frames[0].TranslateX = 0.000;
	SpriteList[0].Animations[4].Frames[0].TranslateY = 0.000;
	SpriteList[0].Animations[4].Frames[0].Delay = 20;
	SpriteList[0].Animations[4].Frames[0].Width = 30;
	SpriteList[0].Animations[4].Frames[0].Height = 30;
	SpriteList[0].Animations[4].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[0].Animations[4].Frames[0].hFlip = false;
	SpriteList[0].Animations[4].Frames[0].vFlip = false;
	SpriteList[0].Animations[4].Frames[0].zRotation = 0;
	SpriteList[0].Animations[4].Frames[0].HotSpot[0].x = 15;
	SpriteList[0].Animations[4].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[0].Animations[4].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[0].Animations[4].Frames[0].centerX = 15;
	SpriteList[0].Animations[4].Frames[0].centerY = 15;
	SpriteList[0].Animations[4].Frames[0].PegRegistered = false;
	SpriteList[0].Animations[4].Frames[0].useTransparency = true;

	SpriteList[0].Animations[4].Frames[1].BitmapName = "SpaceMan 4.bmp";
	SpriteList[0].Animations[4].Frames[1].TranslateX = 0.000;
	SpriteList[0].Animations[4].Frames[1].TranslateY = 0.000;
	SpriteList[0].Animations[4].Frames[1].Delay = 20;
	SpriteList[0].Animations[4].Frames[1].Width = 30;
	SpriteList[0].Animations[4].Frames[1].Height = 30;
	SpriteList[0].Animations[4].Frames[1].Transparency = RGB(255,255,255);
	SpriteList[0].Animations[4].Frames[1].hFlip = false;
	SpriteList[0].Animations[4].Frames[1].vFlip = false;
	SpriteList[0].Animations[4].Frames[1].zRotation = 0;
	SpriteList[0].Animations[4].Frames[1].HotSpot[0].x = 15;
	SpriteList[0].Animations[4].Frames[1].HotSpot[0].y = 15;
	::SetRect( &SpriteList[0].Animations[4].Frames[1].BBox, 0, 0, 29,29);
	SpriteList[0].Animations[4].Frames[1].centerX = 15;
	SpriteList[0].Animations[4].Frames[1].centerY = 15;
	SpriteList[0].Animations[4].Frames[1].PegRegistered = false;
	SpriteList[0].Animations[4].Frames[1].useTransparency = true;


	SpriteList[0].Animations[5].TotalFrames=2;
	SpriteList[0].Animations[5].ConnectTo = 0;
	SpriteList[0].Animations[5].Frames = new FrameElem[2];

	SpriteList[0].Animations[5].Frames[0].BitmapName = "SpaceMan Back 2.bmp";
	SpriteList[0].Animations[5].Frames[0].TranslateX = 0.000;
	SpriteList[0].Animations[5].Frames[0].TranslateY = 0.000;
	SpriteList[0].Animations[5].Frames[0].Delay = 30;
	SpriteList[0].Animations[5].Frames[0].Width = 30;
	SpriteList[0].Animations[5].Frames[0].Height = 30;
	SpriteList[0].Animations[5].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[0].Animations[5].Frames[0].hFlip = false;
	SpriteList[0].Animations[5].Frames[0].vFlip = false;
	SpriteList[0].Animations[5].Frames[0].zRotation = 0;
	SpriteList[0].Animations[5].Frames[0].HotSpot[0].x = 15;
	SpriteList[0].Animations[5].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[0].Animations[5].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[0].Animations[5].Frames[0].centerX = 15;
	SpriteList[0].Animations[5].Frames[0].centerY = 15;
	SpriteList[0].Animations[5].Frames[0].PegRegistered = false;
	SpriteList[0].Animations[5].Frames[0].useTransparency = true;

	SpriteList[0].Animations[5].Frames[1].BitmapName = "SpaceMan Back 4.bmp";
	SpriteList[0].Animations[5].Frames[1].TranslateX = 0.000;
	SpriteList[0].Animations[5].Frames[1].TranslateY = 0.000;
	SpriteList[0].Animations[5].Frames[1].Delay = 30;
	SpriteList[0].Animations[5].Frames[1].Width = 30;
	SpriteList[0].Animations[5].Frames[1].Height = 30;
	SpriteList[0].Animations[5].Frames[1].Transparency = RGB(255,255,255);
	SpriteList[0].Animations[5].Frames[1].hFlip = false;
	SpriteList[0].Animations[5].Frames[1].vFlip = false;
	SpriteList[0].Animations[5].Frames[1].zRotation = 0;
	SpriteList[0].Animations[5].Frames[1].HotSpot[0].x = 15;
	SpriteList[0].Animations[5].Frames[1].HotSpot[0].y = 15;
	::SetRect( &SpriteList[0].Animations[5].Frames[1].BBox, 0, 0, 29,29);
	SpriteList[0].Animations[5].Frames[1].centerX = 15;
	SpriteList[0].Animations[5].Frames[1].centerY = 15;
	SpriteList[0].Animations[5].Frames[1].PegRegistered = false;
	SpriteList[0].Animations[5].Frames[1].useTransparency = true;


	SpriteList[0].Animations[6].TotalFrames=2;
	SpriteList[0].Animations[6].ConnectTo = 0;
	SpriteList[0].Animations[6].Frames = new FrameElem[2];

	SpriteList[0].Animations[6].Frames[0].BitmapName = "SpaceMan Right 2.bmp";
	SpriteList[0].Animations[6].Frames[0].TranslateX = 0.000;
	SpriteList[0].Animations[6].Frames[0].TranslateY = 0.000;
	SpriteList[0].Animations[6].Frames[0].Delay = 20;
	SpriteList[0].Animations[6].Frames[0].Width = 30;
	SpriteList[0].Animations[6].Frames[0].Height = 30;
	SpriteList[0].Animations[6].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[0].Animations[6].Frames[0].hFlip = false;
	SpriteList[0].Animations[6].Frames[0].vFlip = false;
	SpriteList[0].Animations[6].Frames[0].zRotation = 0;
	SpriteList[0].Animations[6].Frames[0].HotSpot[0].x = 15;
	SpriteList[0].Animations[6].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[0].Animations[6].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[0].Animations[6].Frames[0].centerX = 15;
	SpriteList[0].Animations[6].Frames[0].centerY = 15;
	SpriteList[0].Animations[6].Frames[0].PegRegistered = false;
	SpriteList[0].Animations[6].Frames[0].useTransparency = true;

	SpriteList[0].Animations[6].Frames[1].BitmapName = "SpaceMan Right 4.bmp";
	SpriteList[0].Animations[6].Frames[1].TranslateX = 0.000;
	SpriteList[0].Animations[6].Frames[1].TranslateY = 0.000;
	SpriteList[0].Animations[6].Frames[1].Delay = 20;
	SpriteList[0].Animations[6].Frames[1].Width = 30;
	SpriteList[0].Animations[6].Frames[1].Height = 30;
	SpriteList[0].Animations[6].Frames[1].Transparency = RGB(255,255,255);
	SpriteList[0].Animations[6].Frames[1].hFlip = false;
	SpriteList[0].Animations[6].Frames[1].vFlip = false;
	SpriteList[0].Animations[6].Frames[1].zRotation = 0;
	SpriteList[0].Animations[6].Frames[1].HotSpot[0].x = 15;
	SpriteList[0].Animations[6].Frames[1].HotSpot[0].y = 15;
	::SetRect( &SpriteList[0].Animations[6].Frames[1].BBox, 0, 0, 29,29);
	SpriteList[0].Animations[6].Frames[1].centerX = 15;
	SpriteList[0].Animations[6].Frames[1].centerY = 15;
	SpriteList[0].Animations[6].Frames[1].PegRegistered = false;
	SpriteList[0].Animations[6].Frames[1].useTransparency = true;


	SpriteList[0].Animations[7].TotalFrames=2;
	SpriteList[0].Animations[7].ConnectTo = 0;
	SpriteList[0].Animations[7].Frames = new FrameElem[2];

	SpriteList[0].Animations[7].Frames[0].BitmapName = "SpaceMan Left 2.bmp";
	SpriteList[0].Animations[7].Frames[0].TranslateX = 0.000;
	SpriteList[0].Animations[7].Frames[0].TranslateY = 0.000;
	SpriteList[0].Animations[7].Frames[0].Delay = 20;
	SpriteList[0].Animations[7].Frames[0].Width = 30;
	SpriteList[0].Animations[7].Frames[0].Height = 30;
	SpriteList[0].Animations[7].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[0].Animations[7].Frames[0].hFlip = false;
	SpriteList[0].Animations[7].Frames[0].vFlip = false;
	SpriteList[0].Animations[7].Frames[0].zRotation = 0;
	SpriteList[0].Animations[7].Frames[0].HotSpot[0].x = 15;
	SpriteList[0].Animations[7].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[0].Animations[7].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[0].Animations[7].Frames[0].centerX = 15;
	SpriteList[0].Animations[7].Frames[0].centerY = 15;
	SpriteList[0].Animations[7].Frames[0].PegRegistered = false;
	SpriteList[0].Animations[7].Frames[0].useTransparency = true;

	SpriteList[0].Animations[7].Frames[1].BitmapName = "SpaceMan Left 4.bmp";
	SpriteList[0].Animations[7].Frames[1].TranslateX = 0.000;
	SpriteList[0].Animations[7].Frames[1].TranslateY = 0.000;
	SpriteList[0].Animations[7].Frames[1].Delay = 20;
	SpriteList[0].Animations[7].Frames[1].Width = 30;
	SpriteList[0].Animations[7].Frames[1].Height = 30;
	SpriteList[0].Animations[7].Frames[1].Transparency = RGB(255,255,255);
	SpriteList[0].Animations[7].Frames[1].hFlip = false;
	SpriteList[0].Animations[7].Frames[1].vFlip = false;
	SpriteList[0].Animations[7].Frames[1].zRotation = 0;
	SpriteList[0].Animations[7].Frames[1].HotSpot[0].x = 15;
	SpriteList[0].Animations[7].Frames[1].HotSpot[0].y = 15;
	::SetRect( &SpriteList[0].Animations[7].Frames[1].BBox, 0, 0, 29,29);
	SpriteList[0].Animations[7].Frames[1].centerX = 15;
	SpriteList[0].Animations[7].Frames[1].centerY = 15;
	SpriteList[0].Animations[7].Frames[1].PegRegistered = false;
	SpriteList[0].Animations[7].Frames[1].useTransparency = true;



	SpriteList[5].TotalAnimations = 1;
	SpriteList[5].Animations = new AnimationElem[1];

	SpriteList[5].Animations[0].TotalFrames=1;
	SpriteList[5].Animations[0].ConnectTo = 0;
	SpriteList[5].Animations[0].Frames = new FrameElem[1];

	SpriteList[5].Animations[0].Frames[0].BitmapName = "Memory Chip.bmp";
	SpriteList[5].Animations[0].Frames[0].TranslateX = 0.000;
	SpriteList[5].Animations[0].Frames[0].TranslateY = 0.000;
	SpriteList[5].Animations[0].Frames[0].Delay = 1;
	SpriteList[5].Animations[0].Frames[0].Width = 30;
	SpriteList[5].Animations[0].Frames[0].Height = 30;
	SpriteList[5].Animations[0].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[5].Animations[0].Frames[0].hFlip = false;
	SpriteList[5].Animations[0].Frames[0].vFlip = false;
	SpriteList[5].Animations[0].Frames[0].zRotation = 0;
	SpriteList[5].Animations[0].Frames[0].HotSpot[0].x = 15;
	SpriteList[5].Animations[0].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[5].Animations[0].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[5].Animations[0].Frames[0].centerX = 15;
	SpriteList[5].Animations[0].Frames[0].centerY = 15;
	SpriteList[5].Animations[0].Frames[0].PegRegistered = false;
	SpriteList[5].Animations[0].Frames[0].useTransparency = true;



	SpriteList[6].TotalAnimations = 3;
	SpriteList[6].Animations = new AnimationElem[3];

	SpriteList[6].Animations[0].TotalFrames=1;
	SpriteList[6].Animations[0].ConnectTo = 0;
	SpriteList[6].Animations[0].Frames = new FrameElem[1];

	SpriteList[6].Animations[0].Frames[0].BitmapName = "Survivor Vision.bmp";
	SpriteList[6].Animations[0].Frames[0].TranslateX = 0.000;
	SpriteList[6].Animations[0].Frames[0].TranslateY = 0.000;
	SpriteList[6].Animations[0].Frames[0].Delay = 1;
	SpriteList[6].Animations[0].Frames[0].Width = 1553;
	SpriteList[6].Animations[0].Frames[0].Height = 1234;
	SpriteList[6].Animations[0].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[6].Animations[0].Frames[0].hFlip = false;
	SpriteList[6].Animations[0].Frames[0].vFlip = false;
	SpriteList[6].Animations[0].Frames[0].zRotation = 0;
	SpriteList[6].Animations[0].Frames[0].HotSpot[0].x = 776;
	SpriteList[6].Animations[0].Frames[0].HotSpot[0].y = 617;
	::SetRect( &SpriteList[6].Animations[0].Frames[0].BBox, 0, 0, 1552,1233);
	SpriteList[6].Animations[0].Frames[0].centerX = 776;
	SpriteList[6].Animations[0].Frames[0].centerY = 617;
	SpriteList[6].Animations[0].Frames[0].PegRegistered = false;
	SpriteList[6].Animations[0].Frames[0].useTransparency = true;


	SpriteList[6].Animations[1].TotalFrames=1;
	SpriteList[6].Animations[1].ConnectTo = 0;
	SpriteList[6].Animations[1].Frames = new FrameElem[1];

	SpriteList[6].Animations[1].Frames[0].BitmapName = "Moderate Vision.bmp";
	SpriteList[6].Animations[1].Frames[0].TranslateX = 0.000;
	SpriteList[6].Animations[1].Frames[0].TranslateY = 0.000;
	SpriteList[6].Animations[1].Frames[0].Delay = 1;
	SpriteList[6].Animations[1].Frames[0].Width = 1553;
	SpriteList[6].Animations[1].Frames[0].Height = 1234;
	SpriteList[6].Animations[1].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[6].Animations[1].Frames[0].hFlip = false;
	SpriteList[6].Animations[1].Frames[0].vFlip = false;
	SpriteList[6].Animations[1].Frames[0].zRotation = 0;
	SpriteList[6].Animations[1].Frames[0].HotSpot[0].x = 776;
	SpriteList[6].Animations[1].Frames[0].HotSpot[0].y = 617;
	::SetRect( &SpriteList[6].Animations[1].Frames[0].BBox, 0, 0, 1552,1233);
	SpriteList[6].Animations[1].Frames[0].centerX = 776;
	SpriteList[6].Animations[1].Frames[0].centerY = 617;
	SpriteList[6].Animations[1].Frames[0].PegRegistered = false;
	SpriteList[6].Animations[1].Frames[0].useTransparency = true;


	SpriteList[6].Animations[2].TotalFrames=1;
	SpriteList[6].Animations[2].ConnectTo = 0;
	SpriteList[6].Animations[2].Frames = new FrameElem[1];

	SpriteList[6].Animations[2].Frames[0].BitmapName = "Amateur Vision.bmp";
	SpriteList[6].Animations[2].Frames[0].TranslateX = 0.000;
	SpriteList[6].Animations[2].Frames[0].TranslateY = 0.000;
	SpriteList[6].Animations[2].Frames[0].Delay = 1;
	SpriteList[6].Animations[2].Frames[0].Width = 1553;
	SpriteList[6].Animations[2].Frames[0].Height = 1234;
	SpriteList[6].Animations[2].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[6].Animations[2].Frames[0].hFlip = false;
	SpriteList[6].Animations[2].Frames[0].vFlip = false;
	SpriteList[6].Animations[2].Frames[0].zRotation = 0;
	SpriteList[6].Animations[2].Frames[0].HotSpot[0].x = 776;
	SpriteList[6].Animations[2].Frames[0].HotSpot[0].y = 617;
	::SetRect( &SpriteList[6].Animations[2].Frames[0].BBox, 0, 0, 1552,1233);
	SpriteList[6].Animations[2].Frames[0].centerX = 776;
	SpriteList[6].Animations[2].Frames[0].centerY = 617;
	SpriteList[6].Animations[2].Frames[0].PegRegistered = false;
	SpriteList[6].Animations[2].Frames[0].useTransparency = true;



	SpriteList[9].TotalAnimations = 3;
	SpriteList[9].Animations = new AnimationElem[3];

	SpriteList[9].Animations[0].TotalFrames=1;
	SpriteList[9].Animations[0].ConnectTo = 0;
	SpriteList[9].Animations[0].Frames = new FrameElem[1];

	SpriteList[9].Animations[0].Frames[0].BitmapName = "Button.bmp";
	SpriteList[9].Animations[0].Frames[0].TranslateX = 0.000;
	SpriteList[9].Animations[0].Frames[0].TranslateY = 0.000;
	SpriteList[9].Animations[0].Frames[0].Delay = 1;
	SpriteList[9].Animations[0].Frames[0].Width = 300;
	SpriteList[9].Animations[0].Frames[0].Height = 60;
	SpriteList[9].Animations[0].Frames[0].Transparency = RGB(0,0,0);
	SpriteList[9].Animations[0].Frames[0].hFlip = false;
	SpriteList[9].Animations[0].Frames[0].vFlip = false;
	SpriteList[9].Animations[0].Frames[0].zRotation = 0;
	SpriteList[9].Animations[0].Frames[0].HotSpot[0].x = 50;
	SpriteList[9].Animations[0].Frames[0].HotSpot[0].y = 25;
	::SetRect( &SpriteList[9].Animations[0].Frames[0].BBox, 0, 0, 299,59);
	SpriteList[9].Animations[0].Frames[0].centerX = 50;
	SpriteList[9].Animations[0].Frames[0].centerY = 25;
	SpriteList[9].Animations[0].Frames[0].PegRegistered = false;
	SpriteList[9].Animations[0].Frames[0].useTransparency = true;
	SpriteList[9].Animations[0].Frames[0].AddCollisionData(CollisionSegment(298,1,1,1,0,0));
	SpriteList[9].Animations[0].Frames[0].AddCollisionData(CollisionSegment(298,58,298,1,0,0));
	SpriteList[9].Animations[0].Frames[0].AddCollisionData(CollisionSegment(1,58,298,58,0,0));
	SpriteList[9].Animations[0].Frames[0].AddCollisionData(CollisionSegment(1,1,1,58,0,0));


	SpriteList[9].Animations[1].TotalFrames=1;
	SpriteList[9].Animations[1].ConnectTo = 0;
	SpriteList[9].Animations[1].Frames = new FrameElem[1];

	SpriteList[9].Animations[1].Frames[0].BitmapName = "Life Bar.bmp";
	SpriteList[9].Animations[1].Frames[0].TranslateX = 0.000;
	SpriteList[9].Animations[1].Frames[0].TranslateY = 0.000;
	SpriteList[9].Animations[1].Frames[0].Delay = 1;
	SpriteList[9].Animations[1].Frames[0].Width = 80;
	SpriteList[9].Animations[1].Frames[0].Height = 100;
	SpriteList[9].Animations[1].Frames[0].Transparency = RGB(240,240,240);
	SpriteList[9].Animations[1].Frames[0].hFlip = false;
	SpriteList[9].Animations[1].Frames[0].vFlip = false;
	SpriteList[9].Animations[1].Frames[0].zRotation = 0;
	SpriteList[9].Animations[1].Frames[0].HotSpot[0].x = 40;
	SpriteList[9].Animations[1].Frames[0].HotSpot[0].y = 50;
	::SetRect( &SpriteList[9].Animations[1].Frames[0].BBox, 0, 0, 79,99);
	SpriteList[9].Animations[1].Frames[0].centerX = 40;
	SpriteList[9].Animations[1].Frames[0].centerY = 50;
	SpriteList[9].Animations[1].Frames[0].PegRegistered = false;
	SpriteList[9].Animations[1].Frames[0].useTransparency = false;


	SpriteList[9].Animations[2].TotalFrames=1;
	SpriteList[9].Animations[2].ConnectTo = 0;
	SpriteList[9].Animations[2].Frames = new FrameElem[1];

	SpriteList[9].Animations[2].Frames[0].BitmapName = "Lives.bmp";
	SpriteList[9].Animations[2].Frames[0].TranslateX = 0.000;
	SpriteList[9].Animations[2].Frames[0].TranslateY = 0.000;
	SpriteList[9].Animations[2].Frames[0].Delay = 1;
	SpriteList[9].Animations[2].Frames[0].Width = 80;
	SpriteList[9].Animations[2].Frames[0].Height = 600;
	SpriteList[9].Animations[2].Frames[0].Transparency = RGB(240,240,240);
	SpriteList[9].Animations[2].Frames[0].hFlip = false;
	SpriteList[9].Animations[2].Frames[0].vFlip = false;
	SpriteList[9].Animations[2].Frames[0].zRotation = 0;
	SpriteList[9].Animations[2].Frames[0].HotSpot[0].x = 40;
	SpriteList[9].Animations[2].Frames[0].HotSpot[0].y = 300;
	::SetRect( &SpriteList[9].Animations[2].Frames[0].BBox, 0, 0, 79,599);
	SpriteList[9].Animations[2].Frames[0].centerX = 40;
	SpriteList[9].Animations[2].Frames[0].centerY = 300;
	SpriteList[9].Animations[2].Frames[0].PegRegistered = false;
	SpriteList[9].Animations[2].Frames[0].useTransparency = false;



	SpriteList[7].TotalAnimations = 1;
	SpriteList[7].Animations = new AnimationElem[1];

	SpriteList[7].Animations[0].TotalFrames=6;
	SpriteList[7].Animations[0].ConnectTo = 0;
	SpriteList[7].Animations[0].Frames = new FrameElem[6];

	SpriteList[7].Animations[0].Frames[0].BitmapName = "Restart 1.bmp";
	SpriteList[7].Animations[0].Frames[0].TranslateX = 0.000;
	SpriteList[7].Animations[0].Frames[0].TranslateY = 0.000;
	SpriteList[7].Animations[0].Frames[0].Delay = 1;
	SpriteList[7].Animations[0].Frames[0].Width = 800;
	SpriteList[7].Animations[0].Frames[0].Height = 600;
	SpriteList[7].Animations[0].Frames[0].Transparency = RGB(240,240,240);
	SpriteList[7].Animations[0].Frames[0].hFlip = false;
	SpriteList[7].Animations[0].Frames[0].vFlip = false;
	SpriteList[7].Animations[0].Frames[0].zRotation = 0;
	SpriteList[7].Animations[0].Frames[0].HotSpot[0].x = 400;
	SpriteList[7].Animations[0].Frames[0].HotSpot[0].y = 300;
	::SetRect( &SpriteList[7].Animations[0].Frames[0].BBox, 0, 0, 799,599);
	SpriteList[7].Animations[0].Frames[0].centerX = 400;
	SpriteList[7].Animations[0].Frames[0].centerY = 300;
	SpriteList[7].Animations[0].Frames[0].PegRegistered = false;
	SpriteList[7].Animations[0].Frames[0].useTransparency = false;

	SpriteList[7].Animations[0].Frames[1].BitmapName = "Restart 2.bmp";
	SpriteList[7].Animations[0].Frames[1].TranslateX = 0.000;
	SpriteList[7].Animations[0].Frames[1].TranslateY = 0.000;
	SpriteList[7].Animations[0].Frames[1].Delay = 1;
	SpriteList[7].Animations[0].Frames[1].Width = 800;
	SpriteList[7].Animations[0].Frames[1].Height = 600;
	SpriteList[7].Animations[0].Frames[1].Transparency = RGB(240,240,240);
	SpriteList[7].Animations[0].Frames[1].hFlip = false;
	SpriteList[7].Animations[0].Frames[1].vFlip = false;
	SpriteList[7].Animations[0].Frames[1].zRotation = 0;
	SpriteList[7].Animations[0].Frames[1].HotSpot[0].x = 400;
	SpriteList[7].Animations[0].Frames[1].HotSpot[0].y = 300;
	::SetRect( &SpriteList[7].Animations[0].Frames[1].BBox, 0, 0, 799,599);
	SpriteList[7].Animations[0].Frames[1].centerX = 400;
	SpriteList[7].Animations[0].Frames[1].centerY = 300;
	SpriteList[7].Animations[0].Frames[1].PegRegistered = false;
	SpriteList[7].Animations[0].Frames[1].useTransparency = false;

	SpriteList[7].Animations[0].Frames[2].BitmapName = "Restart 3.bmp";
	SpriteList[7].Animations[0].Frames[2].TranslateX = 0.000;
	SpriteList[7].Animations[0].Frames[2].TranslateY = 0.000;
	SpriteList[7].Animations[0].Frames[2].Delay = 1;
	SpriteList[7].Animations[0].Frames[2].Width = 800;
	SpriteList[7].Animations[0].Frames[2].Height = 600;
	SpriteList[7].Animations[0].Frames[2].Transparency = RGB(240,240,240);
	SpriteList[7].Animations[0].Frames[2].hFlip = false;
	SpriteList[7].Animations[0].Frames[2].vFlip = false;
	SpriteList[7].Animations[0].Frames[2].zRotation = 0;
	SpriteList[7].Animations[0].Frames[2].HotSpot[0].x = 400;
	SpriteList[7].Animations[0].Frames[2].HotSpot[0].y = 300;
	::SetRect( &SpriteList[7].Animations[0].Frames[2].BBox, 0, 0, 799,599);
	SpriteList[7].Animations[0].Frames[2].centerX = 400;
	SpriteList[7].Animations[0].Frames[2].centerY = 300;
	SpriteList[7].Animations[0].Frames[2].PegRegistered = false;
	SpriteList[7].Animations[0].Frames[2].useTransparency = false;

	SpriteList[7].Animations[0].Frames[3].BitmapName = "Restart 2.bmp";
	SpriteList[7].Animations[0].Frames[3].TranslateX = 0.000;
	SpriteList[7].Animations[0].Frames[3].TranslateY = 0.000;
	SpriteList[7].Animations[0].Frames[3].Delay = 1;
	SpriteList[7].Animations[0].Frames[3].Width = 800;
	SpriteList[7].Animations[0].Frames[3].Height = 600;
	SpriteList[7].Animations[0].Frames[3].Transparency = RGB(240,240,240);
	SpriteList[7].Animations[0].Frames[3].hFlip = false;
	SpriteList[7].Animations[0].Frames[3].vFlip = false;
	SpriteList[7].Animations[0].Frames[3].zRotation = 0;
	SpriteList[7].Animations[0].Frames[3].HotSpot[0].x = 400;
	SpriteList[7].Animations[0].Frames[3].HotSpot[0].y = 300;
	::SetRect( &SpriteList[7].Animations[0].Frames[3].BBox, 0, 0, 799,599);
	SpriteList[7].Animations[0].Frames[3].centerX = 400;
	SpriteList[7].Animations[0].Frames[3].centerY = 300;
	SpriteList[7].Animations[0].Frames[3].PegRegistered = false;
	SpriteList[7].Animations[0].Frames[3].useTransparency = false;

	SpriteList[7].Animations[0].Frames[4].BitmapName = "Restart 1.bmp";
	SpriteList[7].Animations[0].Frames[4].TranslateX = 0.000;
	SpriteList[7].Animations[0].Frames[4].TranslateY = 0.000;
	SpriteList[7].Animations[0].Frames[4].Delay = 1;
	SpriteList[7].Animations[0].Frames[4].Width = 800;
	SpriteList[7].Animations[0].Frames[4].Height = 600;
	SpriteList[7].Animations[0].Frames[4].Transparency = RGB(240,240,240);
	SpriteList[7].Animations[0].Frames[4].hFlip = false;
	SpriteList[7].Animations[0].Frames[4].vFlip = false;
	SpriteList[7].Animations[0].Frames[4].zRotation = 0;
	SpriteList[7].Animations[0].Frames[4].HotSpot[0].x = 400;
	SpriteList[7].Animations[0].Frames[4].HotSpot[0].y = 300;
	::SetRect( &SpriteList[7].Animations[0].Frames[4].BBox, 0, 0, 799,599);
	SpriteList[7].Animations[0].Frames[4].centerX = 400;
	SpriteList[7].Animations[0].Frames[4].centerY = 300;
	SpriteList[7].Animations[0].Frames[4].PegRegistered = false;
	SpriteList[7].Animations[0].Frames[4].useTransparency = false;

	SpriteList[7].Animations[0].Frames[5].BitmapName = "Restart 3.bmp";
	SpriteList[7].Animations[0].Frames[5].TranslateX = 0.000;
	SpriteList[7].Animations[0].Frames[5].TranslateY = 0.000;
	SpriteList[7].Animations[0].Frames[5].Delay = 1;
	SpriteList[7].Animations[0].Frames[5].Width = 800;
	SpriteList[7].Animations[0].Frames[5].Height = 600;
	SpriteList[7].Animations[0].Frames[5].Transparency = RGB(240,240,240);
	SpriteList[7].Animations[0].Frames[5].hFlip = false;
	SpriteList[7].Animations[0].Frames[5].vFlip = false;
	SpriteList[7].Animations[0].Frames[5].zRotation = 0;
	SpriteList[7].Animations[0].Frames[5].HotSpot[0].x = 400;
	SpriteList[7].Animations[0].Frames[5].HotSpot[0].y = 300;
	::SetRect( &SpriteList[7].Animations[0].Frames[5].BBox, 0, 0, 799,599);
	SpriteList[7].Animations[0].Frames[5].centerX = 400;
	SpriteList[7].Animations[0].Frames[5].centerY = 300;
	SpriteList[7].Animations[0].Frames[5].PegRegistered = false;
	SpriteList[7].Animations[0].Frames[5].useTransparency = false;



	SpriteList[2].TotalAnimations = 8;
	SpriteList[2].Animations = new AnimationElem[8];

	SpriteList[2].Animations[0].TotalFrames=4;
	SpriteList[2].Animations[0].ConnectTo = 0;
	SpriteList[2].Animations[0].Frames = new FrameElem[4];

	SpriteList[2].Animations[0].Frames[0].BitmapName = "Green Alien 1.bmp";
	SpriteList[2].Animations[0].Frames[0].TranslateX = 0.000;
	SpriteList[2].Animations[0].Frames[0].TranslateY = 0.000;
	SpriteList[2].Animations[0].Frames[0].Delay = 10;
	SpriteList[2].Animations[0].Frames[0].Width = 30;
	SpriteList[2].Animations[0].Frames[0].Height = 30;
	SpriteList[2].Animations[0].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[2].Animations[0].Frames[0].hFlip = false;
	SpriteList[2].Animations[0].Frames[0].vFlip = false;
	SpriteList[2].Animations[0].Frames[0].zRotation = 0;
	SpriteList[2].Animations[0].Frames[0].HotSpot[0].x = 15;
	SpriteList[2].Animations[0].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[2].Animations[0].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[2].Animations[0].Frames[0].centerX = 15;
	SpriteList[2].Animations[0].Frames[0].centerY = 15;
	SpriteList[2].Animations[0].Frames[0].PegRegistered = false;
	SpriteList[2].Animations[0].Frames[0].useTransparency = true;

	SpriteList[2].Animations[0].Frames[1].BitmapName = "Green Alien 2.bmp";
	SpriteList[2].Animations[0].Frames[1].TranslateX = 0.000;
	SpriteList[2].Animations[0].Frames[1].TranslateY = 0.000;
	SpriteList[2].Animations[0].Frames[1].Delay = 10;
	SpriteList[2].Animations[0].Frames[1].Width = 30;
	SpriteList[2].Animations[0].Frames[1].Height = 30;
	SpriteList[2].Animations[0].Frames[1].Transparency = RGB(255,255,255);
	SpriteList[2].Animations[0].Frames[1].hFlip = false;
	SpriteList[2].Animations[0].Frames[1].vFlip = false;
	SpriteList[2].Animations[0].Frames[1].zRotation = 0;
	SpriteList[2].Animations[0].Frames[1].HotSpot[0].x = 15;
	SpriteList[2].Animations[0].Frames[1].HotSpot[0].y = 15;
	::SetRect( &SpriteList[2].Animations[0].Frames[1].BBox, 0, 0, 29,29);
	SpriteList[2].Animations[0].Frames[1].centerX = 15;
	SpriteList[2].Animations[0].Frames[1].centerY = 15;
	SpriteList[2].Animations[0].Frames[1].PegRegistered = false;
	SpriteList[2].Animations[0].Frames[1].useTransparency = true;

	SpriteList[2].Animations[0].Frames[2].BitmapName = "Green Alien 3.bmp";
	SpriteList[2].Animations[0].Frames[2].TranslateX = 0.000;
	SpriteList[2].Animations[0].Frames[2].TranslateY = 0.000;
	SpriteList[2].Animations[0].Frames[2].Delay = 10;
	SpriteList[2].Animations[0].Frames[2].Width = 30;
	SpriteList[2].Animations[0].Frames[2].Height = 30;
	SpriteList[2].Animations[0].Frames[2].Transparency = RGB(255,255,255);
	SpriteList[2].Animations[0].Frames[2].hFlip = false;
	SpriteList[2].Animations[0].Frames[2].vFlip = false;
	SpriteList[2].Animations[0].Frames[2].zRotation = 0;
	SpriteList[2].Animations[0].Frames[2].HotSpot[0].x = 15;
	SpriteList[2].Animations[0].Frames[2].HotSpot[0].y = 15;
	::SetRect( &SpriteList[2].Animations[0].Frames[2].BBox, 0, 0, 29,29);
	SpriteList[2].Animations[0].Frames[2].centerX = 15;
	SpriteList[2].Animations[0].Frames[2].centerY = 15;
	SpriteList[2].Animations[0].Frames[2].PegRegistered = false;
	SpriteList[2].Animations[0].Frames[2].useTransparency = true;

	SpriteList[2].Animations[0].Frames[3].BitmapName = "Green Alien 2.bmp";
	SpriteList[2].Animations[0].Frames[3].TranslateX = 0.000;
	SpriteList[2].Animations[0].Frames[3].TranslateY = 0.000;
	SpriteList[2].Animations[0].Frames[3].Delay = 10;
	SpriteList[2].Animations[0].Frames[3].Width = 30;
	SpriteList[2].Animations[0].Frames[3].Height = 30;
	SpriteList[2].Animations[0].Frames[3].Transparency = RGB(255,255,255);
	SpriteList[2].Animations[0].Frames[3].hFlip = false;
	SpriteList[2].Animations[0].Frames[3].vFlip = false;
	SpriteList[2].Animations[0].Frames[3].zRotation = 0;
	SpriteList[2].Animations[0].Frames[3].HotSpot[0].x = 15;
	SpriteList[2].Animations[0].Frames[3].HotSpot[0].y = 15;
	::SetRect( &SpriteList[2].Animations[0].Frames[3].BBox, 0, 0, 29,29);
	SpriteList[2].Animations[0].Frames[3].centerX = 15;
	SpriteList[2].Animations[0].Frames[3].centerY = 15;
	SpriteList[2].Animations[0].Frames[3].PegRegistered = false;
	SpriteList[2].Animations[0].Frames[3].useTransparency = true;


	SpriteList[2].Animations[1].TotalFrames=4;
	SpriteList[2].Animations[1].ConnectTo = 0;
	SpriteList[2].Animations[1].Frames = new FrameElem[4];

	SpriteList[2].Animations[1].Frames[0].BitmapName = "Green Alien Left 1.bmp";
	SpriteList[2].Animations[1].Frames[0].TranslateX = 0.000;
	SpriteList[2].Animations[1].Frames[0].TranslateY = 0.000;
	SpriteList[2].Animations[1].Frames[0].Delay = 10;
	SpriteList[2].Animations[1].Frames[0].Width = 30;
	SpriteList[2].Animations[1].Frames[0].Height = 30;
	SpriteList[2].Animations[1].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[2].Animations[1].Frames[0].hFlip = false;
	SpriteList[2].Animations[1].Frames[0].vFlip = false;
	SpriteList[2].Animations[1].Frames[0].zRotation = 0;
	SpriteList[2].Animations[1].Frames[0].HotSpot[0].x = 15;
	SpriteList[2].Animations[1].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[2].Animations[1].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[2].Animations[1].Frames[0].centerX = 15;
	SpriteList[2].Animations[1].Frames[0].centerY = 15;
	SpriteList[2].Animations[1].Frames[0].PegRegistered = false;
	SpriteList[2].Animations[1].Frames[0].useTransparency = true;

	SpriteList[2].Animations[1].Frames[1].BitmapName = "Green Alien Left 2.bmp";
	SpriteList[2].Animations[1].Frames[1].TranslateX = 0.000;
	SpriteList[2].Animations[1].Frames[1].TranslateY = 0.000;
	SpriteList[2].Animations[1].Frames[1].Delay = 10;
	SpriteList[2].Animations[1].Frames[1].Width = 30;
	SpriteList[2].Animations[1].Frames[1].Height = 30;
	SpriteList[2].Animations[1].Frames[1].Transparency = RGB(255,255,255);
	SpriteList[2].Animations[1].Frames[1].hFlip = false;
	SpriteList[2].Animations[1].Frames[1].vFlip = false;
	SpriteList[2].Animations[1].Frames[1].zRotation = 0;
	SpriteList[2].Animations[1].Frames[1].HotSpot[0].x = 15;
	SpriteList[2].Animations[1].Frames[1].HotSpot[0].y = 15;
	::SetRect( &SpriteList[2].Animations[1].Frames[1].BBox, 0, 0, 29,29);
	SpriteList[2].Animations[1].Frames[1].centerX = 15;
	SpriteList[2].Animations[1].Frames[1].centerY = 15;
	SpriteList[2].Animations[1].Frames[1].PegRegistered = false;
	SpriteList[2].Animations[1].Frames[1].useTransparency = true;

	SpriteList[2].Animations[1].Frames[2].BitmapName = "Green Alien Left 3.bmp";
	SpriteList[2].Animations[1].Frames[2].TranslateX = 0.000;
	SpriteList[2].Animations[1].Frames[2].TranslateY = 0.000;
	SpriteList[2].Animations[1].Frames[2].Delay = 10;
	SpriteList[2].Animations[1].Frames[2].Width = 30;
	SpriteList[2].Animations[1].Frames[2].Height = 30;
	SpriteList[2].Animations[1].Frames[2].Transparency = RGB(255,255,255);
	SpriteList[2].Animations[1].Frames[2].hFlip = false;
	SpriteList[2].Animations[1].Frames[2].vFlip = false;
	SpriteList[2].Animations[1].Frames[2].zRotation = 0;
	SpriteList[2].Animations[1].Frames[2].HotSpot[0].x = 15;
	SpriteList[2].Animations[1].Frames[2].HotSpot[0].y = 15;
	::SetRect( &SpriteList[2].Animations[1].Frames[2].BBox, 0, 0, 29,29);
	SpriteList[2].Animations[1].Frames[2].centerX = 15;
	SpriteList[2].Animations[1].Frames[2].centerY = 15;
	SpriteList[2].Animations[1].Frames[2].PegRegistered = false;
	SpriteList[2].Animations[1].Frames[2].useTransparency = true;

	SpriteList[2].Animations[1].Frames[3].BitmapName = "Green Alien Left 2.bmp";
	SpriteList[2].Animations[1].Frames[3].TranslateX = 0.000;
	SpriteList[2].Animations[1].Frames[3].TranslateY = 0.000;
	SpriteList[2].Animations[1].Frames[3].Delay = 10;
	SpriteList[2].Animations[1].Frames[3].Width = 30;
	SpriteList[2].Animations[1].Frames[3].Height = 30;
	SpriteList[2].Animations[1].Frames[3].Transparency = RGB(255,255,255);
	SpriteList[2].Animations[1].Frames[3].hFlip = false;
	SpriteList[2].Animations[1].Frames[3].vFlip = false;
	SpriteList[2].Animations[1].Frames[3].zRotation = 0;
	SpriteList[2].Animations[1].Frames[3].HotSpot[0].x = 15;
	SpriteList[2].Animations[1].Frames[3].HotSpot[0].y = 15;
	::SetRect( &SpriteList[2].Animations[1].Frames[3].BBox, 0, 0, 29,29);
	SpriteList[2].Animations[1].Frames[3].centerX = 15;
	SpriteList[2].Animations[1].Frames[3].centerY = 15;
	SpriteList[2].Animations[1].Frames[3].PegRegistered = false;
	SpriteList[2].Animations[1].Frames[3].useTransparency = true;


	SpriteList[2].Animations[2].TotalFrames=4;
	SpriteList[2].Animations[2].ConnectTo = 0;
	SpriteList[2].Animations[2].Frames = new FrameElem[4];

	SpriteList[2].Animations[2].Frames[0].BitmapName = "Green Alien Right 1.bmp";
	SpriteList[2].Animations[2].Frames[0].TranslateX = 0.000;
	SpriteList[2].Animations[2].Frames[0].TranslateY = 0.000;
	SpriteList[2].Animations[2].Frames[0].Delay = 10;
	SpriteList[2].Animations[2].Frames[0].Width = 30;
	SpriteList[2].Animations[2].Frames[0].Height = 30;
	SpriteList[2].Animations[2].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[2].Animations[2].Frames[0].hFlip = false;
	SpriteList[2].Animations[2].Frames[0].vFlip = false;
	SpriteList[2].Animations[2].Frames[0].zRotation = 0;
	SpriteList[2].Animations[2].Frames[0].HotSpot[0].x = 15;
	SpriteList[2].Animations[2].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[2].Animations[2].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[2].Animations[2].Frames[0].centerX = 15;
	SpriteList[2].Animations[2].Frames[0].centerY = 15;
	SpriteList[2].Animations[2].Frames[0].PegRegistered = false;
	SpriteList[2].Animations[2].Frames[0].useTransparency = true;

	SpriteList[2].Animations[2].Frames[1].BitmapName = "Green Alien Right 2.bmp";
	SpriteList[2].Animations[2].Frames[1].TranslateX = 0.000;
	SpriteList[2].Animations[2].Frames[1].TranslateY = 0.000;
	SpriteList[2].Animations[2].Frames[1].Delay = 10;
	SpriteList[2].Animations[2].Frames[1].Width = 30;
	SpriteList[2].Animations[2].Frames[1].Height = 30;
	SpriteList[2].Animations[2].Frames[1].Transparency = RGB(255,255,255);
	SpriteList[2].Animations[2].Frames[1].hFlip = false;
	SpriteList[2].Animations[2].Frames[1].vFlip = false;
	SpriteList[2].Animations[2].Frames[1].zRotation = 0;
	SpriteList[2].Animations[2].Frames[1].HotSpot[0].x = 15;
	SpriteList[2].Animations[2].Frames[1].HotSpot[0].y = 15;
	::SetRect( &SpriteList[2].Animations[2].Frames[1].BBox, 0, 0, 29,29);
	SpriteList[2].Animations[2].Frames[1].centerX = 15;
	SpriteList[2].Animations[2].Frames[1].centerY = 15;
	SpriteList[2].Animations[2].Frames[1].PegRegistered = false;
	SpriteList[2].Animations[2].Frames[1].useTransparency = true;

	SpriteList[2].Animations[2].Frames[2].BitmapName = "Green Alien Right 3.bmp";
	SpriteList[2].Animations[2].Frames[2].TranslateX = 0.000;
	SpriteList[2].Animations[2].Frames[2].TranslateY = 0.000;
	SpriteList[2].Animations[2].Frames[2].Delay = 10;
	SpriteList[2].Animations[2].Frames[2].Width = 30;
	SpriteList[2].Animations[2].Frames[2].Height = 30;
	SpriteList[2].Animations[2].Frames[2].Transparency = RGB(255,255,255);
	SpriteList[2].Animations[2].Frames[2].hFlip = false;
	SpriteList[2].Animations[2].Frames[2].vFlip = false;
	SpriteList[2].Animations[2].Frames[2].zRotation = 0;
	SpriteList[2].Animations[2].Frames[2].HotSpot[0].x = 15;
	SpriteList[2].Animations[2].Frames[2].HotSpot[0].y = 15;
	::SetRect( &SpriteList[2].Animations[2].Frames[2].BBox, 0, 0, 29,29);
	SpriteList[2].Animations[2].Frames[2].centerX = 15;
	SpriteList[2].Animations[2].Frames[2].centerY = 15;
	SpriteList[2].Animations[2].Frames[2].PegRegistered = false;
	SpriteList[2].Animations[2].Frames[2].useTransparency = true;

	SpriteList[2].Animations[2].Frames[3].BitmapName = "Green Alien Right 2.bmp";
	SpriteList[2].Animations[2].Frames[3].TranslateX = 0.000;
	SpriteList[2].Animations[2].Frames[3].TranslateY = 0.000;
	SpriteList[2].Animations[2].Frames[3].Delay = 10;
	SpriteList[2].Animations[2].Frames[3].Width = 30;
	SpriteList[2].Animations[2].Frames[3].Height = 30;
	SpriteList[2].Animations[2].Frames[3].Transparency = RGB(255,255,255);
	SpriteList[2].Animations[2].Frames[3].hFlip = false;
	SpriteList[2].Animations[2].Frames[3].vFlip = false;
	SpriteList[2].Animations[2].Frames[3].zRotation = 0;
	SpriteList[2].Animations[2].Frames[3].HotSpot[0].x = 15;
	SpriteList[2].Animations[2].Frames[3].HotSpot[0].y = 15;
	::SetRect( &SpriteList[2].Animations[2].Frames[3].BBox, 0, 0, 29,29);
	SpriteList[2].Animations[2].Frames[3].centerX = 15;
	SpriteList[2].Animations[2].Frames[3].centerY = 15;
	SpriteList[2].Animations[2].Frames[3].PegRegistered = false;
	SpriteList[2].Animations[2].Frames[3].useTransparency = true;


	SpriteList[2].Animations[3].TotalFrames=4;
	SpriteList[2].Animations[3].ConnectTo = 0;
	SpriteList[2].Animations[3].Frames = new FrameElem[4];

	SpriteList[2].Animations[3].Frames[0].BitmapName = "Green Alien Back 1.bmp";
	SpriteList[2].Animations[3].Frames[0].TranslateX = 0.000;
	SpriteList[2].Animations[3].Frames[0].TranslateY = 0.000;
	SpriteList[2].Animations[3].Frames[0].Delay = 10;
	SpriteList[2].Animations[3].Frames[0].Width = 30;
	SpriteList[2].Animations[3].Frames[0].Height = 30;
	SpriteList[2].Animations[3].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[2].Animations[3].Frames[0].hFlip = false;
	SpriteList[2].Animations[3].Frames[0].vFlip = false;
	SpriteList[2].Animations[3].Frames[0].zRotation = 0;
	SpriteList[2].Animations[3].Frames[0].HotSpot[0].x = 15;
	SpriteList[2].Animations[3].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[2].Animations[3].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[2].Animations[3].Frames[0].centerX = 15;
	SpriteList[2].Animations[3].Frames[0].centerY = 15;
	SpriteList[2].Animations[3].Frames[0].PegRegistered = false;
	SpriteList[2].Animations[3].Frames[0].useTransparency = true;

	SpriteList[2].Animations[3].Frames[1].BitmapName = "Green Alien Back 2.bmp";
	SpriteList[2].Animations[3].Frames[1].TranslateX = 0.000;
	SpriteList[2].Animations[3].Frames[1].TranslateY = 0.000;
	SpriteList[2].Animations[3].Frames[1].Delay = 10;
	SpriteList[2].Animations[3].Frames[1].Width = 30;
	SpriteList[2].Animations[3].Frames[1].Height = 30;
	SpriteList[2].Animations[3].Frames[1].Transparency = RGB(255,255,255);
	SpriteList[2].Animations[3].Frames[1].hFlip = false;
	SpriteList[2].Animations[3].Frames[1].vFlip = false;
	SpriteList[2].Animations[3].Frames[1].zRotation = 0;
	SpriteList[2].Animations[3].Frames[1].HotSpot[0].x = 15;
	SpriteList[2].Animations[3].Frames[1].HotSpot[0].y = 15;
	::SetRect( &SpriteList[2].Animations[3].Frames[1].BBox, 0, 0, 29,29);
	SpriteList[2].Animations[3].Frames[1].centerX = 15;
	SpriteList[2].Animations[3].Frames[1].centerY = 15;
	SpriteList[2].Animations[3].Frames[1].PegRegistered = false;
	SpriteList[2].Animations[3].Frames[1].useTransparency = true;

	SpriteList[2].Animations[3].Frames[2].BitmapName = "Green Alien Back 3.bmp";
	SpriteList[2].Animations[3].Frames[2].TranslateX = 0.000;
	SpriteList[2].Animations[3].Frames[2].TranslateY = 0.000;
	SpriteList[2].Animations[3].Frames[2].Delay = 10;
	SpriteList[2].Animations[3].Frames[2].Width = 30;
	SpriteList[2].Animations[3].Frames[2].Height = 30;
	SpriteList[2].Animations[3].Frames[2].Transparency = RGB(255,255,255);
	SpriteList[2].Animations[3].Frames[2].hFlip = false;
	SpriteList[2].Animations[3].Frames[2].vFlip = false;
	SpriteList[2].Animations[3].Frames[2].zRotation = 0;
	SpriteList[2].Animations[3].Frames[2].HotSpot[0].x = 15;
	SpriteList[2].Animations[3].Frames[2].HotSpot[0].y = 15;
	::SetRect( &SpriteList[2].Animations[3].Frames[2].BBox, 0, 0, 29,29);
	SpriteList[2].Animations[3].Frames[2].centerX = 15;
	SpriteList[2].Animations[3].Frames[2].centerY = 15;
	SpriteList[2].Animations[3].Frames[2].PegRegistered = false;
	SpriteList[2].Animations[3].Frames[2].useTransparency = true;

	SpriteList[2].Animations[3].Frames[3].BitmapName = "Green Alien Back 2.bmp";
	SpriteList[2].Animations[3].Frames[3].TranslateX = 0.000;
	SpriteList[2].Animations[3].Frames[3].TranslateY = 0.000;
	SpriteList[2].Animations[3].Frames[3].Delay = 10;
	SpriteList[2].Animations[3].Frames[3].Width = 30;
	SpriteList[2].Animations[3].Frames[3].Height = 30;
	SpriteList[2].Animations[3].Frames[3].Transparency = RGB(255,255,255);
	SpriteList[2].Animations[3].Frames[3].hFlip = false;
	SpriteList[2].Animations[3].Frames[3].vFlip = false;
	SpriteList[2].Animations[3].Frames[3].zRotation = 0;
	SpriteList[2].Animations[3].Frames[3].HotSpot[0].x = 15;
	SpriteList[2].Animations[3].Frames[3].HotSpot[0].y = 15;
	::SetRect( &SpriteList[2].Animations[3].Frames[3].BBox, 0, 0, 29,29);
	SpriteList[2].Animations[3].Frames[3].centerX = 15;
	SpriteList[2].Animations[3].Frames[3].centerY = 15;
	SpriteList[2].Animations[3].Frames[3].PegRegistered = false;
	SpriteList[2].Animations[3].Frames[3].useTransparency = true;


	SpriteList[2].Animations[4].TotalFrames=2;
	SpriteList[2].Animations[4].ConnectTo = 0;
	SpriteList[2].Animations[4].Frames = new FrameElem[2];

	SpriteList[2].Animations[4].Frames[0].BitmapName = "Green Alien 2.bmp";
	SpriteList[2].Animations[4].Frames[0].TranslateX = 0.000;
	SpriteList[2].Animations[4].Frames[0].TranslateY = 0.000;
	SpriteList[2].Animations[4].Frames[0].Delay = 20;
	SpriteList[2].Animations[4].Frames[0].Width = 30;
	SpriteList[2].Animations[4].Frames[0].Height = 30;
	SpriteList[2].Animations[4].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[2].Animations[4].Frames[0].hFlip = false;
	SpriteList[2].Animations[4].Frames[0].vFlip = false;
	SpriteList[2].Animations[4].Frames[0].zRotation = 0;
	SpriteList[2].Animations[4].Frames[0].HotSpot[0].x = 15;
	SpriteList[2].Animations[4].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[2].Animations[4].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[2].Animations[4].Frames[0].centerX = 15;
	SpriteList[2].Animations[4].Frames[0].centerY = 15;
	SpriteList[2].Animations[4].Frames[0].PegRegistered = false;
	SpriteList[2].Animations[4].Frames[0].useTransparency = true;

	SpriteList[2].Animations[4].Frames[1].BitmapName = "Green Alien 4.bmp";
	SpriteList[2].Animations[4].Frames[1].TranslateX = 0.000;
	SpriteList[2].Animations[4].Frames[1].TranslateY = 0.000;
	SpriteList[2].Animations[4].Frames[1].Delay = 20;
	SpriteList[2].Animations[4].Frames[1].Width = 30;
	SpriteList[2].Animations[4].Frames[1].Height = 30;
	SpriteList[2].Animations[4].Frames[1].Transparency = RGB(255,255,255);
	SpriteList[2].Animations[4].Frames[1].hFlip = false;
	SpriteList[2].Animations[4].Frames[1].vFlip = false;
	SpriteList[2].Animations[4].Frames[1].zRotation = 0;
	SpriteList[2].Animations[4].Frames[1].HotSpot[0].x = 15;
	SpriteList[2].Animations[4].Frames[1].HotSpot[0].y = 15;
	::SetRect( &SpriteList[2].Animations[4].Frames[1].BBox, 0, 0, 29,29);
	SpriteList[2].Animations[4].Frames[1].centerX = 15;
	SpriteList[2].Animations[4].Frames[1].centerY = 15;
	SpriteList[2].Animations[4].Frames[1].PegRegistered = false;
	SpriteList[2].Animations[4].Frames[1].useTransparency = true;


	SpriteList[2].Animations[5].TotalFrames=2;
	SpriteList[2].Animations[5].ConnectTo = 0;
	SpriteList[2].Animations[5].Frames = new FrameElem[2];

	SpriteList[2].Animations[5].Frames[0].BitmapName = "Green Alien Back 2.bmp";
	SpriteList[2].Animations[5].Frames[0].TranslateX = 0.000;
	SpriteList[2].Animations[5].Frames[0].TranslateY = 0.000;
	SpriteList[2].Animations[5].Frames[0].Delay = 20;
	SpriteList[2].Animations[5].Frames[0].Width = 30;
	SpriteList[2].Animations[5].Frames[0].Height = 30;
	SpriteList[2].Animations[5].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[2].Animations[5].Frames[0].hFlip = false;
	SpriteList[2].Animations[5].Frames[0].vFlip = false;
	SpriteList[2].Animations[5].Frames[0].zRotation = 0;
	SpriteList[2].Animations[5].Frames[0].HotSpot[0].x = 15;
	SpriteList[2].Animations[5].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[2].Animations[5].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[2].Animations[5].Frames[0].centerX = 15;
	SpriteList[2].Animations[5].Frames[0].centerY = 15;
	SpriteList[2].Animations[5].Frames[0].PegRegistered = false;
	SpriteList[2].Animations[5].Frames[0].useTransparency = true;

	SpriteList[2].Animations[5].Frames[1].BitmapName = "Green Alien Back 4.bmp";
	SpriteList[2].Animations[5].Frames[1].TranslateX = 0.000;
	SpriteList[2].Animations[5].Frames[1].TranslateY = 0.000;
	SpriteList[2].Animations[5].Frames[1].Delay = 20;
	SpriteList[2].Animations[5].Frames[1].Width = 30;
	SpriteList[2].Animations[5].Frames[1].Height = 30;
	SpriteList[2].Animations[5].Frames[1].Transparency = RGB(255,255,255);
	SpriteList[2].Animations[5].Frames[1].hFlip = false;
	SpriteList[2].Animations[5].Frames[1].vFlip = false;
	SpriteList[2].Animations[5].Frames[1].zRotation = 0;
	SpriteList[2].Animations[5].Frames[1].HotSpot[0].x = 15;
	SpriteList[2].Animations[5].Frames[1].HotSpot[0].y = 15;
	::SetRect( &SpriteList[2].Animations[5].Frames[1].BBox, 0, 0, 29,29);
	SpriteList[2].Animations[5].Frames[1].centerX = 15;
	SpriteList[2].Animations[5].Frames[1].centerY = 15;
	SpriteList[2].Animations[5].Frames[1].PegRegistered = false;
	SpriteList[2].Animations[5].Frames[1].useTransparency = true;


	SpriteList[2].Animations[6].TotalFrames=2;
	SpriteList[2].Animations[6].ConnectTo = 0;
	SpriteList[2].Animations[6].Frames = new FrameElem[2];

	SpriteList[2].Animations[6].Frames[0].BitmapName = "Green Alien Right 2.bmp";
	SpriteList[2].Animations[6].Frames[0].TranslateX = 0.000;
	SpriteList[2].Animations[6].Frames[0].TranslateY = 0.000;
	SpriteList[2].Animations[6].Frames[0].Delay = 20;
	SpriteList[2].Animations[6].Frames[0].Width = 30;
	SpriteList[2].Animations[6].Frames[0].Height = 30;
	SpriteList[2].Animations[6].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[2].Animations[6].Frames[0].hFlip = false;
	SpriteList[2].Animations[6].Frames[0].vFlip = false;
	SpriteList[2].Animations[6].Frames[0].zRotation = 0;
	SpriteList[2].Animations[6].Frames[0].HotSpot[0].x = 15;
	SpriteList[2].Animations[6].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[2].Animations[6].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[2].Animations[6].Frames[0].centerX = 15;
	SpriteList[2].Animations[6].Frames[0].centerY = 15;
	SpriteList[2].Animations[6].Frames[0].PegRegistered = false;
	SpriteList[2].Animations[6].Frames[0].useTransparency = true;

	SpriteList[2].Animations[6].Frames[1].BitmapName = "Green Alien Right 4.bmp";
	SpriteList[2].Animations[6].Frames[1].TranslateX = 0.000;
	SpriteList[2].Animations[6].Frames[1].TranslateY = 0.000;
	SpriteList[2].Animations[6].Frames[1].Delay = 20;
	SpriteList[2].Animations[6].Frames[1].Width = 30;
	SpriteList[2].Animations[6].Frames[1].Height = 30;
	SpriteList[2].Animations[6].Frames[1].Transparency = RGB(255,255,255);
	SpriteList[2].Animations[6].Frames[1].hFlip = false;
	SpriteList[2].Animations[6].Frames[1].vFlip = false;
	SpriteList[2].Animations[6].Frames[1].zRotation = 0;
	SpriteList[2].Animations[6].Frames[1].HotSpot[0].x = 15;
	SpriteList[2].Animations[6].Frames[1].HotSpot[0].y = 15;
	::SetRect( &SpriteList[2].Animations[6].Frames[1].BBox, 0, 0, 29,29);
	SpriteList[2].Animations[6].Frames[1].centerX = 15;
	SpriteList[2].Animations[6].Frames[1].centerY = 15;
	SpriteList[2].Animations[6].Frames[1].PegRegistered = false;
	SpriteList[2].Animations[6].Frames[1].useTransparency = true;


	SpriteList[2].Animations[7].TotalFrames=2;
	SpriteList[2].Animations[7].ConnectTo = 0;
	SpriteList[2].Animations[7].Frames = new FrameElem[2];

	SpriteList[2].Animations[7].Frames[0].BitmapName = "Green Alien Left 2.bmp";
	SpriteList[2].Animations[7].Frames[0].TranslateX = 0.000;
	SpriteList[2].Animations[7].Frames[0].TranslateY = 0.000;
	SpriteList[2].Animations[7].Frames[0].Delay = 20;
	SpriteList[2].Animations[7].Frames[0].Width = 30;
	SpriteList[2].Animations[7].Frames[0].Height = 30;
	SpriteList[2].Animations[7].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[2].Animations[7].Frames[0].hFlip = false;
	SpriteList[2].Animations[7].Frames[0].vFlip = false;
	SpriteList[2].Animations[7].Frames[0].zRotation = 0;
	SpriteList[2].Animations[7].Frames[0].HotSpot[0].x = 15;
	SpriteList[2].Animations[7].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[2].Animations[7].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[2].Animations[7].Frames[0].centerX = 15;
	SpriteList[2].Animations[7].Frames[0].centerY = 15;
	SpriteList[2].Animations[7].Frames[0].PegRegistered = false;
	SpriteList[2].Animations[7].Frames[0].useTransparency = true;

	SpriteList[2].Animations[7].Frames[1].BitmapName = "Green Alien Left 4.bmp";
	SpriteList[2].Animations[7].Frames[1].TranslateX = 0.000;
	SpriteList[2].Animations[7].Frames[1].TranslateY = 0.000;
	SpriteList[2].Animations[7].Frames[1].Delay = 20;
	SpriteList[2].Animations[7].Frames[1].Width = 30;
	SpriteList[2].Animations[7].Frames[1].Height = 30;
	SpriteList[2].Animations[7].Frames[1].Transparency = RGB(255,255,255);
	SpriteList[2].Animations[7].Frames[1].hFlip = false;
	SpriteList[2].Animations[7].Frames[1].vFlip = false;
	SpriteList[2].Animations[7].Frames[1].zRotation = 0;
	SpriteList[2].Animations[7].Frames[1].HotSpot[0].x = 15;
	SpriteList[2].Animations[7].Frames[1].HotSpot[0].y = 15;
	::SetRect( &SpriteList[2].Animations[7].Frames[1].BBox, 0, 0, 29,29);
	SpriteList[2].Animations[7].Frames[1].centerX = 15;
	SpriteList[2].Animations[7].Frames[1].centerY = 15;
	SpriteList[2].Animations[7].Frames[1].PegRegistered = false;
	SpriteList[2].Animations[7].Frames[1].useTransparency = true;



}

void LoadAnimation_Level_6(GameNode* gn)
{
	SpriteList[4].TotalAnimations = 7;
	SpriteList[4].Animations = new AnimationElem[7];

	SpriteList[4].Animations[0].TotalFrames=1;
	SpriteList[4].Animations[0].ConnectTo = 0;
	SpriteList[4].Animations[0].Frames = new FrameElem[1];

	SpriteList[4].Animations[0].Frames[0].BitmapName = "Wall.bmp";
	SpriteList[4].Animations[0].Frames[0].TranslateX = 0.000;
	SpriteList[4].Animations[0].Frames[0].TranslateY = 0.000;
	SpriteList[4].Animations[0].Frames[0].Delay = 1;
	SpriteList[4].Animations[0].Frames[0].Width = 30;
	SpriteList[4].Animations[0].Frames[0].Height = 30;
	SpriteList[4].Animations[0].Frames[0].Transparency = RGB(240,240,240);
	SpriteList[4].Animations[0].Frames[0].hFlip = false;
	SpriteList[4].Animations[0].Frames[0].vFlip = false;
	SpriteList[4].Animations[0].Frames[0].zRotation = 0;
	SpriteList[4].Animations[0].Frames[0].HotSpot[0].x = 15;
	SpriteList[4].Animations[0].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[4].Animations[0].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[4].Animations[0].Frames[0].centerX = 15;
	SpriteList[4].Animations[0].Frames[0].centerY = 15;
	SpriteList[4].Animations[0].Frames[0].PegRegistered = false;
	SpriteList[4].Animations[0].Frames[0].useTransparency = false;


	SpriteList[4].Animations[1].TotalFrames=3;
	SpriteList[4].Animations[1].ConnectTo = 0;
	SpriteList[4].Animations[1].Frames = new FrameElem[3];

	SpriteList[4].Animations[1].Frames[0].BitmapName = "Server 1.bmp";
	SpriteList[4].Animations[1].Frames[0].TranslateX = 0.000;
	SpriteList[4].Animations[1].Frames[0].TranslateY = 0.000;
	SpriteList[4].Animations[1].Frames[0].Delay = 21;
	SpriteList[4].Animations[1].Frames[0].Width = 30;
	SpriteList[4].Animations[1].Frames[0].Height = 30;
	SpriteList[4].Animations[1].Frames[0].Transparency = RGB(240,240,240);
	SpriteList[4].Animations[1].Frames[0].hFlip = false;
	SpriteList[4].Animations[1].Frames[0].vFlip = false;
	SpriteList[4].Animations[1].Frames[0].zRotation = 0;
	SpriteList[4].Animations[1].Frames[0].HotSpot[0].x = 15;
	SpriteList[4].Animations[1].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[4].Animations[1].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[4].Animations[1].Frames[0].centerX = 15;
	SpriteList[4].Animations[1].Frames[0].centerY = 15;
	SpriteList[4].Animations[1].Frames[0].PegRegistered = false;
	SpriteList[4].Animations[1].Frames[0].useTransparency = false;

	SpriteList[4].Animations[1].Frames[1].BitmapName = "Server 2.bmp";
	SpriteList[4].Animations[1].Frames[1].TranslateX = 0.000;
	SpriteList[4].Animations[1].Frames[1].TranslateY = 0.000;
	SpriteList[4].Animations[1].Frames[1].Delay = 21;
	SpriteList[4].Animations[1].Frames[1].Width = 30;
	SpriteList[4].Animations[1].Frames[1].Height = 30;
	SpriteList[4].Animations[1].Frames[1].Transparency = RGB(240,240,240);
	SpriteList[4].Animations[1].Frames[1].hFlip = false;
	SpriteList[4].Animations[1].Frames[1].vFlip = false;
	SpriteList[4].Animations[1].Frames[1].zRotation = 0;
	SpriteList[4].Animations[1].Frames[1].HotSpot[0].x = 15;
	SpriteList[4].Animations[1].Frames[1].HotSpot[0].y = 15;
	::SetRect( &SpriteList[4].Animations[1].Frames[1].BBox, 0, 0, 29,29);
	SpriteList[4].Animations[1].Frames[1].centerX = 15;
	SpriteList[4].Animations[1].Frames[1].centerY = 15;
	SpriteList[4].Animations[1].Frames[1].PegRegistered = false;
	SpriteList[4].Animations[1].Frames[1].useTransparency = false;

	SpriteList[4].Animations[1].Frames[2].BitmapName = "Server 3.bmp";
	SpriteList[4].Animations[1].Frames[2].TranslateX = 0.000;
	SpriteList[4].Animations[1].Frames[2].TranslateY = 0.000;
	SpriteList[4].Animations[1].Frames[2].Delay = 21;
	SpriteList[4].Animations[1].Frames[2].Width = 30;
	SpriteList[4].Animations[1].Frames[2].Height = 30;
	SpriteList[4].Animations[1].Frames[2].Transparency = RGB(240,240,240);
	SpriteList[4].Animations[1].Frames[2].hFlip = false;
	SpriteList[4].Animations[1].Frames[2].vFlip = false;
	SpriteList[4].Animations[1].Frames[2].zRotation = 0;
	SpriteList[4].Animations[1].Frames[2].HotSpot[0].x = 15;
	SpriteList[4].Animations[1].Frames[2].HotSpot[0].y = 15;
	::SetRect( &SpriteList[4].Animations[1].Frames[2].BBox, 0, 0, 29,29);
	SpriteList[4].Animations[1].Frames[2].centerX = 15;
	SpriteList[4].Animations[1].Frames[2].centerY = 15;
	SpriteList[4].Animations[1].Frames[2].PegRegistered = false;
	SpriteList[4].Animations[1].Frames[2].useTransparency = false;


	SpriteList[4].Animations[2].TotalFrames=1;
	SpriteList[4].Animations[2].ConnectTo = 0;
	SpriteList[4].Animations[2].Frames = new FrameElem[1];

	SpriteList[4].Animations[2].Frames[0].BitmapName = "Door 1.bmp";
	SpriteList[4].Animations[2].Frames[0].TranslateX = 0.000;
	SpriteList[4].Animations[2].Frames[0].TranslateY = 0.000;
	SpriteList[4].Animations[2].Frames[0].Delay = 1;
	SpriteList[4].Animations[2].Frames[0].Width = 30;
	SpriteList[4].Animations[2].Frames[0].Height = 30;
	SpriteList[4].Animations[2].Frames[0].Transparency = RGB(240,240,240);
	SpriteList[4].Animations[2].Frames[0].hFlip = false;
	SpriteList[4].Animations[2].Frames[0].vFlip = false;
	SpriteList[4].Animations[2].Frames[0].zRotation = 0;
	SpriteList[4].Animations[2].Frames[0].HotSpot[0].x = 15;
	SpriteList[4].Animations[2].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[4].Animations[2].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[4].Animations[2].Frames[0].centerX = 15;
	SpriteList[4].Animations[2].Frames[0].centerY = 15;
	SpriteList[4].Animations[2].Frames[0].PegRegistered = false;
	SpriteList[4].Animations[2].Frames[0].useTransparency = false;


	SpriteList[4].Animations[3].TotalFrames=1;
	SpriteList[4].Animations[3].ConnectTo = 0;
	SpriteList[4].Animations[3].Frames = new FrameElem[1];

	SpriteList[4].Animations[3].Frames[0].BitmapName = "Door 2.bmp";
	SpriteList[4].Animations[3].Frames[0].TranslateX = 0.000;
	SpriteList[4].Animations[3].Frames[0].TranslateY = 0.000;
	SpriteList[4].Animations[3].Frames[0].Delay = 1;
	SpriteList[4].Animations[3].Frames[0].Width = 30;
	SpriteList[4].Animations[3].Frames[0].Height = 30;
	SpriteList[4].Animations[3].Frames[0].Transparency = RGB(240,240,240);
	SpriteList[4].Animations[3].Frames[0].hFlip = false;
	SpriteList[4].Animations[3].Frames[0].vFlip = false;
	SpriteList[4].Animations[3].Frames[0].zRotation = 0;
	SpriteList[4].Animations[3].Frames[0].HotSpot[0].x = 15;
	SpriteList[4].Animations[3].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[4].Animations[3].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[4].Animations[3].Frames[0].centerX = 15;
	SpriteList[4].Animations[3].Frames[0].centerY = 15;
	SpriteList[4].Animations[3].Frames[0].PegRegistered = false;
	SpriteList[4].Animations[3].Frames[0].useTransparency = false;


	SpriteList[4].Animations[4].TotalFrames=1;
	SpriteList[4].Animations[4].ConnectTo = 0;
	SpriteList[4].Animations[4].Frames = new FrameElem[1];

	SpriteList[4].Animations[4].Frames[0].BitmapName = "Bed 1.bmp";
	SpriteList[4].Animations[4].Frames[0].TranslateX = 0.000;
	SpriteList[4].Animations[4].Frames[0].TranslateY = 0.000;
	SpriteList[4].Animations[4].Frames[0].Delay = 1;
	SpriteList[4].Animations[4].Frames[0].Width = 30;
	SpriteList[4].Animations[4].Frames[0].Height = 30;
	SpriteList[4].Animations[4].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[4].Animations[4].Frames[0].hFlip = false;
	SpriteList[4].Animations[4].Frames[0].vFlip = false;
	SpriteList[4].Animations[4].Frames[0].zRotation = 0;
	SpriteList[4].Animations[4].Frames[0].HotSpot[0].x = 15;
	SpriteList[4].Animations[4].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[4].Animations[4].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[4].Animations[4].Frames[0].centerX = 15;
	SpriteList[4].Animations[4].Frames[0].centerY = 15;
	SpriteList[4].Animations[4].Frames[0].PegRegistered = false;
	SpriteList[4].Animations[4].Frames[0].useTransparency = true;


	SpriteList[4].Animations[5].TotalFrames=1;
	SpriteList[4].Animations[5].ConnectTo = 0;
	SpriteList[4].Animations[5].Frames = new FrameElem[1];

	SpriteList[4].Animations[5].Frames[0].BitmapName = "Bed 2.bmp";
	SpriteList[4].Animations[5].Frames[0].TranslateX = 0.000;
	SpriteList[4].Animations[5].Frames[0].TranslateY = 0.000;
	SpriteList[4].Animations[5].Frames[0].Delay = 1;
	SpriteList[4].Animations[5].Frames[0].Width = 30;
	SpriteList[4].Animations[5].Frames[0].Height = 30;
	SpriteList[4].Animations[5].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[4].Animations[5].Frames[0].hFlip = false;
	SpriteList[4].Animations[5].Frames[0].vFlip = false;
	SpriteList[4].Animations[5].Frames[0].zRotation = 0;
	SpriteList[4].Animations[5].Frames[0].HotSpot[0].x = 15;
	SpriteList[4].Animations[5].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[4].Animations[5].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[4].Animations[5].Frames[0].centerX = 15;
	SpriteList[4].Animations[5].Frames[0].centerY = 15;
	SpriteList[4].Animations[5].Frames[0].PegRegistered = false;
	SpriteList[4].Animations[5].Frames[0].useTransparency = true;


	SpriteList[4].Animations[6].TotalFrames=1;
	SpriteList[4].Animations[6].ConnectTo = 0;
	SpriteList[4].Animations[6].Frames = new FrameElem[1];

	SpriteList[4].Animations[6].Frames[0].BitmapName = "Bed 3.bmp";
	SpriteList[4].Animations[6].Frames[0].TranslateX = 0.000;
	SpriteList[4].Animations[6].Frames[0].TranslateY = 0.000;
	SpriteList[4].Animations[6].Frames[0].Delay = 1;
	SpriteList[4].Animations[6].Frames[0].Width = 30;
	SpriteList[4].Animations[6].Frames[0].Height = 30;
	SpriteList[4].Animations[6].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[4].Animations[6].Frames[0].hFlip = false;
	SpriteList[4].Animations[6].Frames[0].vFlip = false;
	SpriteList[4].Animations[6].Frames[0].zRotation = 0;
	SpriteList[4].Animations[6].Frames[0].HotSpot[0].x = 15;
	SpriteList[4].Animations[6].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[4].Animations[6].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[4].Animations[6].Frames[0].centerX = 15;
	SpriteList[4].Animations[6].Frames[0].centerY = 15;
	SpriteList[4].Animations[6].Frames[0].PegRegistered = false;
	SpriteList[4].Animations[6].Frames[0].useTransparency = true;



	SpriteList[0].TotalAnimations = 8;
	SpriteList[0].Animations = new AnimationElem[8];

	SpriteList[0].Animations[0].TotalFrames=4;
	SpriteList[0].Animations[0].ConnectTo = 0;
	SpriteList[0].Animations[0].Frames = new FrameElem[4];

	SpriteList[0].Animations[0].Frames[0].BitmapName = "SpaceMan Left 1.bmp";
	SpriteList[0].Animations[0].Frames[0].TranslateX = 0.000;
	SpriteList[0].Animations[0].Frames[0].TranslateY = 0.000;
	SpriteList[0].Animations[0].Frames[0].Delay = 7;
	SpriteList[0].Animations[0].Frames[0].Width = 30;
	SpriteList[0].Animations[0].Frames[0].Height = 30;
	SpriteList[0].Animations[0].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[0].Animations[0].Frames[0].hFlip = false;
	SpriteList[0].Animations[0].Frames[0].vFlip = false;
	SpriteList[0].Animations[0].Frames[0].zRotation = 0;
	SpriteList[0].Animations[0].Frames[0].HotSpot[0].x = 15;
	SpriteList[0].Animations[0].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[0].Animations[0].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[0].Animations[0].Frames[0].centerX = 15;
	SpriteList[0].Animations[0].Frames[0].centerY = 15;
	SpriteList[0].Animations[0].Frames[0].PegRegistered = false;
	SpriteList[0].Animations[0].Frames[0].useTransparency = true;

	SpriteList[0].Animations[0].Frames[1].BitmapName = "SpaceMan Left 2.bmp";
	SpriteList[0].Animations[0].Frames[1].TranslateX = 0.000;
	SpriteList[0].Animations[0].Frames[1].TranslateY = 0.000;
	SpriteList[0].Animations[0].Frames[1].Delay = 7;
	SpriteList[0].Animations[0].Frames[1].Width = 30;
	SpriteList[0].Animations[0].Frames[1].Height = 30;
	SpriteList[0].Animations[0].Frames[1].Transparency = RGB(255,255,255);
	SpriteList[0].Animations[0].Frames[1].hFlip = false;
	SpriteList[0].Animations[0].Frames[1].vFlip = false;
	SpriteList[0].Animations[0].Frames[1].zRotation = 0;
	SpriteList[0].Animations[0].Frames[1].HotSpot[0].x = 15;
	SpriteList[0].Animations[0].Frames[1].HotSpot[0].y = 15;
	::SetRect( &SpriteList[0].Animations[0].Frames[1].BBox, 0, 0, 29,29);
	SpriteList[0].Animations[0].Frames[1].centerX = 15;
	SpriteList[0].Animations[0].Frames[1].centerY = 15;
	SpriteList[0].Animations[0].Frames[1].PegRegistered = false;
	SpriteList[0].Animations[0].Frames[1].useTransparency = true;

	SpriteList[0].Animations[0].Frames[2].BitmapName = "SpaceMan Left 3.bmp";
	SpriteList[0].Animations[0].Frames[2].TranslateX = 0.000;
	SpriteList[0].Animations[0].Frames[2].TranslateY = 0.000;
	SpriteList[0].Animations[0].Frames[2].Delay = 7;
	SpriteList[0].Animations[0].Frames[2].Width = 30;
	SpriteList[0].Animations[0].Frames[2].Height = 30;
	SpriteList[0].Animations[0].Frames[2].Transparency = RGB(255,255,255);
	SpriteList[0].Animations[0].Frames[2].hFlip = false;
	SpriteList[0].Animations[0].Frames[2].vFlip = false;
	SpriteList[0].Animations[0].Frames[2].zRotation = 0;
	SpriteList[0].Animations[0].Frames[2].HotSpot[0].x = 15;
	SpriteList[0].Animations[0].Frames[2].HotSpot[0].y = 15;
	::SetRect( &SpriteList[0].Animations[0].Frames[2].BBox, 0, 0, 29,29);
	SpriteList[0].Animations[0].Frames[2].centerX = 15;
	SpriteList[0].Animations[0].Frames[2].centerY = 15;
	SpriteList[0].Animations[0].Frames[2].PegRegistered = false;
	SpriteList[0].Animations[0].Frames[2].useTransparency = true;

	SpriteList[0].Animations[0].Frames[3].BitmapName = "SpaceMan Left 2.bmp";
	SpriteList[0].Animations[0].Frames[3].TranslateX = 0.000;
	SpriteList[0].Animations[0].Frames[3].TranslateY = 0.000;
	SpriteList[0].Animations[0].Frames[3].Delay = 7;
	SpriteList[0].Animations[0].Frames[3].Width = 30;
	SpriteList[0].Animations[0].Frames[3].Height = 30;
	SpriteList[0].Animations[0].Frames[3].Transparency = RGB(255,255,255);
	SpriteList[0].Animations[0].Frames[3].hFlip = false;
	SpriteList[0].Animations[0].Frames[3].vFlip = false;
	SpriteList[0].Animations[0].Frames[3].zRotation = 0;
	SpriteList[0].Animations[0].Frames[3].HotSpot[0].x = 15;
	SpriteList[0].Animations[0].Frames[3].HotSpot[0].y = 15;
	::SetRect( &SpriteList[0].Animations[0].Frames[3].BBox, 0, 0, 29,29);
	SpriteList[0].Animations[0].Frames[3].centerX = 15;
	SpriteList[0].Animations[0].Frames[3].centerY = 15;
	SpriteList[0].Animations[0].Frames[3].PegRegistered = false;
	SpriteList[0].Animations[0].Frames[3].useTransparency = true;


	SpriteList[0].Animations[1].TotalFrames=4;
	SpriteList[0].Animations[1].ConnectTo = 0;
	SpriteList[0].Animations[1].Frames = new FrameElem[4];

	SpriteList[0].Animations[1].Frames[0].BitmapName = "SpaceMan Right 1.bmp";
	SpriteList[0].Animations[1].Frames[0].TranslateX = 0.000;
	SpriteList[0].Animations[1].Frames[0].TranslateY = 0.000;
	SpriteList[0].Animations[1].Frames[0].Delay = 7;
	SpriteList[0].Animations[1].Frames[0].Width = 30;
	SpriteList[0].Animations[1].Frames[0].Height = 30;
	SpriteList[0].Animations[1].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[0].Animations[1].Frames[0].hFlip = false;
	SpriteList[0].Animations[1].Frames[0].vFlip = false;
	SpriteList[0].Animations[1].Frames[0].zRotation = 0;
	SpriteList[0].Animations[1].Frames[0].HotSpot[0].x = 15;
	SpriteList[0].Animations[1].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[0].Animations[1].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[0].Animations[1].Frames[0].centerX = 15;
	SpriteList[0].Animations[1].Frames[0].centerY = 15;
	SpriteList[0].Animations[1].Frames[0].PegRegistered = false;
	SpriteList[0].Animations[1].Frames[0].useTransparency = true;

	SpriteList[0].Animations[1].Frames[1].BitmapName = "SpaceMan Right 2.bmp";
	SpriteList[0].Animations[1].Frames[1].TranslateX = 0.000;
	SpriteList[0].Animations[1].Frames[1].TranslateY = 0.000;
	SpriteList[0].Animations[1].Frames[1].Delay = 7;
	SpriteList[0].Animations[1].Frames[1].Width = 30;
	SpriteList[0].Animations[1].Frames[1].Height = 30;
	SpriteList[0].Animations[1].Frames[1].Transparency = RGB(255,255,255);
	SpriteList[0].Animations[1].Frames[1].hFlip = false;
	SpriteList[0].Animations[1].Frames[1].vFlip = false;
	SpriteList[0].Animations[1].Frames[1].zRotation = 0;
	SpriteList[0].Animations[1].Frames[1].HotSpot[0].x = 15;
	SpriteList[0].Animations[1].Frames[1].HotSpot[0].y = 15;
	::SetRect( &SpriteList[0].Animations[1].Frames[1].BBox, 0, 0, 29,29);
	SpriteList[0].Animations[1].Frames[1].centerX = 15;
	SpriteList[0].Animations[1].Frames[1].centerY = 15;
	SpriteList[0].Animations[1].Frames[1].PegRegistered = false;
	SpriteList[0].Animations[1].Frames[1].useTransparency = true;

	SpriteList[0].Animations[1].Frames[2].BitmapName = "SpaceMan Right 3.bmp";
	SpriteList[0].Animations[1].Frames[2].TranslateX = 0.000;
	SpriteList[0].Animations[1].Frames[2].TranslateY = 0.000;
	SpriteList[0].Animations[1].Frames[2].Delay = 7;
	SpriteList[0].Animations[1].Frames[2].Width = 30;
	SpriteList[0].Animations[1].Frames[2].Height = 30;
	SpriteList[0].Animations[1].Frames[2].Transparency = RGB(255,255,255);
	SpriteList[0].Animations[1].Frames[2].hFlip = false;
	SpriteList[0].Animations[1].Frames[2].vFlip = false;
	SpriteList[0].Animations[1].Frames[2].zRotation = 0;
	SpriteList[0].Animations[1].Frames[2].HotSpot[0].x = 15;
	SpriteList[0].Animations[1].Frames[2].HotSpot[0].y = 15;
	::SetRect( &SpriteList[0].Animations[1].Frames[2].BBox, 0, 0, 29,29);
	SpriteList[0].Animations[1].Frames[2].centerX = 15;
	SpriteList[0].Animations[1].Frames[2].centerY = 15;
	SpriteList[0].Animations[1].Frames[2].PegRegistered = false;
	SpriteList[0].Animations[1].Frames[2].useTransparency = true;

	SpriteList[0].Animations[1].Frames[3].BitmapName = "SpaceMan Right 2.bmp";
	SpriteList[0].Animations[1].Frames[3].TranslateX = 0.000;
	SpriteList[0].Animations[1].Frames[3].TranslateY = 0.000;
	SpriteList[0].Animations[1].Frames[3].Delay = 7;
	SpriteList[0].Animations[1].Frames[3].Width = 30;
	SpriteList[0].Animations[1].Frames[3].Height = 30;
	SpriteList[0].Animations[1].Frames[3].Transparency = RGB(255,255,255);
	SpriteList[0].Animations[1].Frames[3].hFlip = false;
	SpriteList[0].Animations[1].Frames[3].vFlip = false;
	SpriteList[0].Animations[1].Frames[3].zRotation = 0;
	SpriteList[0].Animations[1].Frames[3].HotSpot[0].x = 15;
	SpriteList[0].Animations[1].Frames[3].HotSpot[0].y = 15;
	::SetRect( &SpriteList[0].Animations[1].Frames[3].BBox, 0, 0, 29,29);
	SpriteList[0].Animations[1].Frames[3].centerX = 15;
	SpriteList[0].Animations[1].Frames[3].centerY = 15;
	SpriteList[0].Animations[1].Frames[3].PegRegistered = false;
	SpriteList[0].Animations[1].Frames[3].useTransparency = true;


	SpriteList[0].Animations[2].TotalFrames=4;
	SpriteList[0].Animations[2].ConnectTo = 0;
	SpriteList[0].Animations[2].Frames = new FrameElem[4];

	SpriteList[0].Animations[2].Frames[0].BitmapName = "SpaceMan Back 1.bmp";
	SpriteList[0].Animations[2].Frames[0].TranslateX = 0.000;
	SpriteList[0].Animations[2].Frames[0].TranslateY = 0.000;
	SpriteList[0].Animations[2].Frames[0].Delay = 7;
	SpriteList[0].Animations[2].Frames[0].Width = 30;
	SpriteList[0].Animations[2].Frames[0].Height = 30;
	SpriteList[0].Animations[2].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[0].Animations[2].Frames[0].hFlip = false;
	SpriteList[0].Animations[2].Frames[0].vFlip = false;
	SpriteList[0].Animations[2].Frames[0].zRotation = 0;
	SpriteList[0].Animations[2].Frames[0].HotSpot[0].x = 15;
	SpriteList[0].Animations[2].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[0].Animations[2].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[0].Animations[2].Frames[0].centerX = 15;
	SpriteList[0].Animations[2].Frames[0].centerY = 15;
	SpriteList[0].Animations[2].Frames[0].PegRegistered = false;
	SpriteList[0].Animations[2].Frames[0].useTransparency = true;

	SpriteList[0].Animations[2].Frames[1].BitmapName = "SpaceMan Back 2.bmp";
	SpriteList[0].Animations[2].Frames[1].TranslateX = 0.000;
	SpriteList[0].Animations[2].Frames[1].TranslateY = 0.000;
	SpriteList[0].Animations[2].Frames[1].Delay = 7;
	SpriteList[0].Animations[2].Frames[1].Width = 30;
	SpriteList[0].Animations[2].Frames[1].Height = 30;
	SpriteList[0].Animations[2].Frames[1].Transparency = RGB(255,255,255);
	SpriteList[0].Animations[2].Frames[1].hFlip = false;
	SpriteList[0].Animations[2].Frames[1].vFlip = false;
	SpriteList[0].Animations[2].Frames[1].zRotation = 0;
	SpriteList[0].Animations[2].Frames[1].HotSpot[0].x = 15;
	SpriteList[0].Animations[2].Frames[1].HotSpot[0].y = 15;
	::SetRect( &SpriteList[0].Animations[2].Frames[1].BBox, 0, 0, 29,29);
	SpriteList[0].Animations[2].Frames[1].centerX = 15;
	SpriteList[0].Animations[2].Frames[1].centerY = 15;
	SpriteList[0].Animations[2].Frames[1].PegRegistered = false;
	SpriteList[0].Animations[2].Frames[1].useTransparency = true;

	SpriteList[0].Animations[2].Frames[2].BitmapName = "SpaceMan Back 3.bmp";
	SpriteList[0].Animations[2].Frames[2].TranslateX = 0.000;
	SpriteList[0].Animations[2].Frames[2].TranslateY = 0.000;
	SpriteList[0].Animations[2].Frames[2].Delay = 7;
	SpriteList[0].Animations[2].Frames[2].Width = 30;
	SpriteList[0].Animations[2].Frames[2].Height = 30;
	SpriteList[0].Animations[2].Frames[2].Transparency = RGB(255,255,255);
	SpriteList[0].Animations[2].Frames[2].hFlip = false;
	SpriteList[0].Animations[2].Frames[2].vFlip = false;
	SpriteList[0].Animations[2].Frames[2].zRotation = 0;
	SpriteList[0].Animations[2].Frames[2].HotSpot[0].x = 15;
	SpriteList[0].Animations[2].Frames[2].HotSpot[0].y = 15;
	::SetRect( &SpriteList[0].Animations[2].Frames[2].BBox, 0, 0, 29,29);
	SpriteList[0].Animations[2].Frames[2].centerX = 15;
	SpriteList[0].Animations[2].Frames[2].centerY = 15;
	SpriteList[0].Animations[2].Frames[2].PegRegistered = false;
	SpriteList[0].Animations[2].Frames[2].useTransparency = true;

	SpriteList[0].Animations[2].Frames[3].BitmapName = "SpaceMan Back 2.bmp";
	SpriteList[0].Animations[2].Frames[3].TranslateX = 0.000;
	SpriteList[0].Animations[2].Frames[3].TranslateY = 0.000;
	SpriteList[0].Animations[2].Frames[3].Delay = 7;
	SpriteList[0].Animations[2].Frames[3].Width = 30;
	SpriteList[0].Animations[2].Frames[3].Height = 30;
	SpriteList[0].Animations[2].Frames[3].Transparency = RGB(255,255,255);
	SpriteList[0].Animations[2].Frames[3].hFlip = false;
	SpriteList[0].Animations[2].Frames[3].vFlip = false;
	SpriteList[0].Animations[2].Frames[3].zRotation = 0;
	SpriteList[0].Animations[2].Frames[3].HotSpot[0].x = 15;
	SpriteList[0].Animations[2].Frames[3].HotSpot[0].y = 15;
	::SetRect( &SpriteList[0].Animations[2].Frames[3].BBox, 0, 0, 29,29);
	SpriteList[0].Animations[2].Frames[3].centerX = 15;
	SpriteList[0].Animations[2].Frames[3].centerY = 15;
	SpriteList[0].Animations[2].Frames[3].PegRegistered = false;
	SpriteList[0].Animations[2].Frames[3].useTransparency = true;


	SpriteList[0].Animations[3].TotalFrames=4;
	SpriteList[0].Animations[3].ConnectTo = 0;
	SpriteList[0].Animations[3].Frames = new FrameElem[4];

	SpriteList[0].Animations[3].Frames[0].BitmapName = "SpaceMan 1.bmp";
	SpriteList[0].Animations[3].Frames[0].TranslateX = 0.000;
	SpriteList[0].Animations[3].Frames[0].TranslateY = 0.000;
	SpriteList[0].Animations[3].Frames[0].Delay = 7;
	SpriteList[0].Animations[3].Frames[0].Width = 30;
	SpriteList[0].Animations[3].Frames[0].Height = 30;
	SpriteList[0].Animations[3].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[0].Animations[3].Frames[0].hFlip = false;
	SpriteList[0].Animations[3].Frames[0].vFlip = false;
	SpriteList[0].Animations[3].Frames[0].zRotation = 0;
	SpriteList[0].Animations[3].Frames[0].HotSpot[0].x = 15;
	SpriteList[0].Animations[3].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[0].Animations[3].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[0].Animations[3].Frames[0].centerX = 15;
	SpriteList[0].Animations[3].Frames[0].centerY = 15;
	SpriteList[0].Animations[3].Frames[0].PegRegistered = false;
	SpriteList[0].Animations[3].Frames[0].useTransparency = true;

	SpriteList[0].Animations[3].Frames[1].BitmapName = "SpaceMan 2.bmp";
	SpriteList[0].Animations[3].Frames[1].TranslateX = 0.000;
	SpriteList[0].Animations[3].Frames[1].TranslateY = 0.000;
	SpriteList[0].Animations[3].Frames[1].Delay = 7;
	SpriteList[0].Animations[3].Frames[1].Width = 30;
	SpriteList[0].Animations[3].Frames[1].Height = 30;
	SpriteList[0].Animations[3].Frames[1].Transparency = RGB(255,255,255);
	SpriteList[0].Animations[3].Frames[1].hFlip = false;
	SpriteList[0].Animations[3].Frames[1].vFlip = false;
	SpriteList[0].Animations[3].Frames[1].zRotation = 0;
	SpriteList[0].Animations[3].Frames[1].HotSpot[0].x = 15;
	SpriteList[0].Animations[3].Frames[1].HotSpot[0].y = 15;
	::SetRect( &SpriteList[0].Animations[3].Frames[1].BBox, 0, 0, 29,29);
	SpriteList[0].Animations[3].Frames[1].centerX = 15;
	SpriteList[0].Animations[3].Frames[1].centerY = 15;
	SpriteList[0].Animations[3].Frames[1].PegRegistered = false;
	SpriteList[0].Animations[3].Frames[1].useTransparency = true;

	SpriteList[0].Animations[3].Frames[2].BitmapName = "SpaceMan 3.bmp";
	SpriteList[0].Animations[3].Frames[2].TranslateX = 0.000;
	SpriteList[0].Animations[3].Frames[2].TranslateY = 0.000;
	SpriteList[0].Animations[3].Frames[2].Delay = 7;
	SpriteList[0].Animations[3].Frames[2].Width = 30;
	SpriteList[0].Animations[3].Frames[2].Height = 30;
	SpriteList[0].Animations[3].Frames[2].Transparency = RGB(255,255,255);
	SpriteList[0].Animations[3].Frames[2].hFlip = false;
	SpriteList[0].Animations[3].Frames[2].vFlip = false;
	SpriteList[0].Animations[3].Frames[2].zRotation = 0;
	SpriteList[0].Animations[3].Frames[2].HotSpot[0].x = 15;
	SpriteList[0].Animations[3].Frames[2].HotSpot[0].y = 15;
	::SetRect( &SpriteList[0].Animations[3].Frames[2].BBox, 0, 0, 29,29);
	SpriteList[0].Animations[3].Frames[2].centerX = 15;
	SpriteList[0].Animations[3].Frames[2].centerY = 15;
	SpriteList[0].Animations[3].Frames[2].PegRegistered = false;
	SpriteList[0].Animations[3].Frames[2].useTransparency = true;

	SpriteList[0].Animations[3].Frames[3].BitmapName = "SpaceMan 2.bmp";
	SpriteList[0].Animations[3].Frames[3].TranslateX = 0.000;
	SpriteList[0].Animations[3].Frames[3].TranslateY = 0.000;
	SpriteList[0].Animations[3].Frames[3].Delay = 7;
	SpriteList[0].Animations[3].Frames[3].Width = 30;
	SpriteList[0].Animations[3].Frames[3].Height = 30;
	SpriteList[0].Animations[3].Frames[3].Transparency = RGB(255,255,255);
	SpriteList[0].Animations[3].Frames[3].hFlip = false;
	SpriteList[0].Animations[3].Frames[3].vFlip = false;
	SpriteList[0].Animations[3].Frames[3].zRotation = 0;
	SpriteList[0].Animations[3].Frames[3].HotSpot[0].x = 15;
	SpriteList[0].Animations[3].Frames[3].HotSpot[0].y = 15;
	::SetRect( &SpriteList[0].Animations[3].Frames[3].BBox, 0, 0, 29,29);
	SpriteList[0].Animations[3].Frames[3].centerX = 15;
	SpriteList[0].Animations[3].Frames[3].centerY = 15;
	SpriteList[0].Animations[3].Frames[3].PegRegistered = false;
	SpriteList[0].Animations[3].Frames[3].useTransparency = true;


	SpriteList[0].Animations[4].TotalFrames=2;
	SpriteList[0].Animations[4].ConnectTo = 0;
	SpriteList[0].Animations[4].Frames = new FrameElem[2];

	SpriteList[0].Animations[4].Frames[0].BitmapName = "SpaceMan 2.bmp";
	SpriteList[0].Animations[4].Frames[0].TranslateX = 0.000;
	SpriteList[0].Animations[4].Frames[0].TranslateY = 0.000;
	SpriteList[0].Animations[4].Frames[0].Delay = 20;
	SpriteList[0].Animations[4].Frames[0].Width = 30;
	SpriteList[0].Animations[4].Frames[0].Height = 30;
	SpriteList[0].Animations[4].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[0].Animations[4].Frames[0].hFlip = false;
	SpriteList[0].Animations[4].Frames[0].vFlip = false;
	SpriteList[0].Animations[4].Frames[0].zRotation = 0;
	SpriteList[0].Animations[4].Frames[0].HotSpot[0].x = 15;
	SpriteList[0].Animations[4].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[0].Animations[4].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[0].Animations[4].Frames[0].centerX = 15;
	SpriteList[0].Animations[4].Frames[0].centerY = 15;
	SpriteList[0].Animations[4].Frames[0].PegRegistered = false;
	SpriteList[0].Animations[4].Frames[0].useTransparency = true;

	SpriteList[0].Animations[4].Frames[1].BitmapName = "SpaceMan 4.bmp";
	SpriteList[0].Animations[4].Frames[1].TranslateX = 0.000;
	SpriteList[0].Animations[4].Frames[1].TranslateY = 0.000;
	SpriteList[0].Animations[4].Frames[1].Delay = 20;
	SpriteList[0].Animations[4].Frames[1].Width = 30;
	SpriteList[0].Animations[4].Frames[1].Height = 30;
	SpriteList[0].Animations[4].Frames[1].Transparency = RGB(255,255,255);
	SpriteList[0].Animations[4].Frames[1].hFlip = false;
	SpriteList[0].Animations[4].Frames[1].vFlip = false;
	SpriteList[0].Animations[4].Frames[1].zRotation = 0;
	SpriteList[0].Animations[4].Frames[1].HotSpot[0].x = 15;
	SpriteList[0].Animations[4].Frames[1].HotSpot[0].y = 15;
	::SetRect( &SpriteList[0].Animations[4].Frames[1].BBox, 0, 0, 29,29);
	SpriteList[0].Animations[4].Frames[1].centerX = 15;
	SpriteList[0].Animations[4].Frames[1].centerY = 15;
	SpriteList[0].Animations[4].Frames[1].PegRegistered = false;
	SpriteList[0].Animations[4].Frames[1].useTransparency = true;


	SpriteList[0].Animations[5].TotalFrames=2;
	SpriteList[0].Animations[5].ConnectTo = 0;
	SpriteList[0].Animations[5].Frames = new FrameElem[2];

	SpriteList[0].Animations[5].Frames[0].BitmapName = "SpaceMan Back 2.bmp";
	SpriteList[0].Animations[5].Frames[0].TranslateX = 0.000;
	SpriteList[0].Animations[5].Frames[0].TranslateY = 0.000;
	SpriteList[0].Animations[5].Frames[0].Delay = 30;
	SpriteList[0].Animations[5].Frames[0].Width = 30;
	SpriteList[0].Animations[5].Frames[0].Height = 30;
	SpriteList[0].Animations[5].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[0].Animations[5].Frames[0].hFlip = false;
	SpriteList[0].Animations[5].Frames[0].vFlip = false;
	SpriteList[0].Animations[5].Frames[0].zRotation = 0;
	SpriteList[0].Animations[5].Frames[0].HotSpot[0].x = 15;
	SpriteList[0].Animations[5].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[0].Animations[5].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[0].Animations[5].Frames[0].centerX = 15;
	SpriteList[0].Animations[5].Frames[0].centerY = 15;
	SpriteList[0].Animations[5].Frames[0].PegRegistered = false;
	SpriteList[0].Animations[5].Frames[0].useTransparency = true;

	SpriteList[0].Animations[5].Frames[1].BitmapName = "SpaceMan Back 4.bmp";
	SpriteList[0].Animations[5].Frames[1].TranslateX = 0.000;
	SpriteList[0].Animations[5].Frames[1].TranslateY = 0.000;
	SpriteList[0].Animations[5].Frames[1].Delay = 30;
	SpriteList[0].Animations[5].Frames[1].Width = 30;
	SpriteList[0].Animations[5].Frames[1].Height = 30;
	SpriteList[0].Animations[5].Frames[1].Transparency = RGB(255,255,255);
	SpriteList[0].Animations[5].Frames[1].hFlip = false;
	SpriteList[0].Animations[5].Frames[1].vFlip = false;
	SpriteList[0].Animations[5].Frames[1].zRotation = 0;
	SpriteList[0].Animations[5].Frames[1].HotSpot[0].x = 15;
	SpriteList[0].Animations[5].Frames[1].HotSpot[0].y = 15;
	::SetRect( &SpriteList[0].Animations[5].Frames[1].BBox, 0, 0, 29,29);
	SpriteList[0].Animations[5].Frames[1].centerX = 15;
	SpriteList[0].Animations[5].Frames[1].centerY = 15;
	SpriteList[0].Animations[5].Frames[1].PegRegistered = false;
	SpriteList[0].Animations[5].Frames[1].useTransparency = true;


	SpriteList[0].Animations[6].TotalFrames=2;
	SpriteList[0].Animations[6].ConnectTo = 0;
	SpriteList[0].Animations[6].Frames = new FrameElem[2];

	SpriteList[0].Animations[6].Frames[0].BitmapName = "SpaceMan Right 2.bmp";
	SpriteList[0].Animations[6].Frames[0].TranslateX = 0.000;
	SpriteList[0].Animations[6].Frames[0].TranslateY = 0.000;
	SpriteList[0].Animations[6].Frames[0].Delay = 20;
	SpriteList[0].Animations[6].Frames[0].Width = 30;
	SpriteList[0].Animations[6].Frames[0].Height = 30;
	SpriteList[0].Animations[6].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[0].Animations[6].Frames[0].hFlip = false;
	SpriteList[0].Animations[6].Frames[0].vFlip = false;
	SpriteList[0].Animations[6].Frames[0].zRotation = 0;
	SpriteList[0].Animations[6].Frames[0].HotSpot[0].x = 15;
	SpriteList[0].Animations[6].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[0].Animations[6].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[0].Animations[6].Frames[0].centerX = 15;
	SpriteList[0].Animations[6].Frames[0].centerY = 15;
	SpriteList[0].Animations[6].Frames[0].PegRegistered = false;
	SpriteList[0].Animations[6].Frames[0].useTransparency = true;

	SpriteList[0].Animations[6].Frames[1].BitmapName = "SpaceMan Right 4.bmp";
	SpriteList[0].Animations[6].Frames[1].TranslateX = 0.000;
	SpriteList[0].Animations[6].Frames[1].TranslateY = 0.000;
	SpriteList[0].Animations[6].Frames[1].Delay = 20;
	SpriteList[0].Animations[6].Frames[1].Width = 30;
	SpriteList[0].Animations[6].Frames[1].Height = 30;
	SpriteList[0].Animations[6].Frames[1].Transparency = RGB(255,255,255);
	SpriteList[0].Animations[6].Frames[1].hFlip = false;
	SpriteList[0].Animations[6].Frames[1].vFlip = false;
	SpriteList[0].Animations[6].Frames[1].zRotation = 0;
	SpriteList[0].Animations[6].Frames[1].HotSpot[0].x = 15;
	SpriteList[0].Animations[6].Frames[1].HotSpot[0].y = 15;
	::SetRect( &SpriteList[0].Animations[6].Frames[1].BBox, 0, 0, 29,29);
	SpriteList[0].Animations[6].Frames[1].centerX = 15;
	SpriteList[0].Animations[6].Frames[1].centerY = 15;
	SpriteList[0].Animations[6].Frames[1].PegRegistered = false;
	SpriteList[0].Animations[6].Frames[1].useTransparency = true;


	SpriteList[0].Animations[7].TotalFrames=2;
	SpriteList[0].Animations[7].ConnectTo = 0;
	SpriteList[0].Animations[7].Frames = new FrameElem[2];

	SpriteList[0].Animations[7].Frames[0].BitmapName = "SpaceMan Left 2.bmp";
	SpriteList[0].Animations[7].Frames[0].TranslateX = 0.000;
	SpriteList[0].Animations[7].Frames[0].TranslateY = 0.000;
	SpriteList[0].Animations[7].Frames[0].Delay = 20;
	SpriteList[0].Animations[7].Frames[0].Width = 30;
	SpriteList[0].Animations[7].Frames[0].Height = 30;
	SpriteList[0].Animations[7].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[0].Animations[7].Frames[0].hFlip = false;
	SpriteList[0].Animations[7].Frames[0].vFlip = false;
	SpriteList[0].Animations[7].Frames[0].zRotation = 0;
	SpriteList[0].Animations[7].Frames[0].HotSpot[0].x = 15;
	SpriteList[0].Animations[7].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[0].Animations[7].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[0].Animations[7].Frames[0].centerX = 15;
	SpriteList[0].Animations[7].Frames[0].centerY = 15;
	SpriteList[0].Animations[7].Frames[0].PegRegistered = false;
	SpriteList[0].Animations[7].Frames[0].useTransparency = true;

	SpriteList[0].Animations[7].Frames[1].BitmapName = "SpaceMan Left 4.bmp";
	SpriteList[0].Animations[7].Frames[1].TranslateX = 0.000;
	SpriteList[0].Animations[7].Frames[1].TranslateY = 0.000;
	SpriteList[0].Animations[7].Frames[1].Delay = 20;
	SpriteList[0].Animations[7].Frames[1].Width = 30;
	SpriteList[0].Animations[7].Frames[1].Height = 30;
	SpriteList[0].Animations[7].Frames[1].Transparency = RGB(255,255,255);
	SpriteList[0].Animations[7].Frames[1].hFlip = false;
	SpriteList[0].Animations[7].Frames[1].vFlip = false;
	SpriteList[0].Animations[7].Frames[1].zRotation = 0;
	SpriteList[0].Animations[7].Frames[1].HotSpot[0].x = 15;
	SpriteList[0].Animations[7].Frames[1].HotSpot[0].y = 15;
	::SetRect( &SpriteList[0].Animations[7].Frames[1].BBox, 0, 0, 29,29);
	SpriteList[0].Animations[7].Frames[1].centerX = 15;
	SpriteList[0].Animations[7].Frames[1].centerY = 15;
	SpriteList[0].Animations[7].Frames[1].PegRegistered = false;
	SpriteList[0].Animations[7].Frames[1].useTransparency = true;



	SpriteList[5].TotalAnimations = 1;
	SpriteList[5].Animations = new AnimationElem[1];

	SpriteList[5].Animations[0].TotalFrames=1;
	SpriteList[5].Animations[0].ConnectTo = 0;
	SpriteList[5].Animations[0].Frames = new FrameElem[1];

	SpriteList[5].Animations[0].Frames[0].BitmapName = "Memory Chip.bmp";
	SpriteList[5].Animations[0].Frames[0].TranslateX = 0.000;
	SpriteList[5].Animations[0].Frames[0].TranslateY = 0.000;
	SpriteList[5].Animations[0].Frames[0].Delay = 1;
	SpriteList[5].Animations[0].Frames[0].Width = 30;
	SpriteList[5].Animations[0].Frames[0].Height = 30;
	SpriteList[5].Animations[0].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[5].Animations[0].Frames[0].hFlip = false;
	SpriteList[5].Animations[0].Frames[0].vFlip = false;
	SpriteList[5].Animations[0].Frames[0].zRotation = 0;
	SpriteList[5].Animations[0].Frames[0].HotSpot[0].x = 15;
	SpriteList[5].Animations[0].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[5].Animations[0].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[5].Animations[0].Frames[0].centerX = 15;
	SpriteList[5].Animations[0].Frames[0].centerY = 15;
	SpriteList[5].Animations[0].Frames[0].PegRegistered = false;
	SpriteList[5].Animations[0].Frames[0].useTransparency = true;



	SpriteList[6].TotalAnimations = 3;
	SpriteList[6].Animations = new AnimationElem[3];

	SpriteList[6].Animations[0].TotalFrames=1;
	SpriteList[6].Animations[0].ConnectTo = 0;
	SpriteList[6].Animations[0].Frames = new FrameElem[1];

	SpriteList[6].Animations[0].Frames[0].BitmapName = "Survivor Vision.bmp";
	SpriteList[6].Animations[0].Frames[0].TranslateX = 0.000;
	SpriteList[6].Animations[0].Frames[0].TranslateY = 0.000;
	SpriteList[6].Animations[0].Frames[0].Delay = 1;
	SpriteList[6].Animations[0].Frames[0].Width = 1553;
	SpriteList[6].Animations[0].Frames[0].Height = 1234;
	SpriteList[6].Animations[0].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[6].Animations[0].Frames[0].hFlip = false;
	SpriteList[6].Animations[0].Frames[0].vFlip = false;
	SpriteList[6].Animations[0].Frames[0].zRotation = 0;
	SpriteList[6].Animations[0].Frames[0].HotSpot[0].x = 776;
	SpriteList[6].Animations[0].Frames[0].HotSpot[0].y = 617;
	::SetRect( &SpriteList[6].Animations[0].Frames[0].BBox, 0, 0, 1552,1233);
	SpriteList[6].Animations[0].Frames[0].centerX = 776;
	SpriteList[6].Animations[0].Frames[0].centerY = 617;
	SpriteList[6].Animations[0].Frames[0].PegRegistered = false;
	SpriteList[6].Animations[0].Frames[0].useTransparency = true;


	SpriteList[6].Animations[1].TotalFrames=1;
	SpriteList[6].Animations[1].ConnectTo = 0;
	SpriteList[6].Animations[1].Frames = new FrameElem[1];

	SpriteList[6].Animations[1].Frames[0].BitmapName = "Moderate Vision.bmp";
	SpriteList[6].Animations[1].Frames[0].TranslateX = 0.000;
	SpriteList[6].Animations[1].Frames[0].TranslateY = 0.000;
	SpriteList[6].Animations[1].Frames[0].Delay = 1;
	SpriteList[6].Animations[1].Frames[0].Width = 1553;
	SpriteList[6].Animations[1].Frames[0].Height = 1234;
	SpriteList[6].Animations[1].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[6].Animations[1].Frames[0].hFlip = false;
	SpriteList[6].Animations[1].Frames[0].vFlip = false;
	SpriteList[6].Animations[1].Frames[0].zRotation = 0;
	SpriteList[6].Animations[1].Frames[0].HotSpot[0].x = 776;
	SpriteList[6].Animations[1].Frames[0].HotSpot[0].y = 617;
	::SetRect( &SpriteList[6].Animations[1].Frames[0].BBox, 0, 0, 1552,1233);
	SpriteList[6].Animations[1].Frames[0].centerX = 776;
	SpriteList[6].Animations[1].Frames[0].centerY = 617;
	SpriteList[6].Animations[1].Frames[0].PegRegistered = false;
	SpriteList[6].Animations[1].Frames[0].useTransparency = true;


	SpriteList[6].Animations[2].TotalFrames=1;
	SpriteList[6].Animations[2].ConnectTo = 0;
	SpriteList[6].Animations[2].Frames = new FrameElem[1];

	SpriteList[6].Animations[2].Frames[0].BitmapName = "Amateur Vision.bmp";
	SpriteList[6].Animations[2].Frames[0].TranslateX = 0.000;
	SpriteList[6].Animations[2].Frames[0].TranslateY = 0.000;
	SpriteList[6].Animations[2].Frames[0].Delay = 1;
	SpriteList[6].Animations[2].Frames[0].Width = 1553;
	SpriteList[6].Animations[2].Frames[0].Height = 1234;
	SpriteList[6].Animations[2].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[6].Animations[2].Frames[0].hFlip = false;
	SpriteList[6].Animations[2].Frames[0].vFlip = false;
	SpriteList[6].Animations[2].Frames[0].zRotation = 0;
	SpriteList[6].Animations[2].Frames[0].HotSpot[0].x = 776;
	SpriteList[6].Animations[2].Frames[0].HotSpot[0].y = 617;
	::SetRect( &SpriteList[6].Animations[2].Frames[0].BBox, 0, 0, 1552,1233);
	SpriteList[6].Animations[2].Frames[0].centerX = 776;
	SpriteList[6].Animations[2].Frames[0].centerY = 617;
	SpriteList[6].Animations[2].Frames[0].PegRegistered = false;
	SpriteList[6].Animations[2].Frames[0].useTransparency = true;



	SpriteList[9].TotalAnimations = 3;
	SpriteList[9].Animations = new AnimationElem[3];

	SpriteList[9].Animations[0].TotalFrames=1;
	SpriteList[9].Animations[0].ConnectTo = 0;
	SpriteList[9].Animations[0].Frames = new FrameElem[1];

	SpriteList[9].Animations[0].Frames[0].BitmapName = "Button.bmp";
	SpriteList[9].Animations[0].Frames[0].TranslateX = 0.000;
	SpriteList[9].Animations[0].Frames[0].TranslateY = 0.000;
	SpriteList[9].Animations[0].Frames[0].Delay = 1;
	SpriteList[9].Animations[0].Frames[0].Width = 300;
	SpriteList[9].Animations[0].Frames[0].Height = 60;
	SpriteList[9].Animations[0].Frames[0].Transparency = RGB(0,0,0);
	SpriteList[9].Animations[0].Frames[0].hFlip = false;
	SpriteList[9].Animations[0].Frames[0].vFlip = false;
	SpriteList[9].Animations[0].Frames[0].zRotation = 0;
	SpriteList[9].Animations[0].Frames[0].HotSpot[0].x = 50;
	SpriteList[9].Animations[0].Frames[0].HotSpot[0].y = 25;
	::SetRect( &SpriteList[9].Animations[0].Frames[0].BBox, 0, 0, 299,59);
	SpriteList[9].Animations[0].Frames[0].centerX = 50;
	SpriteList[9].Animations[0].Frames[0].centerY = 25;
	SpriteList[9].Animations[0].Frames[0].PegRegistered = false;
	SpriteList[9].Animations[0].Frames[0].useTransparency = true;
	SpriteList[9].Animations[0].Frames[0].AddCollisionData(CollisionSegment(298,1,1,1,0,0));
	SpriteList[9].Animations[0].Frames[0].AddCollisionData(CollisionSegment(298,58,298,1,0,0));
	SpriteList[9].Animations[0].Frames[0].AddCollisionData(CollisionSegment(1,58,298,58,0,0));
	SpriteList[9].Animations[0].Frames[0].AddCollisionData(CollisionSegment(1,1,1,58,0,0));


	SpriteList[9].Animations[1].TotalFrames=1;
	SpriteList[9].Animations[1].ConnectTo = 0;
	SpriteList[9].Animations[1].Frames = new FrameElem[1];

	SpriteList[9].Animations[1].Frames[0].BitmapName = "Life Bar.bmp";
	SpriteList[9].Animations[1].Frames[0].TranslateX = 0.000;
	SpriteList[9].Animations[1].Frames[0].TranslateY = 0.000;
	SpriteList[9].Animations[1].Frames[0].Delay = 1;
	SpriteList[9].Animations[1].Frames[0].Width = 80;
	SpriteList[9].Animations[1].Frames[0].Height = 100;
	SpriteList[9].Animations[1].Frames[0].Transparency = RGB(240,240,240);
	SpriteList[9].Animations[1].Frames[0].hFlip = false;
	SpriteList[9].Animations[1].Frames[0].vFlip = false;
	SpriteList[9].Animations[1].Frames[0].zRotation = 0;
	SpriteList[9].Animations[1].Frames[0].HotSpot[0].x = 40;
	SpriteList[9].Animations[1].Frames[0].HotSpot[0].y = 50;
	::SetRect( &SpriteList[9].Animations[1].Frames[0].BBox, 0, 0, 79,99);
	SpriteList[9].Animations[1].Frames[0].centerX = 40;
	SpriteList[9].Animations[1].Frames[0].centerY = 50;
	SpriteList[9].Animations[1].Frames[0].PegRegistered = false;
	SpriteList[9].Animations[1].Frames[0].useTransparency = false;


	SpriteList[9].Animations[2].TotalFrames=1;
	SpriteList[9].Animations[2].ConnectTo = 0;
	SpriteList[9].Animations[2].Frames = new FrameElem[1];

	SpriteList[9].Animations[2].Frames[0].BitmapName = "Lives.bmp";
	SpriteList[9].Animations[2].Frames[0].TranslateX = 0.000;
	SpriteList[9].Animations[2].Frames[0].TranslateY = 0.000;
	SpriteList[9].Animations[2].Frames[0].Delay = 1;
	SpriteList[9].Animations[2].Frames[0].Width = 80;
	SpriteList[9].Animations[2].Frames[0].Height = 600;
	SpriteList[9].Animations[2].Frames[0].Transparency = RGB(240,240,240);
	SpriteList[9].Animations[2].Frames[0].hFlip = false;
	SpriteList[9].Animations[2].Frames[0].vFlip = false;
	SpriteList[9].Animations[2].Frames[0].zRotation = 0;
	SpriteList[9].Animations[2].Frames[0].HotSpot[0].x = 40;
	SpriteList[9].Animations[2].Frames[0].HotSpot[0].y = 300;
	::SetRect( &SpriteList[9].Animations[2].Frames[0].BBox, 0, 0, 79,599);
	SpriteList[9].Animations[2].Frames[0].centerX = 40;
	SpriteList[9].Animations[2].Frames[0].centerY = 300;
	SpriteList[9].Animations[2].Frames[0].PegRegistered = false;
	SpriteList[9].Animations[2].Frames[0].useTransparency = false;



	SpriteList[7].TotalAnimations = 1;
	SpriteList[7].Animations = new AnimationElem[1];

	SpriteList[7].Animations[0].TotalFrames=6;
	SpriteList[7].Animations[0].ConnectTo = 0;
	SpriteList[7].Animations[0].Frames = new FrameElem[6];

	SpriteList[7].Animations[0].Frames[0].BitmapName = "Restart 1.bmp";
	SpriteList[7].Animations[0].Frames[0].TranslateX = 0.000;
	SpriteList[7].Animations[0].Frames[0].TranslateY = 0.000;
	SpriteList[7].Animations[0].Frames[0].Delay = 1;
	SpriteList[7].Animations[0].Frames[0].Width = 800;
	SpriteList[7].Animations[0].Frames[0].Height = 600;
	SpriteList[7].Animations[0].Frames[0].Transparency = RGB(240,240,240);
	SpriteList[7].Animations[0].Frames[0].hFlip = false;
	SpriteList[7].Animations[0].Frames[0].vFlip = false;
	SpriteList[7].Animations[0].Frames[0].zRotation = 0;
	SpriteList[7].Animations[0].Frames[0].HotSpot[0].x = 400;
	SpriteList[7].Animations[0].Frames[0].HotSpot[0].y = 300;
	::SetRect( &SpriteList[7].Animations[0].Frames[0].BBox, 0, 0, 799,599);
	SpriteList[7].Animations[0].Frames[0].centerX = 400;
	SpriteList[7].Animations[0].Frames[0].centerY = 300;
	SpriteList[7].Animations[0].Frames[0].PegRegistered = false;
	SpriteList[7].Animations[0].Frames[0].useTransparency = false;

	SpriteList[7].Animations[0].Frames[1].BitmapName = "Restart 2.bmp";
	SpriteList[7].Animations[0].Frames[1].TranslateX = 0.000;
	SpriteList[7].Animations[0].Frames[1].TranslateY = 0.000;
	SpriteList[7].Animations[0].Frames[1].Delay = 1;
	SpriteList[7].Animations[0].Frames[1].Width = 800;
	SpriteList[7].Animations[0].Frames[1].Height = 600;
	SpriteList[7].Animations[0].Frames[1].Transparency = RGB(240,240,240);
	SpriteList[7].Animations[0].Frames[1].hFlip = false;
	SpriteList[7].Animations[0].Frames[1].vFlip = false;
	SpriteList[7].Animations[0].Frames[1].zRotation = 0;
	SpriteList[7].Animations[0].Frames[1].HotSpot[0].x = 400;
	SpriteList[7].Animations[0].Frames[1].HotSpot[0].y = 300;
	::SetRect( &SpriteList[7].Animations[0].Frames[1].BBox, 0, 0, 799,599);
	SpriteList[7].Animations[0].Frames[1].centerX = 400;
	SpriteList[7].Animations[0].Frames[1].centerY = 300;
	SpriteList[7].Animations[0].Frames[1].PegRegistered = false;
	SpriteList[7].Animations[0].Frames[1].useTransparency = false;

	SpriteList[7].Animations[0].Frames[2].BitmapName = "Restart 3.bmp";
	SpriteList[7].Animations[0].Frames[2].TranslateX = 0.000;
	SpriteList[7].Animations[0].Frames[2].TranslateY = 0.000;
	SpriteList[7].Animations[0].Frames[2].Delay = 1;
	SpriteList[7].Animations[0].Frames[2].Width = 800;
	SpriteList[7].Animations[0].Frames[2].Height = 600;
	SpriteList[7].Animations[0].Frames[2].Transparency = RGB(240,240,240);
	SpriteList[7].Animations[0].Frames[2].hFlip = false;
	SpriteList[7].Animations[0].Frames[2].vFlip = false;
	SpriteList[7].Animations[0].Frames[2].zRotation = 0;
	SpriteList[7].Animations[0].Frames[2].HotSpot[0].x = 400;
	SpriteList[7].Animations[0].Frames[2].HotSpot[0].y = 300;
	::SetRect( &SpriteList[7].Animations[0].Frames[2].BBox, 0, 0, 799,599);
	SpriteList[7].Animations[0].Frames[2].centerX = 400;
	SpriteList[7].Animations[0].Frames[2].centerY = 300;
	SpriteList[7].Animations[0].Frames[2].PegRegistered = false;
	SpriteList[7].Animations[0].Frames[2].useTransparency = false;

	SpriteList[7].Animations[0].Frames[3].BitmapName = "Restart 2.bmp";
	SpriteList[7].Animations[0].Frames[3].TranslateX = 0.000;
	SpriteList[7].Animations[0].Frames[3].TranslateY = 0.000;
	SpriteList[7].Animations[0].Frames[3].Delay = 1;
	SpriteList[7].Animations[0].Frames[3].Width = 800;
	SpriteList[7].Animations[0].Frames[3].Height = 600;
	SpriteList[7].Animations[0].Frames[3].Transparency = RGB(240,240,240);
	SpriteList[7].Animations[0].Frames[3].hFlip = false;
	SpriteList[7].Animations[0].Frames[3].vFlip = false;
	SpriteList[7].Animations[0].Frames[3].zRotation = 0;
	SpriteList[7].Animations[0].Frames[3].HotSpot[0].x = 400;
	SpriteList[7].Animations[0].Frames[3].HotSpot[0].y = 300;
	::SetRect( &SpriteList[7].Animations[0].Frames[3].BBox, 0, 0, 799,599);
	SpriteList[7].Animations[0].Frames[3].centerX = 400;
	SpriteList[7].Animations[0].Frames[3].centerY = 300;
	SpriteList[7].Animations[0].Frames[3].PegRegistered = false;
	SpriteList[7].Animations[0].Frames[3].useTransparency = false;

	SpriteList[7].Animations[0].Frames[4].BitmapName = "Restart 1.bmp";
	SpriteList[7].Animations[0].Frames[4].TranslateX = 0.000;
	SpriteList[7].Animations[0].Frames[4].TranslateY = 0.000;
	SpriteList[7].Animations[0].Frames[4].Delay = 1;
	SpriteList[7].Animations[0].Frames[4].Width = 800;
	SpriteList[7].Animations[0].Frames[4].Height = 600;
	SpriteList[7].Animations[0].Frames[4].Transparency = RGB(240,240,240);
	SpriteList[7].Animations[0].Frames[4].hFlip = false;
	SpriteList[7].Animations[0].Frames[4].vFlip = false;
	SpriteList[7].Animations[0].Frames[4].zRotation = 0;
	SpriteList[7].Animations[0].Frames[4].HotSpot[0].x = 400;
	SpriteList[7].Animations[0].Frames[4].HotSpot[0].y = 300;
	::SetRect( &SpriteList[7].Animations[0].Frames[4].BBox, 0, 0, 799,599);
	SpriteList[7].Animations[0].Frames[4].centerX = 400;
	SpriteList[7].Animations[0].Frames[4].centerY = 300;
	SpriteList[7].Animations[0].Frames[4].PegRegistered = false;
	SpriteList[7].Animations[0].Frames[4].useTransparency = false;

	SpriteList[7].Animations[0].Frames[5].BitmapName = "Restart 3.bmp";
	SpriteList[7].Animations[0].Frames[5].TranslateX = 0.000;
	SpriteList[7].Animations[0].Frames[5].TranslateY = 0.000;
	SpriteList[7].Animations[0].Frames[5].Delay = 1;
	SpriteList[7].Animations[0].Frames[5].Width = 800;
	SpriteList[7].Animations[0].Frames[5].Height = 600;
	SpriteList[7].Animations[0].Frames[5].Transparency = RGB(240,240,240);
	SpriteList[7].Animations[0].Frames[5].hFlip = false;
	SpriteList[7].Animations[0].Frames[5].vFlip = false;
	SpriteList[7].Animations[0].Frames[5].zRotation = 0;
	SpriteList[7].Animations[0].Frames[5].HotSpot[0].x = 400;
	SpriteList[7].Animations[0].Frames[5].HotSpot[0].y = 300;
	::SetRect( &SpriteList[7].Animations[0].Frames[5].BBox, 0, 0, 799,599);
	SpriteList[7].Animations[0].Frames[5].centerX = 400;
	SpriteList[7].Animations[0].Frames[5].centerY = 300;
	SpriteList[7].Animations[0].Frames[5].PegRegistered = false;
	SpriteList[7].Animations[0].Frames[5].useTransparency = false;



}

void LoadAnimation_Level_7(GameNode* gn)
{
	SpriteList[4].TotalAnimations = 7;
	SpriteList[4].Animations = new AnimationElem[7];

	SpriteList[4].Animations[0].TotalFrames=1;
	SpriteList[4].Animations[0].ConnectTo = 0;
	SpriteList[4].Animations[0].Frames = new FrameElem[1];

	SpriteList[4].Animations[0].Frames[0].BitmapName = "Wall.bmp";
	SpriteList[4].Animations[0].Frames[0].TranslateX = 0.000;
	SpriteList[4].Animations[0].Frames[0].TranslateY = 0.000;
	SpriteList[4].Animations[0].Frames[0].Delay = 1;
	SpriteList[4].Animations[0].Frames[0].Width = 30;
	SpriteList[4].Animations[0].Frames[0].Height = 30;
	SpriteList[4].Animations[0].Frames[0].Transparency = RGB(240,240,240);
	SpriteList[4].Animations[0].Frames[0].hFlip = false;
	SpriteList[4].Animations[0].Frames[0].vFlip = false;
	SpriteList[4].Animations[0].Frames[0].zRotation = 0;
	SpriteList[4].Animations[0].Frames[0].HotSpot[0].x = 15;
	SpriteList[4].Animations[0].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[4].Animations[0].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[4].Animations[0].Frames[0].centerX = 15;
	SpriteList[4].Animations[0].Frames[0].centerY = 15;
	SpriteList[4].Animations[0].Frames[0].PegRegistered = false;
	SpriteList[4].Animations[0].Frames[0].useTransparency = false;


	SpriteList[4].Animations[1].TotalFrames=3;
	SpriteList[4].Animations[1].ConnectTo = 0;
	SpriteList[4].Animations[1].Frames = new FrameElem[3];

	SpriteList[4].Animations[1].Frames[0].BitmapName = "Server 1.bmp";
	SpriteList[4].Animations[1].Frames[0].TranslateX = 0.000;
	SpriteList[4].Animations[1].Frames[0].TranslateY = 0.000;
	SpriteList[4].Animations[1].Frames[0].Delay = 21;
	SpriteList[4].Animations[1].Frames[0].Width = 30;
	SpriteList[4].Animations[1].Frames[0].Height = 30;
	SpriteList[4].Animations[1].Frames[0].Transparency = RGB(240,240,240);
	SpriteList[4].Animations[1].Frames[0].hFlip = false;
	SpriteList[4].Animations[1].Frames[0].vFlip = false;
	SpriteList[4].Animations[1].Frames[0].zRotation = 0;
	SpriteList[4].Animations[1].Frames[0].HotSpot[0].x = 15;
	SpriteList[4].Animations[1].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[4].Animations[1].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[4].Animations[1].Frames[0].centerX = 15;
	SpriteList[4].Animations[1].Frames[0].centerY = 15;
	SpriteList[4].Animations[1].Frames[0].PegRegistered = false;
	SpriteList[4].Animations[1].Frames[0].useTransparency = false;

	SpriteList[4].Animations[1].Frames[1].BitmapName = "Server 2.bmp";
	SpriteList[4].Animations[1].Frames[1].TranslateX = 0.000;
	SpriteList[4].Animations[1].Frames[1].TranslateY = 0.000;
	SpriteList[4].Animations[1].Frames[1].Delay = 21;
	SpriteList[4].Animations[1].Frames[1].Width = 30;
	SpriteList[4].Animations[1].Frames[1].Height = 30;
	SpriteList[4].Animations[1].Frames[1].Transparency = RGB(240,240,240);
	SpriteList[4].Animations[1].Frames[1].hFlip = false;
	SpriteList[4].Animations[1].Frames[1].vFlip = false;
	SpriteList[4].Animations[1].Frames[1].zRotation = 0;
	SpriteList[4].Animations[1].Frames[1].HotSpot[0].x = 15;
	SpriteList[4].Animations[1].Frames[1].HotSpot[0].y = 15;
	::SetRect( &SpriteList[4].Animations[1].Frames[1].BBox, 0, 0, 29,29);
	SpriteList[4].Animations[1].Frames[1].centerX = 15;
	SpriteList[4].Animations[1].Frames[1].centerY = 15;
	SpriteList[4].Animations[1].Frames[1].PegRegistered = false;
	SpriteList[4].Animations[1].Frames[1].useTransparency = false;

	SpriteList[4].Animations[1].Frames[2].BitmapName = "Server 3.bmp";
	SpriteList[4].Animations[1].Frames[2].TranslateX = 0.000;
	SpriteList[4].Animations[1].Frames[2].TranslateY = 0.000;
	SpriteList[4].Animations[1].Frames[2].Delay = 21;
	SpriteList[4].Animations[1].Frames[2].Width = 30;
	SpriteList[4].Animations[1].Frames[2].Height = 30;
	SpriteList[4].Animations[1].Frames[2].Transparency = RGB(240,240,240);
	SpriteList[4].Animations[1].Frames[2].hFlip = false;
	SpriteList[4].Animations[1].Frames[2].vFlip = false;
	SpriteList[4].Animations[1].Frames[2].zRotation = 0;
	SpriteList[4].Animations[1].Frames[2].HotSpot[0].x = 15;
	SpriteList[4].Animations[1].Frames[2].HotSpot[0].y = 15;
	::SetRect( &SpriteList[4].Animations[1].Frames[2].BBox, 0, 0, 29,29);
	SpriteList[4].Animations[1].Frames[2].centerX = 15;
	SpriteList[4].Animations[1].Frames[2].centerY = 15;
	SpriteList[4].Animations[1].Frames[2].PegRegistered = false;
	SpriteList[4].Animations[1].Frames[2].useTransparency = false;


	SpriteList[4].Animations[2].TotalFrames=1;
	SpriteList[4].Animations[2].ConnectTo = 0;
	SpriteList[4].Animations[2].Frames = new FrameElem[1];

	SpriteList[4].Animations[2].Frames[0].BitmapName = "Door 1.bmp";
	SpriteList[4].Animations[2].Frames[0].TranslateX = 0.000;
	SpriteList[4].Animations[2].Frames[0].TranslateY = 0.000;
	SpriteList[4].Animations[2].Frames[0].Delay = 1;
	SpriteList[4].Animations[2].Frames[0].Width = 30;
	SpriteList[4].Animations[2].Frames[0].Height = 30;
	SpriteList[4].Animations[2].Frames[0].Transparency = RGB(240,240,240);
	SpriteList[4].Animations[2].Frames[0].hFlip = false;
	SpriteList[4].Animations[2].Frames[0].vFlip = false;
	SpriteList[4].Animations[2].Frames[0].zRotation = 0;
	SpriteList[4].Animations[2].Frames[0].HotSpot[0].x = 15;
	SpriteList[4].Animations[2].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[4].Animations[2].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[4].Animations[2].Frames[0].centerX = 15;
	SpriteList[4].Animations[2].Frames[0].centerY = 15;
	SpriteList[4].Animations[2].Frames[0].PegRegistered = false;
	SpriteList[4].Animations[2].Frames[0].useTransparency = false;


	SpriteList[4].Animations[3].TotalFrames=1;
	SpriteList[4].Animations[3].ConnectTo = 0;
	SpriteList[4].Animations[3].Frames = new FrameElem[1];

	SpriteList[4].Animations[3].Frames[0].BitmapName = "Door 2.bmp";
	SpriteList[4].Animations[3].Frames[0].TranslateX = 0.000;
	SpriteList[4].Animations[3].Frames[0].TranslateY = 0.000;
	SpriteList[4].Animations[3].Frames[0].Delay = 1;
	SpriteList[4].Animations[3].Frames[0].Width = 30;
	SpriteList[4].Animations[3].Frames[0].Height = 30;
	SpriteList[4].Animations[3].Frames[0].Transparency = RGB(240,240,240);
	SpriteList[4].Animations[3].Frames[0].hFlip = false;
	SpriteList[4].Animations[3].Frames[0].vFlip = false;
	SpriteList[4].Animations[3].Frames[0].zRotation = 0;
	SpriteList[4].Animations[3].Frames[0].HotSpot[0].x = 15;
	SpriteList[4].Animations[3].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[4].Animations[3].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[4].Animations[3].Frames[0].centerX = 15;
	SpriteList[4].Animations[3].Frames[0].centerY = 15;
	SpriteList[4].Animations[3].Frames[0].PegRegistered = false;
	SpriteList[4].Animations[3].Frames[0].useTransparency = false;


	SpriteList[4].Animations[4].TotalFrames=1;
	SpriteList[4].Animations[4].ConnectTo = 0;
	SpriteList[4].Animations[4].Frames = new FrameElem[1];

	SpriteList[4].Animations[4].Frames[0].BitmapName = "Bed 1.bmp";
	SpriteList[4].Animations[4].Frames[0].TranslateX = 0.000;
	SpriteList[4].Animations[4].Frames[0].TranslateY = 0.000;
	SpriteList[4].Animations[4].Frames[0].Delay = 1;
	SpriteList[4].Animations[4].Frames[0].Width = 30;
	SpriteList[4].Animations[4].Frames[0].Height = 30;
	SpriteList[4].Animations[4].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[4].Animations[4].Frames[0].hFlip = false;
	SpriteList[4].Animations[4].Frames[0].vFlip = false;
	SpriteList[4].Animations[4].Frames[0].zRotation = 0;
	SpriteList[4].Animations[4].Frames[0].HotSpot[0].x = 15;
	SpriteList[4].Animations[4].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[4].Animations[4].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[4].Animations[4].Frames[0].centerX = 15;
	SpriteList[4].Animations[4].Frames[0].centerY = 15;
	SpriteList[4].Animations[4].Frames[0].PegRegistered = false;
	SpriteList[4].Animations[4].Frames[0].useTransparency = true;


	SpriteList[4].Animations[5].TotalFrames=1;
	SpriteList[4].Animations[5].ConnectTo = 0;
	SpriteList[4].Animations[5].Frames = new FrameElem[1];

	SpriteList[4].Animations[5].Frames[0].BitmapName = "Bed 2.bmp";
	SpriteList[4].Animations[5].Frames[0].TranslateX = 0.000;
	SpriteList[4].Animations[5].Frames[0].TranslateY = 0.000;
	SpriteList[4].Animations[5].Frames[0].Delay = 1;
	SpriteList[4].Animations[5].Frames[0].Width = 30;
	SpriteList[4].Animations[5].Frames[0].Height = 30;
	SpriteList[4].Animations[5].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[4].Animations[5].Frames[0].hFlip = false;
	SpriteList[4].Animations[5].Frames[0].vFlip = false;
	SpriteList[4].Animations[5].Frames[0].zRotation = 0;
	SpriteList[4].Animations[5].Frames[0].HotSpot[0].x = 15;
	SpriteList[4].Animations[5].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[4].Animations[5].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[4].Animations[5].Frames[0].centerX = 15;
	SpriteList[4].Animations[5].Frames[0].centerY = 15;
	SpriteList[4].Animations[5].Frames[0].PegRegistered = false;
	SpriteList[4].Animations[5].Frames[0].useTransparency = true;


	SpriteList[4].Animations[6].TotalFrames=1;
	SpriteList[4].Animations[6].ConnectTo = 0;
	SpriteList[4].Animations[6].Frames = new FrameElem[1];

	SpriteList[4].Animations[6].Frames[0].BitmapName = "Bed 3.bmp";
	SpriteList[4].Animations[6].Frames[0].TranslateX = 0.000;
	SpriteList[4].Animations[6].Frames[0].TranslateY = 0.000;
	SpriteList[4].Animations[6].Frames[0].Delay = 1;
	SpriteList[4].Animations[6].Frames[0].Width = 30;
	SpriteList[4].Animations[6].Frames[0].Height = 30;
	SpriteList[4].Animations[6].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[4].Animations[6].Frames[0].hFlip = false;
	SpriteList[4].Animations[6].Frames[0].vFlip = false;
	SpriteList[4].Animations[6].Frames[0].zRotation = 0;
	SpriteList[4].Animations[6].Frames[0].HotSpot[0].x = 15;
	SpriteList[4].Animations[6].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[4].Animations[6].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[4].Animations[6].Frames[0].centerX = 15;
	SpriteList[4].Animations[6].Frames[0].centerY = 15;
	SpriteList[4].Animations[6].Frames[0].PegRegistered = false;
	SpriteList[4].Animations[6].Frames[0].useTransparency = true;



	SpriteList[0].TotalAnimations = 8;
	SpriteList[0].Animations = new AnimationElem[8];

	SpriteList[0].Animations[0].TotalFrames=4;
	SpriteList[0].Animations[0].ConnectTo = 0;
	SpriteList[0].Animations[0].Frames = new FrameElem[4];

	SpriteList[0].Animations[0].Frames[0].BitmapName = "SpaceMan Left 1.bmp";
	SpriteList[0].Animations[0].Frames[0].TranslateX = 0.000;
	SpriteList[0].Animations[0].Frames[0].TranslateY = 0.000;
	SpriteList[0].Animations[0].Frames[0].Delay = 7;
	SpriteList[0].Animations[0].Frames[0].Width = 30;
	SpriteList[0].Animations[0].Frames[0].Height = 30;
	SpriteList[0].Animations[0].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[0].Animations[0].Frames[0].hFlip = false;
	SpriteList[0].Animations[0].Frames[0].vFlip = false;
	SpriteList[0].Animations[0].Frames[0].zRotation = 0;
	SpriteList[0].Animations[0].Frames[0].HotSpot[0].x = 15;
	SpriteList[0].Animations[0].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[0].Animations[0].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[0].Animations[0].Frames[0].centerX = 15;
	SpriteList[0].Animations[0].Frames[0].centerY = 15;
	SpriteList[0].Animations[0].Frames[0].PegRegistered = false;
	SpriteList[0].Animations[0].Frames[0].useTransparency = true;

	SpriteList[0].Animations[0].Frames[1].BitmapName = "SpaceMan Left 2.bmp";
	SpriteList[0].Animations[0].Frames[1].TranslateX = 0.000;
	SpriteList[0].Animations[0].Frames[1].TranslateY = 0.000;
	SpriteList[0].Animations[0].Frames[1].Delay = 7;
	SpriteList[0].Animations[0].Frames[1].Width = 30;
	SpriteList[0].Animations[0].Frames[1].Height = 30;
	SpriteList[0].Animations[0].Frames[1].Transparency = RGB(255,255,255);
	SpriteList[0].Animations[0].Frames[1].hFlip = false;
	SpriteList[0].Animations[0].Frames[1].vFlip = false;
	SpriteList[0].Animations[0].Frames[1].zRotation = 0;
	SpriteList[0].Animations[0].Frames[1].HotSpot[0].x = 15;
	SpriteList[0].Animations[0].Frames[1].HotSpot[0].y = 15;
	::SetRect( &SpriteList[0].Animations[0].Frames[1].BBox, 0, 0, 29,29);
	SpriteList[0].Animations[0].Frames[1].centerX = 15;
	SpriteList[0].Animations[0].Frames[1].centerY = 15;
	SpriteList[0].Animations[0].Frames[1].PegRegistered = false;
	SpriteList[0].Animations[0].Frames[1].useTransparency = true;

	SpriteList[0].Animations[0].Frames[2].BitmapName = "SpaceMan Left 3.bmp";
	SpriteList[0].Animations[0].Frames[2].TranslateX = 0.000;
	SpriteList[0].Animations[0].Frames[2].TranslateY = 0.000;
	SpriteList[0].Animations[0].Frames[2].Delay = 7;
	SpriteList[0].Animations[0].Frames[2].Width = 30;
	SpriteList[0].Animations[0].Frames[2].Height = 30;
	SpriteList[0].Animations[0].Frames[2].Transparency = RGB(255,255,255);
	SpriteList[0].Animations[0].Frames[2].hFlip = false;
	SpriteList[0].Animations[0].Frames[2].vFlip = false;
	SpriteList[0].Animations[0].Frames[2].zRotation = 0;
	SpriteList[0].Animations[0].Frames[2].HotSpot[0].x = 15;
	SpriteList[0].Animations[0].Frames[2].HotSpot[0].y = 15;
	::SetRect( &SpriteList[0].Animations[0].Frames[2].BBox, 0, 0, 29,29);
	SpriteList[0].Animations[0].Frames[2].centerX = 15;
	SpriteList[0].Animations[0].Frames[2].centerY = 15;
	SpriteList[0].Animations[0].Frames[2].PegRegistered = false;
	SpriteList[0].Animations[0].Frames[2].useTransparency = true;

	SpriteList[0].Animations[0].Frames[3].BitmapName = "SpaceMan Left 2.bmp";
	SpriteList[0].Animations[0].Frames[3].TranslateX = 0.000;
	SpriteList[0].Animations[0].Frames[3].TranslateY = 0.000;
	SpriteList[0].Animations[0].Frames[3].Delay = 7;
	SpriteList[0].Animations[0].Frames[3].Width = 30;
	SpriteList[0].Animations[0].Frames[3].Height = 30;
	SpriteList[0].Animations[0].Frames[3].Transparency = RGB(255,255,255);
	SpriteList[0].Animations[0].Frames[3].hFlip = false;
	SpriteList[0].Animations[0].Frames[3].vFlip = false;
	SpriteList[0].Animations[0].Frames[3].zRotation = 0;
	SpriteList[0].Animations[0].Frames[3].HotSpot[0].x = 15;
	SpriteList[0].Animations[0].Frames[3].HotSpot[0].y = 15;
	::SetRect( &SpriteList[0].Animations[0].Frames[3].BBox, 0, 0, 29,29);
	SpriteList[0].Animations[0].Frames[3].centerX = 15;
	SpriteList[0].Animations[0].Frames[3].centerY = 15;
	SpriteList[0].Animations[0].Frames[3].PegRegistered = false;
	SpriteList[0].Animations[0].Frames[3].useTransparency = true;


	SpriteList[0].Animations[1].TotalFrames=4;
	SpriteList[0].Animations[1].ConnectTo = 0;
	SpriteList[0].Animations[1].Frames = new FrameElem[4];

	SpriteList[0].Animations[1].Frames[0].BitmapName = "SpaceMan Right 1.bmp";
	SpriteList[0].Animations[1].Frames[0].TranslateX = 0.000;
	SpriteList[0].Animations[1].Frames[0].TranslateY = 0.000;
	SpriteList[0].Animations[1].Frames[0].Delay = 7;
	SpriteList[0].Animations[1].Frames[0].Width = 30;
	SpriteList[0].Animations[1].Frames[0].Height = 30;
	SpriteList[0].Animations[1].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[0].Animations[1].Frames[0].hFlip = false;
	SpriteList[0].Animations[1].Frames[0].vFlip = false;
	SpriteList[0].Animations[1].Frames[0].zRotation = 0;
	SpriteList[0].Animations[1].Frames[0].HotSpot[0].x = 15;
	SpriteList[0].Animations[1].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[0].Animations[1].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[0].Animations[1].Frames[0].centerX = 15;
	SpriteList[0].Animations[1].Frames[0].centerY = 15;
	SpriteList[0].Animations[1].Frames[0].PegRegistered = false;
	SpriteList[0].Animations[1].Frames[0].useTransparency = true;

	SpriteList[0].Animations[1].Frames[1].BitmapName = "SpaceMan Right 2.bmp";
	SpriteList[0].Animations[1].Frames[1].TranslateX = 0.000;
	SpriteList[0].Animations[1].Frames[1].TranslateY = 0.000;
	SpriteList[0].Animations[1].Frames[1].Delay = 7;
	SpriteList[0].Animations[1].Frames[1].Width = 30;
	SpriteList[0].Animations[1].Frames[1].Height = 30;
	SpriteList[0].Animations[1].Frames[1].Transparency = RGB(255,255,255);
	SpriteList[0].Animations[1].Frames[1].hFlip = false;
	SpriteList[0].Animations[1].Frames[1].vFlip = false;
	SpriteList[0].Animations[1].Frames[1].zRotation = 0;
	SpriteList[0].Animations[1].Frames[1].HotSpot[0].x = 15;
	SpriteList[0].Animations[1].Frames[1].HotSpot[0].y = 15;
	::SetRect( &SpriteList[0].Animations[1].Frames[1].BBox, 0, 0, 29,29);
	SpriteList[0].Animations[1].Frames[1].centerX = 15;
	SpriteList[0].Animations[1].Frames[1].centerY = 15;
	SpriteList[0].Animations[1].Frames[1].PegRegistered = false;
	SpriteList[0].Animations[1].Frames[1].useTransparency = true;

	SpriteList[0].Animations[1].Frames[2].BitmapName = "SpaceMan Right 3.bmp";
	SpriteList[0].Animations[1].Frames[2].TranslateX = 0.000;
	SpriteList[0].Animations[1].Frames[2].TranslateY = 0.000;
	SpriteList[0].Animations[1].Frames[2].Delay = 7;
	SpriteList[0].Animations[1].Frames[2].Width = 30;
	SpriteList[0].Animations[1].Frames[2].Height = 30;
	SpriteList[0].Animations[1].Frames[2].Transparency = RGB(255,255,255);
	SpriteList[0].Animations[1].Frames[2].hFlip = false;
	SpriteList[0].Animations[1].Frames[2].vFlip = false;
	SpriteList[0].Animations[1].Frames[2].zRotation = 0;
	SpriteList[0].Animations[1].Frames[2].HotSpot[0].x = 15;
	SpriteList[0].Animations[1].Frames[2].HotSpot[0].y = 15;
	::SetRect( &SpriteList[0].Animations[1].Frames[2].BBox, 0, 0, 29,29);
	SpriteList[0].Animations[1].Frames[2].centerX = 15;
	SpriteList[0].Animations[1].Frames[2].centerY = 15;
	SpriteList[0].Animations[1].Frames[2].PegRegistered = false;
	SpriteList[0].Animations[1].Frames[2].useTransparency = true;

	SpriteList[0].Animations[1].Frames[3].BitmapName = "SpaceMan Right 2.bmp";
	SpriteList[0].Animations[1].Frames[3].TranslateX = 0.000;
	SpriteList[0].Animations[1].Frames[3].TranslateY = 0.000;
	SpriteList[0].Animations[1].Frames[3].Delay = 7;
	SpriteList[0].Animations[1].Frames[3].Width = 30;
	SpriteList[0].Animations[1].Frames[3].Height = 30;
	SpriteList[0].Animations[1].Frames[3].Transparency = RGB(255,255,255);
	SpriteList[0].Animations[1].Frames[3].hFlip = false;
	SpriteList[0].Animations[1].Frames[3].vFlip = false;
	SpriteList[0].Animations[1].Frames[3].zRotation = 0;
	SpriteList[0].Animations[1].Frames[3].HotSpot[0].x = 15;
	SpriteList[0].Animations[1].Frames[3].HotSpot[0].y = 15;
	::SetRect( &SpriteList[0].Animations[1].Frames[3].BBox, 0, 0, 29,29);
	SpriteList[0].Animations[1].Frames[3].centerX = 15;
	SpriteList[0].Animations[1].Frames[3].centerY = 15;
	SpriteList[0].Animations[1].Frames[3].PegRegistered = false;
	SpriteList[0].Animations[1].Frames[3].useTransparency = true;


	SpriteList[0].Animations[2].TotalFrames=4;
	SpriteList[0].Animations[2].ConnectTo = 0;
	SpriteList[0].Animations[2].Frames = new FrameElem[4];

	SpriteList[0].Animations[2].Frames[0].BitmapName = "SpaceMan Back 1.bmp";
	SpriteList[0].Animations[2].Frames[0].TranslateX = 0.000;
	SpriteList[0].Animations[2].Frames[0].TranslateY = 0.000;
	SpriteList[0].Animations[2].Frames[0].Delay = 7;
	SpriteList[0].Animations[2].Frames[0].Width = 30;
	SpriteList[0].Animations[2].Frames[0].Height = 30;
	SpriteList[0].Animations[2].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[0].Animations[2].Frames[0].hFlip = false;
	SpriteList[0].Animations[2].Frames[0].vFlip = false;
	SpriteList[0].Animations[2].Frames[0].zRotation = 0;
	SpriteList[0].Animations[2].Frames[0].HotSpot[0].x = 15;
	SpriteList[0].Animations[2].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[0].Animations[2].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[0].Animations[2].Frames[0].centerX = 15;
	SpriteList[0].Animations[2].Frames[0].centerY = 15;
	SpriteList[0].Animations[2].Frames[0].PegRegistered = false;
	SpriteList[0].Animations[2].Frames[0].useTransparency = true;

	SpriteList[0].Animations[2].Frames[1].BitmapName = "SpaceMan Back 2.bmp";
	SpriteList[0].Animations[2].Frames[1].TranslateX = 0.000;
	SpriteList[0].Animations[2].Frames[1].TranslateY = 0.000;
	SpriteList[0].Animations[2].Frames[1].Delay = 7;
	SpriteList[0].Animations[2].Frames[1].Width = 30;
	SpriteList[0].Animations[2].Frames[1].Height = 30;
	SpriteList[0].Animations[2].Frames[1].Transparency = RGB(255,255,255);
	SpriteList[0].Animations[2].Frames[1].hFlip = false;
	SpriteList[0].Animations[2].Frames[1].vFlip = false;
	SpriteList[0].Animations[2].Frames[1].zRotation = 0;
	SpriteList[0].Animations[2].Frames[1].HotSpot[0].x = 15;
	SpriteList[0].Animations[2].Frames[1].HotSpot[0].y = 15;
	::SetRect( &SpriteList[0].Animations[2].Frames[1].BBox, 0, 0, 29,29);
	SpriteList[0].Animations[2].Frames[1].centerX = 15;
	SpriteList[0].Animations[2].Frames[1].centerY = 15;
	SpriteList[0].Animations[2].Frames[1].PegRegistered = false;
	SpriteList[0].Animations[2].Frames[1].useTransparency = true;

	SpriteList[0].Animations[2].Frames[2].BitmapName = "SpaceMan Back 3.bmp";
	SpriteList[0].Animations[2].Frames[2].TranslateX = 0.000;
	SpriteList[0].Animations[2].Frames[2].TranslateY = 0.000;
	SpriteList[0].Animations[2].Frames[2].Delay = 7;
	SpriteList[0].Animations[2].Frames[2].Width = 30;
	SpriteList[0].Animations[2].Frames[2].Height = 30;
	SpriteList[0].Animations[2].Frames[2].Transparency = RGB(255,255,255);
	SpriteList[0].Animations[2].Frames[2].hFlip = false;
	SpriteList[0].Animations[2].Frames[2].vFlip = false;
	SpriteList[0].Animations[2].Frames[2].zRotation = 0;
	SpriteList[0].Animations[2].Frames[2].HotSpot[0].x = 15;
	SpriteList[0].Animations[2].Frames[2].HotSpot[0].y = 15;
	::SetRect( &SpriteList[0].Animations[2].Frames[2].BBox, 0, 0, 29,29);
	SpriteList[0].Animations[2].Frames[2].centerX = 15;
	SpriteList[0].Animations[2].Frames[2].centerY = 15;
	SpriteList[0].Animations[2].Frames[2].PegRegistered = false;
	SpriteList[0].Animations[2].Frames[2].useTransparency = true;

	SpriteList[0].Animations[2].Frames[3].BitmapName = "SpaceMan Back 2.bmp";
	SpriteList[0].Animations[2].Frames[3].TranslateX = 0.000;
	SpriteList[0].Animations[2].Frames[3].TranslateY = 0.000;
	SpriteList[0].Animations[2].Frames[3].Delay = 7;
	SpriteList[0].Animations[2].Frames[3].Width = 30;
	SpriteList[0].Animations[2].Frames[3].Height = 30;
	SpriteList[0].Animations[2].Frames[3].Transparency = RGB(255,255,255);
	SpriteList[0].Animations[2].Frames[3].hFlip = false;
	SpriteList[0].Animations[2].Frames[3].vFlip = false;
	SpriteList[0].Animations[2].Frames[3].zRotation = 0;
	SpriteList[0].Animations[2].Frames[3].HotSpot[0].x = 15;
	SpriteList[0].Animations[2].Frames[3].HotSpot[0].y = 15;
	::SetRect( &SpriteList[0].Animations[2].Frames[3].BBox, 0, 0, 29,29);
	SpriteList[0].Animations[2].Frames[3].centerX = 15;
	SpriteList[0].Animations[2].Frames[3].centerY = 15;
	SpriteList[0].Animations[2].Frames[3].PegRegistered = false;
	SpriteList[0].Animations[2].Frames[3].useTransparency = true;


	SpriteList[0].Animations[3].TotalFrames=4;
	SpriteList[0].Animations[3].ConnectTo = 0;
	SpriteList[0].Animations[3].Frames = new FrameElem[4];

	SpriteList[0].Animations[3].Frames[0].BitmapName = "SpaceMan 1.bmp";
	SpriteList[0].Animations[3].Frames[0].TranslateX = 0.000;
	SpriteList[0].Animations[3].Frames[0].TranslateY = 0.000;
	SpriteList[0].Animations[3].Frames[0].Delay = 7;
	SpriteList[0].Animations[3].Frames[0].Width = 30;
	SpriteList[0].Animations[3].Frames[0].Height = 30;
	SpriteList[0].Animations[3].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[0].Animations[3].Frames[0].hFlip = false;
	SpriteList[0].Animations[3].Frames[0].vFlip = false;
	SpriteList[0].Animations[3].Frames[0].zRotation = 0;
	SpriteList[0].Animations[3].Frames[0].HotSpot[0].x = 15;
	SpriteList[0].Animations[3].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[0].Animations[3].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[0].Animations[3].Frames[0].centerX = 15;
	SpriteList[0].Animations[3].Frames[0].centerY = 15;
	SpriteList[0].Animations[3].Frames[0].PegRegistered = false;
	SpriteList[0].Animations[3].Frames[0].useTransparency = true;

	SpriteList[0].Animations[3].Frames[1].BitmapName = "SpaceMan 2.bmp";
	SpriteList[0].Animations[3].Frames[1].TranslateX = 0.000;
	SpriteList[0].Animations[3].Frames[1].TranslateY = 0.000;
	SpriteList[0].Animations[3].Frames[1].Delay = 7;
	SpriteList[0].Animations[3].Frames[1].Width = 30;
	SpriteList[0].Animations[3].Frames[1].Height = 30;
	SpriteList[0].Animations[3].Frames[1].Transparency = RGB(255,255,255);
	SpriteList[0].Animations[3].Frames[1].hFlip = false;
	SpriteList[0].Animations[3].Frames[1].vFlip = false;
	SpriteList[0].Animations[3].Frames[1].zRotation = 0;
	SpriteList[0].Animations[3].Frames[1].HotSpot[0].x = 15;
	SpriteList[0].Animations[3].Frames[1].HotSpot[0].y = 15;
	::SetRect( &SpriteList[0].Animations[3].Frames[1].BBox, 0, 0, 29,29);
	SpriteList[0].Animations[3].Frames[1].centerX = 15;
	SpriteList[0].Animations[3].Frames[1].centerY = 15;
	SpriteList[0].Animations[3].Frames[1].PegRegistered = false;
	SpriteList[0].Animations[3].Frames[1].useTransparency = true;

	SpriteList[0].Animations[3].Frames[2].BitmapName = "SpaceMan 3.bmp";
	SpriteList[0].Animations[3].Frames[2].TranslateX = 0.000;
	SpriteList[0].Animations[3].Frames[2].TranslateY = 0.000;
	SpriteList[0].Animations[3].Frames[2].Delay = 7;
	SpriteList[0].Animations[3].Frames[2].Width = 30;
	SpriteList[0].Animations[3].Frames[2].Height = 30;
	SpriteList[0].Animations[3].Frames[2].Transparency = RGB(255,255,255);
	SpriteList[0].Animations[3].Frames[2].hFlip = false;
	SpriteList[0].Animations[3].Frames[2].vFlip = false;
	SpriteList[0].Animations[3].Frames[2].zRotation = 0;
	SpriteList[0].Animations[3].Frames[2].HotSpot[0].x = 15;
	SpriteList[0].Animations[3].Frames[2].HotSpot[0].y = 15;
	::SetRect( &SpriteList[0].Animations[3].Frames[2].BBox, 0, 0, 29,29);
	SpriteList[0].Animations[3].Frames[2].centerX = 15;
	SpriteList[0].Animations[3].Frames[2].centerY = 15;
	SpriteList[0].Animations[3].Frames[2].PegRegistered = false;
	SpriteList[0].Animations[3].Frames[2].useTransparency = true;

	SpriteList[0].Animations[3].Frames[3].BitmapName = "SpaceMan 2.bmp";
	SpriteList[0].Animations[3].Frames[3].TranslateX = 0.000;
	SpriteList[0].Animations[3].Frames[3].TranslateY = 0.000;
	SpriteList[0].Animations[3].Frames[3].Delay = 7;
	SpriteList[0].Animations[3].Frames[3].Width = 30;
	SpriteList[0].Animations[3].Frames[3].Height = 30;
	SpriteList[0].Animations[3].Frames[3].Transparency = RGB(255,255,255);
	SpriteList[0].Animations[3].Frames[3].hFlip = false;
	SpriteList[0].Animations[3].Frames[3].vFlip = false;
	SpriteList[0].Animations[3].Frames[3].zRotation = 0;
	SpriteList[0].Animations[3].Frames[3].HotSpot[0].x = 15;
	SpriteList[0].Animations[3].Frames[3].HotSpot[0].y = 15;
	::SetRect( &SpriteList[0].Animations[3].Frames[3].BBox, 0, 0, 29,29);
	SpriteList[0].Animations[3].Frames[3].centerX = 15;
	SpriteList[0].Animations[3].Frames[3].centerY = 15;
	SpriteList[0].Animations[3].Frames[3].PegRegistered = false;
	SpriteList[0].Animations[3].Frames[3].useTransparency = true;


	SpriteList[0].Animations[4].TotalFrames=2;
	SpriteList[0].Animations[4].ConnectTo = 0;
	SpriteList[0].Animations[4].Frames = new FrameElem[2];

	SpriteList[0].Animations[4].Frames[0].BitmapName = "SpaceMan 2.bmp";
	SpriteList[0].Animations[4].Frames[0].TranslateX = 0.000;
	SpriteList[0].Animations[4].Frames[0].TranslateY = 0.000;
	SpriteList[0].Animations[4].Frames[0].Delay = 20;
	SpriteList[0].Animations[4].Frames[0].Width = 30;
	SpriteList[0].Animations[4].Frames[0].Height = 30;
	SpriteList[0].Animations[4].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[0].Animations[4].Frames[0].hFlip = false;
	SpriteList[0].Animations[4].Frames[0].vFlip = false;
	SpriteList[0].Animations[4].Frames[0].zRotation = 0;
	SpriteList[0].Animations[4].Frames[0].HotSpot[0].x = 15;
	SpriteList[0].Animations[4].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[0].Animations[4].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[0].Animations[4].Frames[0].centerX = 15;
	SpriteList[0].Animations[4].Frames[0].centerY = 15;
	SpriteList[0].Animations[4].Frames[0].PegRegistered = false;
	SpriteList[0].Animations[4].Frames[0].useTransparency = true;

	SpriteList[0].Animations[4].Frames[1].BitmapName = "SpaceMan 4.bmp";
	SpriteList[0].Animations[4].Frames[1].TranslateX = 0.000;
	SpriteList[0].Animations[4].Frames[1].TranslateY = 0.000;
	SpriteList[0].Animations[4].Frames[1].Delay = 20;
	SpriteList[0].Animations[4].Frames[1].Width = 30;
	SpriteList[0].Animations[4].Frames[1].Height = 30;
	SpriteList[0].Animations[4].Frames[1].Transparency = RGB(255,255,255);
	SpriteList[0].Animations[4].Frames[1].hFlip = false;
	SpriteList[0].Animations[4].Frames[1].vFlip = false;
	SpriteList[0].Animations[4].Frames[1].zRotation = 0;
	SpriteList[0].Animations[4].Frames[1].HotSpot[0].x = 15;
	SpriteList[0].Animations[4].Frames[1].HotSpot[0].y = 15;
	::SetRect( &SpriteList[0].Animations[4].Frames[1].BBox, 0, 0, 29,29);
	SpriteList[0].Animations[4].Frames[1].centerX = 15;
	SpriteList[0].Animations[4].Frames[1].centerY = 15;
	SpriteList[0].Animations[4].Frames[1].PegRegistered = false;
	SpriteList[0].Animations[4].Frames[1].useTransparency = true;


	SpriteList[0].Animations[5].TotalFrames=2;
	SpriteList[0].Animations[5].ConnectTo = 0;
	SpriteList[0].Animations[5].Frames = new FrameElem[2];

	SpriteList[0].Animations[5].Frames[0].BitmapName = "SpaceMan Back 2.bmp";
	SpriteList[0].Animations[5].Frames[0].TranslateX = 0.000;
	SpriteList[0].Animations[5].Frames[0].TranslateY = 0.000;
	SpriteList[0].Animations[5].Frames[0].Delay = 30;
	SpriteList[0].Animations[5].Frames[0].Width = 30;
	SpriteList[0].Animations[5].Frames[0].Height = 30;
	SpriteList[0].Animations[5].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[0].Animations[5].Frames[0].hFlip = false;
	SpriteList[0].Animations[5].Frames[0].vFlip = false;
	SpriteList[0].Animations[5].Frames[0].zRotation = 0;
	SpriteList[0].Animations[5].Frames[0].HotSpot[0].x = 15;
	SpriteList[0].Animations[5].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[0].Animations[5].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[0].Animations[5].Frames[0].centerX = 15;
	SpriteList[0].Animations[5].Frames[0].centerY = 15;
	SpriteList[0].Animations[5].Frames[0].PegRegistered = false;
	SpriteList[0].Animations[5].Frames[0].useTransparency = true;

	SpriteList[0].Animations[5].Frames[1].BitmapName = "SpaceMan Back 4.bmp";
	SpriteList[0].Animations[5].Frames[1].TranslateX = 0.000;
	SpriteList[0].Animations[5].Frames[1].TranslateY = 0.000;
	SpriteList[0].Animations[5].Frames[1].Delay = 30;
	SpriteList[0].Animations[5].Frames[1].Width = 30;
	SpriteList[0].Animations[5].Frames[1].Height = 30;
	SpriteList[0].Animations[5].Frames[1].Transparency = RGB(255,255,255);
	SpriteList[0].Animations[5].Frames[1].hFlip = false;
	SpriteList[0].Animations[5].Frames[1].vFlip = false;
	SpriteList[0].Animations[5].Frames[1].zRotation = 0;
	SpriteList[0].Animations[5].Frames[1].HotSpot[0].x = 15;
	SpriteList[0].Animations[5].Frames[1].HotSpot[0].y = 15;
	::SetRect( &SpriteList[0].Animations[5].Frames[1].BBox, 0, 0, 29,29);
	SpriteList[0].Animations[5].Frames[1].centerX = 15;
	SpriteList[0].Animations[5].Frames[1].centerY = 15;
	SpriteList[0].Animations[5].Frames[1].PegRegistered = false;
	SpriteList[0].Animations[5].Frames[1].useTransparency = true;


	SpriteList[0].Animations[6].TotalFrames=2;
	SpriteList[0].Animations[6].ConnectTo = 0;
	SpriteList[0].Animations[6].Frames = new FrameElem[2];

	SpriteList[0].Animations[6].Frames[0].BitmapName = "SpaceMan Right 2.bmp";
	SpriteList[0].Animations[6].Frames[0].TranslateX = 0.000;
	SpriteList[0].Animations[6].Frames[0].TranslateY = 0.000;
	SpriteList[0].Animations[6].Frames[0].Delay = 20;
	SpriteList[0].Animations[6].Frames[0].Width = 30;
	SpriteList[0].Animations[6].Frames[0].Height = 30;
	SpriteList[0].Animations[6].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[0].Animations[6].Frames[0].hFlip = false;
	SpriteList[0].Animations[6].Frames[0].vFlip = false;
	SpriteList[0].Animations[6].Frames[0].zRotation = 0;
	SpriteList[0].Animations[6].Frames[0].HotSpot[0].x = 15;
	SpriteList[0].Animations[6].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[0].Animations[6].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[0].Animations[6].Frames[0].centerX = 15;
	SpriteList[0].Animations[6].Frames[0].centerY = 15;
	SpriteList[0].Animations[6].Frames[0].PegRegistered = false;
	SpriteList[0].Animations[6].Frames[0].useTransparency = true;

	SpriteList[0].Animations[6].Frames[1].BitmapName = "SpaceMan Right 4.bmp";
	SpriteList[0].Animations[6].Frames[1].TranslateX = 0.000;
	SpriteList[0].Animations[6].Frames[1].TranslateY = 0.000;
	SpriteList[0].Animations[6].Frames[1].Delay = 20;
	SpriteList[0].Animations[6].Frames[1].Width = 30;
	SpriteList[0].Animations[6].Frames[1].Height = 30;
	SpriteList[0].Animations[6].Frames[1].Transparency = RGB(255,255,255);
	SpriteList[0].Animations[6].Frames[1].hFlip = false;
	SpriteList[0].Animations[6].Frames[1].vFlip = false;
	SpriteList[0].Animations[6].Frames[1].zRotation = 0;
	SpriteList[0].Animations[6].Frames[1].HotSpot[0].x = 15;
	SpriteList[0].Animations[6].Frames[1].HotSpot[0].y = 15;
	::SetRect( &SpriteList[0].Animations[6].Frames[1].BBox, 0, 0, 29,29);
	SpriteList[0].Animations[6].Frames[1].centerX = 15;
	SpriteList[0].Animations[6].Frames[1].centerY = 15;
	SpriteList[0].Animations[6].Frames[1].PegRegistered = false;
	SpriteList[0].Animations[6].Frames[1].useTransparency = true;


	SpriteList[0].Animations[7].TotalFrames=2;
	SpriteList[0].Animations[7].ConnectTo = 0;
	SpriteList[0].Animations[7].Frames = new FrameElem[2];

	SpriteList[0].Animations[7].Frames[0].BitmapName = "SpaceMan Left 2.bmp";
	SpriteList[0].Animations[7].Frames[0].TranslateX = 0.000;
	SpriteList[0].Animations[7].Frames[0].TranslateY = 0.000;
	SpriteList[0].Animations[7].Frames[0].Delay = 20;
	SpriteList[0].Animations[7].Frames[0].Width = 30;
	SpriteList[0].Animations[7].Frames[0].Height = 30;
	SpriteList[0].Animations[7].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[0].Animations[7].Frames[0].hFlip = false;
	SpriteList[0].Animations[7].Frames[0].vFlip = false;
	SpriteList[0].Animations[7].Frames[0].zRotation = 0;
	SpriteList[0].Animations[7].Frames[0].HotSpot[0].x = 15;
	SpriteList[0].Animations[7].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[0].Animations[7].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[0].Animations[7].Frames[0].centerX = 15;
	SpriteList[0].Animations[7].Frames[0].centerY = 15;
	SpriteList[0].Animations[7].Frames[0].PegRegistered = false;
	SpriteList[0].Animations[7].Frames[0].useTransparency = true;

	SpriteList[0].Animations[7].Frames[1].BitmapName = "SpaceMan Left 4.bmp";
	SpriteList[0].Animations[7].Frames[1].TranslateX = 0.000;
	SpriteList[0].Animations[7].Frames[1].TranslateY = 0.000;
	SpriteList[0].Animations[7].Frames[1].Delay = 20;
	SpriteList[0].Animations[7].Frames[1].Width = 30;
	SpriteList[0].Animations[7].Frames[1].Height = 30;
	SpriteList[0].Animations[7].Frames[1].Transparency = RGB(255,255,255);
	SpriteList[0].Animations[7].Frames[1].hFlip = false;
	SpriteList[0].Animations[7].Frames[1].vFlip = false;
	SpriteList[0].Animations[7].Frames[1].zRotation = 0;
	SpriteList[0].Animations[7].Frames[1].HotSpot[0].x = 15;
	SpriteList[0].Animations[7].Frames[1].HotSpot[0].y = 15;
	::SetRect( &SpriteList[0].Animations[7].Frames[1].BBox, 0, 0, 29,29);
	SpriteList[0].Animations[7].Frames[1].centerX = 15;
	SpriteList[0].Animations[7].Frames[1].centerY = 15;
	SpriteList[0].Animations[7].Frames[1].PegRegistered = false;
	SpriteList[0].Animations[7].Frames[1].useTransparency = true;



	SpriteList[5].TotalAnimations = 1;
	SpriteList[5].Animations = new AnimationElem[1];

	SpriteList[5].Animations[0].TotalFrames=1;
	SpriteList[5].Animations[0].ConnectTo = 0;
	SpriteList[5].Animations[0].Frames = new FrameElem[1];

	SpriteList[5].Animations[0].Frames[0].BitmapName = "Memory Chip.bmp";
	SpriteList[5].Animations[0].Frames[0].TranslateX = 0.000;
	SpriteList[5].Animations[0].Frames[0].TranslateY = 0.000;
	SpriteList[5].Animations[0].Frames[0].Delay = 1;
	SpriteList[5].Animations[0].Frames[0].Width = 30;
	SpriteList[5].Animations[0].Frames[0].Height = 30;
	SpriteList[5].Animations[0].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[5].Animations[0].Frames[0].hFlip = false;
	SpriteList[5].Animations[0].Frames[0].vFlip = false;
	SpriteList[5].Animations[0].Frames[0].zRotation = 0;
	SpriteList[5].Animations[0].Frames[0].HotSpot[0].x = 15;
	SpriteList[5].Animations[0].Frames[0].HotSpot[0].y = 15;
	::SetRect( &SpriteList[5].Animations[0].Frames[0].BBox, 0, 0, 29,29);
	SpriteList[5].Animations[0].Frames[0].centerX = 15;
	SpriteList[5].Animations[0].Frames[0].centerY = 15;
	SpriteList[5].Animations[0].Frames[0].PegRegistered = false;
	SpriteList[5].Animations[0].Frames[0].useTransparency = true;



	SpriteList[6].TotalAnimations = 3;
	SpriteList[6].Animations = new AnimationElem[3];

	SpriteList[6].Animations[0].TotalFrames=1;
	SpriteList[6].Animations[0].ConnectTo = 0;
	SpriteList[6].Animations[0].Frames = new FrameElem[1];

	SpriteList[6].Animations[0].Frames[0].BitmapName = "Survivor Vision.bmp";
	SpriteList[6].Animations[0].Frames[0].TranslateX = 0.000;
	SpriteList[6].Animations[0].Frames[0].TranslateY = 0.000;
	SpriteList[6].Animations[0].Frames[0].Delay = 1;
	SpriteList[6].Animations[0].Frames[0].Width = 1553;
	SpriteList[6].Animations[0].Frames[0].Height = 1234;
	SpriteList[6].Animations[0].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[6].Animations[0].Frames[0].hFlip = false;
	SpriteList[6].Animations[0].Frames[0].vFlip = false;
	SpriteList[6].Animations[0].Frames[0].zRotation = 0;
	SpriteList[6].Animations[0].Frames[0].HotSpot[0].x = 776;
	SpriteList[6].Animations[0].Frames[0].HotSpot[0].y = 617;
	::SetRect( &SpriteList[6].Animations[0].Frames[0].BBox, 0, 0, 1552,1233);
	SpriteList[6].Animations[0].Frames[0].centerX = 776;
	SpriteList[6].Animations[0].Frames[0].centerY = 617;
	SpriteList[6].Animations[0].Frames[0].PegRegistered = false;
	SpriteList[6].Animations[0].Frames[0].useTransparency = true;


	SpriteList[6].Animations[1].TotalFrames=1;
	SpriteList[6].Animations[1].ConnectTo = 0;
	SpriteList[6].Animations[1].Frames = new FrameElem[1];

	SpriteList[6].Animations[1].Frames[0].BitmapName = "Moderate Vision.bmp";
	SpriteList[6].Animations[1].Frames[0].TranslateX = 0.000;
	SpriteList[6].Animations[1].Frames[0].TranslateY = 0.000;
	SpriteList[6].Animations[1].Frames[0].Delay = 1;
	SpriteList[6].Animations[1].Frames[0].Width = 1553;
	SpriteList[6].Animations[1].Frames[0].Height = 1234;
	SpriteList[6].Animations[1].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[6].Animations[1].Frames[0].hFlip = false;
	SpriteList[6].Animations[1].Frames[0].vFlip = false;
	SpriteList[6].Animations[1].Frames[0].zRotation = 0;
	SpriteList[6].Animations[1].Frames[0].HotSpot[0].x = 776;
	SpriteList[6].Animations[1].Frames[0].HotSpot[0].y = 617;
	::SetRect( &SpriteList[6].Animations[1].Frames[0].BBox, 0, 0, 1552,1233);
	SpriteList[6].Animations[1].Frames[0].centerX = 776;
	SpriteList[6].Animations[1].Frames[0].centerY = 617;
	SpriteList[6].Animations[1].Frames[0].PegRegistered = false;
	SpriteList[6].Animations[1].Frames[0].useTransparency = true;


	SpriteList[6].Animations[2].TotalFrames=1;
	SpriteList[6].Animations[2].ConnectTo = 0;
	SpriteList[6].Animations[2].Frames = new FrameElem[1];

	SpriteList[6].Animations[2].Frames[0].BitmapName = "Amateur Vision.bmp";
	SpriteList[6].Animations[2].Frames[0].TranslateX = 0.000;
	SpriteList[6].Animations[2].Frames[0].TranslateY = 0.000;
	SpriteList[6].Animations[2].Frames[0].Delay = 1;
	SpriteList[6].Animations[2].Frames[0].Width = 1553;
	SpriteList[6].Animations[2].Frames[0].Height = 1234;
	SpriteList[6].Animations[2].Frames[0].Transparency = RGB(255,255,255);
	SpriteList[6].Animations[2].Frames[0].hFlip = false;
	SpriteList[6].Animations[2].Frames[0].vFlip = false;
	SpriteList[6].Animations[2].Frames[0].zRotation = 0;
	SpriteList[6].Animations[2].Frames[0].HotSpot[0].x = 776;
	SpriteList[6].Animations[2].Frames[0].HotSpot[0].y = 617;
	::SetRect( &SpriteList[6].Animations[2].Frames[0].BBox, 0, 0, 1552,1233);
	SpriteList[6].Animations[2].Frames[0].centerX = 776;
	SpriteList[6].Animations[2].Frames[0].centerY = 617;
	SpriteList[6].Animations[2].Frames[0].PegRegistered = false;
	SpriteList[6].Animations[2].Frames[0].useTransparency = true;



	SpriteList[9].TotalAnimations = 3;
	SpriteList[9].Animations = new AnimationElem[3];

	SpriteList[9].Animations[0].TotalFrames=1;
	SpriteList[9].Animations[0].ConnectTo = 0;
	SpriteList[9].Animations[0].Frames = new FrameElem[1];

	SpriteList[9].Animations[0].Frames[0].BitmapName = "Button.bmp";
	SpriteList[9].Animations[0].Frames[0].TranslateX = 0.000;
	SpriteList[9].Animations[0].Frames[0].TranslateY = 0.000;
	SpriteList[9].Animations[0].Frames[0].Delay = 1;
	SpriteList[9].Animations[0].Frames[0].Width = 300;
	SpriteList[9].Animations[0].Frames[0].Height = 60;
	SpriteList[9].Animations[0].Frames[0].Transparency = RGB(0,0,0);
	SpriteList[9].Animations[0].Frames[0].hFlip = false;
	SpriteList[9].Animations[0].Frames[0].vFlip = false;
	SpriteList[9].Animations[0].Frames[0].zRotation = 0;
	SpriteList[9].Animations[0].Frames[0].HotSpot[0].x = 50;
	SpriteList[9].Animations[0].Frames[0].HotSpot[0].y = 25;
	::SetRect( &SpriteList[9].Animations[0].Frames[0].BBox, 0, 0, 299,59);
	SpriteList[9].Animations[0].Frames[0].centerX = 50;
	SpriteList[9].Animations[0].Frames[0].centerY = 25;
	SpriteList[9].Animations[0].Frames[0].PegRegistered = false;
	SpriteList[9].Animations[0].Frames[0].useTransparency = true;
	SpriteList[9].Animations[0].Frames[0].AddCollisionData(CollisionSegment(298,1,1,1,0,0));
	SpriteList[9].Animations[0].Frames[0].AddCollisionData(CollisionSegment(298,58,298,1,0,0));
	SpriteList[9].Animations[0].Frames[0].AddCollisionData(CollisionSegment(1,58,298,58,0,0));
	SpriteList[9].Animations[0].Frames[0].AddCollisionData(CollisionSegment(1,1,1,58,0,0));


	SpriteList[9].Animations[1].TotalFrames=1;
	SpriteList[9].Animations[1].ConnectTo = 0;
	SpriteList[9].Animations[1].Frames = new FrameElem[1];

	SpriteList[9].Animations[1].Frames[0].BitmapName = "Life Bar.bmp";
	SpriteList[9].Animations[1].Frames[0].TranslateX = 0.000;
	SpriteList[9].Animations[1].Frames[0].TranslateY = 0.000;
	SpriteList[9].Animations[1].Frames[0].Delay = 1;
	SpriteList[9].Animations[1].Frames[0].Width = 80;
	SpriteList[9].Animations[1].Frames[0].Height = 100;
	SpriteList[9].Animations[1].Frames[0].Transparency = RGB(240,240,240);
	SpriteList[9].Animations[1].Frames[0].hFlip = false;
	SpriteList[9].Animations[1].Frames[0].vFlip = false;
	SpriteList[9].Animations[1].Frames[0].zRotation = 0;
	SpriteList[9].Animations[1].Frames[0].HotSpot[0].x = 40;
	SpriteList[9].Animations[1].Frames[0].HotSpot[0].y = 50;
	::SetRect( &SpriteList[9].Animations[1].Frames[0].BBox, 0, 0, 79,99);
	SpriteList[9].Animations[1].Frames[0].centerX = 40;
	SpriteList[9].Animations[1].Frames[0].centerY = 50;
	SpriteList[9].Animations[1].Frames[0].PegRegistered = false;
	SpriteList[9].Animations[1].Frames[0].useTransparency = false;


	SpriteList[9].Animations[2].TotalFrames=1;
	SpriteList[9].Animations[2].ConnectTo = 0;
	SpriteList[9].Animations[2].Frames = new FrameElem[1];

	SpriteList[9].Animations[2].Frames[0].BitmapName = "Lives.bmp";
	SpriteList[9].Animations[2].Frames[0].TranslateX = 0.000;
	SpriteList[9].Animations[2].Frames[0].TranslateY = 0.000;
	SpriteList[9].Animations[2].Frames[0].Delay = 1;
	SpriteList[9].Animations[2].Frames[0].Width = 80;
	SpriteList[9].Animations[2].Frames[0].Height = 600;
	SpriteList[9].Animations[2].Frames[0].Transparency = RGB(240,240,240);
	SpriteList[9].Animations[2].Frames[0].hFlip = false;
	SpriteList[9].Animations[2].Frames[0].vFlip = false;
	SpriteList[9].Animations[2].Frames[0].zRotation = 0;
	SpriteList[9].Animations[2].Frames[0].HotSpot[0].x = 40;
	SpriteList[9].Animations[2].Frames[0].HotSpot[0].y = 300;
	::SetRect( &SpriteList[9].Animations[2].Frames[0].BBox, 0, 0, 79,599);
	SpriteList[9].Animations[2].Frames[0].centerX = 40;
	SpriteList[9].Animations[2].Frames[0].centerY = 300;
	SpriteList[9].Animations[2].Frames[0].PegRegistered = false;
	SpriteList[9].Animations[2].Frames[0].useTransparency = false;



	SpriteList[7].TotalAnimations = 1;
	SpriteList[7].Animations = new AnimationElem[1];

	SpriteList[7].Animations[0].TotalFrames=6;
	SpriteList[7].Animations[0].ConnectTo = 0;
	SpriteList[7].Animations[0].Frames = new FrameElem[6];

	SpriteList[7].Animations[0].Frames[0].BitmapName = "Restart 1.bmp";
	SpriteList[7].Animations[0].Frames[0].TranslateX = 0.000;
	SpriteList[7].Animations[0].Frames[0].TranslateY = 0.000;
	SpriteList[7].Animations[0].Frames[0].Delay = 1;
	SpriteList[7].Animations[0].Frames[0].Width = 800;
	SpriteList[7].Animations[0].Frames[0].Height = 600;
	SpriteList[7].Animations[0].Frames[0].Transparency = RGB(240,240,240);
	SpriteList[7].Animations[0].Frames[0].hFlip = false;
	SpriteList[7].Animations[0].Frames[0].vFlip = false;
	SpriteList[7].Animations[0].Frames[0].zRotation = 0;
	SpriteList[7].Animations[0].Frames[0].HotSpot[0].x = 400;
	SpriteList[7].Animations[0].Frames[0].HotSpot[0].y = 300;
	::SetRect( &SpriteList[7].Animations[0].Frames[0].BBox, 0, 0, 799,599);
	SpriteList[7].Animations[0].Frames[0].centerX = 400;
	SpriteList[7].Animations[0].Frames[0].centerY = 300;
	SpriteList[7].Animations[0].Frames[0].PegRegistered = false;
	SpriteList[7].Animations[0].Frames[0].useTransparency = false;

	SpriteList[7].Animations[0].Frames[1].BitmapName = "Restart 2.bmp";
	SpriteList[7].Animations[0].Frames[1].TranslateX = 0.000;
	SpriteList[7].Animations[0].Frames[1].TranslateY = 0.000;
	SpriteList[7].Animations[0].Frames[1].Delay = 1;
	SpriteList[7].Animations[0].Frames[1].Width = 800;
	SpriteList[7].Animations[0].Frames[1].Height = 600;
	SpriteList[7].Animations[0].Frames[1].Transparency = RGB(240,240,240);
	SpriteList[7].Animations[0].Frames[1].hFlip = false;
	SpriteList[7].Animations[0].Frames[1].vFlip = false;
	SpriteList[7].Animations[0].Frames[1].zRotation = 0;
	SpriteList[7].Animations[0].Frames[1].HotSpot[0].x = 400;
	SpriteList[7].Animations[0].Frames[1].HotSpot[0].y = 300;
	::SetRect( &SpriteList[7].Animations[0].Frames[1].BBox, 0, 0, 799,599);
	SpriteList[7].Animations[0].Frames[1].centerX = 400;
	SpriteList[7].Animations[0].Frames[1].centerY = 300;
	SpriteList[7].Animations[0].Frames[1].PegRegistered = false;
	SpriteList[7].Animations[0].Frames[1].useTransparency = false;

	SpriteList[7].Animations[0].Frames[2].BitmapName = "Restart 3.bmp";
	SpriteList[7].Animations[0].Frames[2].TranslateX = 0.000;
	SpriteList[7].Animations[0].Frames[2].TranslateY = 0.000;
	SpriteList[7].Animations[0].Frames[2].Delay = 1;
	SpriteList[7].Animations[0].Frames[2].Width = 800;
	SpriteList[7].Animations[0].Frames[2].Height = 600;
	SpriteList[7].Animations[0].Frames[2].Transparency = RGB(240,240,240);
	SpriteList[7].Animations[0].Frames[2].hFlip = false;
	SpriteList[7].Animations[0].Frames[2].vFlip = false;
	SpriteList[7].Animations[0].Frames[2].zRotation = 0;
	SpriteList[7].Animations[0].Frames[2].HotSpot[0].x = 400;
	SpriteList[7].Animations[0].Frames[2].HotSpot[0].y = 300;
	::SetRect( &SpriteList[7].Animations[0].Frames[2].BBox, 0, 0, 799,599);
	SpriteList[7].Animations[0].Frames[2].centerX = 400;
	SpriteList[7].Animations[0].Frames[2].centerY = 300;
	SpriteList[7].Animations[0].Frames[2].PegRegistered = false;
	SpriteList[7].Animations[0].Frames[2].useTransparency = false;

	SpriteList[7].Animations[0].Frames[3].BitmapName = "Restart 2.bmp";
	SpriteList[7].Animations[0].Frames[3].TranslateX = 0.000;
	SpriteList[7].Animations[0].Frames[3].TranslateY = 0.000;
	SpriteList[7].Animations[0].Frames[3].Delay = 1;
	SpriteList[7].Animations[0].Frames[3].Width = 800;
	SpriteList[7].Animations[0].Frames[3].Height = 600;
	SpriteList[7].Animations[0].Frames[3].Transparency = RGB(240,240,240);
	SpriteList[7].Animations[0].Frames[3].hFlip = false;
	SpriteList[7].Animations[0].Frames[3].vFlip = false;
	SpriteList[7].Animations[0].Frames[3].zRotation = 0;
	SpriteList[7].Animations[0].Frames[3].HotSpot[0].x = 400;
	SpriteList[7].Animations[0].Frames[3].HotSpot[0].y = 300;
	::SetRect( &SpriteList[7].Animations[0].Frames[3].BBox, 0, 0, 799,599);
	SpriteList[7].Animations[0].Frames[3].centerX = 400;
	SpriteList[7].Animations[0].Frames[3].centerY = 300;
	SpriteList[7].Animations[0].Frames[3].PegRegistered = false;
	SpriteList[7].Animations[0].Frames[3].useTransparency = false;

	SpriteList[7].Animations[0].Frames[4].BitmapName = "Restart 1.bmp";
	SpriteList[7].Animations[0].Frames[4].TranslateX = 0.000;
	SpriteList[7].Animations[0].Frames[4].TranslateY = 0.000;
	SpriteList[7].Animations[0].Frames[4].Delay = 1;
	SpriteList[7].Animations[0].Frames[4].Width = 800;
	SpriteList[7].Animations[0].Frames[4].Height = 600;
	SpriteList[7].Animations[0].Frames[4].Transparency = RGB(240,240,240);
	SpriteList[7].Animations[0].Frames[4].hFlip = false;
	SpriteList[7].Animations[0].Frames[4].vFlip = false;
	SpriteList[7].Animations[0].Frames[4].zRotation = 0;
	SpriteList[7].Animations[0].Frames[4].HotSpot[0].x = 400;
	SpriteList[7].Animations[0].Frames[4].HotSpot[0].y = 300;
	::SetRect( &SpriteList[7].Animations[0].Frames[4].BBox, 0, 0, 799,599);
	SpriteList[7].Animations[0].Frames[4].centerX = 400;
	SpriteList[7].Animations[0].Frames[4].centerY = 300;
	SpriteList[7].Animations[0].Frames[4].PegRegistered = false;
	SpriteList[7].Animations[0].Frames[4].useTransparency = false;

	SpriteList[7].Animations[0].Frames[5].BitmapName = "Restart 3.bmp";
	SpriteList[7].Animations[0].Frames[5].TranslateX = 0.000;
	SpriteList[7].Animations[0].Frames[5].TranslateY = 0.000;
	SpriteList[7].Animations[0].Frames[5].Delay = 1;
	SpriteList[7].Animations[0].Frames[5].Width = 800;
	SpriteList[7].Animations[0].Frames[5].Height = 600;
	SpriteList[7].Animations[0].Frames[5].Transparency = RGB(240,240,240);
	SpriteList[7].Animations[0].Frames[5].hFlip = false;
	SpriteList[7].Animations[0].Frames[5].vFlip = false;
	SpriteList[7].Animations[0].Frames[5].zRotation = 0;
	SpriteList[7].Animations[0].Frames[5].HotSpot[0].x = 400;
	SpriteList[7].Animations[0].Frames[5].HotSpot[0].y = 300;
	::SetRect( &SpriteList[7].Animations[0].Frames[5].BBox, 0, 0, 799,599);
	SpriteList[7].Animations[0].Frames[5].centerX = 400;
	SpriteList[7].Animations[0].Frames[5].centerY = 300;
	SpriteList[7].Animations[0].Frames[5].PegRegistered = false;
	SpriteList[7].Animations[0].Frames[5].useTransparency = false;



}

void LoadAnimation_Menu(GameNode* gn)
{
	SpriteList[9].TotalAnimations = 3;
	SpriteList[9].Animations = new AnimationElem[3];

	SpriteList[9].Animations[0].TotalFrames=1;
	SpriteList[9].Animations[0].ConnectTo = 0;
	SpriteList[9].Animations[0].Frames = new FrameElem[1];

	SpriteList[9].Animations[0].Frames[0].BitmapName = "Button.bmp";
	SpriteList[9].Animations[0].Frames[0].TranslateX = 0.000;
	SpriteList[9].Animations[0].Frames[0].TranslateY = 0.000;
	SpriteList[9].Animations[0].Frames[0].Delay = 1;
	SpriteList[9].Animations[0].Frames[0].Width = 300;
	SpriteList[9].Animations[0].Frames[0].Height = 60;
	SpriteList[9].Animations[0].Frames[0].Transparency = RGB(0,0,0);
	SpriteList[9].Animations[0].Frames[0].hFlip = false;
	SpriteList[9].Animations[0].Frames[0].vFlip = false;
	SpriteList[9].Animations[0].Frames[0].zRotation = 0;
	SpriteList[9].Animations[0].Frames[0].HotSpot[0].x = 50;
	SpriteList[9].Animations[0].Frames[0].HotSpot[0].y = 25;
	::SetRect( &SpriteList[9].Animations[0].Frames[0].BBox, 0, 0, 299,59);
	SpriteList[9].Animations[0].Frames[0].centerX = 50;
	SpriteList[9].Animations[0].Frames[0].centerY = 25;
	SpriteList[9].Animations[0].Frames[0].PegRegistered = false;
	SpriteList[9].Animations[0].Frames[0].useTransparency = true;
	SpriteList[9].Animations[0].Frames[0].AddCollisionData(CollisionSegment(298,1,1,1,0,0));
	SpriteList[9].Animations[0].Frames[0].AddCollisionData(CollisionSegment(298,58,298,1,0,0));
	SpriteList[9].Animations[0].Frames[0].AddCollisionData(CollisionSegment(1,58,298,58,0,0));
	SpriteList[9].Animations[0].Frames[0].AddCollisionData(CollisionSegment(1,1,1,58,0,0));


	SpriteList[9].Animations[1].TotalFrames=1;
	SpriteList[9].Animations[1].ConnectTo = 0;
	SpriteList[9].Animations[1].Frames = new FrameElem[1];

	SpriteList[9].Animations[1].Frames[0].BitmapName = "Life Bar.bmp";
	SpriteList[9].Animations[1].Frames[0].TranslateX = 0.000;
	SpriteList[9].Animations[1].Frames[0].TranslateY = 0.000;
	SpriteList[9].Animations[1].Frames[0].Delay = 1;
	SpriteList[9].Animations[1].Frames[0].Width = 80;
	SpriteList[9].Animations[1].Frames[0].Height = 100;
	SpriteList[9].Animations[1].Frames[0].Transparency = RGB(240,240,240);
	SpriteList[9].Animations[1].Frames[0].hFlip = false;
	SpriteList[9].Animations[1].Frames[0].vFlip = false;
	SpriteList[9].Animations[1].Frames[0].zRotation = 0;
	SpriteList[9].Animations[1].Frames[0].HotSpot[0].x = 40;
	SpriteList[9].Animations[1].Frames[0].HotSpot[0].y = 50;
	::SetRect( &SpriteList[9].Animations[1].Frames[0].BBox, 0, 0, 79,99);
	SpriteList[9].Animations[1].Frames[0].centerX = 40;
	SpriteList[9].Animations[1].Frames[0].centerY = 50;
	SpriteList[9].Animations[1].Frames[0].PegRegistered = false;
	SpriteList[9].Animations[1].Frames[0].useTransparency = false;


	SpriteList[9].Animations[2].TotalFrames=1;
	SpriteList[9].Animations[2].ConnectTo = 0;
	SpriteList[9].Animations[2].Frames = new FrameElem[1];

	SpriteList[9].Animations[2].Frames[0].BitmapName = "Lives.bmp";
	SpriteList[9].Animations[2].Frames[0].TranslateX = 0.000;
	SpriteList[9].Animations[2].Frames[0].TranslateY = 0.000;
	SpriteList[9].Animations[2].Frames[0].Delay = 1;
	SpriteList[9].Animations[2].Frames[0].Width = 80;
	SpriteList[9].Animations[2].Frames[0].Height = 600;
	SpriteList[9].Animations[2].Frames[0].Transparency = RGB(240,240,240);
	SpriteList[9].Animations[2].Frames[0].hFlip = false;
	SpriteList[9].Animations[2].Frames[0].vFlip = false;
	SpriteList[9].Animations[2].Frames[0].zRotation = 0;
	SpriteList[9].Animations[2].Frames[0].HotSpot[0].x = 40;
	SpriteList[9].Animations[2].Frames[0].HotSpot[0].y = 300;
	::SetRect( &SpriteList[9].Animations[2].Frames[0].BBox, 0, 0, 79,599);
	SpriteList[9].Animations[2].Frames[0].centerX = 40;
	SpriteList[9].Animations[2].Frames[0].centerY = 300;
	SpriteList[9].Animations[2].Frames[0].PegRegistered = false;
	SpriteList[9].Animations[2].Frames[0].useTransparency = false;



	SpriteList[8].TotalAnimations = 7;
	SpriteList[8].Animations = new AnimationElem[7];

	SpriteList[8].Animations[0].TotalFrames=2;
	SpriteList[8].Animations[0].ConnectTo = 0;
	SpriteList[8].Animations[0].Frames = new FrameElem[2];

	SpriteList[8].Animations[0].Frames[0].BitmapName = "Menu 1.bmp";
	SpriteList[8].Animations[0].Frames[0].TranslateX = 0.000;
	SpriteList[8].Animations[0].Frames[0].TranslateY = 0.000;
	SpriteList[8].Animations[0].Frames[0].Delay = 20;
	SpriteList[8].Animations[0].Frames[0].Width = 800;
	SpriteList[8].Animations[0].Frames[0].Height = 600;
	SpriteList[8].Animations[0].Frames[0].Transparency = RGB(240,240,240);
	SpriteList[8].Animations[0].Frames[0].hFlip = false;
	SpriteList[8].Animations[0].Frames[0].vFlip = false;
	SpriteList[8].Animations[0].Frames[0].zRotation = 0;
	SpriteList[8].Animations[0].Frames[0].HotSpot[0].x = 400;
	SpriteList[8].Animations[0].Frames[0].HotSpot[0].y = 300;
	::SetRect( &SpriteList[8].Animations[0].Frames[0].BBox, 0, 0, 799,599);
	SpriteList[8].Animations[0].Frames[0].centerX = 400;
	SpriteList[8].Animations[0].Frames[0].centerY = 300;
	SpriteList[8].Animations[0].Frames[0].PegRegistered = false;
	SpriteList[8].Animations[0].Frames[0].useTransparency = false;

	SpriteList[8].Animations[0].Frames[1].BitmapName = "Menu 2.bmp";
	SpriteList[8].Animations[0].Frames[1].TranslateX = 0.000;
	SpriteList[8].Animations[0].Frames[1].TranslateY = 0.000;
	SpriteList[8].Animations[0].Frames[1].Delay = 20;
	SpriteList[8].Animations[0].Frames[1].Width = 800;
	SpriteList[8].Animations[0].Frames[1].Height = 600;
	SpriteList[8].Animations[0].Frames[1].Transparency = RGB(240,240,240);
	SpriteList[8].Animations[0].Frames[1].hFlip = false;
	SpriteList[8].Animations[0].Frames[1].vFlip = false;
	SpriteList[8].Animations[0].Frames[1].zRotation = 0;
	SpriteList[8].Animations[0].Frames[1].HotSpot[0].x = 400;
	SpriteList[8].Animations[0].Frames[1].HotSpot[0].y = 300;
	::SetRect( &SpriteList[8].Animations[0].Frames[1].BBox, 0, 0, 799,599);
	SpriteList[8].Animations[0].Frames[1].centerX = 400;
	SpriteList[8].Animations[0].Frames[1].centerY = 300;
	SpriteList[8].Animations[0].Frames[1].PegRegistered = false;
	SpriteList[8].Animations[0].Frames[1].useTransparency = false;


	SpriteList[8].Animations[1].TotalFrames=1;
	SpriteList[8].Animations[1].ConnectTo = 0;
	SpriteList[8].Animations[1].Frames = new FrameElem[1];

	SpriteList[8].Animations[1].Frames[0].BitmapName = "Info Menu 1.bmp";
	SpriteList[8].Animations[1].Frames[0].TranslateX = 0.000;
	SpriteList[8].Animations[1].Frames[0].TranslateY = 0.000;
	SpriteList[8].Animations[1].Frames[0].Delay = 1;
	SpriteList[8].Animations[1].Frames[0].Width = 800;
	SpriteList[8].Animations[1].Frames[0].Height = 600;
	SpriteList[8].Animations[1].Frames[0].Transparency = RGB(240,240,240);
	SpriteList[8].Animations[1].Frames[0].hFlip = false;
	SpriteList[8].Animations[1].Frames[0].vFlip = false;
	SpriteList[8].Animations[1].Frames[0].zRotation = 0;
	SpriteList[8].Animations[1].Frames[0].HotSpot[0].x = 400;
	SpriteList[8].Animations[1].Frames[0].HotSpot[0].y = 300;
	::SetRect( &SpriteList[8].Animations[1].Frames[0].BBox, 0, 0, 799,599);
	SpriteList[8].Animations[1].Frames[0].centerX = 400;
	SpriteList[8].Animations[1].Frames[0].centerY = 300;
	SpriteList[8].Animations[1].Frames[0].PegRegistered = false;
	SpriteList[8].Animations[1].Frames[0].useTransparency = false;


	SpriteList[8].Animations[2].TotalFrames=2;
	SpriteList[8].Animations[2].ConnectTo = 0;
	SpriteList[8].Animations[2].Frames = new FrameElem[2];

	SpriteList[8].Animations[2].Frames[0].BitmapName = "Credits 1.bmp";
	SpriteList[8].Animations[2].Frames[0].TranslateX = 0.000;
	SpriteList[8].Animations[2].Frames[0].TranslateY = 0.000;
	SpriteList[8].Animations[2].Frames[0].Delay = 20;
	SpriteList[8].Animations[2].Frames[0].Width = 800;
	SpriteList[8].Animations[2].Frames[0].Height = 600;
	SpriteList[8].Animations[2].Frames[0].Transparency = RGB(240,240,240);
	SpriteList[8].Animations[2].Frames[0].hFlip = false;
	SpriteList[8].Animations[2].Frames[0].vFlip = false;
	SpriteList[8].Animations[2].Frames[0].zRotation = 0;
	SpriteList[8].Animations[2].Frames[0].HotSpot[0].x = 400;
	SpriteList[8].Animations[2].Frames[0].HotSpot[0].y = 300;
	::SetRect( &SpriteList[8].Animations[2].Frames[0].BBox, 0, 0, 799,599);
	SpriteList[8].Animations[2].Frames[0].centerX = 400;
	SpriteList[8].Animations[2].Frames[0].centerY = 300;
	SpriteList[8].Animations[2].Frames[0].PegRegistered = false;
	SpriteList[8].Animations[2].Frames[0].useTransparency = false;

	SpriteList[8].Animations[2].Frames[1].BitmapName = "Credits 2.bmp";
	SpriteList[8].Animations[2].Frames[1].TranslateX = 0.000;
	SpriteList[8].Animations[2].Frames[1].TranslateY = 0.000;
	SpriteList[8].Animations[2].Frames[1].Delay = 20;
	SpriteList[8].Animations[2].Frames[1].Width = 800;
	SpriteList[8].Animations[2].Frames[1].Height = 600;
	SpriteList[8].Animations[2].Frames[1].Transparency = RGB(240,240,240);
	SpriteList[8].Animations[2].Frames[1].hFlip = false;
	SpriteList[8].Animations[2].Frames[1].vFlip = false;
	SpriteList[8].Animations[2].Frames[1].zRotation = 0;
	SpriteList[8].Animations[2].Frames[1].HotSpot[0].x = 400;
	SpriteList[8].Animations[2].Frames[1].HotSpot[0].y = 300;
	::SetRect( &SpriteList[8].Animations[2].Frames[1].BBox, 0, 0, 799,599);
	SpriteList[8].Animations[2].Frames[1].centerX = 400;
	SpriteList[8].Animations[2].Frames[1].centerY = 300;
	SpriteList[8].Animations[2].Frames[1].PegRegistered = false;
	SpriteList[8].Animations[2].Frames[1].useTransparency = false;


	SpriteList[8].Animations[3].TotalFrames=2;
	SpriteList[8].Animations[3].ConnectTo = 0;
	SpriteList[8].Animations[3].Frames = new FrameElem[2];

	SpriteList[8].Animations[3].Frames[0].BitmapName = "Difficulty 1.bmp";
	SpriteList[8].Animations[3].Frames[0].TranslateX = 0.000;
	SpriteList[8].Animations[3].Frames[0].TranslateY = 0.000;
	SpriteList[8].Animations[3].Frames[0].Delay = 25;
	SpriteList[8].Animations[3].Frames[0].Width = 800;
	SpriteList[8].Animations[3].Frames[0].Height = 600;
	SpriteList[8].Animations[3].Frames[0].Transparency = RGB(240,240,240);
	SpriteList[8].Animations[3].Frames[0].hFlip = false;
	SpriteList[8].Animations[3].Frames[0].vFlip = false;
	SpriteList[8].Animations[3].Frames[0].zRotation = 0;
	SpriteList[8].Animations[3].Frames[0].HotSpot[0].x = 400;
	SpriteList[8].Animations[3].Frames[0].HotSpot[0].y = 300;
	::SetRect( &SpriteList[8].Animations[3].Frames[0].BBox, 0, 0, 799,599);
	SpriteList[8].Animations[3].Frames[0].centerX = 400;
	SpriteList[8].Animations[3].Frames[0].centerY = 300;
	SpriteList[8].Animations[3].Frames[0].PegRegistered = false;
	SpriteList[8].Animations[3].Frames[0].useTransparency = false;

	SpriteList[8].Animations[3].Frames[1].BitmapName = "Difficulty 2.bmp";
	SpriteList[8].Animations[3].Frames[1].TranslateX = 0.000;
	SpriteList[8].Animations[3].Frames[1].TranslateY = 0.000;
	SpriteList[8].Animations[3].Frames[1].Delay = 25;
	SpriteList[8].Animations[3].Frames[1].Width = 800;
	SpriteList[8].Animations[3].Frames[1].Height = 600;
	SpriteList[8].Animations[3].Frames[1].Transparency = RGB(240,240,240);
	SpriteList[8].Animations[3].Frames[1].hFlip = false;
	SpriteList[8].Animations[3].Frames[1].vFlip = false;
	SpriteList[8].Animations[3].Frames[1].zRotation = 0;
	SpriteList[8].Animations[3].Frames[1].HotSpot[0].x = 400;
	SpriteList[8].Animations[3].Frames[1].HotSpot[0].y = 300;
	::SetRect( &SpriteList[8].Animations[3].Frames[1].BBox, 0, 0, 799,599);
	SpriteList[8].Animations[3].Frames[1].centerX = 400;
	SpriteList[8].Animations[3].Frames[1].centerY = 300;
	SpriteList[8].Animations[3].Frames[1].PegRegistered = false;
	SpriteList[8].Animations[3].Frames[1].useTransparency = false;


	SpriteList[8].Animations[4].TotalFrames=2;
	SpriteList[8].Animations[4].ConnectTo = 0;
	SpriteList[8].Animations[4].Frames = new FrameElem[2];

	SpriteList[8].Animations[4].Frames[0].BitmapName = "Win 1.bmp";
	SpriteList[8].Animations[4].Frames[0].TranslateX = 0.000;
	SpriteList[8].Animations[4].Frames[0].TranslateY = 0.000;
	SpriteList[8].Animations[4].Frames[0].Delay = 40;
	SpriteList[8].Animations[4].Frames[0].Width = 800;
	SpriteList[8].Animations[4].Frames[0].Height = 600;
	SpriteList[8].Animations[4].Frames[0].Transparency = RGB(240,240,240);
	SpriteList[8].Animations[4].Frames[0].hFlip = false;
	SpriteList[8].Animations[4].Frames[0].vFlip = false;
	SpriteList[8].Animations[4].Frames[0].zRotation = 0;
	SpriteList[8].Animations[4].Frames[0].HotSpot[0].x = 400;
	SpriteList[8].Animations[4].Frames[0].HotSpot[0].y = 300;
	::SetRect( &SpriteList[8].Animations[4].Frames[0].BBox, 0, 0, 799,599);
	SpriteList[8].Animations[4].Frames[0].centerX = 400;
	SpriteList[8].Animations[4].Frames[0].centerY = 300;
	SpriteList[8].Animations[4].Frames[0].PegRegistered = false;
	SpriteList[8].Animations[4].Frames[0].useTransparency = false;

	SpriteList[8].Animations[4].Frames[1].BitmapName = "Win 2.bmp";
	SpriteList[8].Animations[4].Frames[1].TranslateX = 0.000;
	SpriteList[8].Animations[4].Frames[1].TranslateY = 0.000;
	SpriteList[8].Animations[4].Frames[1].Delay = 40;
	SpriteList[8].Animations[4].Frames[1].Width = 800;
	SpriteList[8].Animations[4].Frames[1].Height = 600;
	SpriteList[8].Animations[4].Frames[1].Transparency = RGB(240,240,240);
	SpriteList[8].Animations[4].Frames[1].hFlip = false;
	SpriteList[8].Animations[4].Frames[1].vFlip = false;
	SpriteList[8].Animations[4].Frames[1].zRotation = 0;
	SpriteList[8].Animations[4].Frames[1].HotSpot[0].x = 400;
	SpriteList[8].Animations[4].Frames[1].HotSpot[0].y = 300;
	::SetRect( &SpriteList[8].Animations[4].Frames[1].BBox, 0, 0, 799,599);
	SpriteList[8].Animations[4].Frames[1].centerX = 400;
	SpriteList[8].Animations[4].Frames[1].centerY = 300;
	SpriteList[8].Animations[4].Frames[1].PegRegistered = false;
	SpriteList[8].Animations[4].Frames[1].useTransparency = false;


	SpriteList[8].Animations[5].TotalFrames=2;
	SpriteList[8].Animations[5].ConnectTo = 0;
	SpriteList[8].Animations[5].Frames = new FrameElem[2];

	SpriteList[8].Animations[5].Frames[0].BitmapName = "Death 1.bmp";
	SpriteList[8].Animations[5].Frames[0].TranslateX = 0.000;
	SpriteList[8].Animations[5].Frames[0].TranslateY = 0.000;
	SpriteList[8].Animations[5].Frames[0].Delay = 40;
	SpriteList[8].Animations[5].Frames[0].Width = 800;
	SpriteList[8].Animations[5].Frames[0].Height = 600;
	SpriteList[8].Animations[5].Frames[0].Transparency = RGB(240,240,240);
	SpriteList[8].Animations[5].Frames[0].hFlip = false;
	SpriteList[8].Animations[5].Frames[0].vFlip = false;
	SpriteList[8].Animations[5].Frames[0].zRotation = 0;
	SpriteList[8].Animations[5].Frames[0].HotSpot[0].x = 400;
	SpriteList[8].Animations[5].Frames[0].HotSpot[0].y = 300;
	::SetRect( &SpriteList[8].Animations[5].Frames[0].BBox, 0, 0, 799,599);
	SpriteList[8].Animations[5].Frames[0].centerX = 400;
	SpriteList[8].Animations[5].Frames[0].centerY = 300;
	SpriteList[8].Animations[5].Frames[0].PegRegistered = false;
	SpriteList[8].Animations[5].Frames[0].useTransparency = false;

	SpriteList[8].Animations[5].Frames[1].BitmapName = "Death 2.bmp";
	SpriteList[8].Animations[5].Frames[1].TranslateX = 0.000;
	SpriteList[8].Animations[5].Frames[1].TranslateY = 0.000;
	SpriteList[8].Animations[5].Frames[1].Delay = 40;
	SpriteList[8].Animations[5].Frames[1].Width = 800;
	SpriteList[8].Animations[5].Frames[1].Height = 600;
	SpriteList[8].Animations[5].Frames[1].Transparency = RGB(240,240,240);
	SpriteList[8].Animations[5].Frames[1].hFlip = false;
	SpriteList[8].Animations[5].Frames[1].vFlip = false;
	SpriteList[8].Animations[5].Frames[1].zRotation = 0;
	SpriteList[8].Animations[5].Frames[1].HotSpot[0].x = 400;
	SpriteList[8].Animations[5].Frames[1].HotSpot[0].y = 300;
	::SetRect( &SpriteList[8].Animations[5].Frames[1].BBox, 0, 0, 799,599);
	SpriteList[8].Animations[5].Frames[1].centerX = 400;
	SpriteList[8].Animations[5].Frames[1].centerY = 300;
	SpriteList[8].Animations[5].Frames[1].PegRegistered = false;
	SpriteList[8].Animations[5].Frames[1].useTransparency = false;


	SpriteList[8].Animations[6].TotalFrames=1;
	SpriteList[8].Animations[6].ConnectTo = 0;
	SpriteList[8].Animations[6].Frames = new FrameElem[1];

	SpriteList[8].Animations[6].Frames[0].BitmapName = "Intro Text.bmp";
	SpriteList[8].Animations[6].Frames[0].TranslateX = 0.000;
	SpriteList[8].Animations[6].Frames[0].TranslateY = 0.000;
	SpriteList[8].Animations[6].Frames[0].Delay = 1;
	SpriteList[8].Animations[6].Frames[0].Width = 800;
	SpriteList[8].Animations[6].Frames[0].Height = 1151;
	SpriteList[8].Animations[6].Frames[0].Transparency = RGB(240,240,240);
	SpriteList[8].Animations[6].Frames[0].hFlip = false;
	SpriteList[8].Animations[6].Frames[0].vFlip = false;
	SpriteList[8].Animations[6].Frames[0].zRotation = 0;
	SpriteList[8].Animations[6].Frames[0].HotSpot[0].x = 400;
	SpriteList[8].Animations[6].Frames[0].HotSpot[0].y = 575;
	::SetRect( &SpriteList[8].Animations[6].Frames[0].BBox, 0, 0, 799,1150);
	SpriteList[8].Animations[6].Frames[0].centerX = 400;
	SpriteList[8].Animations[6].Frames[0].centerY = 575;
	SpriteList[8].Animations[6].Frames[0].PegRegistered = false;
	SpriteList[8].Animations[6].Frames[0].useTransparency = false;



}

void LoadAnimation_info(GameNode* gn)
{
	SpriteList[9].TotalAnimations = 3;
	SpriteList[9].Animations = new AnimationElem[3];

	SpriteList[9].Animations[0].TotalFrames=1;
	SpriteList[9].Animations[0].ConnectTo = 0;
	SpriteList[9].Animations[0].Frames = new FrameElem[1];

	SpriteList[9].Animations[0].Frames[0].BitmapName = "Button.bmp";
	SpriteList[9].Animations[0].Frames[0].TranslateX = 0.000;
	SpriteList[9].Animations[0].Frames[0].TranslateY = 0.000;
	SpriteList[9].Animations[0].Frames[0].Delay = 1;
	SpriteList[9].Animations[0].Frames[0].Width = 300;
	SpriteList[9].Animations[0].Frames[0].Height = 60;
	SpriteList[9].Animations[0].Frames[0].Transparency = RGB(0,0,0);
	SpriteList[9].Animations[0].Frames[0].hFlip = false;
	SpriteList[9].Animations[0].Frames[0].vFlip = false;
	SpriteList[9].Animations[0].Frames[0].zRotation = 0;
	SpriteList[9].Animations[0].Frames[0].HotSpot[0].x = 50;
	SpriteList[9].Animations[0].Frames[0].HotSpot[0].y = 25;
	::SetRect( &SpriteList[9].Animations[0].Frames[0].BBox, 0, 0, 299,59);
	SpriteList[9].Animations[0].Frames[0].centerX = 50;
	SpriteList[9].Animations[0].Frames[0].centerY = 25;
	SpriteList[9].Animations[0].Frames[0].PegRegistered = false;
	SpriteList[9].Animations[0].Frames[0].useTransparency = true;
	SpriteList[9].Animations[0].Frames[0].AddCollisionData(CollisionSegment(298,1,1,1,0,0));
	SpriteList[9].Animations[0].Frames[0].AddCollisionData(CollisionSegment(298,58,298,1,0,0));
	SpriteList[9].Animations[0].Frames[0].AddCollisionData(CollisionSegment(1,58,298,58,0,0));
	SpriteList[9].Animations[0].Frames[0].AddCollisionData(CollisionSegment(1,1,1,58,0,0));


	SpriteList[9].Animations[1].TotalFrames=1;
	SpriteList[9].Animations[1].ConnectTo = 0;
	SpriteList[9].Animations[1].Frames = new FrameElem[1];

	SpriteList[9].Animations[1].Frames[0].BitmapName = "Life Bar.bmp";
	SpriteList[9].Animations[1].Frames[0].TranslateX = 0.000;
	SpriteList[9].Animations[1].Frames[0].TranslateY = 0.000;
	SpriteList[9].Animations[1].Frames[0].Delay = 1;
	SpriteList[9].Animations[1].Frames[0].Width = 80;
	SpriteList[9].Animations[1].Frames[0].Height = 100;
	SpriteList[9].Animations[1].Frames[0].Transparency = RGB(240,240,240);
	SpriteList[9].Animations[1].Frames[0].hFlip = false;
	SpriteList[9].Animations[1].Frames[0].vFlip = false;
	SpriteList[9].Animations[1].Frames[0].zRotation = 0;
	SpriteList[9].Animations[1].Frames[0].HotSpot[0].x = 40;
	SpriteList[9].Animations[1].Frames[0].HotSpot[0].y = 50;
	::SetRect( &SpriteList[9].Animations[1].Frames[0].BBox, 0, 0, 79,99);
	SpriteList[9].Animations[1].Frames[0].centerX = 40;
	SpriteList[9].Animations[1].Frames[0].centerY = 50;
	SpriteList[9].Animations[1].Frames[0].PegRegistered = false;
	SpriteList[9].Animations[1].Frames[0].useTransparency = false;


	SpriteList[9].Animations[2].TotalFrames=1;
	SpriteList[9].Animations[2].ConnectTo = 0;
	SpriteList[9].Animations[2].Frames = new FrameElem[1];

	SpriteList[9].Animations[2].Frames[0].BitmapName = "Lives.bmp";
	SpriteList[9].Animations[2].Frames[0].TranslateX = 0.000;
	SpriteList[9].Animations[2].Frames[0].TranslateY = 0.000;
	SpriteList[9].Animations[2].Frames[0].Delay = 1;
	SpriteList[9].Animations[2].Frames[0].Width = 80;
	SpriteList[9].Animations[2].Frames[0].Height = 600;
	SpriteList[9].Animations[2].Frames[0].Transparency = RGB(240,240,240);
	SpriteList[9].Animations[2].Frames[0].hFlip = false;
	SpriteList[9].Animations[2].Frames[0].vFlip = false;
	SpriteList[9].Animations[2].Frames[0].zRotation = 0;
	SpriteList[9].Animations[2].Frames[0].HotSpot[0].x = 40;
	SpriteList[9].Animations[2].Frames[0].HotSpot[0].y = 300;
	::SetRect( &SpriteList[9].Animations[2].Frames[0].BBox, 0, 0, 79,599);
	SpriteList[9].Animations[2].Frames[0].centerX = 40;
	SpriteList[9].Animations[2].Frames[0].centerY = 300;
	SpriteList[9].Animations[2].Frames[0].PegRegistered = false;
	SpriteList[9].Animations[2].Frames[0].useTransparency = false;



	SpriteList[8].TotalAnimations = 7;
	SpriteList[8].Animations = new AnimationElem[7];

	SpriteList[8].Animations[0].TotalFrames=2;
	SpriteList[8].Animations[0].ConnectTo = 0;
	SpriteList[8].Animations[0].Frames = new FrameElem[2];

	SpriteList[8].Animations[0].Frames[0].BitmapName = "Menu 1.bmp";
	SpriteList[8].Animations[0].Frames[0].TranslateX = 0.000;
	SpriteList[8].Animations[0].Frames[0].TranslateY = 0.000;
	SpriteList[8].Animations[0].Frames[0].Delay = 20;
	SpriteList[8].Animations[0].Frames[0].Width = 800;
	SpriteList[8].Animations[0].Frames[0].Height = 600;
	SpriteList[8].Animations[0].Frames[0].Transparency = RGB(240,240,240);
	SpriteList[8].Animations[0].Frames[0].hFlip = false;
	SpriteList[8].Animations[0].Frames[0].vFlip = false;
	SpriteList[8].Animations[0].Frames[0].zRotation = 0;
	SpriteList[8].Animations[0].Frames[0].HotSpot[0].x = 400;
	SpriteList[8].Animations[0].Frames[0].HotSpot[0].y = 300;
	::SetRect( &SpriteList[8].Animations[0].Frames[0].BBox, 0, 0, 799,599);
	SpriteList[8].Animations[0].Frames[0].centerX = 400;
	SpriteList[8].Animations[0].Frames[0].centerY = 300;
	SpriteList[8].Animations[0].Frames[0].PegRegistered = false;
	SpriteList[8].Animations[0].Frames[0].useTransparency = false;

	SpriteList[8].Animations[0].Frames[1].BitmapName = "Menu 2.bmp";
	SpriteList[8].Animations[0].Frames[1].TranslateX = 0.000;
	SpriteList[8].Animations[0].Frames[1].TranslateY = 0.000;
	SpriteList[8].Animations[0].Frames[1].Delay = 20;
	SpriteList[8].Animations[0].Frames[1].Width = 800;
	SpriteList[8].Animations[0].Frames[1].Height = 600;
	SpriteList[8].Animations[0].Frames[1].Transparency = RGB(240,240,240);
	SpriteList[8].Animations[0].Frames[1].hFlip = false;
	SpriteList[8].Animations[0].Frames[1].vFlip = false;
	SpriteList[8].Animations[0].Frames[1].zRotation = 0;
	SpriteList[8].Animations[0].Frames[1].HotSpot[0].x = 400;
	SpriteList[8].Animations[0].Frames[1].HotSpot[0].y = 300;
	::SetRect( &SpriteList[8].Animations[0].Frames[1].BBox, 0, 0, 799,599);
	SpriteList[8].Animations[0].Frames[1].centerX = 400;
	SpriteList[8].Animations[0].Frames[1].centerY = 300;
	SpriteList[8].Animations[0].Frames[1].PegRegistered = false;
	SpriteList[8].Animations[0].Frames[1].useTransparency = false;


	SpriteList[8].Animations[1].TotalFrames=1;
	SpriteList[8].Animations[1].ConnectTo = 0;
	SpriteList[8].Animations[1].Frames = new FrameElem[1];

	SpriteList[8].Animations[1].Frames[0].BitmapName = "Info Menu 1.bmp";
	SpriteList[8].Animations[1].Frames[0].TranslateX = 0.000;
	SpriteList[8].Animations[1].Frames[0].TranslateY = 0.000;
	SpriteList[8].Animations[1].Frames[0].Delay = 1;
	SpriteList[8].Animations[1].Frames[0].Width = 800;
	SpriteList[8].Animations[1].Frames[0].Height = 600;
	SpriteList[8].Animations[1].Frames[0].Transparency = RGB(240,240,240);
	SpriteList[8].Animations[1].Frames[0].hFlip = false;
	SpriteList[8].Animations[1].Frames[0].vFlip = false;
	SpriteList[8].Animations[1].Frames[0].zRotation = 0;
	SpriteList[8].Animations[1].Frames[0].HotSpot[0].x = 400;
	SpriteList[8].Animations[1].Frames[0].HotSpot[0].y = 300;
	::SetRect( &SpriteList[8].Animations[1].Frames[0].BBox, 0, 0, 799,599);
	SpriteList[8].Animations[1].Frames[0].centerX = 400;
	SpriteList[8].Animations[1].Frames[0].centerY = 300;
	SpriteList[8].Animations[1].Frames[0].PegRegistered = false;
	SpriteList[8].Animations[1].Frames[0].useTransparency = false;


	SpriteList[8].Animations[2].TotalFrames=2;
	SpriteList[8].Animations[2].ConnectTo = 0;
	SpriteList[8].Animations[2].Frames = new FrameElem[2];

	SpriteList[8].Animations[2].Frames[0].BitmapName = "Credits 1.bmp";
	SpriteList[8].Animations[2].Frames[0].TranslateX = 0.000;
	SpriteList[8].Animations[2].Frames[0].TranslateY = 0.000;
	SpriteList[8].Animations[2].Frames[0].Delay = 20;
	SpriteList[8].Animations[2].Frames[0].Width = 800;
	SpriteList[8].Animations[2].Frames[0].Height = 600;
	SpriteList[8].Animations[2].Frames[0].Transparency = RGB(240,240,240);
	SpriteList[8].Animations[2].Frames[0].hFlip = false;
	SpriteList[8].Animations[2].Frames[0].vFlip = false;
	SpriteList[8].Animations[2].Frames[0].zRotation = 0;
	SpriteList[8].Animations[2].Frames[0].HotSpot[0].x = 400;
	SpriteList[8].Animations[2].Frames[0].HotSpot[0].y = 300;
	::SetRect( &SpriteList[8].Animations[2].Frames[0].BBox, 0, 0, 799,599);
	SpriteList[8].Animations[2].Frames[0].centerX = 400;
	SpriteList[8].Animations[2].Frames[0].centerY = 300;
	SpriteList[8].Animations[2].Frames[0].PegRegistered = false;
	SpriteList[8].Animations[2].Frames[0].useTransparency = false;

	SpriteList[8].Animations[2].Frames[1].BitmapName = "Credits 2.bmp";
	SpriteList[8].Animations[2].Frames[1].TranslateX = 0.000;
	SpriteList[8].Animations[2].Frames[1].TranslateY = 0.000;
	SpriteList[8].Animations[2].Frames[1].Delay = 20;
	SpriteList[8].Animations[2].Frames[1].Width = 800;
	SpriteList[8].Animations[2].Frames[1].Height = 600;
	SpriteList[8].Animations[2].Frames[1].Transparency = RGB(240,240,240);
	SpriteList[8].Animations[2].Frames[1].hFlip = false;
	SpriteList[8].Animations[2].Frames[1].vFlip = false;
	SpriteList[8].Animations[2].Frames[1].zRotation = 0;
	SpriteList[8].Animations[2].Frames[1].HotSpot[0].x = 400;
	SpriteList[8].Animations[2].Frames[1].HotSpot[0].y = 300;
	::SetRect( &SpriteList[8].Animations[2].Frames[1].BBox, 0, 0, 799,599);
	SpriteList[8].Animations[2].Frames[1].centerX = 400;
	SpriteList[8].Animations[2].Frames[1].centerY = 300;
	SpriteList[8].Animations[2].Frames[1].PegRegistered = false;
	SpriteList[8].Animations[2].Frames[1].useTransparency = false;


	SpriteList[8].Animations[3].TotalFrames=2;
	SpriteList[8].Animations[3].ConnectTo = 0;
	SpriteList[8].Animations[3].Frames = new FrameElem[2];

	SpriteList[8].Animations[3].Frames[0].BitmapName = "Difficulty 1.bmp";
	SpriteList[8].Animations[3].Frames[0].TranslateX = 0.000;
	SpriteList[8].Animations[3].Frames[0].TranslateY = 0.000;
	SpriteList[8].Animations[3].Frames[0].Delay = 25;
	SpriteList[8].Animations[3].Frames[0].Width = 800;
	SpriteList[8].Animations[3].Frames[0].Height = 600;
	SpriteList[8].Animations[3].Frames[0].Transparency = RGB(240,240,240);
	SpriteList[8].Animations[3].Frames[0].hFlip = false;
	SpriteList[8].Animations[3].Frames[0].vFlip = false;
	SpriteList[8].Animations[3].Frames[0].zRotation = 0;
	SpriteList[8].Animations[3].Frames[0].HotSpot[0].x = 400;
	SpriteList[8].Animations[3].Frames[0].HotSpot[0].y = 300;
	::SetRect( &SpriteList[8].Animations[3].Frames[0].BBox, 0, 0, 799,599);
	SpriteList[8].Animations[3].Frames[0].centerX = 400;
	SpriteList[8].Animations[3].Frames[0].centerY = 300;
	SpriteList[8].Animations[3].Frames[0].PegRegistered = false;
	SpriteList[8].Animations[3].Frames[0].useTransparency = false;

	SpriteList[8].Animations[3].Frames[1].BitmapName = "Difficulty 2.bmp";
	SpriteList[8].Animations[3].Frames[1].TranslateX = 0.000;
	SpriteList[8].Animations[3].Frames[1].TranslateY = 0.000;
	SpriteList[8].Animations[3].Frames[1].Delay = 25;
	SpriteList[8].Animations[3].Frames[1].Width = 800;
	SpriteList[8].Animations[3].Frames[1].Height = 600;
	SpriteList[8].Animations[3].Frames[1].Transparency = RGB(240,240,240);
	SpriteList[8].Animations[3].Frames[1].hFlip = false;
	SpriteList[8].Animations[3].Frames[1].vFlip = false;
	SpriteList[8].Animations[3].Frames[1].zRotation = 0;
	SpriteList[8].Animations[3].Frames[1].HotSpot[0].x = 400;
	SpriteList[8].Animations[3].Frames[1].HotSpot[0].y = 300;
	::SetRect( &SpriteList[8].Animations[3].Frames[1].BBox, 0, 0, 799,599);
	SpriteList[8].Animations[3].Frames[1].centerX = 400;
	SpriteList[8].Animations[3].Frames[1].centerY = 300;
	SpriteList[8].Animations[3].Frames[1].PegRegistered = false;
	SpriteList[8].Animations[3].Frames[1].useTransparency = false;


	SpriteList[8].Animations[4].TotalFrames=2;
	SpriteList[8].Animations[4].ConnectTo = 0;
	SpriteList[8].Animations[4].Frames = new FrameElem[2];

	SpriteList[8].Animations[4].Frames[0].BitmapName = "Win 1.bmp";
	SpriteList[8].Animations[4].Frames[0].TranslateX = 0.000;
	SpriteList[8].Animations[4].Frames[0].TranslateY = 0.000;
	SpriteList[8].Animations[4].Frames[0].Delay = 40;
	SpriteList[8].Animations[4].Frames[0].Width = 800;
	SpriteList[8].Animations[4].Frames[0].Height = 600;
	SpriteList[8].Animations[4].Frames[0].Transparency = RGB(240,240,240);
	SpriteList[8].Animations[4].Frames[0].hFlip = false;
	SpriteList[8].Animations[4].Frames[0].vFlip = false;
	SpriteList[8].Animations[4].Frames[0].zRotation = 0;
	SpriteList[8].Animations[4].Frames[0].HotSpot[0].x = 400;
	SpriteList[8].Animations[4].Frames[0].HotSpot[0].y = 300;
	::SetRect( &SpriteList[8].Animations[4].Frames[0].BBox, 0, 0, 799,599);
	SpriteList[8].Animations[4].Frames[0].centerX = 400;
	SpriteList[8].Animations[4].Frames[0].centerY = 300;
	SpriteList[8].Animations[4].Frames[0].PegRegistered = false;
	SpriteList[8].Animations[4].Frames[0].useTransparency = false;

	SpriteList[8].Animations[4].Frames[1].BitmapName = "Win 2.bmp";
	SpriteList[8].Animations[4].Frames[1].TranslateX = 0.000;
	SpriteList[8].Animations[4].Frames[1].TranslateY = 0.000;
	SpriteList[8].Animations[4].Frames[1].Delay = 40;
	SpriteList[8].Animations[4].Frames[1].Width = 800;
	SpriteList[8].Animations[4].Frames[1].Height = 600;
	SpriteList[8].Animations[4].Frames[1].Transparency = RGB(240,240,240);
	SpriteList[8].Animations[4].Frames[1].hFlip = false;
	SpriteList[8].Animations[4].Frames[1].vFlip = false;
	SpriteList[8].Animations[4].Frames[1].zRotation = 0;
	SpriteList[8].Animations[4].Frames[1].HotSpot[0].x = 400;
	SpriteList[8].Animations[4].Frames[1].HotSpot[0].y = 300;
	::SetRect( &SpriteList[8].Animations[4].Frames[1].BBox, 0, 0, 799,599);
	SpriteList[8].Animations[4].Frames[1].centerX = 400;
	SpriteList[8].Animations[4].Frames[1].centerY = 300;
	SpriteList[8].Animations[4].Frames[1].PegRegistered = false;
	SpriteList[8].Animations[4].Frames[1].useTransparency = false;


	SpriteList[8].Animations[5].TotalFrames=2;
	SpriteList[8].Animations[5].ConnectTo = 0;
	SpriteList[8].Animations[5].Frames = new FrameElem[2];

	SpriteList[8].Animations[5].Frames[0].BitmapName = "Death 1.bmp";
	SpriteList[8].Animations[5].Frames[0].TranslateX = 0.000;
	SpriteList[8].Animations[5].Frames[0].TranslateY = 0.000;
	SpriteList[8].Animations[5].Frames[0].Delay = 40;
	SpriteList[8].Animations[5].Frames[0].Width = 800;
	SpriteList[8].Animations[5].Frames[0].Height = 600;
	SpriteList[8].Animations[5].Frames[0].Transparency = RGB(240,240,240);
	SpriteList[8].Animations[5].Frames[0].hFlip = false;
	SpriteList[8].Animations[5].Frames[0].vFlip = false;
	SpriteList[8].Animations[5].Frames[0].zRotation = 0;
	SpriteList[8].Animations[5].Frames[0].HotSpot[0].x = 400;
	SpriteList[8].Animations[5].Frames[0].HotSpot[0].y = 300;
	::SetRect( &SpriteList[8].Animations[5].Frames[0].BBox, 0, 0, 799,599);
	SpriteList[8].Animations[5].Frames[0].centerX = 400;
	SpriteList[8].Animations[5].Frames[0].centerY = 300;
	SpriteList[8].Animations[5].Frames[0].PegRegistered = false;
	SpriteList[8].Animations[5].Frames[0].useTransparency = false;

	SpriteList[8].Animations[5].Frames[1].BitmapName = "Death 2.bmp";
	SpriteList[8].Animations[5].Frames[1].TranslateX = 0.000;
	SpriteList[8].Animations[5].Frames[1].TranslateY = 0.000;
	SpriteList[8].Animations[5].Frames[1].Delay = 40;
	SpriteList[8].Animations[5].Frames[1].Width = 800;
	SpriteList[8].Animations[5].Frames[1].Height = 600;
	SpriteList[8].Animations[5].Frames[1].Transparency = RGB(240,240,240);
	SpriteList[8].Animations[5].Frames[1].hFlip = false;
	SpriteList[8].Animations[5].Frames[1].vFlip = false;
	SpriteList[8].Animations[5].Frames[1].zRotation = 0;
	SpriteList[8].Animations[5].Frames[1].HotSpot[0].x = 400;
	SpriteList[8].Animations[5].Frames[1].HotSpot[0].y = 300;
	::SetRect( &SpriteList[8].Animations[5].Frames[1].BBox, 0, 0, 799,599);
	SpriteList[8].Animations[5].Frames[1].centerX = 400;
	SpriteList[8].Animations[5].Frames[1].centerY = 300;
	SpriteList[8].Animations[5].Frames[1].PegRegistered = false;
	SpriteList[8].Animations[5].Frames[1].useTransparency = false;


	SpriteList[8].Animations[6].TotalFrames=1;
	SpriteList[8].Animations[6].ConnectTo = 0;
	SpriteList[8].Animations[6].Frames = new FrameElem[1];

	SpriteList[8].Animations[6].Frames[0].BitmapName = "Intro Text.bmp";
	SpriteList[8].Animations[6].Frames[0].TranslateX = 0.000;
	SpriteList[8].Animations[6].Frames[0].TranslateY = 0.000;
	SpriteList[8].Animations[6].Frames[0].Delay = 1;
	SpriteList[8].Animations[6].Frames[0].Width = 800;
	SpriteList[8].Animations[6].Frames[0].Height = 1151;
	SpriteList[8].Animations[6].Frames[0].Transparency = RGB(240,240,240);
	SpriteList[8].Animations[6].Frames[0].hFlip = false;
	SpriteList[8].Animations[6].Frames[0].vFlip = false;
	SpriteList[8].Animations[6].Frames[0].zRotation = 0;
	SpriteList[8].Animations[6].Frames[0].HotSpot[0].x = 400;
	SpriteList[8].Animations[6].Frames[0].HotSpot[0].y = 575;
	::SetRect( &SpriteList[8].Animations[6].Frames[0].BBox, 0, 0, 799,1150);
	SpriteList[8].Animations[6].Frames[0].centerX = 400;
	SpriteList[8].Animations[6].Frames[0].centerY = 575;
	SpriteList[8].Animations[6].Frames[0].PegRegistered = false;
	SpriteList[8].Animations[6].Frames[0].useTransparency = false;



}

void LoadAnimation_Conrol(GameNode* gn)
{
	SpriteList[9].TotalAnimations = 3;
	SpriteList[9].Animations = new AnimationElem[3];

	SpriteList[9].Animations[0].TotalFrames=1;
	SpriteList[9].Animations[0].ConnectTo = 0;
	SpriteList[9].Animations[0].Frames = new FrameElem[1];

	SpriteList[9].Animations[0].Frames[0].BitmapName = "Button.bmp";
	SpriteList[9].Animations[0].Frames[0].TranslateX = 0.000;
	SpriteList[9].Animations[0].Frames[0].TranslateY = 0.000;
	SpriteList[9].Animations[0].Frames[0].Delay = 1;
	SpriteList[9].Animations[0].Frames[0].Width = 300;
	SpriteList[9].Animations[0].Frames[0].Height = 60;
	SpriteList[9].Animations[0].Frames[0].Transparency = RGB(0,0,0);
	SpriteList[9].Animations[0].Frames[0].hFlip = false;
	SpriteList[9].Animations[0].Frames[0].vFlip = false;
	SpriteList[9].Animations[0].Frames[0].zRotation = 0;
	SpriteList[9].Animations[0].Frames[0].HotSpot[0].x = 50;
	SpriteList[9].Animations[0].Frames[0].HotSpot[0].y = 25;
	::SetRect( &SpriteList[9].Animations[0].Frames[0].BBox, 0, 0, 299,59);
	SpriteList[9].Animations[0].Frames[0].centerX = 50;
	SpriteList[9].Animations[0].Frames[0].centerY = 25;
	SpriteList[9].Animations[0].Frames[0].PegRegistered = false;
	SpriteList[9].Animations[0].Frames[0].useTransparency = true;
	SpriteList[9].Animations[0].Frames[0].AddCollisionData(CollisionSegment(298,1,1,1,0,0));
	SpriteList[9].Animations[0].Frames[0].AddCollisionData(CollisionSegment(298,58,298,1,0,0));
	SpriteList[9].Animations[0].Frames[0].AddCollisionData(CollisionSegment(1,58,298,58,0,0));
	SpriteList[9].Animations[0].Frames[0].AddCollisionData(CollisionSegment(1,1,1,58,0,0));


	SpriteList[9].Animations[1].TotalFrames=1;
	SpriteList[9].Animations[1].ConnectTo = 0;
	SpriteList[9].Animations[1].Frames = new FrameElem[1];

	SpriteList[9].Animations[1].Frames[0].BitmapName = "Life Bar.bmp";
	SpriteList[9].Animations[1].Frames[0].TranslateX = 0.000;
	SpriteList[9].Animations[1].Frames[0].TranslateY = 0.000;
	SpriteList[9].Animations[1].Frames[0].Delay = 1;
	SpriteList[9].Animations[1].Frames[0].Width = 80;
	SpriteList[9].Animations[1].Frames[0].Height = 100;
	SpriteList[9].Animations[1].Frames[0].Transparency = RGB(240,240,240);
	SpriteList[9].Animations[1].Frames[0].hFlip = false;
	SpriteList[9].Animations[1].Frames[0].vFlip = false;
	SpriteList[9].Animations[1].Frames[0].zRotation = 0;
	SpriteList[9].Animations[1].Frames[0].HotSpot[0].x = 40;
	SpriteList[9].Animations[1].Frames[0].HotSpot[0].y = 50;
	::SetRect( &SpriteList[9].Animations[1].Frames[0].BBox, 0, 0, 79,99);
	SpriteList[9].Animations[1].Frames[0].centerX = 40;
	SpriteList[9].Animations[1].Frames[0].centerY = 50;
	SpriteList[9].Animations[1].Frames[0].PegRegistered = false;
	SpriteList[9].Animations[1].Frames[0].useTransparency = false;


	SpriteList[9].Animations[2].TotalFrames=1;
	SpriteList[9].Animations[2].ConnectTo = 0;
	SpriteList[9].Animations[2].Frames = new FrameElem[1];

	SpriteList[9].Animations[2].Frames[0].BitmapName = "Lives.bmp";
	SpriteList[9].Animations[2].Frames[0].TranslateX = 0.000;
	SpriteList[9].Animations[2].Frames[0].TranslateY = 0.000;
	SpriteList[9].Animations[2].Frames[0].Delay = 1;
	SpriteList[9].Animations[2].Frames[0].Width = 80;
	SpriteList[9].Animations[2].Frames[0].Height = 600;
	SpriteList[9].Animations[2].Frames[0].Transparency = RGB(240,240,240);
	SpriteList[9].Animations[2].Frames[0].hFlip = false;
	SpriteList[9].Animations[2].Frames[0].vFlip = false;
	SpriteList[9].Animations[2].Frames[0].zRotation = 0;
	SpriteList[9].Animations[2].Frames[0].HotSpot[0].x = 40;
	SpriteList[9].Animations[2].Frames[0].HotSpot[0].y = 300;
	::SetRect( &SpriteList[9].Animations[2].Frames[0].BBox, 0, 0, 79,599);
	SpriteList[9].Animations[2].Frames[0].centerX = 40;
	SpriteList[9].Animations[2].Frames[0].centerY = 300;
	SpriteList[9].Animations[2].Frames[0].PegRegistered = false;
	SpriteList[9].Animations[2].Frames[0].useTransparency = false;



	SpriteList[8].TotalAnimations = 7;
	SpriteList[8].Animations = new AnimationElem[7];

	SpriteList[8].Animations[0].TotalFrames=2;
	SpriteList[8].Animations[0].ConnectTo = 0;
	SpriteList[8].Animations[0].Frames = new FrameElem[2];

	SpriteList[8].Animations[0].Frames[0].BitmapName = "Menu 1.bmp";
	SpriteList[8].Animations[0].Frames[0].TranslateX = 0.000;
	SpriteList[8].Animations[0].Frames[0].TranslateY = 0.000;
	SpriteList[8].Animations[0].Frames[0].Delay = 20;
	SpriteList[8].Animations[0].Frames[0].Width = 800;
	SpriteList[8].Animations[0].Frames[0].Height = 600;
	SpriteList[8].Animations[0].Frames[0].Transparency = RGB(240,240,240);
	SpriteList[8].Animations[0].Frames[0].hFlip = false;
	SpriteList[8].Animations[0].Frames[0].vFlip = false;
	SpriteList[8].Animations[0].Frames[0].zRotation = 0;
	SpriteList[8].Animations[0].Frames[0].HotSpot[0].x = 400;
	SpriteList[8].Animations[0].Frames[0].HotSpot[0].y = 300;
	::SetRect( &SpriteList[8].Animations[0].Frames[0].BBox, 0, 0, 799,599);
	SpriteList[8].Animations[0].Frames[0].centerX = 400;
	SpriteList[8].Animations[0].Frames[0].centerY = 300;
	SpriteList[8].Animations[0].Frames[0].PegRegistered = false;
	SpriteList[8].Animations[0].Frames[0].useTransparency = false;

	SpriteList[8].Animations[0].Frames[1].BitmapName = "Menu 2.bmp";
	SpriteList[8].Animations[0].Frames[1].TranslateX = 0.000;
	SpriteList[8].Animations[0].Frames[1].TranslateY = 0.000;
	SpriteList[8].Animations[0].Frames[1].Delay = 20;
	SpriteList[8].Animations[0].Frames[1].Width = 800;
	SpriteList[8].Animations[0].Frames[1].Height = 600;
	SpriteList[8].Animations[0].Frames[1].Transparency = RGB(240,240,240);
	SpriteList[8].Animations[0].Frames[1].hFlip = false;
	SpriteList[8].Animations[0].Frames[1].vFlip = false;
	SpriteList[8].Animations[0].Frames[1].zRotation = 0;
	SpriteList[8].Animations[0].Frames[1].HotSpot[0].x = 400;
	SpriteList[8].Animations[0].Frames[1].HotSpot[0].y = 300;
	::SetRect( &SpriteList[8].Animations[0].Frames[1].BBox, 0, 0, 799,599);
	SpriteList[8].Animations[0].Frames[1].centerX = 400;
	SpriteList[8].Animations[0].Frames[1].centerY = 300;
	SpriteList[8].Animations[0].Frames[1].PegRegistered = false;
	SpriteList[8].Animations[0].Frames[1].useTransparency = false;


	SpriteList[8].Animations[1].TotalFrames=1;
	SpriteList[8].Animations[1].ConnectTo = 0;
	SpriteList[8].Animations[1].Frames = new FrameElem[1];

	SpriteList[8].Animations[1].Frames[0].BitmapName = "Info Menu 1.bmp";
	SpriteList[8].Animations[1].Frames[0].TranslateX = 0.000;
	SpriteList[8].Animations[1].Frames[0].TranslateY = 0.000;
	SpriteList[8].Animations[1].Frames[0].Delay = 1;
	SpriteList[8].Animations[1].Frames[0].Width = 800;
	SpriteList[8].Animations[1].Frames[0].Height = 600;
	SpriteList[8].Animations[1].Frames[0].Transparency = RGB(240,240,240);
	SpriteList[8].Animations[1].Frames[0].hFlip = false;
	SpriteList[8].Animations[1].Frames[0].vFlip = false;
	SpriteList[8].Animations[1].Frames[0].zRotation = 0;
	SpriteList[8].Animations[1].Frames[0].HotSpot[0].x = 400;
	SpriteList[8].Animations[1].Frames[0].HotSpot[0].y = 300;
	::SetRect( &SpriteList[8].Animations[1].Frames[0].BBox, 0, 0, 799,599);
	SpriteList[8].Animations[1].Frames[0].centerX = 400;
	SpriteList[8].Animations[1].Frames[0].centerY = 300;
	SpriteList[8].Animations[1].Frames[0].PegRegistered = false;
	SpriteList[8].Animations[1].Frames[0].useTransparency = false;


	SpriteList[8].Animations[2].TotalFrames=2;
	SpriteList[8].Animations[2].ConnectTo = 0;
	SpriteList[8].Animations[2].Frames = new FrameElem[2];

	SpriteList[8].Animations[2].Frames[0].BitmapName = "Credits 1.bmp";
	SpriteList[8].Animations[2].Frames[0].TranslateX = 0.000;
	SpriteList[8].Animations[2].Frames[0].TranslateY = 0.000;
	SpriteList[8].Animations[2].Frames[0].Delay = 20;
	SpriteList[8].Animations[2].Frames[0].Width = 800;
	SpriteList[8].Animations[2].Frames[0].Height = 600;
	SpriteList[8].Animations[2].Frames[0].Transparency = RGB(240,240,240);
	SpriteList[8].Animations[2].Frames[0].hFlip = false;
	SpriteList[8].Animations[2].Frames[0].vFlip = false;
	SpriteList[8].Animations[2].Frames[0].zRotation = 0;
	SpriteList[8].Animations[2].Frames[0].HotSpot[0].x = 400;
	SpriteList[8].Animations[2].Frames[0].HotSpot[0].y = 300;
	::SetRect( &SpriteList[8].Animations[2].Frames[0].BBox, 0, 0, 799,599);
	SpriteList[8].Animations[2].Frames[0].centerX = 400;
	SpriteList[8].Animations[2].Frames[0].centerY = 300;
	SpriteList[8].Animations[2].Frames[0].PegRegistered = false;
	SpriteList[8].Animations[2].Frames[0].useTransparency = false;

	SpriteList[8].Animations[2].Frames[1].BitmapName = "Credits 2.bmp";
	SpriteList[8].Animations[2].Frames[1].TranslateX = 0.000;
	SpriteList[8].Animations[2].Frames[1].TranslateY = 0.000;
	SpriteList[8].Animations[2].Frames[1].Delay = 20;
	SpriteList[8].Animations[2].Frames[1].Width = 800;
	SpriteList[8].Animations[2].Frames[1].Height = 600;
	SpriteList[8].Animations[2].Frames[1].Transparency = RGB(240,240,240);
	SpriteList[8].Animations[2].Frames[1].hFlip = false;
	SpriteList[8].Animations[2].Frames[1].vFlip = false;
	SpriteList[8].Animations[2].Frames[1].zRotation = 0;
	SpriteList[8].Animations[2].Frames[1].HotSpot[0].x = 400;
	SpriteList[8].Animations[2].Frames[1].HotSpot[0].y = 300;
	::SetRect( &SpriteList[8].Animations[2].Frames[1].BBox, 0, 0, 799,599);
	SpriteList[8].Animations[2].Frames[1].centerX = 400;
	SpriteList[8].Animations[2].Frames[1].centerY = 300;
	SpriteList[8].Animations[2].Frames[1].PegRegistered = false;
	SpriteList[8].Animations[2].Frames[1].useTransparency = false;


	SpriteList[8].Animations[3].TotalFrames=2;
	SpriteList[8].Animations[3].ConnectTo = 0;
	SpriteList[8].Animations[3].Frames = new FrameElem[2];

	SpriteList[8].Animations[3].Frames[0].BitmapName = "Difficulty 1.bmp";
	SpriteList[8].Animations[3].Frames[0].TranslateX = 0.000;
	SpriteList[8].Animations[3].Frames[0].TranslateY = 0.000;
	SpriteList[8].Animations[3].Frames[0].Delay = 25;
	SpriteList[8].Animations[3].Frames[0].Width = 800;
	SpriteList[8].Animations[3].Frames[0].Height = 600;
	SpriteList[8].Animations[3].Frames[0].Transparency = RGB(240,240,240);
	SpriteList[8].Animations[3].Frames[0].hFlip = false;
	SpriteList[8].Animations[3].Frames[0].vFlip = false;
	SpriteList[8].Animations[3].Frames[0].zRotation = 0;
	SpriteList[8].Animations[3].Frames[0].HotSpot[0].x = 400;
	SpriteList[8].Animations[3].Frames[0].HotSpot[0].y = 300;
	::SetRect( &SpriteList[8].Animations[3].Frames[0].BBox, 0, 0, 799,599);
	SpriteList[8].Animations[3].Frames[0].centerX = 400;
	SpriteList[8].Animations[3].Frames[0].centerY = 300;
	SpriteList[8].Animations[3].Frames[0].PegRegistered = false;
	SpriteList[8].Animations[3].Frames[0].useTransparency = false;

	SpriteList[8].Animations[3].Frames[1].BitmapName = "Difficulty 2.bmp";
	SpriteList[8].Animations[3].Frames[1].TranslateX = 0.000;
	SpriteList[8].Animations[3].Frames[1].TranslateY = 0.000;
	SpriteList[8].Animations[3].Frames[1].Delay = 25;
	SpriteList[8].Animations[3].Frames[1].Width = 800;
	SpriteList[8].Animations[3].Frames[1].Height = 600;
	SpriteList[8].Animations[3].Frames[1].Transparency = RGB(240,240,240);
	SpriteList[8].Animations[3].Frames[1].hFlip = false;
	SpriteList[8].Animations[3].Frames[1].vFlip = false;
	SpriteList[8].Animations[3].Frames[1].zRotation = 0;
	SpriteList[8].Animations[3].Frames[1].HotSpot[0].x = 400;
	SpriteList[8].Animations[3].Frames[1].HotSpot[0].y = 300;
	::SetRect( &SpriteList[8].Animations[3].Frames[1].BBox, 0, 0, 799,599);
	SpriteList[8].Animations[3].Frames[1].centerX = 400;
	SpriteList[8].Animations[3].Frames[1].centerY = 300;
	SpriteList[8].Animations[3].Frames[1].PegRegistered = false;
	SpriteList[8].Animations[3].Frames[1].useTransparency = false;


	SpriteList[8].Animations[4].TotalFrames=2;
	SpriteList[8].Animations[4].ConnectTo = 0;
	SpriteList[8].Animations[4].Frames = new FrameElem[2];

	SpriteList[8].Animations[4].Frames[0].BitmapName = "Win 1.bmp";
	SpriteList[8].Animations[4].Frames[0].TranslateX = 0.000;
	SpriteList[8].Animations[4].Frames[0].TranslateY = 0.000;
	SpriteList[8].Animations[4].Frames[0].Delay = 40;
	SpriteList[8].Animations[4].Frames[0].Width = 800;
	SpriteList[8].Animations[4].Frames[0].Height = 600;
	SpriteList[8].Animations[4].Frames[0].Transparency = RGB(240,240,240);
	SpriteList[8].Animations[4].Frames[0].hFlip = false;
	SpriteList[8].Animations[4].Frames[0].vFlip = false;
	SpriteList[8].Animations[4].Frames[0].zRotation = 0;
	SpriteList[8].Animations[4].Frames[0].HotSpot[0].x = 400;
	SpriteList[8].Animations[4].Frames[0].HotSpot[0].y = 300;
	::SetRect( &SpriteList[8].Animations[4].Frames[0].BBox, 0, 0, 799,599);
	SpriteList[8].Animations[4].Frames[0].centerX = 400;
	SpriteList[8].Animations[4].Frames[0].centerY = 300;
	SpriteList[8].Animations[4].Frames[0].PegRegistered = false;
	SpriteList[8].Animations[4].Frames[0].useTransparency = false;

	SpriteList[8].Animations[4].Frames[1].BitmapName = "Win 2.bmp";
	SpriteList[8].Animations[4].Frames[1].TranslateX = 0.000;
	SpriteList[8].Animations[4].Frames[1].TranslateY = 0.000;
	SpriteList[8].Animations[4].Frames[1].Delay = 40;
	SpriteList[8].Animations[4].Frames[1].Width = 800;
	SpriteList[8].Animations[4].Frames[1].Height = 600;
	SpriteList[8].Animations[4].Frames[1].Transparency = RGB(240,240,240);
	SpriteList[8].Animations[4].Frames[1].hFlip = false;
	SpriteList[8].Animations[4].Frames[1].vFlip = false;
	SpriteList[8].Animations[4].Frames[1].zRotation = 0;
	SpriteList[8].Animations[4].Frames[1].HotSpot[0].x = 400;
	SpriteList[8].Animations[4].Frames[1].HotSpot[0].y = 300;
	::SetRect( &SpriteList[8].Animations[4].Frames[1].BBox, 0, 0, 799,599);
	SpriteList[8].Animations[4].Frames[1].centerX = 400;
	SpriteList[8].Animations[4].Frames[1].centerY = 300;
	SpriteList[8].Animations[4].Frames[1].PegRegistered = false;
	SpriteList[8].Animations[4].Frames[1].useTransparency = false;


	SpriteList[8].Animations[5].TotalFrames=2;
	SpriteList[8].Animations[5].ConnectTo = 0;
	SpriteList[8].Animations[5].Frames = new FrameElem[2];

	SpriteList[8].Animations[5].Frames[0].BitmapName = "Death 1.bmp";
	SpriteList[8].Animations[5].Frames[0].TranslateX = 0.000;
	SpriteList[8].Animations[5].Frames[0].TranslateY = 0.000;
	SpriteList[8].Animations[5].Frames[0].Delay = 40;
	SpriteList[8].Animations[5].Frames[0].Width = 800;
	SpriteList[8].Animations[5].Frames[0].Height = 600;
	SpriteList[8].Animations[5].Frames[0].Transparency = RGB(240,240,240);
	SpriteList[8].Animations[5].Frames[0].hFlip = false;
	SpriteList[8].Animations[5].Frames[0].vFlip = false;
	SpriteList[8].Animations[5].Frames[0].zRotation = 0;
	SpriteList[8].Animations[5].Frames[0].HotSpot[0].x = 400;
	SpriteList[8].Animations[5].Frames[0].HotSpot[0].y = 300;
	::SetRect( &SpriteList[8].Animations[5].Frames[0].BBox, 0, 0, 799,599);
	SpriteList[8].Animations[5].Frames[0].centerX = 400;
	SpriteList[8].Animations[5].Frames[0].centerY = 300;
	SpriteList[8].Animations[5].Frames[0].PegRegistered = false;
	SpriteList[8].Animations[5].Frames[0].useTransparency = false;

	SpriteList[8].Animations[5].Frames[1].BitmapName = "Death 2.bmp";
	SpriteList[8].Animations[5].Frames[1].TranslateX = 0.000;
	SpriteList[8].Animations[5].Frames[1].TranslateY = 0.000;
	SpriteList[8].Animations[5].Frames[1].Delay = 40;
	SpriteList[8].Animations[5].Frames[1].Width = 800;
	SpriteList[8].Animations[5].Frames[1].Height = 600;
	SpriteList[8].Animations[5].Frames[1].Transparency = RGB(240,240,240);
	SpriteList[8].Animations[5].Frames[1].hFlip = false;
	SpriteList[8].Animations[5].Frames[1].vFlip = false;
	SpriteList[8].Animations[5].Frames[1].zRotation = 0;
	SpriteList[8].Animations[5].Frames[1].HotSpot[0].x = 400;
	SpriteList[8].Animations[5].Frames[1].HotSpot[0].y = 300;
	::SetRect( &SpriteList[8].Animations[5].Frames[1].BBox, 0, 0, 799,599);
	SpriteList[8].Animations[5].Frames[1].centerX = 400;
	SpriteList[8].Animations[5].Frames[1].centerY = 300;
	SpriteList[8].Animations[5].Frames[1].PegRegistered = false;
	SpriteList[8].Animations[5].Frames[1].useTransparency = false;


	SpriteList[8].Animations[6].TotalFrames=1;
	SpriteList[8].Animations[6].ConnectTo = 0;
	SpriteList[8].Animations[6].Frames = new FrameElem[1];

	SpriteList[8].Animations[6].Frames[0].BitmapName = "Intro Text.bmp";
	SpriteList[8].Animations[6].Frames[0].TranslateX = 0.000;
	SpriteList[8].Animations[6].Frames[0].TranslateY = 0.000;
	SpriteList[8].Animations[6].Frames[0].Delay = 1;
	SpriteList[8].Animations[6].Frames[0].Width = 800;
	SpriteList[8].Animations[6].Frames[0].Height = 1151;
	SpriteList[8].Animations[6].Frames[0].Transparency = RGB(240,240,240);
	SpriteList[8].Animations[6].Frames[0].hFlip = false;
	SpriteList[8].Animations[6].Frames[0].vFlip = false;
	SpriteList[8].Animations[6].Frames[0].zRotation = 0;
	SpriteList[8].Animations[6].Frames[0].HotSpot[0].x = 400;
	SpriteList[8].Animations[6].Frames[0].HotSpot[0].y = 575;
	::SetRect( &SpriteList[8].Animations[6].Frames[0].BBox, 0, 0, 799,1150);
	SpriteList[8].Animations[6].Frames[0].centerX = 400;
	SpriteList[8].Animations[6].Frames[0].centerY = 575;
	SpriteList[8].Animations[6].Frames[0].PegRegistered = false;
	SpriteList[8].Animations[6].Frames[0].useTransparency = false;



}

void LoadAnimation_difi(GameNode* gn)
{
	SpriteList[9].TotalAnimations = 3;
	SpriteList[9].Animations = new AnimationElem[3];

	SpriteList[9].Animations[0].TotalFrames=1;
	SpriteList[9].Animations[0].ConnectTo = 0;
	SpriteList[9].Animations[0].Frames = new FrameElem[1];

	SpriteList[9].Animations[0].Frames[0].BitmapName = "Button.bmp";
	SpriteList[9].Animations[0].Frames[0].TranslateX = 0.000;
	SpriteList[9].Animations[0].Frames[0].TranslateY = 0.000;
	SpriteList[9].Animations[0].Frames[0].Delay = 1;
	SpriteList[9].Animations[0].Frames[0].Width = 300;
	SpriteList[9].Animations[0].Frames[0].Height = 60;
	SpriteList[9].Animations[0].Frames[0].Transparency = RGB(0,0,0);
	SpriteList[9].Animations[0].Frames[0].hFlip = false;
	SpriteList[9].Animations[0].Frames[0].vFlip = false;
	SpriteList[9].Animations[0].Frames[0].zRotation = 0;
	SpriteList[9].Animations[0].Frames[0].HotSpot[0].x = 50;
	SpriteList[9].Animations[0].Frames[0].HotSpot[0].y = 25;
	::SetRect( &SpriteList[9].Animations[0].Frames[0].BBox, 0, 0, 299,59);
	SpriteList[9].Animations[0].Frames[0].centerX = 50;
	SpriteList[9].Animations[0].Frames[0].centerY = 25;
	SpriteList[9].Animations[0].Frames[0].PegRegistered = false;
	SpriteList[9].Animations[0].Frames[0].useTransparency = true;
	SpriteList[9].Animations[0].Frames[0].AddCollisionData(CollisionSegment(298,1,1,1,0,0));
	SpriteList[9].Animations[0].Frames[0].AddCollisionData(CollisionSegment(298,58,298,1,0,0));
	SpriteList[9].Animations[0].Frames[0].AddCollisionData(CollisionSegment(1,58,298,58,0,0));
	SpriteList[9].Animations[0].Frames[0].AddCollisionData(CollisionSegment(1,1,1,58,0,0));


	SpriteList[9].Animations[1].TotalFrames=1;
	SpriteList[9].Animations[1].ConnectTo = 0;
	SpriteList[9].Animations[1].Frames = new FrameElem[1];

	SpriteList[9].Animations[1].Frames[0].BitmapName = "Life Bar.bmp";
	SpriteList[9].Animations[1].Frames[0].TranslateX = 0.000;
	SpriteList[9].Animations[1].Frames[0].TranslateY = 0.000;
	SpriteList[9].Animations[1].Frames[0].Delay = 1;
	SpriteList[9].Animations[1].Frames[0].Width = 80;
	SpriteList[9].Animations[1].Frames[0].Height = 100;
	SpriteList[9].Animations[1].Frames[0].Transparency = RGB(240,240,240);
	SpriteList[9].Animations[1].Frames[0].hFlip = false;
	SpriteList[9].Animations[1].Frames[0].vFlip = false;
	SpriteList[9].Animations[1].Frames[0].zRotation = 0;
	SpriteList[9].Animations[1].Frames[0].HotSpot[0].x = 40;
	SpriteList[9].Animations[1].Frames[0].HotSpot[0].y = 50;
	::SetRect( &SpriteList[9].Animations[1].Frames[0].BBox, 0, 0, 79,99);
	SpriteList[9].Animations[1].Frames[0].centerX = 40;
	SpriteList[9].Animations[1].Frames[0].centerY = 50;
	SpriteList[9].Animations[1].Frames[0].PegRegistered = false;
	SpriteList[9].Animations[1].Frames[0].useTransparency = false;


	SpriteList[9].Animations[2].TotalFrames=1;
	SpriteList[9].Animations[2].ConnectTo = 0;
	SpriteList[9].Animations[2].Frames = new FrameElem[1];

	SpriteList[9].Animations[2].Frames[0].BitmapName = "Lives.bmp";
	SpriteList[9].Animations[2].Frames[0].TranslateX = 0.000;
	SpriteList[9].Animations[2].Frames[0].TranslateY = 0.000;
	SpriteList[9].Animations[2].Frames[0].Delay = 1;
	SpriteList[9].Animations[2].Frames[0].Width = 80;
	SpriteList[9].Animations[2].Frames[0].Height = 600;
	SpriteList[9].Animations[2].Frames[0].Transparency = RGB(240,240,240);
	SpriteList[9].Animations[2].Frames[0].hFlip = false;
	SpriteList[9].Animations[2].Frames[0].vFlip = false;
	SpriteList[9].Animations[2].Frames[0].zRotation = 0;
	SpriteList[9].Animations[2].Frames[0].HotSpot[0].x = 40;
	SpriteList[9].Animations[2].Frames[0].HotSpot[0].y = 300;
	::SetRect( &SpriteList[9].Animations[2].Frames[0].BBox, 0, 0, 79,599);
	SpriteList[9].Animations[2].Frames[0].centerX = 40;
	SpriteList[9].Animations[2].Frames[0].centerY = 300;
	SpriteList[9].Animations[2].Frames[0].PegRegistered = false;
	SpriteList[9].Animations[2].Frames[0].useTransparency = false;



	SpriteList[8].TotalAnimations = 7;
	SpriteList[8].Animations = new AnimationElem[7];

	SpriteList[8].Animations[0].TotalFrames=2;
	SpriteList[8].Animations[0].ConnectTo = 0;
	SpriteList[8].Animations[0].Frames = new FrameElem[2];

	SpriteList[8].Animations[0].Frames[0].BitmapName = "Menu 1.bmp";
	SpriteList[8].Animations[0].Frames[0].TranslateX = 0.000;
	SpriteList[8].Animations[0].Frames[0].TranslateY = 0.000;
	SpriteList[8].Animations[0].Frames[0].Delay = 20;
	SpriteList[8].Animations[0].Frames[0].Width = 800;
	SpriteList[8].Animations[0].Frames[0].Height = 600;
	SpriteList[8].Animations[0].Frames[0].Transparency = RGB(240,240,240);
	SpriteList[8].Animations[0].Frames[0].hFlip = false;
	SpriteList[8].Animations[0].Frames[0].vFlip = false;
	SpriteList[8].Animations[0].Frames[0].zRotation = 0;
	SpriteList[8].Animations[0].Frames[0].HotSpot[0].x = 400;
	SpriteList[8].Animations[0].Frames[0].HotSpot[0].y = 300;
	::SetRect( &SpriteList[8].Animations[0].Frames[0].BBox, 0, 0, 799,599);
	SpriteList[8].Animations[0].Frames[0].centerX = 400;
	SpriteList[8].Animations[0].Frames[0].centerY = 300;
	SpriteList[8].Animations[0].Frames[0].PegRegistered = false;
	SpriteList[8].Animations[0].Frames[0].useTransparency = false;

	SpriteList[8].Animations[0].Frames[1].BitmapName = "Menu 2.bmp";
	SpriteList[8].Animations[0].Frames[1].TranslateX = 0.000;
	SpriteList[8].Animations[0].Frames[1].TranslateY = 0.000;
	SpriteList[8].Animations[0].Frames[1].Delay = 20;
	SpriteList[8].Animations[0].Frames[1].Width = 800;
	SpriteList[8].Animations[0].Frames[1].Height = 600;
	SpriteList[8].Animations[0].Frames[1].Transparency = RGB(240,240,240);
	SpriteList[8].Animations[0].Frames[1].hFlip = false;
	SpriteList[8].Animations[0].Frames[1].vFlip = false;
	SpriteList[8].Animations[0].Frames[1].zRotation = 0;
	SpriteList[8].Animations[0].Frames[1].HotSpot[0].x = 400;
	SpriteList[8].Animations[0].Frames[1].HotSpot[0].y = 300;
	::SetRect( &SpriteList[8].Animations[0].Frames[1].BBox, 0, 0, 799,599);
	SpriteList[8].Animations[0].Frames[1].centerX = 400;
	SpriteList[8].Animations[0].Frames[1].centerY = 300;
	SpriteList[8].Animations[0].Frames[1].PegRegistered = false;
	SpriteList[8].Animations[0].Frames[1].useTransparency = false;


	SpriteList[8].Animations[1].TotalFrames=1;
	SpriteList[8].Animations[1].ConnectTo = 0;
	SpriteList[8].Animations[1].Frames = new FrameElem[1];

	SpriteList[8].Animations[1].Frames[0].BitmapName = "Info Menu 1.bmp";
	SpriteList[8].Animations[1].Frames[0].TranslateX = 0.000;
	SpriteList[8].Animations[1].Frames[0].TranslateY = 0.000;
	SpriteList[8].Animations[1].Frames[0].Delay = 1;
	SpriteList[8].Animations[1].Frames[0].Width = 800;
	SpriteList[8].Animations[1].Frames[0].Height = 600;
	SpriteList[8].Animations[1].Frames[0].Transparency = RGB(240,240,240);
	SpriteList[8].Animations[1].Frames[0].hFlip = false;
	SpriteList[8].Animations[1].Frames[0].vFlip = false;
	SpriteList[8].Animations[1].Frames[0].zRotation = 0;
	SpriteList[8].Animations[1].Frames[0].HotSpot[0].x = 400;
	SpriteList[8].Animations[1].Frames[0].HotSpot[0].y = 300;
	::SetRect( &SpriteList[8].Animations[1].Frames[0].BBox, 0, 0, 799,599);
	SpriteList[8].Animations[1].Frames[0].centerX = 400;
	SpriteList[8].Animations[1].Frames[0].centerY = 300;
	SpriteList[8].Animations[1].Frames[0].PegRegistered = false;
	SpriteList[8].Animations[1].Frames[0].useTransparency = false;


	SpriteList[8].Animations[2].TotalFrames=2;
	SpriteList[8].Animations[2].ConnectTo = 0;
	SpriteList[8].Animations[2].Frames = new FrameElem[2];

	SpriteList[8].Animations[2].Frames[0].BitmapName = "Credits 1.bmp";
	SpriteList[8].Animations[2].Frames[0].TranslateX = 0.000;
	SpriteList[8].Animations[2].Frames[0].TranslateY = 0.000;
	SpriteList[8].Animations[2].Frames[0].Delay = 20;
	SpriteList[8].Animations[2].Frames[0].Width = 800;
	SpriteList[8].Animations[2].Frames[0].Height = 600;
	SpriteList[8].Animations[2].Frames[0].Transparency = RGB(240,240,240);
	SpriteList[8].Animations[2].Frames[0].hFlip = false;
	SpriteList[8].Animations[2].Frames[0].vFlip = false;
	SpriteList[8].Animations[2].Frames[0].zRotation = 0;
	SpriteList[8].Animations[2].Frames[0].HotSpot[0].x = 400;
	SpriteList[8].Animations[2].Frames[0].HotSpot[0].y = 300;
	::SetRect( &SpriteList[8].Animations[2].Frames[0].BBox, 0, 0, 799,599);
	SpriteList[8].Animations[2].Frames[0].centerX = 400;
	SpriteList[8].Animations[2].Frames[0].centerY = 300;
	SpriteList[8].Animations[2].Frames[0].PegRegistered = false;
	SpriteList[8].Animations[2].Frames[0].useTransparency = false;

	SpriteList[8].Animations[2].Frames[1].BitmapName = "Credits 2.bmp";
	SpriteList[8].Animations[2].Frames[1].TranslateX = 0.000;
	SpriteList[8].Animations[2].Frames[1].TranslateY = 0.000;
	SpriteList[8].Animations[2].Frames[1].Delay = 20;
	SpriteList[8].Animations[2].Frames[1].Width = 800;
	SpriteList[8].Animations[2].Frames[1].Height = 600;
	SpriteList[8].Animations[2].Frames[1].Transparency = RGB(240,240,240);
	SpriteList[8].Animations[2].Frames[1].hFlip = false;
	SpriteList[8].Animations[2].Frames[1].vFlip = false;
	SpriteList[8].Animations[2].Frames[1].zRotation = 0;
	SpriteList[8].Animations[2].Frames[1].HotSpot[0].x = 400;
	SpriteList[8].Animations[2].Frames[1].HotSpot[0].y = 300;
	::SetRect( &SpriteList[8].Animations[2].Frames[1].BBox, 0, 0, 799,599);
	SpriteList[8].Animations[2].Frames[1].centerX = 400;
	SpriteList[8].Animations[2].Frames[1].centerY = 300;
	SpriteList[8].Animations[2].Frames[1].PegRegistered = false;
	SpriteList[8].Animations[2].Frames[1].useTransparency = false;


	SpriteList[8].Animations[3].TotalFrames=2;
	SpriteList[8].Animations[3].ConnectTo = 0;
	SpriteList[8].Animations[3].Frames = new FrameElem[2];

	SpriteList[8].Animations[3].Frames[0].BitmapName = "Difficulty 1.bmp";
	SpriteList[8].Animations[3].Frames[0].TranslateX = 0.000;
	SpriteList[8].Animations[3].Frames[0].TranslateY = 0.000;
	SpriteList[8].Animations[3].Frames[0].Delay = 25;
	SpriteList[8].Animations[3].Frames[0].Width = 800;
	SpriteList[8].Animations[3].Frames[0].Height = 600;
	SpriteList[8].Animations[3].Frames[0].Transparency = RGB(240,240,240);
	SpriteList[8].Animations[3].Frames[0].hFlip = false;
	SpriteList[8].Animations[3].Frames[0].vFlip = false;
	SpriteList[8].Animations[3].Frames[0].zRotation = 0;
	SpriteList[8].Animations[3].Frames[0].HotSpot[0].x = 400;
	SpriteList[8].Animations[3].Frames[0].HotSpot[0].y = 300;
	::SetRect( &SpriteList[8].Animations[3].Frames[0].BBox, 0, 0, 799,599);
	SpriteList[8].Animations[3].Frames[0].centerX = 400;
	SpriteList[8].Animations[3].Frames[0].centerY = 300;
	SpriteList[8].Animations[3].Frames[0].PegRegistered = false;
	SpriteList[8].Animations[3].Frames[0].useTransparency = false;

	SpriteList[8].Animations[3].Frames[1].BitmapName = "Difficulty 2.bmp";
	SpriteList[8].Animations[3].Frames[1].TranslateX = 0.000;
	SpriteList[8].Animations[3].Frames[1].TranslateY = 0.000;
	SpriteList[8].Animations[3].Frames[1].Delay = 25;
	SpriteList[8].Animations[3].Frames[1].Width = 800;
	SpriteList[8].Animations[3].Frames[1].Height = 600;
	SpriteList[8].Animations[3].Frames[1].Transparency = RGB(240,240,240);
	SpriteList[8].Animations[3].Frames[1].hFlip = false;
	SpriteList[8].Animations[3].Frames[1].vFlip = false;
	SpriteList[8].Animations[3].Frames[1].zRotation = 0;
	SpriteList[8].Animations[3].Frames[1].HotSpot[0].x = 400;
	SpriteList[8].Animations[3].Frames[1].HotSpot[0].y = 300;
	::SetRect( &SpriteList[8].Animations[3].Frames[1].BBox, 0, 0, 799,599);
	SpriteList[8].Animations[3].Frames[1].centerX = 400;
	SpriteList[8].Animations[3].Frames[1].centerY = 300;
	SpriteList[8].Animations[3].Frames[1].PegRegistered = false;
	SpriteList[8].Animations[3].Frames[1].useTransparency = false;


	SpriteList[8].Animations[4].TotalFrames=2;
	SpriteList[8].Animations[4].ConnectTo = 0;
	SpriteList[8].Animations[4].Frames = new FrameElem[2];

	SpriteList[8].Animations[4].Frames[0].BitmapName = "Win 1.bmp";
	SpriteList[8].Animations[4].Frames[0].TranslateX = 0.000;
	SpriteList[8].Animations[4].Frames[0].TranslateY = 0.000;
	SpriteList[8].Animations[4].Frames[0].Delay = 40;
	SpriteList[8].Animations[4].Frames[0].Width = 800;
	SpriteList[8].Animations[4].Frames[0].Height = 600;
	SpriteList[8].Animations[4].Frames[0].Transparency = RGB(240,240,240);
	SpriteList[8].Animations[4].Frames[0].hFlip = false;
	SpriteList[8].Animations[4].Frames[0].vFlip = false;
	SpriteList[8].Animations[4].Frames[0].zRotation = 0;
	SpriteList[8].Animations[4].Frames[0].HotSpot[0].x = 400;
	SpriteList[8].Animations[4].Frames[0].HotSpot[0].y = 300;
	::SetRect( &SpriteList[8].Animations[4].Frames[0].BBox, 0, 0, 799,599);
	SpriteList[8].Animations[4].Frames[0].centerX = 400;
	SpriteList[8].Animations[4].Frames[0].centerY = 300;
	SpriteList[8].Animations[4].Frames[0].PegRegistered = false;
	SpriteList[8].Animations[4].Frames[0].useTransparency = false;

	SpriteList[8].Animations[4].Frames[1].BitmapName = "Win 2.bmp";
	SpriteList[8].Animations[4].Frames[1].TranslateX = 0.000;
	SpriteList[8].Animations[4].Frames[1].TranslateY = 0.000;
	SpriteList[8].Animations[4].Frames[1].Delay = 40;
	SpriteList[8].Animations[4].Frames[1].Width = 800;
	SpriteList[8].Animations[4].Frames[1].Height = 600;
	SpriteList[8].Animations[4].Frames[1].Transparency = RGB(240,240,240);
	SpriteList[8].Animations[4].Frames[1].hFlip = false;
	SpriteList[8].Animations[4].Frames[1].vFlip = false;
	SpriteList[8].Animations[4].Frames[1].zRotation = 0;
	SpriteList[8].Animations[4].Frames[1].HotSpot[0].x = 400;
	SpriteList[8].Animations[4].Frames[1].HotSpot[0].y = 300;
	::SetRect( &SpriteList[8].Animations[4].Frames[1].BBox, 0, 0, 799,599);
	SpriteList[8].Animations[4].Frames[1].centerX = 400;
	SpriteList[8].Animations[4].Frames[1].centerY = 300;
	SpriteList[8].Animations[4].Frames[1].PegRegistered = false;
	SpriteList[8].Animations[4].Frames[1].useTransparency = false;


	SpriteList[8].Animations[5].TotalFrames=2;
	SpriteList[8].Animations[5].ConnectTo = 0;
	SpriteList[8].Animations[5].Frames = new FrameElem[2];

	SpriteList[8].Animations[5].Frames[0].BitmapName = "Death 1.bmp";
	SpriteList[8].Animations[5].Frames[0].TranslateX = 0.000;
	SpriteList[8].Animations[5].Frames[0].TranslateY = 0.000;
	SpriteList[8].Animations[5].Frames[0].Delay = 40;
	SpriteList[8].Animations[5].Frames[0].Width = 800;
	SpriteList[8].Animations[5].Frames[0].Height = 600;
	SpriteList[8].Animations[5].Frames[0].Transparency = RGB(240,240,240);
	SpriteList[8].Animations[5].Frames[0].hFlip = false;
	SpriteList[8].Animations[5].Frames[0].vFlip = false;
	SpriteList[8].Animations[5].Frames[0].zRotation = 0;
	SpriteList[8].Animations[5].Frames[0].HotSpot[0].x = 400;
	SpriteList[8].Animations[5].Frames[0].HotSpot[0].y = 300;
	::SetRect( &SpriteList[8].Animations[5].Frames[0].BBox, 0, 0, 799,599);
	SpriteList[8].Animations[5].Frames[0].centerX = 400;
	SpriteList[8].Animations[5].Frames[0].centerY = 300;
	SpriteList[8].Animations[5].Frames[0].PegRegistered = false;
	SpriteList[8].Animations[5].Frames[0].useTransparency = false;

	SpriteList[8].Animations[5].Frames[1].BitmapName = "Death 2.bmp";
	SpriteList[8].Animations[5].Frames[1].TranslateX = 0.000;
	SpriteList[8].Animations[5].Frames[1].TranslateY = 0.000;
	SpriteList[8].Animations[5].Frames[1].Delay = 40;
	SpriteList[8].Animations[5].Frames[1].Width = 800;
	SpriteList[8].Animations[5].Frames[1].Height = 600;
	SpriteList[8].Animations[5].Frames[1].Transparency = RGB(240,240,240);
	SpriteList[8].Animations[5].Frames[1].hFlip = false;
	SpriteList[8].Animations[5].Frames[1].vFlip = false;
	SpriteList[8].Animations[5].Frames[1].zRotation = 0;
	SpriteList[8].Animations[5].Frames[1].HotSpot[0].x = 400;
	SpriteList[8].Animations[5].Frames[1].HotSpot[0].y = 300;
	::SetRect( &SpriteList[8].Animations[5].Frames[1].BBox, 0, 0, 799,599);
	SpriteList[8].Animations[5].Frames[1].centerX = 400;
	SpriteList[8].Animations[5].Frames[1].centerY = 300;
	SpriteList[8].Animations[5].Frames[1].PegRegistered = false;
	SpriteList[8].Animations[5].Frames[1].useTransparency = false;


	SpriteList[8].Animations[6].TotalFrames=1;
	SpriteList[8].Animations[6].ConnectTo = 0;
	SpriteList[8].Animations[6].Frames = new FrameElem[1];

	SpriteList[8].Animations[6].Frames[0].BitmapName = "Intro Text.bmp";
	SpriteList[8].Animations[6].Frames[0].TranslateX = 0.000;
	SpriteList[8].Animations[6].Frames[0].TranslateY = 0.000;
	SpriteList[8].Animations[6].Frames[0].Delay = 1;
	SpriteList[8].Animations[6].Frames[0].Width = 800;
	SpriteList[8].Animations[6].Frames[0].Height = 1151;
	SpriteList[8].Animations[6].Frames[0].Transparency = RGB(240,240,240);
	SpriteList[8].Animations[6].Frames[0].hFlip = false;
	SpriteList[8].Animations[6].Frames[0].vFlip = false;
	SpriteList[8].Animations[6].Frames[0].zRotation = 0;
	SpriteList[8].Animations[6].Frames[0].HotSpot[0].x = 400;
	SpriteList[8].Animations[6].Frames[0].HotSpot[0].y = 575;
	::SetRect( &SpriteList[8].Animations[6].Frames[0].BBox, 0, 0, 799,1150);
	SpriteList[8].Animations[6].Frames[0].centerX = 400;
	SpriteList[8].Animations[6].Frames[0].centerY = 575;
	SpriteList[8].Animations[6].Frames[0].PegRegistered = false;
	SpriteList[8].Animations[6].Frames[0].useTransparency = false;



}

void LoadAnimation_Win(GameNode* gn)
{
	SpriteList[8].TotalAnimations = 7;
	SpriteList[8].Animations = new AnimationElem[7];

	SpriteList[8].Animations[0].TotalFrames=2;
	SpriteList[8].Animations[0].ConnectTo = 0;
	SpriteList[8].Animations[0].Frames = new FrameElem[2];

	SpriteList[8].Animations[0].Frames[0].BitmapName = "Menu 1.bmp";
	SpriteList[8].Animations[0].Frames[0].TranslateX = 0.000;
	SpriteList[8].Animations[0].Frames[0].TranslateY = 0.000;
	SpriteList[8].Animations[0].Frames[0].Delay = 20;
	SpriteList[8].Animations[0].Frames[0].Width = 800;
	SpriteList[8].Animations[0].Frames[0].Height = 600;
	SpriteList[8].Animations[0].Frames[0].Transparency = RGB(240,240,240);
	SpriteList[8].Animations[0].Frames[0].hFlip = false;
	SpriteList[8].Animations[0].Frames[0].vFlip = false;
	SpriteList[8].Animations[0].Frames[0].zRotation = 0;
	SpriteList[8].Animations[0].Frames[0].HotSpot[0].x = 400;
	SpriteList[8].Animations[0].Frames[0].HotSpot[0].y = 300;
	::SetRect( &SpriteList[8].Animations[0].Frames[0].BBox, 0, 0, 799,599);
	SpriteList[8].Animations[0].Frames[0].centerX = 400;
	SpriteList[8].Animations[0].Frames[0].centerY = 300;
	SpriteList[8].Animations[0].Frames[0].PegRegistered = false;
	SpriteList[8].Animations[0].Frames[0].useTransparency = false;

	SpriteList[8].Animations[0].Frames[1].BitmapName = "Menu 2.bmp";
	SpriteList[8].Animations[0].Frames[1].TranslateX = 0.000;
	SpriteList[8].Animations[0].Frames[1].TranslateY = 0.000;
	SpriteList[8].Animations[0].Frames[1].Delay = 20;
	SpriteList[8].Animations[0].Frames[1].Width = 800;
	SpriteList[8].Animations[0].Frames[1].Height = 600;
	SpriteList[8].Animations[0].Frames[1].Transparency = RGB(240,240,240);
	SpriteList[8].Animations[0].Frames[1].hFlip = false;
	SpriteList[8].Animations[0].Frames[1].vFlip = false;
	SpriteList[8].Animations[0].Frames[1].zRotation = 0;
	SpriteList[8].Animations[0].Frames[1].HotSpot[0].x = 400;
	SpriteList[8].Animations[0].Frames[1].HotSpot[0].y = 300;
	::SetRect( &SpriteList[8].Animations[0].Frames[1].BBox, 0, 0, 799,599);
	SpriteList[8].Animations[0].Frames[1].centerX = 400;
	SpriteList[8].Animations[0].Frames[1].centerY = 300;
	SpriteList[8].Animations[0].Frames[1].PegRegistered = false;
	SpriteList[8].Animations[0].Frames[1].useTransparency = false;


	SpriteList[8].Animations[1].TotalFrames=1;
	SpriteList[8].Animations[1].ConnectTo = 0;
	SpriteList[8].Animations[1].Frames = new FrameElem[1];

	SpriteList[8].Animations[1].Frames[0].BitmapName = "Info Menu 1.bmp";
	SpriteList[8].Animations[1].Frames[0].TranslateX = 0.000;
	SpriteList[8].Animations[1].Frames[0].TranslateY = 0.000;
	SpriteList[8].Animations[1].Frames[0].Delay = 1;
	SpriteList[8].Animations[1].Frames[0].Width = 800;
	SpriteList[8].Animations[1].Frames[0].Height = 600;
	SpriteList[8].Animations[1].Frames[0].Transparency = RGB(240,240,240);
	SpriteList[8].Animations[1].Frames[0].hFlip = false;
	SpriteList[8].Animations[1].Frames[0].vFlip = false;
	SpriteList[8].Animations[1].Frames[0].zRotation = 0;
	SpriteList[8].Animations[1].Frames[0].HotSpot[0].x = 400;
	SpriteList[8].Animations[1].Frames[0].HotSpot[0].y = 300;
	::SetRect( &SpriteList[8].Animations[1].Frames[0].BBox, 0, 0, 799,599);
	SpriteList[8].Animations[1].Frames[0].centerX = 400;
	SpriteList[8].Animations[1].Frames[0].centerY = 300;
	SpriteList[8].Animations[1].Frames[0].PegRegistered = false;
	SpriteList[8].Animations[1].Frames[0].useTransparency = false;


	SpriteList[8].Animations[2].TotalFrames=2;
	SpriteList[8].Animations[2].ConnectTo = 0;
	SpriteList[8].Animations[2].Frames = new FrameElem[2];

	SpriteList[8].Animations[2].Frames[0].BitmapName = "Credits 1.bmp";
	SpriteList[8].Animations[2].Frames[0].TranslateX = 0.000;
	SpriteList[8].Animations[2].Frames[0].TranslateY = 0.000;
	SpriteList[8].Animations[2].Frames[0].Delay = 20;
	SpriteList[8].Animations[2].Frames[0].Width = 800;
	SpriteList[8].Animations[2].Frames[0].Height = 600;
	SpriteList[8].Animations[2].Frames[0].Transparency = RGB(240,240,240);
	SpriteList[8].Animations[2].Frames[0].hFlip = false;
	SpriteList[8].Animations[2].Frames[0].vFlip = false;
	SpriteList[8].Animations[2].Frames[0].zRotation = 0;
	SpriteList[8].Animations[2].Frames[0].HotSpot[0].x = 400;
	SpriteList[8].Animations[2].Frames[0].HotSpot[0].y = 300;
	::SetRect( &SpriteList[8].Animations[2].Frames[0].BBox, 0, 0, 799,599);
	SpriteList[8].Animations[2].Frames[0].centerX = 400;
	SpriteList[8].Animations[2].Frames[0].centerY = 300;
	SpriteList[8].Animations[2].Frames[0].PegRegistered = false;
	SpriteList[8].Animations[2].Frames[0].useTransparency = false;

	SpriteList[8].Animations[2].Frames[1].BitmapName = "Credits 2.bmp";
	SpriteList[8].Animations[2].Frames[1].TranslateX = 0.000;
	SpriteList[8].Animations[2].Frames[1].TranslateY = 0.000;
	SpriteList[8].Animations[2].Frames[1].Delay = 20;
	SpriteList[8].Animations[2].Frames[1].Width = 800;
	SpriteList[8].Animations[2].Frames[1].Height = 600;
	SpriteList[8].Animations[2].Frames[1].Transparency = RGB(240,240,240);
	SpriteList[8].Animations[2].Frames[1].hFlip = false;
	SpriteList[8].Animations[2].Frames[1].vFlip = false;
	SpriteList[8].Animations[2].Frames[1].zRotation = 0;
	SpriteList[8].Animations[2].Frames[1].HotSpot[0].x = 400;
	SpriteList[8].Animations[2].Frames[1].HotSpot[0].y = 300;
	::SetRect( &SpriteList[8].Animations[2].Frames[1].BBox, 0, 0, 799,599);
	SpriteList[8].Animations[2].Frames[1].centerX = 400;
	SpriteList[8].Animations[2].Frames[1].centerY = 300;
	SpriteList[8].Animations[2].Frames[1].PegRegistered = false;
	SpriteList[8].Animations[2].Frames[1].useTransparency = false;


	SpriteList[8].Animations[3].TotalFrames=2;
	SpriteList[8].Animations[3].ConnectTo = 0;
	SpriteList[8].Animations[3].Frames = new FrameElem[2];

	SpriteList[8].Animations[3].Frames[0].BitmapName = "Difficulty 1.bmp";
	SpriteList[8].Animations[3].Frames[0].TranslateX = 0.000;
	SpriteList[8].Animations[3].Frames[0].TranslateY = 0.000;
	SpriteList[8].Animations[3].Frames[0].Delay = 25;
	SpriteList[8].Animations[3].Frames[0].Width = 800;
	SpriteList[8].Animations[3].Frames[0].Height = 600;
	SpriteList[8].Animations[3].Frames[0].Transparency = RGB(240,240,240);
	SpriteList[8].Animations[3].Frames[0].hFlip = false;
	SpriteList[8].Animations[3].Frames[0].vFlip = false;
	SpriteList[8].Animations[3].Frames[0].zRotation = 0;
	SpriteList[8].Animations[3].Frames[0].HotSpot[0].x = 400;
	SpriteList[8].Animations[3].Frames[0].HotSpot[0].y = 300;
	::SetRect( &SpriteList[8].Animations[3].Frames[0].BBox, 0, 0, 799,599);
	SpriteList[8].Animations[3].Frames[0].centerX = 400;
	SpriteList[8].Animations[3].Frames[0].centerY = 300;
	SpriteList[8].Animations[3].Frames[0].PegRegistered = false;
	SpriteList[8].Animations[3].Frames[0].useTransparency = false;

	SpriteList[8].Animations[3].Frames[1].BitmapName = "Difficulty 2.bmp";
	SpriteList[8].Animations[3].Frames[1].TranslateX = 0.000;
	SpriteList[8].Animations[3].Frames[1].TranslateY = 0.000;
	SpriteList[8].Animations[3].Frames[1].Delay = 25;
	SpriteList[8].Animations[3].Frames[1].Width = 800;
	SpriteList[8].Animations[3].Frames[1].Height = 600;
	SpriteList[8].Animations[3].Frames[1].Transparency = RGB(240,240,240);
	SpriteList[8].Animations[3].Frames[1].hFlip = false;
	SpriteList[8].Animations[3].Frames[1].vFlip = false;
	SpriteList[8].Animations[3].Frames[1].zRotation = 0;
	SpriteList[8].Animations[3].Frames[1].HotSpot[0].x = 400;
	SpriteList[8].Animations[3].Frames[1].HotSpot[0].y = 300;
	::SetRect( &SpriteList[8].Animations[3].Frames[1].BBox, 0, 0, 799,599);
	SpriteList[8].Animations[3].Frames[1].centerX = 400;
	SpriteList[8].Animations[3].Frames[1].centerY = 300;
	SpriteList[8].Animations[3].Frames[1].PegRegistered = false;
	SpriteList[8].Animations[3].Frames[1].useTransparency = false;


	SpriteList[8].Animations[4].TotalFrames=2;
	SpriteList[8].Animations[4].ConnectTo = 0;
	SpriteList[8].Animations[4].Frames = new FrameElem[2];

	SpriteList[8].Animations[4].Frames[0].BitmapName = "Win 1.bmp";
	SpriteList[8].Animations[4].Frames[0].TranslateX = 0.000;
	SpriteList[8].Animations[4].Frames[0].TranslateY = 0.000;
	SpriteList[8].Animations[4].Frames[0].Delay = 40;
	SpriteList[8].Animations[4].Frames[0].Width = 800;
	SpriteList[8].Animations[4].Frames[0].Height = 600;
	SpriteList[8].Animations[4].Frames[0].Transparency = RGB(240,240,240);
	SpriteList[8].Animations[4].Frames[0].hFlip = false;
	SpriteList[8].Animations[4].Frames[0].vFlip = false;
	SpriteList[8].Animations[4].Frames[0].zRotation = 0;
	SpriteList[8].Animations[4].Frames[0].HotSpot[0].x = 400;
	SpriteList[8].Animations[4].Frames[0].HotSpot[0].y = 300;
	::SetRect( &SpriteList[8].Animations[4].Frames[0].BBox, 0, 0, 799,599);
	SpriteList[8].Animations[4].Frames[0].centerX = 400;
	SpriteList[8].Animations[4].Frames[0].centerY = 300;
	SpriteList[8].Animations[4].Frames[0].PegRegistered = false;
	SpriteList[8].Animations[4].Frames[0].useTransparency = false;

	SpriteList[8].Animations[4].Frames[1].BitmapName = "Win 2.bmp";
	SpriteList[8].Animations[4].Frames[1].TranslateX = 0.000;
	SpriteList[8].Animations[4].Frames[1].TranslateY = 0.000;
	SpriteList[8].Animations[4].Frames[1].Delay = 40;
	SpriteList[8].Animations[4].Frames[1].Width = 800;
	SpriteList[8].Animations[4].Frames[1].Height = 600;
	SpriteList[8].Animations[4].Frames[1].Transparency = RGB(240,240,240);
	SpriteList[8].Animations[4].Frames[1].hFlip = false;
	SpriteList[8].Animations[4].Frames[1].vFlip = false;
	SpriteList[8].Animations[4].Frames[1].zRotation = 0;
	SpriteList[8].Animations[4].Frames[1].HotSpot[0].x = 400;
	SpriteList[8].Animations[4].Frames[1].HotSpot[0].y = 300;
	::SetRect( &SpriteList[8].Animations[4].Frames[1].BBox, 0, 0, 799,599);
	SpriteList[8].Animations[4].Frames[1].centerX = 400;
	SpriteList[8].Animations[4].Frames[1].centerY = 300;
	SpriteList[8].Animations[4].Frames[1].PegRegistered = false;
	SpriteList[8].Animations[4].Frames[1].useTransparency = false;


	SpriteList[8].Animations[5].TotalFrames=2;
	SpriteList[8].Animations[5].ConnectTo = 0;
	SpriteList[8].Animations[5].Frames = new FrameElem[2];

	SpriteList[8].Animations[5].Frames[0].BitmapName = "Death 1.bmp";
	SpriteList[8].Animations[5].Frames[0].TranslateX = 0.000;
	SpriteList[8].Animations[5].Frames[0].TranslateY = 0.000;
	SpriteList[8].Animations[5].Frames[0].Delay = 40;
	SpriteList[8].Animations[5].Frames[0].Width = 800;
	SpriteList[8].Animations[5].Frames[0].Height = 600;
	SpriteList[8].Animations[5].Frames[0].Transparency = RGB(240,240,240);
	SpriteList[8].Animations[5].Frames[0].hFlip = false;
	SpriteList[8].Animations[5].Frames[0].vFlip = false;
	SpriteList[8].Animations[5].Frames[0].zRotation = 0;
	SpriteList[8].Animations[5].Frames[0].HotSpot[0].x = 400;
	SpriteList[8].Animations[5].Frames[0].HotSpot[0].y = 300;
	::SetRect( &SpriteList[8].Animations[5].Frames[0].BBox, 0, 0, 799,599);
	SpriteList[8].Animations[5].Frames[0].centerX = 400;
	SpriteList[8].Animations[5].Frames[0].centerY = 300;
	SpriteList[8].Animations[5].Frames[0].PegRegistered = false;
	SpriteList[8].Animations[5].Frames[0].useTransparency = false;

	SpriteList[8].Animations[5].Frames[1].BitmapName = "Death 2.bmp";
	SpriteList[8].Animations[5].Frames[1].TranslateX = 0.000;
	SpriteList[8].Animations[5].Frames[1].TranslateY = 0.000;
	SpriteList[8].Animations[5].Frames[1].Delay = 40;
	SpriteList[8].Animations[5].Frames[1].Width = 800;
	SpriteList[8].Animations[5].Frames[1].Height = 600;
	SpriteList[8].Animations[5].Frames[1].Transparency = RGB(240,240,240);
	SpriteList[8].Animations[5].Frames[1].hFlip = false;
	SpriteList[8].Animations[5].Frames[1].vFlip = false;
	SpriteList[8].Animations[5].Frames[1].zRotation = 0;
	SpriteList[8].Animations[5].Frames[1].HotSpot[0].x = 400;
	SpriteList[8].Animations[5].Frames[1].HotSpot[0].y = 300;
	::SetRect( &SpriteList[8].Animations[5].Frames[1].BBox, 0, 0, 799,599);
	SpriteList[8].Animations[5].Frames[1].centerX = 400;
	SpriteList[8].Animations[5].Frames[1].centerY = 300;
	SpriteList[8].Animations[5].Frames[1].PegRegistered = false;
	SpriteList[8].Animations[5].Frames[1].useTransparency = false;


	SpriteList[8].Animations[6].TotalFrames=1;
	SpriteList[8].Animations[6].ConnectTo = 0;
	SpriteList[8].Animations[6].Frames = new FrameElem[1];

	SpriteList[8].Animations[6].Frames[0].BitmapName = "Intro Text.bmp";
	SpriteList[8].Animations[6].Frames[0].TranslateX = 0.000;
	SpriteList[8].Animations[6].Frames[0].TranslateY = 0.000;
	SpriteList[8].Animations[6].Frames[0].Delay = 1;
	SpriteList[8].Animations[6].Frames[0].Width = 800;
	SpriteList[8].Animations[6].Frames[0].Height = 1151;
	SpriteList[8].Animations[6].Frames[0].Transparency = RGB(240,240,240);
	SpriteList[8].Animations[6].Frames[0].hFlip = false;
	SpriteList[8].Animations[6].Frames[0].vFlip = false;
	SpriteList[8].Animations[6].Frames[0].zRotation = 0;
	SpriteList[8].Animations[6].Frames[0].HotSpot[0].x = 400;
	SpriteList[8].Animations[6].Frames[0].HotSpot[0].y = 575;
	::SetRect( &SpriteList[8].Animations[6].Frames[0].BBox, 0, 0, 799,1150);
	SpriteList[8].Animations[6].Frames[0].centerX = 400;
	SpriteList[8].Animations[6].Frames[0].centerY = 575;
	SpriteList[8].Animations[6].Frames[0].PegRegistered = false;
	SpriteList[8].Animations[6].Frames[0].useTransparency = false;



	SpriteList[9].TotalAnimations = 3;
	SpriteList[9].Animations = new AnimationElem[3];

	SpriteList[9].Animations[0].TotalFrames=1;
	SpriteList[9].Animations[0].ConnectTo = 0;
	SpriteList[9].Animations[0].Frames = new FrameElem[1];

	SpriteList[9].Animations[0].Frames[0].BitmapName = "Button.bmp";
	SpriteList[9].Animations[0].Frames[0].TranslateX = 0.000;
	SpriteList[9].Animations[0].Frames[0].TranslateY = 0.000;
	SpriteList[9].Animations[0].Frames[0].Delay = 1;
	SpriteList[9].Animations[0].Frames[0].Width = 300;
	SpriteList[9].Animations[0].Frames[0].Height = 60;
	SpriteList[9].Animations[0].Frames[0].Transparency = RGB(0,0,0);
	SpriteList[9].Animations[0].Frames[0].hFlip = false;
	SpriteList[9].Animations[0].Frames[0].vFlip = false;
	SpriteList[9].Animations[0].Frames[0].zRotation = 0;
	SpriteList[9].Animations[0].Frames[0].HotSpot[0].x = 50;
	SpriteList[9].Animations[0].Frames[0].HotSpot[0].y = 25;
	::SetRect( &SpriteList[9].Animations[0].Frames[0].BBox, 0, 0, 299,59);
	SpriteList[9].Animations[0].Frames[0].centerX = 50;
	SpriteList[9].Animations[0].Frames[0].centerY = 25;
	SpriteList[9].Animations[0].Frames[0].PegRegistered = false;
	SpriteList[9].Animations[0].Frames[0].useTransparency = true;
	SpriteList[9].Animations[0].Frames[0].AddCollisionData(CollisionSegment(298,1,1,1,0,0));
	SpriteList[9].Animations[0].Frames[0].AddCollisionData(CollisionSegment(298,58,298,1,0,0));
	SpriteList[9].Animations[0].Frames[0].AddCollisionData(CollisionSegment(1,58,298,58,0,0));
	SpriteList[9].Animations[0].Frames[0].AddCollisionData(CollisionSegment(1,1,1,58,0,0));


	SpriteList[9].Animations[1].TotalFrames=1;
	SpriteList[9].Animations[1].ConnectTo = 0;
	SpriteList[9].Animations[1].Frames = new FrameElem[1];

	SpriteList[9].Animations[1].Frames[0].BitmapName = "Life Bar.bmp";
	SpriteList[9].Animations[1].Frames[0].TranslateX = 0.000;
	SpriteList[9].Animations[1].Frames[0].TranslateY = 0.000;
	SpriteList[9].Animations[1].Frames[0].Delay = 1;
	SpriteList[9].Animations[1].Frames[0].Width = 80;
	SpriteList[9].Animations[1].Frames[0].Height = 100;
	SpriteList[9].Animations[1].Frames[0].Transparency = RGB(240,240,240);
	SpriteList[9].Animations[1].Frames[0].hFlip = false;
	SpriteList[9].Animations[1].Frames[0].vFlip = false;
	SpriteList[9].Animations[1].Frames[0].zRotation = 0;
	SpriteList[9].Animations[1].Frames[0].HotSpot[0].x = 40;
	SpriteList[9].Animations[1].Frames[0].HotSpot[0].y = 50;
	::SetRect( &SpriteList[9].Animations[1].Frames[0].BBox, 0, 0, 79,99);
	SpriteList[9].Animations[1].Frames[0].centerX = 40;
	SpriteList[9].Animations[1].Frames[0].centerY = 50;
	SpriteList[9].Animations[1].Frames[0].PegRegistered = false;
	SpriteList[9].Animations[1].Frames[0].useTransparency = false;


	SpriteList[9].Animations[2].TotalFrames=1;
	SpriteList[9].Animations[2].ConnectTo = 0;
	SpriteList[9].Animations[2].Frames = new FrameElem[1];

	SpriteList[9].Animations[2].Frames[0].BitmapName = "Lives.bmp";
	SpriteList[9].Animations[2].Frames[0].TranslateX = 0.000;
	SpriteList[9].Animations[2].Frames[0].TranslateY = 0.000;
	SpriteList[9].Animations[2].Frames[0].Delay = 1;
	SpriteList[9].Animations[2].Frames[0].Width = 80;
	SpriteList[9].Animations[2].Frames[0].Height = 600;
	SpriteList[9].Animations[2].Frames[0].Transparency = RGB(240,240,240);
	SpriteList[9].Animations[2].Frames[0].hFlip = false;
	SpriteList[9].Animations[2].Frames[0].vFlip = false;
	SpriteList[9].Animations[2].Frames[0].zRotation = 0;
	SpriteList[9].Animations[2].Frames[0].HotSpot[0].x = 40;
	SpriteList[9].Animations[2].Frames[0].HotSpot[0].y = 300;
	::SetRect( &SpriteList[9].Animations[2].Frames[0].BBox, 0, 0, 79,599);
	SpriteList[9].Animations[2].Frames[0].centerX = 40;
	SpriteList[9].Animations[2].Frames[0].centerY = 300;
	SpriteList[9].Animations[2].Frames[0].PegRegistered = false;
	SpriteList[9].Animations[2].Frames[0].useTransparency = false;



}

void LoadAnimation_Lose(GameNode* gn)
{
	SpriteList[8].TotalAnimations = 7;
	SpriteList[8].Animations = new AnimationElem[7];

	SpriteList[8].Animations[0].TotalFrames=2;
	SpriteList[8].Animations[0].ConnectTo = 0;
	SpriteList[8].Animations[0].Frames = new FrameElem[2];

	SpriteList[8].Animations[0].Frames[0].BitmapName = "Menu 1.bmp";
	SpriteList[8].Animations[0].Frames[0].TranslateX = 0.000;
	SpriteList[8].Animations[0].Frames[0].TranslateY = 0.000;
	SpriteList[8].Animations[0].Frames[0].Delay = 20;
	SpriteList[8].Animations[0].Frames[0].Width = 800;
	SpriteList[8].Animations[0].Frames[0].Height = 600;
	SpriteList[8].Animations[0].Frames[0].Transparency = RGB(240,240,240);
	SpriteList[8].Animations[0].Frames[0].hFlip = false;
	SpriteList[8].Animations[0].Frames[0].vFlip = false;
	SpriteList[8].Animations[0].Frames[0].zRotation = 0;
	SpriteList[8].Animations[0].Frames[0].HotSpot[0].x = 400;
	SpriteList[8].Animations[0].Frames[0].HotSpot[0].y = 300;
	::SetRect( &SpriteList[8].Animations[0].Frames[0].BBox, 0, 0, 799,599);
	SpriteList[8].Animations[0].Frames[0].centerX = 400;
	SpriteList[8].Animations[0].Frames[0].centerY = 300;
	SpriteList[8].Animations[0].Frames[0].PegRegistered = false;
	SpriteList[8].Animations[0].Frames[0].useTransparency = false;

	SpriteList[8].Animations[0].Frames[1].BitmapName = "Menu 2.bmp";
	SpriteList[8].Animations[0].Frames[1].TranslateX = 0.000;
	SpriteList[8].Animations[0].Frames[1].TranslateY = 0.000;
	SpriteList[8].Animations[0].Frames[1].Delay = 20;
	SpriteList[8].Animations[0].Frames[1].Width = 800;
	SpriteList[8].Animations[0].Frames[1].Height = 600;
	SpriteList[8].Animations[0].Frames[1].Transparency = RGB(240,240,240);
	SpriteList[8].Animations[0].Frames[1].hFlip = false;
	SpriteList[8].Animations[0].Frames[1].vFlip = false;
	SpriteList[8].Animations[0].Frames[1].zRotation = 0;
	SpriteList[8].Animations[0].Frames[1].HotSpot[0].x = 400;
	SpriteList[8].Animations[0].Frames[1].HotSpot[0].y = 300;
	::SetRect( &SpriteList[8].Animations[0].Frames[1].BBox, 0, 0, 799,599);
	SpriteList[8].Animations[0].Frames[1].centerX = 400;
	SpriteList[8].Animations[0].Frames[1].centerY = 300;
	SpriteList[8].Animations[0].Frames[1].PegRegistered = false;
	SpriteList[8].Animations[0].Frames[1].useTransparency = false;


	SpriteList[8].Animations[1].TotalFrames=1;
	SpriteList[8].Animations[1].ConnectTo = 0;
	SpriteList[8].Animations[1].Frames = new FrameElem[1];

	SpriteList[8].Animations[1].Frames[0].BitmapName = "Info Menu 1.bmp";
	SpriteList[8].Animations[1].Frames[0].TranslateX = 0.000;
	SpriteList[8].Animations[1].Frames[0].TranslateY = 0.000;
	SpriteList[8].Animations[1].Frames[0].Delay = 1;
	SpriteList[8].Animations[1].Frames[0].Width = 800;
	SpriteList[8].Animations[1].Frames[0].Height = 600;
	SpriteList[8].Animations[1].Frames[0].Transparency = RGB(240,240,240);
	SpriteList[8].Animations[1].Frames[0].hFlip = false;
	SpriteList[8].Animations[1].Frames[0].vFlip = false;
	SpriteList[8].Animations[1].Frames[0].zRotation = 0;
	SpriteList[8].Animations[1].Frames[0].HotSpot[0].x = 400;
	SpriteList[8].Animations[1].Frames[0].HotSpot[0].y = 300;
	::SetRect( &SpriteList[8].Animations[1].Frames[0].BBox, 0, 0, 799,599);
	SpriteList[8].Animations[1].Frames[0].centerX = 400;
	SpriteList[8].Animations[1].Frames[0].centerY = 300;
	SpriteList[8].Animations[1].Frames[0].PegRegistered = false;
	SpriteList[8].Animations[1].Frames[0].useTransparency = false;


	SpriteList[8].Animations[2].TotalFrames=2;
	SpriteList[8].Animations[2].ConnectTo = 0;
	SpriteList[8].Animations[2].Frames = new FrameElem[2];

	SpriteList[8].Animations[2].Frames[0].BitmapName = "Credits 1.bmp";
	SpriteList[8].Animations[2].Frames[0].TranslateX = 0.000;
	SpriteList[8].Animations[2].Frames[0].TranslateY = 0.000;
	SpriteList[8].Animations[2].Frames[0].Delay = 20;
	SpriteList[8].Animations[2].Frames[0].Width = 800;
	SpriteList[8].Animations[2].Frames[0].Height = 600;
	SpriteList[8].Animations[2].Frames[0].Transparency = RGB(240,240,240);
	SpriteList[8].Animations[2].Frames[0].hFlip = false;
	SpriteList[8].Animations[2].Frames[0].vFlip = false;
	SpriteList[8].Animations[2].Frames[0].zRotation = 0;
	SpriteList[8].Animations[2].Frames[0].HotSpot[0].x = 400;
	SpriteList[8].Animations[2].Frames[0].HotSpot[0].y = 300;
	::SetRect( &SpriteList[8].Animations[2].Frames[0].BBox, 0, 0, 799,599);
	SpriteList[8].Animations[2].Frames[0].centerX = 400;
	SpriteList[8].Animations[2].Frames[0].centerY = 300;
	SpriteList[8].Animations[2].Frames[0].PegRegistered = false;
	SpriteList[8].Animations[2].Frames[0].useTransparency = false;

	SpriteList[8].Animations[2].Frames[1].BitmapName = "Credits 2.bmp";
	SpriteList[8].Animations[2].Frames[1].TranslateX = 0.000;
	SpriteList[8].Animations[2].Frames[1].TranslateY = 0.000;
	SpriteList[8].Animations[2].Frames[1].Delay = 20;
	SpriteList[8].Animations[2].Frames[1].Width = 800;
	SpriteList[8].Animations[2].Frames[1].Height = 600;
	SpriteList[8].Animations[2].Frames[1].Transparency = RGB(240,240,240);
	SpriteList[8].Animations[2].Frames[1].hFlip = false;
	SpriteList[8].Animations[2].Frames[1].vFlip = false;
	SpriteList[8].Animations[2].Frames[1].zRotation = 0;
	SpriteList[8].Animations[2].Frames[1].HotSpot[0].x = 400;
	SpriteList[8].Animations[2].Frames[1].HotSpot[0].y = 300;
	::SetRect( &SpriteList[8].Animations[2].Frames[1].BBox, 0, 0, 799,599);
	SpriteList[8].Animations[2].Frames[1].centerX = 400;
	SpriteList[8].Animations[2].Frames[1].centerY = 300;
	SpriteList[8].Animations[2].Frames[1].PegRegistered = false;
	SpriteList[8].Animations[2].Frames[1].useTransparency = false;


	SpriteList[8].Animations[3].TotalFrames=2;
	SpriteList[8].Animations[3].ConnectTo = 0;
	SpriteList[8].Animations[3].Frames = new FrameElem[2];

	SpriteList[8].Animations[3].Frames[0].BitmapName = "Difficulty 1.bmp";
	SpriteList[8].Animations[3].Frames[0].TranslateX = 0.000;
	SpriteList[8].Animations[3].Frames[0].TranslateY = 0.000;
	SpriteList[8].Animations[3].Frames[0].Delay = 25;
	SpriteList[8].Animations[3].Frames[0].Width = 800;
	SpriteList[8].Animations[3].Frames[0].Height = 600;
	SpriteList[8].Animations[3].Frames[0].Transparency = RGB(240,240,240);
	SpriteList[8].Animations[3].Frames[0].hFlip = false;
	SpriteList[8].Animations[3].Frames[0].vFlip = false;
	SpriteList[8].Animations[3].Frames[0].zRotation = 0;
	SpriteList[8].Animations[3].Frames[0].HotSpot[0].x = 400;
	SpriteList[8].Animations[3].Frames[0].HotSpot[0].y = 300;
	::SetRect( &SpriteList[8].Animations[3].Frames[0].BBox, 0, 0, 799,599);
	SpriteList[8].Animations[3].Frames[0].centerX = 400;
	SpriteList[8].Animations[3].Frames[0].centerY = 300;
	SpriteList[8].Animations[3].Frames[0].PegRegistered = false;
	SpriteList[8].Animations[3].Frames[0].useTransparency = false;

	SpriteList[8].Animations[3].Frames[1].BitmapName = "Difficulty 2.bmp";
	SpriteList[8].Animations[3].Frames[1].TranslateX = 0.000;
	SpriteList[8].Animations[3].Frames[1].TranslateY = 0.000;
	SpriteList[8].Animations[3].Frames[1].Delay = 25;
	SpriteList[8].Animations[3].Frames[1].Width = 800;
	SpriteList[8].Animations[3].Frames[1].Height = 600;
	SpriteList[8].Animations[3].Frames[1].Transparency = RGB(240,240,240);
	SpriteList[8].Animations[3].Frames[1].hFlip = false;
	SpriteList[8].Animations[3].Frames[1].vFlip = false;
	SpriteList[8].Animations[3].Frames[1].zRotation = 0;
	SpriteList[8].Animations[3].Frames[1].HotSpot[0].x = 400;
	SpriteList[8].Animations[3].Frames[1].HotSpot[0].y = 300;
	::SetRect( &SpriteList[8].Animations[3].Frames[1].BBox, 0, 0, 799,599);
	SpriteList[8].Animations[3].Frames[1].centerX = 400;
	SpriteList[8].Animations[3].Frames[1].centerY = 300;
	SpriteList[8].Animations[3].Frames[1].PegRegistered = false;
	SpriteList[8].Animations[3].Frames[1].useTransparency = false;


	SpriteList[8].Animations[4].TotalFrames=2;
	SpriteList[8].Animations[4].ConnectTo = 0;
	SpriteList[8].Animations[4].Frames = new FrameElem[2];

	SpriteList[8].Animations[4].Frames[0].BitmapName = "Win 1.bmp";
	SpriteList[8].Animations[4].Frames[0].TranslateX = 0.000;
	SpriteList[8].Animations[4].Frames[0].TranslateY = 0.000;
	SpriteList[8].Animations[4].Frames[0].Delay = 40;
	SpriteList[8].Animations[4].Frames[0].Width = 800;
	SpriteList[8].Animations[4].Frames[0].Height = 600;
	SpriteList[8].Animations[4].Frames[0].Transparency = RGB(240,240,240);
	SpriteList[8].Animations[4].Frames[0].hFlip = false;
	SpriteList[8].Animations[4].Frames[0].vFlip = false;
	SpriteList[8].Animations[4].Frames[0].zRotation = 0;
	SpriteList[8].Animations[4].Frames[0].HotSpot[0].x = 400;
	SpriteList[8].Animations[4].Frames[0].HotSpot[0].y = 300;
	::SetRect( &SpriteList[8].Animations[4].Frames[0].BBox, 0, 0, 799,599);
	SpriteList[8].Animations[4].Frames[0].centerX = 400;
	SpriteList[8].Animations[4].Frames[0].centerY = 300;
	SpriteList[8].Animations[4].Frames[0].PegRegistered = false;
	SpriteList[8].Animations[4].Frames[0].useTransparency = false;

	SpriteList[8].Animations[4].Frames[1].BitmapName = "Win 2.bmp";
	SpriteList[8].Animations[4].Frames[1].TranslateX = 0.000;
	SpriteList[8].Animations[4].Frames[1].TranslateY = 0.000;
	SpriteList[8].Animations[4].Frames[1].Delay = 40;
	SpriteList[8].Animations[4].Frames[1].Width = 800;
	SpriteList[8].Animations[4].Frames[1].Height = 600;
	SpriteList[8].Animations[4].Frames[1].Transparency = RGB(240,240,240);
	SpriteList[8].Animations[4].Frames[1].hFlip = false;
	SpriteList[8].Animations[4].Frames[1].vFlip = false;
	SpriteList[8].Animations[4].Frames[1].zRotation = 0;
	SpriteList[8].Animations[4].Frames[1].HotSpot[0].x = 400;
	SpriteList[8].Animations[4].Frames[1].HotSpot[0].y = 300;
	::SetRect( &SpriteList[8].Animations[4].Frames[1].BBox, 0, 0, 799,599);
	SpriteList[8].Animations[4].Frames[1].centerX = 400;
	SpriteList[8].Animations[4].Frames[1].centerY = 300;
	SpriteList[8].Animations[4].Frames[1].PegRegistered = false;
	SpriteList[8].Animations[4].Frames[1].useTransparency = false;


	SpriteList[8].Animations[5].TotalFrames=2;
	SpriteList[8].Animations[5].ConnectTo = 0;
	SpriteList[8].Animations[5].Frames = new FrameElem[2];

	SpriteList[8].Animations[5].Frames[0].BitmapName = "Death 1.bmp";
	SpriteList[8].Animations[5].Frames[0].TranslateX = 0.000;
	SpriteList[8].Animations[5].Frames[0].TranslateY = 0.000;
	SpriteList[8].Animations[5].Frames[0].Delay = 40;
	SpriteList[8].Animations[5].Frames[0].Width = 800;
	SpriteList[8].Animations[5].Frames[0].Height = 600;
	SpriteList[8].Animations[5].Frames[0].Transparency = RGB(240,240,240);
	SpriteList[8].Animations[5].Frames[0].hFlip = false;
	SpriteList[8].Animations[5].Frames[0].vFlip = false;
	SpriteList[8].Animations[5].Frames[0].zRotation = 0;
	SpriteList[8].Animations[5].Frames[0].HotSpot[0].x = 400;
	SpriteList[8].Animations[5].Frames[0].HotSpot[0].y = 300;
	::SetRect( &SpriteList[8].Animations[5].Frames[0].BBox, 0, 0, 799,599);
	SpriteList[8].Animations[5].Frames[0].centerX = 400;
	SpriteList[8].Animations[5].Frames[0].centerY = 300;
	SpriteList[8].Animations[5].Frames[0].PegRegistered = false;
	SpriteList[8].Animations[5].Frames[0].useTransparency = false;

	SpriteList[8].Animations[5].Frames[1].BitmapName = "Death 2.bmp";
	SpriteList[8].Animations[5].Frames[1].TranslateX = 0.000;
	SpriteList[8].Animations[5].Frames[1].TranslateY = 0.000;
	SpriteList[8].Animations[5].Frames[1].Delay = 40;
	SpriteList[8].Animations[5].Frames[1].Width = 800;
	SpriteList[8].Animations[5].Frames[1].Height = 600;
	SpriteList[8].Animations[5].Frames[1].Transparency = RGB(240,240,240);
	SpriteList[8].Animations[5].Frames[1].hFlip = false;
	SpriteList[8].Animations[5].Frames[1].vFlip = false;
	SpriteList[8].Animations[5].Frames[1].zRotation = 0;
	SpriteList[8].Animations[5].Frames[1].HotSpot[0].x = 400;
	SpriteList[8].Animations[5].Frames[1].HotSpot[0].y = 300;
	::SetRect( &SpriteList[8].Animations[5].Frames[1].BBox, 0, 0, 799,599);
	SpriteList[8].Animations[5].Frames[1].centerX = 400;
	SpriteList[8].Animations[5].Frames[1].centerY = 300;
	SpriteList[8].Animations[5].Frames[1].PegRegistered = false;
	SpriteList[8].Animations[5].Frames[1].useTransparency = false;


	SpriteList[8].Animations[6].TotalFrames=1;
	SpriteList[8].Animations[6].ConnectTo = 0;
	SpriteList[8].Animations[6].Frames = new FrameElem[1];

	SpriteList[8].Animations[6].Frames[0].BitmapName = "Intro Text.bmp";
	SpriteList[8].Animations[6].Frames[0].TranslateX = 0.000;
	SpriteList[8].Animations[6].Frames[0].TranslateY = 0.000;
	SpriteList[8].Animations[6].Frames[0].Delay = 1;
	SpriteList[8].Animations[6].Frames[0].Width = 800;
	SpriteList[8].Animations[6].Frames[0].Height = 1151;
	SpriteList[8].Animations[6].Frames[0].Transparency = RGB(240,240,240);
	SpriteList[8].Animations[6].Frames[0].hFlip = false;
	SpriteList[8].Animations[6].Frames[0].vFlip = false;
	SpriteList[8].Animations[6].Frames[0].zRotation = 0;
	SpriteList[8].Animations[6].Frames[0].HotSpot[0].x = 400;
	SpriteList[8].Animations[6].Frames[0].HotSpot[0].y = 575;
	::SetRect( &SpriteList[8].Animations[6].Frames[0].BBox, 0, 0, 799,1150);
	SpriteList[8].Animations[6].Frames[0].centerX = 400;
	SpriteList[8].Animations[6].Frames[0].centerY = 575;
	SpriteList[8].Animations[6].Frames[0].PegRegistered = false;
	SpriteList[8].Animations[6].Frames[0].useTransparency = false;



	SpriteList[9].TotalAnimations = 3;
	SpriteList[9].Animations = new AnimationElem[3];

	SpriteList[9].Animations[0].TotalFrames=1;
	SpriteList[9].Animations[0].ConnectTo = 0;
	SpriteList[9].Animations[0].Frames = new FrameElem[1];

	SpriteList[9].Animations[0].Frames[0].BitmapName = "Button.bmp";
	SpriteList[9].Animations[0].Frames[0].TranslateX = 0.000;
	SpriteList[9].Animations[0].Frames[0].TranslateY = 0.000;
	SpriteList[9].Animations[0].Frames[0].Delay = 1;
	SpriteList[9].Animations[0].Frames[0].Width = 300;
	SpriteList[9].Animations[0].Frames[0].Height = 60;
	SpriteList[9].Animations[0].Frames[0].Transparency = RGB(0,0,0);
	SpriteList[9].Animations[0].Frames[0].hFlip = false;
	SpriteList[9].Animations[0].Frames[0].vFlip = false;
	SpriteList[9].Animations[0].Frames[0].zRotation = 0;
	SpriteList[9].Animations[0].Frames[0].HotSpot[0].x = 50;
	SpriteList[9].Animations[0].Frames[0].HotSpot[0].y = 25;
	::SetRect( &SpriteList[9].Animations[0].Frames[0].BBox, 0, 0, 299,59);
	SpriteList[9].Animations[0].Frames[0].centerX = 50;
	SpriteList[9].Animations[0].Frames[0].centerY = 25;
	SpriteList[9].Animations[0].Frames[0].PegRegistered = false;
	SpriteList[9].Animations[0].Frames[0].useTransparency = true;
	SpriteList[9].Animations[0].Frames[0].AddCollisionData(CollisionSegment(298,1,1,1,0,0));
	SpriteList[9].Animations[0].Frames[0].AddCollisionData(CollisionSegment(298,58,298,1,0,0));
	SpriteList[9].Animations[0].Frames[0].AddCollisionData(CollisionSegment(1,58,298,58,0,0));
	SpriteList[9].Animations[0].Frames[0].AddCollisionData(CollisionSegment(1,1,1,58,0,0));


	SpriteList[9].Animations[1].TotalFrames=1;
	SpriteList[9].Animations[1].ConnectTo = 0;
	SpriteList[9].Animations[1].Frames = new FrameElem[1];

	SpriteList[9].Animations[1].Frames[0].BitmapName = "Life Bar.bmp";
	SpriteList[9].Animations[1].Frames[0].TranslateX = 0.000;
	SpriteList[9].Animations[1].Frames[0].TranslateY = 0.000;
	SpriteList[9].Animations[1].Frames[0].Delay = 1;
	SpriteList[9].Animations[1].Frames[0].Width = 80;
	SpriteList[9].Animations[1].Frames[0].Height = 100;
	SpriteList[9].Animations[1].Frames[0].Transparency = RGB(240,240,240);
	SpriteList[9].Animations[1].Frames[0].hFlip = false;
	SpriteList[9].Animations[1].Frames[0].vFlip = false;
	SpriteList[9].Animations[1].Frames[0].zRotation = 0;
	SpriteList[9].Animations[1].Frames[0].HotSpot[0].x = 40;
	SpriteList[9].Animations[1].Frames[0].HotSpot[0].y = 50;
	::SetRect( &SpriteList[9].Animations[1].Frames[0].BBox, 0, 0, 79,99);
	SpriteList[9].Animations[1].Frames[0].centerX = 40;
	SpriteList[9].Animations[1].Frames[0].centerY = 50;
	SpriteList[9].Animations[1].Frames[0].PegRegistered = false;
	SpriteList[9].Animations[1].Frames[0].useTransparency = false;


	SpriteList[9].Animations[2].TotalFrames=1;
	SpriteList[9].Animations[2].ConnectTo = 0;
	SpriteList[9].Animations[2].Frames = new FrameElem[1];

	SpriteList[9].Animations[2].Frames[0].BitmapName = "Lives.bmp";
	SpriteList[9].Animations[2].Frames[0].TranslateX = 0.000;
	SpriteList[9].Animations[2].Frames[0].TranslateY = 0.000;
	SpriteList[9].Animations[2].Frames[0].Delay = 1;
	SpriteList[9].Animations[2].Frames[0].Width = 80;
	SpriteList[9].Animations[2].Frames[0].Height = 600;
	SpriteList[9].Animations[2].Frames[0].Transparency = RGB(240,240,240);
	SpriteList[9].Animations[2].Frames[0].hFlip = false;
	SpriteList[9].Animations[2].Frames[0].vFlip = false;
	SpriteList[9].Animations[2].Frames[0].zRotation = 0;
	SpriteList[9].Animations[2].Frames[0].HotSpot[0].x = 40;
	SpriteList[9].Animations[2].Frames[0].HotSpot[0].y = 300;
	::SetRect( &SpriteList[9].Animations[2].Frames[0].BBox, 0, 0, 79,599);
	SpriteList[9].Animations[2].Frames[0].centerX = 40;
	SpriteList[9].Animations[2].Frames[0].centerY = 300;
	SpriteList[9].Animations[2].Frames[0].PegRegistered = false;
	SpriteList[9].Animations[2].Frames[0].useTransparency = false;



}

void LoadAnimation_Intro(GameNode* gn)
{
	SpriteList[8].TotalAnimations = 7;
	SpriteList[8].Animations = new AnimationElem[7];

	SpriteList[8].Animations[0].TotalFrames=2;
	SpriteList[8].Animations[0].ConnectTo = 0;
	SpriteList[8].Animations[0].Frames = new FrameElem[2];

	SpriteList[8].Animations[0].Frames[0].BitmapName = "Menu 1.bmp";
	SpriteList[8].Animations[0].Frames[0].TranslateX = 0.000;
	SpriteList[8].Animations[0].Frames[0].TranslateY = 0.000;
	SpriteList[8].Animations[0].Frames[0].Delay = 20;
	SpriteList[8].Animations[0].Frames[0].Width = 800;
	SpriteList[8].Animations[0].Frames[0].Height = 600;
	SpriteList[8].Animations[0].Frames[0].Transparency = RGB(240,240,240);
	SpriteList[8].Animations[0].Frames[0].hFlip = false;
	SpriteList[8].Animations[0].Frames[0].vFlip = false;
	SpriteList[8].Animations[0].Frames[0].zRotation = 0;
	SpriteList[8].Animations[0].Frames[0].HotSpot[0].x = 400;
	SpriteList[8].Animations[0].Frames[0].HotSpot[0].y = 300;
	::SetRect( &SpriteList[8].Animations[0].Frames[0].BBox, 0, 0, 799,599);
	SpriteList[8].Animations[0].Frames[0].centerX = 400;
	SpriteList[8].Animations[0].Frames[0].centerY = 300;
	SpriteList[8].Animations[0].Frames[0].PegRegistered = false;
	SpriteList[8].Animations[0].Frames[0].useTransparency = false;

	SpriteList[8].Animations[0].Frames[1].BitmapName = "Menu 2.bmp";
	SpriteList[8].Animations[0].Frames[1].TranslateX = 0.000;
	SpriteList[8].Animations[0].Frames[1].TranslateY = 0.000;
	SpriteList[8].Animations[0].Frames[1].Delay = 20;
	SpriteList[8].Animations[0].Frames[1].Width = 800;
	SpriteList[8].Animations[0].Frames[1].Height = 600;
	SpriteList[8].Animations[0].Frames[1].Transparency = RGB(240,240,240);
	SpriteList[8].Animations[0].Frames[1].hFlip = false;
	SpriteList[8].Animations[0].Frames[1].vFlip = false;
	SpriteList[8].Animations[0].Frames[1].zRotation = 0;
	SpriteList[8].Animations[0].Frames[1].HotSpot[0].x = 400;
	SpriteList[8].Animations[0].Frames[1].HotSpot[0].y = 300;
	::SetRect( &SpriteList[8].Animations[0].Frames[1].BBox, 0, 0, 799,599);
	SpriteList[8].Animations[0].Frames[1].centerX = 400;
	SpriteList[8].Animations[0].Frames[1].centerY = 300;
	SpriteList[8].Animations[0].Frames[1].PegRegistered = false;
	SpriteList[8].Animations[0].Frames[1].useTransparency = false;


	SpriteList[8].Animations[1].TotalFrames=1;
	SpriteList[8].Animations[1].ConnectTo = 0;
	SpriteList[8].Animations[1].Frames = new FrameElem[1];

	SpriteList[8].Animations[1].Frames[0].BitmapName = "Info Menu 1.bmp";
	SpriteList[8].Animations[1].Frames[0].TranslateX = 0.000;
	SpriteList[8].Animations[1].Frames[0].TranslateY = 0.000;
	SpriteList[8].Animations[1].Frames[0].Delay = 1;
	SpriteList[8].Animations[1].Frames[0].Width = 800;
	SpriteList[8].Animations[1].Frames[0].Height = 600;
	SpriteList[8].Animations[1].Frames[0].Transparency = RGB(240,240,240);
	SpriteList[8].Animations[1].Frames[0].hFlip = false;
	SpriteList[8].Animations[1].Frames[0].vFlip = false;
	SpriteList[8].Animations[1].Frames[0].zRotation = 0;
	SpriteList[8].Animations[1].Frames[0].HotSpot[0].x = 400;
	SpriteList[8].Animations[1].Frames[0].HotSpot[0].y = 300;
	::SetRect( &SpriteList[8].Animations[1].Frames[0].BBox, 0, 0, 799,599);
	SpriteList[8].Animations[1].Frames[0].centerX = 400;
	SpriteList[8].Animations[1].Frames[0].centerY = 300;
	SpriteList[8].Animations[1].Frames[0].PegRegistered = false;
	SpriteList[8].Animations[1].Frames[0].useTransparency = false;


	SpriteList[8].Animations[2].TotalFrames=2;
	SpriteList[8].Animations[2].ConnectTo = 0;
	SpriteList[8].Animations[2].Frames = new FrameElem[2];

	SpriteList[8].Animations[2].Frames[0].BitmapName = "Credits 1.bmp";
	SpriteList[8].Animations[2].Frames[0].TranslateX = 0.000;
	SpriteList[8].Animations[2].Frames[0].TranslateY = 0.000;
	SpriteList[8].Animations[2].Frames[0].Delay = 20;
	SpriteList[8].Animations[2].Frames[0].Width = 800;
	SpriteList[8].Animations[2].Frames[0].Height = 600;
	SpriteList[8].Animations[2].Frames[0].Transparency = RGB(240,240,240);
	SpriteList[8].Animations[2].Frames[0].hFlip = false;
	SpriteList[8].Animations[2].Frames[0].vFlip = false;
	SpriteList[8].Animations[2].Frames[0].zRotation = 0;
	SpriteList[8].Animations[2].Frames[0].HotSpot[0].x = 400;
	SpriteList[8].Animations[2].Frames[0].HotSpot[0].y = 300;
	::SetRect( &SpriteList[8].Animations[2].Frames[0].BBox, 0, 0, 799,599);
	SpriteList[8].Animations[2].Frames[0].centerX = 400;
	SpriteList[8].Animations[2].Frames[0].centerY = 300;
	SpriteList[8].Animations[2].Frames[0].PegRegistered = false;
	SpriteList[8].Animations[2].Frames[0].useTransparency = false;

	SpriteList[8].Animations[2].Frames[1].BitmapName = "Credits 2.bmp";
	SpriteList[8].Animations[2].Frames[1].TranslateX = 0.000;
	SpriteList[8].Animations[2].Frames[1].TranslateY = 0.000;
	SpriteList[8].Animations[2].Frames[1].Delay = 20;
	SpriteList[8].Animations[2].Frames[1].Width = 800;
	SpriteList[8].Animations[2].Frames[1].Height = 600;
	SpriteList[8].Animations[2].Frames[1].Transparency = RGB(240,240,240);
	SpriteList[8].Animations[2].Frames[1].hFlip = false;
	SpriteList[8].Animations[2].Frames[1].vFlip = false;
	SpriteList[8].Animations[2].Frames[1].zRotation = 0;
	SpriteList[8].Animations[2].Frames[1].HotSpot[0].x = 400;
	SpriteList[8].Animations[2].Frames[1].HotSpot[0].y = 300;
	::SetRect( &SpriteList[8].Animations[2].Frames[1].BBox, 0, 0, 799,599);
	SpriteList[8].Animations[2].Frames[1].centerX = 400;
	SpriteList[8].Animations[2].Frames[1].centerY = 300;
	SpriteList[8].Animations[2].Frames[1].PegRegistered = false;
	SpriteList[8].Animations[2].Frames[1].useTransparency = false;


	SpriteList[8].Animations[3].TotalFrames=2;
	SpriteList[8].Animations[3].ConnectTo = 0;
	SpriteList[8].Animations[3].Frames = new FrameElem[2];

	SpriteList[8].Animations[3].Frames[0].BitmapName = "Difficulty 1.bmp";
	SpriteList[8].Animations[3].Frames[0].TranslateX = 0.000;
	SpriteList[8].Animations[3].Frames[0].TranslateY = 0.000;
	SpriteList[8].Animations[3].Frames[0].Delay = 25;
	SpriteList[8].Animations[3].Frames[0].Width = 800;
	SpriteList[8].Animations[3].Frames[0].Height = 600;
	SpriteList[8].Animations[3].Frames[0].Transparency = RGB(240,240,240);
	SpriteList[8].Animations[3].Frames[0].hFlip = false;
	SpriteList[8].Animations[3].Frames[0].vFlip = false;
	SpriteList[8].Animations[3].Frames[0].zRotation = 0;
	SpriteList[8].Animations[3].Frames[0].HotSpot[0].x = 400;
	SpriteList[8].Animations[3].Frames[0].HotSpot[0].y = 300;
	::SetRect( &SpriteList[8].Animations[3].Frames[0].BBox, 0, 0, 799,599);
	SpriteList[8].Animations[3].Frames[0].centerX = 400;
	SpriteList[8].Animations[3].Frames[0].centerY = 300;
	SpriteList[8].Animations[3].Frames[0].PegRegistered = false;
	SpriteList[8].Animations[3].Frames[0].useTransparency = false;

	SpriteList[8].Animations[3].Frames[1].BitmapName = "Difficulty 2.bmp";
	SpriteList[8].Animations[3].Frames[1].TranslateX = 0.000;
	SpriteList[8].Animations[3].Frames[1].TranslateY = 0.000;
	SpriteList[8].Animations[3].Frames[1].Delay = 25;
	SpriteList[8].Animations[3].Frames[1].Width = 800;
	SpriteList[8].Animations[3].Frames[1].Height = 600;
	SpriteList[8].Animations[3].Frames[1].Transparency = RGB(240,240,240);
	SpriteList[8].Animations[3].Frames[1].hFlip = false;
	SpriteList[8].Animations[3].Frames[1].vFlip = false;
	SpriteList[8].Animations[3].Frames[1].zRotation = 0;
	SpriteList[8].Animations[3].Frames[1].HotSpot[0].x = 400;
	SpriteList[8].Animations[3].Frames[1].HotSpot[0].y = 300;
	::SetRect( &SpriteList[8].Animations[3].Frames[1].BBox, 0, 0, 799,599);
	SpriteList[8].Animations[3].Frames[1].centerX = 400;
	SpriteList[8].Animations[3].Frames[1].centerY = 300;
	SpriteList[8].Animations[3].Frames[1].PegRegistered = false;
	SpriteList[8].Animations[3].Frames[1].useTransparency = false;


	SpriteList[8].Animations[4].TotalFrames=2;
	SpriteList[8].Animations[4].ConnectTo = 0;
	SpriteList[8].Animations[4].Frames = new FrameElem[2];

	SpriteList[8].Animations[4].Frames[0].BitmapName = "Win 1.bmp";
	SpriteList[8].Animations[4].Frames[0].TranslateX = 0.000;
	SpriteList[8].Animations[4].Frames[0].TranslateY = 0.000;
	SpriteList[8].Animations[4].Frames[0].Delay = 40;
	SpriteList[8].Animations[4].Frames[0].Width = 800;
	SpriteList[8].Animations[4].Frames[0].Height = 600;
	SpriteList[8].Animations[4].Frames[0].Transparency = RGB(240,240,240);
	SpriteList[8].Animations[4].Frames[0].hFlip = false;
	SpriteList[8].Animations[4].Frames[0].vFlip = false;
	SpriteList[8].Animations[4].Frames[0].zRotation = 0;
	SpriteList[8].Animations[4].Frames[0].HotSpot[0].x = 400;
	SpriteList[8].Animations[4].Frames[0].HotSpot[0].y = 300;
	::SetRect( &SpriteList[8].Animations[4].Frames[0].BBox, 0, 0, 799,599);
	SpriteList[8].Animations[4].Frames[0].centerX = 400;
	SpriteList[8].Animations[4].Frames[0].centerY = 300;
	SpriteList[8].Animations[4].Frames[0].PegRegistered = false;
	SpriteList[8].Animations[4].Frames[0].useTransparency = false;

	SpriteList[8].Animations[4].Frames[1].BitmapName = "Win 2.bmp";
	SpriteList[8].Animations[4].Frames[1].TranslateX = 0.000;
	SpriteList[8].Animations[4].Frames[1].TranslateY = 0.000;
	SpriteList[8].Animations[4].Frames[1].Delay = 40;
	SpriteList[8].Animations[4].Frames[1].Width = 800;
	SpriteList[8].Animations[4].Frames[1].Height = 600;
	SpriteList[8].Animations[4].Frames[1].Transparency = RGB(240,240,240);
	SpriteList[8].Animations[4].Frames[1].hFlip = false;
	SpriteList[8].Animations[4].Frames[1].vFlip = false;
	SpriteList[8].Animations[4].Frames[1].zRotation = 0;
	SpriteList[8].Animations[4].Frames[1].HotSpot[0].x = 400;
	SpriteList[8].Animations[4].Frames[1].HotSpot[0].y = 300;
	::SetRect( &SpriteList[8].Animations[4].Frames[1].BBox, 0, 0, 799,599);
	SpriteList[8].Animations[4].Frames[1].centerX = 400;
	SpriteList[8].Animations[4].Frames[1].centerY = 300;
	SpriteList[8].Animations[4].Frames[1].PegRegistered = false;
	SpriteList[8].Animations[4].Frames[1].useTransparency = false;


	SpriteList[8].Animations[5].TotalFrames=2;
	SpriteList[8].Animations[5].ConnectTo = 0;
	SpriteList[8].Animations[5].Frames = new FrameElem[2];

	SpriteList[8].Animations[5].Frames[0].BitmapName = "Death 1.bmp";
	SpriteList[8].Animations[5].Frames[0].TranslateX = 0.000;
	SpriteList[8].Animations[5].Frames[0].TranslateY = 0.000;
	SpriteList[8].Animations[5].Frames[0].Delay = 40;
	SpriteList[8].Animations[5].Frames[0].Width = 800;
	SpriteList[8].Animations[5].Frames[0].Height = 600;
	SpriteList[8].Animations[5].Frames[0].Transparency = RGB(240,240,240);
	SpriteList[8].Animations[5].Frames[0].hFlip = false;
	SpriteList[8].Animations[5].Frames[0].vFlip = false;
	SpriteList[8].Animations[5].Frames[0].zRotation = 0;
	SpriteList[8].Animations[5].Frames[0].HotSpot[0].x = 400;
	SpriteList[8].Animations[5].Frames[0].HotSpot[0].y = 300;
	::SetRect( &SpriteList[8].Animations[5].Frames[0].BBox, 0, 0, 799,599);
	SpriteList[8].Animations[5].Frames[0].centerX = 400;
	SpriteList[8].Animations[5].Frames[0].centerY = 300;
	SpriteList[8].Animations[5].Frames[0].PegRegistered = false;
	SpriteList[8].Animations[5].Frames[0].useTransparency = false;

	SpriteList[8].Animations[5].Frames[1].BitmapName = "Death 2.bmp";
	SpriteList[8].Animations[5].Frames[1].TranslateX = 0.000;
	SpriteList[8].Animations[5].Frames[1].TranslateY = 0.000;
	SpriteList[8].Animations[5].Frames[1].Delay = 40;
	SpriteList[8].Animations[5].Frames[1].Width = 800;
	SpriteList[8].Animations[5].Frames[1].Height = 600;
	SpriteList[8].Animations[5].Frames[1].Transparency = RGB(240,240,240);
	SpriteList[8].Animations[5].Frames[1].hFlip = false;
	SpriteList[8].Animations[5].Frames[1].vFlip = false;
	SpriteList[8].Animations[5].Frames[1].zRotation = 0;
	SpriteList[8].Animations[5].Frames[1].HotSpot[0].x = 400;
	SpriteList[8].Animations[5].Frames[1].HotSpot[0].y = 300;
	::SetRect( &SpriteList[8].Animations[5].Frames[1].BBox, 0, 0, 799,599);
	SpriteList[8].Animations[5].Frames[1].centerX = 400;
	SpriteList[8].Animations[5].Frames[1].centerY = 300;
	SpriteList[8].Animations[5].Frames[1].PegRegistered = false;
	SpriteList[8].Animations[5].Frames[1].useTransparency = false;


	SpriteList[8].Animations[6].TotalFrames=1;
	SpriteList[8].Animations[6].ConnectTo = 0;
	SpriteList[8].Animations[6].Frames = new FrameElem[1];

	SpriteList[8].Animations[6].Frames[0].BitmapName = "Intro Text.bmp";
	SpriteList[8].Animations[6].Frames[0].TranslateX = 0.000;
	SpriteList[8].Animations[6].Frames[0].TranslateY = 0.000;
	SpriteList[8].Animations[6].Frames[0].Delay = 1;
	SpriteList[8].Animations[6].Frames[0].Width = 800;
	SpriteList[8].Animations[6].Frames[0].Height = 1151;
	SpriteList[8].Animations[6].Frames[0].Transparency = RGB(240,240,240);
	SpriteList[8].Animations[6].Frames[0].hFlip = false;
	SpriteList[8].Animations[6].Frames[0].vFlip = false;
	SpriteList[8].Animations[6].Frames[0].zRotation = 0;
	SpriteList[8].Animations[6].Frames[0].HotSpot[0].x = 400;
	SpriteList[8].Animations[6].Frames[0].HotSpot[0].y = 575;
	::SetRect( &SpriteList[8].Animations[6].Frames[0].BBox, 0, 0, 799,1150);
	SpriteList[8].Animations[6].Frames[0].centerX = 400;
	SpriteList[8].Animations[6].Frames[0].centerY = 575;
	SpriteList[8].Animations[6].Frames[0].PegRegistered = false;
	SpriteList[8].Animations[6].Frames[0].useTransparency = false;



}

