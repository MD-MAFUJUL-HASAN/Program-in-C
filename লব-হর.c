#include<stdio.h>
#include<math.h>
int main()
{
  int a,b;
  float lob,hor,result;
  
  printf("Enter the value of a & b: ");
  scanf("%d %d",&a,&b);
  
  lob = ((a*a*a)+(3*a*a*b)+(3*a*b*b)+(b*b*b));
  
  hor = sqrt(a+b);
  
  result = lob/hor;
  
  printf("Result: %f",result);
  
  return 0;
}
