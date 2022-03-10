#include "PA2.h"

int main(void) //prompts and prints user inputs to use in other functions where individual problems are calculated
{
	int R1, R2, R3, series_resistance, shift, a;		//integers are whole numbers

	double total_sales_tax, item_cost, sales_tax_rate = 1.078,
		l, w, h, volume_pyramid, parallel_resistance, A,
		x, y, z, distance, x1, x2, y1, y2;				//floating-point for exact numbers using decimals

	char encoded_character, plaintext_character;		//for characters instead of numbers

	printf("Enter 3 resistance values: ");		//1		//here is where the "calculators" begin, going all the way until the end. each starts by asking for user input
	scanf("%d%d%d", &R1, &R2, &R3);

	series_resistance = calculate_series_resistance(R1, R2, R3); //calls on function for input

	printf("series_resistance = R1 + R2 + R3 = %d + %d + %d = %d\n", R1, R2, R3, series_resistance); // prints equation

	printf("Series Resistance: %d\n\n", series_resistance); //prints answer

	printf("Enter sale amount: ");				//2
	scanf(" %lf", &item_cost);

	total_sales_tax = calculate_total_sales_tax(sales_tax_rate, item_cost); //calls function for input

	printf("total_sales_tax = sales_tax_rate * item_cost = %lf * %lf = %lf\n", sales_tax_rate, item_cost, total_sales_tax); //prints equation

	printf("Total sale cost: %.3lf\n\n", total_sales_tax); //prints for user

	printf("Enter length, width, and height of pyramid (respectively): ");			//3
	scanf("%lf%lf%lf", &l, &w, &h);

	volume_pyramid = calculate_volume_pyramid(l, w, h); //calls function

	printf("volume_pyramid = (l * w * h) / 3 = ( %lf * %lf * %lf ) / 3 = %lf\n", l, w, h, volume_pyramid); //prints equation

	printf("Total volume of the pyramid is: %.3lf\n\n", volume_pyramid); //prints for user

	printf("Enter 3 resistor values: ");			//4
	scanf("%d%d%d", &R1, &R2, &R3);

	parallel_resistance = calculate_parallel_resistance(R1, R2, R3); //calls function

	printf("parallel_resistance = 1 / (1 / (double)R1 + 1 / (double)R2 + 1 / (double)R3) = 1 / (1 / %d + 1 / %d + 1 / %d = %lf\n", R1, R2, R3, parallel_resistance); //prints equation

	printf("The total parallel resistance is: %lf\n\n", parallel_resistance); //prints for user

	printf("Enter character: ");			//5
	scanf(" %c", &plaintext_character);

	printf("Enter shift amount: ");
	scanf("%d", &shift);

	encoded_character = calculate_encoded_character(plaintext_character, shift); //calls function

	printf("encoded_character = (plaintext_character - a) + A - shift = ( %c - %c) + %c - %d = %c\n", plaintext_character, 'a', 'A', shift, encoded_character); //prints equation

	printf("Encoded character: %c\n\n", encoded_character); //prints answer

	printf("Enter first set of coordinates on a graph: ");			//6
	scanf("%lf%lf", &x1, &y1);
	printf("Enter second set of coordinates on a graph: ");
	scanf("%lf%lf", &x2, &y2);

	distance = calculate_distance(x1, x2, y1, y2); //calls function

	printf("distance = sqrt(((x1 - x2) * (x1 - x2)) + ((y1 - y2) * (y1 - y2))) = sqrt(((%lf - %lf) * (%lf - %lf)) + ((%lf - %lf) * (%lf - %lf))) = %.03lf\n",
		x1, x2, x1, x2, y1, y2, y1, y2, distance); //prints equation

	printf("The distance between the two points: %.03lf\n\n", distance); //prints answer

	printf("Enter x: ");			//7
	scanf("%lf", &x);

	printf("Enter y: ");
	scanf("%lf", &y);

	printf("Enter z: ");
	scanf("%lf", &z);

	printf("Enter a: ");
	scanf("%d", &a);

	y = calculate_equation(x, y, z, a); //calls function

	printf("y = y / ((double)3 / (double)17) - z + x / (a % 2) + PI = %lf / (3 / 17) - %d + %d / (%d % 2) + %lf = %lf\n",
		y, z, x, a, PI, y); //prints equation

	printf("Y = %lf\n\n", y); //prints answer


	return 0; //returns nothing
}
