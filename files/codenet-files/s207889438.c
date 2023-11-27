#include<stdio.h>

int main() {
	int n,i,j,tmp;
	int a[200001];
	int sort[200001];
	int big=2,bignum;
	scanf("%d", &n);
	for (i = 0;i < n;i++) {
		scanf("%d", &a[i]);
		sort[i] = a[i];
		if (a[i] >= big) {
			big = a[i];
			bignum = i;
		}
	}

	for (i = 0; i < n; ++i) {
		for (j = i + 1; j < n; ++j) {
			if (sort[i] > sort[j]) {
				tmp = sort[i];
				sort[i] = sort[j];
				sort[j] = tmp;
			}
		}
	}

	for (i = 0;i < n;i++) {
		if (bignum != i) {
			printf("%d\n", sort[n - 1]);
		}
		else {
			printf("%d\n", sort[n - 2]);
		}

	}

	return 0;
}