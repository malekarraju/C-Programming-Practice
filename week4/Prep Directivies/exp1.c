#include <stdio.h>      // Includes the standard input/output library
                       // Needed for printf() and scanf()

#define INPUT          // Defines a macro named INPUT

int main()
{
    int num = 05;      // Declares an integer variable 'num'
                       // Initial value is 05 (which is interpreted as octal in C)

#ifdef INPUT           // Checks whether the macro INPUT is defined

    // This block runs if INPUT is defined

    printf("Enter the num value:");  // Asks the user to enter a number

    scanf("%d", &num);               // Takes an integer input from the user
                                    // &num gives the memory address of num

    printf("\nNum: %d", num);        // Displays the entered number

#else                  // This block runs if INPUT is NOT defined

    printf("\nNum: %d", num);  // Displays the default value of num

#endif                 // Marks the end of the #ifdef condition

    return 0;          // Indicates successful program execution
}