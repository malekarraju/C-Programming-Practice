// ============================================================
// Program: Find the Length of a String Without Using
//          Built-in String Functions
// ============================================================

#include <stdio.h>

int main()
{
    char name[20];

    // --------------------------------------------------------
    // Step 1: Take a string as input.
    //
    // fgets() reads the string including spaces.
    // It may also store '\n' when the user presses Enter.
    // --------------------------------------------------------
    puts("Enter the string: ");
    // gets(name);
    fgets(name, sizeof(name), stdin);

    // Display the entered string
    printf("Name is: %s", name);

    int len = 0;

    // --------------------------------------------------------
    // Step 2: Traverse the string character by character.
    //
    // The loop continues until '\0' is found.
    // '\0' marks the END of a string in C.
    // --------------------------------------------------------
    for(int i = 0; name[i] != '\0'; i++)
    {
        // ----------------------------------------------------
        // Ignore:
        // '\n' -> newline character inserted by fgets()
        // ' '  -> space character
        //
        // continue skips the current iteration and moves
        // directly to the next character.
        // ----------------------------------------------------
        if(name[i] == '\n' || name[i] == ' ')
            continue;

        // Count the character
        len++;
    }

    // Display the final length
    printf("\nLength of string is: %d", len);

    return 0;
}

// Start from index 0 → check each character → ignore spaces/\n → count the character → move to next → stop at \0.