// Write a program to check whether a number is divisible by both 5 and 11 using if-else statment

#include <stdio.h>

int main()
{
    int num;

    printf("Enter the number: ");
    scanf("%d", &num);

    if(num%5==0 && num%11==0)
    {
        printf("%d is divisble by both 5 & 11", num);
    }
    else
    {
        printf("%d is not divisble by 5 & 11", num);
    }

    return 0;

}