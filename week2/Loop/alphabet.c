// Print lower case alphabet from a-z

#include <stdio.h>

int main()
{
    int alph=97;

    do
    {
        printf("%c ", alph);
        alph++;
    }
    while(alph<=122);

}