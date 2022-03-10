#include "Header.h"

int main(void)
{
	double theta, distance, velocity, time, height;

	theta = angle();
	distance = target();
	velocity = launchspeed();
	time = flight_time(theta, velocity, distance);
	height = height_of_impact(velocity, theta, time);

	printf("\nTime of the flight: %.02lf", time);
	printf("\nHeight of Impact: %lf\n", height);

	return 0;
}