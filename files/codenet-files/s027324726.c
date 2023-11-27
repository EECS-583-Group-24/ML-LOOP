#include <stdio.h>
#include <string.h>

int main() {
	char S[11], ans[11] = {'\0'};
	int i;
	scanf("%s", S);
	
	for (i = 0; i < strlen(S); i++) {
		 if (S[i] == 'B') 
		 	ans[strlen(ans) -1] = '\0';
		 else
			ans[strlen(ans)] = S[i];
	}
	printf("%s\n", ans);
	return 0;
}