// 
#include<stdio.h>
#include<string.h>

int main()
{
    char name[20], len;

    puts("Enter the string: ");
    gets(name);
    // fgets(name, sizeof(name), stdin);

    len = strlen(name);
    printf("Lenght of string is %d", len);
    return 0;
}