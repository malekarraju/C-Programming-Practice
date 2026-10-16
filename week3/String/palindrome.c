// check string is palindrome or not
#include<stdio.h>

int main()
{
    char name[20], len;

    puts("Enter the upper case string: ");
    gets(name);
    // fgets(name, sizeof(name), stdin);

    for(int i=0; name[i]!='\0'; i++)
    {
        len++;
    }
    
    int j=0;
    int k = len -1;
    int palincheck=0;
    while(j<=k)
    {
        if(name[j] != name[k])
        {
            palincheck=1;
            break;
        }
        j++;
        k--;
    }
    if(palincheck) printf("Not Palindrome");
    else printf("Palindrome");

    return 0;
}