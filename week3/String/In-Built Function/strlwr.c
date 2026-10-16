// 
#include<stdio.h>
#include<string.h>

int main()
{
    char name[20];

    puts("Enter the Upper case string: ");
    gets(name);
    // fgets(name, sizeof(name), stdin);

    strlwr(name);
    printf("Upper to Lower case string is %s", name);
    return 0;
}