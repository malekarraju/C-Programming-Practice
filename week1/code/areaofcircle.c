//  valuse of pi is 3.14159
// area of circle = pi * r * r
// program to calculate area of circle

#include <stdio.h>

int main()

{
    const float pi = 3.14159;
    printf("Value of pi is: %f", pi);

    float r;
    printf("\n\nEnter the value of Radius: ");
    scanf("%f",&r);

    float area = pi*r*r;
    printf("Area of Circle is : %.3f\n", area);

    return 0;
}