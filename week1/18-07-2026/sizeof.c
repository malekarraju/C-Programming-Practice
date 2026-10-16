// sizeof program

#include <stdio.h>

int main()
{

    int a = 54;

    printf("Size of A = %d", sizeof(a));
    printf("\nSize of float is = %d", sizeof(float));

    printf("\nSize of char is = %c", sizeof(char));
    printf("\nSize of douoble is = %lf", sizeof(double));

    printf("\nSize of long is = %ld", sizeof(long));
    printf("\nSize of long long is = %lld", sizeof(long long));
    printf("\nSize of short is = %hd", sizeof(short));
    printf("\nSize of long double is = %Lf", sizeof(long double));

    return 0;

}