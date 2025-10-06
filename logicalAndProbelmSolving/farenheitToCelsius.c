#include <stdio.h>
int main()
{
    float celcius, farenheit;
    printf("Enter the farenheit value");
    scanf("%f", &farenheit);
    celcius = (farenheit-32)*5/9;
    printf("%.2f celcius", celcius);
}