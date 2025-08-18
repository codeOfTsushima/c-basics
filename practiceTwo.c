#include <stdio.h>

int main()
{
    double gpa;
//declaring the variable. ps:do not forget to mention double instead of int
    printf("Enter your gpa");
    scanf("%lf", &gpa);
    //%lf function basically tells the scanf function that we are looking for a double
//scanf is used to read user input. here &age is a pointer
    printf("Your gpa is %f", gpa);
    return 0;
}
