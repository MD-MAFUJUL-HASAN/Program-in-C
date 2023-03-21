#include<stdio.h>
int main()
{
    int n,i,j,p;
    
    printf("The value of N: ");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++)
    {
        p=0;
        for(j=1;j<=n;j++)
        {
            if(i%j==0)
                p++;
        }
        if(p==2)
            printf("%d\t",i);
    }
    
    return 0;
}
