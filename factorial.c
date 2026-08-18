#include <stdio.h>

int main() {
    int n;
    int factorial = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial is not defined for negative numbers.");
    } else {
        for (int i = 1; i <= n; i++) {
            factorial = factorial * i;
        }

        printf("Factorial of %d = %d", n, factorial);
    }

    return 0;
}
