/**
 *Program Name:  CIS26Fall2011L43671KaChiLauLab6Ex1.c
 *Discussion:    Formatted Inputs
 */

#include <stdio.h>

int extractLargestDigitKaChiLau(int[], int);

int displayDigitOccurrenceKaChiLau(int[], int);

void displayClassInfoKachil(); 

int main () {
	int kloption;
	int ary[100] = {0};
	int ary2[100] = {0};

	displayClassInfoKachil();

	do {
		printf("\n ***********************************************");
		printf("\n *                     MENU                    *");
		printf("\n * 1) Calling extractLargestDigitKaChiLau()    *");
		printf("\n * 2) Calling displayDigitOccurrenceKaChiLau() *");
		printf("\n * 3) Quit                                     *");
		printf("\n ***********************************************");

		printf("\n Enter the option (1, 2, or 3): ");
		scanf("%d", &kloption);

		switch(kloption) {
		case 1:
			printf("\n  Calling extractLargestDigitKaChiLau() -\n");
			extractLargestDigitKaChiLau(ary, 50);
			break;
		case 2:
			printf("\n  Calling displayDigitOccurrenceKaChiLau() --\n");
			displayDigitOccurrenceKaChiLau(ary2, 11);
			break;
		case 3:
			printf("\n   Have fun ...\n\n");
			break;
		default:
			printf("\n\tWRONG OPTION!\n\n");
		}
	} while (kloption != 3);

	return;

}

void displayClassInfoKachil() {

	printf("CIS 26 - C Programming\n");

	printf("L43671\n");

	printf("Laney College\n");

	printf("KaChiLau\n");

	printf("\n");

	printf("Assignment Information --\n");

	printf("  Assignment Number: Lab 06,\n");

	printf("                     Coding Assignment -- Exercise #1\n");

	printf("  Written by:        KaChiLau\n");

	printf("  Submitted Date:    November 29, 2011\n\n");

	return;

}

int extractLargestDigitKaChiLau(int ary[], int size) {
	int klvalue;
	int klpositionalvalue;	
	int i;
	int klmax;
	int kltemp;

	printf("    Enter a integer: ");
	scanf("%d", &klvalue);

	if (klvalue < 0) {
		klvalue = -klvalue;
	}

	for(i = 1; klvalue != 0; i++) {
		kltemp = klvalue % 10;
		ary[i] = kltemp;
		klvalue = klvalue / 10;
	}

	klmax = ary[1];
	i = 1;
	while (i < size) {
		if (klmax < ary[i]) {
			klmax = ary[i];
			klpositionalvalue = i;
		}
		i++;
	}

	printf("    The largest digit : %d\n", klmax);
	printf("    Its position : %d\n", klpositionalvalue);

	return klmax;
}

int displayDigitOccurrenceKaChiLau(int ary2[], int size) {
	int klfinteger;
	int klsinteger;
	int temp;
	int kltotal;
	int i;

	printf("    Enter 2 integer -- \n");

	printf("      First integer : ");
	scanf("%d", &klfinteger);

	printf("      Second integer : ");
	scanf("%d", &klsinteger);

	if (klfinteger < 0) {
		klfinteger = -klfinteger;
	}

	if (klsinteger < 0) {
		klsinteger = -klsinteger;
	}

	while(klfinteger != 0) {
		temp = klfinteger % 10;
		ary2[temp] += 1;
		klfinteger = klfinteger / 10;
	}

	while(klsinteger != 0) {
		temp = klsinteger % 10;
		ary2[temp] += 1;
		klsinteger = klsinteger / 10;
	}

	printf("    Occurrence of digits -- \n");

	for(i = 0; i < 10; i ++) {
	printf("      Digit %d : %d\n", i, ary2[i]);
	}

	for(i = 0, kltotal = 0; i < size; i++) {
		kltotal += ary2[i];
	}

	printf("\n  Total number of occurrence(s) for all digit(s) : %d\n", kltotal);

	return kltotal;
}

/*OUTPUT
CIS 26 - C Programming
L43671
Laney College
KaChiLau

Assignment Information --
  Assignment Number: Lab 06,
                     Coding Assignment -- Exercise #1
  Written by:        KaChiLau
  Submitted Date:    November 29, 2011


 ***********************************************
 *                     MENU                    *
 * 1) Calling extractLargestDigitKaChiLau()    *
 * 2) Calling displayDigitOccurrenceKaChiLau() *
 * 3) Quit                                     *
 ***********************************************
 Enter the option (1, 2, or 3): 4

        WRONG OPTION!


 ***********************************************
 *                     MENU                    *
 * 1) Calling extractLargestDigitKaChiLau()    *
 * 2) Calling displayDigitOccurrenceKaChiLau() *
 * 3) Quit                                     *
 ***********************************************
 Enter the option (1, 2, or 3): 1

  Calling extractLargestDigitKaChiLau() -
    Enter a integer: 3287401
    The largest digit : 8
    Its position : 5

 ***********************************************
 *                     MENU                    *
 * 1) Calling extractLargestDigitKaChiLau()    *
 * 2) Calling displayDigitOccurrenceKaChiLau() *
 * 3) Quit                                     *
 ***********************************************
 Enter the option (1, 2, or 3): -1

        WRONG OPTION!


 ***********************************************
 *                     MENU                    *
 * 1) Calling extractLargestDigitKaChiLau()    *
 * 2) Calling displayDigitOccurrenceKaChiLau() *
 * 3) Quit                                     *
 ***********************************************
 Enter the option (1, 2, or 3): 2

  Calling displayDigitOccurrenceKaChiLau() --
    Enter 2 integer --
      First integer : 3287401
      Second integer : 15289
    Occurrence of digits --
      Digit 0 : 1
      Digit 1 : 2
      Digit 2 : 2
      Digit 3 : 1
      Digit 4 : 1
      Digit 5 : 1
      Digit 6 : 0
      Digit 7 : 1
      Digit 8 : 2
      Digit 9 : 1

  Total number of occurrence(s) for all digit(s) : 12

 ***********************************************
 *                     MENU                    *
 * 1) Calling extractLargestDigitKaChiLau()    *
 * 2) Calling displayDigitOccurrenceKaChiLau() *
 * 3) Quit                                     *
 ***********************************************
 Enter the option (1, 2, or 3): 3

   Have fun ...


*/