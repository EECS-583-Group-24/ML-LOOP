#include <stdio.h>
#include <string.h>

#define MAX_LEN 4

int main(void)
{
	char n[MAX_LEN];
	scanf("%s", n);

	int i;
	for (i = 0; i < (int)strlen(n); i++) {
		if (n[i] == '1')
			putchar('9');
		else
			putchar('1');
	}
	puts("");
	return 0;
}
