#include "Header.h"	

int main()
{
	FILE* infile = NULL, *infile2 = NULL, * outfile = NULL;
	
	infile = fopen("salaries.txt", "r");

	double s1, s2, s3, s4;

	s1 = read_file(infile);
	s2 = read_file(infile);
	s3 = read_file(infile);
	s4 = read_file(infile);
	printf("%lf\n%lf\n%lf\n%lf\n", s1, s2, s3, s4);

	double sum;

	sum = calc_sum(s1, s2, s3, s4);
	printf("\n%lf\n", sum);

	char bracket1, bracket2, bracket3, bracket4;

	bracket1 = tax_bracket(s1);
	bracket2 = tax_bracket(s2);
	bracket3 = tax_bracket(s3);
	bracket4 = tax_bracket(s4);
	printf("\n%c\n%c\n%c\n%c\n", bracket1, bracket2, bracket3, bracket4);

	infile2 = fopen("data.txt", "r");

	double average;

	average = read_data(infile2);

	printf("\n%lf\n", average);

	double max, min;

	max = find_max(s1, s2, s3, s4);
	min = find_min(s1, s2, s3, s4);

	printf("\n%lf\n%lf\n", max, min);

	fclose(infile);
	fclose(infile2);

	return 0;
}
