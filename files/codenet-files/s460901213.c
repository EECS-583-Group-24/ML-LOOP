#include <stdio.h>

int main(void)
{
	int r;
	float p,a,b;
	scanf("%d",&r);
	p=3.14159265;
	a=r*r*p;
	b=2*p*r;
	printf("%2.6f %2.6f\n",a,b);
	return 0;
}