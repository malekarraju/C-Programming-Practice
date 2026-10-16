// ============================================================
// Program: Copy One String into Another Without Using
//          Built-in String Functions
// ============================================================

#include <stdio.h>

int main()
{
    char name1[20];
    char name2[20];

    // --------------------------------------------------------
    // Step 1: Take a string from the user
    // name1 stores the original string entered by the user.
    // --------------------------------------------------------
    puts("Enter the string: ");
    gets(name1);

    // Display the original string
    printf("\nName1 is: %s", name1);

    // name2 does not contain a valid string yet,
    // because we have not copied anything into it.
    // So, do not print name2 before copying.
    
    int i;

    // --------------------------------------------------------
    // Step 2: Copy each character from name1 to name2
    //
    // name1[i] != '\0' means:
    // Continue copying until the NULL character '\0'
    // (end of the string) is reached.
    //
    // Example:
    // name1 = "RAJU"
    //
    // Index:  0    1    2    3    4
    //         R    A    J    U   '\0'
    //
    // The loop copies:
    // name2[0] = name1[0]  -> 'R'
    // name2[1] = name1[1]  -> 'A'
    // name2[2] = name1[2]  -> 'J'
    // name2[3] = name1[3]  -> 'U'
    // --------------------------------------------------------
    for(i = 0; name1[i] != '\0'; i++)
    {
        name2[i] = name1[i];
    }

    // --------------------------------------------------------
    // Step 3: Add '\0' at the end of name2
    //
    // A string in C must end with the NULL character '\0'.
    // Without this, name2 would not be a properly terminated
    // C string.
    // --------------------------------------------------------
    name2[i] = '\0';

    // Display the copied string
    printf("\nName2 after copy: %s", name2);

    return 0;
}

//Read one character → copy it → move to next character → stop at '\0' → add '\0' to destination.