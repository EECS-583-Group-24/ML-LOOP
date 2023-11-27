#include<stdio.h>

int main() {
	char s[11];
	char r[11];
	int i,n,j;
	scanf("%s", s,11);
	for (n = 0; s[n] != '\0'; n++);
	for (i = n, j = 0; i >= 0; i--){
		if (s[i] == 'B') {
			i--;
			continue;
		}
		r[j] = s[i];
		j++;
	}
	for (i = 0; i < n/2; i++) {
		char temp = r[n - i - 2];
		r[n - i - 2 ] = r[i];
		r[i] = temp;
	}
	for (i = 0; i < j; i++) printf("%c", r[i]);
	return 0;
}