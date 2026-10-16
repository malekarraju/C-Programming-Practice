/* Check Loan Eligibility
if a Customer salary is more than 30k and customer age is 22 then is eligible for loan otherwise No Loan.
using Nested if-else */

#include <stdio.h>

int main()
{
    int salary, age;

    printf("Enter Customer Salary and Age: ");
    scanf("%d %d", &salary, &age);
    printf("Customer Salary is %d₹\nAge is %d years", salary, age);

    if(salary>=30000)
    {
        if(age>=22)
        {
            printf("\nCustomer is Eligible for Loan");
        }
        else 
            printf("\nNot Eligible for Loan becasus Age is Less");
    }
    else
            printf("\nNot Eligible for Loan because Salary is Less");


    return 0;
}