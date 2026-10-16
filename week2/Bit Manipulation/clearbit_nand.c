// clearing bit

#include <stdio.h>

int main()
{
    int num, pos;

    printf("Enter the Number: "); // enter: 6 = 0110
    scanf("%d", &num); // enter: position 1, so answer will be 0100 = 4

    printf("Enter the bit position to be clear: ");
    scanf("%d", &pos);

    num = num & ~(1<<pos);  // Explanation if num=6, pos=1
                            //        6 = 0110
                            // (1<<1)   = 0010
                            // ~(1<<1)  = 1101
                            // result   = 0110
                            //         &  1101
                            //           ------
                            //            0100 = 4
    printf("Result is %x\n", num);

    return 0;
}