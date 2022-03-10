/*
	Name: Jacob Goehring
	Date: 9/6/2019

	Lab 2

*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>

int main(void)
{
	double x1, x2, y1, y2, m, xmid, ymid, perp_slope, y_int, BCS_score, harris_poll, coaches_poll, computer_ranking,
		harris_score, USA_Today, BMI, h, w, HII;

	printf("Enter the x of the first coordinate set: ");
	scanf("%lf", &x1);
	printf("Enter the y of the first coordinate set: ");
	scanf("%lf", &y1);
	printf("Enter the x of the second coordinate set: ");
	scanf("%lf", &x2);
	printf("Enter the y of the second coordinate set: ");
	scanf("%lf", &y2);

	m = ((y2 - y1) / (x2 - x1));

	printf("\nThe slope between these two points is: %.2lf\n\n", m);

	xmid = (x1 + x2) / 2;
	ymid = (y1 + y2) / 2;

	printf("The midpoint of the line segment is: x = %.2lf, y = %.2lf\n",
		xmid, ymid);

	perp_slope = -1 / m;

	printf("\nThe slope of the perpendicular bisector is: %.2lf\n",
		perp_slope);

	y_int = ymid - (m * xmid);

	printf("\nThe y intercept of the perpendicular bisector is: y = %.2lf\n",
		y_int);

	printf("\nOriginal two points: x1 = %.0lf , y1 = %.0lf | x2 = %.0lf , y2 = %.0lf\n",
		x1, y1, x2, y2);
	printf("y = %.2lfx + %.2lf\n", perp_slope, y_int);

	printf("\n\n\nTime to take a BMI test.\n\nEnter your weight: ");
	scanf("%lf", &w);
	printf("\nEnter your height (in ft): ");
	scanf("%lf", &h);

	HII = h * 12;
	BMI = ((w / (HII * HII)) * 703);

	printf("\nYour BMI is: %lf", BMI);

	printf("\n\n\nBowl Championship Series: Score Calculator\n\nEnter the Harris Score for your team: ");
	scanf("%lf", &harris_score);
	printf("\nEnter the USA Today score for your team: ");
	scanf("%lf", &USA_Today);
	printf("\nEnter the computer score for your team: ");
	scanf("%lf", &computer_ranking);

	harris_poll = harris_score / 2850;
	coaches_poll = USA_Today / 1475;
	
	BCS_score = (harris_poll + coaches_poll + computer_ranking) / 3;

	printf("\nThe BCS score is for your team: %.3lf\n", BCS_score);

	printf("\n\nIf this looks good, then I hope you have a nice day. See you next week!\n\n");

	return 0;

}