#include<stdio.h>
void main()
{
    int a,b,c=0,i,j,t=0;
    scanf("%d %d",&a,&b);
    for(i=a;i<=b;i++)
    {
        c=0;
        for(j=2;j<i;j++)
        {
        if(i%j==0)
        {
        c=1;
        }
    }
    if(c==0)
    {
        t++;
    }

}
printf("%d",t);
}
