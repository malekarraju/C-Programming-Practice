// WAP to print of a number in straight order recursively

#include <stdio.h>

void revno(int);  // function declaration

int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);

    revno(num);

    return 0;
}

void revno(int x)
{
    if(x==0) return;
    printf("%d\n", x);
    revno(x-1);
}
