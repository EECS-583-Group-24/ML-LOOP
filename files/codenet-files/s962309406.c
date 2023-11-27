/* Coached by Dukkha */
#include <stdio.h>

#define N 200000

int main() {
	static int aa[N];
	int n, i, i1, i2;

	scanf("%d", &n);
	i1 = i2 = -1;
	for (i = 0; i < n; i++) {
		scanf("%d", &aa[i]);
		if (i1 == -1 || aa[i1] < aa[i])
			i2 = i1, i1 = i;
		else if (i2 == -1 || aa[i2] < aa[i])
			i2 = i;
	}
	for (i = 0; i < n; i++)
		printf("%d\n", i == i1 ? aa[i2] : aa[i1]);
	return 0;
}
