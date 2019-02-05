#include<conio.h>
void main()
{
    int a,c=0,i;
    clrscr();
    scanf("%d",&a);
    for(i=2;i<a;i++)
    {
        if(a%i==0)
        {
            c=1;
        }
    }
    if(c==1)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    getch();
}
