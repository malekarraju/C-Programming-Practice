#include<stdio.h>
#include<string.h>
#include<stdbool.h>

#pragma pack(1)

typedef struct Raju
{
    int date;
    char name[20];
}Raju;

int main()
{
    Raju A ={56,"RAJU"};
    Raju B=A;

    printf("\n\n--------Access by A------------- ");
    printf("\nDate is %d", A.date);
    printf("\nDate is %s", A.name);
    printf("\n\n--------Access by B------------- ");
    printf("\nDate is %d", B.date);
    printf("\nDate is %s", B.name);
// no direct "==" struct to struct comparision possible in Structure
// need one by one Member comparision
    bool flag=true;
    if(A.date!=B.date) flag=false;
    if(strcmp(A.name,B.name)) flag=false;
    
    printf("\n\n-----------Check Same or not-----------");
    if(flag) printf("\nBoth are Same Structure");
    else printf("\nBoth are Different");

    return 0;
}

