#include<stdio.h>

int main()
{
    int r, c;

    printf("Enter number of rows: ");
    scanf("%d", &r);
    printf("Enter number of columns: ");
    scanf("%d", &c);

    int mat1[r][c], mat2[r][c], sum[r][c];

    // Input first matrix
    printf("Enter elements of first matrix:\n");
    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
            scanf("%d", &mat1[i][j]);

    // Input second matrix
    printf("Enter elements of second matrix:\n");
    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
            scanf("%d", &mat2[i][j]);

    // Add the two matrices
    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
            sum[i][j] = mat1[i][j] + mat2[i][j];

    // Print the result
    printf("Sum of the two matrices:\n");
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
            printf("%d ", sum[i][j]);
        printf("\n");
    }

    return 0;
}