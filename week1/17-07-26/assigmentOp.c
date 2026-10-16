// Assignment operators in C

#include <stdio.h>

int main()
{

    int a = 5, b = 5;
    
    a+=b;
    a-=b;
    a*=b;
    a/=b;
    a%=b;
    a<<=b;
    a>>=b;
    a&=b;
    a|=b;
    a^=b;

    // try each one by one

    printf("Value of a = %d\n", a);
    printf("Value of b = %d\n", b);


}