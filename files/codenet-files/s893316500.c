#include <stdio.h>

int main () {
	char str[15];
	char modstr[15];
	int length = 0;
	(scanf("%s", str);
	for (int i = 0; str[i] != '\0'; i++) {
		length++;
	}
	int j = 0;
	for (int i = 0; i < length; i++) {
		if (str[i] == '0') {
			modstr[j] = '0';				
			j++;
		}
		else if (str[i] == '1') {
			modstr[i] = '1';
			j++; 
		}
		else if (str[i] == 'B') {
			if (j != 0) {
				j--;
				modstr[j] = '\0';
			}
		}
	}
	printf("%s", modstr);
	
	return 0;
}