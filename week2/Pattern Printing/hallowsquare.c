// Pattern Printing , 
                                        // *****          
                                        // *   *
                                        // *****

#include <stdio.h>

int main()
{
    int num; //odd

    printf("Enter num: ");
    scanf("%d", &num);

    
    for(int i=1; i<=num; i++) // outer loop:- number of line (rows)
    {
        for(int j=1; j<=num; j++) // inner loop:- number of starts "*" in each line (column)
        {
            
            if( i==1 )   // i: i+j=num-a(4)    
            {
                printf("%c ", j+64);            // top row: forward
            }
            else if( i==num )                   
            {   
                printf("%c ", (num-j+1)+64);    // bottom row: reversed (num-j+1)
            }   
            else if( j==1 )
            {
                printf("%c ", i+64);             // left edge
            }
            else if( j==num )
            {
                printf("%c ", (num-i+1)+64);    // right edge
            }
            else
            {
                printf("  ");                    // inside: blank
            }
        }
        printf("\n");
    }

    return 0;
}