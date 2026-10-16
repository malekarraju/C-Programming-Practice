// WAP accept a decimal nuber and convert it to binary using function
#include <stdio.h>

void dectobin(int);
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);

    dectobin(num);
    printf("\nDecimal to Hexadecimal = %x", num);
    printf("\nDecimal to Octal = %o", num);
    return 0;
}

void dectobin(int n)  //10, 5, 2, 1, 0
{
    if(n==0) return;           // base case: stop recursing
  //int res = n%2; //0 1 0 1   // get the last bit (0 or 1)
    dectobin(n/2); //5 2 1 0   // recurse on the rest of the number
    printf("%d", n%2);         // print AFTER the recursive call returns

    return;
}
/*
### 5 Important Points
1. Uses recursion to convert a decimal number to binary.
2. Base case `if(n == 0) return;` stops the recursion.
3. `dectobin(n/2);` divides the number by 2 in each recursive call.
4. `n % 2` gives the binary digit (0 or 1).
5. Printing after the recursive call displays the binary number in the correct order (MSB to LSB).
*/