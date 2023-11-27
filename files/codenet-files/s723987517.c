#include<stdio.h>

int Digit(int a, int b) {
	int i, j = 1;
	for (i = 1; a + b < i; 10 * i) {
		j++;
	}
	return j;
}

int main(void) {
	printf("%d\n%d\n%d\n", Digit(5, 7), Digit(1, 99), Digit(1000, 999));
}