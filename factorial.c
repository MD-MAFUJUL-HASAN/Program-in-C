#include<stdio.h>
int main()
{
    int a=1,num;
    
    printf("Enter a number: ");
    scanf("%d",&num);
    
    while(num>=1)
        {
            a = (a*num);
            num--;
        }
        
    printf("%d",a);
    
    return 0;
}
