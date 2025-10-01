#include <stdio.h>
#include <stdbool.h>

bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int start, end;
    printf("Enter start and end: ");
    scanf("%d %d", &start, &end);

    printf("Primes between %d and %d: ", start, end);
    for (int i = start; i <= end; i++) {
        if (isPrime(i)) printf("%d ", i);
    }
    printf("\n");
    return 0;
}
