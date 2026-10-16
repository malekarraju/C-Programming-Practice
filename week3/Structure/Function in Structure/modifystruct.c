// Function modifying structure data using a pointer
#include<stdio.h>
#include<string.h>

typedef struct student
{
    char name[20];
    int id;
    char sex;
}student;

student user_input(student);
void modify_struct(student*);

int main()
{
    student st;
    st = user_input(st);
    printf("\n------Befor Modify Student Details-------\n"); 

    printf("Name: %s", st.name);         
    printf("ID: %d", st.id);              
    printf("\nSection: %c", st.sex);  
    
    modify_struct(&st);

    printf("\n------After Modify Student Details-------\n"); 

    printf("Name: %s", st.name);         
    printf("\nID: %d", st.id);              
    printf("\nSection: %c", st.sex);  
    

    return 0;
}

student user_input(student stud)   // Takes a COPY of a student struct; returns the filled-in copy
{
    printf("\nEnter Student ID: ");
    scanf("%d", &stud.id);
    getchar();   // Consume the leftover '\n' left in the buffer by scanf("%d")
    
    printf("Enter Student Name: ");
    fgets(stud.name, sizeof(stud.name), stdin);

    printf("Enter Student Section: ");
    scanf("%c", &stud.sex);

    return stud;   // Return the filled-in copy so the caller can capture it (e.g. st = user_input(st))
}

void modify_struct(student* stud)
{
    strcpy(stud->name,"Raju R. Malekar");
    stud->id = 18;
    stud->sex='C';

    return;
}



