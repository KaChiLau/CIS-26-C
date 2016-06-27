/**
 *Program Name:  CIS26Fall2011L43671KaChiLauLab6Ex1.c
 *Discussion:    Formatted Inputs
 */

#include <stdio.h>

int extractLargestDigitKaChiLau(void);

int displayDigitOccurrenceKaChiLau(void);

int main () {
	int option;

	do {
		printf("\n ***********************************************");
		printf("\n *                     MENU                    *");
		printf("\n * 1) Calling extractLargestDigitKaChiLau()    *");
		printf("\n * 2) Calling displayDigitOccurrenceKaChiLau() *");
		printf("\n * 3) Quit                                     *");
		printf("\n ***********************************************");

		printf("\nEnter the option (1, 2, or 3): \n\n");
		scanf("%d", &option);

		switch(option) {
		case 1:
			printf("\n\tCalling extractLargestDigitKaChiLau() -");
			extractLargestDigitKaChiLau();
			break;
		case 2:
			printf("\n\tCalling displayDigitOccurrenceKaChiLau() --");
			displayDigitOccurrenceKaChiLau();
			break;
		case 3:
			printf("\n\tHave fun ...");
			break;
		default:
			printf("\n\tWRONG OPTION!\n");
		}
	} while (option != 3);

	return;

}

int extractLargestDigitKaChiLau(void) {
	int value;
	int positionalvalue;
	int factor;
	int i;
	int max;
	int k;
	int ary[10];
	int temp;
	int size = 10;

	printf("  Enter a integer: ");
	scanf("%lf", &value);

	printf("  Enter a positionalvalue : ");
	scanf("%d", &positionalvalue);

	i = 0;
	while ( value != 0 ) {
		temp = value % 10;
		ary[i] = temp;
		value = temp / 10;
		i++;
	}

	max = ary[i];
	i = 0;
	while (i <= 10) {
		if (max < ary[i])
			max = ary[i];
		printf("%d\n", max);
		i++;
	}

	return max;
}

	