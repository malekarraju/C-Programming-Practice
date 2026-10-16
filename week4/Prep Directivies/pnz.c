#include<stdio.h>

#define NUM 5

int main()
{

    #if NUM>0
        printf("Positive Number");

    #elif NUM<0
        printf("Negative Number");
        
    #else
        printf("Number is Zero");
    #endif

    return 0;
}