#include<stdio.h>

int main() {
	char S[11];
	char x[11];
	int loop1, loop2;
	loop2 = 0;
	gets(S);
	for (loop1 = 0; loop1 < 10; loop1++) {
		if (S[loop1] == '\0') {
			x[loop2] = '\0';
			break;

		}
		switch (S[loop1]) {
		case 48:
		case 49: {
			x[loop2] = S[loop1];
			loop2++;
			break;
		}
		case 66: {
			if (loop2 != 0) loop2--;
			break;
		}

		}

	}

	printf("%s\n", x);

	return 0;

}
