#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int a, b, c,d;
	scanf("%d",&a);

	b = (a / 10)%10;
	c = a / 100;
	a = a % 10;
	if (a == 9)a = a - 8;
	else
	if (a == 1)a = a + 8;
	
	if (b == 9)b = b - 8;
	else
	if (b == 1)b = b + 8;
	
	if (c == 9) c = c - 8;
	else
    if (c == 1) c = c + 8;

	d = 100 * c + 10 * b + a;

	printf("%d", d);
	
}