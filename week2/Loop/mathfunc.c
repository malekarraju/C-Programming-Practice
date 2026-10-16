// log10();  pow(base,exponant);  round():  sqrt();
// Syntax:
// - double result = log10(1000);   // result = 3.0 ( +1 ) is necessary 
// - double result = pow(5, 3);     // result = 125.0   (5³)
// - double result = round(2.9999999996);   // result = 3.0
// - double result2 = sqrt(2);      // result2 = 1.41421356...


#include <stdio.h>
#include <math.h>

int main()
{

    // log10()
    int num = 46548, res;
    res = log10(num)+1;
    printf("Total digits in %d are %d", num, res);


    // pow()  
    int a=5, b=3;
    int power = round(pow(a,b));  /// 5^3 
    printf("\nPower is: %d", power);

    // double sqrt(double x);
    float num1=2, square=0;
    square = sqrt(num1);
    printf("\nSquare root of 2 is %.4f", square);



    return 0;

}