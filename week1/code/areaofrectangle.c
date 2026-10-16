// find area of rectangle

#include <stdio.h>

int main()
{
    float len, bre, areaofrec;

    printf("Enter len and bre: ");
    scanf("%f %f", &len, &bre);

    areaofrec = len*bre;
    printf("Area of Rectangle= %.2f",areaofrec);

return 0;

}