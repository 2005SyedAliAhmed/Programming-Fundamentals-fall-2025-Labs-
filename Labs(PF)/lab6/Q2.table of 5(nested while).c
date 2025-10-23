#include <stdio.h>

int main(void) 
{
    int a = 1;        
    while (a <= 5)
	{
        int b= 1;    
        printf("Table of %d\n", a);

        while (b<= 10)
	   {
            printf("%d x %d = %d\n", a, b,a *b);
            b++;
        }
        printf("\n");
        a++;
    }

    return 0;
}
