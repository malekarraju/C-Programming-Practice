#include<stdio.h>

int main()
{
    int r, c;

    printf("Enter number of rows: ");
    scanf("%d", &r);
    printf("Enter number of columns: ");
    scanf("%d", &c);

    int mat[r][c];

    // Take Element
    printf("Enter elements of first matrix:\n");
    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
            scanf("%d", &mat[i][j]);

    // Diagonal addition
    int sum=0;
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)  // int j=i;
        {
            if(i == j) 
            {
                sum = sum+mat[i][j];
            }
        }
    }
    printf("Sum of diagonal is = %d", sum);

    return 0;
}