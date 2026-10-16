// Accept number and check if it is positive, negative or zero

#include <stdio.h>

int main()
{
    int num;

    printf("Enter the number: ");
    scanf("%d", &num);

    switch(num>0) // we do expression here 
    {
        case 1: // here is constant variable only 
            printf("%d is positive number", num);
            break;

        case 0:
            switch(num<0)
            {
                case 1:
                    printf("%d is negative number", num);
                    break;
                
                case 0:
                    printf("'%d' it is zero", num);
                    break;
            }
    }

    return 0;
}