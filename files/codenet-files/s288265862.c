#include <stdio.h>

int main(void){
	int a,b,wa,answer;
		answer = 1;
	while((scanf("%d %d",&a,&b)) != EOF){
		wa = a+b;
		while(wa/10 > 0){
		wa /= 10;
		answer++;
		}
	}
	printf("%d\n",answer);
	
	return 0;
}