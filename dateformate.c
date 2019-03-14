#include <stdio.h>
#include<string.h>

void main()
{
	char str[100];
	scanf("%s",str);
	int len,count;
	len=strlen(str);
	if(str[0]<'4' && str[1]<'10' && str[2]=='/' && str[3]<'2' && str[4]<'3' && str[5]=='/' && str[6]<'10' && str[7]<'10' && str[8]<'10' && str[9]<'10'&&str[10]=='\0')
	{
		count=1;
	}
	else
	{
		count=0;
		
	}
	if(count==0)
	{
		printf("no");
	}
	if(count==1)
	{
		printf("yes");
	}
	
	return 0;
  }
