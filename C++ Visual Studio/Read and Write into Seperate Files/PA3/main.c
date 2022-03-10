#include "Header.h" //uses info in header

/*
	function: main
	date created: 9/19/2019
	date lat modified: 9/23/2019
	desc: main function that calls on other functions
	input parameters: void
	returns: 0
	preconditions: none
	postconditions: none
*/
int main(void) //main function, where everything is done on the big picture and not small individual tasks
{
	FILE* infile = NULL, * outfile = NULL; //FILE is like int or double, but I set to NULL as in nothing (like int would be set to zero)
	int integer, sum_class; //integers where needed
	double dub, sum_gpa, sum_age, number1, number2, number3, number4, number5; //pretty much anything that doesnt have to be an int is a double (decimal)

	infile = fopen("scores.txt", "r"); //opens file.txt

	int s1_id, s1_class; //defines integers and names
	double s1_gpa, s1_age; //defines floating point and names

	s1_id = read_integer(infile); //reads student id #
	s1_gpa = read_double(infile); //reads student gpa
	s1_class = read_integer(infile); //reads student class rank
	s1_age = read_double(infile); //reads student age

	int s2_id, s2_class; //defines integers and names
	double s2_gpa, s2_age; //defines floating point and names

	s2_id = read_integer(infile); //reads student id #
	s2_gpa = read_double(infile); //reads student gpa
	s2_class = read_integer(infile); //reads student class rank
	s2_age = read_double(infile); //reads student age

	int s3_id, s3_class; //defines integers and names
	double s3_gpa, s3_age; //defines floating point and names

	s3_id = read_integer(infile); //reads student id #
	s3_gpa = read_double(infile); //reads student gpa
	s3_class = read_integer(infile); //reads student class rank
	s3_age = read_double(infile); //reads student age

	int s4_id, s4_class; //defines integers and names
	double s4_gpa, s4_age; // defines floating point and names

	s4_id = read_integer(infile); //reads student id #
	s4_gpa = read_double(infile); //reads student gpa
	s4_class = read_integer(infile); //reads student class rank
	s4_age = read_double(infile); //reads student age

	int s5_id, s5_class; //defines integers and names
	double s5_gpa, s5_age; //defines floating point and names

	s5_id = read_integer(infile); //reads student id #
	s5_gpa = read_double(infile); //reads student gpa
	s5_class = read_integer(infile); //reads student class rank
	s5_age = read_double(infile); //reads student age

	sum_gpa = calculate_sum(s1_gpa, s2_gpa, s3_gpa, s4_gpa, s5_gpa); //calls function and sends needed info for calculating a sum of gpa
	sum_class = calculate_sum(s1_class, s2_class, s3_class, s4_class, s5_class); //calls function and sends needed info for calculating a sum of class rank
	sum_age = calculate_sum(s1_age, s2_age, s3_age, s4_age, s5_age); //calls function and sends needed info for calculating a sum of age
	
	double mean_gpa, mean_class, mean_age; //defines floating point for calculating the mean of gpa, class and age

	mean_gpa = calculate_mean(sum_gpa, 5); //calls function and sends needed info for calculating a mean of the gpa
	mean_class = calculate_mean(sum_class, 5); //calls function and sends needed info for calculating a mean of the class rank
	mean_age = calculate_mean(sum_age, 5); //calls function and sends needed info for calculating a mean of the age

	double dev1, dev2, dev3, dev4, dev5; //floating point for finding each students deviation in gpa

	dev1 = calculate_deviation(s1_gpa, mean_gpa); //calls function and sends needed info for calculating student deviation, does this for each student below
	dev2 = calculate_deviation(s2_gpa, mean_gpa);
	dev3 = calculate_deviation(s3_gpa, mean_gpa);
	dev4 = calculate_deviation(s4_gpa, mean_gpa);
	dev5 = calculate_deviation(s5_gpa, mean_gpa);

	double var; //floating point for calculating variation in grades

	var = calculate_variance(dev1, dev2, dev3, dev4, dev5, 5); //calls function and sends needed info for calculating total variance

	double standard_deviation; //floating point for calculating the standard deviation

	standard_deviation = calculate_standard_deviation(var); //calls function and sends needed info for calculating the average deviation of any given student

	double max; //floating point for finding highest value

	max = find_max(s1_gpa, s2_gpa, s3_gpa, s4_gpa, s5_gpa); //calls function and sends needed info for calculating the highest grade out of the given students

	double min; //floating point for finding lowest value

	min = find_min(s1_gpa, s2_gpa, s3_gpa, s4_gpa, s5_gpa); //calls function and sends needed info for calculating the lowest grade out of the given students

	outfile = fopen("output.txt", "w"); //opens a file to write into

	print_double(outfile, mean_gpa); //sends info to function for writing in file
	print_double(outfile, mean_class); //sends info to function for writing in file
	print_double(outfile, mean_age); //sends info to function for writing in file
	print_double(outfile, 0); //sends a zero to print a blank line
	
	print_double(outfile, standard_deviation); //sends info to function for writing in file
	print_double(outfile, min); //sends info to function for writing in file
	print_double(outfile, max); //sends info to function for writing in file

	fclose(infile); //closes infile
	fclose(outfile); //closes outfile

	return 0; //returns nothing from the function
}