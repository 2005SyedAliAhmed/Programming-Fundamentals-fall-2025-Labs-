#include<stdio.h>
int main()
{
	int num1=15,num2=4;
	
	printf("Addition:  num1=%d  num2=%d :%d",num1,num2, num1+num2);
	printf("\nSubtraction:  num1=%d  num2=%d :%d",num1,num2, num1-num2);
	printf("\nMultiplication:  num1=%d  num2=%d :%d",num1,num2, num1*num2);
	printf("\nDivision:  num1=%d  num2=%d :%f",num1,num2, (float)num1/num2);
	printf("\nRemainder:  num1=%d  num2=%d :%d",num1,num2, num1%num2);
	 return 0;
}
