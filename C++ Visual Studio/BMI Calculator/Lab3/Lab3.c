//comment block

#include "Lab3.h"

double get_weight(void)
{
	double weight_lbs;

	printf("Time to take a BMI test.\n\nEnter your weight: ");
	scanf("%lf", &weight_lbs);

	return weight_lbs;
}

double get_height(void)
{
	double height;

	printf("\nEnter your height in feet: ");
	scanf("%lf", &height);

	return height;
}

double convert_feet_to_inches(double height_in_feet)
{
	double convert_feet_to_inches;

	convert_feet_to_inches = height_in_feet * 12;

	return convert_feet_to_inches;
}

double calculate_bmi(double weight_in_pounds, double height_in_inches)
{
	double BMI;

	BMI = ((weight_in_pounds / (height_in_inches * height_in_inches)) * 703);

	return BMI;
}