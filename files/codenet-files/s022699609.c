#include<stdio.h>
int gcd(int x,int y){
	int d;
	while(d!=0){
		d=(x%y);
		if(d!=0){
			x=y;
			y=d;
		}	
	}
	return y;
}
int main(){
    int x,y,d;
	scanf("%d%d",&x,&y);
	if(x>y)d=gcd(x,y);
	else if(x<=y)d=gcd(x,y);
	printf("%d\n",d);
    return 0;
}
