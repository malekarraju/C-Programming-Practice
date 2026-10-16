// to find ASCII vaslues for symbol, digits and alphabets

#include <stdio.h>

int printascii(char);    //0-255

int main()
{
    char a;
    int result;

    printf("Enter any single- Character/Digit/Alphabet: ");
    scanf(" %c", &a);
    printf("You enter %c", a);

    if((int)a>=65 && (int)a<=90)
    {
        result = printascii(a);
        printf("\nASCII value of %c is %d", a, result);
    }
    
    else 
        printf("\nInvalid Input");

    return 0;

}

int printascii(char a)
{
    return a;
}

//int specialsym1(char);    //32-47
// int digit(char);          //48-57
// int specialsym2(char);    //58-64
// int uppercase(char);      //65-90
// int specialsym3(char);    //91-96
// int lowercase(char);      //97-122




// else if(a>=32 && a<=47)
    // {
    //     result = specialsym1(a);
    //     printf("ASCII value of %c is %d", a, result);
    // }
    
    // else if(a>=48 && a<=57)
    // {
    //     result = digit(a); 
    //     printf("ASCII value of %c is %d", a, result);
    // }

    // else if(a>=58 && a<=64)
    // {
    //     result = specialsym2(a);
    //     printf("ASCII value of %c is %d", a, result);
    // }

    // else if(a>=65 && a<=90)
    // {
    //     result = uppercase(a);
    //     printf("ASCII value of %c is %d", a, result);
    // }

    // else if(a>=91 && a<=96)
    // {
    //     result = specialsym3(a);
    //     printf("ASCII value of %c is %d", a, result);
    // }

    // else if(a>=97 && a<=122)
    // {
    //     result =lowercase(a);
    //     printf("ASCII value of %c is %d", a, result);
    // }