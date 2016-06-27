/**
 *Program Name:  CIS26Fall2011L43671KaChiLauLab5Ex1.c
 *Discussion:    Formatted Inputs
 */

#include <stdio.h>

//void displayClassInfoKachil(void);

int extractIntegralDigitVersion1KaChil(void);

int extractFractionalDigitVersion1KaChil(void);

int extractIntegralDigitVersion2KaChil(void);

int extractFractionalDigitVersion2KaChil(void);


int main () {

	int klResult;

	printf("Calling to extractIntegralDigitVersion1Kachil() -- \n");
	klResult = extractIntegralDigitVersion1KaChil();
	printf(" %d\n\n", klResult);

	printf("\nCalling to extractFractionalDigitVersion1KaChil() -- \n");
	klResult = extractFractionalDigitVersion1KaChil();
	printf(" %d\n\n", klResult);

	
	klResult = extractIntegralDigitVersion2KaChil();
	printf(" %d\n\n", klResult);

	
	klResult = extractFractionalDigitVersion2KaChil();
	printf(" %d\n\n", klResult);
	
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
int extractIntegralDigitVersion1KaChil() {

	double klA;
	
	int klB;

	int klC;

	printf("  Enter a floating-point + [ENTER] : ");

	scanf("%lf", &klA);

	printf("  Enter the integral positional digit : ");

	scanf("%d", &klB);

	if(klB == 1) { 

		klC = (((int) klA) / 1) % 10;
	
	} else if (klB == 2) {

		klC = (((int) klA) / 10) % 10;

	} else if ( klB == 3) {

		klC = (((int) klA) / 100) % 10;
	}

	printf("  The extracted integral digit at position %d : ", klB);

	return  klC;

}

int extractIntegralDigitVersion2KaChil() {

	double klA;
	
	int klB;

	long long int klC;

	printf("\nEnter a floating-point + [ENTER] : ");

	scanf("%Lf", &klA);

	printf("Enter the integral positional digit : ");

	scanf("%d", &klB);

	if(klB == 1) { 

		klC = (((int) klA) / 1) % 10;
	
	} else if (klB == 2) {

		klC = (((int) klA) / 10) % 10;

	} else if ( klB == 3) {

		klC = (((long int) klA) / 100) % 10;

	} else if ( klB == 4) {

		klC = (((long int) klA) / 1000) % 10;

	} else if ( klB == 5) {

		klC = (((long int) klA) / 10000) % 10;
	}

	printf("Calling to extractIntegralDigitVersion2Kachil() -- \n");

	printf("  The extracted integral digit at position %d : ", klB);

	return  klC;

}

int extractFractionalDigitVersion1KaChil() {

	long double klA;
	
	int klB;

	long long int klC;

	printf("  Enter a floating-point + [ENTER] : ");

	scanf("%Lf", &klA);

	printf("  Enter the Fractional positional digit : ");

	scanf("%d", &klB);

	if(klB == 1) { 

		klC = ((int) (klA * 10) % 10);
	
	} else if (klB == 2) {

		klC = ((int) (klA * 100) % 10);

	} else if ( klB == 3) {

		klC = ((int) (klA * 1000) % 10);

	} else if ( klB == 4) {

		klC = ((int) (klA * 10000) % 10);
	
	} else if ( klB == 5) {

		klC = ((long int) (klA * 100000) % 10);

	}

	printf("  The extracted Fractional digit at position %d : ", klB);


	return  klC;

}

int extractFractionalDigitVersion2KaChil() {

	long double klA;
	int klB;
	long long int klC;

	printf("\nEnter a floating-point + [ENTER] : ");

	scanf("%Lf", &klA);

	printf("Enter the Fractional positional digit : ");

	scanf("%d", &klB);

	if(klB == 1) { 

		klC = ((int) (klA * 10) % 10);
	
	} else if (klB == 2) {

		klC = ((int) (klA * 100) % 10);

	} else if ( klB == 3) {

		klC = ((int) (klA * 1000) % 10);

	} else if ( klB == 4) {

		klC = ((int) (klA * 10000) % 10);
	
	} else if ( klB == 5) {

		klC = ((long int) (klA * 100000) % 10);

	}

	printf("Calling to extractFractionalDigitVersion2KaChil() -- \n");

	printf("  The extracted Fractional digit at position %d : ", klB);


	return  klC;

}

/*OUTPUT

Calling to extractIntegralDigitVersion1Kachil() --
  Enter a floating-point + [ENTER] : 735.246
  Enter the integral positional digit : 3
  The extracted integral digit at position 3 :  7


Calling to extractFractionalDigitVersion1KaChil() --
  Enter a floating-point + [ENTER] : 1290.78435
  Enter the Fractional positional digit : 2
  The extracted Fractional digit at position 2 :  8


Enter a floating-point + [ENTER] : 1290.78435
Enter the integral positional digit : 2
Calling to extractIntegralDigitVersion2Kachil() --
  The extracted integral digit at position 2 :  9


Enter a floating-point + [ENTER] : 735.246
Enter the Fractional positional digit : 3
Calling to extractFractionalDigitVersion2KaChil() --
  The extracted Fractional digit at position 3 :  6


*/