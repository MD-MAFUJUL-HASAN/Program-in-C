#include<stdio.h>
int main()
{
    float a,b,c;
    
    printf("\nPlease enter 3 numbers: ");
    scanf("%f%f%f",&a,&b,&c);
    
    if(a>=b && a>=c)
        printf("\nThe largest number is %f",a);
        
    if(b>=a && b>=c)
        printf("\nThe largest number is %f",b);
        
    if(c>=a && c>=b)
        printf("\nThe largest number is %f",c);

    return 0;
}
