#include <stdio.h>

int main() {
    int n, n1;

  
    scanf("%d", &n);
    scanf("%d", &n1);


    int shelves_needed = n / n1;

    if (n % n1 != 0) {
        shelves_needed = shelves_needed + 1;
    }

    printf("Number of Shelves Needed: %d\n", shelves_needed);

    if (n % n1 == 0) {
        printf("Extra shelf not needed\n");
    } else {
        printf("Extra shelf needed\n");
    }

    return 0;
}