//Delete Element From Array
#include <stdio.h>

int EnterElements(int,int*);
int PrintElements(int,int*);
int delete(int, int*);

int main()
{
    int size, sum;
    printf("Enter Size of Array: ");
    scanf("%d",&size);
    int arr[size]; // create a room for new element 

    EnterElements(size, &arr[0]); // array inputs
    PrintElements(size, &arr[0]); // display elements
    delete(size, arr);
    PrintElements(size-1, &arr[0]); // display elements

    return 0;
}

int delete(int s, int data[])
{
    int pos, ele;
    printf("\nEnter the Position: "); //*
    scanf("%d", &pos);

    ele=data[pos]; // 1 2 3 4 5
    printf("Deleted Element from Array is %d", ele);
    for(int i=pos;i<s;i++) //*
    {
        data[i]=data[i+1]; // shifting left towards deleted element 
    }
    return 0;
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
    printf("\nElement of Array: ");
    for(int i = 0; i < s; i++)
    {
        printf("%d ", data[i]);
    }
    return 0;
}
