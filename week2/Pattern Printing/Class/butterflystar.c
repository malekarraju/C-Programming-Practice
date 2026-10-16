// Butterfly Star Printing
#include <stdio.h>

int main()
{
    int num; 
    printf("Enter the number: ");
    scanf("%d", &num);

    for(int i=1; i<=num; i++)
    {
        for(int j=1; j<=num; j++)
        {
            if( j==1 || j==num || i==j || i+j==num+1)
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