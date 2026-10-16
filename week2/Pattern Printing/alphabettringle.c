// printing                A               A=65 - Z=90        a=97 - z=122
                        // A B
                        // A B C
#include <stdio.h>

int main()
{
    int num; // 3

    printf("Enter number: ");
    scanf("%d", &num);


    for(int i=1; i<=num; i++) // outer loop:- number of line (rows)
    {
        for(int j=1; j<=i; j++) // inner loop:- numbers in each line (column)
        {
            printf("%c ", j+64);      // printf("%d ", j); for number 1
        }                                               //    1 2
                                                        //    1 2 3
        printf("\n");
    }

    return 0;
}