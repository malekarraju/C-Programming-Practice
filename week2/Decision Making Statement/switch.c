// Write a program to print the name of the day in a week, taking 1-7 input from the user, using switch case

#include <stdio.h>

int main()
{
    int week;

    printf("Enter the week number (1-7): ");
    scanf("%d", &week);

    switch(week)
    {
        case 1:
        printf("Monday");
        break;

        case 2:
        printf("Tuesday");
        break;

        case 3:
        printf("Wedneday");
        break;

        case 4:
        printf("Thursday");
        break;

        case 5:
        printf("Friday");
        break;

        case 6:
        printf("Saturday");
        break;

        case 7:
        printf("Sunday");
        break;

        default:
        printf("Invalide Input\nPlease Enter the number in between 1-7");
        break;

    }

    return 0;
}