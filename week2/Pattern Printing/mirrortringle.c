// pattern printing  
// . . . *    n-1
// . . * *
// . * * *
// * * * *

#include <stdio.h>

int main()
{
    int num; 

    printf("Enter number: ");
    scanf("%d", &num);


    for(int i=1; i<=num; i++) // outer loop:- number of line (rows)
    {
        for(int j=1; j<=num-i; j++) // inner loop:- numbers in each line (column)
        {
            printf(" ");  
        }   
        for(int k=1; k<=i; k++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}