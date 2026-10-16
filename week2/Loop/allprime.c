// FInd all Prime number using nested loop

#include <stdio.h>

int main()
{
    int end, status;

    printf("Enter the End number: ");
    scanf("%d", &end);
    

    printf("\nAll Prime Number are 1 to %d: ", end);
    for(int i=2; i<=end; i++) // range
    {           // 5<=20

        status = 1;  // reset

        for(int j=2; j<=i/2; j++) // prime logic
        {            // 3<=2

            if(i%j==0)  // Find the composite number
            {
                status =0;
                break;
            }
        }

            if(status==1)
            {
                printf("%d ", i);  // 2, 3, 5
            }
    }


    return 0;
}