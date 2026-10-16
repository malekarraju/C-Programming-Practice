// Square Fill Pattern
// how nested loop works: i(r)= row - print lines, j(c)= column - what to prnt on line

#include <stdio.h>

int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);

    for(int i=1; i<=num; i++) // print lines
    {
        for(int j=1; j<=num; j++)  // print *
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}