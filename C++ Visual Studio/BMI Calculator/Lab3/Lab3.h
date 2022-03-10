/*
	Name: Jacob Goehring
	Date: 9/13/2019

	Lab 3

*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>

double get_weight(void);
double get_height(void);												// prompts the user for height in feet, and returns the height
double convert_feet_to_inches(double height_in_feet);					// converts the height of the user from feet to inches, and returns the height in inches
double calculate_bmi(double weight_in_pounds, double height_in_feet);	// evaluates the BMI based on weight in pounds and height in inches, and returns the BMI – call convert_feet_to_inches ()
void display_bmi(double bmi);											// display the resultant BMI value to the tenths placedouble get_weight (void) // prompts the user for weight in pounds, and returns the weight