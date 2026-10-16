// Print all Natural number using function
#include <stdio.h>

void AllNatural(int s, int e);  // function to print natural number

int main()
{
    int start, end;
    printf("Enter the Start number: ");
    scanf("%d", &start);
    printf("Enter the End number: ");
    scanf("%d", &end);

    AllNatural(start,end);

    return 0;
}

void AllNatural(int s, int e)
{
    for(int i=s; i<=e; i++)
    {
        printf("%d ", i);
    }
}