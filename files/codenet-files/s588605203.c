#include <stdio.h>

#define N 200000

int A[N];

int main() {

	int n, m, i, j;

	scanf("%d", &n);
	for (i = 0; i < n; i++) scanf("%d", &A[i]);

	int max = 0;
	int submax = 0;

	for (int j = 0; j < n; j++) {
		if (max <= A[j]) {
			submax = max;
			max = A[j];
		}
		else {
			if (submax <= A[j]) submax = A[j];
		}
	}

	for (int h = 0; h < n; h++) {
		if (A[h] == max) printf("%d\n", submax);
		else printf("%d\n", max);
	}
}