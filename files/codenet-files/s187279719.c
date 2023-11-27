#include <stdio.h> 

int main(){
	int x,y;
	double w,h;
	scanf("%lf %lf %d %d",&w,&h,&x,&y);
	if(w==h){
		if(x==w/2.0 && y == h/2.0){
			printf("%lf 1",0.5*w*h);
		}
		else{
			printf("%lf 0",0.5*w*h);
		}
	}
	else{
		printf("%lf 0",0.5*w*h);
	}
	return 0; 
}