#include <stdio.h>
#include <string.h>
int main() {
	char s[11], ans[11] = "\0";
	int pt = 0;
	scanf("%s", s);
	for (int i = 0; i < strlen(s); i++) {
		if (s[i] == '0') {
			ans[pt] = '0';
			pt++;
		} else if (s[i] == '1') {
			ans[pt] = '1';
			pt++;
		} else {
			pt--;
			if (pt < 0)
				pt = 0;
			ans[pt] = '\0';
		}
	}
	printf("%s\n", ans);
	return 0;
}