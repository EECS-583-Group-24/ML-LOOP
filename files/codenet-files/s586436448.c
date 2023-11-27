#include<stdio.h>

int main(void)
{
	int tmp,i,x,y,r;
	scanf("%d",&x);
	scanf("%d",&y);
	
	if(x<y)
	{
		tmp=x;
		x=y;
		y=tmp;
	}
	while(y>0)
	{
		r=x%y;
		x=y;
		y=r;
	}
	printf("%d\n",x);

	return 0;
	
}
