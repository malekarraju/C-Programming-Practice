/*
Automatic storage class is the default storage class for local variables.
An automatic variable is created when execution enters its block and destroyed when execution leaves that block.
Its scope is limited to the block in which it is declared.
*/

// Example of Automatic Storage Class

#include <stdio.h>

int main()
{
    int a = 10;          // Outer block: a = 10

    {
        int a = 98;      // New local variable; hides outer a

        {
            int a = 784; // New local variable; hides previous a

            printf("\na = %d", a);  // Prints 784
        }

        printf("\na = %d", a);      // Prints 98
    }

    printf("\na = %d", a);          // Prints 10

    return 0;
}

/*
# How Automatic Storage Class Works in Memory

* Local variables like `int a` have automatic storage duration.

* They are created when execution enters their block.

* They normally exist in stack memory in typical C implementations.

* They are destroyed when execution leaves their block.

* In your example, there are 3 different variables:

  ```c
  int a = 10;
  int a = 98;
  int a = 784;
  ```

* Even though all have the same name `a`, they are separate variables because they belong to different blocks.

* When `main()` starts:

  ```text
  a = 10
  ```

  is created.

* When the first inner block starts:

  ```text
  a = 98
  ```

  is created.

* When the second inner block starts:

  ```text
  a = 784
  ```

  is created.

* Conceptually, the stack contains:

  ```text
  a = 784
  a = 98
  a = 10
  ```

* The nearest/current `a` is accessed first.

* Therefore, inside the innermost block:

  ```text
  a → 784
  ```

* When the innermost block ends, `a = 784` reaches the end of its lifetime.

* Then `a = 98` becomes the accessible `a`.

* When the first inner block ends, `a = 98` reaches the end of its lifetime.

* Then `a = 10` becomes the accessible `a`.

* When `main()` ends, `a = 10` also reaches the end of its lifetime.

* Output:

  ```text
  a = 784
  a = 98
  a = 10
  ```

* Important: The C standard guarantees automatic storage duration, not specifically "stack storage." The stack is the usual implementation model.

* The same variable name does not mean the same memory location; each declaration creates a separate variable.

*/