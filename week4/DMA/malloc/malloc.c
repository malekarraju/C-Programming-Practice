#include<stdio.h>
#include<stdlib.h>

int main()
{
    int* ptr;
    ptr = (int*)malloc(4*sizeof(int));

    if(ptr == NULL) printf("\nMemory is not Sufficient: ");
    else printf("\nMemory is allocated by the malloc is: ");

    printf("\nInitial value of Malloc is: ");
    for(int i=0; i<4; i++) printf("%d\t", *(ptr+i));

    printf("\nAddress of Malloc Memory is: ");
    for(int i=0; i<4; i++) printf("%p\t", (void*)(ptr+i));

    printf("\nEnter the data in Malloc Memory: ");
    for(int i=0; i<4; i++) scanf("%d", ptr+i);

    printf("\nData in Malloc Memory: ");
    for(int i=0; i<4; i++) printf("%d\t", *(ptr+i));

    free(ptr);

    return 0;
}