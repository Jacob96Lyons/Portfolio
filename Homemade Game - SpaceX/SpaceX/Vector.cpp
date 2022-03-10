#include "Collision.h"

int CheckTwoVectorAreParallel(Vector2D V1, Vector2D V2)
{
	if(V1.x*V2.y - V2.x*V1.y == 0)
		return 1;
	else
		return 0;
}

double GetDotProduct(Vector2D v1, Vector2D v2)
{
	return v1.x*v2.x+v1.y*v2.y;
}

double CrossProduct(Vector2D V1, Vector2D V2)
{
	return V1.x*V2.y - V1.y*V2.x;
}

double GetLength(Vector2D V)
{
	return sqrt(V.x*V.x+V.y*V.y);
}