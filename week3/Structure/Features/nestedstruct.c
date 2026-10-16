// Nested Structure

#include<stdio.h>
#pragma pack(1)

typedef struct College{
    char collegename[50];
    int ranking;

    struct Student{
        int roll;
        char name[20];
        float per;
    }st;
}College;

College cl;


