#include <stdio.h>
int main() {
    int num1, num2;
    do {
        printf("Enter the first positive integer: ");
        scanf("%d", &num1);
        printf("Enter the second positive integer: ");
        scanf("%d", &num2);
        if (num1 <= 0 || num2 <= 0) {
            printf("Both numbers must be positive. Please try again.\n");
        }
    } while (num1 <= 0 || num2 <= 0);
    int result = gcd(num1, num2);
    printf("The Greatest Common Divisor of %d and %d is: %d\n", num1, num2, result);

    return 0;
}