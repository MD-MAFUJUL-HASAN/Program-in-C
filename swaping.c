#include<stdio.h>
int swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int x = 20, y = 50;
    
    printf("Before Swap: x= %d y= %d", x, y);
    
    swap(&x, &y);
    
    printf("\nAfter Swap: x= %d y= %d\n", x, y);
    
    return 0;
}
