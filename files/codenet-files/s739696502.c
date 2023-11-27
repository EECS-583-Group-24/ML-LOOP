#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a, b, total;
	int count = 1;
	scanf("%d %d", &a, &b);
	total = a+b;
	while(total / 10 != 0){
		total /= 10;
		count++;
	}
	printf("%d", count);

}