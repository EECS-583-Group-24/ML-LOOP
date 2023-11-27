#include <stdio.h>

int main(void)
{
	int a, b;
	int num;
	int digit;
	int i;
	
	while (1){
		scanf("%d %d", &a, &b);
		
		num = a + b;
		digit = 0;
		while (num > 0){
			num /= 10;
			digit++;
		}
		
		printf("%d\n", digit);
	}
	
	return (0);
}