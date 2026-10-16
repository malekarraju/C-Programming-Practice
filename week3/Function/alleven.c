// Print all even number using function
#include <stdio.h>

void allEven(int s, int e);  // function to print natural number

int main()
{
    int start, end;
    printf("Enter the Start number: ");
    scanf("%d", &start);
    printf("Enter the End number: ");
    scanf("%d", &end);

    allEven(start,end);

    return 0;
}

void allEven(int s, int e)
{
    for(int i=s; i<=e; i++)
    {
        if(i%2==0) printf("%d ", i);
    }
}