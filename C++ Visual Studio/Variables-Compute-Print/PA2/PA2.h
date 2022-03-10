/*
	Name: Jacob Goehring
	Date: 9/6/2019
	Assignment: PA1

	Purpose: Define variables, compute, and print expected results. Prints equations and code used with computed answers.
*/

#define _CRT_SECURE_NO_WARNINGS
#define PI 3.1415		//define value for PI

#include <stdio.h>		//standard library
#include <math.h>		//math library
//calculation functions below, more comments in PA2.c
int calculate_series_resistance(int r1, int r2, int r3);
double calculate_total_sales_tax(double sales_tax_rate, double item_cost);
double calculate_volume_pyramid(double l, double w, double h);
double calculate_parallel_resistance(double r1, double r2, double r3);
char calculate_encoded_character(char plaintext_char, int shift);
int calculate_distance(int x1, int x2, int y1, int y2);
double calculate_equation(double x, double y, double z, int a);