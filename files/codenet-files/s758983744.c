#include <stdio.h>
#include<string.h>

int main(void)
{
	int i;
	char s[11];
	
	scanf("%s",s);
	
	for(i=0;i<strlen(s)+1;i++)
	{
		if(s[i]=='B')
		{
			s[i-1]=3;
			s[i]=3;
		}
	}
	
	for(i=0;i<strlen(s)+1;i++)
	{
		if(s[i]!=3)
		{printf("%c",s[i]);}
	}
	printf("\n");
	return 0;	
}
