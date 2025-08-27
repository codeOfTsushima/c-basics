#include <stdio.h>
int main()
{
    char line[255];
    FILE * fpointer = fopen("employees.txt", "r");
    fgets(line, 255, fpointer);//first timne it will read 1st line of the file
    fgets(line, 255, fpointer);// the second time it will read the second line of the file
    printf( "%s", line);

    fclose(fpointer);
    return 0;
}