#include<stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main() {
	char s[4];
	for (int i = 0; i < 4; i++) {
		scanf("%c", &s[i]);
	}
	for (int i=0; i < 4; i++) {
		if (i - 1 != -1 && s[i] == 'B' && !isspace(s[i - 1])) {
			s[i - 1] == '\0';
		}
		if (i - 1 != -1 && s[i] == 'B' && isspace(s[i - 1])) {
			if (i - 2 != -1 && s[i] == 'B' && !isspace(s[i - 2])) {

				s[i - 2] == '\0';
			}
		}
		if (i - 1 != -1 && s[i] == 'B' && isspace(s[i - 1])) {
			if (i - 2 == -1){

			s[i] == '\0';
		}
		}
	}
	for (int k=0; k < 3; k++) {
		printf("%c", s[k]);
	}
}