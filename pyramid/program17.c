/*
C program to print following pyramid
    A
   ABA
  ABCBA
 ABCDCBA
ABCDEDCBA
*/

#include <stdio.h>

int main()
{
    int i,j;
    int space=4;
    char CH='A';

    /*Run parent loop*/
    for(i=1; i<=5; i++)
    {
        /*Print space*/
        for(j=1; j<=space; j++)
            printf(" ");


        /*Run loop to print first part of row*/
        for(j=1; j<=i; j++)
            printf("%c",CH+j-1);

        /*Run loop to print second part of row*/
        for(j=i-1; j>=1; j--)
            printf("%c",CH+j-1);

        printf("\n");
        space--;
    }

    return 0;
}
