// Print numbers in zig zag format
#include <stdio.h>

void preinpost(int);

int main()
{
    int num;
    printf("Enter the number: "); //2
    scanf("%d",&num);

    preinpost(num);
    return 0;
}

void preinpost(int n)  // n=2
{
    if(n==0) return;
    printf("%d ", n);
    preinpost(n-1);
    printf("%d ", n);
    preinpost(n-1);
    printf("%d ", n);

    return;
}