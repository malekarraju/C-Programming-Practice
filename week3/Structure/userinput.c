#include<stdio.h>
#include<string.h>

struct Employee
{
    int id;
    char name[10];
    float sal;
}; //E1,E2;

int main()
{
    struct Employee E1, E2;

    // Employee 1 Details
    printf("Enter the Employee1 name: ");
    scanf("%s", &E1.name);
    printf("Enter the Employee1 Id: ");
    scanf("%d", &E1.id);
    printf("Enter the Employee1 Salary: ");
    scanf("%f", &E1.sal);

    // Employee 2 Details
    printf("\nEnter the Employee2 name: ");
    scanf("%s", &E2.name);
    printf("Enter the Employee2 Id: ");
    scanf("%d", &E2.id);
    printf("Enter the Employee2 Salary: ");
    scanf("%f", &E2.sal);

    // Display Employee 1 Details
    printf("\n------Employee 1 Details------");
    printf("\nId: %d",  E1.id);
    printf("\nName: %s",  E1.name);
    printf("\nSalary: %f",  E1.sal);
    // Display Employee 2 Details
    printf("\n------Employee 2 Details------");
    printf("\nId: %d",  E2.id);
    printf("\nName: %s",  E2.name);
    printf("\nSalary: %f",  E2.sal);

    return 0;
}
