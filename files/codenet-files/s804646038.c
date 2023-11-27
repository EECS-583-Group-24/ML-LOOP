#include <stdio.h>

int main(void)
{
	int x;
	int y;
	int a;
	
	scanf("%d %d", &x, &y);
	
	a = x % y;
	
	while (a != 0){
		x = y;
		y = a;
		a = x % y;
	}
	
	printf("%d\n", y);
	
	return (0);
}