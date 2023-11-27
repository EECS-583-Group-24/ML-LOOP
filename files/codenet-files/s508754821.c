#include <stdio.h>
int main(void)
{
	int i,j;
	char s[10];
	scanf("%s",s);
	for(i=0;i<=9;i++)
		{if(s[i]=='B'&& i != 0)
			{j=i;
			i-=2;

			for(j;j<=8;j++)
				{
			 	 s[j-1]=s[j+1];
				 s[j]='\0';
			 	 s[j+1]='\0';
				}

			}				 
		if(s[i]=='B' && i == 0)
			{j=0,i--;;

			for(j;j<=8;j++)
				{s[j]=s[j+1];
				 s[j+1]='\0';
				}

			}
		}
	printf("%s\n",s);
	return 0;
}
