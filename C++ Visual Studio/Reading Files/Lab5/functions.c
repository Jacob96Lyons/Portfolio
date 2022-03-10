#include "Header.h"	

double read_file(FILE* infile)
{
	double file_dub;

	fscanf(infile, "%lf", &file_dub);

	return file_dub;
}

double calc_sum(double n1, double n2, double n3, double n4)
{
	double added;

	added = n1 + n2 + n3 + n4;

	return added;
}

char tax_bracket(double money)
{
	char tb;

	if (money < 15000)
	{
		tb = 'l';
	}
	if (money >= 15000 && money < 200000)
	{
		tb = 'm';
	}
	else
	{
		if (money >= 200000)
		{
			tb = 'h';
		}
	}
	return tb;
}

double read_data(FILE* infile2)
{
	int sum = 0, data = 0, num_score = 0;
	double average = 0.0;

	while (!feof(infile2))
	{
		fscanf(infile2, "%d", &data);
		sum += data;
		++num_score;
	}

	average = (double) sum / num_score;
	
	return average;
}

double find_max(double number1, double number2, double number3, double number4)
{
	double the_max; 

	if (number1 > number2)
	{
		the_max = number1;
	}
	else
	{
		the_max = number2;
	}
	if (number3 > number4)
	{
		if (number3 > the_max)
		{
			the_max = number3;
		}
	}
	else
	{
		if (number4 > the_max)
		{
			the_max = number4;
		}
	}

	return the_max;
}

double find_min(double number1, double number2, double number3, double number4) 
{
	double the_min;

	if (number1 < number2)
	{
		the_min = number1;
	}
	else
	{
		the_min = number2;
	}
	if (number3 < number4)
	{
		if (number3 < the_min)
		{
			the_min = number3;
		}
	}
	else
	{
		if (number4 < the_min)
		{
			the_min = number4;
		}
	}

	return the_min;
}