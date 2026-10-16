// find prime number using function

#include <stdio.h>

//Function Prototype
void Range_Armstrong(int s, int e);
int Armstrong(int x);

//Main function
int main()
{
    int start,  end;
    printf("Enter Start and End number: ");
    scanf("%d %d", &start, &end);

    printf("Armstrong number from %d to %d is: ", start, end);

    Range_Armstrong(start, end);  // calling function and passing arguments
    return 0;
}

// no return, with arguments 
void Range_Armstrong(int s, int e)         // function defination
{
    while ( s<=e )
    {
        int res = Armstrong(s);        // calling another function in the function and passing argument 's'
        if(res==s)  printf("%d ", res);

        s++;
    }
}

int Armstrong(int num)    // function defination
{
    int k, sum=0;
    int digit=log10(num)+1;

    while(num>0)
    {
        k=num%10;  // pulling last digit or extracting with %10
        sum=sum+round(pow(k, digit));  // power the extracted digit
        num=num/10;  // remove last digit:- chopping it off with /10
    }
    return sum; // passing control with return value
    
}