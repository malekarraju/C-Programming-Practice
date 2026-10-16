// Bit Manipulation: Setting 3 Bits at Given Positions (with validation)

#define MAX_BIT_POS 31    // highest valid bit position for a 32-bit int (bits 0-31)

#include <stdio.h>

int main()
{
    int num; // enter: 8 = 0b1000   in hex 0x00000008  (int has 4bytes means 0-31 bits)
    int pos1, pos2, pos3; // enter: set 2nd position bit

    printf("Enter the number: ");
    scanf("%d", &num); 

    printf("Enter the 3 bits position that need to be set: ");
    scanf("%d %d %d", &pos1, &pos2, &pos3);

    if (pos1 >= 0 && pos1 <= MAX_BIT_POS && pos2 >= 0 && pos2 <= MAX_BIT_POS && pos3 >= 0 && pos3 <= MAX_BIT_POS)  //best method is for loop
    {
        num = num | (1<<pos1) | (1<<pos2) | (1<<pos3);
        printf("Result is %x", num); // 12 in decimal= 0b1100, c in hex
    }
    else
    {
        printf("Invalid bit position. Must be between 0 and %d.\n", MAX_BIT_POS);
    }

    return 0;
}