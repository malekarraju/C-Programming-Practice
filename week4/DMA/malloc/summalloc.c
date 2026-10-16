#include<stdio.h>
#include<stdlib.h>

int main()
{
    int* ptr;
    int n;
    printf("Enter the size of data: ");
    scanf("%d", &n);
    ptr = (int*)malloc(n*sizeof(int));

    if(ptr == NULL) printf("\nMemory is not Sufficient: ");
    else printf("\nMemory is allocated by the malloc is: ");

    printf("\nInitial value of Malloc is: ");
    for(int i=0; i<n; i++) printf("%d\t", *(ptr+i));

    printf("\nAddress of Malloc Memory is: ");
    for(int i=0; i<n; i++) printf("%p\t", (void*)(ptr+i));

    printf("\nEnter the data in Malloc Memory: ");
    for(int i=0; i<n; i++) scanf("%d", ptr+i);

    printf("\nData in Malloc Memory: ");
    for(int i=0; i<n; i++) printf("%d\t", *(ptr+i));

    printf("\nSun of Data in Malloc Memory: ");

    int sum=0;
    for(int i=0; i<n; i++)
    {
        sum=sum+*(ptr+i);
    }
    printf("%d", sum);

    free(ptr);

    return 0;
}