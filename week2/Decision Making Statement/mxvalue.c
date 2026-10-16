// Write a program to accept two number and find the max number

#include <stdio.h>

int main()
{
    int num1, num2;

    printf("Enter the two number: ");
    scanf("%d %d", &num1, &num2);

    switch(num1 > num2)
            {
                case 1:
                printf("%d is maximum", num1);
                break;

                case 0:
                switch(num1==num2)
                {
                    case 1:
                    printf("%d is equal to %d",num1, num2);
                    break;

                    case 0:
                    printf("%d is maximun", num2);
                    break;
                }
            }


    // if(num1==num2)
    // {
    //     printf("%d is equal to %d", num1, num2);
    // }
    // else
    // {
    //         switch(num1> num2)
    //         {
    //             case 1:
    //             printf("%d is maximum", num1);
    //             break;

    //             case 0:
    //             printf("%d is maximum", num2);
    //             break;
    //         }
    // }
    
    // if(num1!=num2)
    // {
    //     switch(num1> num2)
    //         {
    //             case 1:
    //             printf("%d is maximum", num1);
    //             break;

    //             case 0:
    //             printf("%d is maximum", num2);
    //             break;
    //         }
    // }
    // else
    // {
    //     printf("%d is equal to %d", num1, num2);
    // }



    return 0;
}