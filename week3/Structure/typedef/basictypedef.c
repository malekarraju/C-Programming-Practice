#include<stdio.h>


int main()
{
    // Ex1
    typedef unsigned int uint36_t;

    uint36_t num = 35454;
    printf("\n%u", num);

    //Ex2
    typedef short unsigned int  suint16_t;

    suint16_t num2 = 546;
    printf("\n%hu",num2);

    //Ex3
    typedef char raju;

    raju ch[]={"Raju"};
    printf("\n%s",ch);

    return 0;
}