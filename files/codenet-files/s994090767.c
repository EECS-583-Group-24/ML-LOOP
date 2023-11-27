#include "stdio.h"

long long gcd(long long a,long long b){
	return b==0?a:gcd(b,a%b);
}

int main(){
	long long x,y;
	scanf("%lld %lld",&x,&y);
	printf("%lld\n",gcd(x,y));
	return 0;
}

