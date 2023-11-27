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

	for (t = n; t >= 0; t--) {
		printf("%d ", num[t]);
		if (t == 0) {
			printf("\n");
		}
	}
	
	return 0;
}