#include<stdio.h>
#include<string.h>

#pragma pack(1)

union Student{
    int roll;
    char name[10];
    float per;
} st;

int main()
{
    printf("--------------Union EX1-------------");
    printf("\nSize of Union: %d", sizeof(st));
    printf("\nRoll No: %d", st.roll=12);
    printf("\nName: %s", strcpy(st.name,"Raju Malekar"));
    printf("\nPercentage: %.2f", st.per=89.99);

    printf("\n\n--------------After Overwrite-------------");
    printf("\nRoll No: %d", st.roll);

    return 0;
}