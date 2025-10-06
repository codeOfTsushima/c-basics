#include <stdio.h>
int main()
{
    int number,sum;
    printf("Enter 3 digit number \n");
    scanf("%d", &number);
    int a = number/100;
    int b = number%100;
    int c = b/10;
    int d = b%10;
    sum= a+c+d;
    printf("The sum of 3 digit number is %d \n", sum);
    return 0;

}