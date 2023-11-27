/*
 * 2つの整数が入力される。それらの最大公約数を出力する。
 *
 * input
 * 147 105
 *
 * output
 * 21
 */

#include <stdio.h>

int gcd(int x, int y)
{
	int r;

	//ユークリッドの互除法
	while (y > 0) {
		r = x % y;
		x = y;
		y = r;
	}

	return x;

}

int main()
{
	int x,y;

	scanf("%d %d", &x, &y);

	if (x > y)
		printf("%d\n", gcd(x,y));
	else
		printf("%d\n", gcd(y,x));

	return 0;
}
