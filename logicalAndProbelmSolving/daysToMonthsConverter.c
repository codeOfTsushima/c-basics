#include <stdio.h>
int main()
{
    int days, months;
    printf("Enter the number of days \n");
    scanf("%d", &days);
    months= days/30;
    days=days%30;
    printf("Months = %d, days = %d \n", months, days);
    return 0;
    
}