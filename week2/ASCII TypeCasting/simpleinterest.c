// Enter the P,T,R and calculate the Simple Interest

#include <stdio.h>

int main()
{
    float p, r, time;
    float simpint;

    printf("Enter the Principle Amount, Rate of Interest(%) and Time(in years): ");
    scanf("%f %f %f", &p, &r, &time);
    printf("Principle Amount is %.2f₹\nRate of Interest is %.2f%%\nTime %.2f years", p, r, time);

    simpint = (p*r*time/100);
    printf("\nSimple Interest is %.4f", simpint);

    return 0;
}