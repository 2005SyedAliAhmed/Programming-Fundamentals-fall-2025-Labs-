#include<stdio.h>
int main()
{
	int n,count,f=1;
	printf("Enter any number:");
	scanf("%d",&n);
	for (count=1;count<=n;count++)
	{
     f=f*count; //f!= n*(n-1)*(n-2)...; 
	}
    printf("The Factorial of %d is %d",n,f);
	return 0;
}
