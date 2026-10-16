// Store Marks of  5 students and calculate percentage of each
#include<stdio.h>

typedef struct Marks
{
    int Chem, Phy, Eng, Biology, Maths, total;
    float percentage;
}Marks;

int main()
{
    Marks M[5];

    //Enter marks of five students
    printf("Enter The Marks (Chem, Phy, Eng, Biology, Maths) out of 100: ");
    for(int i=0; i<5; i++)
    {
        printf("\nEnter Marks of Student %d: ", i+1);
        scanf("%d",&M[i].Chem);
        scanf("%d",&M[i].Phy);
        scanf("%d",&M[i].Eng);
        scanf("%d",&M[i].Biology);
        scanf("%d",&M[i].Maths);

    }
    for(int i=0; i<5; i++)
    {
        printf("\n-------- Marks of Student %d --------",i+1);
        printf("\nChemistry: %d",M[i].Chem);
        printf("\nPhysics: %d",M[i].Phy);
        printf("\nEnglish: %d",M[i].Eng);
        printf("\nBiology: %d",M[i].Biology);
        printf("\nMaths: %d",M[i].Maths);
        M[i].total = M[i].Chem + M[i].Eng + M[i].Phy + M[i].Biology + M[i].Maths;
        printf("\nTotal Marks: %d/500", M[i].total);
        M[i].percentage = (M[i].total/(float)500)*100;
        printf("\nTotal Percentage of Student %d: %.2f %%",i+1,M[i].percentage);
    }

    return 0;
}