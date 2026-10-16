#include <stdio.h>
#include <string.h>

/*
    ============================================================
                    STRUCTURE DEFINITION
    ============================================================

    A structure is a user-defined data type.

    Syntax:
    struct StructureName
    {
        data_type member1;
        data_type member2;
        data_type member3;
    }; // E1,E2; variable declaration
*/

struct Employee
{
    int id;          // Integer member
    char name[10];   // Character array / String member
    float sal;       // Floating-point member
};

/*
    ============================================================
                    STRUCTURE VARIABLE DECLARATION
    ============================================================
    There are different ways to declare structure variables.
*/


/*
    1. Declaration after structure definition
        struct Employee E1, E2; or 
    Here:
    E1 and E2 are structure variables.
*/

// struct Employee E1, E2;


int main()
{
    /*
        ========================================================
                    2. DECLARATION INSIDE main()
        ========================================================
        Structure variables can be declared inside a function.

        Syntax:
            struct StructureName variableName;
        Multiple variables:
            struct Employee E1, E2;
    */
    struct Employee E1, E2;

    /*
        ========================================================
                    ACCESSING STRUCTURE MEMBERS
        ========================================================

        The dot (.) operator is used to access
        structure members.

        Syntax:

            structureVariable.memberName
    */

    /*
        ========================================================
                    ASSIGNING VALUES
        ========================================================
    */
    // Accessing 'id' member
    E1.id = 125;

    // Accessing 'name' member
    // strcpy() is used to copy a string into a character array
    strcpy(E1.name, "Raju");
    // Accessing 'sal' member
    E1.sal = 35154.4654;

    /*
        ========================================================
                    DISPLAYING STRUCTURE MEMBERS
        ========================================================
    */
    printf("------Employee Details------");
    // Accessing integer member
    printf("\nId is %d", E1.id);
    // Accessing string member
    printf("\nName is %s", E1.name);
    // Accessing float member
    printf("\nSalary is %.2f", E1.sal);

    return 0;
}