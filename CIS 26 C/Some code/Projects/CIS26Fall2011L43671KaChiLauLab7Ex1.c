/**
 *Program Name:  CIS26Fall2011L43671KaChiLauLab7Ex1.c
 *Discussion:    Formatted Inputs
 */

#include <stdio.h>

int main() {
	int ary[2] = {123, 456};
	int ary2[2] =  {-108, 9};
	int size=10;
	int ary3[100] = {0};
	int ary4[100] = {0};
	int size1 = 0;
	int size2;
	int i;
	int temp;
	int count = 0;


	for(i = 0;i < 10;i++) {
		if(ary[i] < 0) {
			temp = ary[i];
			if(temp < 0) {
				temp *= -1;
			}
			ary3[i] = temp;
		}

		if(ary2[i] < 0) {
			if(temp < 0) {
				temp *= -1;
			}
			ary4[i] = temp;
		}
	}

		i = 0;
		while(ary3[i] > 0) {
			size1 += 1;
			i++;
		}

		i = 0;
		size2 = 0;
		while(ary4[i] > 0) {
			size2 += 1;
			i++;
		}

	printf("The the smallest ary size: %d\n", size2);


	return 0;

}

