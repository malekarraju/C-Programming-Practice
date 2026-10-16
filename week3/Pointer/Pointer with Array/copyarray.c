#include <stdio.h>

int main()
{
    int size;
    printf("Enter the Size of Array: "); 
    scanf("%d", &size);

    int arr1[size], arr2[size];
    int* ptr1=arr1, *ptr2=arr2;

    printf("\nEnter the Elements of Array1: ");
    for(int i=0; i<size; i++)   scanf("%d",ptr1+i);

    printf("\nElements of Array1 are: ");
    for(int i=0; i<size; i++)   printf("%d ",*(ptr1+i));

    printf("\nBefore Copy Elements of Array2: ");
    for(int i=0; i<size; i++)   printf("%d ",*(ptr2+i));

    //Copying Process
    printf("\nAfter Copy Elements of Array2: ");
    for(int i=0; i<size; i++)
    {
        *(ptr2+i)=*(ptr1+i); 
        printf("%d ",*(ptr2+i));
    }
    
    return 0;
}