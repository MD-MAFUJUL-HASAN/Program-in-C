/*
C program to print following pyramid
1A2B3C4D5E
1A2B3C4D
1A2B3C
1A2B
1A
*/

#include <stdio.h>

int main()
{
    int i,j,k;

    /*Run parent loop*/
    for(i=5; i>=1; i--)
    {
        for(j=1, k='A'; j<=i; j++,k++)
        {
            printf("%d%c",j,k);
        }

        printf("\n");
    }

    return 0;
}
