#include <stdio.h>

long long int FuncPutGCD(const long long int a, const long long int b);

int main(void)
{
	long long int a, b;
	int i;

	scanf("%lld %lld", &a, &b);
	printf("%lld\n", FuncPutGCD(a, b));

	return 0;
}

long long int FuncPutGCD(const long long int a, const long long int b)
{
	long long int buf[2], temp;

	if (a == b) {
		return a;
	} else if (a > b) {
		buf[0] = a;
		buf[1] = b;
	} else if (a < b) {
		buf[0] = b;
		buf[1] = a;
	}

	while ((buf[0] % buf[1]) != 0) {
		temp = buf[1];
		buf[1] = buf[0] % buf[1];
		buf[0] = temp;
	}

	return buf[1];
}