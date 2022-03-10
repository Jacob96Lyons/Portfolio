#include "Lab3.h"

int main(void)
{
	int display_bmi, weight_in_pounds, BMI, height_in_feet, height_in_inches;

	weight_in_pounds = get_weight();
	height_in_feet = get_height();
	height_in_inches = convert_feet_to_inches(height_in_feet);
	BMI = calculate_bmi(weight_in_pounds, height_in_inches);

	printf("\nYour BMI is: %d\n", BMI);
}