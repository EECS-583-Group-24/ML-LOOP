#include <stdio.h> 

int main(){
	int w,h,x,y;
	scanf("%d %d %d %d",&w,&h,&x,&y);
	if(w==h){
		if(x==w/2.0){
			printf("%.6f 1",0.5*w*h);
		}
		else{
			printf("%.6f 0",0.5*w*h);
		}
	}
	else{
		printf("%.6f 0",0.5*w*h);
	}
	return 0; 
}