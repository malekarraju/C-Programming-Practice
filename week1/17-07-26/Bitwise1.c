// Bitwise Shifting Example in C

#include <stdio.h>

int main() 
{
    int num1=10, num2=8, comp1, comp2;
    
    // ~ (Bitwise NOT / 1's Complement)
    // Flips all bits (0 ↔ 1)
    // Formula: ~n = -(n + 1)


    comp1 = ~num1;
    printf("~%d = %d\n", num1, comp1);

    comp2 = ~num2;
    printf("~%d = %d\n", num2, comp2);

    return 0;
}



/*

#include <stdio.h>

int main() 
{
    int num1=10, num2=8;
    int and,or, exor,comp1, comp2,rshift, lshift;

    and = num1 & num2;
    printf("%d & %d = %d\n", num1, num2, and);

    comp1 = ~num1;
    printf("~%d = %d\n", num1, comp1);

    comp2 = ~num2;
    printf("~%d = %d\n", num2, comp2);

    rshift = num1 >> 3;
    printf("%d >> 1 = %d\n", num1, rshift);

    lshift = num2 << 2;
    printf("%d << 2 = %d\n", num1, lshift);
    return 0;
}

*/