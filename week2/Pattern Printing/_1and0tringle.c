// printing             // 1
                        // 0 1
                        // 1 0 1
#include <stdio.h>

int main()
{
    int num;

    printf("Enter number: ");
    scanf("%d", &num);

    // Easy method 

    for(int i=1; i<=num; i++) // outer loop:- number of line (rows)
    {
        for(int j=1; j<=i; j++) // inner loop:- numbers in each line (column)
        {
            if((i+j)%2==0) printf("1 ");
            else printf("0 ");
        }                                               
        printf("\n");
    }

// 2nd Method
    // int a;
    // for(int i=1; i<=num; i++) // outer loop:- number of line (rows)
    // {
    //     // defining starting value
    //     if( i%2 != 0) a=1;  // for odd
    //     else  a=0;          // for even

    //     for(int j=1; j<=i; j++) // inner loop:- numbers in each line (column)
    //     {
    //         printf("%d ",a);

    //         if(a==0)  a=1;
    //         else a=0;
    //     }                                               
    //     printf("\n");
    // }

    return 0;
}