#include <stdio.h>

int main(void)
{
	int n;
	int a[1000];
	int b;
	int c;
	
	scanf("%d", &n);
	
	for (b = 0; b < n; b++){
		scanf("%d", &a[b]);
	}
	
	for (c = b - 1; c >= 0; c--){
		if (c == 0){
		printf("%d", a[0]);
		}
		else printf("%d ",a[c]);
	}
	printf("\n");
	
	
	return (0);
}