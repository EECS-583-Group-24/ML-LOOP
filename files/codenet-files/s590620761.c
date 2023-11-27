#include <stdio.h>
int main(void){
	double s;
	long long int a,w,h,x,y;
	
	scanf("%d %d %d %d",&w,&h,&x,&y);
	
	s = w * h / 2;
	
	if(x == w/2 && y == h/2 ) a = 1;
	else a = 0;
	printf("%f %d\n",s,a);
	return 0;
}