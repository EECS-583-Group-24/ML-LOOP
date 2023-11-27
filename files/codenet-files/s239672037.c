#include <stdio.h>
int main(){
	float w, h, x, y;
	scanf("%f %f %f %f", &w, &h, &x, &y);
	
	printf("%f.10 ", w*h/2);
	
	if(x==w/x && y==h/2){
		printf("1");
	}else
		printf("0");
	
	return 0;
}