//WAP to printf factorial number

#include <stdio.h>

int main()
{
    int num, res=1;
    printf("Enter the number: ");
    scanf("%d", &num);

    printf("Factorial of %d is ", num);

    while(num>=1)
    {
        res = res*num;
        printf("%d",num);
        printf("*");

        num--;
    }
    printf("= %d", res);

    return 0;
}