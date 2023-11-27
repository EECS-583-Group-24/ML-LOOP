#include<stdio.h>
int main()
{
	int W,H,x,y,P;
	float R;
	scanf("%d %d %d %d",&W,&H,&x,&y);
	P = 2*(W+H)-2*(x+y);
	R = P-x;
	printf("%f\n",R);
	return 0;
}
