#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *ptr;
    int n;
    printf("Enter the Memory Size: ");
    scanf("%d", &n);

    ptr = (int*)malloc(n*sizeof(int));

    if(ptr == NULL) printf("\nMemory is not Sufficient: ");
    else printf("\nMemory is allocated by the malloc is: ");

    printf("\nInitial value of Malloc is: ");
    for(int i=0; i<n; i++) printf("%d\t", *(ptr+i));

    printf("\nAddress of Malloc Memory is: ");
    for(int i=0; i<n; i++) printf("%p\t", (void*)(ptr+i));

    printf("\nEnter the %d data in Malloc Memory: ",n);
    for(int i=0; i<n; i++) scanf("%d", ptr+i);

    char y;
    printf("Want to add extra memory in malloc(y/n): ");
    scanf(" %c", &y);

    int exn=0;
    if(y=='y' || y=='Y')
    {
        printf("\nHow many extra memory you want:");
        scanf("%d", &exn);
        ptr = (int*) realloc(ptr,(n+exn)*sizeof(int));

        printf("\nEnter the data in Extra %d Malloc Memory: ",exn);
        for(int i=n; i<n+exn; i++) scanf("%d", ptr+i);
    }
    else printf("\nNo extra Memory");

    printf("\nData in Malloc Memory: ");
    for(int i=0; i<(n+exn); i++) printf("%d\t", *(ptr+i));

    free(ptr);
    return 0;
}