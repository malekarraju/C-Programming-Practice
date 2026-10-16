
#include <stdio.h>

int main()
{
    int num;
    printf("Enter the Number: ");
    scanf("%d", &num);

    for(int i=1; i<=num; i++)
    {
        for(int j=1; j<=i; j++)
        {
            printf(" ");
        }
        for(int k=1; k<=num-1; k++)
        {
            printf("*");
        }
        printf("\n");
    }
}

