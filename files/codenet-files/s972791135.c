#include <stdio.h>
int main(void) {
	int n, a[200000];
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		scanf("%d", &a[i]);

	int max = 0, keep;
	for (int j = 0; j < n; j++) {
		keep = a[j];
		a[j] = 0;
		for (int i = 0; i < n; i++) {
			if (max < a[i])
				max = a[i];
		}
		printf("%d\n", max);
		a[j] = keep;
		max = 0;
	}
	return 0;
}