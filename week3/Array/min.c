//Find Minimum Value from the Array Inserted by user
#include<stdio.h>

int main()
{
    int arr[5];
    for(int i=0; i<5; i++)
    {
        printf("Enter the Array Elemnts: ");
        scanf("%d",&arr[i]);
    }

    int p=0,min=arr[0];
    for(int i=0; i<5-1; i++)
    {
        if(min>arr[i+1])
        {
            min=arr[i+1];
            p=i+1;
        }
    }
    printf("Minimum Value is %d, found at index %d",min,p);
    return 0;
}