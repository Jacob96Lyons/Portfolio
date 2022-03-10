#ifndef _REFLECTION_H
#define _REFLECTION_H

#include <math.h>
#include "Collision.h"

/////////////////////////////////////////////////// Reflection Functions
Vector2D GetSegmentNormal(Point2D p1, Point2D p2);
Vector2D GetReflectedVector(Vector2D Object, Vector2D Mirror);
Vector2D Normalize(Vector2D v);

#endif