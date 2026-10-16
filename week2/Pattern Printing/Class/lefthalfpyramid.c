// Left Half Pyramid
#include <stdio.h>

int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);

    for(int i=1; i<=num; i++)    // print lines
    {
        for(int j=1; j<=(num-i); j++) // print spaces
        {
            printf("#");
        }
        for(int k=1; k<=i; k++)  // printf *
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}