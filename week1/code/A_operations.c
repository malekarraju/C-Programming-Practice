// Program for Arthmetic operations

#include <stdio.h>

int main()
{
    float a, b, add, sub, mul, div, mod;

    printf("Enter the value of a & b:");
    scanf("%f %f", &a, &b);

    add = a+b;
    printf("Addition of a & b is: %.2f",add);

    sub = a-b;
    printf("\nSubstraction of a & b is: %.2f",sub);

    mul = a*b;
    printf("\nMultiplication of a & b is: %.2f",mul); 

    div = a/b;
    printf("\nDivision of a & b is: %.2f",div);

    mod = (int)a % (int)b;  // Modulus operator works only with integers, so we cast a and b to int
    printf("\nModulus of a & b is: %.2f",mod);

    return 0;

}