#include <stdio.h>

int main(void)
{
	int a, b;
	int digits;
	int i;
	
	for (i = 0 ;i < 200; i++){
		digits = 0;
		scanf("%d %d", &a, &b);
		a += b;
		while (a > 0){
			a /= 10;
			digits++;
		}
		printf("%d\n", digits);
	}
	
	return (0);
}