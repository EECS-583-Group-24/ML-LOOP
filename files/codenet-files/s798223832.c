#include <stdio.h>

int main () {
	char str[11] = {0};
	char modstr[11] = {0};
	scanf("%s", str);
	
	int j = 0;
	for (int i = 0; i < 10; i++) {
		if (str[i] == '0') {
			modstr[j] = '0';				
			j = j + 1;
		}
		else if (str[i] == '1') {
			modstr[i] = '1';
			j = j + 1; 
		}
		else if (str[i] == 'B') {
			if (j != 0) {
				j = j -1;
				modstr[j] = '\0';
			}
		}
	}
	printf("%s", modstr);
	
	return 0;
}