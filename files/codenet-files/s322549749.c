#include<stdio.h>
#include<string.h>
int main(void)
{
	char str[100];
	scanf("%s", str);
	int i;
	int k = 0;
	int len= strlen(str);
	for (i = 0; i < len; i++)
	{
		if (i == 0 && str[i] == 'B') {
			str[i] = '\0';
			k++;
			continue;
		}
		if (str[i] == 'B')
		{
			str[i - 1] = '\0';
			str[i] = '\0';
			k++;
		}
	}
	for (i = 0; i < len; i++)
	{
		while (str[i] == '\0')
		{
			i++;
		}
		printf("%c", str[i]);
	}
	printf("\n");
	return 0;
}
