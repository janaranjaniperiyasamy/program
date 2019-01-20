#include<stdio.h>
#include<conio.h>
void main()
{
    char a;
    clrscr();
    scanf("%c",&a);
    if((a>=65 && a<=90) || (a>=97 && a<=122))
    {
        printf("Alphabet");
    }
    else
    {
        printf("No");
    }
    getch();
}
