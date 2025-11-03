#include <stdio.h>

int main() 
{
    int n, i, j;
    printf("Enter size of square matrix: ");
    scanf("%d", &n);
    int arr[n][n];
    int sum = 0;
    printf("Enter elements of the %dx%d matrix:\n", n, n);
    for (i = 0; i < n; i++) 
	{
        for (j = 0; j < n; j++)
		 {
            scanf("%d", &arr[i][j]);
         }
    }
    // Sum of main diagonal elements
    for (i = 0; i < n; i++) {
        sum += arr[i][i];
    }
    printf("Sum of diagonal elements of this array = %d\n", sum);
    return 0;
}
