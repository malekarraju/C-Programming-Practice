#include<stdio.h>

enum level 
{   LOW=1,
    MEDIUM,
    HIGH
};

int main()
{
    enum level state=MEDIUM;

    switch(state)
    {
        case 1:
            printf("\nWater Lavel is Low");
            break;

        case 2:
            printf("\nWater Level is Medium");
            break;

        case 3:
            printf("\nWater Level is High");
            break;
    }

    return 0;
}