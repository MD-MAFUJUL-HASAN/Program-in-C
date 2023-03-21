#include <stdio.h>
int main()
{
    int a,b,sum;
    float avg;

    printf("Enter first number :");
    scanf("%d",&a);
    
    printf("Enter second number :");
    scanf("%d",&b);
    
    sum=a+b;
    
    avg=(a+b)/2;
    
    printf("Average of %d and %d is = %f",a,b,avg);

    return 0;
}
