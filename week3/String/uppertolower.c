// Upper Case converted into Lower Case
#include<stdio.h>

int main()
{
    char name[20];

    puts("Enter the upper case string: ");
    // gets(name);
    fgets(name, sizeof(name), stdin);

    for(int i=0; name[i]!='\0'; i++)
    {
        if(name[i]>=65 && name[i]<=90)
        name[i]=name[i]+32;
    }
    printf("\nConvertion of upper to lower case is: %s", name);

    return 0;
}