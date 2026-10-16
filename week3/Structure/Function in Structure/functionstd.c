// Structure with Function

#include<stdio.h>

// Structure
typedef struct student
{
    char name[20];
    int roll;
    float per;
}student;

    student st; // Global variable

// Function Prototype
student userinput();
void display(student);

// Main Function
int main()
{
    userinput(); // function call: struct arg + no para

    printf("\n===================X=====================\n");

    display(st); // function call: void arg + no para
    return 0;
}

student userinput()  // Structure type function defination
{
    printf("\nEnter the student name:");
    fgets(st.name, sizeof(st.name), stdin);
    printf("\nEnter the student Roll number:");
    scanf("%d", &st.roll);
    printf("\nEnter the student Percentage:");
    scanf("%f", &st.per);

    return st; // return structure
}

void display(student st) // function defination
{
    printf("\n---Student Details---");
    printf("\nName: %s",st.name);
    printf("Roll No.: %d", st.roll);
    printf("\nPercentage: %.2f%%", st.per);

    return;
}