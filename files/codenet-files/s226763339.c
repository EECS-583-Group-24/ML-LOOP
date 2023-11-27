#include <stdio.h>
int main() {
	long long int w,h,x,y;
	scanf("%lld", &w);
	scanf("%lld", &h);
	scanf("%lld", &x);
	scanf("%lld", &y);
	printf("%lf ", (double)w*h/2.0);
	if(w==x||x==0||h==y||y==0) printf("0");
	else if (x*2==w && y*2==h) printf("1");
	else if (x*2 == w || y*2 == h) printf("0");
	else printf("1");
}