/**
 *Program Name:  CIS26Fall2011L43671KaChiLauLab3Ex3.c
 *Discussion:    Formatted Inputs
 */

#include <stdio.h>

int main () {

	int quantity;
	
	float unitprice;
	
printf("Enter a quantity + [ENTER] : ");
scanf("%f", &quantity);
printf("Here the Quantity you entered : %d\n", quantity);
printf("\n");

printf("Enter cost + [ENTER] : ");
scanf("%f", &unitprice);
printf("here the cost you ented %f\n", unitprice);
printf("\n");

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