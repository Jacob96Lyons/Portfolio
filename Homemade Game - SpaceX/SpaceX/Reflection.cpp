#include <stdio.h>
#include "Reflection.h"

Vector2D GetReflectedVector(Vector2D Object, Vector2D MirrorNormal)
{
	Vector2D Reflected;
	double scale = -2*GetDotProduct(Object,MirrorNormal)/(MirrorNormal.x*MirrorNormal.x+MirrorNormal.y*MirrorNormal.y);
	
	Reflected.x = Object.x + scale*MirrorNormal.x;
	Reflected.y = Object.y + scale*MirrorNormal.y;

	return Reflected;
}
/*
// ALREADY DEFINED IN VECTOR.CPP - RJS 9/10/07
double GetDotProduct(Vector2D v1, Vector2D v2)
{
	return v1.x*v2.x+v1.y*v2.y;
}
*/

// Utility function for GetSegmentNormal
Vector2D Normalize(Vector2D v)
{
	double length = sqrt(v.x*v.x + v.y*v.y);
	Vector2D temp;
	temp.x = v.x/length;
	temp.y = v.y/length;
	return temp;
}

Vector2D GetSegmentNormal(Point2D p1, Point2D p2)
{
	Vector2D temp;
	temp.x = p1.y-p2.y;
	temp.y = p2.x-p1.x;

	return temp;
}

void PrintVector2D(Vector2D v)
{
	printf("(%lf,%lf)", v.x, v.y);
	printf("\n");
}