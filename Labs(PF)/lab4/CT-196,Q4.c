#include<stdio.h>
int main()
{
 int number,numerator,denominator;
 printf("Enter a numerator number:");
 scanf("%d",&numerator);
 printf("Enter a denominator number:");
 scanf("%d",&denominator);
 if(denominator==0)
 {
   printf("Error Message");
 } else
 {
 	printf("Division : numerator=%d denominator=%d :%d",numerator,denominator,numerator/denominator);	
 }
	return 0;
}
