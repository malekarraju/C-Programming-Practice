// WAP to find n digit sum
#include <stdio.h>

int sum(int);

int main()
{
    int num, res;
    printf("Enter the number: "); // 123
    scanf("%d", &num); 

    res = sum(num);
    printf("Sum of digits(%d) is = %d", num, res);

    return 0;
}

int sum(int x) // 123, 12, 1, 0
{
    int digit, res;

    if(x==0) return 0;
    digit = x % 10; // Pulling: 3, 2, 1
    res = digit + sum(x/10); 
//        3,2,1     12, 1, 0

    return res;
}