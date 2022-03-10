#include "PA2.h"
/*
	function: calculate_series_resistance
	date created: 9/8/2019
	date lat modified: 9/8/2019
	desc: calculates series resistance
	input parameters: r1, r2, r3
	returns: series resistance
	preconditions: r1 r2 r3
	postconditions: series resistance
*/
int calculate_series_resistance(int r1, int r2, int r3) //function used to calculate resistance values
{
	int series_resistance;

	series_resistance = r1 + r2 + r3;

	return series_resistance;
}
/*
	function: calculate_total_sales_tax
	date created: 9/8/2019
	date lat modified: 9/8/2019
	desc: calculates total sales
	input parameters: sales_tax_rate, item_cost
	returns: calculate_total_sales_tax
	preconditions: sales tax rate, item cost
	postconditions: calculate total sales tax
*/
double calculate_total_sales_tax(double sales_tax_rate, double item_cost) //function used to calculate total sales tax
{
	double calculate_total_sales_tax;

	calculate_total_sales_tax = sales_tax_rate * item_cost;

	return calculate_total_sales_tax;
}
/*
	function: calculate_volume_pyramid
	date created: 9/8/2019
	date lat modified: 9/8/2019
	desc: calculates volume pyramid
	input parameters: l, w, h
	returns: calculate_volume_pryamid
	preconditions: l, w, h
	postconditions: calculate volume pyramid
*/
double calculate_volume_pyramid(double l, double w, double h) //function used to calculate pyramid volume
{
	double calculate_volume_pyramid;

	calculate_volume_pyramid = (l * w * h) / 3;

	return calculate_volume_pyramid;
}
/*
	function: calculate_parallel_resistance
	date created: 9/8/2019
	date lat modified: 9/8/2019
	desc: calculates parallel resistance
	input parameters: r1, r2, r3
	returns: calculate_parallel_resistance
	preconditions: r1 r2 r3 1
	postconditions: calculate parallel resistance
*/
double calculate_parallel_resistance(double r1, double r2, double r3) //function used to calculate parallel restistance
{
	double calculate_parallel_resistance;

	calculate_parallel_resistance = 1 / (1 / r1 + 1 / r2 + 1 / r3);

	return calculate_parallel_resistance;
}
/*
	function: calculate_encoded_character
	date created: 9/8/2019
	date lat modified: 9/8/2019
	desc: calculates encoded character
	input parameters: plaintext_char, shift
	returns: calculate encoded character
	preconditions: plaintext_char, a, A, shift
	postconditions: calculate encoded character
*/
char calculate_encoded_character(char plaintext_char, int shift) //function used to calculate character encoding
{
	char calculate_encoded_character;

	calculate_encoded_character = (plaintext_char - 'a') + 'A' - shift;

	return calculate_encoded_character;
}
/*
	function: calculate_distance
	date created:9/8/2019
	date lat modified: 9/8/2019
	desc: calculates distance
	input parameters: x1, x2, y1, y2
	returns: calculate_distance
	preconditions: x1 x2 y1 y2 sqrt
	postconditions: calculate distance
*/
int calculate_distance(int x1, int x2, int y1, int y2) //function used to calculate distance from one point to another
{
	int calculate_distance;

	calculate_distance = sqrt(((x1 - x2) * (x1 - x2)) + ((y1 - y2) * (y1 - y2)));

	return calculate_distance;
}
/*
	function: calculate_equation
	date created: 9/8/2019
	date lat modified: 9/8/2019
	desc: calculates equation
	input parameters: x, y, z, a 
	returns: calculate_equation
	preconditions: y, 3, 17, z, x, a, 2, PI
	postconditions: calculate equation
*/
double calculate_equation(double x, double y, double z, int a) //function used to calculate the equation
{
	double calculate_equation;

	calculate_equation = y / ((double)3 / (double)17) - z + x / ((a % 2) + PI);

	return calculate_equation;
}