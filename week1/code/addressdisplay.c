// String program to demonstrate the use of string functions in C
// This program takes a string input from the user and displays it along with its memory address
#include <stdio.h>

int main()
{
    char name[15];
    printf("Enter the name:");
    scanf("%s", &name);

    printf("Name is: %s", name);
    printf("\nAddress of name variable is: %p\n", &name);

    return 0;
}