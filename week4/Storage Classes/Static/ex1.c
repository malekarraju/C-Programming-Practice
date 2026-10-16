/*
static local variables have local scope, but their lifetime is the entire program.
Their value is initialized only once and is preserved between function calls.
*/

// Example of static storage class

#include <stdio.h>

int fun();              // Function declaration

int main()
{
    fun();              // 1st function call
    fun();              // 2nd function call
    fun();              // 3rd function call

    return 0;
}

int fun()
{
    static int a = 10;  // Static local variable
                        // Initialized only once
                        // Retains its value between calls

    printf("\na = %d", a);

    a++;

    return a;
}

/*
Output with static
a = 10
a = 11
a = 12
How it works

First call:

a = 10
print 10
a becomes 11

Second call:

a = 11
print 11
a becomes 12

Third call:

a = 12
print 12
a becomes 13

a is initialized only once:

static int a = 10;
a retains its value after fun() finishes.

a has:

Scope    → Local to fun()
Lifetime → Entire program
Memory Layout with static

Conceptually:

Program Memory
│
├── Code
│     └── main(), fun()
│
├── Static Storage
│     └── a = 10
│
└── Stack
      └── function call information

During first call:

Static Storage
┌──────────────┐
│ a = 10       │
└──────────────┘

After a++:

Static Storage
┌──────────────┐
│ a = 11       │
└──────────────┘

Second call starts with the same a:

Static Storage
┌──────────────┐
│ a = 11       │
└──────────────┘

So the value is preserved.

Without static

Change:

static int a = 10;

to:

int a = 10;

Complete code:

// Example without static storage class

#include <stdio.h>

int fun();

int main()
{
    fun();
    fun();
    fun();

    return 0;
}

int fun()
{
    int a = 10;         // Automatic local variable

    printf("\na = %d", a);

    a++;

    return a;
}

Output:

a = 10
a = 10
a = 10
Why?

Every time fun() is called:

Create a = 10
      ↓
Print a
      ↓
a++
      ↓
fun() ends
      ↓
a's lifetime ends

Next call:

Create a = 10 again

Therefore, it always prints 10.

Memory Layout Without static

Conceptually, a is an automatic local variable.

Program Memory
│
├── Code
│     └── main(), fun()
│
├── Static Storage
│     └── Nothing for local a
│
└── Stack
      └── a

First call:

Stack
┌──────────────┐
│ a = 10       │
└──────────────┘

After a++:

Stack
┌──────────────┐
│ a = 11       │
└──────────────┘

When fun() ends:

Stack
┌──────────────┐
│ a = 11       │  ← lifetime ends
└──────────────┘

Second call:

Stack
┌──────────────┐
│ a = 10       │  ← new variable
└──────────────┘

So the previous value 11 is not preserved as the value of a new a.

Main Difference
Without static:

Call 1 → a = 10 → a++ → 11 → destroyed
Call 2 → a = 10 → a++ → 11 → destroyed
Call 3 → a = 10 → a++ → 11 → destroyed
With static:

Call 1 → a = 10 → a++ → 11
Call 2 → a = 11 → a++ → 12
Call 3 → a = 12 → a++ → 13
int a = 10	static int a = 10
Automatic local variable	Static local variable
Usually stack-based	Static storage
Created for each call	Initialized only once
Value not retained after function ends	Value retained
Lifetime = block execution	Lifetime = entire program
Output: 10 10 10	Output: 10 11 12
Key point

static does not make the variable global.

static int a;
     ↓
Scope    → Local
Lifetime → Entire program

This combination — local scope + program-long lifetime — is the most important concept to remember about a static local variable.
*/