#include <stdio.h>

int main()
{
    char a[100];
    int i,j,temp;
    scanf("%s",a);
        for(i=0;a[i]!=NULL;i++)
        {
            for(j=i;a[j]!=NULL;j++)
            {
                if(a[i]>a[j])
                {
                    temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;
                }
            }
        }
    puts(a);

    return 0;
}
