#include<stdio.h>

#define NUM 5

int main()
{

    #if NUM%2==0
        printf("Even Number");
    #else
        printf("Odd Number");
    #endif

    return 0;
}