// Pattern Printing , Plus Star 
                                        //  *          = (n/2)+1
                                        // ***
                                        //  *

#include <stdio.h>

int main()
{
    int num; //odd

    printf("Enter row and column: ");
    scanf("%d", &num);

    for(int i=1; i<=num; i++) // outer loop:- number of line (rows)
    {
        for(int j=1; j<=num; j++) // inner loop:- number of starts "*" in each line (column)
        {
            if( j==num/2+1  || i==num/2+1 )  
            {
                printf("*");
            }
            else 
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}