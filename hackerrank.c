#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n,i,j,t=0,n1;
    scanf("%d", &n);
    n1=n;
    while(n)
    {
        for(j=0;j<n;j++)
        {
          if (t > 0 && j == 0)
           {
            printf("%d ", n1);
          }

          for (i = 1; i < n * 2 - 1; i++) {
            printf("%d ", n);
      }
      t++;
      if(i==n*2)
      {
          printf("%d ",n1);
      }
      break;
        }
      n--;
}
for (i = 1; i < n * 2 - 1; i++) {
  printf("%d ", n1);
}

return 0;
}
