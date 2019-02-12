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
i=0;
      if (i==0 && t>0) {
        printf("%d ", n1);
      }

      for (i = 1; i <=n * 2-1 ; i++) {
        printf("%d ", n);
      }
      
      
   
    if (t > 0 && i == n * 2 ) {
      printf("%d ", n1);
    }
    n--;
    t++;
    printf("\n");
     
}
for (i = 0; i < n1 * 2 - 1; i++) {
  printf("%d ", n1);
}

return 0;
}

