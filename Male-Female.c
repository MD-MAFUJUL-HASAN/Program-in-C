#include<stdio.h>
int main()
{
    char c;
    
    printf("Enter your choice: ");
    scanf(" %c",&c);
    
    switch(c)
        {
        case 'M':
        case 'm':
            printf("Male\n");
            break;
            
        case 'F':
        case 'f':
            printf("Female\n");
            break;
            
        default:
            printf("Invalid\n");
            break;
        }
        
    return 0;
}
