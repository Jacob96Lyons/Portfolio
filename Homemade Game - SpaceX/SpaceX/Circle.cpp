#include "Collision.h"

int CheckTwoCirclesCollision(Circle2D C1, Circle2D C2)
{
	if (((C1.Center.x - C2.Center.x)*(C1.Center.x - C2.Center.x) + (C1.Center.y - C2.Center.y)*(C1.Center.y - C2.Center.y)) <= (C1.Radius + C2.Radius)*(C1.Radius + C2.Radius))
		return 1;
	else
		return 0;
}

int CheckPointInCircle(Point2D P, Circle2D C)
{
	if (((P.x-C.Center.x)*(P.x-C.Center.x) + (P.y-C.Center.y)*(P.y-C.Center.y))	< C.Radius*C.Radius)
		return 1;
	else
		return 0;
}

int CheckPointOnCircle(Point2D P, Circle2D C)
{
	if (((P.x-C.Center.x)*(P.x-C.Center.x) + (P.y-C.Center.y)*(P.y-C.Center.y))	== C.Radius*C.Radius)
		return 1;
	else
		return 0;
}

int CheckCircleSegmentCollision(Circle2D C, Segment2D S)
{
	Line2D L;
	L.P = S.P1;
	L.V = SubtractPoints(S.P1,S.P2);

	if(CheckCircleLineCollision(C,L)==1)
	{
		Point2D M;
		Vector2D CM, CP1, CP2;
		M.x = (S.P1.x + S.P2.x)*0.5;
		M.y = (S.P1.y + S.P2.y)*0.5;
		CM = SubtractPoints(C.Center,M);
		CP1 = SubtractPoints(C.Center,S.P1);
		CP2 = SubtractPoints(C.Center,S.P2);

		if(CheckPointInsideCircle(S.P1,C)==1 || CheckPointInsideCircle(S.P2,C)==1
			|| CheckPointOnCircle(S.P1,C)==1 || CheckPointOnCircle(S.P2,C)==1)
			return 1;
		else if (CheckPointOnSegment(GetProjectionOnLine(C.Center,L),S)==1)
			return 1;
	}
	return 0;
}	