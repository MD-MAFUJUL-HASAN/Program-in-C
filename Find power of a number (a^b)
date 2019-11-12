#include<stdio.h>
int getPower(int base,int exponent)
{
    if(exponent == 0) return 1;
    return base * getPower(base,exponent-1);
}

int main()
{
    int base, exponent,z;
    
    printf("Enter base and exponent: ");
    scanf("%d %d", &base, &exponent);
    
    z = getPower(base,exponent);
    
    printf("Result = %d",z);
    
    return 0;
}


---------------------------------------------------------

output--

Enter base and exponent: 15 20
Result = -1314489151
