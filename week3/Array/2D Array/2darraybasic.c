c
/*
 * Program: Print a 2x2 Matrix
 * Description: Initializes a 2-row, 2-column integer matrix
 *              and displays its elements in matrix (row-column) format.
 */

#include<stdio.h>

int main()
{
    // Declare a 2x2 (2 rows, 2 columns) integer matrix
    // Initializer list {7, 2, 9, 4} fills it row by row:
    // Row 0: 7, 2
    // Row 1: 9, 4
    int Matrix[2][2] = {7, 2, 9, 4};

    // Outer loop: walks through each ROW (i = 0, then i = 1)
    for(int i = 0; i < 2; i++)
    {
        // Inner loop: walks through each COLUMN in the current row (j = 0, then j = 1)
        for(int j = 0; j < 2; j++)
        {
            // Print the element at row i, column j, followed by a space
            printf("%d ", Matrix[i][j]);
        }
        // After finishing a row (inner loop done), move to a new line
        printf("\n");
    }

    return 0; // Program executed successfully
}