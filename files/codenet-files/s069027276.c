#include <stdio.h>

int main(){
	int sum, n, m, c = 0;
	while(scanf("%d %d", &n, &m)!= EOF){
		while(1){
			sum %= 10;
			c++;
			if(sum == 0) break;
		}
	printf("%d\n", c  + 1);
	}
	return 0;
}