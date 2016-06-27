/**
 *Program Name:  problem 32
 *Discussion:    Formatted Inputs
 */

#include <stdio.h>

int main () {

	int qtyfortv;
	int qtyforvcr;
	int qtyforremotectrlr;
	int qtyforcdplayer;
	int qtyfortaperecorder;

	float tv = 400.00;
	float vcr = 220.00;
	float remotectrlr = 35.20;
	float cdplayer = 300.00;
	float taperecorder = 150.00;

	float totalprice;
	float subtotal;
	float tax;
	float total;

	printf("Quantity for TV: ");
	scanf("%d", &qtyfortv);
	printf("Quantity for VCR: ");
	scanf("%d", &qtyforvcr);
	printf("Quantity for Remote Controller: ");
	scanf("%d", &qtyforremotectrlr);
	printf("Quantity for CD player: ");
	scanf("%d", &qtyforcdplayer);
	printf("Quantity for Tape Recorders: ");
	scanf("%d", &qtyfortaperecorder);

	printf("QTY\t\tDESCRIPTION\t\tUNITPRICE\t\tTOTALRPICE\n\n");
	printf("---\t\t-----------\t\t---------\t\t----------\n\n");
	printf("%d \t\tTV		  \t%9.2f\t\t%9.2f \n\n", qtyfortv, tv, qtyfortv * tv);
	printf("%d \t\tVCR		  \t%9.2f\t\t%9.2f \n\n", qtyforvcr, vcr, qtyforvcr * vcr);
	printf("%d \t\tREMOTE CTRLR		%9.2f\t\t%9.2f \n\n", qtyforremotectrlr, remotectrlr, qtyforremotectrlr * remotectrlr);
	printf("%d \t\tCD PLAYER		%9.2f\t\t%9.2f \n\n", qtyforcdplayer, cdplayer, qtyforcdplayer * cdplayer);
	printf("%d \t\tTAPE REOCRDER		%9.2f\t\t%9.2f \n\n", qtyfortaperecorder, taperecorder, qtyfortaperecorder * taperecorder);
	printf("   \t\t           \t\t         \t\t----------\n\n");
	printf("   \t\t           \t\t  SUBTOTAL\t\t%9.2f\n\n", (qtyfortv * tv) + (qtyforvcr * vcr) + (qtyforremotectrlr * remotectrlr)
		+ (qtyforcdplayer * cdplayer) + (qtyfortaperecorder * taperecorder));
	printf("   \t\t           \t\t       TAX\t\t%9.2f\n\n", (8.25 / ((qtyfortv * tv) + (qtyforvcr * vcr) + (qtyforremotectrlr * remotectrlr)
		+ (qtyforcdplayer * cdplayer) + (qtyfortaperecorder * taperecorder))));
	printf("   \t\t           \t\t     TOTAL\t\t%9.2f\n\n", (qtyfortv * tv) + (qtyforvcr * vcr) + (qtyforremotectrlr * remotectrlr)
		+ (qtyforcdplayer * cdplayer) + (qtyfortaperecorder * taperecorder) + (8.25 / ((qtyfortv * tv) + (qtyforvcr * vcr) + (qtyforremotectrlr * remotectrlr)
		+ (qtyforcdplayer * cdplayer) + (qtyfortaperecorder * taperecorder))));




}

/*OUTPUT
Enter a int : 01234
0 1 2 3 4
1 2 3 4
2 3 4
3 4
4

*/
