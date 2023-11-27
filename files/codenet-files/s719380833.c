#include<stdio.h>

int main()
{
	int a,b,x;
	scanf("%d%d",&a,&b);
	while ((x=a%b) != 0)
	{
		
		a=b;
		b=x;
	}
	printf("%d",b);
	return 0;
}