// combination 5C2 - Ans: 10 where n=5 and r=2

#include <stdio.h>

int factorial(int); 
void combination(int a, int b , int c);

int main()
{
    int n,r;
    printf("Enter Number of total object : ");
    scanf("%d",&n); // 5 

    printf("Enter Number of object chosen at Once : ");
    scanf("%d",&r); // 2

    int x = factorial(n); //120
    int y = factorial(r); //2
    int a = n-r;
    int z = factorial(a); // 6

    combination(x, y, z);  // while calling function, don't need to decleare function

    return 0;
}

void combination( int a, int b, int c)
{
    int comb = a/(b*c);
    printf("combination is %d ",comb);
}

int factorial(int x)
{
int result=1;
    while(x>=1)
    {
        result=result*x;
        x--;
    }
    return result;
}