#include<stdio.h>

typedef enum {
    START=1,
    PAUSE,
    RESTART,
    EXIT
}Game;

int main()
{
    Game choice;

    int userip;
    printf("----GAME MENU-----");
    printf("\nEnter the 1 to START");
    printf("\nEnter the 2 to PAUSE");
    printf("\nEnter the 3 to RESTART");
    printf("\nEnter the 4 to EXIT");

    printf("\nEnter Your Choice: ");
    scanf("%d", &userip);

    choice=userip;

        switch(choice)
        {
            case START:
            printf("\nGame is Loading....");
            break;

            case PAUSE:
            printf("\nGame is PAUSED");
            break;

            case RESTART:
            printf("\nRestarting the Game.....");
            break;

            case EXIT:
            printf("\nThank You Master!\nPlease Visit Again, I am waiting");
            break;

            default:
            printf("\nInvalid Choice");
            break;
        }

    return 0;
}