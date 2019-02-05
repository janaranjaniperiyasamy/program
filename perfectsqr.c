#include<stdio.h>
void main()
{
    int a,b,c,i,r=0;
    scanf("%d %d",&a,&b);
    c=a*b;
    for(i=1;i<=c/2;i++)
    {
      if(i*i==c)
        {
          r=1;
        }
    }
    if(r==1)
    {
            printf("yes");
        }
        else
        {
            printf("no");
        }
}
