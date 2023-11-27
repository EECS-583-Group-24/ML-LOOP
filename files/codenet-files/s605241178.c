#include <stdio.h>

int main(void)
{
	int i,j;
	char s[10];
	scanf("%s",s);
	for(i=0;i<=9;i++)
		{if(s[i]=='B')
			{j=i;
			for(j;j<=9;j++)
				{s[j-1]=s[j+1];
				 s[j]='\0';
			 	 s[j+1]='\0';
				 i--;

				 }
			}
		}
	printf("ans %s\n",s);
	return 0;
}
