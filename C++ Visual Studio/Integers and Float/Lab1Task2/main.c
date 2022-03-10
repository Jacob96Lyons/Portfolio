/*******************************************************************************************

* Programmer: Jacob Goehring                                                                        *

* Class: CptS 121, Fall 2019; Lab Section 8                                               *

* Programming Assignment: Lab1Task2                                                     *

* Date: August 30, 2019                                                                            *

* Description: This a program that prompts the user for two integer numbers       *

*******************************************************************************************/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>

/*
int main(void)
{
	//we need to request memory for
	int number1_int = 0, number2_int = 0, sum_numbers = 0,
		multi_numbers = 0, div1_numbers = 0, div3_numbers = 0,
		mod_numbers = 0, evenorodd1 = 0, evenorodd2 = 0; // 2 variable declarations, reserves two memory blocks for integers and sets them to 0's
	
	double number1_float = 0, number2_float = 0.0, diff_numbers = 0, div2_numbers = 0, div4_numbers = 0,
		cast_numbers = 0; // reserves 2 for high precision

	printf("Enter two integer values: ");
	scanf("%d%d", &number1_int, &number2_int);

	printf("Enter two floating-point values: ");
	scanf("%lf%lf", &number1_float, &number2_float);
	
	sum_numbers = number1_int + number2_int;
	diff_numbers = number1_float - number2_float;
	multi_numbers = number1_int * number1_float;
	div1_numbers = number1_int / number2_int;
	div2_numbers = (double)number1_int / (double)number2_int;
	div3_numbers = number1_int / number2_float;
	div4_numbers = number1_int / number2_float;
	cast_numbers = (double)number1_int / number2_int;
	mod_numbers = (int)number1_float % (int)number2_float;
	evenorodd1 = number1_int % 2;
	evenorodd2 = number2_int % 2;

	printf("Sum of numbers: %d\nDifference in numbers: %lf\nMultiplied numbers: %d\nDivided set 1: %d %lf\nDivided set 2: %d %lf\nCast\
		division: %lf\nMod numbers: %d\n",
		sum_numbers, diff_numbers, multi_numbers, div1_numbers, div2_numbers, div3_numbers, div4_numbers, cast_numbers, mod_numbers);
	printf("Even or odd (Int 1): %d\nEven or odd (Int 2): %d\n", evenorodd1, evenorodd2);

	return 0;
}
*/

/*
int main(void)
{
	int V, I, R;

	printf("Ohm's Law Calculator\n\n");

	printf("Enter current (for I): ");
	scanf("%d", &I);

	printf("Enter resistance of current (for R): ");
	scanf("%d", &R);

	V = I * R;

	printf("\nVoltage is: %d\n", V);

	return 0;
}
*/

/*
int main(void)
{
	int P, V, R;

	printf("Joule's Law Calculator\n\n");

	printf("Enter voltage (for V): ");
	scanf("%d", &V);

	printf("Enter resistance of current (for R): ");
	scanf("%d", &R);

	P = (V * V) / R;

	printf("Total power is: %d\nIf this was float instead of int, then we would have much less loss of precision\n", P);


	return 0;
}
*/

int main(void)
{
	double x, y, a, b, c, d;

	printf("Third polynomial calculator\n\n");

	printf("Enter a: ");
	scanf("%lf", &a);

	printf("Enter b: ");
	scanf("%lf", &b);

	printf("Enter c: ");
	scanf("%lf", &c);

	printf("Enter d: ");
	scanf("%lf", &d);

	printf("Enter x: ");
	scanf("%lf", &x);

	y = 3 * (a * (x * x * x) ) + (1 / 4) * ( b * ( x * x) ) + 10 * c*x + (-5) * d;

	printf("The answer is: %lf\n", y);



	return 0;
}
