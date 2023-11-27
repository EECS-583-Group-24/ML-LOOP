#include  <stdio.h>
int main (void)
{
	int a = 0,b = 0,c = 0,i = 0;

	scanf("%d %d",&a,&b);
	
	c = a + b;
	
	do{
		c = c / 10;
		i++;
	}while(c > 0);
	
	printf("%d",i);
	
	
	return(0);
}