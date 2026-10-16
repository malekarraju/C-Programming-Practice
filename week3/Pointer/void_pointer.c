// ---------------------------------------------------------
// Void Pointer / Generic Pointer
//
// A void pointer can store the address of any data type.
// Before dereferencing a void pointer, it must be typecast
// to the appropriate pointer type.
// ---------------------------------------------------------

#include <stdio.h>

int main()
{
    // Declare variables of different data types
    int a = 19;
    float num = 42.523;
    char ch = 'u';

    // Declare a void pointer
    // It can store the address of any data type
    void *ptr;


    // -----------------------------------------------------
    // Void pointer pointing to an integer variable
    // -----------------------------------------------------

    ptr = &a;   // Assign the address of integer variable 'a'

    // %p is used to print a memory address
    printf("\nValue of ptr: %p", (void *)ptr);

    // Typecast void pointer to int pointer before dereferencing
    printf("\nDereference ptr: %d", *((int *)ptr));

    printf("\n");


    // -----------------------------------------------------
    // Void pointer pointing to a float variable
    // -----------------------------------------------------

    ptr = &num;   // Assign the address of float variable 'num'

    printf("\nValue of ptr: %p", (void *)ptr);

    // Typecast void pointer to float pointer before dereferencing
    printf("\nDereference ptr: %.2f", *((float *)ptr));

    printf("\n");


    // -----------------------------------------------------
    // Void pointer pointing to a character variable
    // -----------------------------------------------------

    ptr = &ch;   // Assign the address of character variable 'ch'

    printf("\nValue of ptr: %p", (void *)ptr);

    // Typecast void pointer to char pointer before dereferencing
    printf("\nDereference ptr: %c", *((char *)ptr));


    return 0;
}

// #include<stdio.h>

// int main()
// {
//     // void pointer
//     int a = 19;
//     float num = 42.523;
//     char ch = 'u';

//     void *ptr;

//     ptr = &a;  // Assign Address of Int Variable
//     printf("\nValue of ptr: %p", ptr);
//     printf("\nDereference ptr: %d", *((int*)ptr));

//     printf("\n");

//     ptr =&num;
//     printf("\nValue of ptr: %p", ptr);
//     printf("\nDereference ptr: %.2f", *((float *)ptr));

//     printf("\n");

//     ptr =&ch;
//     printf("\nValue of ptr: %p", ptr);
//     printf("\nDereference ptr: %c", *((char * )ptr));

//     return 0;
// }