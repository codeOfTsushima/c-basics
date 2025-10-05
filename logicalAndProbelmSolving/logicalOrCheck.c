#include <stdio.h>
int main() {
    
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
  int result = (a > 10) || (b > 10);

    
  if (result) {
        printf("At least one number is greater than 10\n");
    } else {
        printf("Neither number is greater than 10\n");
    }

    return 0;
}
