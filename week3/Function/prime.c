// find prime number using function

#include <stdio.h>
//Function Prototype
void Range_prime(int s, int e);
int Prime(int x);

//Main function
int main()
{
    int start,  end;
    printf("Enter Start and End number: ");
    scanf("%d %d", &start, &end);

    printf("Prime number from %d to %d is: ", start, end);

    Range_prime(start, end);

    return 0;
}

void Range_prime(int s, int e)
{
    while ( s<= e)
    {
        int res = Prime(s);
        if(res == 1) printf("%d ", s);

        s++;
    }
}

int Prime(int x)
{
    for(int i=2; i<=x/2; i++)
    {
        if(x%i==0)
        {
            return 0;
        }
    }
    return 1;
}