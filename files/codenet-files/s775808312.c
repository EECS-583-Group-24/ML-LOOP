#include <stdio.h>

int main(void)
{
	int a, b, sum, i;
	
	while (scanf("%d %d", &a, &b) != EOF){
		sum = a + b;
		for (i = 0; sum != 0; i++){
			sum /= 10;
		}
		
		printf("%d\n", i);
		
	}
	
	return (0);
}