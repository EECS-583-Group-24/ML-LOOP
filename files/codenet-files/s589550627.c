#include <stdio.h>

int main(void)
{
	char moji[11] = { 0 };
	char kekka[11] = { 0 };
	int n;
	int i;
	int j=0;

	scanf("%s", moji);

	for (i = 0;i < 10;i++)
	{
		if (moji[i] == '0')
		{
			kekka[j] = '0';
			j = j + 1;
		}
		else if (moji[i] == '1')
		{
			kekka[j] = '1';
			j = j + 1;
		}
		else if (moji[i] == 'B')
		{
			if (j != 0)
			{
				j = j - 1;
			}
		}
	}
	printf("%s", kekka);

}