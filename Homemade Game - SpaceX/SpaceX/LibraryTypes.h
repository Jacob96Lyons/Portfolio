#ifndef _LIBRARY_TYPES_H
#define _LIBRARY_TYPES_H

/////////////////////////////////////Structures
struct Point2D
{
	double x;
	double y;
};

struct Vector2D
{
	double x;
	double y;
};

struct Segment2D
{
	Point2D P1;
	Point2D P2;
};

struct Circle2D
{
	Point2D Center;
	double Radius;
};

struct Line2D
{
	Point2D P;
	Vector2D V;
};

struct Rectangle2D
{
	Segment2D S;
};

#endif