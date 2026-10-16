#include<stdio.h>

int main()
{
    int r, c;

    printf("Enter number of rows: ");
    scanf("%d", &r);
    printf("Enter number of columns: ");
    scanf("%d", &c);

    int mat1[r][c], mat2[r][c];
    
    // Enter Elements of First Matrix
    printf("Enter elements of first matrix:\n");
    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
            scanf("%d", &mat1[i][j]);
            
    // Enter Elements of Second Matrix
    printf("Enter elements of second matrix:\n");
    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
            scanf("%d", &mat2[i][j]);

    int equal = 1;
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            if(mat1[i][j] != mat2[i][j]) 
            {
                equal = 0;
                break;
            }
        
        }
        if(equal==0) break;
        
        printf("\nI am in outer loop");
    }

    if(equal) printf("\nMatrix are Equal");
    else printf("\nMatrix are  not Equal");

    return 0;
}