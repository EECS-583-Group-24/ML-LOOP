#include <stdio.h>

int main () {
	char c[4];
	scanf ("%s", c);
	for (int i=0; i<3; i++) {
		if (c[i] == '1')
			c[i] = '9';
		else if (c[i] == '9')
			c[i] = '1';
	}
	printf ("%s\n", c);
	return 0;
}