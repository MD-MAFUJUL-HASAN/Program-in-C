/*
C program to print following pyramid
123454321
 1234321
  12321
   121
    1
*/

#include <stdio.h>

int main()
{
    int i,j;
    int space=0;

    /*Run parent loop*/
    for(i=5; i>=1; i--)
    {
        /*Print space*/
        for(j=1; j<=space; j++)
            printf(" ");


        /*Run loop to print first part of row*/
        for(j=1; j<=i; j++)
            printf("%d",j);

        /*Run loop to print second part of row*/
        for(j=i-1; j>=1; j--)
            printf("%d",j);

        printf("\n");
        space++;
    }

    return 0;
}
