// WAP accept the end num, Print the natural num inreverse from end to 1

#include <stdio.h>

int main()
{
    int end;

    printf("Enter the last no:");
    scanf("%d", &end);
    
    printf("Natural number in reverse are: ");

    for(int i=end; i>=1; i--)
    {
        printf("%d ", i);
    }

    return 0;
} 