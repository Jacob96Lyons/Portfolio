#define _CRT_SECURE_NO_WARNINGS
#define G 32.17
#define PI 3.1415


#include <stdio.h>
#include <math.h>

double angle(void);
double target(void);
double launchspeed(void);
double flight_time(double theta, double velocity, double distance);
double height_of_impact(double velocity, double theta, double time);