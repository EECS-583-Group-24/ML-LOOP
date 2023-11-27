include <stdio.h>

int main(void)
{
	int a, b, c;
	int count=1;

	scanf("%d %d", &a, &b);
	
	c = a + b;
	while(1)
	{
		c = c/10;
		if(c > 0)
			count++;
		else
			break;
	}
	
	printf("%d\n", count);
	
	return 0;
}