#include<stdio.h>

#define NUM 23

int main()
{
    #if NUM == 0
        printf("if part executed");

    #else
        printf("else part executed");

    #endif

    return 0;
}