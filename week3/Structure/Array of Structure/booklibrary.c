// Enter book details and Display

#include<stdio.h>

typedef struct book
{
    char title[20];
    char author[20];
    int price;
}book;

int main()
{
    book B[2];

    for(int i=0; i<2; i++)
    {
        printf("Enter Book %d Title: ", i+1);
        fgets(B[i].title, sizeof(B[i].title), stdin);
        printf("Enter Book %d Author: ", i+1);
        fgets(B[i].author, sizeof(B[i].author), stdin);
        printf("Enter Book %d Price: ", i+1);
        scanf("%d", &B[i].price);
        getchar();
    }

    for(int i=0; i<2; i++)
    {
        printf("\n--------Book %d Detail-----------\n", i+1);
        printf("Book Title: %s", B[i].title);
        printf("Book Author: %s", B[i].author);
        printf("Book Price: %d", B[i].price);
    }

    return 0;
}