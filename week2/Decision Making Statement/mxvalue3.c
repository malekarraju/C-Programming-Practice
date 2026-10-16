// Accept three number and find max one

#include <stdio.h>

int main()
{
    int num1, num2, num3;

    printf("Enter the three number: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    if(num1==num2 && num1==num3)
    {
        printf("All three numbers are equal");
    }
    else
    {
    switch(num1>num2 && num1>num3)
        {
            case 1:
                printf("%d is grerater", num1);
                break;

            case 0:
                switch(num2>num3)
                {
                    case 1:
                        printf("%d is greater", num2);
                        break;

                    case 0:
                        printf("%d is greater", num3);
                        break;
                }
            
        }

    }

    return 0;

}