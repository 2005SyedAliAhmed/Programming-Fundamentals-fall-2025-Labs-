#include <stdio.h>

int main(void) {
    long long n;
    printf("Enter an integer: ");
    if (scanf("%lld", &n) != 1) {
        printf("Invalid input.\n");
        return 1;
    }
    long long temp = (n < 0) ? -n : n;
    int sum = 0;
    do {
        sum += (int)(temp % 10);
        temp /= 10;
    } while (temp != 0);

    printf("Sum of digits of %lld = %d\n", n, sum);
    return 0;
}
