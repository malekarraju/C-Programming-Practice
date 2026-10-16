// 
#include<stdio.h>
#include<string.h>

int main()
{
    char name[20];

    puts("Enter the string: ");
    gets(name);
    // fgets(name, sizeof(name), stdin);

    strrev(name);
    printf("Lenght of string is %s", name);
    return 0;
}