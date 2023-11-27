#include <stdio.h>
long int gcd(int x,int y){
	if(x%y!=0)
		gcd(y,x%y);
	return y;
	}
int main(){
	long int a,b;
	scanf("%d %d",&a,&b);
	printf("%ld\n",gcd(a,b));
	}
