// WAP to find Fcators of any number enter by user

#include <stdio.h>

int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num); //15

    for( int i=1; i<=num; i++)
    {
        if(num%i==0)  // 15%(1,2,3,4,5,6,7,8,9,10,11,12,13,14,15)=0
            {
                printf("%d ", i); // 1,3,5,15
            }
    }

    return 0;
}
