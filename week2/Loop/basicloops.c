//WAP accept a number and print the natural number  from the 1 to end.

#include <stdio.h>

int main()
{
    int start=1, end;

    printf("Enter the End number: ");
    scanf("%d", &end);

    printf("Natural Number from 1-%d are: ", end);

    // while loop
    while(start<=end)
    {
        printf("%d ", start);

        ++start;
    }

    // for loop 
    int i;

    for(i=1; i<=7; i++)
    {
        printf("\nSacripts:");
    }

    // Do while
    int a=10; 

    do
    {
        printf("\nBatch P123:");

        a--;
    } while( a >= 1);

    return 0;
}