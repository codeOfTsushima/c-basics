#include <stdio.h>
int main()
{
    int secretnumber = 5;
    int guess;
    while (guess != secretnumber)
    {
        printf("Enter a number");
        scanf("%d", &guess);

    }
    printf("You win!");
    return 0;
}