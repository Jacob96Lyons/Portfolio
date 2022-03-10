#ifndef COLLISION_H
#define COLLISION_H

#include <stdlib.h>
#include <math.h>
#include "LibraryTypes.h"

/////////////////////////////////////Functions
//Circle
int CheckPointInCircle(Point2D P, Circle2D C);
int CheckPointOnCircle(Point2D P, Circle2D C);
int CheckTwoCirclesCollision(Circle2D C1, Circle2D C2);
int CheckCircleSegmentCollision(Circle2D C, Segment2D S);

//Segment
int CheckTwoSegmentsCollision(Segment2D S1, Segment2D S2);
int CheckTwoSegmentsAreParallel(Segment2D S1, Segment2D S2);
int CheckTwoSegmentsAreOverlapping(Segment2D S1, Segment2D S2);
int CheckSegmentInsideRectangle(Segment2D S, Rectangle2D Rect);

//Line
int CheckTwoLinesIntersect(Line2D L1, Line2D L2);
int CheckTwoLinesAreParallel(Line2D L1, Line2D L2);
Point2D TwoLinesIntersection(Line2D L1, Line2D L2);
int CheckCircleLineCollision(Circle2D C, Line2D L);
int CheckTwoLinesAreCoincident(Line2D L1, Line2D L2);

//Point
int CheckPointOnSegment(Point2D P, Segment2D S);
Vector2D SubtractPoints(Point2D P1, Point2D P2);
int CheckPointInsideCircle(Point2D P, Circle2D C);
Point2D GetProjectionOnLine(Point2D M, Line2D L);
double DistancePointToLine(Point2D P, Line2D L);
int CheckPointInsideRectangle(Point2D P, Rectangle2D Rect);

//Vector
double GetLength(Vector2D V);
double CrossProduct(Vector2D V1, Vector2D V2);
double GetDotProduct(Vector2D v1, Vector2D v2);
int CheckTwoVectorAreParallel(Vector2D V1, Vector2D V2);

//Rectangle
int CheckRectanglesCollision(Rectangle2D R1, Rectangle2D R2);
int CheckRectangleCircleCollision(Rectangle2D R, Circle2D C);
int CheckRectangleSegmentCollision(Rectangle2D R, Segment2D S);
int CheckTwoRectanglesCollision(Rectangle2D R1, Rectangle2D R2);

//Aid
int SameSign(float a, float b);
double Maximum(double a, double b);
double Minimum(double a, double b);
int IsBetween(double n, double a, double b);

#endif