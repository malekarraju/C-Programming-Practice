// WAP to find factorial of a number recursively
#include <stdio.h>

int fact(int);  // function declaration

int main()
{
    int num, res;
    printf("Enter the number: ");
    scanf("%d", &num);
    if(num<0)
    {
        printf("Envalid Input");
        return 0;
    }
    res = fact(num);  // function call by passing value
    printf("Factorial of %d is %d", num, res);
    return 0;
}

int fact(int x)  // 5, 4, 3, 2, 1, 0
{
    int res;

    if(x==0) return 1;  // base condition to stop recursion
    res = x * fact(x-1);  // recursive function
    //    5 *  4, 3, 2, 1
    return res;
}