//problem : Chapter 5 project 58
//Program created by : KaChiLau

#include <stdio.h>

int main() {

	char option;
	int hrent;
	int hrleft;
	int hrpark;
	int minent;
	int minleft;
	int minpark;
	int rdhr;
	float cost = 0;

	printf("Type of vehicle? : ");
	scanf("%c", &option);
	printf("Hour vehicle entered lot ( 0 -24) ? ");
	scanf("%d", &hrent);
	printf("Minute vehicle entered lot( 0 - 60) ? ");
	scanf("%d", &minent);
	printf("Hour vehicle left lot ( 0 - 24)? ");
	scanf("%d", &hrleft);
	printf("Minute vehicle left lot ( 0 - 60)? ");
	scanf("%d", &minleft);

	if(minleft < minent) {
		minpark = (minleft + 60) - minent;
		hrpark = (hrleft - 1) - hrent;
	} else { 
		minpark = minleft - minent;
		hrpark = hrleft - hrent;
	}

	if (minpark >= 1) {
		rdhr = hrpark + 1;
	} else {
		rdhr = hrpark;
	}

	if(hrleft < hrent || hrleft >= 24) {
		printf("YOUR CAR HAVE BEEN TOWED AWAY!");
	}

	switch(option) {
	case 'c' : case 'C' :
		if(rdhr <= 3) {
			cost = 0;
		} else {
			cost = (rdhr - 3) * 1.5;
		}
		break;

	case 't' : case 'T' :
		if(rdhr <= 2) {
			cost = 1 * rdhr;
		} else {
			cost = (rdhr - 2) * 2.3;
		}
		break;

	case'b' : case 'B' :
		if(rdhr <= 1) {
			cost = 2;
		} else {
			cost = (rdhr - 1) * 3.7;
		}
		break;

	default:
		printf("You Enter the wrong option");
		break;
	}

	printf("\n		PARKING LOT CHARGE			\n\n");
	printf("Type of vehicle: %c\n", option);
	printf("TIME IN			 		 %2d : %2d\n", hrent, minent);
	printf("TIME-OUT				 %2d : %2d\n", hrleft, minleft);
	printf("					--------	\n");
	printf("PARKING TIME				   %2d:%2d\n", hrpark, minpark);
	printf("ROUNTDED TOTAL				      %2d\n", rdhr);
	printf("					--------	\n");
	printf("TOTAL CHARGE				  $%2.2f\n\n", cost);

	return;
}

/*OUTPUT

Type of vehicle? : c
Hour vehicle entered lot ( 0 -24) ? 12
Minute vehicle entered lot( 0 - 60) ? 40
Hour vehicle left lot ( 0 - 24)? 14
Minute vehicle left lot ( 0 - 60)? 22

                PARKING LOT CHARGE

Type of vehicle: c
TIME IN                                  12 : 40
TIME-OUT                                 14 : 22
                                        --------
PARKING TIME                                1:42
ROUNTDED TOTAL                                 2
                                        --------
TOTAL CHARGE                               $0.00


Type of vehicle? : b
Hour vehicle entered lot ( 0 -24) ? 8
Minute vehicle entered lot( 0 - 60) ? 20
Hour vehicle left lot ( 0 - 24)? 8
Minute vehicle left lot ( 0 - 60)? 40

                PARKING LOT CHARGE

Type of vehicle: b
TIME IN                                   8 : 20
TIME-OUT                                  8 : 40
                                        --------
PARKING TIME                                0:20
ROUNTDED TOTAL                                 1
                                        --------
TOTAL CHARGE                               $2.00


Type of vehicle? : t
Hour vehicle entered lot ( 0 -24) ? 2
Minute vehicle entered lot( 0 - 60) ? 0
Hour vehicle left lot ( 0 - 24)? 3
Minute vehicle left lot ( 0 - 60)? 59

                PARKING LOT CHARGE

Type of vehicle: t
TIME IN                                   2 :  0
TIME-OUT                                  3 : 59
                                        --------
PARKING TIME                                1:59
ROUNTDED TOTAL                                 2
                                        --------
TOTAL CHARGE                               $2.00


Type of vehicle? : c
Hour vehicle entered lot ( 0 -24) ? 12
Minute vehicle entered lot( 0 - 60) ? 40
Hour vehicle left lot ( 0 - 24)? 16
Minute vehicle left lot ( 0 - 60)? 22

                PARKING LOT CHARGE

Type of vehicle: c
TIME IN                                  12 : 40
TIME-OUT                                 16 : 22
                                        --------
PARKING TIME                                3:42
ROUNTDED TOTAL                                 4
                                        --------
TOTAL CHARGE                               $1.50

Type of vehicle? : b
Hour vehicle entered lot ( 0 -24) ? 8
Minute vehicle entered lot( 0 - 60) ? 20
Hour vehicle left lot ( 0 - 24)? 14
Minute vehicle left lot ( 0 - 60)? 20

                PARKING LOT CHARGE

Type of vehicle: b
TIME IN                                   8 : 20
TIME-OUT                                 14 : 20
                                        --------
PARKING TIME                                6: 0
ROUNTDED TOTAL                                 6
                                        --------
TOTAL CHARGE                              $18.50


Type of vehicle? : t
Hour vehicle entered lot ( 0 -24) ? 2
Minute vehicle entered lot( 0 - 60) ? 0
Hour vehicle left lot ( 0 - 24)? 12
Minute vehicle left lot ( 0 - 60)? 0

                PARKING LOT CHARGE

Type of vehicle: t
TIME IN                                   2 :  0
TIME-OUT                                 12 :  0
                                        --------
PARKING TIME                               10: 0
ROUNTDED TOTAL                                10
                                        --------
TOTAL CHARGE                              $18.40




*/