#include<stdio.h>

int main() {
	char s[4];
	for (int i = 0; i < 4; i++) {
		scanf("%c", &s[i]);
	}

	if (s[0] = 'B') {
		if (s[1] = 'B') {
			if (s[2] = 'B') {
				if (s[3] = 'B') {
					printf("");

				}

				else {
					printf("%c", s[3]);

				}

			}
			else {
				if (s[3] = 'B') {
					printf("");

				}

				else {
					printf("%c", s[3]);

				}
			}
		}
		else {
			if (s[2] = 'B') {
				if (s[3] = 'B') {
					printf("");

				}

				else {
					printf("%c", s[3]);

				}

			}
			else {
				if (s[3] = 'B') {
					printf("");

				}

				else {
					printf("%c", s[1]);

				}
			}
		}
	}
	else {
		if (s[1] = 'B') {
			if (s[2] = 'B') {
				if (s[3] = 'B') {
					printf("");

				}

				else {
					printf("%c", s[3]);

				}

			}
			else {
				if (s[3] = 'B') {
					printf("");

				}
				else {
					printf("%c%c", s[2], s[3]);

				}
			}
		}
		else {
			if (s[2] = 'B') {
				if (s[3] = 'B') {
					printf("");

				}

				else {
					printf("%c%c", s[0], s[3]);

				}

			}
			else {
				if (s[3] = 'B') {
					printf("%c%c", s[0], s[1]);

				}

				else {
					printf("%c%c%c%c", s[0], s[1], s[2], s[3]);

				}
			}
		}
	}
}