#include <stdio.h>

int main()
{
	double a, b, i, keta, sum;
	
	while (1){
		if (scanf("%lf %lf", &a, &b) == EOF){
			break;
		}
		keta = 1;
		
		sum = a + b;
		
		while (sum > 9){
			sum /= 10;
			keta++;
		}
		
		printf("%.0lf\n", keta);
	}
	return (0);
}