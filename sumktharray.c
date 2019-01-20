#include<stdio.h>
#include<conio.h>
void main()
{
    int a[20],N,K,i,sum=0;
    clrscr();
    scanf("%d %d",&N,&K);
    for(i=0;i<N;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<=K;i++)
    {
        sum=sum+i;
    }
    printf("%d",sum);
    getch();
}
