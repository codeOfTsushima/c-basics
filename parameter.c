#include <stdio.h>
int main()
{
    helloMan("Parthip", 18);
    helloMan("Prithvi", 23);
    helloMan("Prathik", 16);

    return 0;

}
void helloMan(char name[],int age){ //specific function parameters

    printf("Hello %s, you are %d years old\n", name,age);
}