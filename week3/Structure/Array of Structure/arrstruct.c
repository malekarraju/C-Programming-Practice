#include<stdio.h>
#include<string.h>

struct Employee // always define above the main
{
    int id;
    char name[10];
    float sal;
}; //E[size];

int main()
{
    int size;
    printf("Enter the Size of Structure array: ");
    scanf("%d", &size);

    struct Employee E[size]; //we make array to store many Employee details

    for(int i=0; i<size; i++)
    {
        printf("Enter the %d Employee name: ", i+1);
        scanf("%s", &E[i].name);
        printf("Enter the %d Employee Id: ", i+1);
        scanf("%d", &E[i].id);
        printf("Enter the %d Employee Salary: ",i+1);
        scanf("%f", &E[i].sal);
    }

    for(int i=0; i<size; i++)
    {
    printf("\n\n------Employee %d Details------", i+1);
    printf("\nId: %d",  E[i].id);
    printf("\nName: %s",  E[i].name);
    printf("\nSalary: %.2f",  E[i].sal);
    }

    return 0;
}