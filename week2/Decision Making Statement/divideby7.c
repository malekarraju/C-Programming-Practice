// Seven thief do robbery of malas, when mala divide in 2 thief 1 mani remains, when divide in 3 then 1 mani remains, as same for 4,5 7 6.
// But the when the mala divide in all thief then 0 mani remains. so Find the number.

#include <stdio.h>

int main()
{
    printf("The number are: ");

    for(int i=0; i<=1000; i+=7)
    {
            if(i%3==1)
            {
                if(i%4==1)
                {
                    if(i%5==1)
                    {
                            if(i%7==0)
                            {
                                printf("%d  ",i);
                            }
                    }
                }
            }
    }

    return 0;

}
