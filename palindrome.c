#include<stdio.h>
#include<conio.h>
void main()
{
    int N,K,r,sum=0;
    clrscr();
    scanf("%d",&N);
    K=N;
    while(N)
    {
     r=N%10;
     N=N/10;
     sum=sum*10+r;
    }
    if(sum==K)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    
    getch();
}
