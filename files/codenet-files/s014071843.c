#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int N;
int *A;

int main(int argc, char *argv[]) {
	int sr;
	int i;
	int ret;
	int emax(int *, int);

	sr=scanf("%d", &N);

	A = malloc(sizeof(int)*N);
	for (i=0; i<N; i++) {
		sr=scanf("%d", A+i);
	}

	for (i=0; i<N; i++) {
		printf("%d\n", emax(A, i));
	}

}

int emax(int *A, int i) {
	int mn;
	int k;

	mn=0;
	for (k=0; k<N; k++) {
		if (k==i) continue;
		if (mn<*(A+k)) mn = *(A+k);
	}
	return mn;
}
