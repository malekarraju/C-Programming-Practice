#include<stdio.h>

int main()
{
    FILE* FP;
    int data =05;
    float data2 = 5.56;
    char name[]="RAJU MALEKAR";
    char ch='R';

    FP = fopen("myfile.txt", "w");

    if(FP==NULL) printf("\nFile is not created.");
    else
    {
        printf("\nFile is created.");
        fprintf(FP,"Name: %s\nData: %d\nData2: %.3f\nChar: %c",name, data, data2, ch);
        printf("\nData entered in the file.");

        fclose(FP);
    }

    return 0;
}