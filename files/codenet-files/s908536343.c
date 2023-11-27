#include<stdio.h>
#include<string.h>
int main()
{
	char input[15],temp[15];
	scanf("%s",input);
	int len = strlen(input);
	int i = 0,j = 0;
	while(len--)
	{
		if(input[j] == 'B')
		{
			if(i > 0)
			{
				i--;
			}
			j++;
		}
		else{
			temp[i] = input[j];
			i++;
			j++;
		}
	}
	printf("%s\n",temp);
	return 0;
}