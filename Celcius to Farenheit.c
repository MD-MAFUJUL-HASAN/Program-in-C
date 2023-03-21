#include<stdio.h>
int main()
{
  float c,f;
  
  printf("Enter Celcius: ");
  scanf("%f",&c);
  
  f = ((c*9)/5)+32;
  
  printf("Farenheit: %f",f);
  
  return 0;
}


-----------------------------------------------------

Output--

Enter Celcius: 38
Farenheit: 100.400002
