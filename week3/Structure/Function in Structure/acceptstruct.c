// Function accepting a complete structure
#include<stdio.h>

typedef struct student
{
    char name[15];
    int id;
    char sex;
}student;

void userinput(student*);
void displaystruct(student);

int main()
{
    student st;

    userinput(&st);
    displaystruct(st);

    return 0;
}

void userinput(student* stud)
{
    printf("Enter the Name of Student: ");
    fgets(stud->name, sizeof(stud->name), stdin);

    printf("Enter Student ID: ");
    scanf("%d", &stud->id);
    getchar();

    printf("Enter Student Sex: ");
    scanf("%c", &stud->sex);

    return;
}

void displaystruct(student s)
{
    printf("\n------Student Detail-------\n");

    printf("Name: %s", s.name);
    printf("ID: %d", s.id);
    printf("\nSex: %c", s.sex);

    return;
}