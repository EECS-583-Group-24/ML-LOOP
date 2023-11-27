#include <stdio.h>

int tiisakunaihou(int a, int b) {
	return a >= b ? a : b;
}

int N;
int A[271828];

int asumisu[271828], mizuhasu[271828];

int main(void) {
	int i;
	if (scanf("%d", &N) != 1) return 1;
	for (i = 1; i <= N; i++) {
		if (scanf("%d", &A[i]) != 1) return 1;
	}
	asumisu[0]  = 0;
	for (i = 1; i <= N; i++) {
		asumisu[i] = tiisakunaihou(asumisu[i - 1], A[i]);
	}
	mizuhasu[N + 1] = 0;
	for (i = N; i >= 1; i--) {
		mizuhasu[i] = tiisakunaihou(mizuhasu[i + 1], A[i]);
	}
	for (i = 1; i <= N; i++) {
		printf("%d\n", tiisakunaihou(asumisu[i - 1], mizuhasu[i + 1]));
	}
	return 0;
}
