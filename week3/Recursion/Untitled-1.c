#include<stdio.h>

typedef struct Employee
{
    char name[20];
    int id;
}Employee;

int main()
{
    Employee E[3];

    for(int i=0; i<3; i++)
    {
        printf("Enter Employee(%d) Details:\n", i+1);

        printf("Enter Employee name: ");
        scanf("%s", E[i].name);

        printf("Enter Employee ID: ");
        
        scanf("%d", &E[i].id);
    }
    
    for(int i=0; i<3; i++)
    {
        printf("\n------Employee(%d) Details---- ", i+1);
        printf("\nName: %s", E[i].name);
        printf("\nID: %d", E[i].id);
    }


    return 0;
}