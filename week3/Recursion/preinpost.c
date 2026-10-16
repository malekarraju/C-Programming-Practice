// Pre In Post
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
    printf("\nPre %d", n);
    preinpost(n-1);
    printf("\nIn %d", n);
    preinpost(n-1);
    printf("\nPost %d", n);

    return;
}