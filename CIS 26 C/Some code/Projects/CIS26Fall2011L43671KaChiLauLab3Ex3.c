/**
 *Program Name:  CIS26Fall2011L43671KaChiLauLab3Ex3.c
 *Discussion:    Formatted Inputs
 */

#include <stdio.h>

int main () {

	int klA;
	int klB;
	int klC;
	int klD;

	double klY;
	double klX;

printf("CIS 26 - C Programming\n");
printf("Fall 2011\n");
printf("L43671\n");
printf("Laney College\n");
printf("KaChiLau\n");
printf("\n");
printf("Assignment Information --\n");
printf("  Assignment Number: Lab 03,\n");
printf("                     Coding Assignment -- Exercise #3\n");
printf("  Written by:        KaChiLau\n");
printf("  Submitted Date:    September 29,2011\n\n");

printf("Enter a floating-point + [ENTER] : ");
scanf("%lf", &klX);
klA = ((int)klX) / 10 % 10;
klC = klX * 100;
klD = klC % 10;
printf("The ten digit of the integral part: %d\n", klA);
printf("The second most significant digit of fractional part : %d\n\n", klD);

printf("Enter another floating-point + [ENTER] : ");
scanf("%lf", &klY);
klA = ((int)klY) / 10 % 10;
klC = klY * 100;
klD = klC % 10;
printf("The ten digit of the integral part: %d\n", klA);
printf("The second most significant digit of fractional part : %d\n\n", klD );

return 0;
}

/*OUTPUT
CIS 26 - C Programming
Fall 2011
L43671
Laney College
KaChiLau

Assignment Information --
  Assignment Number: Lab 03,
                     Coding Assignment -- Exercise #3
  Written by:        KaChiLau
  Submitted Date:    September 29,2011

Enter a floating-point + [ENTER] : 135.246
The ten digit of the integral part: 3
The second most significant digit of fractional part : 4

Enter another floating-point + [ENTER] : 296.135
The ten digit of the integral part: 9
The second most significant digit of fractional part : 3

*/