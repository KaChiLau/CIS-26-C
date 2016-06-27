/**
 *Program Name:  CIS26Fall2011L43671KaChiLauLab5Ex1.c
 *Discussion:    Formatted Inputs
 */

#include <stdio.h>

void displayClassInfoKachil(void);

int extractIntegralDigitVersion1KaChil(void);

int main () {

	analyzeFloatingPointKachil();

return 0;

}

/*void displayClassInfoKachil() {

	printf("CIS 26 - C Programming\n");

	printf("L43671\n");

	printf("Laney College\n");

	printf("KaChiLau\n");

	printf("\n");

	printf("Assignment Information --\n");

	printf("  Assignment Number: Lab 05,\n");

	printf("                     Coding Assignment -- Exercise #1\n");

	printf("  Written by:        KaChiLau\n");

	printf("  Submitted Date:    November 10, 2011\n\n");

return;

}
*/
int analyzeFloatingPointKachil() {

	printf("Calling to extractIntegralDigitVersion1Kachil() -- ");

	double klA;

	int klB;

	int klC;

	printf("  Enter a floating-point + [ENTER] : ");

	scanf("%lf\n", &klA);

	printf("  Enter the integral positional digit : ");

	scanf("%d\n", &klB);

	if(klB == 1) { 

		klC = (((int) klA) / 1) % 10;
	
	} else if (klB = 2) {

		klC = (((int) klA) / 10) % 10;

	} else if ( klB = 3) {

		klC = (((int) klA) / 100) % 10;
	}

	printf("  The extracted integral digit at position %d : %d\n", klB, klC);


	return;

}




/*OUTPUT

	int klA;

	int klB;

//	displayClassInfoKachil();

	klA = analyzeFloatingPointKachil();

	klB = analyzeAnotherFloatingpointKachil();

	printf("%d\n", klA);

double klX;

	printf("Enter a floating-point + [ENTER] : ");

	scanf("%lf", &klX);

	printf("The ten digit of the integral part:");
	
	printf("%d\n", ((int) (klX / 10) % 10));

//	printf("The second most significant digit of fractional part : %d\n\n", ((int) (klX * 100) % 10))

*/