// Print all Natural number using function and sum them all
#include <stdio.h>

void AllNatural(int e);  // function to print natural number
int SumOfNatural(int sum);

int main()
{
    int end;
    printf("Enter the End number: ");
    scanf("%d", &end);

    AllNatural(end);

    return 0;
}

void AllNatural(int e)
{
    int sum;
    for(int i=1; i<=e; i++)
    {
        printf("%d ", i);
        sum = SumOfNatural(i);
    }
    printf("\nSum of all Natural number is %d", sum);
}

int SumOfNatural(int n)
{
    int sum=0;
    sum=sum+n;
    return sum;
}