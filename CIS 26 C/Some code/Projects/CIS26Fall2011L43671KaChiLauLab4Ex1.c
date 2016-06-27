/**
 *Program Name:  CIS26Fall2011L43671KaChiLauLab4Ex1.c
 *Discussion:    Formatted Inputs
 */

#include <stdio.h>

void displayClassInfoKachil(void);

void analyzeFloatingPointKachil(float);

void analyzeAnotherFloatingpointKachil(void);


int main () {

	displayClassInfoKachil();

	analyzeFloatingPointKachil(1.23456);

	analyzeAnotherFloatingpointKachil();

return 0;

}

void displayClassInfoKachil() {

	long int klZ;

	printf("Please enter 10 digit :");

	scanf("%d", &klZ);

	printf("Here the 10 digit you inputed: %d\n.", ((int) klZ));

	//printf("CIS 26 - C Programming\n");

	//printf("L43671\n");

	//printf("Laney College\n");

	//printf("KaChiLau\n");

	//printf("\n");

	//printf("Assignment Information --\n");

	//printf("  Assignment Number: Lab 04,\n");

	//printf("                     Coding Assignment -- Exercise #1\n");

	//printf("  Written by:        KaChiLau\n");

	//printf("  Submitted Date:    October 11, 2011\n\n");

	return;

}

void analyzeFloatingPointKachil(float arg) {

	//double klX;

	//printf("Enter a floating-point + [ENTER] : ");

	//scanf("%lf", &klX);

	//printf("The ten digit of the integral part: %d\n", ((int) (klX / 10) % 10));

	printf("The second most significant digit of fractional part : %d\n\n", ((int) (arg * 100) % 10));

return;

}

void analyzeAnotherFloatingpointKachil() {
	


	//double klY;

	//printf("Enter a floating-point + [ENTER] : ");

	//scanf("%lf", &klY);

	//printf("The ten digit of the integral part: %d\n", ((int) (klY / 10) % 10));

	//printf("The second most significant digit of fractional part : %d\n\n", ((int) (klY * 100) % 10));

return ;

}


/*OUTPUT
CIS 26 - C Programming
L43671
Laney College
KaChiLau

Assignment Information --
  Assignment Number: Lab 04,
                     Coding Assignment -- Exercise #1
  Written by:        KaChiLau
  Submitted Date:    October 11, 2011

Enter a floating-point + [ENTER] : 135.246
The ten digit of the integral part: 3
The second most significant digit of fractional part : 4

Enter a floating-point + [ENTER] : 296.135
The ten digit of the integral part: 9
The second most significant digit of fractional part : 3


*/