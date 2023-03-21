/*C program to print following Pyramid:
    0        0
    01      01
    010    010
    0101  0101
    0101001010
*/

#include<stdio.h>

int main()
{
	int i,j,k,l=8,m,n,o,p;
	for(i=0; i<=4; i++)
	{
		for(j=0; j<=i; j++)
		{
			if(j%2==0)
				printf("0");
			else
				printf("1");
		}
		for(k=1; k<=l; k++)
		{
			printf(" ");
		}
			l = l-2;
		for(m=0; m<=i; m++)
		{
			if(m%2==0)
			printf("0");
			else
			printf("1");
		}

		printf("\n");
	}
    return 0;
}
