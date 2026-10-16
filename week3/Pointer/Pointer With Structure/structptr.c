#include<stdio.h>

typedef struct Student
{
    int roll;
    char name[20];
    float per;
}Student;

int main()
{
    Student st;
    Student *ptr = &st;

    printf("-------Enter Student Details-----------");

    printf("\nEnter the Student Roll: ");
    scanf("%d", &ptr->roll); // ADdress to Address jump
    fflush(stdin);
    printf("\nEnter the Student Name: ");
    scanf("%[^\n]", ptr->name);
    printf("\nEnter the Student Percentage: ");
    scanf(" %f", &ptr->per); // ADdress to Address jump

    printf("-------Student Details-----------");

    printf("\nName: %s", ptr->name); //use actual parameter st.name
    printf("\nRoll No.: %d", ptr->roll); // st.roll
    printf("\nName: %.2f%%", ptr->per); // st.per

    return 0;
}