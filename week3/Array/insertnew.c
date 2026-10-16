// Insert the new Element

#include <stdio.h>

int EnterElements(int,int*);
int PrintElements(int,int*);
int insert(int, int*);

int main()
{
    int size, sum;
    printf("Enter Size of Array: ");
    scanf("%d",&size);
    int arr[size+1]; // create a room for new element 

    EnterElements(size, &arr[0]); // array inputs
    PrintElements(size, &arr[0]); // display elements
    insert(size, arr);
    PrintElements(size+1, &arr[0]); // display elements

    return 0;
}

int insert(int s, int data[])
{
    int pos, ele;
    printf("\nEnter the Position: "); //*
    scanf("%d", &pos);
    printf("Enter the Elemnt: ");
    scanf("%d", &ele);

    for(int i=s;i>=pos;i--) //*
    {
        data[i]=data[i-1]; // shifting from position where need to enter new element 
    }
    data[pos]=ele;

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