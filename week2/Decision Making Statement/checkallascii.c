//Check the user input is Alphabet/Digits/Special Symbol

#include <stdio.h>

int main()
{
    char ch;

    printf("Enter Character/Symbol/Digits:");
    scanf(" %c",&ch);
    printf("You Entered %c", ch);


    if((ch>=65 && ch<=90) || (ch>=97 && ch<=122))
    {
        printf("\n%c is Alphabet", ch);
    }
    else if(ch>=48 && ch<=57)
    {
        printf("\n%c is digit", ch);
    }
    else
        printf("\n%c is a Special  symbol", ch);

    return 0;

}