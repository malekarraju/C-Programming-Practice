// accept the radius and find diameter and circumference

#include <stdio.h>

#define PI 3.14159   // preprocessor macro: replaces "PI" with 3.14159 as text before compiling (no semicolon, no memory used)

int main()
{
    float r;

    printf("Enter the Radius of Circle(in cm): ");
    scanf("%f", &r);
    printf("Radius of circle is %.2fcm", r);

    float diameter, circumference;

    diameter = r*2;
    printf("\nDiameter of circle is %.2fcm", diameter);

    circumference = 2 * PI * r;
    printf("\nCircumference of Circle is %.2fcm", circumference);

    return 0;

}