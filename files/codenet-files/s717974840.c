#include <stdio.h>
int main(){
	double a,b,x,y;
	scanf ("%lf%lf%lf%lf",&a,&b,&x,&y);
	printf ("%lf ",a*b/2);
	if (x==a/2 && y==b/2){
		printf ("1");
		}
	else{
		printf ("0");
		}
	return 0;
	}