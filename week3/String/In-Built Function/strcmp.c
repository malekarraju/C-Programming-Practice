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

    int check = strcmp(name1,name2);

    if(check) printf("not same");
    else printf("both are same");

    return 0;
}