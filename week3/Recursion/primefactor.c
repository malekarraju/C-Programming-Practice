// WAP to find all Prime factor of given number
#include <stdio.h>

int factor(int, int);

int main()
{
    int num, i=2;
    printf("Enter the number: "); // 120
    scanf("%d", &num);

    factor(num, i);

    return 0;
}

int factor(int x, int i)  // 120/1, 120/2, 120/3, 120/4
{
    if(x%i==0)
    {
        if(i%1==0 || i%i==0)
        {
            printf("%d ", i); // 1, 2, 4 ..... 120
        }
    } 
    if(i==x) return 0; 

    factor(x, i+1); // 120/2, 120/3, 120/4, 120/120
    return 0;
}