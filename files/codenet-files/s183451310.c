#include <stdio.h>
#include <stdlib.h>

int main() 
{
	int i;
	char num[2];
	
	fgets(num, 2, stdin);
	int n = atoi(&(num[0]));
	
	char str[n];
	fgets(str, n, stdin);
	for (i = 0; i < n; ++i) {
		if (i == n-1) {
			printf("%d\n", str[i]);
		} else {
			printf("%d ", str[n-1-i]);
		}
	}
	return 0;
}