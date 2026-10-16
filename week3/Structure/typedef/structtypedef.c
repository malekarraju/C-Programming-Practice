#include<stdio.h>
#include<string.h>

// Method 1st, to use typedef in structure
typedef struct Student{
    int roll;
    char name[20];
    float per;
} Stud;

int main()
{
    Stud st;
    printf("--------------EX1-------------");
    printf("\nRoll No: %d", st.roll=12);
    printf("\nName: %s", strcpy(st.name,"Raju Malekar"));
    printf("\nPercentage: %.2f", st.per=89.99);

    return 0;
}