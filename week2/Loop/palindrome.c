// WAP to check the given number is Palindrome or not
/*==============================for digits==============================*/
#include <stdio.h>
#include <math.h>

int main()
{
    int rem, num, temp, count, result=0;
    printf("Enter the numbe to check: ");
    scanf("%d", &num); //121

    temp=num;
    count = log10(num)+1;

    for(int i=1; i<=count; i++)
    {
    
        rem = num%10; // 12.1    1.2     0.1 
        result= (result*10) + rem; // 0 = 0*10 + 1    12 = 1*10 + 2      12 = 12*10 + 1   = 121
        num=num/10;   // 121 =  12     1
        
    }

    if(result==temp)
    {
        printf("palindrome");
    }
    else 
    {
        printf("not palindrome");
    }

    return 0;
}

/*==============================for alphabets==============================*/

// #include <stdio.h>
// #include <math.h>

// int main()
// {
//     int rem, temp, count, result=0;
//     char ch[10];
//     printf("Enter the numbe to check: ");
//     scanf("%s", &ch); //121

//     int i=1;
//     {

//     }

// }