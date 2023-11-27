#include<stdio.h>
int main(void) {
	double n, m;

	double i, j;

	scanf("%lf", &n);
	scanf("%lf", &m);

	double l[1000];

	double x, y;
	scanf("%lf", &x);
	scanf("%lf", &y);

	double menseki[2];

	double hakox1, hakox2;
	double hakoy1, hakoy2;
	hakox1 = x;
	hakox2 = n - x;

	if (hakox1 * m < hakox2 * m) {
		menseki[0] = hakox1 * m;
	}
	else {
		menseki[0] = hakox2 * m;
	}

	hakoy1 = y;
	hakoy2 = m - y;

	int saiteki = 0;
	if (n * hakoy1 < n * hakoy2) {
		menseki[1] = n * hakoy1;
	}
	else {
		menseki[1] = n * hakoy2;
	}
	double ans = 0;
	if (menseki[0] < menseki[1]) {
		ans = menseki[1];
	}
	else if (menseki[0] > menseki[1]) {
		ans = menseki[0];
	}
	else {
		ans = menseki[1];
		saiteki = 1;
	}
	if (n == x && m == y) {
		ans = n * m;
		saiteki = 0;
	}
	printf("%.6lf ", ans);
	printf("%d\n", saiteki);
	return 0;
}