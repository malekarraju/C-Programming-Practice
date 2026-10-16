// WAP Accept the number, check LSB and MSB of number

#include <stdio.h>

int main()
{
    int num;

    printf("Enter the number: ");
    scanf("%d", &num); // 6 :- 0000....0110 

    if((num & 1)== 0)
        printf("The LSB bit of s number is Clear (0)");

    else
        printf("The LSB bit of a number is Set (1)");

    return 0;
}

