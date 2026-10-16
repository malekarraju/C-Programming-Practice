#include<stdio.h>

typedef int* point;
int main()
{
    int num = 10;
    point ptr;
    point* ptr2;
    point** ptr3;

    ptr=&num;
    ptr2=&ptr;

    printf("\n-----------Num----------\n");

    printf("Value of num is %d",num);
    printf("\nAdrees of num is %u",&num);

    printf("\n-----------*ptr----------");

    printf("\nValue of ptr is %d",ptr);
    printf("\nValue of num using ptr is %d",*ptr);
    printf("\nAdrees of ptr is %u",&ptr);

    printf("\n-----------**ptr----------");

    printf("\nValue of ptr2 is %d",ptr2);
    printf("\nAddress of ptr2 is %d",&ptr2);
    printf("\nValue of ptr using ptr2 is %d",*ptr2);
    printf("\nValue of num using ptr2 is %d",**ptr2);

    printf("\n-----------change value----------");
    **ptr2=100;
    ptr3=&ptr2;

    printf("\n-----------***ptr----------");
    ***ptr3=500;
    printf("\nValue of num using ptr3 is %d",***ptr3);

    printf("\nNum: %d",num);
    return 0;
}