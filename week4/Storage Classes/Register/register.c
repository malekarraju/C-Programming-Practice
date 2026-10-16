/*
The register storage class is used to request the compiler to store a frequently used
variable in a CPU register for faster access, if possible.
*/
// Example of register storage class

#include <stdio.h>

int main()
{
    register int num = 100;   // register variable
                               // Register variable should not have
                               // its address accessed using &

    printf("%d\n", num);

    printf("Address of num = %u", &num);
    // ERROR: Cannot take the address of a register variable

    return 0;
}

/*
Important point
register int num = 100;

means that we are requesting the compiler to keep num in a CPU register if possible.

The important rule is:

&num

is not allowed for a register variable.

So this line:

printf("Address of num = %u", &num);

causes a compilation error.

Also, don't say "register definitely has no address." More accurately:

A program cannot apply the address-of operator & to an object declared with the register storage-class specifier.

The compiler may choose not to actually place the variable in a CPU register.
*/