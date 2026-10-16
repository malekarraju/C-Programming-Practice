#include<stdio.h>
#include<string.h>

struct Student{
    int roll;
    char name[20];
    float per;
};

int main()
{
// Method 2nd, to use typedef in structure
    typedef struct Student Stud; // new alias is Stud
    Stud st;

    printf("------------EX2-------------");
    printf("\nRoll No: %d", st.roll=12);
    printf("\nName: %s", strcpy(st.name,"Raju Malekar"));
    printf("\nPercentage: %.2f", st.per=89.99);

    return 0;
}