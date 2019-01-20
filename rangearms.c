#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    int a,a3,b,b1,c,r,sum=0,i;
    clrscr();
    scanf("%d %d",&a,&a3);
    for(i=a+1;i<a3;i++)
    {
	sum=0;
	c=0;
	b1=i;
    b=i;
    while(b1)
    {
	b1=b1/10;
	c++;
    }
    while(b)
    {
	r=b%10;
	b=b/10;
	sum=sum+pow(r,c);
    }
    if(i==sum)
    {
	printf("%d ",i);
    }
    }
    getch();
}
