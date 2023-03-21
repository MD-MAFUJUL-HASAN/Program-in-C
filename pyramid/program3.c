/*C program to print following Pyramid:
        *
       * *
      * * *
     * * * *
    * * * * *
*/

#include<stdio.h>

#define MAX	5

int main()
{
    int i,j;
    int space=4;
    /*run loop (parent loop) till number of rows*/
    for(i=0;i< MAX;i++)
    {
	    /*loop for initially space, before star printing*/
	    for(j=0;j< space;j++)
	    {
		    printf(" ");
	    }
	    for(j=0;j<=i;j++)
	    {
		    printf("* ");
	    }

	    printf("\n");
	    space--;	/* decrement one space after one row*/
    }
    return 0;
}
