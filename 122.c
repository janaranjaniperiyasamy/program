#include <stdio.h>

int main()
{
    char a[1000];
    scanf("%s",a);
    if(a[3]=='0' && a[4]=='1')
    {
        printf("January");
    }
    if(a[3]=='0' && a[4]=='2')
    {
        printf("February");
    }
    if(a[3]=='0' && a[4]=='3')
    {
        printf("March");
    }
    if(a[3]=='0' && a[4]=='4')
    {
        printf("April");
    }
    if(a[3]=='0' && a[4]=='5')
    {
        printf("May");
    }
    if(a[3]=='0' && a[4]=='6')
    {
        printf("June");
    }
    if(a[3]=='0' && a[4]=='7')
    {
        printf("July");
    }
    if(a[3]=='0' && a[4]=='8')
    {
        printf("August");
    }
    if(a[3]=='0' && a[4]=='9')
    {
        printf("september");
    }
    if(a[3]=='1' && a[4]=='0')
    {
        printf("October");
    }
    if(a[3]=='1' && a[4]=='1')
    {
        printf("Novemer");
    }
    if(a[3]=='1' && a[4]=='2')
    {
        printf("December");
    }
    return 0;
}
