// Reverse Right Half Pyramid
#include <stdio.h>

int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);

    for(int r=1; r<=num; r++)  // print line
    {
        for(int c=1; c<=(num-r)+1; c++) // print *
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}