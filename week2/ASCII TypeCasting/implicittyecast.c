// Type casting:

#include <stdio.h>

int main()
{
    // ex1: auto type casting
    float x= 58.36;
    int res;

    res = x;

    // ex2: char to int conversion 
    char ch= 'U';
    int res1;

    res1 = ch;

    printf("%d", res1);

    //ex3: char + int = float (Implicit Type Cast)

    char a = 'p';
    int b = 20;
    float c;

    c=a+b;

    printf("\n%.2f", c);

    return 0;
}