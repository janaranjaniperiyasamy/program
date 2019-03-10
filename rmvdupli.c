#include <stdio.h>

int main()
{
   int a[1000],n,i,j;
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }
   for(i=0;i<n;i++)
  {
      for(j=i+1;j<n;j++)
      {
          if(a[i]==a[j])
          {
              a[j]=NULL;
          }
      }
  }
  for(i=0;i<n;i++)
  {
      if(a[i]!=NULL)
      {
          printf("%d ",a[i]);
      }
  }
    return 0;
}
