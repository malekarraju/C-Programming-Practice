//Take  character as a input and check whether it is alphabet or digit using ternary operator
#include<stdio.h>

int main()
{
    char ch;
    printf("Enter the Character(Alphabet/Digit): ");
    scanf("%c", &ch);

    char *ptr = ((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))? "Alphabet" : "Digit";

    printf(ptr);
    return 0;
}
