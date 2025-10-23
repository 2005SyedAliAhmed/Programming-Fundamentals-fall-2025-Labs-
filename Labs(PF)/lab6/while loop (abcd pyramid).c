#include<stdio.h>
int main()
 {
    int i,j;
    for (i= 0; i < 8; i++) 
   {
        // Get the character: 'A' + i
        char ch = 'A' + i;
        // Print the character (i + 1) times
        for (j= 0; j <= i; j++) 
		{
            printf("%c", ch);
        }

        // Move to the next line after each row
        printf("\n");
    }
}

