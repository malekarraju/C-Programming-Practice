// ternary operator example in C11
// ternary operator required three operands: a condition, a value if true, and a value if false.
// syntax of ternary operator: condition ? value_if_true : value_if_false;

#include <stdio.h>
// check even odd using ternary operator
int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    char *max = (num%2==0)? "even": "odd"; //condition? expression_if_true : expression_if_flase;

    printf("Number is: "); printf(max); // for understanding
    

    return 0;
}