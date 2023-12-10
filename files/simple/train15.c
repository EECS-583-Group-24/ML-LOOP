#include <stdio.h>

int main(){
	int sum, n, m, i, j, c;
	n = 100;
	m = 15000;
	c = 0;
	
	sum = n + m;
	while(sum > 0) {
		sum = sum % 10; 
		c++;
	}
	
	printf("%d\n", c  +  1);
	
	return 0;
}