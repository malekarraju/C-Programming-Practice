// Make a  Arthematic calculator using switch case

#include <stdio.h>

int main()
{
    int num1, num2;
    float result;
    char operator;

    printf("Enter two number and opertor(+ - * / %): ");
    scanf("%d %d %c", &num1, &num2, &operator);

    switch(operator)
    {
        case '+':
            result = num1 + num2;
            break;
        
        case '-':
            result = num1 - num2;
            break;

        case '*':
            result = num1 * num2;
            break;
        
        case '/':
            result = (float)num1 / (float)num2; // Type casting
            break;

        case '%':
            result = num1 % num2;
            break;

        default:
            printf("Invalide Operator");

    }
    

    
    printf("Result is %d %c %d = %.2f", num1, operator, num2, result);


    return 0;

}
