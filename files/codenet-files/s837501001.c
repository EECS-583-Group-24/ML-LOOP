#include<stdio.h>

int main(void)
{
	int x, y, z;
	
	scanf("%d %d", &x, &y);
	
/*	while(x%y != 0)
	{
		if(x >= y)
		{
			z = x;
			
			x = y;
			
			y = z % x;
		}
	}
*/
	z = x%y;
	
	while(z != 0)
	{
		x = y;
		
		y = z;
		
		z = x%y;
	}
	
	printf("%d\n", y);
	
	return 0;
}
