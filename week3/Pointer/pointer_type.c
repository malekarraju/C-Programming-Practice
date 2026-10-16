// Types of Pointers:
// 1. Void Pointer
// 2. Null Pointer
// 3. Wild Pointer
// 4. Dangling Pointer

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // -------------------------------------------------
    // Wild Pointer
    // A pointer that is declared but not initialized.
    // It contains an unpredictable/indeterminate address.
    // -------------------------------------------------

    int *w_ptr;

    printf("\nWild Pointer: %p", (void *)w_ptr);


    // -------------------------------------------------
    // Null Pointer
    // A pointer that is explicitly assigned NULL.
    // It does not point to a valid memory location.
    // -------------------------------------------------

    int *ptr = NULL;

    printf("\nNull Pointer: %p", (void *)ptr);


    // -------------------------------------------------
    // Dangling Pointer
    // A pointer becomes dangling when the memory it
    // points to is no longer valid.
    // -------------------------------------------------

    int *d_ptr = (int *)malloc(sizeof(int));

    // Check whether memory allocation was successful
    if (d_ptr != NULL)
    {
        *d_ptr = 18;

        // d_ptr contains the address of dynamically
        // allocated memory.
        printf("\n\nAllocated Memory Address: %p", (void *)d_ptr);
        printf("\nValue stored in pointer: %d", *d_ptr);

        // Release / deallocate the dynamically allocated memory.
        free(d_ptr);

        // d_ptr still contains the old address,
        // but that memory is no longer valid.
        // Therefore, d_ptr is now a Dangling Pointer.

        printf("\nAfter Release the Memory: %p", (void *)d_ptr);

        // Assign NULL to remove the dangling pointer.
        d_ptr = NULL;

        printf("\nAfter Assign NULL: %p", (void *)d_ptr);
    }

    return 0;
}
// #include<stdio.h>
// #include<stdlib.h>

// int main()
// {
//     //wild pointer
//     int *w_ptr;
//     printf("\nWild Pointer: ");
//     printf("%d",w_ptr);

//     //Null pointer
//     int *ptr = NULL;
//     printf("\nNull Pointer: ");
//     printf("%d",ptr);

//     //Dangling Pointer
//     int a=18;
//     int *d_ptr = &a; // Assigne a Address

//     printf("\nAddress of a: %d",&a);
//     printf("\nValue store in pointer: %d",d_ptr);

//     free(d_ptr); // Release the Memory / De-Allocate the Memory

//     printf("\nAfter Release the Memory: ");
//     printf("%d", d_ptr);  // This is called Dangling Pointer

//     d_ptr = '\0';
//     printf("\nAfter assign Null: ");
//     printf("%d", d_ptr);  // This is called Dangling Pointer

//     return 0;
// }