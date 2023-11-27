#include <stdio.h>

int main(void){
	char str[11];

	scanf("%s", str);

	for(int i=0; str[i] != '\0'; i++) {
		if(str[i] == 'B')
			printf("\b");
		else
			printf("%c", str[i]);
	}

	return 0;
}
