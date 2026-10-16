// Lower Case converted into Upper Case
#include<stdio.h>

int main()
{
    char name[20];

    puts("Enter the lower case string: ");
    // gets(name);
    fgets(name, sizeof(name), stdin);

    for(int i=0; name[i]!='\0'; i++)
    {
        if(name[i]>=97 && name[i]<=122)
        name[i]=name[i]-32;
    }
    printf("\nConvertion of lower to upper case is: %s", name);

    return 0;
}