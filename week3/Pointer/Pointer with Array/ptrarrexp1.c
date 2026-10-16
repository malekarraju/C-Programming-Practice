/*
 * Program: Dynamic Array Input & Output
 * Description: Reads 'size' integers into a dynamically-sized array
 *              using pointer walking (ptr++), then prints them back
 *              using array indexing.
 * Concepts demonstrated: VLAs, pointer arithmetic, post-increment,
 *                         pointer vs. array indexing
 */
#include <stdio.h>

int main()
{
    int size;
    printf("Enter the Size of Array: "); 
    scanf("%d", &size);

    int arr[size];
    int* ptr = arr; // arr is equal to arr[0]

    //--------Take Input through Pointer-------------
    printf("Enter the Elements: ");
    for(int i=0; i<size; i++)
    {
        scanf("%d", ptr+i);  // pointer-walking ptr=arr where arr=&arr[0]
    }

    // ptr=arr; // reset back to the start before reusing it

    //--------Printing through Pointer-------------
    printf("Array Elements are: ");
    for(int i=0; i<size; i++)
    {
        printf("%d\t", *(ptr+i));
    }

    return 0;
}