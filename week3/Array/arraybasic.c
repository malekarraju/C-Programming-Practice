// Basic Array: Create, Initialize, Accept Input Elements, Display, Input Validation, address
#include<stdio.h>

int main()
{
    int size; // Get array size first
    printf("Enter the size of Array: ");
    scanf("%d", &size);  //Array Size , from 0 to size-1

    if(size<=0) //  Input Validation
    {
        printf("Invalid Size"); 
        return 1; // program is exiting because of an ERROR
    }

    int arr[size]; //  Initializing with variable length array(VLA) 
    printf("Total Element of Array is %lu\n", sizeof(arr)/sizeof(arr[0])); //just print size
    printf("Size of each Element of Array is %lu bytes\n", sizeof(arr[0]));
    printf("The total size of Array is %lu bytes\n", sizeof(arr));

     for(int i=0; i<size; i++) // Address of Each Elements
    {
        printf("Address of Element %d is: %p\n",i, &arr[i]);
    }
    for(int i=0; i<size; i++) // Elemnts Insertion on each Index from user input
    {
        printf("Enter Element of index %d: ",i);
        scanf("%d",&arr[i]);    // ← traversing to fill each slot
    }
    for(int i=0; i<size; i++) // Display Elemets of each Index
    {
        printf("\nElement of Index %d is %d",i,arr[i]); // ← traversing to read/print each slot
    }
    return 0;  // program reached the end normally — SUCCESS
}

/*
The convention: in C, main()'s return value tells the operating system / calling process (like a shell script)
whether your program succeeded or failed.

return 0; → success — "everything worked fine"
return 1; (or any non-zero value) → failure/error — "something went wrong"
*/