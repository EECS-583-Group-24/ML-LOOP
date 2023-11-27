#include <stdio.h>

int main(void) {
	int n;
	int i,j;
	scanf("%d", &n);
	int a[100];
	for(i=0; i<n; i++) {
		scanf("%d", &a[i]);
	}
	for(i=0; i<n; i++) {
		j=n-i-1;
		printf("%d", a[j]);
		if(i==n-1) putchar('\n');
		else putchar(' ');
	}
	return 0;
}
