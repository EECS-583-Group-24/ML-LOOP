#include <stdio.h>
int main (void)
{
	double men,syu,r;
	scanf("%lf",&r);
	if(r>0||r<10000)
	{
		men=r*r*3.1415926535;
		syu=r*2*3.1415926535;
		printf("%lf %lf\n",men,syu);
	}
	return 0;
}