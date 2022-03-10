#include "Header.h" //uses info from the header file

/*
	function: read_double
	date created: 9/19/2019
	date lat modified: 9/23/2019
	desc: reads numbers from a file, double format
	input parameters: infile
	returns: file_double
	preconditions: file existence
	postconditions: number existence
*/
double read_double(FILE* infile) //function to open and read a floating point number from a file.txt
{
	double file_double;

	fscanf(infile, "%lf", &file_double); //tells the machine to read the next number

	return file_double; //returns info from function to main function
}

/*
	function: read_integer
	date created: 9/19/2019
	date lat modified: 9/23/2019
	desc: reads a number from a file, integer format
	input parameters: infile
	returns: file_integer
	preconditions: a file existing
	postconditions: a number existing
*/
int read_integer(FILE* infile) //function to open and read an integer from a file.txt
{
	int file_integer; //declares name for returning info to main function

	fscanf(infile, "%d", &file_integer); //tells the machine to read the next number

	return file_integer; //returns info from function to main function
}

/*
	function: calculate_sum
	date created: 9/19/2019
	date lat modified: 9/23/2019
	desc: adds numbers together
	input parameters: number1-5
	returns: sum
	preconditions: 5 numbers 
	postconditions: a single sum
*/
double calculate_sum(double number1, double number2, double number3, double number4, double number5) //function for adding and finding a sum of numbers
{
	double sum; //declares name for returning info to main function

	sum = number1 + number2 + number3 + number4 + number5; //math to add given 5 numbers

	return sum; //returns info from function to main function
}

/*
	function:calculate_mean
	date created: 9/19/2019
	date lat modified: 9/23/2019
	desc: finds a mean of numbers
	input parameters: sum, number
	returns: mean
	preconditions: sum and number defined
	postconditions: mean exists
*/
double calculate_mean(double sum, int number) //function to calculate the mean of a sum
{
	double mean; //declares name for returning info to main function
	
	if (number == 0) //tests to make sure there's no zero in the denominator 
	{
		mean = -1.0; //if there is, returns mean as -1.0
	}
	else //otherwise
	{
		mean = sum / number; //if it works fine it does the normal function
	}

	return mean; //returns info from function to main function
}

/*
	function:calculate_deviation
	date created: 9/19/2019
	date lat modified: 9/23/2019
	desc: finds difference in gpa from mean gpa
	input parameters: number, mean
	returns: deviation
	preconditions: mean is done, number is chosen 
	postconditions: deviation is calculated
*/
double calculate_deviation(double number, double mean) //funtion to find deviation from mean gpa on any given gpa
{
	double deviation; //declares name for returning info to main function

	deviation = number - mean; //calculates deviation

	return deviation; //returns info from function to main function
}

/*
	function: calculate_variance
	date created: 9/19/2019
	date lat modified: 9/23/2019
	desc: finds average difference in gpa's to the mean gpa
	input parameters: deviation1-5, number
	returns: variation
	preconditions: deviations are done, number input
	postconditions: average variation is found
*/
double calculate_variance(double deviation1, double deviation2, double deviation3, double deviation4, double deviation5, double number) //function for finding average variance in gpa to any given student
{
	double variation; //declares name for returning info to main function

	variation = ( (deviation1 * deviation1) + (deviation2 * deviation2) + (deviation3 * deviation3) + (deviation4 * deviation4) + (deviation5 * deviation5) ) / number; //long math to find the variation

	return variation; //returns info from function to main function
}

/*
	function: calculate_standard_deviation
	date created: 9/19/2019
	date lat modified: 9/23/2019
	desc: finds the standard difference in variation
	input parameters: variance
	returns: deviation
	preconditions: variance is calculated
	postconditions: deviation is given
*/
double calculate_standard_deviation(double variance) //function to calculate standard deviation from mean gpa
{
	double deviation; //declares name for returning info to main function

	deviation = (double)sqrt (variance); //calculates that average deviation

	return deviation; //returns info from function to main function
}

/*
	function: find_max
	date created: 9/19/2019
	date lat modified: 9/23/2019
	desc: finds the highesst gpa out of 5
	input parameters: number1-5
	returns: max
	preconditions: numbers
	postconditions: highest number
*/
double find_max(double number1, double number2, double number3, double number4, double number5) //function to find the highest number in a given set of numbers
{
	double the_max; //declares name for returning info to main function
	
	if (number1 > number2) //tests a to b
	{
		the_max = number1; //a is higher, passes it on 
	}
	else
	{
		the_max = number2; //f b is higher, passes it on
	}
	if (number3 > number4) //test c to d
	{
		if (number3 > the_max)
		{
			the_max = number3; //c is higher, passes it on
		}
	}
	else
	{
		if (number4 > the_max)
		{
			the_max = number4; //d is higher, passes it on
		}
	}
	if (number5 > the_max) //tests current highest number against remaining 5th number
	{
		the_max = number5; //e is higher, passes it on
	}

	return the_max; //returns info from function to main function
}

/*
	function: find_min
	date created: 9/19/2019
	date lat modified: 9/23/2019
	desc: finds the lowest number
	input parameters: number1-5
	returns: min
	preconditions: 5 numbers
	postconditions: the lowest number
*/
double find_min(double number1, double number2, double number3, double number4, double number5) //function to find lowest number in a given set 
{
	double the_min; //declares name for returning info to main function

	if (number1 < number2) //tests a to b
	{
		the_min = number1; //a is lower, passes it on
	}
	else
	{
		the_min = number2; //b is lower, passes it on
	}
	if (number3 < number4) //tests c to d
	{
		if (number3 < the_min)
		{
			the_min = number3; //c is lower, passes it on
		}
	}
	else
	{
		if (number4 < the_min)
		{
			the_min = number4; //d is lower, passes it on
		}
	}
	if (number5 < the_min) //tests lowest to final 5th option
	{
		the_min = number5; //e is lower, passes it on
	}

	return the_min; //returns info from function to main function
}

/*
	function:print_double
	date created: 9/19/2019
	date lat modified: 9/23/2019
	desc: prints numbers to a file
	input parameters: outfile, number
	returns: 0
	preconditions: file exists and a number
	postconditions: a file has a new number in it
*/
void print_double(FILE* outfile, double number) //function to print to a file.txt
{
	if (number == 0) //tests number to see if it's zero
	{
		fprintf(outfile, "\n"); //prints a new line
	}
	else //otherwise, print as normal
	{
		fprintf(outfile, "%.02lf\n", number); //tells machine to print in file.txt
	}
	return 0; //returns info from function to main function
}
