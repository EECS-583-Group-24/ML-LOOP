#include <stdio.h>
int main(void) {
	int n, a[200000];
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		scanf("%d", &a[i]);

	int max = 0, keepi;
	for (int i = 0; i < n; i++) {
		if (max < a[i]) {
			max = a[i];
			keepi = i;
		}
	}

	int sec_max = 0;
	for (int i = 0; i < n; i++) {
		if (i != keepi) {
			if (sec_max < a[i])
				sec_max = a[i];
		}
	}

	for (int i = 0; i < n; i++) {
		if (a[i] == max)
			printf("%d\n", sec_max);
		else
			printf("%d\n", max);
	}
	return 0;
}