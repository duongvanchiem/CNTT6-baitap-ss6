#include <stdio.h>
int main() {
    int a, b;
    do {
        printf("Enter the first positive integer: ");
        scanf("%d", &a);
        printf("Enter the second positive integer: ");
        scanf("%d", &b);

        if (a <= 0 || b <= 0) {
            printf("Both numbers must be positive. Please try again.\n");
        }
    } while (a <= 0 || b <= 0);
    int x = a;
    int y = b;
    while (x != y) {
        if (x > y)
            x -= y;
        else
            y -= x;
    }
    printf("Greatest Common Divisor (GCD) of %d and %d is: %d\n", a, b, gcd);

    return 0;
}
