// pointing pointer to pointer

#include<stdio.h>

typedef int* raju;
int main()
{
    int num=10;
    raju ptr = &num;
    raju* dptr = &ptr;
    raju** tptr = &dptr;

    printf("\n--------------Normal---------------");
    printf("\nValue of Num: %d", num);
    printf("\nAddress of Num: %p", &num);

    printf("\n--------------*ptr---------------");
    printf("\nValue of ptr: %p", ptr);
    printf("\nAddress of ptr: %p", &ptr);

    printf("\nnum access by ptr: %d", *ptr);

    printf("\n--------------**ptr---------------");
    printf("\nValue of dptr: %p", dptr);
    printf("\nptr access by dptr: %p", *dptr);
    printf("\nnum access by dptr: %d", **dptr);

    printf("\n--------------***ptr---------------");
    printf("\nValue of tptr: %p", dptr);
    printf("\nptr access by tptr: %p", *tptr);
    printf("\ndptr access by tptr: %p", **tptr);
    printf("\nnum access by tptr: %d", ***tptr);

    return 0;
}