#include <stdio.h>
#include<conio.h>
void main()
{
 char a;
 clrscr();
 scanf("%c",&a);
 if(a=='a' || a=='e' || a=='i' || a=='o' || a=='u' || a=='A' || a=='E' || a=='I' || a=='O' || a=='U')
 {
     printf("Vowel");
 }
 else if((a>=65 && a<=90) || (a>=97 && a<=122))
 {
     printf("Consonant");
 }
 else
 {
     printf("invalid");
 }
 getch();
}
