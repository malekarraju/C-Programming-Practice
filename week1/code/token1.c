#include <stdio.h>

int main()
{
    const int Max = 800;
    printf("Max value is: %d\n", Max);

    int res = Max * 2;
    printf("Result of Max * 2 is: %d\n", res);


    const float pi = 3.14159;
    printf("Value of pi is: %.5f\n", pi);

    float res2= pi * 2;
    printf("Result of pi * 2 is: %.5f\n", res2);

    return 0;
}