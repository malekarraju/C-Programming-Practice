// Pattern Printing , Solid rectangle  
                                        // *****
                                        // *****
                                        // *****
                                        // *****
#include <stdio.h>

int main()
{
    int row, column; // 4, 5

    printf("Enter row and column: ");
    scanf("%d %d", &row, &column);

    for(int i=1; i<=row; i++) // outer loop:- number of line (rows)
    {
        for(int j=1; j<=column; j++) // inner loop:- number of starts "*" in each line (column)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}