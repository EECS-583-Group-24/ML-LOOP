#include <stdio.h>
#include <stdlib.h>

typedef struct {
	int num;
	int ord;	
} A_order;


int compare_int(const void *a, const void *b) {
    return ((A_order*)b)->num - ((A_order*)a)->num;
}

int main() {
	int N;
	scanf("%d",&N);
	A_order A[N];
	for (int i = 0; i < N; i++) {
		scanf("%d",&A[i].num);
		A[i].ord = i;
	}
	qsort(A, N, sizeof(A_order), compare_int); // 降順
	for (int i = 0; i < N; i++) {
		if (i == A[0].ord) {
			printf("%d\n",A[1].num);
		}
		else printf("%d\n",A[0].num);
	}
	return 0;
}