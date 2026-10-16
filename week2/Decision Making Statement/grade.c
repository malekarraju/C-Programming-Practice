// Write a C program to input marks of five subjects Physics, Chemistry, Biology, Mathematics and Computer,
// calculate percentage and grade according to given conditions:

// If percentage >= 90%: Grade A
// If percentage >= 80%: Grade B
// If percentage >= 70%: Grade C
// If percentage >= 60%: Grade D
// If percentage >= 40%: Grade E
// If percentage < 40%: Grade F

#include <stdio.h>

int main()
{
    float Physics, Chemistry, Biology, Mathematics, Computer;
    float total, percentage;

    printf("Enter the Five subject marks:");
    scanf("%f %f %f %f %f", &Physics, &Chemistry, &Biology, &Mathematics, &Computer);

    total = Physics + Chemistry + Biology + Mathematics + Computer;
    percentage = (total/500.00)*100;
    printf("Percentage is %.2f%%", percentage);

            if(percentage > 100)
            {
                printf("\nInvalid");
            }
            else if(percentage >= 90)
            {
                printf("\nGrade A");
            }
            else if(percentage >= 80)
            {
                printf("\nGrade B");
            }
            else if(percentage >= 70)
            {
                printf("\nGrade C");
            }
            else if(percentage >= 60)
            {
                printf("\nGrade D");
            }
            else if(percentage >= 50)
            {
                printf("\nGrade E");
            }
            else if(percentage >= 40)
            {
                printf("\nGrade F");
            }
            else 
            {
                printf("\nFail");
            }

    return 0;
    
}