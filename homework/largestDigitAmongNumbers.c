#include <stdio.h>

int main() {
    int num, rem;
    int max = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    int temp = num;
    
    if (temp < 0) {
        temp = -temp;
    }

    while (temp > 0) {
        rem = temp % 10;
        if (max < rem) {
            max = rem;
        }
        temp = temp / 10;
    }

    printf("Largest digit in %d is: %d\n", num, max);

    return 0;
}