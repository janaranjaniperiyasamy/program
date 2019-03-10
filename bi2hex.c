#include <stdio.h>

int main()
{
   long long int n,s=1,r,temp=0;
   scanf("%lld",&n);
   while(n)
   {
       r=n%10;
       n=n/10;
       temp=temp+(r*s);
       s=s*2;
   }
   printf("%llx",temp);
    return 0;
}
