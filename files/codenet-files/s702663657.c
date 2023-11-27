#include<stdio.h>
#include<stdlib.h>

int main()
{
	long int W, H, x, y;
	double S;

	scanf("%d", &W);
	scanf("%d", &H);
	scanf("%d", &x);
	scanf("%d", &y);

	S = W * H / 2.0;
	printf("%lf\n", S);

	if ((x == W / 2.0)&&(y == H / 2.0)) 
	{
		printf("1");
	}
	else 
	{
		printf("0");
	}
	
	return 0;
}