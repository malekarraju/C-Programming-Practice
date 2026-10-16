// swaping two variables in function with pass by reference.

#include <stdio.h>

void swap(int*, int*);

int main()
{
    int a, b;
    printf("Enter the number of a: ");
    scanf("%d", &a);
    printf("Enter the number of a: ");
    scanf("%d", &b);

    printf("Before swapaping\na = %d and b = %d", a,b);
    swap(&a,&b);  // pass by reference
    printf("\nAfter swapaping\na = %d and b = %d", a,b);

    return 0;
}

void swap(int* x, int *y) // pointer variable store address
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;

    return;
}