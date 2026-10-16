/*
What is Structure Padding?
Structure Padding is when the compiler inserts extra unused bytes between (or after) struct members so that
each member starts at a memory address matching its own alignment requirement.
It's done purely for CPU performance — most processors read aligned memory(addresses divisible by 2, 4, 8, etc.)
in a single cycle, while unaligned memory may need multiple memory accesses to read the same value,
which is slower.

This means sizeof(struct) is often larger than the sum of its members' individual sizes — and that extra space
is the "padding."
*/
#include<stdio.h>
#include<string.h>
/*
    * #pragma pack(1) — disables Structure Padding.
    * Forces the compiler to place members back-to-back with
    * NO alignment gaps, at the cost of possible slower access
    * on some CPUs (unaligned reads).
 */
#pragma pack(1)

struct Employee
{
    int id;         // 4 bytes  | needs 4-byte alignment
    char name[10];  // 10 bytes | needs 1-byte alignment (none required)
    float sal;      // 4 bytes  | needs 4-byte alignment
};
/*
    * Structure Padding explained:
    * ------------------------------------------------------
    * id     -> offset 0  to 3   (4 bytes, already aligned)
    * name   -> offset 4  to 13  (10 bytes, char has no alignment need)
    * PADDING-> offset 14 to 15  (2 unused bytes inserted by compiler)
    * sal    -> offset 16 to 19  (4 bytes, pushed here so it starts
    *                             at an address divisible by 4)
    * ------------------------------------------------------
    * Without #pragma pack(1): sizeof(struct Employee) = 20
    * With    #pragma pack(1): sizeof(struct Employee) = 18 (no padding)
 */

int main()
{
    struct Employee E1, E2;

    printf("Size of Structure is: %d", sizeof(E1));

    return 0;
}

/*
Without pack(1):                    With pack(1):
┌────┬──────────┬────┬────┐        ┌────┬──────────┬────┐
│ id │   name   │PAD │sal │        │ id │   name   │sal │
│ 4B │   10B    │ 2B │ 4B │        │ 4B │   10B    │ 4B │
└────┴──────────┴────┴────┘        └────┴──────────┴────┘
offset 0        14   16  20        offset 0        14  18
    sal must start at              sal starts right after
    a multiple of 4 → pad          name, no alignment check
    inserted before it
*/