#include<stdio.h>
int main()
{
    int c,i;
    
    printf("Enter your choice: ");
    scanf("%d",&c);
    
    switch(c)
    {
    case 1:
        for(i=1;i<=20;i++)
            printf("%d\n",i);
            break;
            
    case 2:
        i=1;
        while(i<=20)
        {
            printf("%d\n",i);
            i++;
        }
        break;
        
    default:
        printf("Invalid choice\n");
    }
    
    return 0;
}

