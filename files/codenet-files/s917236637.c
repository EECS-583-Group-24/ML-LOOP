#include <stdio.h>

int compare_long(const void *a, const void *b) {
	long *x = (long *)a;
	long *y = (long *)b;

	if(*x > *y) {
		return -1;
	} else if(*x < *y) {
		return 1;
	} else {
		return 0;
	}
}

int main() {
	long N;
	long *A, *cpy_A;
	long i;

	scanf("%ld", &N);

	A = (long *)malloc(sizeof(long) * N);
	cpy_A = (long *)malloc(sizeof(long) * N);

	for(i = 0; i < N; i++) {
		scanf("%ld", &A[i]);
	}

	memcpy(cpy_A, A, sizeof(long) * N);

	qsort(A, N, sizeof(A[0]), compare_long);
	
	for(i = 0; i < N; i++) {
		if(A[0] == cpy_A[i]) {
			printf("%ld\n", A[1]);
		} else {
			printf("%ld\n", A[0]);
		}
	}

	return 0;
}

