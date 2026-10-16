// Find Alphabet or not

#include <stdio.h>

int main()
{
    char ch;
    printf("enter the character: ");
    scanf("%c", &ch);

    ((ch>=65 && ch<=90) || (ch>=97 && ch<=122))? printf("%c its alphabet",ch) : printf("Its not a alphabet");

}