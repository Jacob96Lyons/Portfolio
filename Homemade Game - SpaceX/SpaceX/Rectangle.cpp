#include "Collision.h"

int CheckRectanglesCollision(Rectangle2D R1, Rectangle2D R2)
{
	double x1min = Minimum(R1.S.P1.x,R1.S.P2.x);
	double x2min = Minimum(R2.S.P1.x,R2.S.P2.x);
	double xmin = Minimum(x1min,x2min);
	double x1max = Maximum(R1.S.P1.x,R1.S.P2.x);
	double x2max = Maximum(R2.S.P1.x,R2.S.P2.x);
	double xmax = Maximum(x1max,x2max);

	double y1min = Minimum(R1.S.P1.y,R1.S.P2.y);
	double y2min = Minimum(R2.S.P1.y,R2.S.P2.y);
	double ymin = Minimum(y1min,y2min);
	double y1max = Maximum(R1.S.P1.y,R1.S.P2.y);
	double y2max = Maximum(R2.S.P1.y,R2.S.P2.y);
	double ymax = Maximum(y1max,y2max);

	if(
		(xmax - xmin) <= (fabs(R1.S.P1.x - R1.S.P2.x) + fabs(R2.S.P1.x - R2.S.P2.x))
		&&
		(ymax - ymin) <= (fabs(R1.S.P1.y - R1.S.P2.y) + fabs(R2.S.P1.y - R2.S.P2.y))
		)
		return 1;
	else 
		return 0;
}

int CheckTwoRectanglesCollision(Rectangle2D R1, Rectangle2D R2)
{
	Point2D M11;
	Point2D M12;

	Point2D M21;
	Point2D M22;
	
	M11.x = R1.S.P1.x;
	M11.y = R1.S.P2.y;

	M12.x = R1.S.P2.x;
	M12.y = R1.S.P1.y;

	M21.x = R2.S.P1.x;
	M21.y = R2.S.P2.y;

	M22.x = R2.S.P2.x;
	M22.y = R2.S.P1.y;

	
	if(
		CheckPointInsideRectangle(R1.S.P1,R2) == 1 
		|| CheckPointInsideRectangle(R1.S.P2,R2) == 1 
		|| CheckPointInsideRectangle(M11,R2) == 1 
		|| CheckPointInsideRectangle(M12,R2) == 1
		|| CheckPointInsideRectangle(R2.S.P1,R1) == 1 
		|| CheckPointInsideRectangle(R2.S.P2,R1) == 1 
		|| CheckPointInsideRectangle(M21,R1) == 1 
		|| CheckPointInsideRectangle(M22,R1) == 1
		)
		return 1;
	else 
		return 0;
}

int CheckRectangleCircleCollision(Rectangle2D R, Circle2D C)
{
	Segment2D S1;
	Segment2D S2;
	Segment2D S3;
	Segment2D S4;
	
	S1.P1 = R.S.P1;
	S1.P2.x = R.S.P2.x;
	S1.P2.y = R.S.P1.y;

	S2.P1 = S1.P2;
	S2.P2 = R.S.P2;

	S3.P1 = S2.P2;
	S3.P2.x = R.S.P1.x;
	S3.P2.y = R.S.P2.y;

	S4.P1 = S3.P2;
	S4.P2 = S1.P1;

	if(
		CheckCircleSegmentCollision(C,S1) == 1
		|| CheckCircleSegmentCollision(C,S2) == 1
		|| CheckCircleSegmentCollision(C,S3) == 1
		|| CheckCircleSegmentCollision(C,S4) == 1
		)
		return 1;
	else 
		return 0;
}

int CheckRectangleSegmentCollision(Rectangle2D R, Segment2D S)
{
	Segment2D S1;
	Segment2D S2;
	Segment2D S3;
	Segment2D S4;
	
	S1.P1 = R.S.P1;
	S1.P2.x = R.S.P2.x;
	S1.P2.y = R.S.P1.y;

	S2.P1 = S1.P2;
	S2.P2 = R.S.P2;

	S3.P1 = S2.P2;
	S3.P2.x = R.S.P1.x;
	S3.P2.y = R.S.P2.y;

	S4.P1 = S3.P2;
	S4.P2 = S1.P1;

	if (CheckTwoSegmentsCollision(S1,S) ==1 || 
		CheckTwoSegmentsCollision(S2,S) == 1 || 
		CheckTwoSegmentsCollision(S3,S) == 1 || 
		CheckTwoSegmentsCollision(S4,S) == 1)
		return 1;
	else 
		return 0;
}

