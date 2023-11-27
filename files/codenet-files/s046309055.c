#include <stdio.h>

int main(){
	long long int W,H,x,y;
	scanf("%lld%lld%lld%lld",&W,&H,&x,&y);
	printf("%lf %d",(double)W*double(H)/2,x*2==W&&y*2==H);
	return 0;	
}