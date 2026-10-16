// Array with pointer by function
#include<stdio.h>

void input(int*, int size);
void display(int*, int size);

int main()
{
    int size;
    printf("ENter the Size of array: ");
    scanf("%d", &size);
    int arr[size];

    input(arr, size);
    display(arr,size);

    return 0;
}

void input(int* a, int size)
{
    printf("Enter the Elemnets of array: ");
    for(int i=0; i<size; i++)
    {
        scanf("%d", (a+i));
    }
    return;
}

void display(int* a, int size)
{
    
    printf("Elemnets of array: ");
    for(int i=0; i<size; i++)
    {
        printf("%d ", *(a+i));
    }

    return;
}

