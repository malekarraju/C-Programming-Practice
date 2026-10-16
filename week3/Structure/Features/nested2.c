/* use function here pending
Nested structure.

Create an outer structure Organization containing:
Organization name
Organization ID
Inner structure Employee containing employee ID, name, and salary.

Display Employee details.
*/
#include<stdio.h>

typedef struct Organization
{
    char orgname[50];
    int orgid;

    struct Employee
    {
        int empid;
        char empname[20];
    }emp;

} Organization;

Organization org;

int main()
{
    /*-----------INPUT---------------*/

    printf("\n----Enter Organization Detail----");

    printf("\nEnter Organization Name: ");
    fgets(org.orgname, sizeof(org.orgname), stdin);
    printf("Enter Organization ID: ");
    scanf("%d",&org.orgid);

    getchar();

    printf("\n----Enter Employee Detail----");

    printf("\nEnter Employee Name: ");
    fgets(org.emp.empname, sizeof(org.emp.empname), stdin);
    printf("Enter Employee ID: ");
    scanf("%d",&org.emp.empid);

    /*-----------DISPLAY-------------------*/

    printf("\n----Organization Detail----");
    printf("\nName: %s", org.orgname);
    printf("ID: %d", org.orgid);

    printf("\n----Employee Detail----");
    printf("\nName: %s", org.emp.empname);
    printf("ID: %d", org.emp.empid);

    return 0;
}