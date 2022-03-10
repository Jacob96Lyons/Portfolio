#include "Collision.h"

int CheckTwoSegmentsAreParallel(Segment2D S1, Segment2D S2)
{
	Vector2D VDS1;
	Vector2D VDS2;

	VDS1 = SubtractPoints(S1.P1,S1.P2);
	VDS2 = SubtractPoints(S2.P1,S2.P2);

	if(CheckTwoVectorAreParallel(VDS1,VDS2))
		return 1;
	else 
		return 0;

}

int CheckTwoSegmentsAreOverlapping(Segment2D S1, Segment2D S2)
{
	if(
		CheckTwoSegmentsAreParallel(S1,S2) == 1 
		&& 
		(
		CheckPointOnSegment(S1.P1,S2) == 1 
		|| 
		CheckPointOnSegment(S1.P2,S2) == 1 
		|| 
		CheckPointOnSegment(S2.P1,S1) == 1 
		|| 
		CheckPointOnSegment(S2.P2,S1) == 1
		)
	)
		return 1;
	else 
		return 0;
}

int CheckTwoSegmentsCollision(Segment2D S1, Segment2D S2)
{
	Line2D L1;
	Line2D L2;

	L1.P = S1.P1;
	L2.P = S2.P1;

	L1.V = SubtractPoints(S1.P1 , S1.P2);
	L2.V = SubtractPoints(S2.P1 , S2.P2);

	if(CheckTwoSegmentsAreParallel(S1,S2))
	{
		if(CheckTwoSegmentsAreOverlapping(S1,S2))
			return 1;
		else
			return 0;
	}
	else if (CheckPointOnSegment(TwoLinesIntersection(L1,L2),S1) && 
			 CheckPointOnSegment(TwoLinesIntersection(L1,L2),S2))
		return 1;
	else 
		return 0;
}

int CheckSegmentInsideRectangle(Segment2D S, Rectangle2D Rect)
{
	if(CheckPointInsideRectangle(S.P1,Rect) &&CheckPointInsideRectangle(S.P2,Rect))
		return 1;
	else 
		return 0;
}

int CheckSegmentRectangleCollision(Segment2D S, Rectangle2D Rect)
{
	if(CheckPointInsideRectangle(S.P1,Rect) || CheckPointInsideRectangle(S.P2,Rect))
		return 1;
	else 
		return 0;
}
