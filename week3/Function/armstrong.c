// Amrstrong number
#include <stdio.h>
#include <math.h>

int armstrong(int n);   // Function Prototype
int main() // Main Function
{

    int num;
    printf("Enter the number: ");
    scanf("%d", &num);  // 153

    int res3 = armstrong(num); // Function calling

    if(res3==num) 
    {
        printf("It's Armstrong number.");
    }
        else printf("It's not a Armstrong number.");

    return 0;
}

// with arg, with return value
int armstrong(int num)           // Function defination
{
    int k, sum=0;
    int digit=log10(num)+1;     // num = 153

    while(num>0)
    {
        k=num%10;                      // extract last digit:- pulling using %10
        sum=sum+round(pow(k, digit));  // power the extracted digit and sum it
        num=num/10;                    // remove last digit: chopping it off with /10
    }
    return sum;  // passing control to calling position
}
