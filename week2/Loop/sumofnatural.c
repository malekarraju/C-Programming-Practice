// sum of all: - Natural number, Even number, Odd number, Prime number, Composite number, Twin-Prime & Co-Prime number
//
/*=================================================================================*/

// WAP accept n and sum of all Natural number.
#include <stdio.h>

int main()
{
    int res=0, num;
    printf("Enter the number: ");
    scanf("%d", &num);

    for(int i=1; i<=num; i++)
    {
        printf("%d ", i);  // Printf all number
        res = res + i;  // Print sum: 0 = 0+(1,2,3,4,...n) 
    }
    printf("/nSum of natural number are: %d", res);

    return 0;
}

/*=================================================================================*/

// // WAP accept n and sum of all Even number.
#include <stdio.h>

int main()
{
    int res=0, num;
    printf("Enter the number: ");
    scanf("%d", &num);

    for(int i=0; i<=num; i+=2)
    {
        printf("%d ", i); // Print all Even number
        res = res + i; // 0=0+(0,2,4,6,8,10,..n)
    }
    printf("\nSum of Even numbers are: %d", res);

    return 0;
}

/*=================================================================================*/

// WAP accept n and sum of all Odd number.
#include <stdio.h>

int main()
{
    int res=0, num;
    printf("Enter the number: ");
    scanf("%d", &num);

    for(int i=1; i<=num; i+=2)
    {
        printf("%d ", i); // Print all Odd number
        res = res + i; // 0=0+(1,3,5,7,9,..n)
    }
    printf("Sum of Odd numbers are: %d", res);

    return 0;
}

/*=================================================================================*/

// WAP accept n and sum of all Prime number.
#include <stdio.h>

int main()
{
    int res = 0, num;
    printf("Enter the number: ");
    scanf("%d", &num);

    printf("Prime numbers are: ");        // header added first
    for (int i = 2; i <= num; i++)
    {
        int isPrime = 1;

        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                isPrime = 0;
                break;
            }
        }

        if (isPrime)
        {
            printf("%d ", i);  // print prime 
            res = res + i;     // give sum
        }
    }

    printf("\nSum of Prime numbers is: %d\n", res);   // sum printed after loop ends

    return 0;
}

/*=================================================================================*/

// WAP accept n and sum of all Composite number.
#include <stdio.h>

int main()
{
    int res = 0, num;
    printf("Enter the number: ");
    scanf("%d", &num);

    printf("Composite numbers are: ");        // header added first
    for (int i = 4; i <= num; i++)     // composites start from 4
    {
        int isComposite = 0;            // assume i is NOT composite

        for (int j = 2; j < i; j++)     // check divisors from 2 to i-1
        {
            if (i % j == 0)
            {
                isComposite = 1;         // found a divisor -> composite
                break;
            }
        }

        if (isComposite)
        {
            printf("%d ", i);
            res = res + i;
        }
    }

    printf("\nSum of Composite numbers is: %d", res);

    return 0;
}

/*=================================================================================*/

// WAP accept n and sum of all Twin-Prime number.

#include <stdio.h>

int isPrime(int n)
{
    if (n < 2) return 0;              // 0 and 1 are not prime

    for (int j = 2; j < n; j++)
    {
        if (n % j == 0) return 0;      // divisor found -> not prime
    }
    return 1;                          // no divisors found -> prime
}

int main()
{
    int num, res = 0;
    printf("Enter the number: ");
    scanf("%d", &num);

    printf("Twin Prime pairs are: ");

    for (int i = 2; i <= num - 2; i++)   // i and i+2 must both be <= num
    {
        if (isPrime(i) && isPrime(i + 2))
        {
            printf("(%d,%d) ", i, i + 2);
            res = res + i + (i + 2);      // add BOTH primes in the pair
        }
    }

    printf("\nSum of Twin Prime numbers is: %d\n", res);

    return 0;
}

/*=================================================================================*/

// WAP accept n and sum of all Co-Prime number.

#include <stdio.h>

int gcd(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;      // when b becomes 0, a holds the GCD
}

int main()
{
    int num, res = 0;
    printf("Enter the number: ");
    scanf("%d", &num);

    printf("Co-prime numbers (with %d) are: ", num);

    for (int i = 1; i <= num; i++)
    {
        if (gcd(i, num) == 1)          // co-prime if GCD is exactly 1
        {
            printf("%d ", i);
            res = res + i;
        }
    }

    printf("\nSum of Co-prime numbers is: %d\n", res);

    return 0;
}