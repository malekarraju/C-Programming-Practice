// WAP accept anumber and print a table using all loops

#include <stdio.h>

int main()
{
    int num1, i=1;

    printf("Enter the number: ");
    scanf("%d", &num1);

    // using while loop
    while(i<=10)
    {
        printf("%d x %d = %d\n", num1, i, num1*i);
        i++;
    }

    // using do while
    int num2, j=1;
    printf("Enter the number: ");
    scanf("%d", &num2);

    do
    {
        num2*j;
        printf("%d x %d = %d\n", num2, j, num2*j);
        j++;
    }
    while(j<=10);

    // using for loop
    int num3;
    printf("Enter the number: ");
    scanf("%d", &num3);

    for(int k=1; k<=10; k++)
    {
        num3*k;
        printf("%d x %d = %d\n", num3, k, num3*k);
    }

    return 0;
}