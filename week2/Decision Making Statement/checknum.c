// Write a program to check if a number is positive, negative, or zero using, if, else-if, else staement

#include <stdio.h>

int main()
{
    int num;

    printf("Enter Positive/Negative/Zero number: ");
    scanf("%d", &num);

    if(num>0)
    {
        printf("%d is Positive number", num);
    }
    else if(num<0)
    {
        printf("%d is Negative number", num);
    }
    else if(num==0)
    {
        printf("%d :- it is Zero", num);
    }
    else
    {
        printf("Invalide Input. Please Enter Valide Number");
    }

    return 0;
}