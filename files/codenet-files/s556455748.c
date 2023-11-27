#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>

int main(void){
	int i,j,sign=0;
	double s;
	
	int w,h,x,y;
	scanf("%d%d%d%d",&w,&h,&x,&y);
	
	s=(double)w*h/2;
	
	if(2*x==w&&2*y==h){
		sign=1;
	}
	
	printf("%lf %d\n",s,sign);
	
	return 0;
}