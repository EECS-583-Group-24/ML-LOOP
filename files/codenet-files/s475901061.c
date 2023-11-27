#include<stdio.h>
int main(void) {
	int n;
	int num[100000];
	int i;
	int t;

	scanf("%d", &n);

	for (i = 1; i <= n; i++) {
		scanf("%d", &num[i]);
	}

	for (t = n; t >= 1; t--) {
		printf("%d ", num[t]);
		if (t == 1) {
			printf("\n");
		}
	}
	
	return 0;
}