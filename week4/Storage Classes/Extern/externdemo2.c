/*
extern is used to declare a variable or function that is defined elsewhere.
It is commonly used to access global variables or functions from another source file.
*/

// Second file: main.c
#include <stdio.h>
#include "demo1.c"

int fun2();          // Function declaration

int main()
{
    extern int a;    // Declaration: a is defined in another file
    printf("\na = %d", a);

    fun();           // Function defined in demo1.c
    fun2();

    return 0;
}

int fun2()
{
    printf("\n2 Kaas Pathar");
    return 0;
}

/*
How extern works here:
- int a = 84; is the actual definition of a.
- extern int a; tells the compiler that a already exists elsewhere.
- extern does not normally create another a.
- Both references refer to the same global variable.
- fun() is defined in demo1.c and called from main.c.
- extern is mainly useful when working with multiple .c files.
In a proper multi-file program, you would normally include a .h header containing declarations rather than #include "demo1.c" directly.
*/