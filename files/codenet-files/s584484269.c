#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int N;
int *A;

int main(int argc, char *argv[]) {
	int sr;
	int i;
	int ret;
	int em, em_s, ei;
	int emax(int *, int *, int *);

	sr=scanf("%d", &N);

	A = malloc(sizeof(int)*N);
	for (i=0; i<N; i++) {
		sr=scanf("%d", A+i);
	}

	em = emax(A, &em_s, &ei);

	for (i=0; i<N; i++) {
		if (i==ei) {
			printf("%d\n", em_s);
		} else {
			printf("%d\n", em);
		}
	}

}

int emax(int *A, int *em_s, int *ei) {
	int mn;
	int k;

	mn=0;
	for (k=0; k<N; k++) {
		if (mn<*(A+k)) {
			*em_s=mn;
			mn = *(A+k);
			*ei = k;
		} else {
			if (*em_s<*(A+k)) {
				*em_s = *(A+k);
			}
		}
	}
	return mn;
}
