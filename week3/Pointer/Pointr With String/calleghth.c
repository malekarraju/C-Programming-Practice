#include<stdio.h>

int main()
{
    char str[10];
    char *ptr;

    ptr = str; //&str[0]

    puts("Enter String");
    fgets(ptr, sizeof(str), stdin);

    puts(str);

    int i;
    for(i=0; *(ptr+i)!='\0'; i++);

    printf("Size of String is: %d", i);
    return 0;
}
