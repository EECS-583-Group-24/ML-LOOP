#include <stdio.h>

int		main(void)
{
	long		x, y;
	long		a, b;
	//long		tmp;
	long		rmd;
	long		i;
	long		rst;

	scanf("%ld %ld",&a, &b);
	if( a >= b )
	{
		x = a;
		y = b;
	}else
	{
		x = b;
		y = a;
	}

	rmd = x % y;
	if( rmd == 0 )
	{
		printf("%ld",y);
	}
	else
	{
		//printf("rmd=%ld\n",rmd);
		for(i=1; i<=rmd; i++)
		{
			if((( y % i) == 0) && (( rmd % i) == 0))
			{
				rst = i;
			}
		}
		printf("%ld\n",rst);
	}
}