//ABC111-A
#include <stdio.h>

int main(){
	int s[3], i;
	for(i = 0; i < 3; i++){
		scanf("%1d", &s[i]);
	}
	for(i = 0; i < 3; i++){
		if(s[i] == 1){
			printf("%d", 9);
		}
		else if(s[i] == 9){
			printf("%d", 1);
		}
		else{
			printf("%d", s[i]);
		}
	}
	printf("\n");
	return 0;
}
