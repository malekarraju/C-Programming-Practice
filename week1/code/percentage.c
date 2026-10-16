// Calculate total marks and percentage of five subjects

#include <stdio.h>

int main()
{
    int math, sci, hin, eng, mar;
    float total, percentage;
    
    printf("Please enter the marks of five subject out of 100 each: ");
    scanf("%d %d %d %d %d", &math, &sci, &hin, &eng, &mar);

    printf("Marks of math = %d\n", math);
    printf("Marks of science = %d\n", sci);
    printf("Marks of hindi = %d\n", hin);
    printf("Marks of english = %d\n", eng);
    printf("Marks of marathi = %d\n", mar);
    
    total= math+sci+hin+eng+mar;
    percentage=(total/500.0)*100;
    
    printf("Total Marks = %.2f", total);
    printf("\nPercentage = %.2f%%", percentage);
    
    return 0;
}