/**
 *Program Name: cis26FallL43671KaChiLauLab2Ex1
 *Written By: KaChiLau
 *Exercise: Assignment Exercise 1
 *Turn-in Date: Septtember 15, 2011
 */

#include<stdio.h>

 int main() {
char cVar;
int iVar;
double dVar;

 printf("CIS 26 - C Programming\n");
 printf("Fall 2011\n");
 printf("L43671\n");
 printf("Laney College\n");
 printf("KaChiLau\n");
 printf("\n");
 

 printf("Lab: %7d\n", 2);
 printf("Exercise: %2d\n", 1);
 printf("\n");

 printf("1234567890123456789012345678901234567890\n");
 printf("%8d%8c%10.6f\n", 23, 'z', 4.1);
 printf("%8c%8d%10.6f\n", 23, 'z', 4.1);
 printf("%8c%8d%10.6f\n", 'z', 23, 4.1);
 printf("%8c%10.6f%8d\n", 'z', 4.1, 23);
 printf("\n");
 
 cVar = 'z';
 iVar = 23;
 dVar = 4.1;

 printf("%8d%8c%10.6f\n", iVar, cVar, dVar);
 printf("%8c%8d%10.6f\n", iVar, cVar, dVar);
 printf("%8c%08d%10.4f\n", cVar, iVar, dVar);
 printf("%8c%010.2f%8d\n", cVar, dVar, iVar);

 printf("%-8d%8c%18.6f\n", iVar, cVar, dVar);
 printf("%-8c%16d%10.6f\n", iVar, cVar, dVar);
 printf("%-8c%08d%10.4f\n", cVar, iVar, dVar); 
 printf("%-8c%010.2f%8d\n", cVar, dVar, iVar);

 return 0;
}
 /*OUTPUT
CIS 26 - C Programming
Fall 2011
L43671
Laney College
KaChiLau

Lab:       2
Exercise:  1

1234567890123456789012345678901234567890
      23       z  4.100000
             122   4.100000
       z      23  4.100000
       z  4.100000      23

      23       z  4.100000
            122   4.100000
       z00000023    4.1000
       z0000004.10      23
23             z          4.100000
                    122  4.100000
z       00000023    4.1000
z       0000004.10      23
*/