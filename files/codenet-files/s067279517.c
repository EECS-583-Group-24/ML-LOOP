#include <stdio.h>

int main(void)
{
	int a, b;
	int sum;
	int keta;
	
	while (scanf("%d %d", &a, &b) != EOF){
		sum = a + b;
		
		keta = 0;
		while (sum){
			sum /= 10;
			keta++;
		}
		printf("%d\n", keta);
	}
	
	return (0);
}