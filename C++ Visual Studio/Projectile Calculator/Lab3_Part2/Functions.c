#include "Header.h"

double angle(void)
{
	double theta;

	printf("Enter the angle: ");
	scanf("%lf", &theta);

	return theta;
}

double target(void)
{
	double distance;

	printf("\nEnter distance to target: ");
	scanf("%lf", &distance);

	return distance;
}

double launchspeed(void)
{
	double velocity;

	printf("\nEnter projectile velocity: ");
	scanf("%lf", &velocity);

	return velocity;
}

double flight_time(double theta, double velocity, double distance)
{
	double time;

	time = (distance) / (velocity * cos(theta * PI / 180));

	return time;
}

double height_of_impact(double velocity, double theta, double time)
{
	double height;
	
	height = (velocity * sin(theta * PI /180) * time) - ((G * time * time) / 2);

	return height;
}