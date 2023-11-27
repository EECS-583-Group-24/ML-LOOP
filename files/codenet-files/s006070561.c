#include <stdio.h>
int main(void)
{
	int a,b,c;
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	if (a == 1)
	{
		a = 9;
	}
	else if (a == 9)
	{
		a = 1;
	}
	if (b == 1)
	{
		b = 9;
	}
	else if (b == 9)
	{
		b = 1;
	}
	if (c == 1)
	{
		c = 9;
	}
	else if (c == 9)
	{
		c = 1;
	}
	printf("%d%d%d", a, b, c);
	return 0;
}