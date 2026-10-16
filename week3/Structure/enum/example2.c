#include <stdio.h>

enum months { JAN=1, FEB, MAR, APR, MAY, JUN, JULY, AUG, SEPT, OCT, NOV, DEC};

int main()
{
    for(int i=JAN; i<=DEC; i++)
    {
        printf("%d\t", i);
    }

    return 0;
}