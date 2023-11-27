#include <stdio.h>

int main(void)
{
	int x, y, i;
	
	scanf("%d %d", &x, &y);
	
	i = x % y;
	
	while (i != 0){
		x = y;
		y = i;
		i = x % y;
	}
	
	printf("%d\n", y);
	
	return (0);
}