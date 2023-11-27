#include <stdio.h>

int main(void)
{
	int a;
	int b;
	int sum;
	int count;
	
	count = 0;
	
	scanf("%d %d", &a, &b);
	sum = a + b;
	do {
		sum /= 10;
		count++;
	}while (sum != 0);
	
	printf("%d\n", count);
	
	return (0);
}