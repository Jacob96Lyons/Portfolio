/*
	function: read and write
	date created: 9/19/2019
	date lat modified: 9/23/2019
	desc: reads and writes in two seperate files
	input parameters: tons
	returns: tons more
	preconditions: know how to code
	postconditions: learned how to code more
*/

#define _CRT_SECURE_NO_WARNINGS //no printf/scanf errors/warnings

#include <stdio.h> //standard library
#include <math.h> //math library

double read_double(FILE* infile); //names of funtions, all found in functions.c with more info on each
int read_integer(FILE* infile);
double calculate_sum(double number1, double number2, double number3, double number4, double number5);
double calculate_mean(double sum, int number);
double calculate_deviation(double number, double mean);
double calculate_variance(double deviation1, double deviation2, double deviation3, double deviation4, double deviation5, double number);
double calculate_standard_deviation(double variance);
double find_max(double number1, double number2, double number3, double number4, double number5);
double find_min(double number1, double number2, double number3, double number4, double number5);
void print_double(FILE* outfile, double number);