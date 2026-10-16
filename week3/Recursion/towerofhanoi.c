/*
Tower of Hanoi
The object of the game is to move all the disks over to Tower 3 (drag and drop).
But you cannot place a larger disk onto a smaller disk.
*/

#include<stdio.h>
#include<math.h>

void towerofhanoi(int, char, char, char);

int main()
{
    int num;
    printf("Enter the numbers of Disc: ");
    scanf("%d", &num);

    printf("\nThe Steps Required to solve 'Tower of Hanoi' with %d Disc are %d.",num, (int)(pow(2,num)-1));
    towerofhanoi(num, 'A', 'B', 'C');

    return 0;
}

void towerofhanoi(int n, char S, char H, char D)
{
    if(n==0) return;             //  Working Steps: 
    towerofhanoi(n-1,S, D, H);        // chotta Pyramid Source(S=A) se uthake helper(H=B) pe rakha
    printf("\n%c --> %c", S, D);      // base ko source(S=A) se destination(D=C) pe rakha
    towerofhanoi(n-1,H, S, D);        // fir chhote ko helper(H=B) se uthake base mtlb destination(D=C) pe rakha

    return;
}