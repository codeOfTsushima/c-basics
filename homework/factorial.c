#include <stdio.h>

int main() {
    int n, fact = 1, i = 1;

    printf("Enter a number");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial is not defined for negative numbers\n");
    } else {
        while (i <= n) {
            fact = fact * i;
            i++;
        }
        printf("Factorial of %d = %d\n", n, fact);
    }

    return 0;
}
