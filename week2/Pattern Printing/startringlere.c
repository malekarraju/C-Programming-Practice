// printing             // ***
                        // **
                        // *
#include <stdio.h>

int main()
{
    int num; // 3

    printf("Enter number: ");
    scanf("%d", &num);

    //temp = num; or decrement for loop
    for(int i=1; i<=num; i++) // outer loop:- number of line (rows)
    {
        for(int j=1; j<=(num+1)-i; j++) // inner loop:- ? in each line (column)
        {             //(num+1)-1
            printf("*");      // printf("%d ", j); for number 123
        }                                               //    12
                                                        //    1
        // temp--;

        printf("\n");
    }

    return 0;
}