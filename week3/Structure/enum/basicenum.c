/*
Definition of enum in C:
An enum (enumeration) is a user-defined data type in C that consists of a set of named integer constants.
It is used to assign meaningful names to a group of related values, making the program
more readable and easier to maintain.

Syntax: C
            enum enum_name { constant1, constant2, constant3, ... };
By default, the first constant is assigned the value 0,and each subsequent constant
is automatically assigned the previous value + 1, unless explicitly specified otherwise.
*/

// Demonstrating enum with custom and auto-incremented values
#include <stdio.h>

// Define an enum 'week' with explicit values for some members
// sun = 5 (explicitly set)
// mon = 6 (auto: previous + 1)
// tue = 7 (auto: previous + 1)
// wed = 9 (explicitly set, breaks the sequence)
// thur = 10 (auto: previous + 1)
// fird = 11 (auto: previous + 1)   <-- note: likely a typo for "fri"
// sat = 12 (auto: previous + 1)
enum week { sun=5, mon, tue, wed=9, thur, fird, sat };

int main()
{
    enum week day;   // declare a variable 'day' of type enum week
    day = wed;       // assign wed (value 9) to day, though 'day' is never used after this

    printf("%d", tue);      // prints value of tue -> 7
    printf("\n%d", sat);    // prints value of sat -> 12

    return 0;
}