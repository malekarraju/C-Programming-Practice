// Nested Structure College and Multiple Student
#include<stdio.h>
#include<stdlib.h>


typedef struct College  //structure declaration
{
    int id;
    char name[20];
    
    struct Student
        {
            int id;
            char name[20];
        }st[];
}College;  // struct end

void input(College*, int); // function prototype
void display(College*, int);

int main()
{
    int size;
    printf("Enter the number of Stduents: ");
    scanf("%d", &size);

    College* p; // structure pointer

    p = malloc(sizeof(College) + size * sizeof(struct Student));

    printf("------------Enter Details------------\n");
    input(p,size); // user input function call

    printf("\n------------All Details------------\n");
    display(p,size); // display details call

    free(p);
    return 0;
}

void input(College* ptr, int s) // function defination
{
    printf("Enter College Id: ");
    scanf("%d", &ptr->id);
    printf("Enter the College Name: ");
    scanf("%s", ptr->name);

    for(int i=0; i<s; i++)
    {
        printf("\n----Enter Student%d Details-----\n", i+1);

        printf("Enter the student%d Id: ",i+1);
        scanf("%d", &ptr->st[i].id);
        printf("Enter the student%d Name: ",i+1);
        scanf("%s", ptr->st[i].name);
    }
    return;
}

void display(College* ptr, int s) // function defination
{
    printf("\n##### College Details #####\n");

    printf("College Id: %d\n", ptr->id);
    printf("College Name: %s\n", ptr->name);

    printf("\n##### Student Details #####\n");
    for(int i=0; i<s; i++)
    {
        printf("\n----Student%d Details-----\n", i+1);

        printf("Student%d Id: %d\n",i+1, ptr->st[i].id);
        printf("Student%d Name: %s\n",i+1, ptr->st[i].name);
    }

    return;
}