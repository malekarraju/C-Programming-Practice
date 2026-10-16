#include<stdio.h>
#include<stdlib.h>

int main()
{
    float* ptr;
    int n;
    printf("Enter the size: ");
    scanf("%d", &n);
    ptr = (float*)calloc(n,sizeof(float));

    if(ptr == NULL) printf("\nMemory is not Sufficient: ");
    else printf("\nMemory is allocated by the calloc is: ");

    printf("\nInitial value of calloc is: ");
    for(int i=0; i<n; i++) printf("%f\t", *(ptr+i));

    printf("\nAddress of calloc Memory is: ");
    for(int i=0; i<n; i++) printf("%p\t", (ptr+i));

    printf("\nEnter the data in calloc Memory: ");
    for(int i=0; i<n; i++) scanf("%f", ptr+i);

    printf("\nData in calloc Memory: ");
    for(int i=0; i<n; i++) printf("%.2f\t", *(ptr+i));

    free(ptr);

    return 0;
}