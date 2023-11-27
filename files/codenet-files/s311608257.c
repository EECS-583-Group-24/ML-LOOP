#include<stdio.h>
int main(){
	double a,b,c;
	scanf("%lf",&a);
	b=(double)a*(double)a*(double)3.14159265358979;
	c=(double)a*(double)2*(double)3.14159265358979;
	printf("%f %f\n",b,c);
	return 0;
}