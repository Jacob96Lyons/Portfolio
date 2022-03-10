#include "Collision.h"

int CheckTwoLinesAreParallel(Line2D L1, Line2D L2)
{
	if(CheckTwoVectorAreParallel(L1.V,L2.V))
		return 1;
	else 
		return 0;
}

int CheckTwoLinesAreCoincident(Line2D L1, Line2D L2)
{
	Vector2D v;
	v = SubtractPoints(L1.P,L2.P);

	if(CheckTwoVectorAreParallel(L1.V,L2.V) && CheckTwoVectorAreParallel(L1.V,v))
		return 1;
	else 
		return 0;
}


int CheckTwoLinesIntersect(Line2D L1, Line2D L2)
{
	if(!CheckTwoLinesAreParallel(L1,L2) && !CheckTwoLinesAreCoincident(L1,L2))
		return 1;
	else
		return 0;
}


struct Point2D TwoLinesIntersection(Line2D L1, Line2D L2)
{
	Point2D P = {0,0}; 

	if(CheckTwoVectorAreParallel(L1.V,L2.V) == 0)
	{
		if(L1.V.x == 0)
		{
			P.x = L1.P.x;
			P.y = (L2.V.y/L2.V.x)*(L1.P.x - L2.P.x) + L2.P.y;
		}
		else if(L2.V.x == 0)
		{
			P.x = L2.P.x;
			P.y = (L1.V.y/L1.V.x)*(L2.P.x - L1.P.x) + L1.P.y;
		}
		else
		{

		double slope1 = L1.V.y/L1.V.x;
		double yintercept1 = L1.P.y - slope1*L1.P.x;
		double slope2 = L2.V.y/L2.V.x;
		double yintercept2 = L2.P.y - slope2*L2.P.x;
		
		P.x = (yintercept2-yintercept1)/(slope1-slope2);
		P.y = (yintercept2*slope1-yintercept1*slope2)/(slope1-slope2);
		}
	}

	return P;        
}

int CheckCircleLineCollision(Circle2D C, Line2D L)
{
	double a = DistancePointToLine(C.Center,L);
	if(a <= C.Radius)
		return 1;
	else 
		return 0;
}