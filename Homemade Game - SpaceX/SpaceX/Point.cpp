#include "Collision.h"

int CheckPointOnSegment(Point2D P, Segment2D S)
{
	Vector2D P1P2;
	Vector2D P2P1;
	Vector2D P1P;
	Vector2D P2P;
	
	P1P2 = SubtractPoints(S.P1,S.P2);
	P2P1 = SubtractPoints(S.P2,S.P1);
	P1P = SubtractPoints(S.P1,P);
	P2P = SubtractPoints(S.P2,P);

   // Bug - Never check absolute equality with 0 when using floating point types - RJS 9/13/07
   //WRONG(GetDotProduct(P1P2,P1P) > 0 && GetDotProduct(P2P1,P2P) > 0 && P1P2.x*P1P.y - P1P2.y*P1P.x == 0)
if(GetDotProduct(P1P2,P1P) > 0 && GetDotProduct(P2P1,P2P) > 0 && fabs(P1P2.x*P1P.y - P1P2.y*P1P.x) < 0.0001)
		return 1;
	else
		return 0;
}

Vector2D SubtractPoints(Point2D P1, Point2D P2)
{
	Vector2D P1P2;

	P1P2.x = P2.x - P1.x;
	P1P2.y = P2.y - P1.y;

	return P1P2;
} 

double DistancePointToLine(Point2D P, Line2D L)
{
	double Distance; 
	if(L.V.x == 0)
		Distance = fabs(L.P.x - P.x);
	else if(L.V.y == 0)
		Distance = fabs(L.P.y - P.y);
	else
		Distance = fabs((P.y - L.P.y - (L.V.y / L.V.x)*(P.x - L.P.x)) / sqrt(1+(L.V.y/L.V.x)*(L.V.y/L.V.x)));	

	return Distance;
}

int CheckPointInsideRectangle(Point2D P, Rectangle2D Rect)
{
	if(IsBetween(P.x,Rect.S.P1.x,Rect.S.P2.x) && IsBetween(P.y,Rect.S.P1.y,Rect.S.P2.y))
		return 1;
	else 
		return 0;
}

int CheckPointInsideCircle(Point2D P, Circle2D C)
{
	if((P.x - C.Center.x)*(P.x - C.Center.x) + (P.y - C.Center.y)*(P.y - C.Center.y) - C.Radius*C.Radius < 0)
		return 1;
	else 
		return 0;
}

Point2D GetProjectionOnLine(Point2D M, Line2D L)
{
	Point2D H;
	if(M.x == L.P.x && M.y == L.P.y)
		return L.P;
	else
	{
		H.x = (L.V.y*L.V.y*L.P.x - L.V.x*L.P.y*L.V.y + L.V.x*M.y*L.V.y + M.x*L.V.x*L.V.x)/(L.V.x*L.V.x+L.V.y*L.V.y);
		H.y = -(-L.V.x*L.V.x*L.P.y-M.y*L.V.y*L.V.y-M.x*L.V.y*L.V.x+L.V.x*L.V.y*L.P.x)/(L.V.x*L.V.x+L.V.y*L.V.y);
	}
	return H;
}
