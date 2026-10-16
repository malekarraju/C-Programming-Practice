// Conversion of temperature from Fahrenheit to Celsius

#include <stdio.h>

int main()
{
    float Temperature; 
    
    printf("Enter the Temperature in celcius: ");
    scanf("%f",& Temperature);
    printf("\nTemperature in Celcius is %.2f°C", Temperature);
    
    float Fahrenheit;

    Fahrenheit= (Temperature*(9/5))+32;
    printf("\nTemperature in Fahrenheit is %.2f°F", Fahrenheit);

    return 0;

}