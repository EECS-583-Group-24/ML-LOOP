#include <stdio.h>

int main(void)
{
	long int a, b;
	int sum;
	int digit;
	
	scanf("%d %d", &a, &b);
	
	sum = a + b;
	digit = 0;
	while (sum != 0){
		sum /= 10;
		digit++;
	}
	printf("%d\n", digit);
	
	return (0);
}