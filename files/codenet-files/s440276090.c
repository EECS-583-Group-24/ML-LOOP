#include<stdio.h>
int main(){
	int i, a, b, c;
	while(scanf("%d%d", &a, &b) != EOF){
		i=0;
		c=a+b;
		while(c/10 > 0){
			i++;
			c=c/10;
		}
		printf("%d\n", i+1);
	}
	return 0;
}