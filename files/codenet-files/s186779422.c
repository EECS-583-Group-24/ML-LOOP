#include <stdio.h>
int main(void) {
	int i, j, n, m1, m2, a[200000];
	m1 = 0;
	m2 = 0;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	for (i = 0; i < n; i++) {
		if (m1 < a[i]) {
			m1 = a[i];
		}
	}
	for (j = 0; j < n; j++) {
		if (m1 != a[j]) {
			if (m2 < a[j]) {
				m2 = a[j];
			}
		}
	}
	for (i = 0; i < n; i++) {
		if (m1 == a[i]) {
			printf("%d\n", m2);
		}
		else {
			printf("%d\n", m1);
		}
	}
	return 0;
}