// Find Even number and Sum them
#include <stdio.h>

int EnterElements(int,int*);
int PrintElements(int,int*);
int EvenOddCheck(int,int*,int);

int main()
{
    int size, sum;
    printf("Enter Size of Array: ");
    scanf("%d",&size);
    int arr[size];

    EnterElements(size, &arr[0]); // array inputs
    PrintElements(size, &arr[0]); // display elements

    printf("\nEven Values are: "); 
    sum=EvenOddCheck(size, &arr[0], 0);  // for even numbers
    printf("\nSum of Even is: %d", sum);

    printf("\nOdd Values are: "); 
    sum=EvenOddCheck(size, &arr[0], 1);  // for  odd numbers
    printf("\nSum of Odd is: %d", sum);

    return 0;
}

int EvenOddCheck(int s, int *data,int q)
{
    int sum=0;
    for(int i=0; i<s; i++)
    {
        if(data[i]%2==q)
        {
            printf("%d ",data[i]);
            sum = sum + data[i];
        }
    }
    return sum;
}

int EnterElements(int s, int* data)
{
    for(int i=0 ; i<s ; i++)
    {
        printf("Enter the Element of index %d Array: ", i);
        scanf("%d",&data[i]);
    }
    return 0;
}

int PrintElements(int s,int data[])
{
    for(int i = 0; i < s; i++)
    {
        printf("\nElement of index %d is %d", i, data[i]);
    }
}

