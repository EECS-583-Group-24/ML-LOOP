#include <stdio.h>

int main()
{
	int i, N, A[200001];
	scanf("%d", &N);
	for (i = 1; i <= N; i++) scanf("%d", &(A[i]));
	
	int max[2] = {};
	for (i = 1; i <= N; i++) {
		if (A[i] > max[0]) {
			max[1] = max[0];
			max[0] = A[i];
		} else if (A[i] > max[1]) max[1] = A[i];
	}
	
	for (i = 1; i <= N; i++) {
		if (A[i] != max[0]) printf("%d\n", max[0]);
		else printf("%d\n", max[1]);
	}
	fflush(stdout);
	return 0;
}