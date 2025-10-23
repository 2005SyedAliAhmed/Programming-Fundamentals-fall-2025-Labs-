#include<stdio.h>
int main()
{
	int num,i,j;
    printf("Enter number : ");
    scanf("%d",&num);

    printf("Pairs whose sum are even:\n");
    for (i = 1; i <= num; i++)
	 {
        for (j = 1; j <= num; j++) 
		{
            if ((i + j) % 2 == 0) 
			{
                printf("(%d,%d)",i,j);
            }
        }
    }
    return 0;
}
	
	
	
	

