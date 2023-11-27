#include<stdio.h>
#include<string.h>

int main(void)
{
	int len = 0,i;
	char str[16];
	
	fgets(str,sizeof(str),stdin);
	for(i=0;i<strlen(str);i++)
	{
		switch(str[i])
		{
			case '0':str[len] = '0';
					 len++;
					 break;
			
			case '1':str[len] = '1';
					 len++;
					 break;
			
			default :if(len > 0)
					{
						len--;
					}
					break;
		}
	}
	
	for(i=0;i<len;i++)
	{
		printf("%c",str[i]);
	}
	
	return 0;
}