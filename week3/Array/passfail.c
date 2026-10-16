/*
Ques: Given an array of marks of students, if the mark of 10 student is less than 35 print its roll number.
[roll number here refers to the index of the array.]
*/

#include<stdio.h>

int main()
{
    int marks[10];
    for(int i=0; i<10; i++)
    {
        printf("Enter Marks of 10 Students outof 100: ");
        scanf("%d", &marks[i]);
    }

    printf("Roll number of studensts who has less than 35 marks: ");
    for(int i=0; i<10; i++)
    {
        if(marks[i]<=35) printf("%d ", i+1); 
    }
    printf("\nRoll number of studensts who has more than 35 marks: ");
    for(int i=0; i<10; i++)
    {
        if(marks[i]>35) printf("%d ", i+1);
    }
    return 0;
}