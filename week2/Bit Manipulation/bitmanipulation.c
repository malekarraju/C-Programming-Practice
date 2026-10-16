// Manipulation of Bit

#include <stdio.h>

int main()
{
    int num, bit;

    printf("Enter the number and bit: ");
    scanf("%d %d", &num, &bit);

    // int res = (1<<bit) | num; // Setting 1 on bit number(bit no. by user)
    // printf("The Particular bit(%d) status is: %d",bit, res);

    int res2 = (~(1<<bit)) & num; // Setting 1 on bit number(bit no. by user)
    printf("\n\nThe Particular bit(%d) status is: %d",bit, res2);


    return 0; 
}