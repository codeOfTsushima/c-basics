#include <stdio.h>
int main()
{
    FILE * fpointer = fopen("employees.txt", "a");
    fprintf(fpointer, "\nkelly, coustomer service");

    fclose(fpointer);
}