
/*
 * Program: Print a 2x2 Matrix
 * Description: Initializes a 2-row, 2-column integer matrix
 *              and displays its elements in matrix (row-column) format.
 */

#include<stdio.h>

int main()
{   
    int rsize, csize;
    printf("Enter the Row size: ");
    scanf("%d", &rsize);
    printf("Enter the Column size: ");
    scanf("%d", &csize);

    int Matrix[rsize][csize];

    for(int i=0; i<rsize;i++)
    {
        for(int j=0; j<csize; j++)
        {
            printf("Enter value for Matrix[%d][%d]: ", i, j);
            scanf("%d", &Matrix[i][j]);
        }
    }

    for(int i=0; i<rsize;i++)
    {
        for(int j=0; j<csize; j++)
        {
            printf("%d ", Matrix[i][j]);
        }
        printf("\n");
    }

    return 0; // Program executed successfully
}