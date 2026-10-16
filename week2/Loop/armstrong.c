// Amstrong Code: 153 (3-digit number) 1³ + 5³ + 3³ = 1 + 125 + 27 = 153 ✓
// Digit count: for (temp = num; temp != 0; temp /= 10) n++;
// Digit count: log10(num) + 10;

#include <stdio.h>
#include <math.h>

int main()
{
    int num, sum=0; //153
    printf("Enter the 3 digit number: ");
    scanf("%d", &num); // 153
    
    int x = num;
    int digits = log10(num)+1;  // digit = 4


    while(num>0)
    {
        int k = num % 10; // 15.3  1.5  0.1 take remainder
        sum = sum+round(pow(k, digits));
        num= num/10;
    }
    if(x==sum)
    {
        //153=153
        printf("given number is armstrong number.");
    }
    else
    {
        printf("given number is not an armstrong number.");
    }


    return 0;
}