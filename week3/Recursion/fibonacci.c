// WAP to print Fibonacci Series: 0,1,1,2,3,5,8,13....so on , up to give number

#include <stdio.h>

int fibonacci(int, int, int);

int main()
{
    int num;
    printf("Enter the number: "); // 25
    scanf("%d", &num);

    fibonacci(num, 0, 1);

    return 0;
}

int fibonacci(int n, int x, int y) // 25/0/1  24/1/1 23/1/2
{
    if(n<=0) return 0; 

    int res;
    res = x+y; //0+1 //1+1 //1+2 
    printf("%d ", x); // 0 1 1

    fibonacci(n-1, y, res);  // 24/1/1 23/1/2 22/2/3
       ///  n=n-1, x=y, y=res
    return 0;
}