//  Addtion of two number using Pointer
#include<stdio.h>

int main()
{
    int num1, num2;
    int* ptr1= &num1;
    int* ptr2= &num2;

    printf("Enter the 2 number: ");
    scanf("%d%d", ptr1, ptr2);

    int sum = *ptr1 + *ptr2;
    printf("Sum is %d", sum);

    return 0;
}
