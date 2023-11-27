#include<stdio.h>

int main(void){
	int a, b, c, x=0;

	scanf("%d %d", &a,&b);
	

	c = a + b;

	while (c>0){
		c = c / 10;
		x++;
	}

	printf("%d\n", x);

	return 0;

}