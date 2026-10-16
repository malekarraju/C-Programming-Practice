//Copy one String to another String

#include<stdio.h>
#include<string.h>

int main()
{
    char str1[20];
    char str2[20];

    char *ptr1=str1, *ptr2=str2;

    puts("Enter the String 1: ");
    fgets(ptr1, sizeof(str1), stdin);
    str1[strcspn(ptr1,"\n")]='\0';


    printf("----Before Copy--------\n");
    printf("%s\n",str1);
    printf("%s\n",str2);

    int i;
    for(i=0; *(ptr1+i)!='\0'; i++)
    {
        *(ptr2+i)=*(ptr1+i);
    }
    *(ptr2+i)='\0';

    printf("----After Copy--------\n");
    printf("%s\n",str1);
    printf("%s\n",str2);

    return 0;
}