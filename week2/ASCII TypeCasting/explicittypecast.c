// Explicit Type Casting ( manual Type Conversion)
// Syntax: (type_name) expression


#include <stdio.h>

int main()
{
    //ex1: float to int
    float val = 65.57;
    int res;

    res= (int)val;
    printf("%d",res);

    // ex2: int to char
    int num=97;
    char ch;

    ch = (char)num+10;
    printf("\nch = %c", ch);

    //ex3: Division
    int a =17, b= 5;
    float div;

    div = (float)a/b;
    printf("\n%.2f", div);

    return 0;
}