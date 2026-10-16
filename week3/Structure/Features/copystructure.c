#include<stdio.h>
#include<string.h>

#pragma pack(1)

typedef int Malekar;
typedef char Ravindra;

typedef struct Raju
{
    Malekar date;
    Ravindra name[20];
}Raju;

int main()
{
    Raju A ={56,"RAJU"};
    Raju B=A; // one structure Member copy in another structure

    printf("\n\n--------Access by A------------- ");
    printf("\nDate is %d", A.date);
    printf("\nDate is %s", A.name);
    printf("\n\n--------Access by B------------- ");
    printf("\nDate is %d", B.date);
    printf("\nDate is %s", B.name);

    return 0;
}

