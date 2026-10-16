// printing number square  1234
                        // 1234
                        // 1234
#include <stdio.h>

int main()
{
    int row, column; // 3, 3

    printf("Enter row : ");
    scanf("%d", &row);
    printf("Enter column: ");
    scanf("%d", &column);

    for(int i=1; i<=row; i++) // outer loop:- number of line (rows)
    {
        for(int j=1; j<=column; j++) // inner loop:- numbers in each line (column)
        {
            printf("%d ",j);
        }
        printf("\n");
    }

    return 0;
}