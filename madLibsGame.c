#include <stdio.h>

int main()
{
    char colour[20];
    char pluralNoun[20];
    char celebrity[20];

    printf("Enter a colour");
    scanf("%s", colour);
    printf("Enter a plural noun");
    scanf("%s", pluralNoun);
    printf("Enter the celebrity");
    scanf("%s", celebrity);

    printf("Roses are %s\n", colour);
    printf("%s are green\n", pluralNoun);
    printf("I love %s\n", celebrity);

}