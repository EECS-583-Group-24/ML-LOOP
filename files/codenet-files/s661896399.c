#include <stdio.h>
#include <math.h>
#include <string.h>
#define pai 3.1415926535

int main(void) {
	char S[4];
	scanf("%s", S);
	char a[4];
	for (int i = 0; i < 3; i++) {
		if (S[i] == '1') {
			S[i] = '9';
		}
		else {
			S[i] = '1';
		}
	}
	
	printf("%s", S);
		return 0;
}
