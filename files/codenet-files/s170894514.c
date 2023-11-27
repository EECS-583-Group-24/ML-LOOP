#include<stdio.h>
int gcd(int x,int y){
	int d;
	d=(x%y);
	while(d!=0){
			x=y;
			y=d;
			d=(x%y);
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
