#include <stdio.h>
#include <stdlib.h> // Required for malloc() and free()

int main() {
    int *arr;
    int n;

    printf("How many integers do you want to store? ");
    scanf("%d", &n);

    // Allocate memory for 'n' integers
    // sizeof(int) ensures we get the right amount of memory per integer
    arr = (int*) malloc(n * sizeof(int));

 
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1; 
    }

    // Use the allocated memory like a normal array
    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("You entered: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    free(arr);

    return 0;
}