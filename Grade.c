#include<stdio.h>
int main()
{
    int marks;
    
    printf("Enter your marks ");
    scanf("%d",&marks);
    
    if(marks<=49)
    {
        printf("you are Fail");
    }
    
    else if(marks>=50 && marks<=60)
    {
        printf("Grade C");
    }
    
    else if(marks>=61 && marks<=70)
    {
        printf("Grade B");
    }
    
    else if(marks>=71 && marks<=80)
    {
        printf("Grade A");
    }
    
    else if(marks>=81 && marks<=100)
    {
        printf("Grade A+");
    }
    
    return 0;
}
