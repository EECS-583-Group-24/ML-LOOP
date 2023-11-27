#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void) {
	int i, p;
	char s[16] = {'\0'};
	char result[16] = {'\0'};

	fgets(s, sizeof(s), stdin);
	i = 0;
	p = 0;
	while(s[i] != '\0') {
		if(s[i] != 'B') {
			result[p] = s[i];
			p += 1;
		} else {
			if(p > 0) {
				p -= 1;
			}
		}
		i += 1;
	}
	printf("%s", result);

	return 0;
}
