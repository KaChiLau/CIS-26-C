/**
 *Program Name:  CIS26Fall2011L43671KaChiLauLab7Ex1.c
 *Discussion:    Formatted Inputs
 */

#include <stdio.h>
#include <stdlib.h>

int getmax(int*);

void checkmax(int*, int);

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
	int i;
	int ary[100] = {0};
	int max;
	int temp;

	printf("How many integers (must be greater than 1) ? ");
	scanf("%d", &a);

	for(i = 1; i <= a; i++) {
		printf("Enter integer #%d: ", i);
		scanf("%d", &*(klptr + i));

		temp = 0;
		max = getmax(klptr + i);
		if(temp > max) {
			max = temp;
		}
	}

	for(i = 1; i <= a;i++) {
		printf("For integer #%d: \n", i);
		checkmax(klptr + i, max);
	}
	return 0;
}

int getmax(int* klptr) {
	int max;
	int value;
	
	max = 0;
	value = *klptr;

	while(value != 0) {
		value = value % 10;
		if(value > max) {
			max = value;
			value = value / 10;
		}
	}

	return max;
}

void checkmax(int* klptr, int max) {
	int value;
	int maxp[100];
	int count;
	int p;
	int i;

	count = 0;
	p = 0;


	value = *klptr;
	while(value != 0) {
		value = value % 10;
		if(value == max) {
			maxp[count] = p;
			count++;
		}

		p++;
		value = value / 10;
	}

	if(count != 0) {
		printf("There is %d occurence of digit %d. \n", count, max);
	} else {
		printf("There is no occurrence of digit %d. \n", max);
	}

	for(i = 0; i < count; i++) {
		printf("The occurrence of digit %d is at position %d\n", max, maxp[i]);
	}

	return;
}




