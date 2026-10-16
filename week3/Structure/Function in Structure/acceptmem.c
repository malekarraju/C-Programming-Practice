// Function accepting individual structure members
#include<stdio.h>
#include<string.h>

/*------------Structure--------------*/
typedef struct student // Define a structure named 'student' to group related data together
{
    char name[20];
    int roll;
    char sec;
}student;  // 'student' is now a type alias for 'struct student'

/*----------Function Prototype------------*/
void input(student*); // Prototype: input() takes a POINTER to a student (so it can modify the caller's struct)
void display(char[], int); // Prototype: display() takes individual members (name array, roll) — note: sec is missing here

/*---------Main Body-----------*/
int main()
{
    student st; // Declare a local 'student' struct variable (uninitialized at this point)

    input(&st); // Call input(), passing the ADDRESS of st so the function can fill in real values
    display(st.name, st.roll); // Call display(), passing st's name and roll (sec is NOT passed)

    return 0; // Exit main() indicating successful program execution
}

/*----------Input Function Defination-------------*/
void input(student *st) // Function definition: st is a pointer to the caller's student struct
{
    printf("Enter name of Student: ");         // Prompt user for name
    fgets(st->name,sizeof(st->name), stdin);    // Read a line of input into st->name (via pointer, so it updates the real struct)

    printf("Enter Roll no. of Student: ");      // Prompt user for roll number
    scanf("%d", &st->roll);                      // Read an integer into st->roll (&st->roll = address of roll member)
    getchar(); // consume leftover newline from scanf   // scanf("%d") leaves '\n' in the input buffer; getchar() discards it

    printf("Enter Section of Student: ");       // Prompt user for section
    scanf("%c", &st->sec);                       // Read a single character into st->sec

    return;    // Return to caller (main); no value returned since function is void
}

/*----------Display Function Defination-----------*/
void display(char name[], int roll)
{
    printf("\n------Student Details-------");  // Print a header line
    printf("\nName: %s", name);                // Print the name string
    printf("Roll No: %d", roll);               // Print the roll number

    return;    // Return to caller; no value returned since function is void
}