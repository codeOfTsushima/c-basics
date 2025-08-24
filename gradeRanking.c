#include <stdio.h>
int main()
{
    char grade;
    printf("Enter grade");
    scanf("%c", &grade);
    switch (grade )//Instead of writing long chains of if...else if...else, you can use a switch for cleaner and faster code.
    {//When the value of the switch matches a case constant, the code under that case executes.
    case 'A':
        printf("You did great!");
        break;
    case 'B':
        printf("You did alright!");
        break;
    case 'C':
        printf("Do better next time");
        break;
    case 'D':
        printf("Need improvement");
        break;
    case 'F':
        printf("You failed");
        break;
    
    
    default://default is basically is like an else
        printf("Invalid grade");
        break;
    }
}