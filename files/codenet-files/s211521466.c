#include<stdio.h>
main()
{double w,h,x,y,a1,a2,a3,a4;
	scanf("%lf %lf %lf %lf",&w,&h,&x,&y);
	a1=x*h;
	a2=(w-x)*h;
	a3=w*y;
	a4=(h-y)*w;

	if(a1==a2)
	{
	if(a1==a3&&a1==a4)
	printf("%lf 1",a1);
	else 
	printf("%lf 0",a1);
}

if(a1!=a2)
	if((a3==a4))
	{
	printf("%lf 0",a3);
}
}