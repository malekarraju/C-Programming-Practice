// 
#include<stdio.h>
#include<string.h>

int main()
{
    char name1[20], name2[20];

    puts("Enter Name1 string: ");
    gets(name1);
    puts("Enter Name2 string: ");
    gets(name2);
    // fgets(name, sizeof(name), stdin);

    printf("\nBefor Name1 is %s", name1);
    printf("\nBefor Name2 is %s", name2);

    strcat(name1,name2);

    printf("\nAfter Name1 is %s", name1);
    printf("\nAfter Name2 is %s", name2);

    return 0;
}