/**
 *Program Name:  CIS26Fall2011L43671KaChiLauLab7Ex1.c
 *Discussion:    Formatted Inputs
 */

#include <stdio.h>
#include <stdlib.h>

void menuVersion2KaChiLau(void);

int extractLargestDigitOccurrenceKaChiLau(int*);

int main() {

	menuVersion2KaChiLau();

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
	int a;
	int b;
	int c;
	int i;
	int max = 0;
	int count;
	int ary[100] = {0};
	int ary2[100] = {0};

	printf("How many integers (must be greater than 1) ? ");
	scanf("%d", &a);

	for(i = 1; i <= a; i++) {
		printf("Enter integer #%d: ", i);
		scanf("%d", &*(klptr + i));

		count = 0;
		while(*(klptr + i) != 0) {
			b = *(klptr + i) % 10;

			if(b > max) { //find the max;
				max = b;
			}

			if(b == max) {  //find the occrrence
				count += 1;
				ary[i] = count;
			}

			*(klptr + i) = *(klptr + i) / 10;
		}

	}

	printf("%d\n", max);

	for(i = 1; i <= a; i++) {
		printf("For integer #%d: \n", i);
		printf("There is %d occurrence of digit %d .\n", ary[i], max);
	}

	return 0;
}
