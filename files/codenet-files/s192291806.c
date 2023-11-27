#include<stdio.h>

int main(){
	int i;
	int a,b;
	int answer;
	while(scanf("%d %d",&a,&b)){
		a = a + b;
		answer = 1;
		while(a/10){
			a /= 10;
			answer += 1;
		}
	}
	return 0;
}