#include<stdio.h>
#include<conio.h>
void main()
{
    int N,K,c=1;
    clrscr();
    scanf("%d %d",&N,&K);
    while(K)
    {
     c=c*N;
     K--;
    }
    printf("%d",c);
    getch();
}
