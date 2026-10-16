// Rhombus Pattern
#include <stdio.h>

int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);

    for(int i=1; i<=num; i++)        // print lines
    {
        for(int j=1; j<=i-1; j++)    // print spaces
        {
            printf(" ");
        }
        for(int k=1; k<=num; k++)    // print *
        {
            printf("*");
        }
        printf("\n");
    }
}