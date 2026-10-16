// WAP Accept the number, check the nth bit of a number(0/1). Checking a specific bit

#include <stdio.h>

int main()
{
    int num, pos;

    printf("Enter the number:");
    scanf("%d", &num);

    printf("Enter the bit position you want to check (0/1): ");
    scanf("%d", &pos);

    int res = (num>>pos) & 1;

    if(res==0)
    {
        printf("The %d position bit of number %d is clear(0)", pos, num);
    }
    else
    {
        printf("The %d position bit of number %d is set(1)", pos, num);
    }
}

