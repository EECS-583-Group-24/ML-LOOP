#include <stdio.h>

int main(void){
	int a,b,wa,answer;
	char itigyou[16];
	while(1){
		answer = 1;
		while(fgets(itigyou,15,stdin) != NULL){
			sscanf(itigyou," %d %d",&a, &b);
			wa = a+b;
			while(wa/10 > 0){
				wa /= 10;
				answer++;
			}
		}
		printf("%d\n",answer);
	}
	
	return 0;
}