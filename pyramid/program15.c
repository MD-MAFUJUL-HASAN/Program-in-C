/*
C program to print following pyramid:
    A
   BAB
  CBABC
 DCBABCD
EDCBABCDE
*/

#include <stdio.h>

int main()
{
    int i,j;
    char CH='A';
    int space=4;

    /*loop for row*/
    for(i=1; i<=5; i++)
    {
        /*put space*/
        for(j=1; j<=space; j++)
            printf(" ");

        /*first part of the row*/
        for(j=CH; j>='A'; j--)
            printf("%c",j);

        /*second part of the row*/
        for(j='B'; j<=CH; j++)
            printf("%c",j);

        printf("\n");
        CH++;
        space--;
    }

    return 0;
}
