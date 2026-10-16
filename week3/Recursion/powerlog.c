// Make a function which calculates 'a' raised to the power 'b' using recursion.

#include <stdio.h>
int power(int, int);

int main()
{
    int base, expo, res;
    printf("Enter the Base number: ");
    scanf("%d", &base);
    printf("Enter the Exponant number: ");
    scanf("%d", &expo);

    res = power(base, expo);
    printf("Result = %d", res);

    return 0;
}
// x^y = x*x^y-1 = x*x*x*x*x*..y  = x^y/2 * x^y/2
int power(int x, int y)
{
    if(y==0) return 1;
    int a = power(x,y/2);
    if(y%2==0) return a*a;
    else return a*a*x;
}