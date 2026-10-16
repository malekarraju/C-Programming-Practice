// write a C program to find the total number of aplhabets, digits or special characters in a string

#include<stdio.h>
#include<string.h>

int main()
{
    char name[20];
    int alpha=0, digi=0, spec=0;
    puts("Enter Differnet Characters: ");
    gets(name);

    for(int i=0; i<strlen(name); i++)
    {
        if((name[i]>='A' && name[i]<='Z')|| (name[i]>='a' && name[i]<='z'))
        {
            alpha++;
        }
        else if(name[i]>='0' && name[i]<='9')
        {
            digi++;
        }
        else
        {
            spec++;
        }
    }

    printf("\nCount of Alphabet is %d", alpha);
    printf("\nCount of Digits is %d", digi);
    printf("\nCount of Special Symbols is %d", spec);


return 0;
}

