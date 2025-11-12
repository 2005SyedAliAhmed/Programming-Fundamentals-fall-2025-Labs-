#include<stdio.h>
int main()
{
	int arr[3]={10,20,30};
	int*p=arr;
	printf("%d\n",*p);//  p[0]/or/ *(p+i)-> p[i]/arr[]n=10
	printf("%d\n",*(p+1));
	printf("%d\n",p[2]);
}
