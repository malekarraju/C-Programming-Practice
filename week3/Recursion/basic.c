#include <stdio.h>
void fun();

int main()
{
    fun(1,5);
}

void fun(int s, int e)
{
    if(s==e) return;
    
    if(s<=e) printf("\n Raju %d", s);
    else return;

    fun(++s,e);  // recursive function : s+1, s++, ++s


    // if(s<=e) printf("\n Raju %d", s);
    // else return;
    
}