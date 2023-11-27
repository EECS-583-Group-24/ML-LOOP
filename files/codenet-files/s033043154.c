#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#define ll long long int
#define lim 100010
#define INF 1e9
#define MIN(x,y) ((x)<(y)?(x):(y))
#define MAX(x,y) ((x)<(y)?(y):(x))
#define ABS(x) ((x)>0?(x):-(x))


int main(void){
	double w,h,x,y;
	scanf("%lf%lf%lf%lf",&w,&h,&x,&y);
	double smax;
	bool hukusuu=false;
	if(w/2==x && h/2==y)hukusuu=true;
	
	smax = MIN(x,w-x)*h;
	smax = MAX(smax,MIN(y,h-y)*w);
	
	
	printf("%lf ",smax);
	if(hukusuu)printf("1");
	else printf("0");
	return 0;
}