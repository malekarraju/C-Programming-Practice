// Accept the number and toggle the particular bit of a number.

#include <stdio.h>
int main()
{

    int num, pos;

    printf("Enter the number: ");
    scanf("%d", &num);

    printf("Enter the bit position you want to toggle: ");
    scanf("%d", &pos);

    int res = num ^ (1<<pos);
    printf("After the bit position %d toggle of number %d the resulatant number is %d\n", pos, num, res);

    return 0;
}