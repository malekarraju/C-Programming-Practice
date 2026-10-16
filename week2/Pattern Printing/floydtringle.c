// printing                1
                        // 2 3
                        // 3 4 5
#include <stdio.h>

int main()
{
    int num; // 3

    printf("Enter number: ");
    scanf("%d", &num);

    int a=1; // outside the loop
    for(int i=1; i<=num; i++) // outer loop:- number of line (rows)
    {
        for(int j=1; j<=i; j++) // inner loop:- numbers in each line (column)
        {
            printf("%d ", a);  
            
            a++;       // for even a+=2   
        }
        printf("\n");
    }

    return 0;
}