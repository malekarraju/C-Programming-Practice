// Write a program to print the month + days of the day in a week, taking 1-7 input from the user, using switch case

#include <stdio.h>

int main()
{
    int month;

    printf("Enter the month number (1-12): ");
    scanf("%d", &month);

    switch(month)
    {
        case 1:
        printf("January has 31 days");
        break;

        case 2:
        printf("February has 28 days (Depend on Leap Year)");
        break;

        case 3:
        printf("March has 31 days");
        break;

        case 4:
        printf("April has 30 days");
        break;

        case 5:
        printf("May has 31 days");
        break;

        case 6:
        printf("June has 30 days");
        break;

        case 7:
        printf("July has 31 days");
        break;

        case 8:
        printf("August has 31 days");
        break;

        case 9:
        printf("September has 30 days");
        break;

        case 10:
        printf("October has 31 days");
        break;

        case 11:
        printf("November has 30 days");
        break;

        case 12:
        printf("December has 31 days");
        break;

        default:
        printf("Invalide Input\nPlease Enter the number in between 1-12");
        break;

    }

    return 0;
}