#include <stdio.h>


int main()
{	
	int a,b,digit;
	scanf("%d %d", &a, &b);
	digit = 0;


	while(a != 0){
		a = a / 10;
		++digit;
	}

	while (b != 0) {
		b = b / 10;
		++digit;
	}

	printf("%d", digit);
    return 0;
}