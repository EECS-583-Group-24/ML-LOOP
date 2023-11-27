#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

#define pai 3.1415926535


int main(void)
{
	char s[11];
	scanf("%s", s);
	char S[100]="";
	for (int i = 0; i < strlen(s); i++) {
		if (s[i] == '0') {
			strcat(S, "0");
		}
		else if (s[i] == '1') {
			strcat(S, "1");
		}
		else {
			if (strlen(S) != 0) {
				S[strlen(S) - 1] = '\0';
			}
		}
	}
	printf("%s", S);

	return 0;


}