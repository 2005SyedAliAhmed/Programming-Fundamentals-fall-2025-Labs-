#include<stdio.h>
int main()
{
  float C,F;
  printf("Enter the value of temp in Celsius:");
  scanf("%f",&C);
  F= (C*9/5)+32;
  printf("\nThe value of temp in F is %f",F);
  // -40 in celcius is -40 in fahrenheit 
  // 0 in celcius is 32 in fahrenheit 
  // 100 in celcius is 212 in fahrenheit 
  return 0;
}
