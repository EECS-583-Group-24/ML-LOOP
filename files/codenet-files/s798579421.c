#include<stdio.h>
#define pai 3.141592653589
int main(){
	int r;
	double s, l;
	scanf("%d", &r);
	s = r * r * pai;
	l = 2.0 * r * pai;
	printf("%lf %lf", s, l);
	return 0;
}
