#include<stdio.h>
int main ()
{

    int num,sum=0,digits;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Using a for loop to find sum of digits
    for(; num != 0; num = num / 10) 
	{
        digits = num % 10;     //digits=remainder
		
        sum += digits;       //get the last digit
   }
    printf("Sum of digits = %d\n", sum);

    return 0;
}
