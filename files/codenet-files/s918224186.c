#include <stdio.h>

int main(){
	int sum, n, m, i, j, c;
	scanf("%d%d", &n, &m);
	
	sum = n + m;
	while(sum %= 10) c++;
	
	printf("%d\n", c  + 1);
	
	return 0;
}