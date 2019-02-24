#include <stdio.h>

int main()
{
    long int a;
    scanf("%ld",&a);
    if(a>=-2,147,483,648 && a<= 2,147,483,647)
    {
        printf("INT");
    }
    else
    {
        printf("LONG");
    }
return 0;
}
