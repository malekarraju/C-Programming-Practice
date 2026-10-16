// Enter the alphabet from A-Z/a-z, and check which are vowel and consonant

#include <stdio.h>

int main()
{
    char alphabet;

    printf("Enter the lower case alphabet number (1a-z): ");
    scanf("%c", &alphabet);

    switch(alphabet)
    {
    case 'a': case 'A':
    case 'e': case 'E':
    case 'i': case 'I':
    case 'o': case 'O':
    case 'u': case 'U':
        printf("%c is a vowel", alphabet);
        break;

    default:
        printf("%c is a consonant", alphabet);
        break;
    }

    return 0;
}