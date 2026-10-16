

// Printing all Uppercase alphabest


#include <stdio.h>

int main()
{
    int a=0;
    
    for(int i=65; i<=90; i++)  //for lower case 97-122
    {
        a=i; 

        printf("%c ", (char)a);  // type casting, explicit
    }


    return 0;
}