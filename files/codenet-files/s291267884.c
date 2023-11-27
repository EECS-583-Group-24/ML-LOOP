#include <stdio.h>


int main(){
	int a,b,c,count;
	while(scanf("%d%d",&a,&b) != EOF){
		count = 1;
		c = a + b;
		while(c /10 > 0){
			count += 1;
			c /= 10;
		}
		printf("%d\n",count);
	}
	return 0;
}