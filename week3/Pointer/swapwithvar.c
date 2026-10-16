#include<stdio.h>

int main()
{
    int a, b, temp;
    int *ptr1=&a, *ptr2=&b;

    printf("Enter two numbers(a & b): ");
    scanf("%d%d", ptr1, ptr2);

    printf("\n-----Before Swapping-----");
    printf("\na = %d",a);
    printf("\nb = %d",b);

    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;

    printf("\n-----After Swapping-----");
    printf("\na = %d",a);
    printf("\nb = %d",b);

    return 0;
}