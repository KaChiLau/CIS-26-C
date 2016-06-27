/**
 *Program Name:  CIS26Fall2011L43671KaChiLauLab7Ex1.c
 *Discussion:    Formatted Inputs
 */

#include <stdio.h>
#include <stdlib.h>

void menuVersion2KaChiLau(void);

int extractLargestDigitOccurrenceKaChiLau(int*);

void displayClassInfoKachil(void); 


int main() {

	displayClassInfoKachil();

	menuVersion2KaChiLau();

	return;
}

void displayClassInfoKachil() {

	printf("CIS 26 - C Programming\n");

	printf("L43671\n");

	printf("Laney College\n");

	printf("KaChiLau\n");

	printf("\n");

	printf("Assignment Information --\n");

	printf("  Assignment Number: Lab 07,\n");

	printf("                     Coding Assignment -- Exercise #1\n");

	printf("  Written by:        KaChiLau\n");

	printf("  Submitted Date:    December 13, 2011\n\n");

	return;

}

void menuVersion2KaChiLau() {
	int* klptr;
	int kloption;

	klptr = (int*) malloc ( 10 * sizeof(int));
	
	do {
		printf("\n *************************************************");
		printf("\n *                     MENU                      *");
		printf("\n * 1) extractLargestDigitOccurrenceKaChiLau()    *");
		printf("\n * 2) Quit                                       *");
		printf("\n *************************************************");

		printf("\n Enter the option (1 or 2): ");
		scanf("%d", &kloption);

		switch(kloption) {
		case 1:
			printf("\n  extractLargestDigitOccurrenceKaChiLau() --\n");
			extractLargestDigitOccurrenceKaChiLau(klptr);
			break;
		case 2:
			printf("\n   Have fun ...\n\n");
			break;
		default:
			printf("\n\tWRONG OPTION!\n\n");
		}
	} while (kloption != 2);

	return;
}

int extractLargestDigitOccurrenceKaChiLau(int* klptr) {
	int kla;
	int klb;
	int i;
	int klmax = 0;
	int klcount;
	int ary[100] = {0};

	printf("How many integers (must be greater than 1) ? ");
	scanf("%d", &kla);

	for(i = 1; i <= kla; i++) {
		printf("\tEnter integer #%d: ", i);
		scanf("%d", &*(klptr + i));

		if (*(klptr + i) < 0) {
		*(klptr + i) = -*(klptr + i);
		}

		klcount = 0;
		while(*(klptr + i) != 0) {
			klb = *(klptr + i) % 10;

			if(klb > klmax) { //find the max;
				klmax = klb;
			}

			if(klb == klmax) {  //find the occrrence
				klcount += 1;
				ary[i] = klcount;
			}

			*(klptr + i) = *(klptr + i) / 10;
		}

	}

	printf("\tThe Largest Digi: %d\n",klmax);

	for(i = 1; i <= kla; i++) {
		printf("\tFor integer #%d: \n", i);
		printf("\t\tThere is %d occurrence of digit %d .\n", ary[i], klmax);
	}

	return 0;
}

/*OUTPUT

CIS 26 - C Programming
L43671
Laney College
KaChiLau

Assignment Information --
  Assignment Number: Lab 07,
                     Coding Assignment -- Exercise #1
  Written by:        KaChiLau
  Submitted Date:    December 13, 2011


 *************************************************
 *                     MENU                      *
 * 1) extractLargestDigitOccurrenceKaChiLau()    *
 * 2) Quit                                       *
 *************************************************
 Enter the option (1 or 2): 4

        WRONG OPTION!


 *************************************************
 *                     MENU                      *
 * 1) extractLargestDigitOccurrenceKaChiLau()    *
 * 2) Quit                                       *
 *************************************************
 Enter the option (1 or 2): 1

  extractLargestDigitOccurrenceKaChiLau() --
How many integers (must be greater than 1) ? 2
        Enter integer #1: 3287401
        Enter integer #2: 15289
        The Largest Digi: 9
        For integer #1:
                There is 4 occurrence of digit 9 .
        For integer #2:
                There is 1 occurrence of digit 9 .

 *************************************************
 *                     MENU                      *
 * 1) extractLargestDigitOccurrenceKaChiLau()    *
 * 2) Quit                                       *
 *************************************************
 Enter the option (1 or 2): -1

        WRONG OPTION!


 *************************************************
 *                     MENU                      *
 * 1) extractLargestDigitOccurrenceKaChiLau()    *
 * 2) Quit                                       *
 *************************************************
 Enter the option (1 or 2): 1

  extractLargestDigitOccurrenceKaChiLau() --
How many integers (must be greater than 1) ? 4
        Enter integer #1: 3287401
        Enter integer #2: 18528683
        Enter integer #3: 301227
        Enter integer #4: 880128
        The Largest Digi: 8
        For integer #1:
                There is 4 occurrence of digit 8 .
        For integer #2:
                There is 3 occurrence of digit 8 .
        For integer #3:
                There is 0 occurrence of digit 8 .
        For integer #4:
                There is 3 occurrence of digit 8 .

 *************************************************
 *                     MENU                      *
 * 1) extractLargestDigitOccurrenceKaChiLau()    *
 * 2) Quit                                       *
 *************************************************
 Enter the option (1 or 2): 2

   Have fun ...

*/