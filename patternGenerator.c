#include <stdio.h>

int main() {
    int rows, i, j;

    printf("Enter how many rows you want ");
    scanf("%d", &rows);


    for (i = 1; i <= rows; i++) {
        // Print spaces (for alignment)
        for (j = 1; j <= rows - i; j++) {
            printf(" ");
        }
        // Print stars with row number
        for (j = 1; j <= i; j++) {
            printf("%d ", i);
        }
        printf("\n");
    }

    return 0;
}
