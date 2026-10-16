//  find the length and merge (concatenate) two strings
// without using built-in library functions like strlen() or strcat()

#include<stdio.h>

int main()
{
    char name1[20];
    char name2[20];

    puts("Enter name1 the string: ");
    gets(name1);
    puts("Enter name2 the string: ");
    gets(name2);

    printf("\nBefore merge Name1 is: %s", name1);
    printf("\nBefore merge Name2 is: %s", name2);

    int i, len=0;
    for(i=0; name1[i]!='\0'; i++)
    {
        len++;
    }

    for(int j=0; name2[j]!='\0'; j++)
    {
        name1[i]=name2[j];
        if(name1[i]=='\n' || name1[i]==' ') continue;
        i++;
    }
    name1[i]='\0';

    printf("\nAfter mergeName1 is: %s", name1);
    printf("\nAfter merge Name2 befor: %s", name2);

    printf("\nBefore merge size of Name1 is: %d", len);
    printf("\nAfter merge size of Name1 is: %d", i);
    return 0;
}