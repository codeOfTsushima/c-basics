#include <stdio.h>
#include <string.h>

struct Book {
    char title[50];
    char author[50];
    int year;
};

int main() {
   
    struct Book book1;

  
    strcpy(book1.title, "The C Programming Language");
    strcpy(book1.author, "Dennis M. Ritchie");
    book1.year = 1978;

    printf("Book Title: %s\n", book1.title);
    printf("Author: %s\n", book1.author);
    printf("Year Published: %d\n", book1.year);

    return 0;
}