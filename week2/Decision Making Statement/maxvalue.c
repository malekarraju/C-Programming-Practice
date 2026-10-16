// accept two number and find max number among them

#include <stdio.h>

int main()
{
    int a,b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("a = %d\nb = %d",a,b);
    
    if(a>b)
    {
        printf("\n%d is a Maximum number",a);
    }
    else
        printf("\n%d is Maximum number",b);


        return 0;
}