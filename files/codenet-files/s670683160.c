#include<stdio.h>

int main(){

	int x,y,temp,gcd;

	scanf("%d %d",&x,&y);

	if(x>=y){
		while(x%y){
			x=x%y;
			temp=x;
			x=y;
			y=temp;
		}
		gcd=y;
	}else if(y>x){
		while(x%y){
			y=y%x;
			temp=x;
			x=y;
			y=temp;
		}
		gcd=x
	}
	printf("%d\n",gcd);

	return 0;
}