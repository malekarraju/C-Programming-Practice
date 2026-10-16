// 
#include<stdio.h>
#include<string.h>

int main()
{
    char name1[20], name2[20];

    puts("Enter Name1 string: ");
    gets(name1);
    // fgets(name, sizeof(name), stdin);

    printf("\nBefor Name1 is %s", name1);
    printf("\nBefor Name2 is %s", name2);

    strcpy(name2,name1);

    printf("\nAfter Name1 is %s", name1);
    printf("\nAfter Name2 is %s", name2);

    return 0;
}