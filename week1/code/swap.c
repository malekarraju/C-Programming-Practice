// Program to swap two numbers using a temporary variable

#include <stdio.h>      

int main() {
    int a, b, temp;

    printf("Enter the value of a: ");
    scanf("%d", &a);

    printf("Enter the value of b: ");
    scanf("%d", &b);

    // Swapping using a temporary variable
    temp = a;
    a = b;
    b = temp;

    printf("After swapping:\n");
    printf("Value of a: %d\n", a);
    printf("Value of b: %d\n", b);
    printf("Value of Temp is: %d\n", temp);

    return 0;
}