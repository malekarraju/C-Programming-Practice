// ============= Diamond Pattern ===============

#include <stdio.h>

int main()
{
    int num, mid;
    printf("Enter the number: ");
    scanf("%d", &num);

    /*========================Advanced Approach===============================*/
    for(int i=1; i<=num*2-1; i++)         // print line
    {
        mid = (i<=num)? i: num*2-i;       // It makes mid

        for(int j=1; j<=num-mid; j++)     // print spaces
        {
            printf(" ");
        }
        for(int k=1; k<=(mid*2)-1; k++)   // print star  (for diamond i*2-1)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}

#include <stdio.h>

int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);

    for (int i=1; i<=num; i++)  // print upper half of diamond
    {
        for(int j=1; j<=num-i; j++)
        {
            printf(" ");
        }
        for(int k=1; k<=i*2-1; k++)
        {
            printf("*");
        }
        printf("\n");
    }
/*====================Easy Approach=====================*/
    for (int i=num-1; i>=1; i--)  // make this line loop run reverse to print the lower half of the diamond
    {
        for(int j=1; j<=num-i; j++)
        {
            printf(" ");
        }
        for(int k=1; k<=i*2-1; k++)
        {
            printf("*");
        }
        printf("\n");
    }

    /*=====================Hard Approach=====================*/
    // for (int i=1; i<=num-1; i++)  // num=5  5-1=4
    // {
    //     for(int j=1; j<=i; j++)
    //     {
    //         printf(" ");
    //     }
    //     for(int k=1; k<=(num-i)*2-1; k++)  // (num-i)*2-1 
    //     {
    //         printf("*");
    //     }
    //     printf("\n");
    // }

    /*========================Advanced Approach===============================*/

    // int mid;
    // for(int i=1; i<=num*2-1; i++)         // print line
    // {
    //     mid = (i<=num)? i: num*2-i;       // It makes mid

    //     for(int j=1; j<=num-mid; j++)     // print spaces
    //     {
    //         printf(" ");
    //     }
    //     for(int k=1; k<=(mid*2)-1; k++)   // print star  (for diamond i*2-1)
    //     {
    //         printf("*");
    //     }
    //     printf("\n");
    // }

    return 0;
}