#include <stdio.h>

int main()
{
	double a, b, i, keta, sum;
	
	keta = 1;
	scanf("%lf %lf", &a, &b);
	
	sum = a + b;
	
	while (sum > 9){
		sum /= 10;
		keta++;
	}
	
	printf("%.0lf\n", keta);
	
	return (0);
}