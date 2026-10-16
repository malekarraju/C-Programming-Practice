// Function returning a structure 
#include<stdio.h>

typedef struct student
{
    int id;
    char name[15];
    char sec;
}student;

student user_input(student);

int main()
{
    student st; // Declare a local 'student' struct — uninitialized at this point

    printf("\n------Enter Student Detail-------\n"); 

    st = user_input(st);   // Call user_input(), passing a copy of st;
                           // capture the returned (filled-in) struct back into st

    printf("\n------Student Detail-------\n"); 

    printf("Name: %s", st.name);         
    printf("ID: %d", st.id);              
    printf("\nSection: %c", st.sec);     

    return 0;
}

student user_input(student stud)   // Takes a COPY of a student struct; returns the filled-in copy
{
    printf("\nEnter Student ID: ");
    scanf("%d", &stud.id);
    getchar();   // Consume the leftover '\n' left in the buffer by scanf("%d")
    
    printf("\nEnter Student Name: ");
    fgets(stud.name, sizeof(stud.name), stdin);

    printf("\nEnter Student Section: ");
    scanf("%c", &stud.sec);

    return stud;   // Return the filled-in copy so the caller can capture it (e.g. st = user_input(st))
}


