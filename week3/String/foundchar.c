#include <stdio.h>

int main()
{
    char name[100];
    char ch;
    int found = 0;

    printf("Enter a string: ");
    fgets(name, sizeof(name), stdin);

    printf("Enter character to search: ");
    scanf(" %c", &ch);

    for(int i = 0; name[i] != '\0'; i++)
    {
        if(name[i] == ch)
        {
            found = 1;
            break;
        }
    }

    if(found)
        printf("Character '%c' is found.", ch);
    else
        printf("Character '%c' is not found.", ch);

    return 0;
}