#include <stdio.h>

int main()
{
    char colour[20];
    char pluralNoun[20];
    char celebrityA[20];
    char celebrityB[20];

    printf("Enter a colour");
    scanf("%s", colour);
    printf("Enter a plural noun");
    scanf("%s", pluralNoun);
    printf("Enter the celebrity ");
    scanf("%s%s", celebrityA ,celebrityB);
//%s%s is to denote two sets of stringe, or we could use fgets which is more logical, just tried a diff thing

    printf("Roses are %s\n", colour);
    printf("%s are green\n", pluralNoun);
    printf("I love %s %s\n", celebrityA, celebrityB);

}