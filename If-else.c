#include<stdio.h>
int main()
{
  int vari1,vari2;
  
  printf("Enter the value of variable 1 & 2: ");
  scanf("%d %d",&vari1,&vari2);
  
  if(vari1>vari2)
    printf("vari1 is greayer then vari2");
    
  else
    printf("vari2 is greater than vari1");
    
  return 0;
}
