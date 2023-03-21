#include<stdio.h>
int fact(int n)
{
    int f;
    
    if(n == 1) 
        return 1;
        
    f = n * fact (n-1);
        return f;
}

int main()
{
    int k,x;
    
    printf("Enter a number: ");
    scanf("%d",&x);
    
    k = fact(x);
    
    printf("Factorial of %d is: %d\n",x,k);
    
    return 0;
}


------------------------------------------------------------

output--

Enter a number: 10
Factorial of 10 is: 3628800
