// Write a Program to check if a person is eligible for a Voting or not, minimum age is 18 years

#include <stdio.h>

int main()
{
    int age;

    printf("Enter the Age of Person: ");
    scanf("%d", &age);

    if(age>=18)
    {
        printf("Eligible for Vote.");
    }
    else
    {
        printf("Not Eligible for Vote");
    }

    return 0;
}