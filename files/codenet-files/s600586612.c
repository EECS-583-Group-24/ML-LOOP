#include <stdio.h>

int main(void){
	int a,b,r;
	scanf("%d %d",&a,&b);
	
	while(1){
		r = a%b;
		a = b;
		b = r;
		if(r==0)break;
	}
	printf("%d\n",r);
	return 0;
}