#include "Collision.h"

int SameSign(float a, float b)
{
	if(a*b >= 0)
		return 1;
	else 
		return 0;
}

double Maximum(double a, double b)
{
	if(a > b)
		return a;
	else
		return b;
}

double Minimum(double a, double b)
{
	if(a < b)
		return a;
	else
		return b;
}

int IsBetween(double n, double a, double b)
{
	if((a - n >= 0 && b - n <= 0) || (a - n <= 0 && b - n >= 0))
		return 1;
	else 
		return 0;
}