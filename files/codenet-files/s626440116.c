#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>
#include <stdint.h>
#include <string.h>
#include <wchar.h>

#define MIN(a, b) (a < b ? a : b)
#define MAX(a, b) (a > b ? a : b)
#define ABSS(a, b) (a > b ? a - b : b - a)

int main(void) {
	char s[11];
	char ans[11];

	scanf("%s", s);

	const size_t len = strlen(s);

	size_t pos = 0;
	ans[pos] = '\0';
	for (size_t idx = 0; idx < len; idx++) {
		if (s[idx] != 'B') {
			ans[pos] = s[idx];
			ans[pos + 1] = '\0';
			pos++;
		}
		else {
			if (pos > 0) {
				ans[pos] = '\0';
				pos--;
			}
		}
	}

	puts(ans);

	return 0;
}
