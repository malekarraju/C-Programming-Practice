// Structure with Function

#include<stdio.h>

typedef struct student
{
    char name[20];
    int roll;
    float per;
}student;

void display(student);

int main()
{
    student st;

    printf("\nEnter the student name:");
    fgets(st.name, sizeof(st.name), stdin);
    printf("\nEnter the student Roll number:");
    scanf("%d", &st.roll);
    printf("\nEnter the student Percentage:");
    scanf("%f", &st.per);

    printf("\n===================X=====================\n");

    display(st);
    return 0;
}

void display(student std)
{
    printf("\n---Student Details---");
    printf("\nName: %s",std.name);
    printf("Roll No.: %d", std.roll);
    printf("\nPercentage: %.2f%%", std.per);

    return;
}