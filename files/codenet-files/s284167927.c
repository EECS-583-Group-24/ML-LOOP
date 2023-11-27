#include <stdio.h>
int main() {
	char s[10], string[10], c;
	int ii = 0;
	scanf("%s", s);
	for (int i = 0;i < sizeof(s);i++) {
		if (s[i] != 'B') {
			c = s[i];
			string[ii] = c;//フ対策
			ii++;
		}
		else {
			if (ii > 0) ii--;
		}
	}
	string[ii] = '\0';
	printf("%s\n", string);
}