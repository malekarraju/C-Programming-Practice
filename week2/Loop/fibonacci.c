// WAP to print Fibonacci Series: 0,1,1,2,3,5,8,13....so on

#include <stdio.h>

int main()
{
    int num, res=0, a=0,b=1;
    printf("Enter the number: ");
    scanf("%d", &num);

    printf("Fibonacci serries: ");
    for(int i=1; i<=num; i++)
    {
        res=a+b;   // 0=1(res)+0(a)  //1=
        printf("%d ", a);
        a=b;
        b=res;
    }

    return 0;
}